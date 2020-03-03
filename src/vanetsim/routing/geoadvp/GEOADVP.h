// Author: Joanne Skiles

#ifndef __INET_GEOADVP_H
#define __INET_GEOADVP_H

#include "inet/common/INETDefs.h"
#include "inet/common/geometry/common/Coord.h"
#include "inet/common/packet/Packet.h"
#include "inet/mobility/contract/IMobility.h"
#include "inet/networklayer/contract/IL3AddressType.h"
#include "inet/networklayer/contract/INetfilter.h"
#include "inet/networklayer/contract/IRoutingTable.h"
#include "inet/routing/base/RoutingProtocolBase.h"
#include "vanetsim/routing/geoadvp/GEOADVP_m.h"
#include "vanetsim/routing/geoadvp/GEOADVPPositionTable.h"
#include "inet/transportlayer/udp/UdpHeader_m.h"

namespace inet {

/**
 * This class implements the GEOADV Routing for Wireless Networks.
 *
 * For more information on the routing algorithm, see the GEOADV paper
 * http://ieeexplore.ieee.org/document/7577066/
 */

class INET_API GEOADVP : public RoutingProtocolBase, public cListener, public NetfilterBase::HookBase
{
  private:
    // GEOADVP parameters
    GEOADVPPlanarizationMode planarizationMode = static_cast<GEOADVPPlanarizationMode>(-1);
    const char *interfaces = nullptr;
    simtime_t beaconInterval;
    simtime_t maxJitter;
    simtime_t neighborValidityInterval;
    bool displayBubbles;

    // context
    cModule *host = nullptr;
    IMobility *mobility = nullptr;
    IL3AddressType *addressType = nullptr;
    IInterfaceTable *interfaceTable = nullptr;
    const char *outputInterface = nullptr;
    IRoutingTable *routingTable = nullptr;    // TODO: delete when necessary functions are moved to interface table
    INetfilter *networkProtocol = nullptr;
    static GEOADVPPositionTable globalPositionTable;    // KLUDGE: implement position registry protocol

    // packet size
    int positionByteLength = -1;

    // internal
    cMessage *beaconTimer = nullptr;
    cMessage *purgeNeighborsTimer = nullptr;
    GEOADVPPositionTable neighborPositionTable;

    double losRange; // line of site range.
    double speedWeight; // speed weight factor
    double accelerationWeight; // acceleration weight factor
    double directionWeight; // direction weight factor
    double linkQualityWeight; // link quality weight factor
  public:
    GEOADVP();
    virtual ~GEOADVP();

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

    // handling purge neighbors timers
    void schedulePurgeNeighborsTimer();
    void processPurgeNeighborsTimer();

    // handling UDP packets
    void sendUdpPacket(Packet *packet);
    void processUdpPacket(Packet *packet);

    // handling beacons
    const Ptr<GEOADVPBeacon> createBeacon();
    void sendBeacon(const Ptr<GEOADVPBeacon>& beacon);
    void processBeacon(Packet *packet);

    // handling packets
    GEOADVPOption *createGEOADVPOption(L3Address destination);
    int computeOptionLength(GEOADVPOption *geoadvpOption);
    void setGEOADVPOptionOnNetworkDatagram(Packet *packet, const Ptr<const NetworkHeaderBase>& networkHeader, GEOADVPOption *geoadvpOption);

    // returns nullptr if not found
    GEOADVPOption *findGEOADVPOptionInNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader);
    const GEOADVPOption *findGEOADVPOptionInNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const;

    // throws an error when not found
    GEOADVPOption *getGEOADVPOptionFromNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader);
    const GEOADVPOption *getGEOADVPOptionFromNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const;

    // configuration
    void configureInterfaces();

    // position
    Coord lookupPositionInGlobalRegistry(const L3Address& address) const;
    void storePositionInGlobalRegistry(const L3Address& address, const Coord& position) const;
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
    std::vector<L3Address> getPlanarNeighbors() const;
    std::vector<L3Address> getPlanarNeighborsCounterClockwise(double startAngle) const;

    // next hop
    L3Address findNextHop(const L3Address& destination, GEOADVPOption *geoadvpOption);
    L3Address findGreedyRoutingNextHop(const L3Address& destination, GEOADVPOption *geoadvpOption);
    L3Address findPTWRRoutingNextHop(const L3Address& destination, GEOADVPOption *geoadvpOption);

    // routing
    Result routeDatagram(Packet *datagram, GEOADVPOption *geoadvpOption);

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

#endif // ifndef __INET_GEOADVP_H

