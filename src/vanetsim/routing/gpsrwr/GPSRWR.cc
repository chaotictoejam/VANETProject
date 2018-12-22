//
// Copyright (C) 2013 Opensim Ltd
// Author: Levente Meszaros
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

#include "vanetsim/routing/gpsrwr/GPSRWR.h"
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

Define_Module(GPSRWR);

static inline double determinant(double a1, double a2, double b1, double b2)
{
    return a1 * b2 - a2 * b1;
}

// KLUDGE: implement position registry protocol
GPSRWRPositionTable GPSRWR::gpsrwrGlobalPositionTable;

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
    cSimpleModule::initialize(stage);

    if (stage == INITSTAGE_LOCAL) {
        // GPSRWR parameters
        planarizationMode = (GPSRWRPlanarizationMode)(int)par("planarizationMode");
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

        gpsrwrGlobalPositionTable.clear();
        host->subscribe(NF_LINK_BREAK, this);
        addressType = getSelfAddress().getAddressType();
        networkProtocol->registerHook(0, this);
        if (isNodeUp()) {
            configureInterfaces();
            scheduleBeaconTimer();
            schedulePurgeNeighborsTimer();
        }
        WATCH(neighborPositionTable);
    }
}

void GPSRWR::handleMessage(cMessage *message)
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
    if (dynamic_cast<UDPPacket *>(message))
        processUDPPacket(static_cast<UDPPacket *>(message));
    else
        throw cRuntimeError("Unknown message");
}

//
// beacon timers
//

void GPSRWR::scheduleBeaconTimer()
{
    EV_DEBUG << "Scheduling beacon timer" << endl;
    scheduleAt(simTime() + beaconInterval, beaconTimer);
}

void GPSRWR::processBeaconTimer()
{
    EV_DEBUG << "Processing beacon timer" << endl;
    L3Address selfAddress = getSelfAddress();
    if (!selfAddress.isUnspecified()) {
        sendBeacon(createBeacon(), uniform(0, maxJitter).dbl());
        // KLUDGE: implement position registry protocol
        gpsrwrGlobalPositionTable.setPosition(selfAddress, mobility->getCurrentPosition());
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

void GPSRWR::sendUDPPacket(UDPPacket *packet, double delay)
{
    if (delay == 0)
        send(packet, "ipOut");
    else
        sendDelayed(packet, delay, "ipOut");
}

void GPSRWR::processUDPPacket(UDPPacket *packet)
{
    cPacket *encapsulatedPacket = packet->decapsulate();
    if (dynamic_cast<GPSRWRBeacon *>(encapsulatedPacket))
        processBeacon(static_cast<GPSRWRBeacon *>(encapsulatedPacket));
    else
        throw cRuntimeError("Unknown UDP packet");
    delete packet;
}

//
// handling beacons
//

GPSRWRBeacon *GPSRWR::createBeacon()
{
    GPSRWRBeacon *beacon = new GPSRWRBeacon("GPSRWRBeacon");
    beacon->setAddress(getSelfAddress());
    beacon->setPosition(mobility->getCurrentPosition());
    beacon->setSpeed(mobility->getCurrentSpeed());
    beacon->setAcceleration(mobility->getCurrentAcceleration());
    beacon->setDirection(mobility->getCurrentAngularPosition());
    beacon->setByteLength(getSelfAddress().getAddressType()->getAddressByteLength() + positionByteLength);
    return beacon;
}

void GPSRWR::sendBeacon(GPSRWRBeacon *beacon, double delay)
{
    EV_INFO << "Sending beacon: address = " << beacon->getAddress() << ", position = " << beacon->getPosition() << endl;
    INetworkProtocolControlInfo *networkProtocolControlInfo = addressType->createNetworkProtocolControlInfo();
    networkProtocolControlInfo->setTransportProtocol(IP_PROT_MANET);
    networkProtocolControlInfo->setHopLimit(255);
    networkProtocolControlInfo->setDestinationAddress(addressType->getLinkLocalManetRoutersMulticastAddress());
    networkProtocolControlInfo->setSourceAddress(getSelfAddress());
    UDPPacket *udpPacket = new UDPPacket(beacon->getName());
    udpPacket->encapsulate(beacon);
    udpPacket->setSourcePort(GPSRWR_UDP_PORT);
    udpPacket->setDestinationPort(GPSRWR_UDP_PORT);
    udpPacket->setControlInfo(dynamic_cast<cObject *>(networkProtocolControlInfo));
    sendUDPPacket(udpPacket, delay);
}

void GPSRWR::processBeacon(GPSRWRBeacon *beacon)
{
    EV_INFO << "Processing beacon: address = " << beacon->getAddress() << ", position = " << beacon->getPosition() << endl;
    L3Address& address = beacon->getAddress();
    neighborPositionTable.setPosition(address, beacon->getPosition());
    neighborPositionTable.setSpeed(address, beacon->getSpeed());
    neighborPositionTable.setAcceleration(address, beacon->getAcceleration());
    neighborPositionTable.setDirection(address, beacon->getDirection());
    delete beacon;
}

//
// handling packets
//

GPSRWROption *GPSRWR::createGpsrwrOption(L3Address destination, cPacket *content)
{
    GPSRWROption *gpsrOption = new GPSRWROption();
    gpsrOption->setRoutingMode(GPSRWR_GREEDY_ROUTING);
    // KLUDGE: implement position registry protocol
    gpsrOption->setDestinationPosition(getDestinationPosition(destination));
    gpsrOption->setLength(computeOptionLength(gpsrOption));
    return gpsrOption;
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

bool GPSRWR::isNodeUp() const
{
    return !nodeStatus || nodeStatus->getState() == NodeStatus::UP;
}

void GPSRWR::configureInterfaces()
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

Coord GPSRWR::intersectSections(Coord& begin1, Coord& end1, Coord& begin2, Coord& end2)
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

Coord GPSRWR::getDestinationPosition(const L3Address& address) const
{
    // KLUDGE: implement position registry protocol
    return gpsrwrGlobalPositionTable.getPosition(address);
}

Coord GPSRWR::getNeighborPosition(const L3Address& address) const
{
    return neighborPositionTable.getPosition(address);
}

//
// angle
//

double GPSRWR::getVectorAngle(Coord vector)
{
    double angle = atan2(-vector.y, vector.x);
    if (angle < 0)
        angle += 2 * M_PI;
    return angle;
}

double GPSRWR::getDestinationAngle(const L3Address& address)
{
    return getVectorAngle(getDestinationPosition(address) - mobility->getCurrentPosition());
}

double GPSRWR::getNeighborAngle(const L3Address& address)
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
            if ((!ie->isLoopback()) && ie->ipv6Data() != nullptr) {
                ret = interfaceTable->getInterface(i)->ipv6Data()->getPreferredAddress();
                break;
            }
        }
    }
#endif
    return ret;
}

L3Address GPSRWR::getSenderNeighborAddress(INetworkDatagram *datagram) const
{
    const GPSRWROption *gpsrOption = getGpsrwrOptionFromNetworkDatagram(datagram);
    return gpsrOption->getSenderAddress();
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

std::vector<L3Address> GPSRWR::getPlanarNeighbors()
{
    std::vector<L3Address> planarNeighbors;
    std::vector<L3Address> neighborAddresses = neighborPositionTable.getAddresses();
    Coord selfPosition = mobility->getCurrentPosition();
    for (auto it = neighborAddresses.begin(); it != neighborAddresses.end(); it++) {
        const L3Address& neighborAddress = *it;
        Coord neighborPosition = neighborPositionTable.getPosition(neighborAddress);
        if (planarizationMode == GPSRWR_RNG_PLANARIZATION) {
            double neighborDistance = (neighborPosition - selfPosition).length();
            for (auto & neighborAddresse : neighborAddresses) {
                const L3Address& witnessAddress = neighborAddresse;
                Coord witnessPosition = neighborPositionTable.getPosition(witnessAddress);
                double witnessDistance = (witnessPosition - selfPosition).length();
                ;
                double neighborWitnessDistance = (witnessPosition - neighborPosition).length();
                if (*it == neighborAddresse)
                    continue;
                else if (neighborDistance > std::max(witnessDistance, neighborWitnessDistance))
                    goto eliminate;
            }
        }
        else if (planarizationMode == GPSRWR_GG_PLANARIZATION) {
            Coord middlePosition = (selfPosition + neighborPosition) / 2;
            double neighborDistance = (neighborPosition - middlePosition).length();
            for (auto & neighborAddresse : neighborAddresses) {
                const L3Address& witnessAddress = neighborAddresse;
                Coord witnessPosition = neighborPositionTable.getPosition(witnessAddress);
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

L3Address GPSRWR::getNextPlanarNeighborCounterClockwise(const L3Address& startNeighborAddress, double startNeighborAngle)
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

std::pair<L3Address,double> GPSRWR::findNextHop(INetworkDatagram *datagram, const L3Address& destination)
{
    GPSRWROption *gpsrOption = getGpsrwrOptionFromNetworkDatagram(datagram);
    switch (gpsrOption->getRoutingMode()) {
        case GPSRWR_GREEDY_ROUTING: return findGreedyRoutingNextHop(datagram, destination);
        case GPSRWR_PERIMETER_ROUTING: return findPerimeterRoutingNextHop(datagram, destination);
        default: throw cRuntimeError("Unknown routing mode");
    }
}

std::pair<L3Address,double> GPSRWR::findGreedyRoutingNextHop(INetworkDatagram *datagram, const L3Address& destination)
{
    EV_DEBUG << "Finding best next hop using greedy routing and twr: destination = " << destination << endl;
    GPSRWROption *gpsrOption = getGpsrwrOptionFromNetworkDatagram(datagram);
    L3Address selfAddress = getSelfAddress();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord selfSpeed = mobility->getCurrentSpeed();
    Coord selfAcceleration = mobility->getCurrentAcceleration();
    EulerAngles selfDirection = mobility->getCurrentAngularPosition(); //In Rad, 0 being east, with -M_PI <= angle < M_PI.

    Coord destinationPosition = gpsrOption->getDestinationPosition();
    double bestDistance = (destinationPosition - selfPosition).length();
    L3Address bestNeighbor;
    double bestTwr = 10000;
    std::vector<L3Address> neighborAddresses = neighborPositionTable.getAddresses();
    for (auto& neighborAddress: neighborAddresses) {
        Coord neighborPosition = neighborPositionTable.getPosition(neighborAddress);
        Coord neighborSpeed = neighborPositionTable.getSpeed(neighborAddress);
        Coord neighborAcceleration = neighborPositionTable.getAcceleration(neighborAddress);
        EulerAngles neighborDirection = neighborPositionTable.getDirection(neighborAddress); //In Rad, 0 being east, with -M_PI <= angle < M_PI.
        double neighborDistance = (destinationPosition - neighborPosition).length();
        double neighbortwr = calculateTwr(selfPosition, selfSpeed, selfAcceleration, selfDirection,
                neighborPosition, neighborSpeed, neighborAcceleration, neighborDirection);
        if (neighborDistance < bestDistance && neighbortwr < bestTwr) {
            bestDistance = neighborDistance;
            bestNeighbor = neighborAddress;
            bestTwr = neighbortwr;
        }
    }
    if (bestNeighbor.isUnspecified()) {
        EV_DEBUG << "Switching to perimeter routing: destination = " << destination << endl;
        gpsrOption->setRoutingMode(GPSRWR_PERIMETER_ROUTING);
        gpsrOption->setPerimeterRoutingStartPosition(selfPosition);
        gpsrOption->setCurrentFaceFirstSenderAddress(selfAddress);
        gpsrOption->setCurrentFaceFirstReceiverAddress(L3Address());
        return findPerimeterRoutingNextHop(datagram, destination);
    }
    else
        return std::pair<L3Address,double>(bestNeighbor, bestTwr);
}

std::pair<L3Address,double> GPSRWR::findPerimeterRoutingNextHop(INetworkDatagram *datagram, const L3Address& destination)
{
    EV_DEBUG << "Finding next hop using perimeter routing: destination = " << destination << endl;
    GPSRWROption *gpsrOption = getGpsrwrOptionFromNetworkDatagram(datagram);
    L3Address selfAddress = getSelfAddress();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord perimeterRoutingStartPosition = gpsrOption->getPerimeterRoutingStartPosition();
    Coord destinationPosition = gpsrOption->getDestinationPosition();
    double selfDistance = (destinationPosition - selfPosition).length();
    double perimeterRoutingStartDistance = (destinationPosition - perimeterRoutingStartPosition).length();
    if (selfDistance < perimeterRoutingStartDistance) {
        EV_DEBUG << "Switching to greedy routing: destination = " << destination << endl;
        gpsrOption->setRoutingMode(GPSRWR_GREEDY_ROUTING);
        gpsrOption->setPerimeterRoutingStartPosition(Coord());
        gpsrOption->setPerimeterRoutingForwardPosition(Coord());
        return findGreedyRoutingNextHop(datagram, destination);
    }
    else {
        L3Address& firstSenderAddress = gpsrOption->getCurrentFaceFirstSenderAddress();
        L3Address& firstReceiverAddress = gpsrOption->getCurrentFaceFirstReceiverAddress();
        L3Address nextNeighborAddress = getSenderNeighborAddress(datagram);
        double twr = 0;
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
            Coord intersection = intersectSections(perimeterRoutingStartPosition, destinationPosition, selfPosition, nextNeighborPosition);
            hasIntersection = !std::isnan(intersection.x);
            if (hasIntersection) {
                EV_DEBUG << "Edge to next hop intersects: intersection = " << intersection << ", nextNeighbor = " << nextNeighborAddress << ", firstSender = " << firstSenderAddress << ", firstReceiver = " << firstReceiverAddress << ", destination = " << destination << endl;
                gpsrOption->setCurrentFaceFirstSenderAddress(selfAddress);
                gpsrOption->setCurrentFaceFirstReceiverAddress(L3Address());
            }
        } while (hasIntersection);
        if (firstSenderAddress == selfAddress && firstReceiverAddress == nextNeighborAddress) {
            EV_DEBUG << "End of perimeter reached: firstSender = " << firstSenderAddress << ", firstReceiver = " << firstReceiverAddress << ", destination = " << destination << endl;
            return std::pair<L3Address,double> (L3Address(), 0);
        }
        else {
            if (gpsrOption->getCurrentFaceFirstReceiverAddress().isUnspecified())
                gpsrOption->setCurrentFaceFirstReceiverAddress(nextNeighborAddress);
            return std::pair<L3Address,double> (nextNeighborAddress, twr);
        }
    }
}

double GPSRWR::calculateTwr(Coord selfPosition, Coord selfSpeed, Coord selfAcceleration, EulerAngles selfDirection,
        Coord neighborPosition, Coord neighborSpeed, Coord neighborAcceleration, EulerAngles neighborDirection){

    // Compute TWR:
    //  TWR = SUM(f_s*|S_(i-1)-S_i|+f_a*|A_(i-1)-A_i|+f_d*|D_(i-1)-D_i|+[f_q*(1/LQ])
    //          S = speed of the vehicles
    //          f_s = speed weight factor
    //          A = acceleration of the vehicles
    //          f_a = acceleration weight factor
    //          D = direction of the vehicles
    //          f_d = direction weight factor
    //          F_q = Link Quality Weight Factor
    //          LQ = Link Quality between two adjacent vehicles

    double linkquality = 1;
    double speedTwr = speedWeight*std::abs(neighborSpeed.x/neighborDirection.alpha - selfSpeed.x/selfSpeed.x);
    double accelerationTwr = accelerationWeight*std::abs(neighborAcceleration.x/neighborDirection.alpha - selfAcceleration.x/selfSpeed.x);
    double directionTwr = directionWeight*std::abs(selfDirection.alpha-neighborDirection.alpha);
    double lqTwr = linkQualityWeight/linkquality;

    return speedTwr + accelerationTwr + directionTwr + lqTwr;
}

//
// routing
//

INetfilter::IHook::Result GPSRWR::routeDatagram(INetworkDatagram *datagram, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop)
{
    const L3Address& source = datagram->getSourceAddress();
    const L3Address& destination = datagram->getDestinationAddress();
    EV_INFO << "Finding next hop: source = " << source << ", destination = " << destination << endl;
    std::pair<L3Address,double> calcNextHop = findNextHop(datagram, destination);
    nextHop = calcNextHop.first;
    double twr = calcNextHop.second;
    if (nextHop.isUnspecified()) {
        EV_WARN << "No next hop found, dropping packet: source = " << source << ", destination = " << destination << endl;
        return DROP;
    }
    else {
        EV_INFO << "Next hop found: source = " << source << ", destination = " << destination << ", nextHop: " << nextHop << ", twr: " << twr << endl;
        GPSRWROption *gpsrOption = getGpsrwrOptionFromNetworkDatagram(datagram);
        gpsrOption->setSenderAddress(getSelfAddress());
        outputInterfaceEntry = interfaceTable->getInterfaceByName(outputInterface);
        ASSERT(outputInterfaceEntry);
        return ACCEPT;
    }
}

void GPSRWR::setGpsrwrOptionOnNetworkDatagram(INetworkDatagram *datagram)
{
    cPacket *networkPacket = check_and_cast<cPacket *>(datagram);
    GPSRWROption *gpsrOption = createGpsrwrOption(datagram->getDestinationAddress(), networkPacket->getEncapsulatedPacket());
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

GPSRWROption *GPSRWR::findGpsrwrOptionInNetworkDatagram(INetworkDatagram *datagram)
{
    cPacket *networkPacket = check_and_cast<cPacket *>(datagram);
    GPSRWROption *gpsrOption = nullptr;

#ifdef WITH_IPv4
    if (dynamic_cast<IPv4Datagram *>(networkPacket)) {
        IPv4Datagram *dgram = static_cast<IPv4Datagram *>(networkPacket);
        gpsrOption = check_and_cast_nullable<GPSRWROption *>(dgram->findOptionByType(IPOPTION_TLV_GPSR));
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
                gpsrOption = check_and_cast_nullable<GPSRWROption *>(&(hdr->getTlvOptions().at(i)));
        }
    }
    else
#endif
#ifdef WITH_GENERIC
    if (dynamic_cast<GenericDatagram *>(networkPacket)) {
        GenericDatagram *dgram = static_cast<GenericDatagram *>(networkPacket);
        int i = (dgram->getTlvOptions().findByType(GENERIC_TLVOPTION_TLV_GPSR));
        if (i >= 0)
            gpsrOption = check_and_cast_nullable<GPSRWROption *>(&(dgram->getTlvOptions().at(i)));
    }
    else
#endif
    {
    }
    return gpsrOption;
}

GPSRWROption *GPSRWR::getGpsrwrOptionFromNetworkDatagram(INetworkDatagram *datagram)
{
    GPSRWROption *gpsrOption = findGpsrwrOptionInNetworkDatagram(datagram);
    if (gpsrOption == nullptr)
        throw cRuntimeError("GPSRWR option not found in datagram!");
    return gpsrOption;
}

//
// netfilter
//

INetfilter::IHook::Result GPSRWR::datagramPreRoutingHook(INetworkDatagram *datagram, const InterfaceEntry *inputInterfaceEntry, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop)
{
    Enter_Method("datagramPreRoutingHook");
    const L3Address& destination = datagram->getDestinationAddress();
    if (destination.isMulticast() || destination.isBroadcast() || routingTable->isLocalAddress(destination))
        return ACCEPT;
    else
        return routeDatagram(datagram, outputInterfaceEntry, nextHop);
}

INetfilter::IHook::Result GPSRWR::datagramLocalOutHook(INetworkDatagram *datagram, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop)
{
    Enter_Method("datagramLocalOutHook");
    const L3Address& destination = datagram->getDestinationAddress();
    if (destination.isMulticast() || destination.isBroadcast() || routingTable->isLocalAddress(destination))
        return ACCEPT;
    else {
        setGpsrwrOptionOnNetworkDatagram(datagram);
        return routeDatagram(datagram, outputInterfaceEntry, nextHop);
    }
}

//
// lifecycle
//

bool GPSRWR::handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback)
{
    Enter_Method_Silent();
    if (dynamic_cast<NodeStartOperation *>(operation)) {
        if ((NodeStartOperation::Stage)stage == NodeStartOperation::STAGE_APPLICATION_LAYER)
            configureInterfaces();
    }
    else if (dynamic_cast<NodeShutdownOperation *>(operation)) {
        if ((NodeShutdownOperation::Stage)stage == NodeShutdownOperation::STAGE_APPLICATION_LAYER) {
            // TODO: send a beacon to remove ourself from peers neighbor position table
            neighborPositionTable.clear();
            cancelEvent(beaconTimer);
            cancelEvent(purgeNeighborsTimer);
        }
    }
    else if (dynamic_cast<NodeCrashOperation *>(operation)) {
        if ((NodeCrashOperation::Stage)stage == NodeCrashOperation::STAGE_CRASH) {
            neighborPositionTable.clear();
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

void GPSRWR::receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj, cObject *details)
{
    Enter_Method("receiveChangeNotification");
    if (signalID == NF_LINK_BREAK) {
        EV_WARN << "Received link break" << endl;
        // TODO: shall we remove the neighbor?
    }
}

} // namespace inet

