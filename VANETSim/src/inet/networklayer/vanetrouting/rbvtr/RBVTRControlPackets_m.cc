//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/vanetrouting/rbvtr/RBVTRControlPackets.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RBVTRControlPackets_m.h"

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

UnreachableRBVTRNode::UnreachableRBVTRNode()
{
    seqNum = 0;
}

void doPacking(cCommBuffer *b, UnreachableRBVTRNode& a)
{
    doPacking(b,a.addr);
    doPacking(b,a.seqNum);
}

void doUnpacking(cCommBuffer *b, UnreachableRBVTRNode& a)
{
    doUnpacking(b,a.addr);
    doUnpacking(b,a.seqNum);
}

class UnreachableRBVTRNodeDescriptor : public cClassDescriptor
{
  public:
    UnreachableRBVTRNodeDescriptor();
    virtual ~UnreachableRBVTRNodeDescriptor();

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

Register_ClassDescriptor(UnreachableRBVTRNodeDescriptor);

UnreachableRBVTRNodeDescriptor::UnreachableRBVTRNodeDescriptor() : cClassDescriptor("UnreachableRBVTRNode", "")
{
}

UnreachableRBVTRNodeDescriptor::~UnreachableRBVTRNodeDescriptor()
{
}

bool UnreachableRBVTRNodeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UnreachableRBVTRNode *>(obj)!=NULL;
}

const char *UnreachableRBVTRNodeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UnreachableRBVTRNodeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int UnreachableRBVTRNodeDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UnreachableRBVTRNodeDescriptor::getFieldName(void *object, int field) const
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

int UnreachableRBVTRNodeDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addr")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNum")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UnreachableRBVTRNodeDescriptor::getFieldTypeString(void *object, int field) const
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

const char *UnreachableRBVTRNodeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UnreachableRBVTRNodeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableRBVTRNode *pp = (UnreachableRBVTRNode *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UnreachableRBVTRNodeDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableRBVTRNode *pp = (UnreachableRBVTRNode *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->addr; return out.str();}
        case 1: return ulong2string(pp->seqNum);
        default: return "";
    }
}

bool UnreachableRBVTRNodeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableRBVTRNode *pp = (UnreachableRBVTRNode *)object; (void)pp;
    switch (field) {
        case 1: pp->seqNum = string2ulong(value); return true;
        default: return false;
    }
}

const char *UnreachableRBVTRNodeDescriptor::getFieldStructName(void *object, int field) const
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

void *UnreachableRBVTRNodeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableRBVTRNode *pp = (UnreachableRBVTRNode *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->addr); break;
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("RBVTRControlPacketType");
    if (!e) enums.getInstance()->add(e = new cEnum("RBVTRControlPacketType"));
    e->insert(AODVVANETRREQ, "AODVVANETRREQ");
    e->insert(RREP, "RREP");
    e->insert(RERR, "RERR");
    e->insert(RREPACK, "RREPACK");
);

Register_Class(RBVTRControlPacket);

RBVTRControlPacket::RBVTRControlPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->packetType_var = 0;
}

RBVTRControlPacket::RBVTRControlPacket(const RBVTRControlPacket& other) : ::cPacket(other)
{
    copy(other);
}

RBVTRControlPacket::~RBVTRControlPacket()
{
}

RBVTRControlPacket& RBVTRControlPacket::operator=(const RBVTRControlPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void RBVTRControlPacket::copy(const RBVTRControlPacket& other)
{
    this->packetType_var = other.packetType_var;
}

void RBVTRControlPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
}

void RBVTRControlPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
}

unsigned int RBVTRControlPacket::getPacketType() const
{
    return packetType_var;
}

void RBVTRControlPacket::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

class RBVTRControlPacketDescriptor : public cClassDescriptor
{
  public:
    RBVTRControlPacketDescriptor();
    virtual ~RBVTRControlPacketDescriptor();

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

Register_ClassDescriptor(RBVTRControlPacketDescriptor);

RBVTRControlPacketDescriptor::RBVTRControlPacketDescriptor() : cClassDescriptor("RBVTRControlPacket", "cPacket")
{
}

RBVTRControlPacketDescriptor::~RBVTRControlPacketDescriptor()
{
}

bool RBVTRControlPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RBVTRControlPacket *>(obj)!=NULL;
}

const char *RBVTRControlPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RBVTRControlPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RBVTRControlPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RBVTRControlPacketDescriptor::getFieldName(void *object, int field) const
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

int RBVTRControlPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RBVTRControlPacketDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RBVTRControlPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RBVTRControlPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRControlPacket *pp = (RBVTRControlPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RBVTRControlPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRControlPacket *pp = (RBVTRControlPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool RBVTRControlPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRControlPacket *pp = (RBVTRControlPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *RBVTRControlPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *RBVTRControlPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRControlPacket *pp = (RBVTRControlPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RBVTRAODVVANETRREQ);

RBVTRAODVVANETRREQ::RBVTRAODVVANETRREQ(const char *name) : ::RBVTRControlPacket(name)
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

RBVTRAODVVANETRREQ::RBVTRAODVVANETRREQ(const RBVTRAODVVANETRREQ& other) : ::RBVTRControlPacket(other)
{
    copy(other);
}

RBVTRAODVVANETRREQ::~RBVTRAODVVANETRREQ()
{
}

RBVTRAODVVANETRREQ& RBVTRAODVVANETRREQ::operator=(const RBVTRAODVVANETRREQ& other)
{
    if (this==&other) return *this;
    ::RBVTRControlPacket::operator=(other);
    copy(other);
    return *this;
}

void RBVTRAODVVANETRREQ::copy(const RBVTRAODVVANETRREQ& other)
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

void RBVTRAODVVANETRREQ::parsimPack(cCommBuffer *b)
{
    ::RBVTRControlPacket::parsimPack(b);
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

void RBVTRAODVVANETRREQ::parsimUnpack(cCommBuffer *b)
{
    ::RBVTRControlPacket::parsimUnpack(b);
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

unsigned int RBVTRAODVVANETRREQ::getPacketType() const
{
    return packetType_var;
}

void RBVTRAODVVANETRREQ::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

bool RBVTRAODVVANETRREQ::getJoinFlag() const
{
    return joinFlag_var;
}

void RBVTRAODVVANETRREQ::setJoinFlag(bool joinFlag)
{
    this->joinFlag_var = joinFlag;
}

bool RBVTRAODVVANETRREQ::getRepairFlag() const
{
    return repairFlag_var;
}

void RBVTRAODVVANETRREQ::setRepairFlag(bool repairFlag)
{
    this->repairFlag_var = repairFlag;
}

bool RBVTRAODVVANETRREQ::getGratuitousRREPFlag() const
{
    return gratuitousRREPFlag_var;
}

void RBVTRAODVVANETRREQ::setGratuitousRREPFlag(bool gratuitousRREPFlag)
{
    this->gratuitousRREPFlag_var = gratuitousRREPFlag;
}

bool RBVTRAODVVANETRREQ::getDestOnlyFlag() const
{
    return destOnlyFlag_var;
}

void RBVTRAODVVANETRREQ::setDestOnlyFlag(bool destOnlyFlag)
{
    this->destOnlyFlag_var = destOnlyFlag;
}

bool RBVTRAODVVANETRREQ::getUnknownSeqNumFlag() const
{
    return unknownSeqNumFlag_var;
}

void RBVTRAODVVANETRREQ::setUnknownSeqNumFlag(bool unknownSeqNumFlag)
{
    this->unknownSeqNumFlag_var = unknownSeqNumFlag;
}

unsigned int RBVTRAODVVANETRREQ::getHopCount() const
{
    return hopCount_var;
}

void RBVTRAODVVANETRREQ::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

unsigned int RBVTRAODVVANETRREQ::getRreqId() const
{
    return rreqId_var;
}

void RBVTRAODVVANETRREQ::setRreqId(unsigned int rreqId)
{
    this->rreqId_var = rreqId;
}

IPv4Address& RBVTRAODVVANETRREQ::getDestAddr()
{
    return destAddr_var;
}

void RBVTRAODVVANETRREQ::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int RBVTRAODVVANETRREQ::getDestSeqNum() const
{
    return destSeqNum_var;
}

void RBVTRAODVVANETRREQ::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum_var = destSeqNum;
}

IPv4Address& RBVTRAODVVANETRREQ::getOriginatorAddr()
{
    return originatorAddr_var;
}

void RBVTRAODVVANETRREQ::setOriginatorAddr(const IPv4Address& originatorAddr)
{
    this->originatorAddr_var = originatorAddr;
}

unsigned int RBVTRAODVVANETRREQ::getOriginatorSeqNum() const
{
    return originatorSeqNum_var;
}

void RBVTRAODVVANETRREQ::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum_var = originatorSeqNum;
}

Coord& RBVTRAODVVANETRREQ::getPosition()
{
    return position_var;
}

void RBVTRAODVVANETRREQ::setPosition(const Coord& position)
{
    this->position_var = position;
}

Coord& RBVTRAODVVANETRREQ::getSpeed()
{
    return speed_var;
}

void RBVTRAODVVANETRREQ::setSpeed(const Coord& speed)
{
    this->speed_var = speed;
}

Coord& RBVTRAODVVANETRREQ::getAcceleration()
{
    return acceleration_var;
}

void RBVTRAODVVANETRREQ::setAcceleration(const Coord& acceleration)
{
    this->acceleration_var = acceleration;
}

Coord& RBVTRAODVVANETRREQ::getDirection()
{
    return direction_var;
}

void RBVTRAODVVANETRREQ::setDirection(const Coord& direction)
{
    this->direction_var = direction;
}

double RBVTRAODVVANETRREQ::getTwr() const
{
    return twr_var;
}

void RBVTRAODVVANETRREQ::setTwr(double twr)
{
    this->twr_var = twr;
}

double RBVTRAODVVANETRREQ::getExpirationtime() const
{
    return expirationtime_var;
}

void RBVTRAODVVANETRREQ::setExpirationtime(double expirationtime)
{
    this->expirationtime_var = expirationtime;
}

class RBVTRAODVVANETRREQDescriptor : public cClassDescriptor
{
  public:
    RBVTRAODVVANETRREQDescriptor();
    virtual ~RBVTRAODVVANETRREQDescriptor();

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

Register_ClassDescriptor(RBVTRAODVVANETRREQDescriptor);

RBVTRAODVVANETRREQDescriptor::RBVTRAODVVANETRREQDescriptor() : cClassDescriptor("RBVTRAODVVANETRREQ", "RBVTRControlPacket")
{
}

RBVTRAODVVANETRREQDescriptor::~RBVTRAODVVANETRREQDescriptor()
{
}

bool RBVTRAODVVANETRREQDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RBVTRAODVVANETRREQ *>(obj)!=NULL;
}

const char *RBVTRAODVVANETRREQDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RBVTRAODVVANETRREQDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 18+basedesc->getFieldCount(object) : 18;
}

unsigned int RBVTRAODVVANETRREQDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RBVTRAODVVANETRREQDescriptor::getFieldName(void *object, int field) const
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

int RBVTRAODVVANETRREQDescriptor::findField(void *object, const char *fieldName) const
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

const char *RBVTRAODVVANETRREQDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RBVTRAODVVANETRREQDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RBVTRAODVVANETRREQDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRAODVVANETRREQ *pp = (RBVTRAODVVANETRREQ *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RBVTRAODVVANETRREQDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRAODVVANETRREQ *pp = (RBVTRAODVVANETRREQ *)object; (void)pp;
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

bool RBVTRAODVVANETRREQDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRAODVVANETRREQ *pp = (RBVTRAODVVANETRREQ *)object; (void)pp;
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

const char *RBVTRAODVVANETRREQDescriptor::getFieldStructName(void *object, int field) const
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

void *RBVTRAODVVANETRREQDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRAODVVANETRREQ *pp = (RBVTRAODVVANETRREQ *)object; (void)pp;
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

Register_Class(RBVTRRREP);

RBVTRRREP::RBVTRRREP(const char *name) : ::RBVTRControlPacket(name)
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

RBVTRRREP::RBVTRRREP(const RBVTRRREP& other) : ::RBVTRControlPacket(other)
{
    copy(other);
}

RBVTRRREP::~RBVTRRREP()
{
}

RBVTRRREP& RBVTRRREP::operator=(const RBVTRRREP& other)
{
    if (this==&other) return *this;
    ::RBVTRControlPacket::operator=(other);
    copy(other);
    return *this;
}

void RBVTRRREP::copy(const RBVTRRREP& other)
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

void RBVTRRREP::parsimPack(cCommBuffer *b)
{
    ::RBVTRControlPacket::parsimPack(b);
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

void RBVTRRREP::parsimUnpack(cCommBuffer *b)
{
    ::RBVTRControlPacket::parsimUnpack(b);
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

unsigned int RBVTRRREP::getPacketType() const
{
    return packetType_var;
}

void RBVTRRREP::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

bool RBVTRRREP::getRepairFlag() const
{
    return repairFlag_var;
}

void RBVTRRREP::setRepairFlag(bool repairFlag)
{
    this->repairFlag_var = repairFlag;
}

bool RBVTRRREP::getAckRequiredFlag() const
{
    return ackRequiredFlag_var;
}

void RBVTRRREP::setAckRequiredFlag(bool ackRequiredFlag)
{
    this->ackRequiredFlag_var = ackRequiredFlag;
}

unsigned int RBVTRRREP::getPrefixSize() const
{
    return prefixSize_var;
}

void RBVTRRREP::setPrefixSize(unsigned int prefixSize)
{
    this->prefixSize_var = prefixSize;
}

unsigned int RBVTRRREP::getHopCount() const
{
    return hopCount_var;
}

void RBVTRRREP::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

IPv4Address& RBVTRRREP::getDestAddr()
{
    return destAddr_var;
}

void RBVTRRREP::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int RBVTRRREP::getDestSeqNum() const
{
    return destSeqNum_var;
}

void RBVTRRREP::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum_var = destSeqNum;
}

IPv4Address& RBVTRRREP::getOriginatorAddr()
{
    return originatorAddr_var;
}

void RBVTRRREP::setOriginatorAddr(const IPv4Address& originatorAddr)
{
    this->originatorAddr_var = originatorAddr;
}

unsigned int RBVTRRREP::getOriginatorSeqNum() const
{
    return originatorSeqNum_var;
}

void RBVTRRREP::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum_var = originatorSeqNum;
}

simtime_t RBVTRRREP::getLifeTime() const
{
    return lifeTime_var;
}

void RBVTRRREP::setLifeTime(simtime_t lifeTime)
{
    this->lifeTime_var = lifeTime;
}

double RBVTRRREP::getTwr() const
{
    return twr_var;
}

void RBVTRRREP::setTwr(double twr)
{
    this->twr_var = twr;
}

double RBVTRRREP::getExpirationtime() const
{
    return expirationtime_var;
}

void RBVTRRREP::setExpirationtime(double expirationtime)
{
    this->expirationtime_var = expirationtime;
}

class RBVTRRREPDescriptor : public cClassDescriptor
{
  public:
    RBVTRRREPDescriptor();
    virtual ~RBVTRRREPDescriptor();

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

Register_ClassDescriptor(RBVTRRREPDescriptor);

RBVTRRREPDescriptor::RBVTRRREPDescriptor() : cClassDescriptor("RBVTRRREP", "RBVTRControlPacket")
{
}

RBVTRRREPDescriptor::~RBVTRRREPDescriptor()
{
}

bool RBVTRRREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RBVTRRREP *>(obj)!=NULL;
}

const char *RBVTRRREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RBVTRRREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 12+basedesc->getFieldCount(object) : 12;
}

unsigned int RBVTRRREPDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RBVTRRREPDescriptor::getFieldName(void *object, int field) const
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

int RBVTRRREPDescriptor::findField(void *object, const char *fieldName) const
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

const char *RBVTRRREPDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RBVTRRREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RBVTRRREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRREP *pp = (RBVTRRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RBVTRRREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRREP *pp = (RBVTRRREP *)object; (void)pp;
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

bool RBVTRRREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRREP *pp = (RBVTRRREP *)object; (void)pp;
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

const char *RBVTRRREPDescriptor::getFieldStructName(void *object, int field) const
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

void *RBVTRRREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRREP *pp = (RBVTRRREP *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getDestAddr()); break;
        case 7: return (void *)(&pp->getOriginatorAddr()); break;
        default: return NULL;
    }
}

Register_Class(RBVTRRERR);

RBVTRRERR::RBVTRRERR(const char *name) : ::RBVTRControlPacket(name)
{
    this->packetType_var = RERR;
    unreachableRBVTRNodes_arraysize = 0;
    this->unreachableRBVTRNodes_var = 0;
    this->noDeleteFlag_var = 0;
    this->destCount_var = 0;
}

RBVTRRERR::RBVTRRERR(const RBVTRRERR& other) : ::RBVTRControlPacket(other)
{
    unreachableRBVTRNodes_arraysize = 0;
    this->unreachableRBVTRNodes_var = 0;
    copy(other);
}

RBVTRRERR::~RBVTRRERR()
{
    delete [] unreachableRBVTRNodes_var;
}

RBVTRRERR& RBVTRRERR::operator=(const RBVTRRERR& other)
{
    if (this==&other) return *this;
    ::RBVTRControlPacket::operator=(other);
    copy(other);
    return *this;
}

void RBVTRRERR::copy(const RBVTRRERR& other)
{
    this->packetType_var = other.packetType_var;
    delete [] this->unreachableRBVTRNodes_var;
    this->unreachableRBVTRNodes_var = (other.unreachableRBVTRNodes_arraysize==0) ? NULL : new UnreachableRBVTRNode[other.unreachableRBVTRNodes_arraysize];
    unreachableRBVTRNodes_arraysize = other.unreachableRBVTRNodes_arraysize;
    for (unsigned int i=0; i<unreachableRBVTRNodes_arraysize; i++)
        this->unreachableRBVTRNodes_var[i] = other.unreachableRBVTRNodes_var[i];
    this->noDeleteFlag_var = other.noDeleteFlag_var;
    this->destCount_var = other.destCount_var;
}

void RBVTRRERR::parsimPack(cCommBuffer *b)
{
    ::RBVTRControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    b->pack(unreachableRBVTRNodes_arraysize);
    doPacking(b,this->unreachableRBVTRNodes_var,unreachableRBVTRNodes_arraysize);
    doPacking(b,this->noDeleteFlag_var);
    doPacking(b,this->destCount_var);
}

void RBVTRRERR::parsimUnpack(cCommBuffer *b)
{
    ::RBVTRControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    delete [] this->unreachableRBVTRNodes_var;
    b->unpack(unreachableRBVTRNodes_arraysize);
    if (unreachableRBVTRNodes_arraysize==0) {
        this->unreachableRBVTRNodes_var = 0;
    } else {
        this->unreachableRBVTRNodes_var = new UnreachableRBVTRNode[unreachableRBVTRNodes_arraysize];
        doUnpacking(b,this->unreachableRBVTRNodes_var,unreachableRBVTRNodes_arraysize);
    }
    doUnpacking(b,this->noDeleteFlag_var);
    doUnpacking(b,this->destCount_var);
}

unsigned int RBVTRRERR::getPacketType() const
{
    return packetType_var;
}

void RBVTRRERR::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

void RBVTRRERR::setUnreachableRBVTRNodesArraySize(unsigned int size)
{
    UnreachableRBVTRNode *unreachableRBVTRNodes_var2 = (size==0) ? NULL : new UnreachableRBVTRNode[size];
    unsigned int sz = unreachableRBVTRNodes_arraysize < size ? unreachableRBVTRNodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        unreachableRBVTRNodes_var2[i] = this->unreachableRBVTRNodes_var[i];
    unreachableRBVTRNodes_arraysize = size;
    delete [] this->unreachableRBVTRNodes_var;
    this->unreachableRBVTRNodes_var = unreachableRBVTRNodes_var2;
}

unsigned int RBVTRRERR::getUnreachableRBVTRNodesArraySize() const
{
    return unreachableRBVTRNodes_arraysize;
}

UnreachableRBVTRNode& RBVTRRERR::getUnreachableRBVTRNodes(unsigned int k)
{
    if (k>=unreachableRBVTRNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableRBVTRNodes_arraysize, k);
    return unreachableRBVTRNodes_var[k];
}

void RBVTRRERR::setUnreachableRBVTRNodes(unsigned int k, const UnreachableRBVTRNode& unreachableRBVTRNodes)
{
    if (k>=unreachableRBVTRNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableRBVTRNodes_arraysize, k);
    this->unreachableRBVTRNodes_var[k] = unreachableRBVTRNodes;
}

bool RBVTRRERR::getNoDeleteFlag() const
{
    return noDeleteFlag_var;
}

void RBVTRRERR::setNoDeleteFlag(bool noDeleteFlag)
{
    this->noDeleteFlag_var = noDeleteFlag;
}

unsigned int RBVTRRERR::getDestCount() const
{
    return destCount_var;
}

void RBVTRRERR::setDestCount(unsigned int destCount)
{
    this->destCount_var = destCount;
}

class RBVTRRERRDescriptor : public cClassDescriptor
{
  public:
    RBVTRRERRDescriptor();
    virtual ~RBVTRRERRDescriptor();

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

Register_ClassDescriptor(RBVTRRERRDescriptor);

RBVTRRERRDescriptor::RBVTRRERRDescriptor() : cClassDescriptor("RBVTRRERR", "RBVTRControlPacket")
{
}

RBVTRRERRDescriptor::~RBVTRRERRDescriptor()
{
}

bool RBVTRRERRDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RBVTRRERR *>(obj)!=NULL;
}

const char *RBVTRRERRDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RBVTRRERRDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int RBVTRRERRDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RBVTRRERRDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "unreachableRBVTRNodes",
        "noDeleteFlag",
        "destCount",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int RBVTRRERRDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='u' && strcmp(fieldName, "unreachableRBVTRNodes")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "noDeleteFlag")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destCount")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RBVTRRERRDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "UnreachableRBVTRNode",
        "bool",
        "unsigned int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *RBVTRRERRDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RBVTRRERRDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRERR *pp = (RBVTRRERR *)object; (void)pp;
    switch (field) {
        case 1: return pp->getUnreachableRBVTRNodesArraySize();
        default: return 0;
    }
}

std::string RBVTRRERRDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRERR *pp = (RBVTRRERR *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: {std::stringstream out; out << pp->getUnreachableRBVTRNodes(i); return out.str();}
        case 2: return bool2string(pp->getNoDeleteFlag());
        case 3: return ulong2string(pp->getDestCount());
        default: return "";
    }
}

bool RBVTRRERRDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRERR *pp = (RBVTRRERR *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 2: pp->setNoDeleteFlag(string2bool(value)); return true;
        case 3: pp->setDestCount(string2ulong(value)); return true;
        default: return false;
    }
}

const char *RBVTRRERRDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(UnreachableRBVTRNode));
        default: return NULL;
    };
}

void *RBVTRRERRDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRERR *pp = (RBVTRRERR *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getUnreachableRBVTRNodes(i)); break;
        default: return NULL;
    }
}

Register_Class(RBVTRRREPACK);

RBVTRRREPACK::RBVTRRREPACK(const char *name) : ::RBVTRControlPacket(name)
{
    this->packetType_var = RREPACK;
}

RBVTRRREPACK::RBVTRRREPACK(const RBVTRRREPACK& other) : ::RBVTRControlPacket(other)
{
    copy(other);
}

RBVTRRREPACK::~RBVTRRREPACK()
{
}

RBVTRRREPACK& RBVTRRREPACK::operator=(const RBVTRRREPACK& other)
{
    if (this==&other) return *this;
    ::RBVTRControlPacket::operator=(other);
    copy(other);
    return *this;
}

void RBVTRRREPACK::copy(const RBVTRRREPACK& other)
{
    this->packetType_var = other.packetType_var;
}

void RBVTRRREPACK::parsimPack(cCommBuffer *b)
{
    ::RBVTRControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
}

void RBVTRRREPACK::parsimUnpack(cCommBuffer *b)
{
    ::RBVTRControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
}

unsigned int RBVTRRREPACK::getPacketType() const
{
    return packetType_var;
}

void RBVTRRREPACK::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

class RBVTRRREPACKDescriptor : public cClassDescriptor
{
  public:
    RBVTRRREPACKDescriptor();
    virtual ~RBVTRRREPACKDescriptor();

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

Register_ClassDescriptor(RBVTRRREPACKDescriptor);

RBVTRRREPACKDescriptor::RBVTRRREPACKDescriptor() : cClassDescriptor("RBVTRRREPACK", "RBVTRControlPacket")
{
}

RBVTRRREPACKDescriptor::~RBVTRRREPACKDescriptor()
{
}

bool RBVTRRREPACKDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RBVTRRREPACK *>(obj)!=NULL;
}

const char *RBVTRRREPACKDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RBVTRRREPACKDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RBVTRRREPACKDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RBVTRRREPACKDescriptor::getFieldName(void *object, int field) const
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

int RBVTRRREPACKDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RBVTRRREPACKDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RBVTRRREPACKDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RBVTRRREPACKDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRREPACK *pp = (RBVTRRREPACK *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RBVTRRREPACKDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRREPACK *pp = (RBVTRRREPACK *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool RBVTRRREPACKDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRREPACK *pp = (RBVTRRREPACK *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *RBVTRRREPACKDescriptor::getFieldStructName(void *object, int field) const
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

void *RBVTRRREPACKDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RBVTRRREPACK *pp = (RBVTRRREPACK *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(WaitForRBVTRRREP);

WaitForRBVTRRREP::WaitForRBVTRRREP(const char *name, int kind) : ::cMessage(name,kind)
{
    this->lastTTL_var = 0;
    this->fromInvalidEntry_var = 0;
}

WaitForRBVTRRREP::WaitForRBVTRRREP(const WaitForRBVTRRREP& other) : ::cMessage(other)
{
    copy(other);
}

WaitForRBVTRRREP::~WaitForRBVTRRREP()
{
}

WaitForRBVTRRREP& WaitForRBVTRRREP::operator=(const WaitForRBVTRRREP& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void WaitForRBVTRRREP::copy(const WaitForRBVTRRREP& other)
{
    this->destAddr_var = other.destAddr_var;
    this->lastTTL_var = other.lastTTL_var;
    this->fromInvalidEntry_var = other.fromInvalidEntry_var;
}

void WaitForRBVTRRREP::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->lastTTL_var);
    doPacking(b,this->fromInvalidEntry_var);
}

void WaitForRBVTRRREP::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->lastTTL_var);
    doUnpacking(b,this->fromInvalidEntry_var);
}

IPv4Address& WaitForRBVTRRREP::getDestAddr()
{
    return destAddr_var;
}

void WaitForRBVTRRREP::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int WaitForRBVTRRREP::getLastTTL() const
{
    return lastTTL_var;
}

void WaitForRBVTRRREP::setLastTTL(unsigned int lastTTL)
{
    this->lastTTL_var = lastTTL;
}

bool WaitForRBVTRRREP::getFromInvalidEntry() const
{
    return fromInvalidEntry_var;
}

void WaitForRBVTRRREP::setFromInvalidEntry(bool fromInvalidEntry)
{
    this->fromInvalidEntry_var = fromInvalidEntry;
}

class WaitForRBVTRRREPDescriptor : public cClassDescriptor
{
  public:
    WaitForRBVTRRREPDescriptor();
    virtual ~WaitForRBVTRRREPDescriptor();

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

Register_ClassDescriptor(WaitForRBVTRRREPDescriptor);

WaitForRBVTRRREPDescriptor::WaitForRBVTRRREPDescriptor() : cClassDescriptor("WaitForRBVTRRREP", "cMessage")
{
}

WaitForRBVTRRREPDescriptor::~WaitForRBVTRRREPDescriptor()
{
}

bool WaitForRBVTRRREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<WaitForRBVTRRREP *>(obj)!=NULL;
}

const char *WaitForRBVTRRREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int WaitForRBVTRRREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int WaitForRBVTRRREPDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *WaitForRBVTRRREPDescriptor::getFieldName(void *object, int field) const
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

int WaitForRBVTRRREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastTTL")==0) return base+1;
    if (fieldName[0]=='f' && strcmp(fieldName, "fromInvalidEntry")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *WaitForRBVTRRREPDescriptor::getFieldTypeString(void *object, int field) const
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

const char *WaitForRBVTRRREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int WaitForRBVTRRREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    WaitForRBVTRRREP *pp = (WaitForRBVTRRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string WaitForRBVTRRREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    WaitForRBVTRRREP *pp = (WaitForRBVTRRREP *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 1: return ulong2string(pp->getLastTTL());
        case 2: return bool2string(pp->getFromInvalidEntry());
        default: return "";
    }
}

bool WaitForRBVTRRREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    WaitForRBVTRRREP *pp = (WaitForRBVTRRREP *)object; (void)pp;
    switch (field) {
        case 1: pp->setLastTTL(string2ulong(value)); return true;
        case 2: pp->setFromInvalidEntry(string2bool(value)); return true;
        default: return false;
    }
}

const char *WaitForRBVTRRREPDescriptor::getFieldStructName(void *object, int field) const
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

void *WaitForRBVTRRREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    WaitForRBVTRRREP *pp = (WaitForRBVTRRREP *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestAddr()); break;
        default: return NULL;
    }
}


