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
#include "vanetsim/routing/gpsrflq/GPSRFLQ.h"

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

Define_Module(GPSRFLQ);

static inline double determinant(double a1, double a2, double b1, double b2)
{
    return a1 * b2 - a2 * b1;
}

GPSRFLQ::GPSRFLQ()
{
}

GPSRFLQ::~GPSRFLQ()
{
    cancelAndDelete(beaconTimer);
    cancelAndDelete(purgeNeighborsTimer);
}

//
// module interface
//

void GPSRFLQ::initialize(int stage)
{
    if (stage == INITSTAGE_ROUTING_PROTOCOLS)
        addressType = getSelfAddress().getAddressType();

    RoutingProtocolBase::initialize(stage);

    if (stage == INITSTAGE_LOCAL) {
        // GPSRFLQ parameters
        const char *planarizationModeString = par("planarizationMode");
        if (!strcmp(planarizationModeString, ""))
            planarizationMode = GPSRFLQ_NO_PLANARIZATION;
        else if (!strcmp(planarizationModeString, "GG"))
            planarizationMode = GPSRFLQ_GG_PLANARIZATION;
        else if (!strcmp(planarizationModeString, "RNG"))
            planarizationMode = GPSRFLQ_RNG_PLANARIZATION;
        else
            throw cRuntimeError("Unknown planarization mode");
        interfaces = par("interfaces");
        beaconInterval = par("beaconInterval");
        maxJitter = par("maxJitter");
        neighborValidityInterval = par("neighborValidityInterval");
        isUrban = par("isUrban");
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
        beaconsSent = 0;
        beaconsReceived = 0;
        // packet size
        positionByteLength = par("positionByteLength");
        // KLUDGE: implement position registry protocol
        globalPositionTable.clear();
    }
    else if (stage == INITSTAGE_ROUTING_PROTOCOLS) {
        registerService(Protocol::manet, nullptr, gate("socketIn"));
        registerProtocol(Protocol::manet, gate("socketOut"), nullptr);
        host->subscribe(linkBrokenSignal, this);
        networkProtocol->registerHook(0, this);
        WATCH(neighborPositionTable);
    }
}

void GPSRFLQ::handleMessageWhenUp(cMessage *message)
{
    if (message->isSelfMessage())
        processSelfMessage(message);
    else
        processMessage(message);
}

//
// handling messages
//

void GPSRFLQ::processSelfMessage(cMessage *message)
{
    if (message == beaconTimer)
        processBeaconTimer();
    else if (message == purgeNeighborsTimer)
        processPurgeNeighborsTimer();
    else
        throw cRuntimeError("Unknown self message");
}

void GPSRFLQ::processMessage(cMessage *message)
{
    if (auto pk = dynamic_cast<Packet *>(message))
        processUdpPacket(pk);
    else
        throw cRuntimeError("Unknown message");
}

//
// beacon timers
//

void GPSRFLQ::scheduleBeaconTimer()
{
    EV_DEBUG << "Scheduling beacon timer" << endl;
    scheduleAt(simTime() + beaconInterval + uniform(-1, 1) * maxJitter, beaconTimer);
}

void GPSRFLQ::processBeaconTimer()
{
    EV_DEBUG << "Processing beacon timer" << endl;
    const L3Address selfAddress = getSelfAddress();
    if (!selfAddress.isUnspecified()) {
        beaconInterval = getFLQBeaconInterval();
        maxJitter = .5*beaconInterval;
        sendBeacon(createBeacon());
        storeSelfPositionInGlobalRegistry();
    }
    scheduleBeaconTimer();
    schedulePurgeNeighborsTimer();
}

double GPSRFLQ::getFLQBeaconInterval(){
    //Determine Network Link Quality
    double linkQuality = 0;
    if(beaconsSent != 0){
        linkQuality = beaconsReceived/beaconsSent;
    }
    //Determine Speed
    Coord spVec = mobility->getCurrentVelocity();
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

    double interval = 0.5;
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

void GPSRFLQ::schedulePurgeNeighborsTimer()
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

void GPSRFLQ::processPurgeNeighborsTimer()
{
    EV_DEBUG << "Processing purge neighbors timer" << endl;
    purgeNeighbors();
    schedulePurgeNeighborsTimer();
}

//
// handling UDP packets
//

void GPSRFLQ::sendUdpPacket(Packet *packet)
{
    send(packet, "socketOut");
}

void GPSRFLQ::processUdpPacket(Packet *packet)
{
    packet->popAtFront<UdpHeader>();
    processBeacon(packet);
    schedulePurgeNeighborsTimer();
}

//
// handling beacons
//

const Ptr<GPSRFLQBeacon> GPSRFLQ::createBeacon()
{
    const auto& beacon = makeShared<GPSRFLQBeacon>();
    beacon->setAddress(getSelfAddress());
    beacon->setPosition(mobility->getCurrentPosition());
    beacon->setChunkLength(B(getSelfAddress().getAddressType()->getAddressByteLength() + positionByteLength));
    return beacon;
}

void GPSRFLQ::sendBeacon(const Ptr<GPSRFLQBeacon>& beacon)
{
    EV_INFO << "Sending beacon: address = " << beacon->getAddress() << ", position = " << beacon->getPosition() << endl;
    Packet *udpPacket = new Packet("GPSRFLQBeacon");
    udpPacket->insertAtBack(beacon);
    auto udpHeader = makeShared<UdpHeader>();
    udpHeader->setSourcePort(GPSRFLQ_UDP_PORT);
    udpHeader->setDestinationPort(GPSRFLQ_UDP_PORT);
    udpHeader->setCrcMode(CRC_DISABLED);
    udpPacket->insertAtFront(udpHeader);
    auto addresses = udpPacket->addTag<L3AddressReq>();
    addresses->setSrcAddress(getSelfAddress());
    addresses->setDestAddress(addressType->getLinkLocalManetRoutersMulticastAddress());
    udpPacket->addTag<HopLimitReq>()->setHopLimit(255);
    udpPacket->addTag<PacketProtocolTag>()->setProtocol(&Protocol::manet);
    udpPacket->addTag<DispatchProtocolReq>()->setProtocol(addressType->getNetworkProtocol());
    beaconsSent++;
    sendUdpPacket(udpPacket);
}

void GPSRFLQ::processBeacon(Packet *packet)
{
    const auto& beacon = packet->peekAtFront<GPSRFLQBeacon>();
    EV_INFO << "Processing beacon: address = " << beacon->getAddress() << ", position = " << beacon->getPosition() << endl;
    neighborPositionTable.setPosition(beacon->getAddress(), beacon->getPosition());
    beaconsReceived++;
    delete packet;
}
//
// handling packets
//

GPSRFLQOption *GPSRFLQ::createGPSRFLQOption(L3Address destination)
{
    GPSRFLQOption *gpsrflqOption = new GPSRFLQOption();
    gpsrflqOption->setRoutingMode(GPSRFLQ_GREEDY_ROUTING);
    gpsrflqOption->setDestinationPosition(lookupPositionInGlobalRegistry(destination));
    gpsrflqOption->setLength(computeOptionLength(gpsrflqOption));
    return gpsrflqOption;
}

int GPSRFLQ::computeOptionLength(GPSRFLQOption *option)
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

void GPSRFLQ::configureInterfaces()
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
GPSRFLQPositionTable GPSRFLQ::globalPositionTable;

Coord GPSRFLQ::lookupPositionInGlobalRegistry(const L3Address& address) const
{
    // KLUDGE: implement position registry protocol
    return globalPositionTable.getPosition(address);
}

void GPSRFLQ::storePositionInGlobalRegistry(const L3Address& address, const Coord& position) const
{
    // KLUDGE: implement position registry protocol
    globalPositionTable.setPosition(address, position);
}

void GPSRFLQ::storeSelfPositionInGlobalRegistry() const
{
    auto selfAddress = getSelfAddress();
    if (!selfAddress.isUnspecified())
        storePositionInGlobalRegistry(selfAddress, mobility->getCurrentPosition());
}

Coord GPSRFLQ::computeIntersectionInsideLineSegments(Coord& begin1, Coord& end1, Coord& begin2, Coord& end2) const
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

Coord GPSRFLQ::getNeighborPosition(const L3Address& address) const
{
    return neighborPositionTable.getPosition(address);
}

//
// angle
//

double GPSRFLQ::getVectorAngle(Coord vector) const
{
    ASSERT(vector != Coord::ZERO);
    double angle = atan2(-vector.y, vector.x);
    if (angle < 0)
        angle += 2 * M_PI;
    return angle;
}

double GPSRFLQ::getNeighborAngle(const L3Address& address) const
{
    return getVectorAngle(getNeighborPosition(address) - mobility->getCurrentPosition());
}

//
// address
//

std::string GPSRFLQ::getHostName() const
{
    return host->getFullName();
}

L3Address GPSRFLQ::getSelfAddress() const
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

L3Address GPSRFLQ::getSenderNeighborAddress(const Ptr<const NetworkHeaderBase>& networkHeader) const
{
    const GPSRFLQOption *gpsrflqOption = getGPSRFLQOptionFromNetworkDatagram(networkHeader);
    return gpsrflqOption->getSenderAddress();
}

//
// neighbor
//

simtime_t GPSRFLQ::getNextNeighborExpiration()
{
    simtime_t oldestPosition = neighborPositionTable.getOldestPosition();
    if (oldestPosition == SimTime::getMaxTime())
        return oldestPosition;
    else
        return oldestPosition + neighborValidityInterval;
}

void GPSRFLQ::purgeNeighbors()
{
    neighborPositionTable.removeOldPositions(simTime() - neighborValidityInterval);
}

std::vector<L3Address> GPSRFLQ::getPlanarNeighbors() const
{
    std::vector<L3Address> planarNeighbors;
    std::vector<L3Address> neighborAddresses = neighborPositionTable.getAddresses();
    Coord selfPosition = mobility->getCurrentPosition();
    for (auto it = neighborAddresses.begin(); it != neighborAddresses.end(); it++) {
        auto neighborAddress = *it;
        Coord neighborPosition = neighborPositionTable.getPosition(neighborAddress);
        if (planarizationMode == GPSRFLQ_NO_PLANARIZATION)
            return neighborAddresses;
        else if (planarizationMode == GPSRFLQ_RNG_PLANARIZATION) {
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
        else if (planarizationMode == GPSRFLQ_GG_PLANARIZATION) {
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


int GPSRFLQ::getFLQNeighborCount(){
    int count = 0;

    std::vector<L3Address> neighborAddresses = neighborPositionTable.getAddresses();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord selfSpeed = mobility->getCurrentVelocity();
    double selfAngle = atan(selfSpeed.y/selfSpeed.x);
    for (auto it = neighborAddresses.begin(); it != neighborAddresses.end(); it++) {
        const L3Address& neighborAddress = *it;
        Coord neighborPosition = neighborPositionTable.getPosition(neighborAddress);
        double neighborDirection = neighborPositionTable.getDirection(neighborAddress);
        if (planarizationMode == GPSRFLQ_RNG_PLANARIZATION) {
            for (auto & neighborAddresse : neighborAddresses) {
                const L3Address& witnessAddress = neighborAddresse;
                //Coord witnessPosition = neighborPositionTable.getPosition(witnessAddress);
                if (*it == neighborAddresse){
                    if((std::abs(selfAngle-neighborDirection)* 180 / 3.14159265) < 45) {//less than 45 degrees
                        count++;
                    }
                }
            }
        }
        else if (planarizationMode == GPSRFLQ_GG_PLANARIZATION) {
            //Coord middlePosition = (selfPosition + neighborPosition) / 2;
            for (auto & neighborAddresse : neighborAddresses) {
                const L3Address& witnessAddress = neighborAddresse;
                //Coord witnessPosition = neighborPositionTable.getPosition(witnessAddress);
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

std::vector<L3Address> GPSRFLQ::getPlanarNeighborsCounterClockwise(double startAngle) const
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

L3Address GPSRFLQ::findNextHop(const L3Address& destination, GPSRFLQOption *gpsrflqOption)
{
    switch (gpsrflqOption->getRoutingMode()) {
        case GPSRFLQ_GREEDY_ROUTING: return findGreedyRoutingNextHop(destination, gpsrflqOption);
        case GPSRFLQ_PERIMETER_ROUTING: return findPerimeterRoutingNextHop(destination, gpsrflqOption);
        default: throw cRuntimeError("Unknown routing mode");
    }
}

L3Address GPSRFLQ::findGreedyRoutingNextHop(const L3Address& destination, GPSRFLQOption *gpsrflqOption)
{
    EV_DEBUG << "Finding next hop using greedy routing: destination = " << destination << endl;
    L3Address selfAddress = getSelfAddress();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord destinationPosition = gpsrflqOption->getDestinationPosition();
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
        gpsrflqOption->setRoutingMode(GPSRFLQ_PERIMETER_ROUTING);
        gpsrflqOption->setPerimeterRoutingStartPosition(selfPosition);
        gpsrflqOption->setPerimeterRoutingForwardPosition(selfPosition);
        gpsrflqOption->setCurrentFaceFirstSenderAddress(selfAddress);
        gpsrflqOption->setCurrentFaceFirstReceiverAddress(L3Address());
        return findPerimeterRoutingNextHop(destination, gpsrflqOption);
    }
    else
        return bestNeighbor;
}

L3Address GPSRFLQ::findPerimeterRoutingNextHop(const L3Address& destination, GPSRFLQOption *gpsrflqOption)
{
    EV_DEBUG << "Finding next hop using perimeter routing: destination = " << destination << endl;
    L3Address selfAddress = getSelfAddress();
    Coord selfPosition = mobility->getCurrentPosition();
    Coord perimeterRoutingStartPosition = gpsrflqOption->getPerimeterRoutingStartPosition();
    Coord destinationPosition = gpsrflqOption->getDestinationPosition();
    double selfDistance = (destinationPosition - selfPosition).length();
    double perimeterRoutingStartDistance = (destinationPosition - perimeterRoutingStartPosition).length();
    if (selfDistance < perimeterRoutingStartDistance) {
        EV_DEBUG << "Switching to greedy routing: destination = " << destination << endl;
        if (displayBubbles && hasGUI())
            getContainingNode(host)->bubble("Switching to greedy routing");
        gpsrflqOption->setRoutingMode(GPSRFLQ_GREEDY_ROUTING);
        gpsrflqOption->setPerimeterRoutingStartPosition(Coord());
        gpsrflqOption->setPerimeterRoutingForwardPosition(Coord());
        gpsrflqOption->setCurrentFaceFirstSenderAddress(L3Address());
        gpsrflqOption->setCurrentFaceFirstReceiverAddress(L3Address());
        return findGreedyRoutingNextHop(destination, gpsrflqOption);
    }
    else {
        const L3Address& firstSenderAddress = gpsrflqOption->getCurrentFaceFirstSenderAddress();
        const L3Address& firstReceiverAddress = gpsrflqOption->getCurrentFaceFirstReceiverAddress();
        auto senderNeighborAddress = gpsrflqOption->getSenderAddress();
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
                gpsrflqOption->setCurrentFaceFirstSenderAddress(selfAddress);
                gpsrflqOption->setCurrentFaceFirstReceiverAddress(L3Address());
                gpsrflqOption->setPerimeterRoutingForwardPosition(intersection);
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
            if (gpsrflqOption->getCurrentFaceFirstReceiverAddress().isUnspecified())
                gpsrflqOption->setCurrentFaceFirstReceiverAddress(selectedNeighborAddress);
            return selectedNeighborAddress;
        }
    }
}

//
// routing
//

INetfilter::IHook::Result GPSRFLQ::routeDatagram(Packet *datagram, GPSRFLQOption *gpsrflqOption)
{
    const auto& networkHeader = getNetworkProtocolHeader(datagram);
    const L3Address& source = networkHeader->getSourceAddress();
    const L3Address& destination = networkHeader->getDestinationAddress();
    EV_INFO << "Finding next hop: source = " << source << ", destination = " << destination << endl;
    auto nextHop = findNextHop(destination, gpsrflqOption);
    datagram->addTagIfAbsent<NextHopAddressReq>()->setNextHopAddress(nextHop);
    if (nextHop.isUnspecified()) {
        EV_WARN << "No next hop found, dropping packet: source = " << source << ", destination = " << destination << endl;
        if (displayBubbles && hasGUI())
            getContainingNode(host)->bubble("No next hop found, dropping packet");
        return DROP;
    }
    else {
        EV_INFO << "Next hop found: source = " << source << ", destination = " << destination << ", nextHop: " << nextHop << endl;
        gpsrflqOption->setSenderAddress(getSelfAddress());
        auto interfaceEntry = CHK(interfaceTable->findInterfaceByName(outputInterface));
        datagram->addTagIfAbsent<InterfaceReq>()->setInterfaceId(interfaceEntry->getInterfaceId());
        return ACCEPT;
    }
}

void GPSRFLQ::setGPSRFLQOptionOnNetworkDatagram(Packet *packet, const Ptr<const NetworkHeaderBase>& networkHeader, GPSRFLQOption *gpsrflqOption)
{
    packet->trimFront();
#ifdef WITH_IPv4
    if (dynamicPtrCast<const Ipv4Header>(networkHeader)) {
        auto ipv4Header = removeNetworkProtocolHeader<Ipv4Header>(packet);
        gpsrflqOption->setType(IPOPTION_TLV_GPSR);
        B oldHlen = ipv4Header->calculateHeaderByteLength();
        ASSERT(ipv4Header->getHeaderLength() == oldHlen);
        ipv4Header->addOption(gpsrflqOption);
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
        gpsrflqOption->setType(IPv6TLVOPTION_TLV_GPSR);
        B oldHlen = ipv6Header->calculateHeaderByteLength();
        Ipv6HopByHopOptionsHeader *hdr = check_and_cast_nullable<Ipv6HopByHopOptionsHeader *>(ipv6Header->findExtensionHeaderByTypeForUpdate(IP_PROT_IPv6EXT_HOP));
        if (hdr == nullptr) {
            hdr = new Ipv6HopByHopOptionsHeader();
            hdr->setByteLength(B(8));
            ipv6Header->addExtensionHeader(hdr);
        }
        hdr->getTlvOptionsForUpdate().insertTlvOption(gpsrflqOption);
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
        gpsrflqOption->setType(NEXTHOP_TLVOPTION_TLV_GPSR);
        int oldHlen = nextHopHeader->getTlvOptions().getLength();
        nextHopHeader->getTlvOptionsForUpdate().insertTlvOption(gpsrflqOption);
        int newHlen = nextHopHeader->getTlvOptions().getLength();
        nextHopHeader->addChunkLength(B(newHlen - oldHlen));
        insertNetworkProtocolHeader(packet, Protocol::nextHopForwarding, nextHopHeader);
    }
    else
#endif
    {
    }
}

const GPSRFLQOption *GPSRFLQ::findGPSRFLQOptionInNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const
{
    const GPSRFLQOption *gpsrflqOption = nullptr;

#ifdef WITH_IPv4
    if (auto ipv4Header = dynamicPtrCast<const Ipv4Header>(networkHeader)) {
        gpsrflqOption = check_and_cast_nullable<const GPSRFLQOption *>(ipv4Header->findOptionByType(IPOPTION_TLV_GPSR));
    }
    else
#endif
#ifdef WITH_IPv6
    if (auto ipv6Header = dynamicPtrCast<const Ipv6Header>(networkHeader)) {
        const Ipv6HopByHopOptionsHeader *hdr = check_and_cast_nullable<const Ipv6HopByHopOptionsHeader *>(ipv6Header->findExtensionHeaderByType(IP_PROT_IPv6EXT_HOP));
        if (hdr != nullptr) {
            int i = (hdr->getTlvOptions().findByType(IPv6TLVOPTION_TLV_GPSR));
            if (i >= 0)
                gpsrflqOption = check_and_cast<const GPSRFLQOption *>(hdr->getTlvOptions().getTlvOption(i));
        }
    }
    else
#endif
#ifdef WITH_NEXTHOP
    if (auto nextHopHeader = dynamicPtrCast<const NextHopForwardingHeader>(networkHeader)) {
        int i = (nextHopHeader->getTlvOptions().findByType(NEXTHOP_TLVOPTION_TLV_GPSR));
        if (i >= 0)
            gpsrflqOption = check_and_cast<const GPSRFLQOption *>(nextHopHeader->getTlvOptions().getTlvOption(i));
    }
    else
#endif
    {
    }
    return gpsrflqOption;
}

GPSRFLQOption *GPSRFLQ::findGPSRFLQOptionInNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader)
{
    GPSRFLQOption *gpsrflqOption = nullptr;

#ifdef WITH_IPv4
    if (auto ipv4Header = dynamicPtrCast<Ipv4Header>(networkHeader)) {
        gpsrflqOption = check_and_cast_nullable<GPSRFLQOption *>(ipv4Header->findMutableOptionByType(IPOPTION_TLV_GPSR));
    }
    else
#endif
#ifdef WITH_IPv6
    if (auto ipv6Header = dynamicPtrCast<Ipv6Header>(networkHeader)) {
        Ipv6HopByHopOptionsHeader *hdr = check_and_cast_nullable<Ipv6HopByHopOptionsHeader *>(ipv6Header->findExtensionHeaderByTypeForUpdate(IP_PROT_IPv6EXT_HOP));
        if (hdr != nullptr) {
            int i = (hdr->getTlvOptions().findByType(IPv6TLVOPTION_TLV_GPSR));
            if (i >= 0)
                gpsrflqOption = check_and_cast<GPSRFLQOption *>(hdr->getTlvOptionsForUpdate().getTlvOptionForUpdate(i));
        }
    }
    else
#endif
#ifdef WITH_NEXTHOP
    if (auto nextHopHeader = dynamicPtrCast<NextHopForwardingHeader>(networkHeader)) {
        int i = (nextHopHeader->getTlvOptions().findByType(NEXTHOP_TLVOPTION_TLV_GPSR));
        if (i >= 0)
            gpsrflqOption = check_and_cast<GPSRFLQOption *>(nextHopHeader->getTlvOptionsForUpdate().getTlvOptionForUpdate(i));
    }
    else
#endif
    {
    }
    return gpsrflqOption;
}

const GPSRFLQOption *GPSRFLQ::getGPSRFLQOptionFromNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const
{
    const GPSRFLQOption *gpsrflqOption = findGPSRFLQOptionInNetworkDatagram(networkHeader);
    if (gpsrflqOption == nullptr)
        throw cRuntimeError("GPSRFLQ option not found in datagram!");
    return gpsrflqOption;
}

GPSRFLQOption *GPSRFLQ::getGPSRFLQOptionFromNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader)
{
    GPSRFLQOption *gpsrflqOption = findGPSRFLQOptionInNetworkDatagramForUpdate(networkHeader);
    if (gpsrflqOption == nullptr)
        throw cRuntimeError("GPSRFLQ option not found in datagram!");
    return gpsrflqOption;
}

//
// netfilter
//

INetfilter::IHook::Result GPSRFLQ::datagramPreRoutingHook(Packet *datagram)
{
    Enter_Method("datagramPreRoutingHook");
    const auto& networkHeader = getNetworkProtocolHeader(datagram);
    const L3Address& destination = networkHeader->getDestinationAddress();
    if (destination.isMulticast() || destination.isBroadcast() || routingTable->isLocalAddress(destination))
        return ACCEPT;
    else {
        // KLUDGE: this allows overwriting the GPSR option inside
        auto gpsrflqOption = const_cast<GPSRFLQOption *>(getGPSRFLQOptionFromNetworkDatagram(networkHeader));
        return routeDatagram(datagram, gpsrflqOption);
    }
}

INetfilter::IHook::Result GPSRFLQ::datagramLocalOutHook(Packet *packet)
{
    Enter_Method("datagramLocalOutHook");
    const auto& networkHeader = getNetworkProtocolHeader(packet);
    const L3Address& destination = networkHeader->getDestinationAddress();
    if (destination.isMulticast() || destination.isBroadcast() || routingTable->isLocalAddress(destination))
        return ACCEPT;
    else {
        GPSRFLQOption *gpsrflqOption = createGPSRFLQOption(networkHeader->getDestinationAddress());
        setGPSRFLQOptionOnNetworkDatagram(packet, networkHeader, gpsrflqOption);
        return routeDatagram(packet, gpsrflqOption);
    }
}

//
// lifecycle
//

void GPSRFLQ::handleStartOperation(LifecycleOperation *operation)
{
    configureInterfaces();
    storeSelfPositionInGlobalRegistry();
    scheduleBeaconTimer();
}

void GPSRFLQ::handleStopOperation(LifecycleOperation *operation)
{
    // TODO: send a beacon to remove ourself from peers neighbor position table
    neighborPositionTable.clear();
    cancelEvent(beaconTimer);
    cancelEvent(purgeNeighborsTimer);
}

void GPSRFLQ::handleCrashOperation(LifecycleOperation *operation)
{
    neighborPositionTable.clear();
    cancelEvent(beaconTimer);
    cancelEvent(purgeNeighborsTimer);
}

//
// notification
//

void GPSRFLQ::receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj, cObject *details)
{
    Enter_Method("receiveChangeNotification");
    if (signalID == linkBrokenSignal) {
        EV_WARN << "Received link break" << endl;
        // TODO: remove the neighbor
    }
}

} // namespace inet

