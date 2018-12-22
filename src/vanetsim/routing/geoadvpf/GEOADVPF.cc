// Author: Joanne Skiles
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

#include "vanetsim/routing/geoadvpf/GEOADVPF.h"
#include "inet/networklayer/common/IPProtocolId_m.h"
#include "inet/networklayer/common/IPSocket.h"
#include "inet/common/INETUtils.h"
#include "inet/common/lifecycle/NodeOperations.h"
#include "inet/networklayer/contract/IInterfaceTable.h"
#include "inet/common/ModuleAccess.h"

#ifdef WITH_IPv4
#include "inet/networklayer/ipv4/IPv4Datagram.h"
#endif

#ifdef WITH_IPv6
#include "inet/networklayer/ipv6/IPv6ExtensionHeaders.h"
#include "inet/networklayer/ipv6/IPv6InterfaceData.h"
#endif

#ifdef WITH_GENERIC
#include "inet/networklayer/generic/GenericDatagram.h"
#endif

namespace inet {

Define_Module(GEOADVPF);

static inline double determinant(double a1, double a2, double b1, double b2)
{
    return a1 * b2 - a2 * b1;
}

// KLUDGE: implement position registry protocol
GEOADVPF_PositionTable GEOADVPF::globalGEOADVPF_PositionTable;

GEOADVPF::GEOADVPF()
{
}

GEOADVPF::~GEOADVPF()
{
    cancelAndDelete(beaconTimer);
    cancelAndDelete(purgeNeighborsTimer);
}

//
// module interface
//

void GEOADVPF::initialize(int stage)
{
    cSimpleModule::initialize(stage);

    if (stage == INITSTAGE_LOCAL) {
        // GEOADVPF parameters
        planarizationMode = (GEOADVPFPlanarizationMode)(int)par("planarizationMode");
        interfaces = par("interfaces");
        beaconInterval = par("beaconInterval");
        maxJitter = par("maxJitter");
        neighborValidityInterval = par("neighborValidityInterval");
        // context
        host = getContainingNode(this);
        nodeStatus = dynamic_cast<NodeStatus *>(host->getSubmodule("status"));
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
        speedWeight = par("speedWeight");
        accelerationWeight = par("accelerationWeight");
        directionWeight = par("directionWeight");
        linkQualityWeight = par("linkQualityWeight");
    }
    else if (stage == INITSTAGE_ROUTING_PROTOCOLS) {
        IPSocket socket(gate("ipOut"));
        socket.registerProtocol(IP_PROT_MANET);

        globalGEOADVPF_PositionTable.clear();
        host->subscribe(NF_LINK_BREAK, this);
        addressType = getSelfAddress().getAddressType();
        networkProtocol->registerHook(0, this);
        if (isNodeUp()) {
            configureInterfaces();
            scheduleBeaconTimer();
            schedulePurgeNeighborsTimer();
        }
        WATCH(neighborGEOADVPF_PositionTable);
    }
}

void GEOADVPF::handleMessage(cMessage *message)
{
    if (message->isSelfMessage())
        processSelfMessage(message);
    else
        processMessage(message);
}

//
// handling messages
//

void GEOADVPF::processSelfMessage(cMessage *message)
{
    if (message == beaconTimer)
        processBeaconTimer();
    else if (message == purgeNeighborsTimer)
        processPurgeNeighborsTimer();
    else
        throw cRuntimeError("Unknown self message");
}

void GEOADVPF::processMessage(cMessage *message)
{
    if (dynamic_cast<UDPPacket *>(message))
        processUDPPacket(static_cast<UDPPacket *>(message));
    else
        throw cRuntimeError("Unknown message");
}

//
// beacon timers
//

void GEOADVPF::scheduleBeaconTimer()
{
    EV_DEBUG << "Scheduling beacon timer" << endl;
    scheduleAt(simTime() + beaconInterval, beaconTimer);
}

void GEOADVPF::processBeaconTimer()
{
    EV_DEBUG << "Processing beacon timer" << endl;
    L3Address selfAddress = getSelfAddress();
    if (!selfAddress.isUnspecified()) {
        sendBeacon(createBeacon(), uniform(0, maxJitter).dbl());
        // KLUDGE: implement position registry protocol
        globalGEOADVPF_PositionTable.setPosition(selfAddress, mobility->getCurrentPosition());
    }
    scheduleBeaconTimer();
    schedulePurgeNeighborsTimer();
}

//
// handling purge neighbors timers
//

void GEOADVPF::schedulePurgeNeighborsTimer()
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

void GEOADVPF::processPurgeNeighborsTimer()
{
    EV_DEBUG << "Processing purge neighbors timer" << endl;
    purgeNeighbors();
    schedulePurgeNeighborsTimer();
}

//
// handling UDP packets
//

void GEOADVPF::sendUDPPacket(UDPPacket *packet, double delay)
{
    if (delay == 0)
        send(packet, "ipOut");
    else
        sendDelayed(packet, delay, "ipOut");
}

void GEOADVPF::processUDPPacket(UDPPacket *packet)
{
    cPacket *encapsulatedPacket = packet->decapsulate();
    if (dynamic_cast<GEOADVPFBeacon *>(encapsulatedPacket))
        processBeacon(static_cast<GEOADVPFBeacon *>(encapsulatedPacket));
    else
        throw cRuntimeError("Unknown UDP packet");
    delete packet;
}

//
// handling beacons
//

GEOADVPFBeacon *GEOADVPF::createBeacon()
{
    GEOADVPFBeacon *beacon = new GEOADVPFBeacon("GEOADVPFBeacon");
    beacon->setAddress(getSelfAddress());
    beacon->setPosition(mobility->getCurrentPosition());
    beacon->setByteLength(getSelfAddress().getAddressType()->getAddressByteLength() + positionByteLength);
    return beacon;
}

void GEOADVPF::sendBeacon(GEOADVPFBeacon *beacon, double delay)
{
    EV_INFO << "Sending beacon: address = " << beacon->getAddress() << ", position = " << beacon->getPosition() << endl;
    INetworkProtocolControlInfo *networkProtocolControlInfo = addressType->createNetworkProtocolControlInfo();
    networkProtocolControlInfo->setTransportProtocol(IP_PROT_MANET);
    networkProtocolControlInfo->setHopLimit(255);
    networkProtocolControlInfo->setDestinationAddress(addressType->getLinkLocalManetRoutersMulticastAddress());
    networkProtocolControlInfo->setSourceAddress(getSelfAddress());
    UDPPacket *udpPacket = new UDPPacket(beacon->getName());
    udpPacket->encapsulate(beacon);
    udpPacket->setSourcePort(GEOADVPF_UDP_PORT);
    udpPacket->setDestinationPort(GEOADVPF_UDP_PORT);
    udpPacket->setControlInfo(dynamic_cast<cObject *>(networkProtocolControlInfo));
    sendUDPPacket(udpPacket, delay);
}

void GEOADVPF::processBeacon(GEOADVPFBeacon *beacon)
{
    EV_INFO << "Processing beacon: address = " << beacon->getAddress() << ", position = " << beacon->getPosition() << endl;
    neighborGEOADVPF_PositionTable.setPosition(beacon->getAddress(), beacon->getPosition());
    delete beacon;
}

//
// handling packets
//

GEOADVPFOption *GEOADVPF::createGeoadvpfOption(L3Address destination, cPacket *content)
{
    GEOADVPFOption *gpsrOption = new GEOADVPFOption();
    gpsrOption->setRoutingMode(GEOADVPF_GREEDY_ROUTING);
    // KLUDGE: implement position registry protocol
    gpsrOption->setDestinationPosition(getDestinationPosition(destination));
    gpsrOption->setLength(computeOptionLength(gpsrOption));
    return gpsrOption;
}

int GEOADVPF::computeOptionLength(GEOADVPFOption *option)
{
    // routingMode
    int routingModeBytes = 1;
    // destinationPosition, ptwrRoutingStartPosition, ptwrRoutingForwardPosition
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

bool GEOADVPF::isNodeUp() const
{
    return !nodeStatus || nodeStatus->getState() == NodeStatus::UP;
}

void GEOADVPF::configureInterfaces()
{
    // join multicast groups
    cPatternMatcher interfaceMatcher(interfaces, false, true, false);
    for (int i = 0; i < interfaceTable->getNumInterfaces(); i++) {
        InterfaceEntry *interfaceEntry = interfaceTable->getInterface(i);
        if (interfaceEntry->isMulticast() && interfaceMatcher.matches(interfaceEntry->getName()))
            interfaceEntry->joinMulticastGroup(addressType->getLinkLocalManetRoutersMulticastAddress());
    }
}

//
// position
//

Coord GEOADVPF::intersectSections(Coord& begin1, Coord& end1, Coord& begin2, Coord& end2)
{
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
    if (x1 < x && x < x2 && x3 < x && x < x4 && y1 < y && y < y2 && y3 < y && y < y4)
        return Coord(x, y, 0);
    else
        return Coord(NaN, NaN, NaN);
}

Coord GEOADVPF::getDestinationPosition(const L3Address& address) const
{
    // KLUDGE: implement position registry protocol
    return globalGEOADVPF_PositionTable.getPosition(address);
}

Coord GEOADVPF::getNeighborPosition(const L3Address& address) const
{
    return neighborGEOADVPF_PositionTable.getPosition(address);
}

//
// angle
//

double GEOADVPF::getVectorAngle(Coord vector)
{
    double angle = atan2(-vector.y, vector.x);
    if (angle < 0)
        angle += 2 * M_PI;
    return angle;
}

double GEOADVPF::getDestinationAngle(const L3Address& address)
{
    return getVectorAngle(getDestinationPosition(address) - mobility->getCurrentPosition());
}

double GEOADVPF::getNeighborAngle(const L3Address& address)
{
    return getVectorAngle(getNeighborPosition(address) - mobility->getCurrentPosition());
}

//
// address
//

std::string GEOADVPF::getHostName() const
{
    return host->getFullName();
}

L3Address GEOADVPF::getSelfAddress() const
{
    //TODO choose self address based on a new 'interfaces' parameter
    L3Address ret = routingTable->getRouterIdAsGeneric();
#ifdef WITH_IPv6
    if (ret.getType() == L3Address::IPv6) {
        for (int i = 0; i < interfaceTable->getNumInterfaces(); i++) {
            InterfaceEntry *ie = interfaceTable->getInterface(i);
            if ((!ie->isLoopback()) && ie->ipv6Data() != nullptr) {
                ret = interfaceTable->getInterface(i)->ipv6Data()->getPreferredAddress();
                break;
            }
        }
    }
#endif
    return ret;
}

L3Address GEOADVPF::getSenderNeighborAddress(INetworkDatagram *datagram) const
{
    const GEOADVPFOption *gpsrOption = getGeoadvpfOptionFromNetworkDatagram(datagram);
    return gpsrOption->getSenderAddress();
}

//
// neighbor
//

simtime_t GEOADVPF::getNextNeighborExpiration()
{
    simtime_t oldestPosition = neighborGEOADVPF_PositionTable.getOldestPosition();
    if (oldestPosition == SimTime::getMaxTime())
        return oldestPosition;
    else
        return oldestPosition + neighborValidityInterval;
}

void GEOADVPF::purgeNeighbors()
{
    neighborGEOADVPF_PositionTable.removeOldPositions(simTime() - neighborValidityInterval);
}

std::vector<L3Address> GEOADVPF::getPlanarNeighbors()
{
    std::vector<L3Address> planarNeighbors;
    std::vector<L3Address> neighborAddresses = neighborGEOADVPF_PositionTable.getAddresses();
    Coord selfPosition = mobility->getCurrentPosition();
    for (auto it = neighborAddresses.begin(); it != neighborAddresses.end(); it++) {
        const L3Address& neighborAddress = *it;
        Coord neighborPosition = neighborGEOADVPF_PositionTable.getPosition(neighborAddress);
        if (planarizationMode == GEOADVPF_RNG_PLANARIZATION) {
            double neighborDistance = (neighborPosition - selfPosition).length();
            for (auto & neighborAddresse : neighborAddresses) {
                const L3Address& witnessAddress = neighborAddresse;
                Coord witnessPosition = neighborGEOADVPF_PositionTable.getPosition(witnessAddress);
                double witnessDistance = (witnessPosition - selfPosition).length();
                ;
                double neighborWitnessDistance = (witnessPosition - neighborPosition).length();
                if (*it == neighborAddresse)
                    continue;
                else if (neighborDistance > std::max(witnessDistance, neighborWitnessDistance))
                    goto eliminate;
            }
        }
        else if (planarizationMode == GEOADVPF_GG_PLANARIZATION) {
            Coord middlePosition = (selfPosition + neighborPosition) / 2;
            double neighborDistance = (neighborPosition - middlePosition).length();
            for (auto & neighborAddresse : neighborAddresses) {
                const L3Address& witnessAddress = neighborAddresse;
                Coord witnessPosition = neighborGEOADVPF_PositionTable.getPosition(witnessAddress);
                double witnessDistance = (witnessPosition - middlePosition).length();
                ;
                if (*it == neighborAddresse)
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

L3Address GEOADVPF::getNextPlanarNeighborCounterClockwise(const L3Address& startNeighborAddress, double startNeighborAngle)
{
    EV_DEBUG << "Finding next planar neighbor (counter clockwise): startAddress = " << startNeighborAddress << ", startAngle = " << startNeighborAngle << endl;
    L3Address bestNeighborAddress = startNeighborAddress;
    double bestNeighborAngleDifference = 2 * M_PI;
    std::vector<L3Address> neighborAddresses = getPlanarNeighbors();
    for (auto & neighborAddress : neighborAddresses) {
        double neighborAngle = getNeighborAngle(neighborAddress);
        double neighborAngleDifference = neighborAngle - startNeighborAngle;
        if (neighborAngleDifference < 0)
            neighborAngleDifference += 2 * M_PI;
        EV_DEBUG << "Trying next planar neighbor (counter clockwise): address = " << neighborAddress << ", angle = " << neighborAngle << endl;
        if (neighborAngleDifference != 0 && neighborAngleDifference < bestNeighborAngleDifference) {
            bestNeighborAngleDifference = neighborAngleDifference;
            bestNeighborAddress = neighborAddress;
        }
    }
    return bestNeighborAddress;
}

//
// next hop
//

L3Address GEOADVPF::findNextHop(INetworkDatagram *datagram, const L3Address& destination)
{
    GEOADVPFOption *gpsrOption = getGeoadvpfOptionFromNetworkDatagram(datagram);
    switch (gpsrOption->getRoutingMode()) {
        case GEOADVPF_GREEDY_ROUTING: return findGreedyRoutingNextHop(datagram, destination);
        case GEOADVPF_PTWR_ROUTING: return findPTWRRoutingNextHop(datagram, destination);
        default: throw cRuntimeError("Unknown routing mode");
    }
}

L3Address GEOADVPF::findGreedyRoutingNextHop(INetworkDatagram *datagram, const L3Address& destination)
{
    EV_DEBUG << "Finding next hop using greedy routing: destination = " << destination << endl;
    GEOADVPFOption *gpsrOption = getGeoadvpfOptionFromNetworkDatagram(datagram);
    L3Address selfAddress = getSelfAddress();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord destinationPosition = gpsrOption->getDestinationPosition();
    double bestDistance = (destinationPosition - selfPosition).length();
    L3Address bestNeighbor;
    std::vector<L3Address> neighborAddresses = neighborGEOADVPF_PositionTable.getAddresses();
    for (auto& neighborAddress: neighborAddresses) {
        Coord neighborPosition = neighborGEOADVPF_PositionTable.getPosition(neighborAddress);
        double neighborDistance = (destinationPosition - neighborPosition).length();
        if (neighborDistance < bestDistance) {
            bestDistance = neighborDistance;
            bestNeighbor = neighborAddress;
        }
    }
    if (bestNeighbor.isUnspecified()) {
        EV_DEBUG << "Switching to PTWR routing: destination = " << destination << endl;
        gpsrOption->setRoutingMode(GEOADVPF_PTWR_ROUTING);
        gpsrOption->setPtwrRoutingStartPosition(selfPosition);
        gpsrOption->setCurrentFaceFirstSenderAddress(selfAddress);
        gpsrOption->setCurrentFaceFirstReceiverAddress(L3Address());
        return findPTWRRoutingNextHop(datagram, destination);
    }
    else
        return bestNeighbor;
}

L3Address GEOADVPF::findPTWRRoutingNextHop(INetworkDatagram *datagram, const L3Address& destination)
{
    EV_DEBUG << "Finding next hop using perimeter routing: destination = " << destination << endl;
    GEOADVPFOption *gpsrOption = getGeoadvpfOptionFromNetworkDatagram(datagram);
    L3Address selfAddress = getSelfAddress();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord ptwrRoutingStartPosition = gpsrOption->getPtwrRoutingStartPosition();
    Coord destinationPosition = gpsrOption->getDestinationPosition();
    double selfDistance = (destinationPosition - selfPosition).length();
    double ptwrRoutingStartDistance = (destinationPosition - ptwrRoutingStartPosition).length();
    if (selfDistance < ptwrRoutingStartDistance) {
        EV_DEBUG << "Switching to greedy routing: destination = " << destination << endl;
        gpsrOption->setRoutingMode(GEOADVPF_GREEDY_ROUTING);
        gpsrOption->setPtwrRoutingStartPosition(Coord());
        gpsrOption->setPtwrRoutingForwardPosition(Coord());
        return findGreedyRoutingNextHop(datagram, destination);
    }
    else {
        L3Address& firstSenderAddress = gpsrOption->getCurrentFaceFirstSenderAddress();
        L3Address& firstReceiverAddress = gpsrOption->getCurrentFaceFirstReceiverAddress();
        L3Address nextNeighborAddress = getSenderNeighborAddress(datagram);
        bool hasIntersection;
        do {
            if (nextNeighborAddress.isUnspecified())
                nextNeighborAddress = getNextPlanarNeighborCounterClockwise(nextNeighborAddress, getDestinationAngle(destination));
            else
                nextNeighborAddress = getNextPlanarNeighborCounterClockwise(nextNeighborAddress, getNeighborAngle(nextNeighborAddress));
            if (nextNeighborAddress.isUnspecified())
                break;
            EV_DEBUG << "Intersecting towards next hop: nextNeighbor = " << nextNeighborAddress << ", firstSender = " << firstSenderAddress << ", firstReceiver = " << firstReceiverAddress << ", destination = " << destination << endl;
            Coord nextNeighborPosition = getNeighborPosition(nextNeighborAddress);
            Coord intersection = intersectSections(ptwrRoutingStartPosition, destinationPosition, selfPosition, nextNeighborPosition);
            hasIntersection = !std::isnan(intersection.x);
            if (hasIntersection) {
                EV_DEBUG << "Edge to next hop intersects: intersection = " << intersection << ", nextNeighbor = " << nextNeighborAddress << ", firstSender = " << firstSenderAddress << ", firstReceiver = " << firstReceiverAddress << ", destination = " << destination << endl;
                gpsrOption->setCurrentFaceFirstSenderAddress(selfAddress);
                gpsrOption->setCurrentFaceFirstReceiverAddress(L3Address());
            }
        } while (hasIntersection);
        if (firstSenderAddress == selfAddress && firstReceiverAddress == nextNeighborAddress) {
            EV_DEBUG << "End of perimeter reached: firstSender = " << firstSenderAddress << ", firstReceiver = " << firstReceiverAddress << ", destination = " << destination << endl;
            return L3Address();
        }
        else {
            if (gpsrOption->getCurrentFaceFirstReceiverAddress().isUnspecified())
                gpsrOption->setCurrentFaceFirstReceiverAddress(nextNeighborAddress);
            return nextNeighborAddress;
        }
    }
}

//
// routing
//

INetfilter::IHook::Result GEOADVPF::routeDatagram(INetworkDatagram *datagram, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop)
{
    const L3Address& source = datagram->getSourceAddress();
    const L3Address& destination = datagram->getDestinationAddress();
    EV_INFO << "Finding next hop: source = " << source << ", destination = " << destination << endl;
    nextHop = findNextHop(datagram, destination);
    if (nextHop.isUnspecified()) {
        EV_WARN << "No next hop found, dropping packet: source = " << source << ", destination = " << destination << endl;
        return DROP;
    }
    else {
        EV_INFO << "Next hop found: source = " << source << ", destination = " << destination << ", nextHop: " << nextHop << endl;
        GEOADVPFOption *gpsrOption = getGeoadvpfOptionFromNetworkDatagram(datagram);
        gpsrOption->setSenderAddress(getSelfAddress());
        outputInterfaceEntry = interfaceTable->getInterfaceByName(outputInterface);
        ASSERT(outputInterfaceEntry);
        return ACCEPT;
    }
}

void GEOADVPF::setGeoadvpfOptionOnNetworkDatagram(INetworkDatagram *datagram)
{
    cPacket *networkPacket = check_and_cast<cPacket *>(datagram);
    GEOADVPFOption *gpsrOption = createGeoadvpfOption(datagram->getDestinationAddress(), networkPacket->getEncapsulatedPacket());
#ifdef WITH_IPv4
    if (dynamic_cast<IPv4Datagram *>(networkPacket)) {
        gpsrOption->setType(IPOPTION_TLV_GPSR);
        IPv4Datagram *dgram = static_cast<IPv4Datagram *>(networkPacket);
        int oldHlen = dgram->calculateHeaderByteLength();
        ASSERT(dgram->getHeaderLength() == oldHlen);
        dgram->addOption(gpsrOption);
        int newHlen = dgram->calculateHeaderByteLength();
        dgram->setHeaderLength(newHlen);
        dgram->addByteLength(newHlen - oldHlen);
        dgram->setTotalLengthField(dgram->getTotalLengthField() + newHlen - oldHlen);
    }
    else
#endif
#ifdef WITH_IPv6
    if (dynamic_cast<IPv6Datagram *>(networkPacket)) {
        gpsrOption->setType(IPv6TLVOPTION_TLV_GPSR);
        IPv6Datagram *dgram = static_cast<IPv6Datagram *>(networkPacket);
        int oldHlen = dgram->calculateHeaderByteLength();
        IPv6HopByHopOptionsHeader *hdr = check_and_cast_nullable<IPv6HopByHopOptionsHeader *>(dgram->findExtensionHeaderByType(IP_PROT_IPv6EXT_HOP));
        if (hdr == nullptr) {
            hdr = new IPv6HopByHopOptionsHeader();
            hdr->setByteLength(8);
            dgram->addExtensionHeader(hdr);
        }
        hdr->getTlvOptions().add(gpsrOption);
        hdr->setByteLength(utils::roundUp(2 + hdr->getTlvOptions().getLength(), 8));
        int newHlen = dgram->calculateHeaderByteLength();
        dgram->addByteLength(newHlen - oldHlen);
    }
    else
#endif
#ifdef WITH_GENERIC
    if (dynamic_cast<GenericDatagram *>(networkPacket)) {
        gpsrOption->setType(GENERIC_TLVOPTION_TLV_GPSR);
        GenericDatagram *dgram = static_cast<GenericDatagram *>(networkPacket);
        int oldHlen = dgram->getTlvOptions().getLength();
        dgram->getTlvOptions().add(gpsrOption);
        int newHlen = dgram->getTlvOptions().getLength();
        dgram->addByteLength(newHlen - oldHlen);
    }
    else
#endif
    {
    }
}

GEOADVPFOption *GEOADVPF::findGeoadvpfOptionInNetworkDatagram(INetworkDatagram *datagram)
{
    cPacket *networkPacket = check_and_cast<cPacket *>(datagram);
    GEOADVPFOption *gpsrOption = nullptr;

#ifdef WITH_IPv4
    if (dynamic_cast<IPv4Datagram *>(networkPacket)) {
        IPv4Datagram *dgram = static_cast<IPv4Datagram *>(networkPacket);
        gpsrOption = check_and_cast_nullable<GEOADVPFOption *>(dgram->findOptionByType(IPOPTION_TLV_GPSR));
    }
    else
#endif
#ifdef WITH_IPv6
    if (dynamic_cast<IPv6Datagram *>(networkPacket)) {
        IPv6Datagram *dgram = static_cast<IPv6Datagram *>(networkPacket);
        IPv6HopByHopOptionsHeader *hdr = check_and_cast_nullable<IPv6HopByHopOptionsHeader *>(dgram->findExtensionHeaderByType(IP_PROT_IPv6EXT_HOP));
        if (hdr != nullptr) {
            int i = (hdr->getTlvOptions().findByType(IPv6TLVOPTION_TLV_GPSR));
            if (i >= 0)
                gpsrOption = check_and_cast_nullable<GEOADVPFOption *>(&(hdr->getTlvOptions().at(i)));
        }
    }
    else
#endif
#ifdef WITH_GENERIC
    if (dynamic_cast<GenericDatagram *>(networkPacket)) {
        GenericDatagram *dgram = static_cast<GenericDatagram *>(networkPacket);
        int i = (dgram->getTlvOptions().findByType(GENERIC_TLVOPTION_TLV_GPSR));
        if (i >= 0)
            gpsrOption = check_and_cast_nullable<GEOADVPFOption *>(&(dgram->getTlvOptions().at(i)));
    }
    else
#endif
    {
    }
    return gpsrOption;
}

GEOADVPFOption *GEOADVPF::getGeoadvpfOptionFromNetworkDatagram(INetworkDatagram *datagram)
{
    GEOADVPFOption *gpsrOption = findGeoadvpfOptionInNetworkDatagram(datagram);
    if (gpsrOption == nullptr)
        throw cRuntimeError("GEOADVPF option not found in datagram!");
    return gpsrOption;
}

//
// netfilter
//

INetfilter::IHook::Result GEOADVPF::datagramPreRoutingHook(INetworkDatagram *datagram, const InterfaceEntry *inputInterfaceEntry, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop)
{
    Enter_Method("datagramPreRoutingHook");
    const L3Address& destination = datagram->getDestinationAddress();
    if (destination.isMulticast() || destination.isBroadcast() || routingTable->isLocalAddress(destination))
        return ACCEPT;
    else
        return routeDatagram(datagram, outputInterfaceEntry, nextHop);
}

INetfilter::IHook::Result GEOADVPF::datagramLocalOutHook(INetworkDatagram *datagram, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop)
{
    Enter_Method("datagramLocalOutHook");
    const L3Address& destination = datagram->getDestinationAddress();
    if (destination.isMulticast() || destination.isBroadcast() || routingTable->isLocalAddress(destination))
        return ACCEPT;
    else {
        setGeoadvpfOptionOnNetworkDatagram(datagram);
        return routeDatagram(datagram, outputInterfaceEntry, nextHop);
    }
}

//
// lifecycle
//

bool GEOADVPF::handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback)
{
    Enter_Method_Silent();
    if (dynamic_cast<NodeStartOperation *>(operation)) {
        if ((NodeStartOperation::Stage)stage == NodeStartOperation::STAGE_APPLICATION_LAYER)
            configureInterfaces();
    }
    else if (dynamic_cast<NodeShutdownOperation *>(operation)) {
        if ((NodeShutdownOperation::Stage)stage == NodeShutdownOperation::STAGE_APPLICATION_LAYER) {
            // TODO: send a beacon to remove ourself from peers neighbor position table
            neighborGEOADVPF_PositionTable.clear();
            cancelEvent(beaconTimer);
            cancelEvent(purgeNeighborsTimer);
        }
    }
    else if (dynamic_cast<NodeCrashOperation *>(operation)) {
        if ((NodeCrashOperation::Stage)stage == NodeCrashOperation::STAGE_CRASH) {
            neighborGEOADVPF_PositionTable.clear();
            cancelEvent(beaconTimer);
            cancelEvent(purgeNeighborsTimer);
        }
    }
    else
        throw cRuntimeError("Unsupported lifecycle operation '%s'", operation->getClassName());
    return true;
}

//
// notification
//

void GEOADVPF::receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj, cObject *details)
{
    Enter_Method("receiveChangeNotification");
    if (signalID == NF_LINK_BREAK) {
        EV_WARN << "Received link break" << endl;
        // TODO: shall we remove the neighbor?
    }
}

} // namespace inet

