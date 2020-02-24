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

#ifndef __INET_GEOADVFLQ_H
#define __INET_GEOADVFLQ_H

#include "inet/common/INETDefs.h"
#include "inet/common/geometry/common/Coord.h"
#include "inet/common/packet/Packet.h"
#include "inet/mobility/contract/IMobility.h"
#include "inet/networklayer/contract/IL3AddressType.h"
#include "inet/networklayer/contract/INetfilter.h"
#include "inet/networklayer/contract/IRoutingTable.h"
#include "inet/routing/base/RoutingProtocolBase.h"
#include "vanetsim/routing/geoadvflq/GEOADVFLQ_m.h"
#include "vanetsim/routing/geoadvflq/GEOADVFLQPositionTable.h"
#include "inet/transportlayer/udp/UdpHeader_m.h"

namespace inet {

/**
 * This class implements the GEOADVFLQ Routing for Wireless Networks.
 *
 * For more information on the routing algorithm, see the GEOADVFLQ paper
 * http://ieeexplore.ieee.org/document/7577066/
 */

class INET_API GEOADVFLQ : public RoutingProtocolBase, public cListener, public NetfilterBase::HookBase
{
  private:
    // GEOADVFLQ parameters
    GEOADVFLQPlanarizationMode planarizationMode = static_cast<GEOADVFLQPlanarizationMode>(-1);
    const char *interfaces = nullptr;
    simtime_t beaconInterval;
    simtime_t maxJitter;
    simtime_t neighborValidityInterval;
    bool isUrban;
    bool displayBubbles;

    // context
    cModule *host = nullptr;
    IMobility *mobility = nullptr;
    IL3AddressType *addressType = nullptr;
    IInterfaceTable *interfaceTable = nullptr;
    const char *outputInterface = nullptr;
    IRoutingTable *routingTable = nullptr;    // TODO: delete when necessary functions are moved to interface table
    INetfilter *networkProtocol = nullptr;
    static GEOADVFLQPositionTable globalPositionTable;    // KLUDGE: implement position registry protocol

    // packet size
    int positionByteLength = -1;

    // internal
    cMessage *beaconTimer = nullptr;
    int beaconsSent = 0;
    int beaconsReceived = 0;
    cMessage *purgeNeighborsTimer = nullptr;
    GEOADVFLQPositionTable neighborPositionTable;

    double losRange; // line of site range.
    double speedWeight; // speed weight factor
    double accelerationWeight; // acceleration weight factor
    double directionWeight; // direction weight factor
    double linkQualityWeight; // link quality weight factor
  public:
    GEOADVFLQ();
    virtual ~GEOADVFLQ();

  protected:
    // module interface
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    void initialize(int stage) override;
    void handleMessageWhenUp(cMessage *message) override;

  private:
    // handling messages
    void processSelfMessage(cMessage *message);
    void processMessage(cMessage *message);

    // handling beacon timers
    void scheduleBeaconTimer();
    void processBeaconTimer();
    simtime_t getFLQBeaconInterval();

    // handling purge neighbors timers
    void schedulePurgeNeighborsTimer();
    void processPurgeNeighborsTimer();

    // handling UDP packets
    void sendUdpPacket(Packet *packet);
    void processUdpPacket(Packet *packet);

    // handling beacons
    const Ptr<GEOADVFLQBeacon> createBeacon();
    void sendBeacon(const Ptr<GEOADVFLQBeacon>& beacon);
    void processBeacon(Packet *packet);

    // handling packets
    GEOADVFLQOption *createGEOADVFLQOption(L3Address destination);
    int computeOptionLength(GEOADVFLQOption *gpsrOption);
    void setGEOADVFLQOptionOnNetworkDatagram(Packet *packet, const Ptr<const NetworkHeaderBase>& networkHeader, GEOADVFLQOption *gpsrOption);

    // returns nullptr if not found
    GEOADVFLQOption *findGEOADVFLQOptionInNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader);
    const GEOADVFLQOption *findGEOADVFLQOptionInNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const;

    // throws an error when not found
    GEOADVFLQOption *getGEOADVFLQOptionFromNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader);
    const GEOADVFLQOption *getGEOADVFLQOptionFromNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const;

    // configuration
    void configureInterfaces();

    // position
    Coord lookupPositionInGlobalRegistry(const L3Address& address) const;
    void storePositionInGlobalRegistry(const L3Address& address, const Coord& position) const;
    void storeDirectionInGlobalRegistry(const L3Address& address, const Coord& velocity) const;
    void storeSelfPositionInGlobalRegistry() const;
    Coord computeIntersectionInsideLineSegments(Coord& begin1, Coord& end1, Coord& begin2, Coord& end2) const;
    Coord getNeighborPosition(const L3Address& address) const;

    // angle
    double getVectorAngle(Coord vector) const;
    double getNeighborAngle(const L3Address& address) const;

    // address
    std::string getHostName() const;
    L3Address getSelfAddress() const;
    L3Address getSenderNeighborAddress(const Ptr<const NetworkHeaderBase>& networkHeader) const;

    // neighbor
    simtime_t getNextNeighborExpiration();
    void purgeNeighbors();
    int getFLQNeighborCount();
    std::vector<L3Address> getPlanarNeighbors() const;
    std::vector<L3Address> getPlanarNeighborsCounterClockwise(double startAngle) const;

    // next hop
    L3Address findNextHop(const L3Address& destination, GEOADVFLQOption *gpsrOption);
    L3Address findGreedyRoutingNextHop(const L3Address& destination, GEOADVFLQOption *gpsrOption);
    L3Address findTWRRoutingNextHop(const L3Address& destination, GEOADVFLQOption *gpsrOption);

    // routing
    Result routeDatagram(Packet *datagram, GEOADVFLQOption *gpsrOption);

    // netfilter
    virtual Result datagramPreRoutingHook(Packet *datagram) override;
    virtual Result datagramForwardHook(Packet *datagram) override { return ACCEPT; }
    virtual Result datagramPostRoutingHook(Packet *datagram) override { return ACCEPT; }
    virtual Result datagramLocalInHook(Packet *datagram) override { return ACCEPT; }
    virtual Result datagramLocalOutHook(Packet *datagram) override;

    // lifecycle
    virtual void handleStartOperation(LifecycleOperation *operation) override;
    virtual void handleStopOperation(LifecycleOperation *operation) override;
    virtual void handleCrashOperation(LifecycleOperation *operation) override;

    // notification
    virtual void receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj, cObject *details) override;
};

} // namespace inet

#endif // ifndef __INET_GEOADVFLQ_H

