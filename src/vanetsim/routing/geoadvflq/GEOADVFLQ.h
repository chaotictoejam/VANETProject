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
#include "inet/common/lifecycle/ILifecycle.h"
#include "inet/mobility/contract/IMobility.h"
#include "inet/networklayer/contract/IL3AddressType.h"
#include "inet/networklayer/contract/INetfilter.h"
#include "inet/networklayer/contract/IRoutingTable.h"
#include "inet/common/lifecycle/NodeStatus.h"
#include "inet/transportlayer/udp/UDPPacket.h"

#include "GEOADVFLQPositionTable.h"
#include "vanetsim/routing/geoadvflq/GEOADVFLQ_m.h"

namespace inet {

class INET_API GEOADVFLQ : public cSimpleModule, public ILifecycle, public cListener, public INetfilter::IHook
{
  private:
    // GEOADVFLQ parameters
    GEOADVFLQPlanarizationMode planarizationMode = (GEOADVFLQPlanarizationMode)-1;
    const char *interfaces = nullptr;
    simtime_t beaconInterval;
    simtime_t maxJitter;
    simtime_t neighborValidityInterval;
    bool isUrban;

    // context
    cModule *host = nullptr;
    NodeStatus *nodeStatus = nullptr;
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
    void handleMessage(cMessage *message) override;

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
    void sendUDPPacket(UDPPacket *packet, double delay);
    void processUDPPacket(UDPPacket *packet);

    // handling beacons
    GEOADVFLQBeacon *createBeacon();
    void sendBeacon(GEOADVFLQBeacon *beacon, double delay);
    void processBeacon(GEOADVFLQBeacon *beacon);

    // handling packets
    GEOADVFLQOption *createGeoadvOption(L3Address destination, cPacket *content);
    int computeOptionLength(GEOADVFLQOption *gpsrOption);
    void setGeoadvOptionOnNetworkDatagram(INetworkDatagram *datagram);
    void removeGeoadvOptionFromNetworkDatagram(INetworkDatagram *datagram);

    // returns nullptr if not found
    GEOADVFLQOption *findGeoadvOptionInNetworkDatagram(INetworkDatagram *datagram);
    const GEOADVFLQOption *findGeoadvOptionInNetworkDatagram(INetworkDatagram *datagram) const { return const_cast<GEOADVFLQ *>(this)->findGeoadvOptionInNetworkDatagram(datagram); }

    // throws an error when not found
    GEOADVFLQOption *getGeoadvOptionFromNetworkDatagram(INetworkDatagram *datagram);
    const GEOADVFLQOption *getGeoadvOptionFromNetworkDatagram(INetworkDatagram *datagram) const { return const_cast<GEOADVFLQ *>(this)->getGeoadvOptionFromNetworkDatagram(datagram); }

    // configuration
    bool isNodeUp() const;
    void configureInterfaces();

    // position
    static Coord intersectSections(Coord& begin1, Coord& end1, Coord& begin2, Coord& end2);
    Coord getDestinationPosition(const L3Address& address) const;
    Coord getNeighborPosition(const L3Address& address) const;

    // angle
    static double getVectorAngle(Coord vector);
    double getDestinationAngle(const L3Address& address);
    double getNeighborAngle(const L3Address& address);

    // address
    std::string getHostName() const;
    L3Address getSelfAddress() const;
    L3Address getSenderNeighborAddress(INetworkDatagram *datagram) const;

    // neighbor
    simtime_t getNextNeighborExpiration();
    void purgeNeighbors();
    std::vector<L3Address> getPlanarNeighbors();
    int getFLQNeighborCount();
    L3Address getNextPlanarNeighborCounterClockwise(const L3Address& startNeighborAddress, double startNeighborAngle);

    // next hop
    L3Address findNextHop(INetworkDatagram *datagram, const L3Address& destination);
    L3Address findGreedyRoutingNextHop(INetworkDatagram *datagram, const L3Address& destination);
    L3Address findTWRRoutingNextHop(INetworkDatagram *datagram, const L3Address& destination);

    // routing
    Result routeDatagram(INetworkDatagram *datagram, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop);

    // netfilter
    virtual Result datagramPreRoutingHook(INetworkDatagram *datagram, const InterfaceEntry *inputInterfaceEntry, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop) override;
    virtual Result datagramForwardHook(INetworkDatagram *datagram, const InterfaceEntry *inputInterfaceEntry, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop) override { return ACCEPT; }
    virtual Result datagramPostRoutingHook(INetworkDatagram *datagram, const InterfaceEntry *inputInterfaceEntry, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop) override { return ACCEPT; }
    virtual Result datagramLocalInHook(INetworkDatagram *datagram, const InterfaceEntry *inputInterfaceEntry) override { return ACCEPT; }
    virtual Result datagramLocalOutHook(INetworkDatagram *datagram, const InterfaceEntry *& outputInterfaceEntry, L3Address& nextHop) override;

    // lifecycle
    virtual bool handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback) override;

    // notification
    virtual void receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj, cObject *details) override;
};

} // namespace inet

#endif // ifndef __INET_GEOADVFLQ_H

