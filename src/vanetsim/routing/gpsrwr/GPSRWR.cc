//
// Author: Joanne Skiles
//

#include <algorithm>

#include "inet/common/INETUtils.h"
#include "inet/common/IProtocolRegistrationListener.h"
#include "inet/common/ModuleAccess.h"
#include "inet/common/ProtocolTag_m.h"
#include "inet/common/lifecycle/ModuleOperations.h"
#include "inet/linklayer/common/InterfaceTag_m.h"
#include "inet/networklayer/common/HopLimitTag_m.h"
#include "inet/networklayer/common/IpProtocolId_m.h"
#include "inet/networklayer/common/L3AddressTag_m.h"
#include "inet/networklayer/common/L3Tools.h"
#include "inet/networklayer/common/NextHopAddressTag_m.h"
#include "inet/networklayer/contract/IInterfaceTable.h"
#include "vanetsim/routing/gpsrwr/GPSRWR.h"

#ifdef WITH_IPv4
#include "inet/networklayer/ipv4/Ipv4Header_m.h"
#endif

#ifdef WITH_IPv6
#include "inet/networklayer/ipv6/Ipv6ExtensionHeaders_m.h"
#include "inet/networklayer/ipv6/Ipv6InterfaceData.h"
#endif

#ifdef WITH_NEXTHOP
#include "inet/networklayer/nexthop/NextHopForwardingHeader_m.h"
#endif

namespace inet {

Define_Module(GPSRWR);

static inline double determinant(double a1, double a2, double b1, double b2)
{
    return a1 * b2 - a2 * b1;
}

GPSRWR::GPSRWR()
{
}

GPSRWR::~GPSRWR()
{
    cancelAndDelete(beaconTimer);
    cancelAndDelete(purgeNeighborsTimer);
}

//
// module interface
//

void GPSRWR::initialize(int stage)
{
    if (stage == INITSTAGE_ROUTING_PROTOCOLS)
        addressType = getSelfAddress().getAddressType();

    RoutingProtocolBase::initialize(stage);

    if (stage == INITSTAGE_LOCAL) {
        // GPSRWR parameters
        const char *planarizationModeString = par("planarizationMode");
        if (!strcmp(planarizationModeString, ""))
            planarizationMode = GPSRWR_NO_PLANARIZATION;
        else if (!strcmp(planarizationModeString, "GG"))
            planarizationMode = GPSRWR_GG_PLANARIZATION;
        else if (!strcmp(planarizationModeString, "RNG"))
            planarizationMode = GPSRWR_RNG_PLANARIZATION;
        else
            throw cRuntimeError("Unknown planarization mode");
        interfaces = par("interfaces");
        beaconInterval = par("beaconInterval");
        maxJitter = par("maxJitter");
        neighborValidityInterval = par("neighborValidityInterval");
        displayBubbles = par("displayBubbles");
        // context
        host = getContainingNode(this);
        interfaceTable = getModuleFromPar<IInterfaceTable>(par("interfaceTableModule"), this);
        outputInterface = par("outputInterface");
        mobility = check_and_cast<IMobility *>(host->getSubmodule("mobility"));
        routingTable = getModuleFromPar<IRoutingTable>(par("routingTableModule"), this);
        networkProtocol = getModuleFromPar<INetfilter>(par("networkProtocolModule"), this);
        // internal
        beaconTimer = new cMessage("BeaconTimer");
        purgeNeighborsTimer = new cMessage("PurgeNeighborsTimer");
        // packet size
        positionByteLength = par("positionByteLength");

        losRange = par("losRange");
        VelocityWeight = par("VelocityWeight");
        accelerationWeight = par("accelerationWeight");
        directionWeight = par("directionWeight");
        linkQualityWeight = par("linkQualityWeight");
        // KLUDGE: implement position registry protocol
        globalPositionTable.clear();
    }
    else if (stage == INITSTAGE_ROUTING_PROTOCOLS) {
        registerService(Protocol::manet, nullptr, gate("ipIn"));
        registerProtocol(Protocol::manet, gate("ipOut"), nullptr);
        host->subscribe(linkBrokenSignal, this);
        networkProtocol->registerHook(0, this);
        WATCH(neighborPositionTable);
    }
}

void GPSRWR::handleMessageWhenUp(cMessage *message)
{
    if (message->isSelfMessage())
        processSelfMessage(message);
    else
        processMessage(message);
}

//
// handling messages
//

void GPSRWR::processSelfMessage(cMessage *message)
{
    if (message == beaconTimer)
        processBeaconTimer();
    else if (message == purgeNeighborsTimer)
        processPurgeNeighborsTimer();
    else
        throw cRuntimeError("Unknown self message");
}

void GPSRWR::processMessage(cMessage *message)
{
    if (auto pk = dynamic_cast<Packet *>(message))
        processUdpPacket(pk);
    else
        throw cRuntimeError("Unknown message");
}

//
// beacon timers
//

void GPSRWR::scheduleBeaconTimer()
{
    EV_DEBUG << "Scheduling beacon timer" << endl;
    scheduleAt(simTime() + beaconInterval + uniform(-1, 1) * maxJitter, beaconTimer);
}

void GPSRWR::processBeaconTimer()
{
    EV_DEBUG << "Processing beacon timer" << endl;
    const L3Address selfAddress = getSelfAddress();
    if (!selfAddress.isUnspecified()) {
        sendBeacon(createBeacon());
        storeSelfPositionInGlobalRegistry();
    }
    scheduleBeaconTimer();
    schedulePurgeNeighborsTimer();
}

//
// handling purge neighbors timers
//

void GPSRWR::schedulePurgeNeighborsTimer()
{
    EV_DEBUG << "Scheduling purge neighbors timer" << endl;
    simtime_t nextExpiration = getNextNeighborExpiration();
    if (nextExpiration == SimTime::getMaxTime()) {
        if (purgeNeighborsTimer->isScheduled())
            cancelEvent(purgeNeighborsTimer);
    }
    else {
        if (!purgeNeighborsTimer->isScheduled())
            scheduleAt(nextExpiration, purgeNeighborsTimer);
        else {
            if (purgeNeighborsTimer->getArrivalTime() != nextExpiration) {
                cancelEvent(purgeNeighborsTimer);
                scheduleAt(nextExpiration, purgeNeighborsTimer);
            }
        }
    }
}

void GPSRWR::processPurgeNeighborsTimer()
{
    EV_DEBUG << "Processing purge neighbors timer" << endl;
    purgeNeighbors();
    schedulePurgeNeighborsTimer();
}

//
// handling UDP packets
//

void GPSRWR::sendUdpPacket(Packet *packet)
{
    send(packet, "ipOut");
}

void GPSRWR::processUdpPacket(Packet *packet)
{
    packet->popAtFront<UdpHeader>();
    processBeacon(packet);
    schedulePurgeNeighborsTimer();
}

//
// handling beacons
//

const Ptr<GPSRWRBeacon> GPSRWR::createBeacon()
{
    const auto& beacon = makeShared<GPSRWRBeacon>();
    beacon->setAddress(getSelfAddress());
    beacon->setPosition(mobility->getCurrentPosition());
    beacon->setVelocity(mobility->getCurrentVelocity());
    beacon->setAcceleration(mobility->getCurrentAcceleration());
    beacon->setDirection(mobility->getCurrentAngularPosition());
    beacon->setChunkLength(B(getSelfAddress().getAddressType()->getAddressByteLength() + positionByteLength));
    return beacon;
}

void GPSRWR::sendBeacon(const Ptr<GPSRWRBeacon>& beacon)
{
    EV_INFO << "Sending beacon: address = " << beacon->getAddress() << ", position = " << beacon->getPosition() << endl;
    Packet *udpPacket = new Packet("GPSRBeacon");
    udpPacket->insertAtBack(beacon);
    auto udpHeader = makeShared<UdpHeader>();
    udpHeader->setSourcePort(GPSRWR_UDP_PORT);
    udpHeader->setDestinationPort(GPSRWR_UDP_PORT);
    udpHeader->setCrcMode(CRC_DISABLED);
    udpPacket->insertAtFront(udpHeader);
    auto addresses = udpPacket->addTag<L3AddressReq>();
    addresses->setSrcAddress(getSelfAddress());
    addresses->setDestAddress(addressType->getLinkLocalManetRoutersMulticastAddress());
    udpPacket->addTag<HopLimitReq>()->setHopLimit(255);
    udpPacket->addTag<PacketProtocolTag>()->setProtocol(&Protocol::manet);
    udpPacket->addTag<DispatchProtocolReq>()->setProtocol(addressType->getNetworkProtocol());
    sendUdpPacket(udpPacket);
}

void GPSRWR::processBeacon(Packet *packet)
{
    const auto& beacon = packet->peekAtFront<GPSRWRBeacon>();
    const auto& address = beacon->getAddress();
    EV_INFO << "Processing beacon: address = " << address << ", position = " << beacon->getPosition() << endl;
    neighborPositionTable.setVelocity(address, beacon->getVelocity());
    neighborPositionTable.setAcceleration(address, beacon->getAcceleration());
    neighborPositionTable.setDirection(address, beacon->getDirection());
    neighborPositionTable.setPosition(address, beacon->getPosition());
    delete packet;
}
//
// handling packets
//

GPSRWROption *GPSRWR::createGPSRWROption(L3Address destination)
{
    GPSRWROption *gpsrwrOption = new GPSRWROption();
    gpsrwrOption->setRoutingMode(GPSRWR_GREEDY_ROUTING);
    gpsrwrOption->setDestinationPosition(lookupPositionInGlobalRegistry(destination));
    gpsrwrOption->setLength(computeOptionLength(gpsrwrOption));
    return gpsrwrOption;
}

int GPSRWR::computeOptionLength(GPSRWROption *option)
{
    // routingMode
    int routingModeBytes = 1;
    // destinationPosition, perimeterRoutingStartPosition, perimeterRoutingForwardPosition
    int positionsBytes = 3 * positionByteLength;
    // currentFaceFirstSenderAddress, currentFaceFirstReceiverAddress, senderAddress
    int addressesBytes = 3 * getSelfAddress().getAddressType()->getAddressByteLength();
    // type and length
    int tlBytes = 1 + 1;

    return tlBytes + routingModeBytes + positionsBytes + addressesBytes;
}

//
// configuration
//

void GPSRWR::configureInterfaces()
{
    // join multicast groups
    cPatternMatcher interfaceMatcher(interfaces, false, true, false);
    for (int i = 0; i < interfaceTable->getNumInterfaces(); i++) {
        InterfaceEntry *interfaceEntry = interfaceTable->getInterface(i);
        if (interfaceEntry->isMulticast() && interfaceMatcher.matches(interfaceEntry->getInterfaceName()))
            interfaceEntry->joinMulticastGroup(addressType->getLinkLocalManetRoutersMulticastAddress());
    }
}

//
// position
//

// KLUDGE: implement position registry protocol
GPSRWRPositionTable GPSRWR::globalPositionTable;

Coord GPSRWR::lookupPositionInGlobalRegistry(const L3Address& address) const
{
    // KLUDGE: implement position registry protocol
    return globalPositionTable.getPosition(address);
}

void GPSRWR::storePositionInGlobalRegistry(const L3Address& address, const Coord& position) const
{
    // KLUDGE: implement position registry protocol
    globalPositionTable.setPosition(address, position);
}

void GPSRWR::storeSelfPositionInGlobalRegistry() const
{
    auto selfAddress = getSelfAddress();
    if (!selfAddress.isUnspecified())
        storePositionInGlobalRegistry(selfAddress, mobility->getCurrentPosition());
}

Coord GPSRWR::computeIntersectionInsideLineSegments(Coord& begin1, Coord& end1, Coord& begin2, Coord& end2) const
{
    // NOTE: we must explicitly avoid computing the intersection points inside due to double instability
    if (begin1 == begin2 || begin1 == end2 || end1 == begin2 || end1 == end2)
        return Coord::NIL;
    else {
        double x1 = begin1.x;
        double y1 = begin1.y;
        double x2 = end1.x;
        double y2 = end1.y;
        double x3 = begin2.x;
        double y3 = begin2.y;
        double x4 = end2.x;
        double y4 = end2.y;
        double a = determinant(x1, y1, x2, y2);
        double b = determinant(x3, y3, x4, y4);
        double c = determinant(x1 - x2, y1 - y2, x3 - x4, y3 - y4);
        double x = determinant(a, x1 - x2, b, x3 - x4) / c;
        double y = determinant(a, y1 - y2, b, y3 - y4) / c;
        if ((x <= x1 && x <= x2) || (x >= x1 && x >= x2) || (x <= x3 && x <= x4) || (x >= x3 && x >= x4) ||
            (y <= y1 && y <= y2) || (y >= y1 && y >= y2) || (y <= y3 && y <= y4) || (y >= y3 && y >= y4))
            return Coord::NIL;
        else
            return Coord(x, y, 0);
    }
}

Coord GPSRWR::getNeighborPosition(const L3Address& address) const
{
    return neighborPositionTable.getPosition(address);
}

//
// angle
//

double GPSRWR::getVectorAngle(Coord vector) const
{
    ASSERT(vector != Coord::ZERO);
    double angle = atan2(-vector.y, vector.x);
    if (angle < 0)
        angle += 2 * M_PI;
    return angle;
}

double GPSRWR::getNeighborAngle(const L3Address& address) const
{
    return getVectorAngle(getNeighborPosition(address) - mobility->getCurrentPosition());
}

//
// address
//

std::string GPSRWR::getHostName() const
{
    return host->getFullName();
}

L3Address GPSRWR::getSelfAddress() const
{
    //TODO choose self address based on a new 'interfaces' parameter
    L3Address ret = routingTable->getRouterIdAsGeneric();
#ifdef WITH_IPv6
    if (ret.getType() == L3Address::IPv6) {
        for (int i = 0; i < interfaceTable->getNumInterfaces(); i++) {
            InterfaceEntry *ie = interfaceTable->getInterface(i);
            if ((!ie->isLoopback())) {
                if (auto ipv6Data = ie->findProtocolData<Ipv6InterfaceData>()) {
                    ret = ipv6Data->getPreferredAddress();
                    break;
                }
            }
        }
    }
#endif
    return ret;
}

L3Address GPSRWR::getSenderNeighborAddress(const Ptr<const NetworkHeaderBase>& networkHeader) const
{
    const GPSRWROption *gpsrwrOption = getGPSRWROptionFromNetworkDatagram(networkHeader);
    return gpsrwrOption->getSenderAddress();
}

//
// neighbor
//

simtime_t GPSRWR::getNextNeighborExpiration()
{
    simtime_t oldestPosition = neighborPositionTable.getOldestPosition();
    if (oldestPosition == SimTime::getMaxTime())
        return oldestPosition;
    else
        return oldestPosition + neighborValidityInterval;
}

void GPSRWR::purgeNeighbors()
{
    neighborPositionTable.removeOldPositions(simTime() - neighborValidityInterval);
}

std::vector<L3Address> GPSRWR::getPlanarNeighbors() const
{
    std::vector<L3Address> planarNeighbors;
    std::vector<L3Address> neighborAddresses = neighborPositionTable.getAddresses();
    Coord selfPosition = mobility->getCurrentPosition();
    for (auto it = neighborAddresses.begin(); it != neighborAddresses.end(); it++) {
        auto neighborAddress = *it;
        Coord neighborPosition = neighborPositionTable.getPosition(neighborAddress);
        if (planarizationMode == GPSRWR_NO_PLANARIZATION)
            return neighborAddresses;
        else if (planarizationMode == GPSRWR_RNG_PLANARIZATION) {
            double neighborDistance = (neighborPosition - selfPosition).length();
            for (auto & witnessAddress : neighborAddresses) {
                Coord witnessPosition = neighborPositionTable.getPosition(witnessAddress);
                double witnessDistance = (witnessPosition - selfPosition).length();
                double neighborWitnessDistance = (witnessPosition - neighborPosition).length();
                if (neighborAddress == witnessAddress)
                    continue;
                else if (neighborDistance > std::max(witnessDistance, neighborWitnessDistance))
                    goto eliminate;
            }
        }
        else if (planarizationMode == GPSRWR_GG_PLANARIZATION) {
            Coord middlePosition = (selfPosition + neighborPosition) / 2;
            double neighborDistance = (neighborPosition - middlePosition).length();
            for (auto & witnessAddress : neighborAddresses) {
                Coord witnessPosition = neighborPositionTable.getPosition(witnessAddress);
                double witnessDistance = (witnessPosition - middlePosition).length();
                if (neighborAddress == witnessAddress)
                    continue;
                else if (witnessDistance < neighborDistance)
                    goto eliminate;
            }
        }
        else
            throw cRuntimeError("Unknown planarization mode");
        planarNeighbors.push_back(*it);
      eliminate:;
    }
    return planarNeighbors;
}

std::vector<L3Address> GPSRWR::getPlanarNeighborsCounterClockwise(double startAngle) const
{
    std::vector<L3Address> neighborAddresses = getPlanarNeighbors();
    std::sort(neighborAddresses.begin(), neighborAddresses.end(), [&](const L3Address& address1, const L3Address& address2) {
        // NOTE: make sure the neighbor at startAngle goes to the end
        auto angle1 = getNeighborAngle(address1) - startAngle;
        auto angle2 = getNeighborAngle(address2) - startAngle;
        if (angle1 <= 0)
            angle1 += 2 * M_PI;
        if (angle2 <= 0)
            angle2 += 2 * M_PI;
        return angle1 < angle2;
    });
    return neighborAddresses;
}

//
// next hop
//

L3Address GPSRWR::findNextHop(const L3Address& destination, GPSRWROption *gpsrwrOption)
{
    switch (gpsrwrOption->getRoutingMode()) {
        case GPSRWR_GREEDY_ROUTING: return findGreedyRoutingNextHop(destination, gpsrwrOption);
        case GPSRWR_PERIMETER_ROUTING: return findPerimeterRoutingNextHop(destination, gpsrwrOption);
        default: throw cRuntimeError("Unknown routing mode");
    }
}

L3Address GPSRWR::findGreedyRoutingNextHop(const L3Address& destination, GPSRWROption *gpsrwrOption)
{
    EV_DEBUG << "Finding next hop using greedy routing: destination = " << destination << endl;
    L3Address selfAddress = getSelfAddress();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord destinationPosition = gpsrwrOption->getDestinationPosition();
    double bestDistance = (destinationPosition - selfPosition).length();
    L3Address bestNeighbor;
    std::vector<L3Address> neighborAddresses = neighborPositionTable.getAddresses();
    for (auto& neighborAddress: neighborAddresses) {
        Coord neighborPosition = neighborPositionTable.getPosition(neighborAddress);
        double neighborDistance = (destinationPosition - neighborPosition).length();
        if (neighborDistance < bestDistance) {
            bestDistance = neighborDistance;
            bestNeighbor = neighborAddress;
        }
    }
    if (bestNeighbor.isUnspecified()) {
        EV_DEBUG << "Switching to perimeter routing: destination = " << destination << endl;
        if (displayBubbles && hasGUI())
            getContainingNode(host)->bubble("Switching to perimeter routing");
        gpsrwrOption->setRoutingMode(GPSRWR_PERIMETER_ROUTING);
        gpsrwrOption->setPerimeterRoutingStartPosition(selfPosition);
        gpsrwrOption->setPerimeterRoutingForwardPosition(selfPosition);
        gpsrwrOption->setCurrentFaceFirstSenderAddress(selfAddress);
        gpsrwrOption->setCurrentFaceFirstReceiverAddress(L3Address());
        return findPerimeterRoutingNextHop(destination, gpsrwrOption);
    }
    else
        return bestNeighbor;
}

L3Address GPSRWR::findPerimeterRoutingNextHop(const L3Address& destination, GPSRWROption *gpsrwrOption)
{
    EV_DEBUG << "Finding next hop using perimeter routing: destination = " << destination << endl;
    L3Address selfAddress = getSelfAddress();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord perimeterRoutingStartPosition = gpsrwrOption->getPerimeterRoutingStartPosition();
    Coord destinationPosition = gpsrwrOption->getDestinationPosition();
    double selfDistance = (destinationPosition - selfPosition).length();
    double perimeterRoutingStartDistance = (destinationPosition - perimeterRoutingStartPosition).length();
    if (selfDistance < perimeterRoutingStartDistance) {
        EV_DEBUG << "Switching to greedy routing: destination = " << destination << endl;
        if (displayBubbles && hasGUI())
            getContainingNode(host)->bubble("Switching to greedy routing");
        gpsrwrOption->setRoutingMode(GPSRWR_GREEDY_ROUTING);
        gpsrwrOption->setPerimeterRoutingStartPosition(Coord());
        gpsrwrOption->setPerimeterRoutingForwardPosition(Coord());
        gpsrwrOption->setCurrentFaceFirstSenderAddress(L3Address());
        gpsrwrOption->setCurrentFaceFirstReceiverAddress(L3Address());
        return findGreedyRoutingNextHop(destination, gpsrwrOption);
    }
    else {
        const L3Address& firstSenderAddress = gpsrwrOption->getCurrentFaceFirstSenderAddress();
        const L3Address& firstReceiverAddress = gpsrwrOption->getCurrentFaceFirstReceiverAddress();
        auto senderNeighborAddress = gpsrwrOption->getSenderAddress();
        auto neighborAngle = senderNeighborAddress.isUnspecified() ? getVectorAngle(destinationPosition - mobility->getCurrentPosition()) : getNeighborAngle(senderNeighborAddress);
        L3Address selectedNeighborAddress;
        std::vector<L3Address> neighborAddresses = getPlanarNeighborsCounterClockwise(neighborAngle);
        for (auto& neighborAddress : neighborAddresses) {
            Coord neighborPosition = getNeighborPosition(neighborAddress);
            Coord intersection = computeIntersectionInsideLineSegments(perimeterRoutingStartPosition, destinationPosition, selfPosition, neighborPosition);
            if (std::isnan(intersection.x)) {
                selectedNeighborAddress = neighborAddress;
                break;
            }
            else {
                EV_DEBUG << "Edge to next hop intersects: intersection = " << intersection << ", nextNeighbor = " << selectedNeighborAddress << ", firstSender = " << firstSenderAddress << ", firstReceiver = " << firstReceiverAddress << ", destination = " << destination << endl;
                gpsrwrOption->setCurrentFaceFirstSenderAddress(selfAddress);
                gpsrwrOption->setCurrentFaceFirstReceiverAddress(L3Address());
                gpsrwrOption->setPerimeterRoutingForwardPosition(intersection);
            }
        }
        if (selectedNeighborAddress.isUnspecified()) {
            EV_DEBUG << "No suitable planar graph neighbor found in perimeter routing: firstSender = " << firstSenderAddress << ", firstReceiver = " << firstReceiverAddress << ", destination = " << destination << endl;
            return L3Address();
        }
        else if (firstSenderAddress == selfAddress && firstReceiverAddress == selectedNeighborAddress) {
            EV_DEBUG << "End of perimeter reached: firstSender = " << firstSenderAddress << ", firstReceiver = " << firstReceiverAddress << ", destination = " << destination << endl;
            if (displayBubbles && hasGUI())
                getContainingNode(host)->bubble("End of perimeter reached");
            return L3Address();
        }
        else {
            if (gpsrwrOption->getCurrentFaceFirstReceiverAddress().isUnspecified())
                gpsrwrOption->setCurrentFaceFirstReceiverAddress(selectedNeighborAddress);
            return selectedNeighborAddress;
        }
    }
}

//
// routing
//

INetfilter::IHook::Result GPSRWR::routeDatagram(Packet *datagram, GPSRWROption *gpsrwrOption)
{
    const auto& networkHeader = getNetworkProtocolHeader(datagram);
    const L3Address& source = networkHeader->getSourceAddress();
    const L3Address& destination = networkHeader->getDestinationAddress();
    EV_INFO << "Finding next hop: source = " << source << ", destination = " << destination << endl;
    auto nextHop = findNextHop(destination, gpsrwrOption);
    datagram->addTagIfAbsent<NextHopAddressReq>()->setNextHopAddress(nextHop);
    if (nextHop.isUnspecified()) {
        EV_WARN << "No next hop found, dropping packet: source = " << source << ", destination = " << destination << endl;
        if (displayBubbles && hasGUI())
            getContainingNode(host)->bubble("No next hop found, dropping packet");
        return DROP;
    }
    else {
        EV_INFO << "Next hop found: source = " << source << ", destination = " << destination << ", nextHop: " << nextHop << endl;
        gpsrwrOption->setSenderAddress(getSelfAddress());
        auto interfaceEntry = CHK(interfaceTable->findInterfaceByName(outputInterface));
        datagram->addTagIfAbsent<InterfaceReq>()->setInterfaceId(interfaceEntry->getInterfaceId());
        return ACCEPT;
    }
}

void GPSRWR::setGPSRWROptionOnNetworkDatagram(Packet *packet, const Ptr<const NetworkHeaderBase>& networkHeader, GPSRWROption *gpsrwrOption)
{
    packet->trimFront();
#ifdef WITH_IPv4
    if (dynamicPtrCast<const Ipv4Header>(networkHeader)) {
        auto ipv4Header = removeNetworkProtocolHeader<Ipv4Header>(packet);
        gpsrwrOption->setType(IPOPTION_TLV_GPSR);
        B oldHlen = ipv4Header->calculateHeaderByteLength();
        ASSERT(ipv4Header->getHeaderLength() == oldHlen);
        ipv4Header->addOption(gpsrwrOption);
        B newHlen = ipv4Header->calculateHeaderByteLength();
        ipv4Header->setHeaderLength(newHlen);
        ipv4Header->addChunkLength(newHlen - oldHlen);
        ipv4Header->setTotalLengthField(ipv4Header->getTotalLengthField() + newHlen - oldHlen);
        insertNetworkProtocolHeader(packet, Protocol::ipv4, ipv4Header);
    }
    else
#endif
#ifdef WITH_IPv6
    if (dynamicPtrCast<const Ipv6Header>(networkHeader)) {
        auto ipv6Header = removeNetworkProtocolHeader<Ipv6Header>(packet);
        gpsrwrOption->setType(IPv6TLVOPTION_TLV_GPSR);
        B oldHlen = ipv6Header->calculateHeaderByteLength();
        Ipv6HopByHopOptionsHeader *hdr = check_and_cast_nullable<Ipv6HopByHopOptionsHeader *>(ipv6Header->findExtensionHeaderByTypeForUpdate(IP_PROT_IPv6EXT_HOP));
        if (hdr == nullptr) {
            hdr = new Ipv6HopByHopOptionsHeader();
            hdr->setByteLength(B(8));
            ipv6Header->addExtensionHeader(hdr);
        }
        hdr->getTlvOptionsForUpdate().insertTlvOption(gpsrwrOption);
        hdr->setByteLength(B(utils::roundUp(2 + B(hdr->getTlvOptions().getLength()).get(), 8)));
        B newHlen = ipv6Header->calculateHeaderByteLength();
        ipv6Header->addChunkLength(newHlen - oldHlen);
        insertNetworkProtocolHeader(packet, Protocol::ipv6, ipv6Header);
    }
    else
#endif
#ifdef WITH_NEXTHOP
    if (dynamicPtrCast<const NextHopForwardingHeader>(networkHeader)) {
        auto nextHopHeader = removeNetworkProtocolHeader<NextHopForwardingHeader>(packet);
        gpsrwrOption->setType(NEXTHOP_TLVOPTION_TLV_GPSR);
        int oldHlen = nextHopHeader->getTlvOptions().getLength();
        nextHopHeader->getTlvOptionsForUpdate().insertTlvOption(gpsrwrOption);
        int newHlen = nextHopHeader->getTlvOptions().getLength();
        nextHopHeader->addChunkLength(B(newHlen - oldHlen));
        insertNetworkProtocolHeader(packet, Protocol::nextHopForwarding, nextHopHeader);
    }
    else
#endif
    {
    }
}

const GPSRWROption *GPSRWR::findGPSRWROptionInNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const
{
    const GPSRWROption *gpsrwrOption = nullptr;

#ifdef WITH_IPv4
    if (auto ipv4Header = dynamicPtrCast<const Ipv4Header>(networkHeader)) {
        gpsrwrOption = check_and_cast_nullable<const GPSRWROption *>(ipv4Header->findOptionByType(IPOPTION_TLV_GPSR));
    }
    else
#endif
#ifdef WITH_IPv6
    if (auto ipv6Header = dynamicPtrCast<const Ipv6Header>(networkHeader)) {
        const Ipv6HopByHopOptionsHeader *hdr = check_and_cast_nullable<const Ipv6HopByHopOptionsHeader *>(ipv6Header->findExtensionHeaderByType(IP_PROT_IPv6EXT_HOP));
        if (hdr != nullptr) {
            int i = (hdr->getTlvOptions().findByType(IPv6TLVOPTION_TLV_GPSR));
            if (i >= 0)
                gpsrwrOption = check_and_cast<const GPSRWROption *>(hdr->getTlvOptions().getTlvOption(i));
        }
    }
    else
#endif
#ifdef WITH_NEXTHOP
    if (auto nextHopHeader = dynamicPtrCast<const NextHopForwardingHeader>(networkHeader)) {
        int i = (nextHopHeader->getTlvOptions().findByType(NEXTHOP_TLVOPTION_TLV_GPSR));
        if (i >= 0)
            gpsrwrOption = check_and_cast<const GPSRWROption *>(nextHopHeader->getTlvOptions().getTlvOption(i));
    }
    else
#endif
    {
    }
    return gpsrwrOption;
}

GPSRWROption *GPSRWR::findGPSRWROptionInNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader)
{
    GPSRWROption *gpsrwrOption = nullptr;

#ifdef WITH_IPv4
    if (auto ipv4Header = dynamicPtrCast<Ipv4Header>(networkHeader)) {
        gpsrwrOption = check_and_cast_nullable<GPSRWROption *>(ipv4Header->findMutableOptionByType(IPOPTION_TLV_GPSR));
    }
    else
#endif
#ifdef WITH_IPv6
    if (auto ipv6Header = dynamicPtrCast<Ipv6Header>(networkHeader)) {
        Ipv6HopByHopOptionsHeader *hdr = check_and_cast_nullable<Ipv6HopByHopOptionsHeader *>(ipv6Header->findExtensionHeaderByTypeForUpdate(IP_PROT_IPv6EXT_HOP));
        if (hdr != nullptr) {
            int i = (hdr->getTlvOptions().findByType(IPv6TLVOPTION_TLV_GPSR));
            if (i >= 0)
                gpsrwrOption = check_and_cast<GPSRWROption *>(hdr->getTlvOptionsForUpdate().getTlvOptionForUpdate(i));
        }
    }
    else
#endif
#ifdef WITH_NEXTHOP
    if (auto nextHopHeader = dynamicPtrCast<NextHopForwardingHeader>(networkHeader)) {
        int i = (nextHopHeader->getTlvOptions().findByType(NEXTHOP_TLVOPTION_TLV_GPSR));
        if (i >= 0)
            gpsrwrOption = check_and_cast<GPSRWROption *>(nextHopHeader->getTlvOptionsForUpdate().getTlvOptionForUpdate(i));
    }
    else
#endif
    {
    }
    return gpsrwrOption;
}

const GPSRWROption *GPSRWR::getGPSRWROptionFromNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const
{
    const GPSRWROption *gpsrwrOption = findGPSRWROptionInNetworkDatagram(networkHeader);
    if (gpsrwrOption == nullptr)
        throw cRuntimeError("GPSRWR option not found in datagram!");
    return gpsrwrOption;
}

GPSRWROption *GPSRWR::getGPSRWROptionFromNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader)
{
    GPSRWROption *gpsrwrOption = findGPSRWROptionInNetworkDatagramForUpdate(networkHeader);
    if (gpsrwrOption == nullptr)
        throw cRuntimeError("GPSRWR option not found in datagram!");
    return gpsrwrOption;
}

//
// netfilter
//

INetfilter::IHook::Result GPSRWR::datagramPreRoutingHook(Packet *datagram)
{
    Enter_Method("datagramPreRoutingHook");
    const auto& networkHeader = getNetworkProtocolHeader(datagram);
    const L3Address& destination = networkHeader->getDestinationAddress();
    if (destination.isMulticast() || destination.isBroadcast() || routingTable->isLocalAddress(destination))
        return ACCEPT;
    else {
        // KLUDGE: this allows overwriting the GPSR option inside
        auto gpsrwrOption = const_cast<GPSRWROption *>(getGPSRWROptionFromNetworkDatagram(networkHeader));
        return routeDatagram(datagram, gpsrwrOption);
    }
}

INetfilter::IHook::Result GPSRWR::datagramLocalOutHook(Packet *packet)
{
    Enter_Method("datagramLocalOutHook");
    const auto& networkHeader = getNetworkProtocolHeader(packet);
    const L3Address& destination = networkHeader->getDestinationAddress();
    if (destination.isMulticast() || destination.isBroadcast() || routingTable->isLocalAddress(destination))
        return ACCEPT;
    else {
        GPSRWROption *gpsrwrOption = createGPSRWROption(networkHeader->getDestinationAddress());
        setGPSRWROptionOnNetworkDatagram(packet, networkHeader, gpsrwrOption);
        return routeDatagram(packet, gpsrwrOption);
    }
}

//
// lifecycle
//

void GPSRWR::handleStartOperation(LifecycleOperation *operation)
{
    configureInterfaces();
    storeSelfPositionInGlobalRegistry();
    scheduleBeaconTimer();
}

void GPSRWR::handleStopOperation(LifecycleOperation *operation)
{
    // TODO: send a beacon to remove ourself from peers neighbor position table
    neighborPositionTable.clear();
    cancelEvent(beaconTimer);
    cancelEvent(purgeNeighborsTimer);
}

void GPSRWR::handleCrashOperation(LifecycleOperation *operation)
{
    neighborPositionTable.clear();
    cancelEvent(beaconTimer);
    cancelEvent(purgeNeighborsTimer);
}

//
// notification
//

void GPSRWR::receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj, cObject *details)
{
    Enter_Method("receiveChangeNotification");
    if (signalID == linkBrokenSignal) {
        EV_WARN << "Received link break" << endl;
        // TODO: remove the neighbor
    }
}

} // namespace inet

