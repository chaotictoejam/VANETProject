//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/vanetrouting/bitcar/BITCARControlPackets.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "BITCARControlPackets_m.h"

USING_NAMESPACE


// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




// Template rule for outputting std::vector<T> types
template<typename T, typename A>
inline std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec)
{
    out.put('{');
    for(typename std::vector<T,A>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it != vec.begin()) {
            out.put(','); out.put(' ');
        }
        out << *it;
    }
    out.put('}');
    
    char buf[32];
    sprintf(buf, " (size=%u)", (unsigned int)vec.size());
    out.write(buf, strlen(buf));
    return out;
}

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

UnreachableBITCARNode::UnreachableBITCARNode()
{
    seqNum = 0;
}

void doPacking(cCommBuffer *b, UnreachableBITCARNode& a)
{
    doPacking(b,a.addr);
    doPacking(b,a.seqNum);
}

void doUnpacking(cCommBuffer *b, UnreachableBITCARNode& a)
{
    doUnpacking(b,a.addr);
    doUnpacking(b,a.seqNum);
}

class UnreachableBITCARNodeDescriptor : public cClassDescriptor
{
  public:
    UnreachableBITCARNodeDescriptor();
    virtual ~UnreachableBITCARNodeDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(UnreachableBITCARNodeDescriptor);

UnreachableBITCARNodeDescriptor::UnreachableBITCARNodeDescriptor() : cClassDescriptor("UnreachableBITCARNode", "")
{
}

UnreachableBITCARNodeDescriptor::~UnreachableBITCARNodeDescriptor()
{
}

bool UnreachableBITCARNodeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UnreachableBITCARNode *>(obj)!=NULL;
}

const char *UnreachableBITCARNodeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UnreachableBITCARNodeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int UnreachableBITCARNodeDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *UnreachableBITCARNodeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "addr",
        "seqNum",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int UnreachableBITCARNodeDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addr")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNum")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UnreachableBITCARNodeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "unsigned int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *UnreachableBITCARNodeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int UnreachableBITCARNodeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableBITCARNode *pp = (UnreachableBITCARNode *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UnreachableBITCARNodeDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableBITCARNode *pp = (UnreachableBITCARNode *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->addr; return out.str();}
        case 1: return ulong2string(pp->seqNum);
        default: return "";
    }
}

bool UnreachableBITCARNodeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableBITCARNode *pp = (UnreachableBITCARNode *)object; (void)pp;
    switch (field) {
        case 1: pp->seqNum = string2ulong(value); return true;
        default: return false;
    }
}

const char *UnreachableBITCARNodeDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *UnreachableBITCARNodeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableBITCARNode *pp = (UnreachableBITCARNode *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->addr); break;
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("BITCARControlPacketType");
    if (!e) enums.getInstance()->add(e = new cEnum("BITCARControlPacketType"));
    e->insert(AODVVANETRREQ, "AODVVANETRREQ");
    e->insert(RREP, "RREP");
    e->insert(RERR, "RERR");
    e->insert(RREPACK, "RREPACK");
);

Register_Class(BITCARControlPacket);

BITCARControlPacket::BITCARControlPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->packetType_var = 0;
}

BITCARControlPacket::BITCARControlPacket(const BITCARControlPacket& other) : ::cPacket(other)
{
    copy(other);
}

BITCARControlPacket::~BITCARControlPacket()
{
}

BITCARControlPacket& BITCARControlPacket::operator=(const BITCARControlPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void BITCARControlPacket::copy(const BITCARControlPacket& other)
{
    this->packetType_var = other.packetType_var;
}

void BITCARControlPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
}

void BITCARControlPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
}

unsigned int BITCARControlPacket::getPacketType() const
{
    return packetType_var;
}

void BITCARControlPacket::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

class BITCARControlPacketDescriptor : public cClassDescriptor
{
  public:
    BITCARControlPacketDescriptor();
    virtual ~BITCARControlPacketDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(BITCARControlPacketDescriptor);

BITCARControlPacketDescriptor::BITCARControlPacketDescriptor() : cClassDescriptor("BITCARControlPacket", "cPacket")
{
}

BITCARControlPacketDescriptor::~BITCARControlPacketDescriptor()
{
}

bool BITCARControlPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BITCARControlPacket *>(obj)!=NULL;
}

const char *BITCARControlPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BITCARControlPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int BITCARControlPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *BITCARControlPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int BITCARControlPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BITCARControlPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *BITCARControlPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int BITCARControlPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BITCARControlPacket *pp = (BITCARControlPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BITCARControlPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BITCARControlPacket *pp = (BITCARControlPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool BITCARControlPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BITCARControlPacket *pp = (BITCARControlPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *BITCARControlPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *BITCARControlPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BITCARControlPacket *pp = (BITCARControlPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(BITCARAODVVANETRREQ);

BITCARAODVVANETRREQ::BITCARAODVVANETRREQ(const char *name) : ::BITCARControlPacket(name)
{
    this->packetType_var = AODVVANETRREQ;
    this->joinFlag_var = 0;
    this->repairFlag_var = 0;
    this->gratuitousRREPFlag_var = 0;
    this->destOnlyFlag_var = 0;
    this->unknownSeqNumFlag_var = 0;
    this->hopCount_var = 0;
    this->rreqId_var = 0;
    this->destSeqNum_var = 0;
    this->originatorSeqNum_var = 0;
    this->twr_var = 0;
    this->expirationtime_var = 0;
}

BITCARAODVVANETRREQ::BITCARAODVVANETRREQ(const BITCARAODVVANETRREQ& other) : ::BITCARControlPacket(other)
{
    copy(other);
}

BITCARAODVVANETRREQ::~BITCARAODVVANETRREQ()
{
}

BITCARAODVVANETRREQ& BITCARAODVVANETRREQ::operator=(const BITCARAODVVANETRREQ& other)
{
    if (this==&other) return *this;
    ::BITCARControlPacket::operator=(other);
    copy(other);
    return *this;
}

void BITCARAODVVANETRREQ::copy(const BITCARAODVVANETRREQ& other)
{
    this->packetType_var = other.packetType_var;
    this->joinFlag_var = other.joinFlag_var;
    this->repairFlag_var = other.repairFlag_var;
    this->gratuitousRREPFlag_var = other.gratuitousRREPFlag_var;
    this->destOnlyFlag_var = other.destOnlyFlag_var;
    this->unknownSeqNumFlag_var = other.unknownSeqNumFlag_var;
    this->hopCount_var = other.hopCount_var;
    this->rreqId_var = other.rreqId_var;
    this->destAddr_var = other.destAddr_var;
    this->destSeqNum_var = other.destSeqNum_var;
    this->originatorAddr_var = other.originatorAddr_var;
    this->originatorSeqNum_var = other.originatorSeqNum_var;
    this->position_var = other.position_var;
    this->speed_var = other.speed_var;
    this->acceleration_var = other.acceleration_var;
    this->direction_var = other.direction_var;
    this->twr_var = other.twr_var;
    this->expirationtime_var = other.expirationtime_var;
}

void BITCARAODVVANETRREQ::parsimPack(cCommBuffer *b)
{
    ::BITCARControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    doPacking(b,this->joinFlag_var);
    doPacking(b,this->repairFlag_var);
    doPacking(b,this->gratuitousRREPFlag_var);
    doPacking(b,this->destOnlyFlag_var);
    doPacking(b,this->unknownSeqNumFlag_var);
    doPacking(b,this->hopCount_var);
    doPacking(b,this->rreqId_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->destSeqNum_var);
    doPacking(b,this->originatorAddr_var);
    doPacking(b,this->originatorSeqNum_var);
    doPacking(b,this->position_var);
    doPacking(b,this->speed_var);
    doPacking(b,this->acceleration_var);
    doPacking(b,this->direction_var);
    doPacking(b,this->twr_var);
    doPacking(b,this->expirationtime_var);
}

void BITCARAODVVANETRREQ::parsimUnpack(cCommBuffer *b)
{
    ::BITCARControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    doUnpacking(b,this->joinFlag_var);
    doUnpacking(b,this->repairFlag_var);
    doUnpacking(b,this->gratuitousRREPFlag_var);
    doUnpacking(b,this->destOnlyFlag_var);
    doUnpacking(b,this->unknownSeqNumFlag_var);
    doUnpacking(b,this->hopCount_var);
    doUnpacking(b,this->rreqId_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->destSeqNum_var);
    doUnpacking(b,this->originatorAddr_var);
    doUnpacking(b,this->originatorSeqNum_var);
    doUnpacking(b,this->position_var);
    doUnpacking(b,this->speed_var);
    doUnpacking(b,this->acceleration_var);
    doUnpacking(b,this->direction_var);
    doUnpacking(b,this->twr_var);
    doUnpacking(b,this->expirationtime_var);
}

unsigned int BITCARAODVVANETRREQ::getPacketType() const
{
    return packetType_var;
}

void BITCARAODVVANETRREQ::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

bool BITCARAODVVANETRREQ::getJoinFlag() const
{
    return joinFlag_var;
}

void BITCARAODVVANETRREQ::setJoinFlag(bool joinFlag)
{
    this->joinFlag_var = joinFlag;
}

bool BITCARAODVVANETRREQ::getRepairFlag() const
{
    return repairFlag_var;
}

void BITCARAODVVANETRREQ::setRepairFlag(bool repairFlag)
{
    this->repairFlag_var = repairFlag;
}

bool BITCARAODVVANETRREQ::getGratuitousRREPFlag() const
{
    return gratuitousRREPFlag_var;
}

void BITCARAODVVANETRREQ::setGratuitousRREPFlag(bool gratuitousRREPFlag)
{
    this->gratuitousRREPFlag_var = gratuitousRREPFlag;
}

bool BITCARAODVVANETRREQ::getDestOnlyFlag() const
{
    return destOnlyFlag_var;
}

void BITCARAODVVANETRREQ::setDestOnlyFlag(bool destOnlyFlag)
{
    this->destOnlyFlag_var = destOnlyFlag;
}

bool BITCARAODVVANETRREQ::getUnknownSeqNumFlag() const
{
    return unknownSeqNumFlag_var;
}

void BITCARAODVVANETRREQ::setUnknownSeqNumFlag(bool unknownSeqNumFlag)
{
    this->unknownSeqNumFlag_var = unknownSeqNumFlag;
}

unsigned int BITCARAODVVANETRREQ::getHopCount() const
{
    return hopCount_var;
}

void BITCARAODVVANETRREQ::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

unsigned int BITCARAODVVANETRREQ::getRreqId() const
{
    return rreqId_var;
}

void BITCARAODVVANETRREQ::setRreqId(unsigned int rreqId)
{
    this->rreqId_var = rreqId;
}

IPv4Address& BITCARAODVVANETRREQ::getDestAddr()
{
    return destAddr_var;
}

void BITCARAODVVANETRREQ::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int BITCARAODVVANETRREQ::getDestSeqNum() const
{
    return destSeqNum_var;
}

void BITCARAODVVANETRREQ::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum_var = destSeqNum;
}

IPv4Address& BITCARAODVVANETRREQ::getOriginatorAddr()
{
    return originatorAddr_var;
}

void BITCARAODVVANETRREQ::setOriginatorAddr(const IPv4Address& originatorAddr)
{
    this->originatorAddr_var = originatorAddr;
}

unsigned int BITCARAODVVANETRREQ::getOriginatorSeqNum() const
{
    return originatorSeqNum_var;
}

void BITCARAODVVANETRREQ::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum_var = originatorSeqNum;
}

Coord& BITCARAODVVANETRREQ::getPosition()
{
    return position_var;
}

void BITCARAODVVANETRREQ::setPosition(const Coord& position)
{
    this->position_var = position;
}

Coord& BITCARAODVVANETRREQ::getSpeed()
{
    return speed_var;
}

void BITCARAODVVANETRREQ::setSpeed(const Coord& speed)
{
    this->speed_var = speed;
}

Coord& BITCARAODVVANETRREQ::getAcceleration()
{
    return acceleration_var;
}

void BITCARAODVVANETRREQ::setAcceleration(const Coord& acceleration)
{
    this->acceleration_var = acceleration;
}

Coord& BITCARAODVVANETRREQ::getDirection()
{
    return direction_var;
}

void BITCARAODVVANETRREQ::setDirection(const Coord& direction)
{
    this->direction_var = direction;
}

double BITCARAODVVANETRREQ::getTwr() const
{
    return twr_var;
}

void BITCARAODVVANETRREQ::setTwr(double twr)
{
    this->twr_var = twr;
}

double BITCARAODVVANETRREQ::getExpirationtime() const
{
    return expirationtime_var;
}

void BITCARAODVVANETRREQ::setExpirationtime(double expirationtime)
{
    this->expirationtime_var = expirationtime;
}

class BITCARAODVVANETRREQDescriptor : public cClassDescriptor
{
  public:
    BITCARAODVVANETRREQDescriptor();
    virtual ~BITCARAODVVANETRREQDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(BITCARAODVVANETRREQDescriptor);

BITCARAODVVANETRREQDescriptor::BITCARAODVVANETRREQDescriptor() : cClassDescriptor("BITCARAODVVANETRREQ", "BITCARControlPacket")
{
}

BITCARAODVVANETRREQDescriptor::~BITCARAODVVANETRREQDescriptor()
{
}

bool BITCARAODVVANETRREQDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BITCARAODVVANETRREQ *>(obj)!=NULL;
}

const char *BITCARAODVVANETRREQDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BITCARAODVVANETRREQDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 18+basedesc->getFieldCount(object) : 18;
}

unsigned int BITCARAODVVANETRREQDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<18) ? fieldTypeFlags[field] : 0;
}

const char *BITCARAODVVANETRREQDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "joinFlag",
        "repairFlag",
        "gratuitousRREPFlag",
        "destOnlyFlag",
        "unknownSeqNumFlag",
        "hopCount",
        "rreqId",
        "destAddr",
        "destSeqNum",
        "originatorAddr",
        "originatorSeqNum",
        "position",
        "speed",
        "acceleration",
        "direction",
        "twr",
        "expirationtime",
    };
    return (field>=0 && field<18) ? fieldNames[field] : NULL;
}

int BITCARAODVVANETRREQDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='j' && strcmp(fieldName, "joinFlag")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "repairFlag")==0) return base+2;
    if (fieldName[0]=='g' && strcmp(fieldName, "gratuitousRREPFlag")==0) return base+3;
    if (fieldName[0]=='d' && strcmp(fieldName, "destOnlyFlag")==0) return base+4;
    if (fieldName[0]=='u' && strcmp(fieldName, "unknownSeqNumFlag")==0) return base+5;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+6;
    if (fieldName[0]=='r' && strcmp(fieldName, "rreqId")==0) return base+7;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+8;
    if (fieldName[0]=='d' && strcmp(fieldName, "destSeqNum")==0) return base+9;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorAddr")==0) return base+10;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorSeqNum")==0) return base+11;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+12;
    if (fieldName[0]=='s' && strcmp(fieldName, "speed")==0) return base+13;
    if (fieldName[0]=='a' && strcmp(fieldName, "acceleration")==0) return base+14;
    if (fieldName[0]=='d' && strcmp(fieldName, "direction")==0) return base+15;
    if (fieldName[0]=='t' && strcmp(fieldName, "twr")==0) return base+16;
    if (fieldName[0]=='e' && strcmp(fieldName, "expirationtime")==0) return base+17;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BITCARAODVVANETRREQDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "bool",
        "bool",
        "bool",
        "bool",
        "bool",
        "unsigned int",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "Coord",
        "Coord",
        "Coord",
        "Coord",
        "double",
        "double",
    };
    return (field>=0 && field<18) ? fieldTypeStrings[field] : NULL;
}

const char *BITCARAODVVANETRREQDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int BITCARAODVVANETRREQDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BITCARAODVVANETRREQ *pp = (BITCARAODVVANETRREQ *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BITCARAODVVANETRREQDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BITCARAODVVANETRREQ *pp = (BITCARAODVVANETRREQ *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: return bool2string(pp->getJoinFlag());
        case 2: return bool2string(pp->getRepairFlag());
        case 3: return bool2string(pp->getGratuitousRREPFlag());
        case 4: return bool2string(pp->getDestOnlyFlag());
        case 5: return bool2string(pp->getUnknownSeqNumFlag());
        case 6: return ulong2string(pp->getHopCount());
        case 7: return ulong2string(pp->getRreqId());
        case 8: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 9: return ulong2string(pp->getDestSeqNum());
        case 10: {std::stringstream out; out << pp->getOriginatorAddr(); return out.str();}
        case 11: return ulong2string(pp->getOriginatorSeqNum());
        case 12: {std::stringstream out; out << pp->getPosition(); return out.str();}
        case 13: {std::stringstream out; out << pp->getSpeed(); return out.str();}
        case 14: {std::stringstream out; out << pp->getAcceleration(); return out.str();}
        case 15: {std::stringstream out; out << pp->getDirection(); return out.str();}
        case 16: return double2string(pp->getTwr());
        case 17: return double2string(pp->getExpirationtime());
        default: return "";
    }
}

bool BITCARAODVVANETRREQDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BITCARAODVVANETRREQ *pp = (BITCARAODVVANETRREQ *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 1: pp->setJoinFlag(string2bool(value)); return true;
        case 2: pp->setRepairFlag(string2bool(value)); return true;
        case 3: pp->setGratuitousRREPFlag(string2bool(value)); return true;
        case 4: pp->setDestOnlyFlag(string2bool(value)); return true;
        case 5: pp->setUnknownSeqNumFlag(string2bool(value)); return true;
        case 6: pp->setHopCount(string2ulong(value)); return true;
        case 7: pp->setRreqId(string2ulong(value)); return true;
        case 9: pp->setDestSeqNum(string2ulong(value)); return true;
        case 11: pp->setOriginatorSeqNum(string2ulong(value)); return true;
        case 16: pp->setTwr(string2double(value)); return true;
        case 17: pp->setExpirationtime(string2double(value)); return true;
        default: return false;
    }
}

const char *BITCARAODVVANETRREQDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 8: return opp_typename(typeid(IPv4Address));
        case 10: return opp_typename(typeid(IPv4Address));
        case 12: return opp_typename(typeid(Coord));
        case 13: return opp_typename(typeid(Coord));
        case 14: return opp_typename(typeid(Coord));
        case 15: return opp_typename(typeid(Coord));
        default: return NULL;
    };
}

void *BITCARAODVVANETRREQDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BITCARAODVVANETRREQ *pp = (BITCARAODVVANETRREQ *)object; (void)pp;
    switch (field) {
        case 8: return (void *)(&pp->getDestAddr()); break;
        case 10: return (void *)(&pp->getOriginatorAddr()); break;
        case 12: return (void *)(&pp->getPosition()); break;
        case 13: return (void *)(&pp->getSpeed()); break;
        case 14: return (void *)(&pp->getAcceleration()); break;
        case 15: return (void *)(&pp->getDirection()); break;
        default: return NULL;
    }
}

Register_Class(BITCARRREP);

BITCARRREP::BITCARRREP(const char *name) : ::BITCARControlPacket(name)
{
    this->packetType_var = RREP;
    this->repairFlag_var = 0;
    this->ackRequiredFlag_var = 0;
    this->prefixSize_var = 0;
    this->hopCount_var = 0;
    this->destSeqNum_var = 0;
    this->originatorSeqNum_var = 0;
    this->lifeTime_var = 0;
    this->twr_var = 0;
    this->expirationtime_var = 0;
}

BITCARRREP::BITCARRREP(const BITCARRREP& other) : ::BITCARControlPacket(other)
{
    copy(other);
}

BITCARRREP::~BITCARRREP()
{
}

BITCARRREP& BITCARRREP::operator=(const BITCARRREP& other)
{
    if (this==&other) return *this;
    ::BITCARControlPacket::operator=(other);
    copy(other);
    return *this;
}

void BITCARRREP::copy(const BITCARRREP& other)
{
    this->packetType_var = other.packetType_var;
    this->repairFlag_var = other.repairFlag_var;
    this->ackRequiredFlag_var = other.ackRequiredFlag_var;
    this->prefixSize_var = other.prefixSize_var;
    this->hopCount_var = other.hopCount_var;
    this->destAddr_var = other.destAddr_var;
    this->destSeqNum_var = other.destSeqNum_var;
    this->originatorAddr_var = other.originatorAddr_var;
    this->originatorSeqNum_var = other.originatorSeqNum_var;
    this->lifeTime_var = other.lifeTime_var;
    this->twr_var = other.twr_var;
    this->expirationtime_var = other.expirationtime_var;
}

void BITCARRREP::parsimPack(cCommBuffer *b)
{
    ::BITCARControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    doPacking(b,this->repairFlag_var);
    doPacking(b,this->ackRequiredFlag_var);
    doPacking(b,this->prefixSize_var);
    doPacking(b,this->hopCount_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->destSeqNum_var);
    doPacking(b,this->originatorAddr_var);
    doPacking(b,this->originatorSeqNum_var);
    doPacking(b,this->lifeTime_var);
    doPacking(b,this->twr_var);
    doPacking(b,this->expirationtime_var);
}

void BITCARRREP::parsimUnpack(cCommBuffer *b)
{
    ::BITCARControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    doUnpacking(b,this->repairFlag_var);
    doUnpacking(b,this->ackRequiredFlag_var);
    doUnpacking(b,this->prefixSize_var);
    doUnpacking(b,this->hopCount_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->destSeqNum_var);
    doUnpacking(b,this->originatorAddr_var);
    doUnpacking(b,this->originatorSeqNum_var);
    doUnpacking(b,this->lifeTime_var);
    doUnpacking(b,this->twr_var);
    doUnpacking(b,this->expirationtime_var);
}

unsigned int BITCARRREP::getPacketType() const
{
    return packetType_var;
}

void BITCARRREP::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

bool BITCARRREP::getRepairFlag() const
{
    return repairFlag_var;
}

void BITCARRREP::setRepairFlag(bool repairFlag)
{
    this->repairFlag_var = repairFlag;
}

bool BITCARRREP::getAckRequiredFlag() const
{
    return ackRequiredFlag_var;
}

void BITCARRREP::setAckRequiredFlag(bool ackRequiredFlag)
{
    this->ackRequiredFlag_var = ackRequiredFlag;
}

unsigned int BITCARRREP::getPrefixSize() const
{
    return prefixSize_var;
}

void BITCARRREP::setPrefixSize(unsigned int prefixSize)
{
    this->prefixSize_var = prefixSize;
}

unsigned int BITCARRREP::getHopCount() const
{
    return hopCount_var;
}

void BITCARRREP::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

IPv4Address& BITCARRREP::getDestAddr()
{
    return destAddr_var;
}

void BITCARRREP::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int BITCARRREP::getDestSeqNum() const
{
    return destSeqNum_var;
}

void BITCARRREP::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum_var = destSeqNum;
}

IPv4Address& BITCARRREP::getOriginatorAddr()
{
    return originatorAddr_var;
}

void BITCARRREP::setOriginatorAddr(const IPv4Address& originatorAddr)
{
    this->originatorAddr_var = originatorAddr;
}

unsigned int BITCARRREP::getOriginatorSeqNum() const
{
    return originatorSeqNum_var;
}

void BITCARRREP::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum_var = originatorSeqNum;
}

simtime_t BITCARRREP::getLifeTime() const
{
    return lifeTime_var;
}

void BITCARRREP::setLifeTime(simtime_t lifeTime)
{
    this->lifeTime_var = lifeTime;
}

double BITCARRREP::getTwr() const
{
    return twr_var;
}

void BITCARRREP::setTwr(double twr)
{
    this->twr_var = twr;
}

double BITCARRREP::getExpirationtime() const
{
    return expirationtime_var;
}

void BITCARRREP::setExpirationtime(double expirationtime)
{
    this->expirationtime_var = expirationtime;
}

class BITCARRREPDescriptor : public cClassDescriptor
{
  public:
    BITCARRREPDescriptor();
    virtual ~BITCARRREPDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(BITCARRREPDescriptor);

BITCARRREPDescriptor::BITCARRREPDescriptor() : cClassDescriptor("BITCARRREP", "BITCARControlPacket")
{
}

BITCARRREPDescriptor::~BITCARRREPDescriptor()
{
}

bool BITCARRREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BITCARRREP *>(obj)!=NULL;
}

const char *BITCARRREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BITCARRREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 12+basedesc->getFieldCount(object) : 12;
}

unsigned int BITCARRREPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<12) ? fieldTypeFlags[field] : 0;
}

const char *BITCARRREPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "repairFlag",
        "ackRequiredFlag",
        "prefixSize",
        "hopCount",
        "destAddr",
        "destSeqNum",
        "originatorAddr",
        "originatorSeqNum",
        "lifeTime",
        "twr",
        "expirationtime",
    };
    return (field>=0 && field<12) ? fieldNames[field] : NULL;
}

int BITCARRREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "repairFlag")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "ackRequiredFlag")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefixSize")==0) return base+3;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+4;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+5;
    if (fieldName[0]=='d' && strcmp(fieldName, "destSeqNum")==0) return base+6;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorAddr")==0) return base+7;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorSeqNum")==0) return base+8;
    if (fieldName[0]=='l' && strcmp(fieldName, "lifeTime")==0) return base+9;
    if (fieldName[0]=='t' && strcmp(fieldName, "twr")==0) return base+10;
    if (fieldName[0]=='e' && strcmp(fieldName, "expirationtime")==0) return base+11;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BITCARRREPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "bool",
        "bool",
        "unsigned int",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "IPv4Address",
        "unsigned int",
        "simtime_t",
        "double",
        "double",
    };
    return (field>=0 && field<12) ? fieldTypeStrings[field] : NULL;
}

const char *BITCARRREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int BITCARRREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRREP *pp = (BITCARRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BITCARRREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRREP *pp = (BITCARRREP *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: return bool2string(pp->getRepairFlag());
        case 2: return bool2string(pp->getAckRequiredFlag());
        case 3: return ulong2string(pp->getPrefixSize());
        case 4: return ulong2string(pp->getHopCount());
        case 5: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 6: return ulong2string(pp->getDestSeqNum());
        case 7: {std::stringstream out; out << pp->getOriginatorAddr(); return out.str();}
        case 8: return ulong2string(pp->getOriginatorSeqNum());
        case 9: return double2string(pp->getLifeTime());
        case 10: return double2string(pp->getTwr());
        case 11: return double2string(pp->getExpirationtime());
        default: return "";
    }
}

bool BITCARRREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRREP *pp = (BITCARRREP *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 1: pp->setRepairFlag(string2bool(value)); return true;
        case 2: pp->setAckRequiredFlag(string2bool(value)); return true;
        case 3: pp->setPrefixSize(string2ulong(value)); return true;
        case 4: pp->setHopCount(string2ulong(value)); return true;
        case 6: pp->setDestSeqNum(string2ulong(value)); return true;
        case 8: pp->setOriginatorSeqNum(string2ulong(value)); return true;
        case 9: pp->setLifeTime(string2double(value)); return true;
        case 10: pp->setTwr(string2double(value)); return true;
        case 11: pp->setExpirationtime(string2double(value)); return true;
        default: return false;
    }
}

const char *BITCARRREPDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return opp_typename(typeid(IPv4Address));
        case 7: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *BITCARRREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRREP *pp = (BITCARRREP *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getDestAddr()); break;
        case 7: return (void *)(&pp->getOriginatorAddr()); break;
        default: return NULL;
    }
}

Register_Class(BITCARRERR);

BITCARRERR::BITCARRERR(const char *name) : ::BITCARControlPacket(name)
{
    this->packetType_var = RERR;
    unreachableBITCARNodes_arraysize = 0;
    this->unreachableBITCARNodes_var = 0;
    this->noDeleteFlag_var = 0;
    this->destCount_var = 0;
}

BITCARRERR::BITCARRERR(const BITCARRERR& other) : ::BITCARControlPacket(other)
{
    unreachableBITCARNodes_arraysize = 0;
    this->unreachableBITCARNodes_var = 0;
    copy(other);
}

BITCARRERR::~BITCARRERR()
{
    delete [] unreachableBITCARNodes_var;
}

BITCARRERR& BITCARRERR::operator=(const BITCARRERR& other)
{
    if (this==&other) return *this;
    ::BITCARControlPacket::operator=(other);
    copy(other);
    return *this;
}

void BITCARRERR::copy(const BITCARRERR& other)
{
    this->packetType_var = other.packetType_var;
    delete [] this->unreachableBITCARNodes_var;
    this->unreachableBITCARNodes_var = (other.unreachableBITCARNodes_arraysize==0) ? NULL : new UnreachableBITCARNode[other.unreachableBITCARNodes_arraysize];
    unreachableBITCARNodes_arraysize = other.unreachableBITCARNodes_arraysize;
    for (unsigned int i=0; i<unreachableBITCARNodes_arraysize; i++)
        this->unreachableBITCARNodes_var[i] = other.unreachableBITCARNodes_var[i];
    this->noDeleteFlag_var = other.noDeleteFlag_var;
    this->destCount_var = other.destCount_var;
}

void BITCARRERR::parsimPack(cCommBuffer *b)
{
    ::BITCARControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    b->pack(unreachableBITCARNodes_arraysize);
    doPacking(b,this->unreachableBITCARNodes_var,unreachableBITCARNodes_arraysize);
    doPacking(b,this->noDeleteFlag_var);
    doPacking(b,this->destCount_var);
}

void BITCARRERR::parsimUnpack(cCommBuffer *b)
{
    ::BITCARControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    delete [] this->unreachableBITCARNodes_var;
    b->unpack(unreachableBITCARNodes_arraysize);
    if (unreachableBITCARNodes_arraysize==0) {
        this->unreachableBITCARNodes_var = 0;
    } else {
        this->unreachableBITCARNodes_var = new UnreachableBITCARNode[unreachableBITCARNodes_arraysize];
        doUnpacking(b,this->unreachableBITCARNodes_var,unreachableBITCARNodes_arraysize);
    }
    doUnpacking(b,this->noDeleteFlag_var);
    doUnpacking(b,this->destCount_var);
}

unsigned int BITCARRERR::getPacketType() const
{
    return packetType_var;
}

void BITCARRERR::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

void BITCARRERR::setUnreachableBITCARNodesArraySize(unsigned int size)
{
    UnreachableBITCARNode *unreachableBITCARNodes_var2 = (size==0) ? NULL : new UnreachableBITCARNode[size];
    unsigned int sz = unreachableBITCARNodes_arraysize < size ? unreachableBITCARNodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        unreachableBITCARNodes_var2[i] = this->unreachableBITCARNodes_var[i];
    unreachableBITCARNodes_arraysize = size;
    delete [] this->unreachableBITCARNodes_var;
    this->unreachableBITCARNodes_var = unreachableBITCARNodes_var2;
}

unsigned int BITCARRERR::getUnreachableBITCARNodesArraySize() const
{
    return unreachableBITCARNodes_arraysize;
}

UnreachableBITCARNode& BITCARRERR::getUnreachableBITCARNodes(unsigned int k)
{
    if (k>=unreachableBITCARNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableBITCARNodes_arraysize, k);
    return unreachableBITCARNodes_var[k];
}

void BITCARRERR::setUnreachableBITCARNodes(unsigned int k, const UnreachableBITCARNode& unreachableBITCARNodes)
{
    if (k>=unreachableBITCARNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableBITCARNodes_arraysize, k);
    this->unreachableBITCARNodes_var[k] = unreachableBITCARNodes;
}

bool BITCARRERR::getNoDeleteFlag() const
{
    return noDeleteFlag_var;
}

void BITCARRERR::setNoDeleteFlag(bool noDeleteFlag)
{
    this->noDeleteFlag_var = noDeleteFlag;
}

unsigned int BITCARRERR::getDestCount() const
{
    return destCount_var;
}

void BITCARRERR::setDestCount(unsigned int destCount)
{
    this->destCount_var = destCount;
}

class BITCARRERRDescriptor : public cClassDescriptor
{
  public:
    BITCARRERRDescriptor();
    virtual ~BITCARRERRDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(BITCARRERRDescriptor);

BITCARRERRDescriptor::BITCARRERRDescriptor() : cClassDescriptor("BITCARRERR", "BITCARControlPacket")
{
}

BITCARRERRDescriptor::~BITCARRERRDescriptor()
{
}

bool BITCARRERRDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BITCARRERR *>(obj)!=NULL;
}

const char *BITCARRERRDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BITCARRERRDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int BITCARRERRDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *BITCARRERRDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "unreachableBITCARNodes",
        "noDeleteFlag",
        "destCount",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int BITCARRERRDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='u' && strcmp(fieldName, "unreachableBITCARNodes")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "noDeleteFlag")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destCount")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BITCARRERRDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "UnreachableBITCARNode",
        "bool",
        "unsigned int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *BITCARRERRDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int BITCARRERRDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRERR *pp = (BITCARRERR *)object; (void)pp;
    switch (field) {
        case 1: return pp->getUnreachableBITCARNodesArraySize();
        default: return 0;
    }
}

std::string BITCARRERRDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRERR *pp = (BITCARRERR *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: {std::stringstream out; out << pp->getUnreachableBITCARNodes(i); return out.str();}
        case 2: return bool2string(pp->getNoDeleteFlag());
        case 3: return ulong2string(pp->getDestCount());
        default: return "";
    }
}

bool BITCARRERRDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRERR *pp = (BITCARRERR *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 2: pp->setNoDeleteFlag(string2bool(value)); return true;
        case 3: pp->setDestCount(string2ulong(value)); return true;
        default: return false;
    }
}

const char *BITCARRERRDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(UnreachableBITCARNode));
        default: return NULL;
    };
}

void *BITCARRERRDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRERR *pp = (BITCARRERR *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getUnreachableBITCARNodes(i)); break;
        default: return NULL;
    }
}

Register_Class(BITCARRREPACK);

BITCARRREPACK::BITCARRREPACK(const char *name) : ::BITCARControlPacket(name)
{
    this->packetType_var = RREPACK;
}

BITCARRREPACK::BITCARRREPACK(const BITCARRREPACK& other) : ::BITCARControlPacket(other)
{
    copy(other);
}

BITCARRREPACK::~BITCARRREPACK()
{
}

BITCARRREPACK& BITCARRREPACK::operator=(const BITCARRREPACK& other)
{
    if (this==&other) return *this;
    ::BITCARControlPacket::operator=(other);
    copy(other);
    return *this;
}

void BITCARRREPACK::copy(const BITCARRREPACK& other)
{
    this->packetType_var = other.packetType_var;
}

void BITCARRREPACK::parsimPack(cCommBuffer *b)
{
    ::BITCARControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
}

void BITCARRREPACK::parsimUnpack(cCommBuffer *b)
{
    ::BITCARControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
}

unsigned int BITCARRREPACK::getPacketType() const
{
    return packetType_var;
}

void BITCARRREPACK::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

class BITCARRREPACKDescriptor : public cClassDescriptor
{
  public:
    BITCARRREPACKDescriptor();
    virtual ~BITCARRREPACKDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(BITCARRREPACKDescriptor);

BITCARRREPACKDescriptor::BITCARRREPACKDescriptor() : cClassDescriptor("BITCARRREPACK", "BITCARControlPacket")
{
}

BITCARRREPACKDescriptor::~BITCARRREPACKDescriptor()
{
}

bool BITCARRREPACKDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BITCARRREPACK *>(obj)!=NULL;
}

const char *BITCARRREPACKDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BITCARRREPACKDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int BITCARRREPACKDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *BITCARRREPACKDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int BITCARRREPACKDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BITCARRREPACKDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *BITCARRREPACKDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int BITCARRREPACKDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRREPACK *pp = (BITCARRREPACK *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BITCARRREPACKDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRREPACK *pp = (BITCARRREPACK *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool BITCARRREPACKDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRREPACK *pp = (BITCARRREPACK *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *BITCARRREPACKDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    };
}

void *BITCARRREPACKDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BITCARRREPACK *pp = (BITCARRREPACK *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(WaitForBITCARRREP);

WaitForBITCARRREP::WaitForBITCARRREP(const char *name, int kind) : ::cMessage(name,kind)
{
    this->lastTTL_var = 0;
    this->fromInvalidEntry_var = 0;
}

WaitForBITCARRREP::WaitForBITCARRREP(const WaitForBITCARRREP& other) : ::cMessage(other)
{
    copy(other);
}

WaitForBITCARRREP::~WaitForBITCARRREP()
{
}

WaitForBITCARRREP& WaitForBITCARRREP::operator=(const WaitForBITCARRREP& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void WaitForBITCARRREP::copy(const WaitForBITCARRREP& other)
{
    this->destAddr_var = other.destAddr_var;
    this->lastTTL_var = other.lastTTL_var;
    this->fromInvalidEntry_var = other.fromInvalidEntry_var;
}

void WaitForBITCARRREP::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->lastTTL_var);
    doPacking(b,this->fromInvalidEntry_var);
}

void WaitForBITCARRREP::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->lastTTL_var);
    doUnpacking(b,this->fromInvalidEntry_var);
}

IPv4Address& WaitForBITCARRREP::getDestAddr()
{
    return destAddr_var;
}

void WaitForBITCARRREP::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int WaitForBITCARRREP::getLastTTL() const
{
    return lastTTL_var;
}

void WaitForBITCARRREP::setLastTTL(unsigned int lastTTL)
{
    this->lastTTL_var = lastTTL;
}

bool WaitForBITCARRREP::getFromInvalidEntry() const
{
    return fromInvalidEntry_var;
}

void WaitForBITCARRREP::setFromInvalidEntry(bool fromInvalidEntry)
{
    this->fromInvalidEntry_var = fromInvalidEntry;
}

class WaitForBITCARRREPDescriptor : public cClassDescriptor
{
  public:
    WaitForBITCARRREPDescriptor();
    virtual ~WaitForBITCARRREPDescriptor();

    virtual bool doesSupport(cObject *obj) const;
    virtual const char *getProperty(const char *propertyname) const;
    virtual int getFieldCount(void *object) const;
    virtual const char *getFieldName(void *object, int field) const;
    virtual int findField(void *object, const char *fieldName) const;
    virtual unsigned int getFieldTypeFlags(void *object, int field) const;
    virtual const char *getFieldTypeString(void *object, int field) const;
    virtual const char *getFieldProperty(void *object, int field, const char *propertyname) const;
    virtual int getArraySize(void *object, int field) const;

    virtual std::string getFieldAsString(void *object, int field, int i) const;
    virtual bool setFieldAsString(void *object, int field, int i, const char *value) const;

    virtual const char *getFieldStructName(void *object, int field) const;
    virtual void *getFieldStructPointer(void *object, int field, int i) const;
};

Register_ClassDescriptor(WaitForBITCARRREPDescriptor);

WaitForBITCARRREPDescriptor::WaitForBITCARRREPDescriptor() : cClassDescriptor("WaitForBITCARRREP", "cMessage")
{
}

WaitForBITCARRREPDescriptor::~WaitForBITCARRREPDescriptor()
{
}

bool WaitForBITCARRREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<WaitForBITCARRREP *>(obj)!=NULL;
}

const char *WaitForBITCARRREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int WaitForBITCARRREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int WaitForBITCARRREPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *WaitForBITCARRREPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destAddr",
        "lastTTL",
        "fromInvalidEntry",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int WaitForBITCARRREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastTTL")==0) return base+1;
    if (fieldName[0]=='f' && strcmp(fieldName, "fromInvalidEntry")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *WaitForBITCARRREPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "unsigned int",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *WaitForBITCARRREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        default: return NULL;
    }
}

int WaitForBITCARRREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    WaitForBITCARRREP *pp = (WaitForBITCARRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string WaitForBITCARRREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    WaitForBITCARRREP *pp = (WaitForBITCARRREP *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 1: return ulong2string(pp->getLastTTL());
        case 2: return bool2string(pp->getFromInvalidEntry());
        default: return "";
    }
}

bool WaitForBITCARRREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    WaitForBITCARRREP *pp = (WaitForBITCARRREP *)object; (void)pp;
    switch (field) {
        case 1: pp->setLastTTL(string2ulong(value)); return true;
        case 2: pp->setFromInvalidEntry(string2bool(value)); return true;
        default: return false;
    }
}

const char *WaitForBITCARRREPDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *WaitForBITCARRREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    WaitForBITCARRREP *pp = (WaitForBITCARRREP *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestAddr()); break;
        default: return NULL;
    }
}


