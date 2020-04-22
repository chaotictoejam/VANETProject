//
// Author: Joanne Skiles

#ifndef __INET_GPSRWR_H
#define __INET_GPSRWR_H

#include "inet/common/INETDefs.h"
#include "inet/common/geometry/common/Coord.h"
#include "inet/common/packet/Packet.h"
#include "inet/mobility/contract/IMobility.h"
#include "inet/networklayer/contract/IL3AddressType.h"
#include "inet/networklayer/contract/INetfilter.h"
#include "inet/networklayer/contract/IRoutingTable.h"
#include "inet/routing/base/RoutingProtocolBase.h"
#include "vanetsim/routing/gpsrwr/GPSRWR_m.h"
#include "vanetsim/routing/gpsrwr/GPSRWRPositionTable.h"
#include "inet/transportlayer/udp/UdpHeader_m.h"

namespace inet {

class INET_API GPSRWR : public RoutingProtocolBase, public cListener, public NetfilterBase::HookBase
{
  private:
    // GPSRWR parameters
    GPSRWRPlanarizationMode planarizationMode = static_cast<GPSRWRPlanarizationMode>(-1);
    const char *interfaces = nullptr;
    double beaconInterval;
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
    static GPSRWRPositionTable globalPositionTable;    // KLUDGE: implement position registry protocol

    // packet size
    int positionByteLength = -1;

    // internal
    cMessage *beaconTimer = nullptr;
    cMessage *purgeNeighborsTimer = nullptr;
    GPSRWRPositionTable neighborPositionTable;

    double losRange; // line of site range.
    double velocityWeight; // Velocity weight factor
    double accelerationWeight; // acceleration weight factor
    double directionWeight; // direction weight factor
    double linkQualityWeight; // link quality weight factor
  public:
    GPSRWR();
    virtual ~GPSRWR();

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
    const Ptr<GPSRWRBeacon> createBeacon();
    void sendBeacon(const Ptr<GPSRWRBeacon>& beacon);
    void processBeacon(Packet *packet);

    // handling packets
    GPSRWROption *createGPSRWROption(L3Address destination);
    int computeOptionLength(GPSRWROption *gpsrwrOption);
    void setGPSRWROptionOnNetworkDatagram(Packet *packet, const Ptr<const NetworkHeaderBase>& networkHeader, GPSRWROption *gpsrwrOption);

    // returns nullptr if not found
    GPSRWROption *findGPSRWROptionInNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader);
    const GPSRWROption *findGPSRWROptionInNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const;

    // throws an error when not found
    GPSRWROption *getGPSRWROptionFromNetworkDatagramForUpdate(const Ptr<NetworkHeaderBase>& networkHeader);
    const GPSRWROption *getGPSRWROptionFromNetworkDatagram(const Ptr<const NetworkHeaderBase>& networkHeader) const;

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
    double calculateTwr(Coord selfPosition, Coord selfVelocity, Coord selfAcceleration, EulerAngles selfDirection,
            Coord neighborPosition, Coord neighborVelocity, Coord neighborAcceleration, EulerAngles neighborDirection);
    L3Address findNextHop(const L3Address& destination, GPSRWROption *gpsrwrOption);
    L3Address findGreedyRoutingNextHop(const L3Address& destination, GPSRWROption *gpsrwrOption);
    L3Address findPerimeterRoutingNextHop(const L3Address& destination, GPSRWROption *gpsrwrOption);

    // routing
    Result routeDatagram(Packet *datagram, GPSRWROption *gpsrwrOption);

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

#endif // ifndef __INET_GPSRWR_H

