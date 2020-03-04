// Author: Joanne Skiles

#ifndef __INET_GPSR_H
#define __INET_GPSR_H

#include "inet/common/INETDefs.h"
#include "inet/common/geometry/common/Coord.h"
#include "inet/common/packet/Packet.h"
#include "inet/mobility/contract/IMobility.h"
#include "inet/networklayer/contract/IL3AddressType.h"
#include "inet/networklayer/contract/INetfilter.h"
#include "inet/networklayer/contract/IRoutingTable.h"
#include "inet/routing/base/RoutingProtocolBase.h"
#include "vanetsim/routing/gpsrflq/GPSRFLQ_m.h"
#include "vanetsim/routing/gpsrflq/GPSRFLQPositionTable.h"
#include "inet/transportlayer/udp/UdpHeader_m.h"

namespace inet {

class INET_API GPSRFLQ : public RoutingProtocolBase, public cListener, public NetfilterBase::HookBase
{
  private:
    // GPSR parameters
    GPSRFLQPlanarizationMode planarizationMode = static_cast<GPSRFLQPlanarizationMode>(-1);
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
    static GPSRFLQPositionTable globalPositionTable;    // KLUDGE: implement position registry protocol

    // packet size
    int positionByteLength = -1;

    // internal
    cMessage *beaconTimer = nullptr;
    int beaconsSent = 0;
    int beaconsReceived = 0;
    cMessage *purgeNeighborsTimer = nullptr;
    GPSRFLQPositionTable neighborPositionTable;

  public:
    GPSRFLQ();
    virtual ~GPSRFLQ();

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
    const Ptr<GPSRFLQBeacon> createBeacon();
    void sendBeacon(const Ptr<GPSRFLQBeacon>& beacon);
    void processBeacon(Packet *packet);

    // handling packets
    GPSRFLQOption *createGPSRFLQOption(L3Address destination);
    int computeOptionLength(GPSRFLQOption *gpsrflqOption);
    void setGPSRFLQOptionOnNetworkDatagram(Packet *packet, const Ptr<const NetworkHeaderBase>& networkHeader, GPSRFLQOption *gpsrflqOption);

    // returns nullptr if not found
    GPSRFLQOption *findGPSRFLQOptionInNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader);
    const GPSRFLQOption *findGPSRFLQOptionInNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const;

    // throws an error when not found
    GPSRFLQOption *getGPSRFLQOptionFromNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader);
    const GPSRFLQOption *getGPSRFLQOptionFromNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const;

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
    int getFLQNeighborCount();
    std::vector<L3Address> getPlanarNeighbors() const;
    std::vector<L3Address> getPlanarNeighborsCounterClockwise(double startAngle) const;

    // next hop
    L3Address findNextHop(const L3Address& destination, GPSRFLQOption *gpsrflqOption);
    L3Address findGreedyRoutingNextHop(const L3Address& destination, GPSRFLQOption *gpsrflqOption);
    L3Address findPerimeterRoutingNextHop(const L3Address& destination, GPSRFLQOption *gpsrflqOption);

    // routing
    Result routeDatagram(Packet *datagram, GPSRFLQOption *gpsrflqOption);

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

#endif // ifndef __INET_GPSR_H

