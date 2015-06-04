
#ifndef _AODVVANET_MSG_OMNET_H
#define _AODVVANET_MSG_OMNET_H

#include <stdio.h>
#include <stdlib.h>
//#include <unistd.h>
//#include <sys/time.h>
//#include <sys/types.h>
#include "compatibility.h"

#include "aodvvanet_msg_struct_m.h"

#define ManetAddressSizeUsed 4

// this structures are a redifinition of def.h struct for omnet

typedef struct
{
    u_int8_t type;
    u_int8_t length;
    char * pointer;
    /* Type specific data follows here */
} AODVVANET_ext;

/* A generic AODVVANET packet header struct... */ /* Omnet++ definition */
struct AODVVANET_msg : public cPacket
{
    u_int8_t type;
    uint8_t ttl;
    bool prevFix;
  private:
    AODVVANET_ext *extension;
    int extensionsize;
    /* NS_PORT: Additions for the AODVVANET packet type in ns-2 */

  public:
    //explicit AODVVANET_msg(const char *name="AodvMgs") : cPacket(name) {extensionsize=0;extension=NULL;}
    explicit AODVVANET_msg(const char *name=NULL) : cPacket(name) {extensionsize=0; extension=NULL;}
    ~AODVVANET_msg ();
    AODVVANET_msg (const AODVVANET_msg  &m);
    AODVVANET_msg &  operator= (const AODVVANET_msg &m);
    virtual AODVVANET_msg *dup() const {return new AODVVANET_msg(*this);}
    uint8_t getType() const {return type;}
    uint8_t getTtl() const {return ttl;}
    bool getPrevFix() const {return prevFix;}
    AODVVANET_ext *  addExtension(int,int,char *);
    void clearExtension();
    AODVVANET_ext * getExtension(int i) {return &extension[i];}
    AODVVANET_ext& getExtensionRef(int i) {return extension[i];}
    AODVVANET_ext * getFirstExtension () {return extension;}
    AODVVANET_ext * getNexExtension(AODVVANET_ext*);
    int getNumExtension() {return extensionsize;}
  private:
    void copy(const AODVVANET_msg& other);
};
typedef AODVVANET_msg hdr_aodvuu;    // Name convention for headers

#define HDR_AODVVANET(p) ((hdr_aodvuu *) hdr_aodvuu::access(p))
#define AODVVANET_EXT_HDR_SIZE 2
#define AODVVANET_EXT_DATA(ext) ((char *)ext->pointer)
#define AODVVANET_EXT_NEXT(ext) ((AODVVANET_ext *) (ext+1))
#define AODVVANET_EXT_SIZE(ext) (AODVVANET_EXT_HDR_SIZE+ext->length)

/* Extra unreachable destinations... */
typedef struct
{
    // u_int32_t dest_addr;
    ManetAddress dest_addr;
    u_int32_t dest_seqno;
} VANET_RERR_udest;
//#define VANET_RERR_UDEST_SIZE sizeof(VANET_RERR_udest)
// 8 for IPv4
//#define VANET_RERR_UDEST_SIZE 4+ManetAddressSizeUsed

#ifdef VANET_RERR
#undef VANET_RERR
#endif

struct VANET_RERR : public AODVVANET_msg
{
    unsigned short res1;
    unsigned short n;
    unsigned short res2;
    u_int8_t dest_count;
    VANET_RERR_udest *   _udest;
    explicit VANET_RERR(const char *name="VANET_RERRAodvMsg");
    ~VANET_RERR ();
    VANET_RERR (const VANET_RERR &m);
    unsigned short getRes1() const {return res1;}
    unsigned short getN() const {return n;}
    unsigned short getRes2() const {return res2;}
    int getUdestArraySize() {return dest_count;}
    void addUdest(const ManetAddress &,unsigned int);
    void clearUdest();
    VANET_RERR_udest *getUdest(int);
    VANET_RERR_udest& getUdestRef(int i) {return *getUdest(i);}
    VANET_RERR &  operator= (const VANET_RERR &m);
    virtual VANET_RERR *dup() const {return new VANET_RERR(*this);}
  private:
    void copy(const VANET_RERR& other);
};

#define VANET_RERR_UDEST_FIRST(rerr) (rerr->getUdest(0))
#define VANET_RERR_UDEST_NEXT(udest) ((VANET_RERR_udest *)((char *)udest + sizeof(VANET_RERR_udest)))
// 12 for IPv4
//#define VANET_RERR_SIZE 8+ManetAddressSizeUsed
#define VANET_RERR_CALC_SIZE(rerr) (rerr->getByteLength())

struct VANET_RREP : public AODVVANET_msg
{
    u_int16_t res1;
    u_int16_t a;
    u_int16_t r;
    u_int16_t prefix;
    u_int16_t res2;
    u_int8_t hcnt;
//  u_int32_t dest_addr;
    ManetAddress dest_addr;
    u_int32_t dest_seqno;
//  u_int32_t orig_addr;
    ManetAddress orig_addr;
    u_int32_t lifetime;
    uint32_t cost;
    uint8_t  hopfix;
    uint8_t  totalHops;
    explicit VANET_RREP (const char *name="VANET_RREPAodvMsg");
    VANET_RREP (const VANET_RREP &m);
    VANET_RREP &  operator= (const VANET_RREP &m);
    virtual VANET_RREP *dup() const {return new VANET_RREP(*this);}
    virtual std::string detailedInfo() const;
    uint16_t getRes1() const {return res1;}
    uint16_t getA() const {return a;}
    uint16_t getR() const {return r;}
    uint16_t getPrefix() const {return prefix;}
    uint16_t getRes2() const {return res2;}
    uint8_t getHcnt() const {return hcnt;}
    //uint32_t getDest_addr() const {return dest_addr;}
    const ManetAddress& getDest_addr() const {return dest_addr;}
    uint32_t getDest_seqno() const {return dest_seqno;}
    //u_int32_t getOrig_addr() const {return orig_addr;}
    const ManetAddress& getOrig_addr() const {return orig_addr;}
    uint32_t getLifetime() const {return lifetime;}
    uint32_t getCost() const {return cost;}
    uint8_t  getHopfix() const {return hopfix;}
  private:
    void copy(const VANET_RREP& other);
} ;
// 20 for IPv4
//#define VANET_RREP_SIZE (ManetAddressSizeUsed*2)+12

struct VANET_RREP_ack : public AODVVANET_msg
{
    u_int8_t reserved;
  public:
    explicit VANET_RREP_ack (const char *name="VANET_RREPAckAodvMsg") : AODVVANET_msg (name) {setBitLength(2*8);}
    VANET_RREP_ack (const VANET_RREP_ack  &m);
    VANET_RREP_ack &  operator= (const VANET_RREP_ack &m);
    virtual VANET_RREP_ack *dup() const {return new VANET_RREP_ack(*this);}
    uint8_t getReserved() const {return reserved;}
  private:
    void copy(const VANET_RREP_ack& other) { reserved = other.reserved; }
} ;
#define VANET_RREP_ACK_SIZE 2

struct VANET_RREQ : public AODVVANET_msg
{
    u_int8_t j;     /* Join flag (multicast) */
    u_int8_t r;     /* Repair flag */
    u_int8_t g;     /* Gratuitous VANET_RREP flag */
    u_int8_t d;     /* Destination only respond */
    u_int8_t res1;
    u_int8_t res2;
    u_int8_t hcnt;
    u_int32_t rreq_id;
//  u_int32_t dest_addr;
    ManetAddress dest_addr;
    u_int32_t dest_seqno;
//  u_int32_t orig_addr;
    ManetAddress orig_addr;
    u_int32_t orig_seqno;
    uint32_t   cost;
    uint8_t  hopfix;
    explicit VANET_RREQ(const char *name="VANET_RREQAodvMsg");

    VANET_RREQ (const VANET_RREQ &m);
    VANET_RREQ &  operator= (const VANET_RREQ &m);
    virtual VANET_RREQ *dup() const {return new VANET_RREQ(*this);}
    virtual std::string detailedInfo() const;
    uint8_t getJ() const {return j;}
    uint8_t getR() const {return r;}
    uint8_t getG() const {return g;}
    uint8_t getD() const {return d;}
    uint8_t getRes1() const {return res1;}
    uint8_t getRes2() const {return res2;}
    uint8_t getHcnt() const {return hcnt;}
    uint32_t getRreq_id() const {return rreq_id;}
    //uint32_t getDest_addr() const {return dest_addr;}
    const ManetAddress& getDest_addr() const {return dest_addr;}
    uint32_t getDest_seqno() const {return dest_seqno;}
    //u_int32_t getOrig_addr() const {return orig_addr;}
    const ManetAddress& getOrig_addr() const {return orig_addr;}
    uint32_t getOrig_seqno() const {return orig_seqno;}
    uint32_t getCost() const {return cost;}
    uint8_t getHopfix() const {return hopfix;}
  private:
    void copy(const VANET_RREQ& other);
};
// 24 for IPv4
//#define VANET_RREQ_SIZE 16+(ManetAddressSizeUsed*2)
#endif

