/*****************************************************************************
 *
 * Copyright (C) 2002 Uppsala University.
 * Copyright (C) 2006 Malaga University.
 * Copyright (C) 2015 Florida Atlantic Unversity.
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors: Bj�n Wiberg <bjorn.wiberg@home.se>
 * Authors: Alfonso Ariza Quintana.<aarizaq@uma.ea>
 *
 *****************************************************************************/


#ifndef _AODVVANET_UU_H
#define _AODVVANET_UU_H

/* Constants for interface queue packet buffering/dropping */
#define IFQ_BUFFER 0
#define IFQ_DROP 1
#define IFQ_DROP_BY_DEST 2
#define PKT_ENC 0x1       /* Packet is encapsulated */
#define PKT_DEC 0x2 /* Packet arrived at GW and has been decapsulated (and
* should therefore be routed to the Internet */
// #define CONFIG_GATEWAY
// #define DEBUG_HELLO

#ifndef NS_PORT
#define NS_PORT
#endif
#ifndef OMNETPP
#define OMNETPP
#endif

/* This is a C++ port of AODVVANET-UU for ns-2 */
#ifndef NS_PORT
#error "To compile the ported version, NS_PORT must be defined!"
#endif /* NS_PORT */

#ifndef AODVVANET_USE_STL
#define AODVVANET_USE_STL
#endif

#ifndef AODVVANET_USE_STL_RT
#define AODVVANET_USE_STL_RT
#endif

#define AODVVANET_GLOBAL_STATISTISTIC

/* Global definitions and lib functions */
#include <deque>
#include "aodvvanet/params_aodvvanet.h"
#include "aodvvanet/defs_aodvvanet.h"

/* System-dependent datatypes */
/* Needed by some network-related datatypes */
#include "ManetRoutingBase.h"
#include "aodvvanet/list_aodvvanet.h"

#include "ICMPAccess.h"
#include "Ieee80211Frame_m.h"

#include "aodvvanet_msg_struct.h"
/* Forward declaration needed to be able to reference the class */
class AODVVANET;



#ifndef IP_BROADCAST
#define IP_BROADCAST ((u_int32_t) 0xffffffff)
#endif /* !IP_BROADCAST */

/* Extract global data types, defines and global declarations */
#undef NS_NO_GLOBALS
#define NS_NO_DECLARATIONS

#include "aodvvanet/timer_queue_aodvvanet.h"
#include "aodvvanet/aodvvanet_hello.h"
#include "aodvvanet/aodvvanet_rerr.h"
#include "aodvvanet/aodvvanet_rrep.h"
#include "aodvvanet/aodvvanet_rreq.h"
#include "aodvvanet/aodvvanet_socket.h"
#include "aodvvanet/aodvvanet_timeout.h"
#include "aodvvanet/debug_aodvvanet.h"
#include "aodvvanet/routing_table_aodvvanet.h"
#include "aodvvanet/seek_list_aodvvanet.h"
#include "aodvvanet/locality_aodvvanet.h"

#include "aodvvanet_packet_queue_omnet.h"

#undef NS_NO_DECLARATIONS

/* In omnet we don't care about byte order */
#undef ntohl
#define ntohl(x) x
#undef htonl
#define htonl(x) x
#undef htons
#define htons(x) x
#undef ntohs
#define ntohs(x) x



/* The AODVVANET-UU routing agent class */
class AODVVANET : public ManetRoutingBase
{
  private:
    int  VANET_RERR_UDEST_SIZE;
    int VANET_RERR_SIZE;
    int VANET_RREP_SIZE;
    int  VANET_RREQ_SIZE;
  private:
    char nodeName[50];
    ICMPAccess icmpAccess;
    bool useIndex;
    bool isRoot;
    uint32_t costStatic;
    uint32_t costMobile;
    bool useHover;
    bool propagateProactive;
    struct timer proactive_rreq_timer;
    long proactive_rreq_timeout;
    bool isBroadcast (ManetAddress add)
    {
        if (this->isInMacLayer() && add==ManetAddress(MACAddress::BROADCAST_ADDRESS))
             return true;
        if (!this->isInMacLayer() && add==ManetAddress(IPv4Address::ALLONES_ADDRESS))
            return true;
        return false;
    }
    // cMessage  messageEvent;
    typedef std::multimap<simtime_t, struct timer*> AodvTimerMap;
    AodvTimerMap aodvTimerMap;
    typedef std::map<ManetAddress, struct rt_table*> AodvRtTableMap;
    AodvRtTableMap aodvRtTableMap;

    // this static map simulate the exchange of seq num by the proactive protocol.
    static std::map<ManetAddress,u_int32_t *> mapSeqNum;


  private:
    class PacketDestOrigin
    {
        private:
            ManetAddress dest;
            ManetAddress origin;
        public:
            PacketDestOrigin() {}
            PacketDestOrigin(const ManetAddress &s,const ManetAddress &o)
            {
                dest = s;
                origin = o;
            }
            ManetAddress getDest() {return dest;}
            void setDests(const ManetAddress & s) {dest = s;}
            ManetAddress getOrigin() {return origin;}
            void setOrigin(const ManetAddress & s) {origin = s;}

            inline bool operator<(const PacketDestOrigin& b) const
            {
                if (dest != b.dest)
                    return dest < b.dest;
                else
                    return origin < b.origin;
            }
            inline bool operator == (const PacketDestOrigin& b) const
            {
                if (dest == b.dest && origin == b.origin)
                    return true;
                else
                    return false;
            }
            PacketDestOrigin& operator=(const PacketDestOrigin& a)
            {
                dest = a.dest; origin = a.origin; return *this;
            }
    };

    struct VANET_RREPProcessed
    {
        u_int8_t hcnt;
        u_int8_t totalHops;
        u_int32_t dest_seqno;
        u_int32_t origin_seqno;
        uint32_t cost;
        uint8_t  hopfix;
        ManetAddress next;
    };

    struct VANET_RREQInfo
    {
        u_int8_t hcnt;
        u_int32_t dest_seqno;
        u_int32_t origin_seqno;
        uint32_t cost;
        uint8_t  hopfix;
        cPacket *pkt;
    };

    struct VANET_RREQProcessed : cMessage
    {
        PacketDestOrigin destOrigin;
        std::deque<VANET_RREQInfo> infoList;
    };

    std::map<PacketDestOrigin,VANET_RREPProcessed> rrepProc;
    std::map<PacketDestOrigin,VANET_RREQProcessed*> rreqProc;

    struct DelayInfo : public cObject
    {
        struct in_addr dst;
        int len;
        u_int8_t ttl;
        struct dev_info *dev;
    };
    bool storeRreq;
    bool checkRrep;
    virtual bool isThisRrepPrevSent(cMessage *);
    virtual bool getDestAddressRreq(cPacket *msg,PacketDestOrigin &orgDest,VANET_RREQInfo &rreqInfo);
  public:
    static int  log_file_fd;
    static bool log_file_fd_init;
    AODVVANET() {isRoot = false; is_init = false; log_file_fd_init = false; sendMessageEvent = new cMessage(); mapSeqNum.clear(); /*&messageEvent;*/storeRreq = false;}
    ~AODVVANET();

    void actualizeTablesWithCollaborative(const ManetAddress &);

    void packetFailed(IPv4Datagram *p);
    void packetFailedMac(Ieee80211DataFrame *);

    // Routing information access
    virtual bool supportGetRoute() {return false;}
    virtual uint32_t getRoute(const ManetAddress &,std::vector<ManetAddress> &);
    virtual bool getNextHop(const ManetAddress &,ManetAddress &add,int &iface,double &);
    virtual bool isProactive();
    virtual void setRefreshRoute(const ManetAddress &destination, const ManetAddress & nextHop,bool isReverse);
    virtual bool setRoute(const ManetAddress & destination, const ManetAddress &nextHop, const int &ifaceIndex,const int &hops, const ManetAddress &mask=ManetAddress::ZERO);
    virtual bool setRoute(const ManetAddress & destination, const ManetAddress &nextHop, const char *ifaceName,const int &hops, const ManetAddress &mask=ManetAddress::ZERO);

    virtual bool handleNodeStart(IDoneCallback *doneCallback);
    virtual bool handleNodeShutdown(IDoneCallback *doneCallback);
    virtual void handleNodeCrash();

  protected:
    bool is_init;
    void drop (cPacket *p,int cause = 0)
    {
        delete p;
        // icmpAccess.get()->sendErrorMessage(p, ICMP_DESTINATION_UNREACHABLE, cause);
    }
    int startAODVVANETAgent();
    void scheduleNextEvent();
    const char *if_indextoname(int, char *);
    IPv4Datagram *pkt_encapsulate(IPv4Datagram *, IPv4Address);
    IPv4Datagram *pkt_decapsulate(IPv4Datagram *);
    virtual void handleMessage(cMessage *msg);
    virtual void finish();

    int numInitStages() const  {return 5;}
    void initialize(int stage);


    cMessage * sendMessageEvent;

    void recvAODVVANETPacket(cMessage * p);
    void processPacket(IPv4Datagram *,unsigned int);
    void processMacPacket(cPacket * p, const ManetAddress &dest, const ManetAddress &src, int ifindex);

    int initialized;
    int  node_id;
    IPv4Address *gateWayAddress;

    int NS_DEV_NR;
    int NS_IFINDEX;
    // cModule *ipmod;

    /*
      Extract method declarations (and occasionally, variables)
      from header files
    */
#define NS_NO_GLOBALS
#undef NS_NO_DECLARATIONS

#undef _AODVVANET_NEIGHBOR_H
#include "aodvvanet/aodvvanet_neighbor.h"

#undef _AODVVANET_HELLO_H
#include "aodvvanet/aodvvanet_hello.h"

#undef _AODVVANET_VANET_RERR_H
#include "aodvvanet/aodvvanet_rerr.h"

#undef _AODVVANET_VANET_RREP_H
#include "aodvvanet/aodvvanet_rrep.h"

#undef _AODVVANET_VANET_RREQ_H
#include "aodvvanet/aodvvanet_rreq.h"

#undef _AODVVANET_SOCKET_H
#include "aodvvanet/aodvvanet_socket.h"

#undef _AODVVANET_TIMEOUT_H
#include "aodvvanet/aodvvanet_timeout.h"

#undef _DEBUG_H
#include "aodvvanet/debug_aodvvanet.h"

#undef _routing_table_aodvvanet_H
#include "aodvvanet/routing_table_aodvvanet.h"

#undef _SEEK_LIST_H
#include "aodvvanet/seek_list_aodvvanet.h"

#undef _TIMER_QUEUE_H
#include "aodvvanet/timer_queue_aodvvanet.h"

#undef _LOCALITY_H
#include "aodvvanet/locality_aodvvanet.h"

#undef _PACKET_QUEUE_H
#include "aodvvanet_packet_queue_omnet.h"

#undef NS_NO_GLOBALS

    /* (Previously global) variables from main.c */
    int log_to_file;
    int rt_log_interval;
    int unidir_hack;
    int rreq_gratuitous;
    int expanding_ring_search;
    int internet_gw_mode;
    int local_repair;
    int receive_n_hellos;
    int hello_jittering;
    int optimized_hellos;
    int ratelimit;
    int llfeedback;
    char *progname;
    int wait_on_reboot;
    struct timer worb_timer;

    /* Parameters that are dynamic configuration values: */
    int active_route_timeout;
    int ttl_start;
    int delete_period;

    /* From aodvvanet_hello.c */
    struct timer hello_timer;
#ifndef AODVVANET_USE_STL
    /* From aodvvanet_rreq.c */
    list_t rreqRecords;
#define rreq_records this->rreqRecords
    list_t rreqBlacklist;
#define  rreq_blacklist this->rreqBlacklist

    /* From seek_list.c */
    list_t seekHead;
#define seekhead this->seekHead

    /* From timer_queue_aodvvanet.c */
    list_t timeList;
#define TQ this->timeList
#else
    typedef std::vector <rreq_record *>RreqRecords;
    typedef std::map <ManetAddress, struct blacklist *>RreqBlacklist;
    typedef std::map <ManetAddress, seek_list_t*>SeekHead;

    RreqRecords rreq_records;
    RreqBlacklist rreq_blacklist;
    SeekHead seekhead;
#endif
    /* From debug.c */
// int  log_file_fd;
    int log_rt_fd;
    int log_nmsgs;
    int debug;
    struct timer rt_log_timer;

    /* From defs.h */
    struct host_info this_host;
    struct dev_info dev_ifindex (int);
    struct dev_info dev_nr(int);
    unsigned int dev_indices[MAX_NR_INTERFACES];

//  inline int ifindex2devindex(unsigned int ifindex);
    int ifindex2devindex(unsigned int ifindex);
#ifdef AODVVANET_GLOBAL_STATISTISTIC
    static bool iswrite;
    static int totalSend;
    static int totalRreqSend;
    static int totalRreqRec;
    static int totalRrepSend;
    static int totalRrepRec;
    static int totalRrepAckSend;
    static int totalRrepAckRec;
    static int totalRerrSend;
    static int totalRerrRec;
    static int totalLocalRep;
#else
    bool iswrite;
    int totalSend;
    int totalRreqSend;
    int totalRreqRec;
    int totalRrepSend;
    int totalRrepRec;
    int totalRrepAckSend;
    int totalRrepAckRec;
    int totalRerrSend;
    int totalRerrRec;
    int totalLocalRep;
#endif
    virtual void processPromiscuous(const cObject *details);
    // used for break link notification
    virtual void processLinkBreak(const cObject *details);
    virtual void processFullPromiscuous(const cObject *details);
    virtual bool isOurType(cPacket *);
    virtual bool getDestAddress(cPacket *,ManetAddress &);


};

#if 0
/* From defs.h (needs the AODVVANET class declaration) */
inline int NS_CLASS ifindex2devindex(unsigned int ifindex)
{
    int i;

    for (i = 0; i < this_host.nif; i++)
        if (dev_indices[i] == ifindex)
            return i;

    return -1;
}
#endif
#endif /* AODVVANET_UU_H */
