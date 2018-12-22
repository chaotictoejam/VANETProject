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

#include "vanetsim/routing/geoadvflq/GEOADVFLQ.h"
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

Define_Module(GEOADVFLQ);

static inline double determinant(double a1, double a2, double b1, double b2)
{
    return a1 * b2 - a2 * b1;
}

// KLUDGE: implement position registry protocol
GEOADVFLQPositionTable GEOADVFLQ::globalPositionTable;

GEOADVFLQ::GEOADVFLQ()
{
}

GEOADVFLQ::~GEOADVFLQ()
{
    cancelAndDelete(beaconTimer);
    cancelAndDelete(purgeNeighborsTimer);
}

//
// module interface
//

void GEOADVFLQ::initialize(int stage)
{
    cSimpleModule::initialize(stage);

    if (stage == INITSTAGE_LOCAL) {
        // GEOADVFLQ parameters
        planarizationMode = (GEOADVFLQPlanarizationMode)(int)par("planarizationMode");
        interfaces = par("interfaces");
        beaconInterval = par("initialBeaconInterval");
        maxJitter = par("maxJitter");
        neighborValidityInterval = par("neighborValidityInterval");
        isUrban = par("isUrban");
        // context
        host = getContainingNode(this);
        nodeStatus = dynamic_cast<NodeStatus *>(host->getSubmodule("status"));
        interfaceTable = getModuleFromPar<IInterfaceTable>(par("interfaceTableModule"), this);
        outputInterface = par("outputInterface");
        mobility = check_and_cast<IMobility *>(host->getSubmodule("mobility"));
        routingTable = getModuleFromPar<IRoutingTable>(par("routingTableModule"), this);
        networkProtocol = getModuleFromPar<INetfilter>(par("networkProtocolModule"), this);
        // internal
        beaconTimer = new cMessage("initialBeaconTimer");
        purgeNeighborsTimer = new cMessage("PurgeNeighborsTimer");
        beaconsSent = 0;
        beaconsReceived = 0;
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

        globalPositionTable.clear();
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

void GEOADVFLQ::handleMessage(cMessage *message)
{
    if (message->isSelfMessage())
        processSelfMessage(message);
    else
        processMessage(message);
}

//
// handling messages
//

void GEOADVFLQ::processSelfMessage(cMessage *message)
{
    if (message == beaconTimer)
        processBeaconTimer();
    else if (message == purgeNeighborsTimer)
        processPurgeNeighborsTimer();
    else
        throw cRuntimeError("Unknown self message");
}

void GEOADVFLQ::processMessage(cMessage *message)
{
    if (dynamic_cast<UDPPacket *>(message))
        processUDPPacket(static_cast<UDPPacket *>(message));
    else
        throw cRuntimeError("Unknown message");
}

//
// beacon timers
//

void GEOADVFLQ::scheduleBeaconTimer()
{
    EV_DEBUG << "Scheduling beacon timer" << endl;
    scheduleAt(simTime() + beaconInterval, beaconTimer);
}

void GEOADVFLQ::processBeaconTimer()
{
    EV_DEBUG << "Processing beacon timer" << endl;
    L3Address selfAddress = getSelfAddress();
    if (!selfAddress.isUnspecified()) {
        sendBeacon(createBeacon(), uniform(0, maxJitter).dbl());
        beaconInterval = getFLQBeaconInterval();
        // KLUDGE: implement position registry protocol
        globalPositionTable.setPosition(selfAddress, mobility->getCurrentPosition());
        Coord coord = mobility->getCurrentSpeed();
        double angle = atan(coord.y/coord.x);
        globalPositionTable.setDirection(selfAddress, angle);
    }
    scheduleBeaconTimer();
    schedulePurgeNeighborsTimer();
}

simtime_t GEOADVFLQ::getFLQBeaconInterval(){
    //Determine Network Link Quality
    double linkQuality = 0;
    if(beaconsSent != 0){
        linkQuality = beaconsReceived/beaconsSent;
    }
    //Determine Speed
    Coord spVec = mobility->getCurrentSpeed();
    double speed = sqrt((spVec.x* spVec.x)+ (spVec.y* spVec.y)+ (spVec.z* spVec.z));
    //Determine Neighbors
    int neighbors = getFLQNeighborCount();

    //determine fuzzy logic for inputs
    int neighborsFuzzy = 0;
    if(neighbors <= 1){
        neighborsFuzzy = 0; //low
    }else if(neighbors <= 4){
        neighborsFuzzy = 1; //medium
    }else {
        neighborsFuzzy = 2; //high
    }

    int speedFuzzy = 0;
    if(isUrban){
        if(speed < 5){
            speedFuzzy = 0; //slow
        }else if(speed < 20){
            speedFuzzy = 1; //medium
        }else {
            speedFuzzy = 2; //fast
        }
    }else{
        if(speed < 10){
            speedFuzzy = 0; //slow
        }else if(speed < 25){
            speedFuzzy = 1; //medium
        }else {
            speedFuzzy = 2; //fast
        }
    }

    int linkQualityFuzzy = 0;
    if(linkQuality <= .5){
        linkQualityFuzzy = 0; //low
    }else if(linkQuality <= .8){
        linkQualityFuzzy = 1; //medium
    }else {
        linkQualityFuzzy = 2; //high
    }

    typedef enum{
        Low = 0,
        MediumLow = 1,
        Medium = 2,
        MediumHigh = 3,
        High = 4,
        VeryHigh = 5
    } membership;

    membership output = High;
    //rules
    if(neighborsFuzzy == 0 && speedFuzzy == 0 && linkQualityFuzzy == 0){
        //1 Low      & Low    & Low       & High
        output = High;
    } else if(neighborsFuzzy == 0 && speedFuzzy == 0 && linkQualityFuzzy == 1){
        //2    & Low      & Low    & Medium    & Medium High
        output = MediumHigh;
    } else if(neighborsFuzzy == 0 && speedFuzzy == 0 && linkQualityFuzzy == 2){
        //3    & Low      & Low    & High      & Medium High
        output = MediumHigh;
    } else if(neighborsFuzzy == 0 && speedFuzzy == 1 && linkQualityFuzzy == 0){
        //4    & Low      & Medium & Low       & High
        output = High;
    } else if(neighborsFuzzy == 0 && speedFuzzy == 1 && linkQualityFuzzy == 1){
        //5    & Low      & Medium & Medium    & Medium High
        output = MediumHigh;
    } else if(neighborsFuzzy == 0 && speedFuzzy == 1 && linkQualityFuzzy == 2){
        //6    & Low      & Medium & High      & Medium
        output = Medium;
    } else if(neighborsFuzzy == 0 && speedFuzzy == 2 && linkQualityFuzzy == 0){
        //7    & Low      & High   & Low       & Very High
        output = VeryHigh;
    } else if(neighborsFuzzy == 0 && speedFuzzy == 2 && linkQualityFuzzy == 1){
        //8    & Low      & High   & Medium    & High
        output = High;
    } else if(neighborsFuzzy == 0 && speedFuzzy == 2 && linkQualityFuzzy == 2){
        //9    & Low      & High   & High      & Medium High
        output = MediumHigh;
    } else if(neighborsFuzzy == 1 && speedFuzzy == 0 && linkQualityFuzzy == 0){
        //10   & Medium   & Low    & Low       & Medium High
        output = MediumHigh;
    } else if(neighborsFuzzy == 1 && speedFuzzy == 0 && linkQualityFuzzy == 1){
        //11   & Medium   & Low    & Medium    & Medium
        output = Medium;
    } else if(neighborsFuzzy == 1 && speedFuzzy == 0 && linkQualityFuzzy == 2){
        //12   & Medium   & Low    & High      & Medium Low
        output = MediumLow;
    } else if(neighborsFuzzy == 1 && speedFuzzy == 1 && linkQualityFuzzy == 0){
        //13   & Medium   & Medium & Low       & Medium High
        output = MediumHigh;
    } else if(neighborsFuzzy == 1 && speedFuzzy == 1 && linkQualityFuzzy == 1){
        //14   & Medium   & Medium & Medium    & Medium
        output = Medium;
    } else if(neighborsFuzzy == 1 && speedFuzzy == 1 && linkQualityFuzzy == 2){
        //15   & Medium   & Medium & High      & Medium Low
        output = MediumLow;
    } else if(neighborsFuzzy == 1 && speedFuzzy == 2 && linkQualityFuzzy == 0){
        //16   & Medium   & High   & Low       & Medium High
        output = MediumHigh;
    } else if(neighborsFuzzy == 1 && speedFuzzy == 2 && linkQualityFuzzy == 1){
        //17   & Medium   & High   & Medium    & Medium
        output = Medium;
    } else if(neighborsFuzzy == 1 && speedFuzzy == 2 && linkQualityFuzzy == 2){
        //18   & Medium   & High   & High      & Medium Low
        output = MediumLow;
    } else if(neighborsFuzzy == 2 && speedFuzzy == 0 && linkQualityFuzzy == 0){
        //19   & High     & Low    & Low       & Medium
        output = Medium;
    } else if(neighborsFuzzy == 2 && speedFuzzy == 0 && linkQualityFuzzy == 1){
        //20   & High     & Low    & Medium    & Medium Low
        output = MediumLow;
    } else if(neighborsFuzzy == 2 && speedFuzzy == 0 && linkQualityFuzzy == 2){
        //21   & High     & Low    & High      & Low
        output = Low;
    } else if(neighborsFuzzy == 2 && speedFuzzy == 1 && linkQualityFuzzy == 0){
        //22   & High     & Medium & Low       & Medium Low
        output = MediumLow;
    } else if(neighborsFuzzy == 2 && speedFuzzy == 1 && linkQualityFuzzy == 1){
        //23   & High     & Medium & Medium    & Low
        output = Low;
    } else if(neighborsFuzzy == 2 && speedFuzzy == 1 && linkQualityFuzzy == 2){
        //24   & High     & Medium & High      & Low
        output = Low;
    } else if(neighborsFuzzy == 2 && speedFuzzy == 2 && linkQualityFuzzy == 0){
        //25   & High     & High   & Low       & Medium Low
        output = MediumLow;
    } else if(neighborsFuzzy == 2 && speedFuzzy == 2 && linkQualityFuzzy == 1){
        //26   & High     & High   & Medium    & Medium Low
        output = MediumLow;
    } else if(neighborsFuzzy == 2 && speedFuzzy == 2 && linkQualityFuzzy == 2){
        //27   & High     & High   & High      & Medium Low
        output = MediumLow;
    }

    int interval = 0.5;
    if (output == Low) {
        interval = 3;
    } else if (output == MediumLow) {
        interval = 2.5;
    } else if (output == Medium) {
        interval = 2;
    } else if (output == MediumHigh) {
        interval = 1.5;
    } else if (output == High) {
        interval = 1;
    } else if (output == VeryHigh) {
        interval = 0.5;
    }

    EV << "Beacon timer set to" << interval << endl;
    return interval;
}

//
// handling purge neighbors timers
//

void GEOADVFLQ::schedulePurgeNeighborsTimer()
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

void GEOADVFLQ::processPurgeNeighborsTimer()
{
    EV_DEBUG << "Processing purge neighbors timer" << endl;
    purgeNeighbors();
    schedulePurgeNeighborsTimer();
}

//
// handling UDP packets
//

void GEOADVFLQ::sendUDPPacket(UDPPacket *packet, double delay)
{
    if (delay == 0)
        send(packet, "ipOut");
    else
        sendDelayed(packet, delay, "ipOut");
}

void GEOADVFLQ::processUDPPacket(UDPPacket *packet)
{
    cPacket *encapsulatedPacket = packet->decapsulate();
    if (dynamic_cast<GEOADVFLQBeacon *>(encapsulatedPacket))
        processBeacon(static_cast<GEOADVFLQBeacon *>(encapsulatedPacket));
    else
        throw cRuntimeError("Unknown UDP packet");
    delete packet;
}

//
// handling beacons
//

GEOADVFLQBeacon *GEOADVFLQ::createBeacon()
{
    GEOADVFLQBeacon *beacon = new GEOADVFLQBeacon("GEOADVFLQBeacon");
    beacon->setAddress(getSelfAddress());
    beacon->setPosition(mobility->getCurrentPosition());
    beacon->setByteLength(getSelfAddress().getAddressType()->getAddressByteLength() + positionByteLength);
    return beacon;
}

void GEOADVFLQ::sendBeacon(GEOADVFLQBeacon *beacon, double delay)
{
    EV_INFO << "Sending beacon: address = " << beacon->getAddress() << ", position = " << beacon->getPosition() << endl;
    INetworkProtocolControlInfo *networkProtocolControlInfo = addressType->createNetworkProtocolControlInfo();
    networkProtocolControlInfo->setTransportProtocol(IP_PROT_MANET);
    networkProtocolControlInfo->setHopLimit(255);
    networkProtocolControlInfo->setDestinationAddress(addressType->getLinkLocalManetRoutersMulticastAddress());
    networkProtocolControlInfo->setSourceAddress(getSelfAddress());
    UDPPacket *udpPacket = new UDPPacket(beacon->getName());
    udpPacket->encapsulate(beacon);
    udpPacket->setSourcePort(GEOADVFLQ_UDP_PORT);
    udpPacket->setDestinationPort(GEOADVFLQ_UDP_PORT);
    udpPacket->setControlInfo(dynamic_cast<cObject *>(networkProtocolControlInfo));
    sendUDPPacket(udpPacket, delay);
}

void GEOADVFLQ::processBeacon(GEOADVFLQBeacon *beacon)
{
    EV_INFO << "Processing beacon: address = " << beacon->getAddress() << ", position = " << beacon->getPosition() << endl;
    neighborPositionTable.setPosition(beacon->getAddress(), beacon->getPosition());
    delete beacon;
}

//
// handling packets
//

GEOADVFLQOption *GEOADVFLQ::createGeoadvOption(L3Address destination, cPacket *content)
{
    GEOADVFLQOption *gpsrOption = new GEOADVFLQOption();
    gpsrOption->setRoutingMode(GEOADVFLQ_GREEDY_ROUTING);
    // KLUDGE: implement position registry protocol
    gpsrOption->setDestinationPosition(getDestinationPosition(destination));
    gpsrOption->setLength(computeOptionLength(gpsrOption));
    return gpsrOption;
}

int GEOADVFLQ::computeOptionLength(GEOADVFLQOption *option)
{
    // routingMode
    int routingModeBytes = 1;
    // destinationPosition, twrRoutingStartPosition, twrRoutingForwardPosition
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

bool GEOADVFLQ::isNodeUp() const
{
    return !nodeStatus || nodeStatus->getState() == NodeStatus::UP;
}

void GEOADVFLQ::configureInterfaces()
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

Coord GEOADVFLQ::intersectSections(Coord& begin1, Coord& end1, Coord& begin2, Coord& end2)
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

Coord GEOADVFLQ::getDestinationPosition(const L3Address& address) const
{
    // KLUDGE: implement position registry protocol
    return globalPositionTable.getPosition(address);
}

Coord GEOADVFLQ::getNeighborPosition(const L3Address& address) const
{
    return neighborPositionTable.getPosition(address);
}

//
// angle
//

double GEOADVFLQ::getVectorAngle(Coord vector)
{
    double angle = atan2(-vector.y, vector.x);
    if (angle < 0)
        angle += 2 * M_PI;
    return angle;
}

double GEOADVFLQ::getDestinationAngle(const L3Address& address)
{
    return getVectorAngle(getDestinationPosition(address) - mobility->getCurrentPosition());
}

double GEOADVFLQ::getNeighborAngle(const L3Address& address)
{
    return getVectorAngle(getNeighborPosition(address) - mobility->getCurrentPosition());
}

//
// address
//

std::string GEOADVFLQ::getHostName() const
{
    return host->getFullName();
}

L3Address GEOADVFLQ::getSelfAddress() const
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

L3Address GEOADVFLQ::getSenderNeighborAddress(INetworkDatagram *datagram) const
{
    const GEOADVFLQOption *gpsrOption = getGeoadvOptionFromNetworkDatagram(datagram);
    return gpsrOption->getSenderAddress();
}

//
// neighbor
//

simtime_t GEOADVFLQ::getNextNeighborExpiration()
{
    simtime_t oldestPosition = neighborPositionTable.getOldestPosition();
    if (oldestPosition == SimTime::getMaxTime())
        return oldestPosition;
    else
        return oldestPosition + neighborValidityInterval;
}

void GEOADVFLQ::purgeNeighbors()
{
    neighborPositionTable.removeOldPositions(simTime() - neighborValidityInterval);
}

std::vector<L3Address> GEOADVFLQ::getPlanarNeighbors()
{
    std::vector<L3Address> planarNeighbors;
    std::vector<L3Address> neighborAddresses = neighborPositionTable.getAddresses();
    Coord selfPosition = mobility->getCurrentPosition();
    for (auto it = neighborAddresses.begin(); it != neighborAddresses.end(); it++) {
        const L3Address& neighborAddress = *it;
        Coord neighborPosition = neighborPositionTable.getPosition(neighborAddress);
        if (planarizationMode == GEOADVFLQ_RNG_PLANARIZATION) {
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
        else if (planarizationMode == GEOADVFLQ_GG_PLANARIZATION) {
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

int GEOADVFLQ::getFLQNeighborCount(){
    int count = 0;

    std::vector<L3Address> neighborAddresses = neighborPositionTable.getAddresses();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord selfSpeed = mobility->getCurrentSpeed();
    double selfAngle = atan(selfSpeed.y/selfSpeed.x);
    for (auto it = neighborAddresses.begin(); it != neighborAddresses.end(); it++) {
        const L3Address& neighborAddress = *it;
        Coord neighborPosition = neighborPositionTable.getPosition(neighborAddress);
        double neighborDirection = neighborPositionTable.getDirection(neighborAddress);
        if (planarizationMode == GEOADVFLQ_RNG_PLANARIZATION) {
            for (auto & neighborAddresse : neighborAddresses) {
                const L3Address& witnessAddress = neighborAddresse;
                Coord witnessPosition = neighborPositionTable.getPosition(witnessAddress);
                if (*it == neighborAddresse){
                    if((std::abs(selfAngle-neighborDirection)* 180 / 3.14159265) < 45) {//less than 45 degrees
                        count++;
                    }
                }
            }
        }
        else if (planarizationMode == GEOADVFLQ_GG_PLANARIZATION) {
            Coord middlePosition = (selfPosition + neighborPosition) / 2;
            for (auto & neighborAddresse : neighborAddresses) {
                const L3Address& witnessAddress = neighborAddresse;
                Coord witnessPosition = neighborPositionTable.getPosition(witnessAddress);
                if (*it == neighborAddresse){
                    if((std::abs(selfAngle-neighborDirection)* 180 / 3.14159265) < 45) {//less than 45 degrees
                        count++;
                    }
                }
            }
        }
        else
            throw cRuntimeError("Unknown planarization mode");
    }

    return count;
}

L3Address GEOADVFLQ::getNextPlanarNeighborCounterClockwise(const L3Address& startNeighborAddress, double startNeighborAngle)
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

L3Address GEOADVFLQ::findNextHop(INetworkDatagram *datagram, const L3Address& destination)
{
    GEOADVFLQOption *gpsrOption = getGeoadvOptionFromNetworkDatagram(datagram);
    switch (gpsrOption->getRoutingMode()) {
        case GEOADVFLQ_GREEDY_ROUTING: return findGreedyRoutingNextHop(datagram, destination);
        case GEOADVFLQ_TWR_ROUTING: return findTWRRoutingNextHop(datagram, destination);
        default: throw cRuntimeError("Unknown routing mode");
    }
}

L3Address GEOADVFLQ::findGreedyRoutingNextHop(INetworkDatagram *datagram, const L3Address& destination)
{
    EV_DEBUG << "Finding next hop using greedy routing: destination = " << destination << endl;
    GEOADVFLQOption *gpsrOption = getGeoadvOptionFromNetworkDatagram(datagram);
    L3Address selfAddress = getSelfAddress();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord destinationPosition = gpsrOption->getDestinationPosition();
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
        gpsrOption->setRoutingMode(GEOADVFLQ_TWR_ROUTING);
        gpsrOption->setTwrRoutingStartPosition(selfPosition);
        gpsrOption->setCurrentFaceFirstSenderAddress(selfAddress);
        gpsrOption->setCurrentFaceFirstReceiverAddress(L3Address());
        return findTWRRoutingNextHop(datagram, destination);
    }
    else
        return bestNeighbor;
}

L3Address GEOADVFLQ::findTWRRoutingNextHop(INetworkDatagram *datagram, const L3Address& destination)
{
    EV_DEBUG << "Finding next hop using perimeter routing: destination = " << destination << endl;
    GEOADVFLQOption *gpsrOption = getGeoadvOptionFromNetworkDatagram(datagram);
    L3Address selfAddress = getSelfAddress();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord twrRoutingStartPosition = gpsrOption->getTwrRoutingStartPosition();
    Coord destinationPosition = gpsrOption->getDestinationPosition();
    double selfDistance = (destinationPosition - selfPosition).length();
    double twrRoutingStartDistance = (destinationPosition - twrRoutingStartPosition).length();
    if (selfDistance < twrRoutingStartDistance) {
        EV_DEBUG << "Switching to greedy routing: destination = " << destination << endl;
        gpsrOption->setRoutingMode(GEOADVFLQ_GREEDY_ROUTING);
        gpsrOption->setTwrRoutingStartPosition(Coord());
        gpsrOption->setTwrRoutingForwardPosition(Coord());
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
            Coord intersection = intersectSections(twrRoutingStartPosition, destinationPosition, selfPosition, nextNeighborPosition);
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

INetfilter::IHook::Result GEOADVFLQ::routeDatagram(INetworkDatagram *datagram, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop)
{
    const L3Address& source = datagram->getSourceAddress();
    const L3Address& destination = datagram->getDestinationAddress();
    EV_INFO << "Finding next hop: source = " << source << ", destination = " << destination << endl;
    nextHop = findNextHop(datagram, destination);
    if (nextHop.isUnspecified()) {
        EV_WARN << "No next hop found, AODV beacon request start: source = " << source << ", destination = " << destination << endl;
        //AODV Start
        return DROP;
    }
    else {
        EV_INFO << "Next hop found: source = " << source << ", destination = " << destination << ", nextHop: " << nextHop << endl;
        GEOADVFLQOption *gpsrOption = getGeoadvOptionFromNetworkDatagram(datagram);
        gpsrOption->setSenderAddress(getSelfAddress());
        outputInterfaceEntry = interfaceTable->getInterfaceByName(outputInterface);
        ASSERT(outputInterfaceEntry);
        return ACCEPT;
    }
}

void GEOADVFLQ::setGeoadvOptionOnNetworkDatagram(INetworkDatagram *datagram)
{
    cPacket *networkPacket = check_and_cast<cPacket *>(datagram);
    GEOADVFLQOption *gpsrOption = createGeoadvOption(datagram->getDestinationAddress(), networkPacket->getEncapsulatedPacket());
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

GEOADVFLQOption *GEOADVFLQ::findGeoadvOptionInNetworkDatagram(INetworkDatagram *datagram)
{
    cPacket *networkPacket = check_and_cast<cPacket *>(datagram);
    GEOADVFLQOption *gpsrOption = nullptr;

#ifdef WITH_IPv4
    if (dynamic_cast<IPv4Datagram *>(networkPacket)) {
        IPv4Datagram *dgram = static_cast<IPv4Datagram *>(networkPacket);
        gpsrOption = check_and_cast_nullable<GEOADVFLQOption *>(dgram->findOptionByType(IPOPTION_TLV_GPSR));
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
                gpsrOption = check_and_cast_nullable<GEOADVFLQOption *>(&(hdr->getTlvOptions().at(i)));
        }
    }
    else
#endif
#ifdef WITH_GENERIC
    if (dynamic_cast<GenericDatagram *>(networkPacket)) {
        GenericDatagram *dgram = static_cast<GenericDatagram *>(networkPacket);
        int i = (dgram->getTlvOptions().findByType(GENERIC_TLVOPTION_TLV_GPSR));
        if (i >= 0)
            gpsrOption = check_and_cast_nullable<GEOADVFLQOption *>(&(dgram->getTlvOptions().at(i)));
    }
    else
#endif
    {
    }
    return gpsrOption;
}

GEOADVFLQOption *GEOADVFLQ::getGeoadvOptionFromNetworkDatagram(INetworkDatagram *datagram)
{
    GEOADVFLQOption *gpsrOption = findGeoadvOptionInNetworkDatagram(datagram);
    if (gpsrOption == nullptr)
        throw cRuntimeError("GEOADVFLQ option not found in datagram!");
    return gpsrOption;
}

//
// netfilter
//

INetfilter::IHook::Result GEOADVFLQ::datagramPreRoutingHook(INetworkDatagram *datagram, const InterfaceEntry *inputInterfaceEntry, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop)
{
    Enter_Method("datagramPreRoutingHook");
    const L3Address& destination = datagram->getDestinationAddress();
    if (destination.isMulticast() || destination.isBroadcast() || routingTable->isLocalAddress(destination))
        return ACCEPT;
    else
        return routeDatagram(datagram, outputInterfaceEntry, nextHop);
}

INetfilter::IHook::Result GEOADVFLQ::datagramLocalOutHook(INetworkDatagram *datagram, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop)
{
    Enter_Method("datagramLocalOutHook");
    const L3Address& destination = datagram->getDestinationAddress();
    if (destination.isMulticast() || destination.isBroadcast() || routingTable->isLocalAddress(destination))
        return ACCEPT;
    else {
        setGeoadvOptionOnNetworkDatagram(datagram);
        return routeDatagram(datagram, outputInterfaceEntry, nextHop);
    }
}

//
// lifecycle
//

bool GEOADVFLQ::handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback)
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

void GEOADVFLQ::receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj, cObject *details)
{
    Enter_Method("receiveChangeNotification");
    if (signalID == NF_LINK_BREAK) {
        EV_WARN << "Received link break" << endl;
        // TODO: shall we remove the neighbor?
    }
}

} // namespace inet

