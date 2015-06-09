/***************************************************************************
 *   Copyright (C) 2008 by Alfonso Ariza                                   *
 *   Copyright (C) 2015 Joanne Skiles                                      *
 *   aarizaq@uma.es                                                        *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

///
#ifndef __Vanet_routing_base_h__
#define __Vanet_routing_base_h__

#ifndef _MSC_VER
#include <sys/time.h>
#endif

#include "compatibility_vanet.h"
#include "Coord.h"
#include "IRoutingTable.h"
#include "NotificationBoard.h"
#include "IInterfaceTable.h"
#include "IPvXAddress.h"
#include "VanetAddress.h"
#include "VanetNetfilterHook.h"
#include "NotifierConsts.h"
#include "ICMP.h"
#include "IPv4.h"
#include "ILifecycle.h"

#include "ILocator.h"

#include "ARP.h"

#include <vector>
#include <set>

class VanetRoutingBase;

class VanetTimer :  public cOwnedObject
{
  protected:
    VanetRoutingBase *      agent_; ///< OLSR agent which created the timer.
  public:
    VanetTimer();
    VanetTimer(VanetRoutingBase* agent);
    virtual void expire() = 0;
    virtual void removeQueueTimer();
    virtual void removeTimer();
    virtual void resched(double time);
    virtual void resched(simtime_t time);
    virtual bool isScheduled();
    virtual ~VanetTimer();
};

typedef std::multimap <simtime_t, VanetTimer *> TimerMultiMap;
typedef std::set<VanetAddress> AddressGroup;
typedef std::set<VanetAddress>::iterator AddressGroupIterator;
typedef std::set<VanetAddress>::const_iterator AddressGroupConstIterator;

/**
 * Base class for Vanet Routing
 */
class VanetRoutingBase : public cSimpleModule, public INotifiable, protected cListener, public ILifecycle, public VanetNetfilterHook
{
  private:
    static simsignal_t mobilityStateChangedSignal;
    typedef std::map<VanetAddress,VanetAddress> RouteMap;
    class ProtocolRoutingData
    {
        public:
            RouteMap* routesVector;
            bool isProactive;
    };

    typedef std::vector<ProtocolRoutingData> ProtocolsRoutes;
    typedef std::map<VanetAddress,ProtocolsRoutes>GlobalRouteMap;
    RouteMap *routesVector;
    static bool createInternalStore;
    static GlobalRouteMap *globalRouteMap;

    IRoutingTable *inet_rt;
    IInterfaceTable *inet_ift;
    NotificationBoard *nb;
    ICMP *icmpModule;
    bool mac_layer_;
    VanetAddress    hostAddress;
    VanetAddress    routerId;
    Coord curPosition;
    Coord curSpeed;
    simtime_t posTimer;
    bool   regPosition;
    bool   useVanetLabelRouting;
    bool   isRegistered;
    void *commonPtr;
    bool sendToICMP;
    VanetRoutingBase *collaborativeProtocol;

    ARP *arp;

    typedef struct InterfaceIdentification
    {
        InterfaceEntry *interfacePtr;
        int index;
        inline InterfaceIdentification& operator=(const InterfaceIdentification& b)
        {
            interfacePtr = b.interfacePtr;
            index = b.index;
            return *this;
        }
    } InterfaceIdentification;
    typedef std::vector <InterfaceIdentification> InterfaceVector;

    InterfaceVector *interfaceVector;
    TimerMultiMap *timerMultiMapPtr;
    cMessage *timerMessagePtr;
    std::vector<AddressGroup> addressGroupVector;
    std::vector<int> inAddressGroup;
    bool staticNode;

    struct VanetProxyAddress
    {
        VanetAddress mask;
        VanetAddress address;
    };

    bool isGateway;     /// true if the node will work like gateway for address in the list

    std::vector<VanetProxyAddress> proxyAddress;

    ILocator *locator;

    int addressSizeBytes;

    bool isOperational;
  protected:
    bool isNodeOperational(){return isOperational;}
    IRoutingTable*  getInetRoutingTable() const {return inet_rt;}
    IInterfaceTable* getInterfaceTable() const {return inet_ift;}
    bool getIsRegistered() const {return isRegistered;}
    bool getUseVanetLabelRouting() const {return useVanetLabelRouting;}
    bool getIsMacLayer() const {return mac_layer_;}
  protected:
    ~VanetRoutingBase();
    VanetRoutingBase();

////////////////////////////////////////////
////////////////////////////////////////////
///     CRITICAL
//      must be executed in the initialize method with stage 4 o bigger, this method initialize all the estructures
/////////////////////////////////////////////
/////////////////////////////////////////////
    virtual void registerRoutingModule();

//
//
    virtual void createTimerQueue();
    virtual void scheduleEvent();
    virtual bool checkTimer(cMessage *msg);


/////////////////////////////////
//
//   encapsulate messages and send to the next layer
//
/////////////////////////////////////
    void sendToIpOnIface(cPacket *pk, int srcPort, const VanetAddress& destAddr, int destPort, int ttl, double delay, InterfaceEntry *iface);
    virtual void sendToIp(cPacket *pk, int srcPort, const VanetAddress& destAddr, int destPort, int ttl, double delay, const VanetAddress& ifaceAddr);
    virtual void sendToIp(cPacket *pk, int srcPort, const VanetAddress& destAddr, int destPort, int ttl, double delay, int ifaceIndex = -1);

/////////////////////////////////
//
//   Ip4 routing table access routines
//
/////////////////////////////////////

    /**
     *  @name delete/actualize/insert and record in the IPv4 routing table
     */
    //@{
    //FIXME reduce these variations
    virtual void omnet_chg_rte(const VanetAddress &dst, const VanetAddress &gtwy, const VanetAddress &netm, short int hops, bool del_entry, const VanetAddress &iface = VanetAddress::ZERO);
    virtual void omnet_chg_rte(const VanetAddress &dst, const VanetAddress &gtwy, const VanetAddress &netm, short int hops, bool del_entry, int index);
    virtual void omnet_chg_rte(const struct in_addr &dst, const struct in_addr &gtwy, const struct in_addr &netm, short int hops, bool del_entry);
    virtual void omnet_chg_rte(const struct in_addr &dst, const struct in_addr &gtwy, const struct in_addr &netm, short int hops, bool del_entry, const struct in_addr &iface);
    virtual void omnet_chg_rte(const struct in_addr &dst, const struct in_addr &gtwy, const struct in_addr &netm, short int hops, bool del_entry, int index);

    virtual void deleteIpEntry(const VanetAddress &dst) {omnet_chg_rte(dst, dst, dst, 0, true);}
    virtual void setIpEntry(const VanetAddress &dst, const VanetAddress &gtwy, const VanetAddress &netm, short int hops, const VanetAddress &iface = VanetAddress::ZERO)
            {omnet_chg_rte(dst, gtwy, netm, hops, false, iface);}
    //@}

    /**
     * Check existing the dst address in the IPv4 routing table
     * if it exists, returns gateway address
     * if it doesn't exists, returns ALLONES_ADDRESS
     * if uses mac_layer, returns ZERO
     */
    virtual VanetAddress omnet_exist_rte(VanetAddress dst);     //FIXME revise return values

    /**
     * Check existing the dst address in the IPv4 routing table
     * if it doesn't exists, return false
     */
    virtual bool omnet_exist_rte(struct in_addr dst);   //FIXME remove it, use the another version

    /// Erase all entries for wlan* interfaces in the routing table
    virtual void omnet_clean_rte();

    /**
     *  @name Cross layer routines
     */
    //@{

    /// Activate the LLF break (subscribe to NF_LINK_BREAK)
    virtual void linkLayerFeeback();

    /// activate the promiscuous option (subscribe to NF_LINK_PROMISCUOUS)
    virtual void linkPromiscuous();

    /// Activate the full promiscuous option (subscribe to NF_LINK_FULL_PROMISCUOUS)
    virtual void linkFullPromiscuous();

    /**
     * Activate the register position (subscribe to mobilityStateChanged signal).
     * For position protocols this method must be activated in the stage 0 to register
     * the initial node position
     */
    virtual void registerPosition();
    //@}

    /** Link layer feedback routines */
    //@{
    /**
     * @brief Called by the signaling mechanism to inform of changes.
     *
     * VanetRoutingBase is subscribed to position changes.
     */
    virtual void receiveSignal(cComponent *source, simsignal_t signalID, cObject *obj);
    virtual void receiveChangeNotification(int category, const cObject *details);
    virtual void processLinkBreak(const cObject *details);
    virtual void processLinkBreakManagement(const cObject *details);
    virtual void processPromiscuous(const cObject *details);
    virtual void processFullPromiscuous(const cObject *details);
    virtual void processLocatorAssoc(const cObject *details);
    virtual void processLocatorDisAssoc(const cObject *details);
    //@}

    /**
     *  Replacement for gettimeofday(), used for timers.
     *  The timeval should only be interpreted as number of seconds and
     *  fractions of seconds since the start of the simulation.
     */
    virtual int gettimeofday(struct timeval *, struct timezone *);

    /// Get the address of the first wlan interface
    virtual VanetAddress getAddress() const {return hostAddress;}

    virtual VanetAddress getRouterId() const {return routerId;}

    /// Return true if the routing protocols is execute in the mac layer
    virtual bool isInMacLayer() const {return mac_layer_;}

    /// get the i-esime interface
    virtual InterfaceEntry *getInterfaceEntry(int index) const {return inet_ift->getInterface(index);}
    virtual InterfaceEntry *getInterfaceEntryById(int id) const {return inet_ift->getInterfaceById(id);}

    /// Total number of interfaces
    virtual int getNumInterfaces() const {return inet_ift->getNumInterfaces();}

    /// Check if the address is local

    virtual bool isIpLocalAddress(const IPv4Address& dest) const;
    virtual bool isLocalAddress(const VanetAddress& dest) const;

    /// Check if the address is multicast
    virtual bool isMulticastAddress(const VanetAddress& dest) const;

    /// @name wlan interface access routines
    //@{
    /// Get the index of interface with the same address that add
    virtual int getWlanInterfaceIndexByAddress(VanetAddress = VanetAddress::ZERO);

    /// Get the interface with the same address that add
    virtual InterfaceEntry *getInterfaceWlanByAddress(VanetAddress = VanetAddress::ZERO) const;

    /// get number of wlan interfaces
    virtual int getNumWlanInterfaces() const {return interfaceVector->size();}

    /// Get the index used in the general interface table
    virtual int getWlanInterfaceIndex(int i) const;

    /// Get the i-esime wlan interface
    virtual InterfaceEntry *getWlanInterfaceEntry(int i) const;

    /// Returns true if ie found in the general interface table
    virtual bool isThisInterfaceRegistered(InterfaceEntry *ie);
    //@}

    /// @name Access to the node position
    //@{
    virtual const Coord& getPosition();
    virtual double getSpeed();
    virtual const Coord& getDirection();  //FIXME rename?
    //@}

    //FIXME 3 variations for do the same, reduce it
    virtual void getApList(const MACAddress &,std::vector<MACAddress>&);
    virtual void getApListIp(const IPv4Address &,std::vector<IPv4Address>&);
    virtual void getListRelatedAp(const VanetAddress &, std::vector<VanetAddress>&);
    virtual void setRouteInternalStorege(const VanetAddress &, const VanetAddress &, const bool &);



  public:
    std::string convertAddressToString(const VanetAddress&);
    virtual void setCollaborativeProtocol(cObject *p) {collaborativeProtocol = dynamic_cast<VanetRoutingBase*>(p);}
    virtual VanetRoutingBase * getCollaborativeProtocol() const {return collaborativeProtocol;}
    virtual void setStaticNode(bool v) {staticNode=v;}
    virtual bool isStaticNode() {return staticNode;}
// Routing information access
    virtual void setInternalStore(bool i);
    virtual VanetAddress getNextHopInternal(const VanetAddress &dest);
    virtual bool getInternalStore() const { return createInternalStore;}
    // it should return 0 if not route, if complete route number of hops and, if only next hop
    // it should return -1
    // if the protocol has implemented supportGetRoute()
    virtual bool supportGetRoute () = 0;

    /**
     * Get list of hops for routing to dest destination
     * it should return 0 if not route,
     *    number of hops if complete route,
     *    -1 if only next hop
     */
    virtual uint32_t getRoute(const VanetAddress& dest, std::vector<VanetAddress>& hopsList) = 0;   //FIXME use int instead uint32_t for return value

    /**
     * Get next hop address.
     * Returns true if found next hop for dest destination,
     * and set nextHop to next hop, ifaceID to interface ID, and cost to cost value
     */
    virtual bool getNextHop(const VanetAddress& dest, VanetAddress& nextHop, int& ifaceId, double& cost) = 0;

    /**
     * Update timeout of specified routing entry
     *   //FIXME what is the isReverse parameter?
     */
    virtual void setRefreshRoute(const VanetAddress& dest, const VanetAddress& nextHop, bool isReverse) = 0;

    // set/delete routing entry
    //FIXME nextHop.isUnspecified() means: need delete entry. Should add a new parameter for choose set/delete, should rename function
    //FIXME setRoute() vs omnet_chg_rte()
    virtual bool setRoute(const VanetAddress & destination, const VanetAddress &nextHop, const int &ifaceIndex, const int &hops, const VanetAddress &mask = VanetAddress::ZERO);
    virtual bool setRoute(const VanetAddress & destination, const VanetAddress &nextHop, const char *ifaceName, const int &hops, const VanetAddress &mask = VanetAddress::ZERO);

    virtual bool isProactive() = 0;

    /// Returns true if type of pk is our type.
    virtual bool isOurType(cPacket *pk) = 0;

    /**
     *  Get destination address from pk packet.
     *  returns true and fill dest parameter from pk if pk is our type.
     */
    virtual bool getDestAddress(cPacket *pk, VanetAddress &dest) = 0;

/// Returns true if the address is local or is in the proxy list
    virtual bool addressIsForUs(const VanetAddress &) const; // return true if the address is local or is in the proxy list
    virtual TimerMultiMap *getTimerMultimMap() const {return timerMultiMapPtr;}

    /// set/get commonPtr member.
    virtual void setPtr(void *ptr) {commonPtr = ptr;}
    virtual const void *getPtr()const {return commonPtr;}

    /// send an ICMP DEST UNREACHABLE error based on pk
    virtual void sendICMP(cPacket *pk);

    /// returns true if ICMP error sending is enabled
    virtual bool getSendToICMP() {return sendToICMP;}

    /// enable/disable ICMP error sending
    virtual void setSendToICMP(bool val)
    {
        if (icmpModule)
            sendToICMP = val;
        else
            sendToICMP = false;
    }

    // group address, it's similar to anycast
    virtual int  getNumGroupAddress(){return addressGroupVector.size();}
    virtual int  getNumAddressInAGroups(int group = 0);
    virtual void addInAddressGroup(const VanetAddress& addr, int group = 0);
    virtual bool delInAddressGroup(const VanetAddress& addr, int group = 0);
    virtual bool findInAddressGroup(const VanetAddress& addr, int group = 0);

    /// find address in all groups and if found, returns true and set group to index of group that contains the addr
    virtual bool findAddressAndGroup(const VanetAddress& addr, int &group);

    virtual bool isInAddressGroup(int group = 0);

    //FIXME why duplicated the next functions?
    virtual bool getAddressGroup(AddressGroup &, int group = 0);
    virtual bool getAddressGroup(std::vector<VanetAddress> &, int group = 0);

    virtual int  getRouteGroup(const AddressGroup &gr, std::vector<VanetAddress> &){opp_error("getRouteGroup, method is not implemented"); return 0;}
    virtual int  getRouteGroup(const VanetAddress&, std::vector<VanetAddress> &, VanetAddress&, bool &, int group = 0){opp_error("getRouteGroup, method is not implemented"); return 0;}

    virtual bool getNextHopGroup(const AddressGroup &gr, VanetAddress &add, int &iface, VanetAddress&){opp_error("getNextHopGroup, method is not implemented"); return false;}
    virtual bool getNextHopGroup(const VanetAddress&, VanetAddress &add, int &iface, VanetAddress&, bool &, int group = 0){opp_error("getNextHopGroup, method is not implemented"); return false;}


    /// proxy/gateway methods, this methods help to the reactive protocols to answer the RREQ for a address that are in other subnetwork
    //@{
    /// Set if the node will work like gateway for address in the list
    virtual void setIsGateway(bool p) {isGateway = p;}

    virtual bool getIsGateway() {return isGateway;}

    /// return true if the node must answer because the address is in the list
    virtual bool isAddressInProxyList(const VanetAddress& addr);

    virtual void setAddressInProxyList(const VanetAddress& addr, const VanetAddress& mask);

    virtual int getNumAddressInProxyList() {return (int)proxyAddress.size();}

    /// get i-th address/mask pair from proxyAddress vector
    virtual bool getAddressInProxyList(int i, VanetAddress &outAddr, VanetAddress &outMask);
    //@}

    /**
     * access to locator information
     */
    virtual bool getAp(const VanetAddress& destination, VanetAddress& outAccesPointAddr) const;
    virtual bool isAp() const;
    //
    static bool getRouteFromGlobal(const VanetAddress &src, const VanetAddress &dest, std::vector<VanetAddress> &route);


    // used for dimension the address size
    int getAddressSize() {return addressSizeBytes;}
    void setAddressSize(int p) {addressSizeBytes = p;}

    virtual bool handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback);
    virtual bool handleNodeStart(IDoneCallback *doneCallback) = 0;
    virtual bool handleNodeShutdown(IDoneCallback *doneCallback) = 0;
    virtual void handleNodeCrash() = 0;

};

#define interface80211ptr getInterfaceWlanByAddress()
#endif

