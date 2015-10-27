//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "AODVVANETControlPackets_m.h"

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

UnreachableAODVNode::UnreachableAODVNode()
{
    seqNum = 0;
}

void doPacking(cCommBuffer *b, UnreachableAODVNode& a)
{
    doPacking(b,a.addr);
    doPacking(b,a.seqNum);
}

void doUnpacking(cCommBuffer *b, UnreachableAODVNode& a)
{
    doUnpacking(b,a.addr);
    doUnpacking(b,a.seqNum);
}

class UnreachableAODVNodeDescriptor : public cClassDescriptor
{
  public:
    UnreachableAODVNodeDescriptor();
    virtual ~UnreachableAODVNodeDescriptor();

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

Register_ClassDescriptor(UnreachableAODVNodeDescriptor);

UnreachableAODVNodeDescriptor::UnreachableAODVNodeDescriptor() : cClassDescriptor("UnreachableAODVNode", "")
{
}

UnreachableAODVNodeDescriptor::~UnreachableAODVNodeDescriptor()
{
}

bool UnreachableAODVNodeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UnreachableAODVNode *>(obj)!=NULL;
}

const char *UnreachableAODVNodeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UnreachableAODVNodeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int UnreachableAODVNodeDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UnreachableAODVNodeDescriptor::getFieldName(void *object, int field) const
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

int UnreachableAODVNodeDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addr")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNum")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UnreachableAODVNodeDescriptor::getFieldTypeString(void *object, int field) const
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

const char *UnreachableAODVNodeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UnreachableAODVNodeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableAODVNode *pp = (UnreachableAODVNode *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UnreachableAODVNodeDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableAODVNode *pp = (UnreachableAODVNode *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->addr; return out.str();}
        case 1: return ulong2string(pp->seqNum);
        default: return "";
    }
}

bool UnreachableAODVNodeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableAODVNode *pp = (UnreachableAODVNode *)object; (void)pp;
    switch (field) {
        case 1: pp->seqNum = string2ulong(value); return true;
        default: return false;
    }
}

const char *UnreachableAODVNodeDescriptor::getFieldStructName(void *object, int field) const
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

void *UnreachableAODVNodeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UnreachableAODVNode *pp = (UnreachableAODVNode *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->addr); break;
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("AODVVANETControlPacketType");
    if (!e) enums.getInstance()->add(e = new cEnum("AODVVANETControlPacketType"));
    e->insert(AODVVANETRoutingRREQ, "AODVVANETRoutingRREQ");
    e->insert(RREP, "RREP");
    e->insert(RERR, "RERR");
    e->insert(RREPACK, "RREPACK");
);

Register_Class(AODVVANETControlPacket);

AODVVANETControlPacket::AODVVANETControlPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->packetType_var = 0;
}

AODVVANETControlPacket::AODVVANETControlPacket(const AODVVANETControlPacket& other) : ::cPacket(other)
{
    copy(other);
}

AODVVANETControlPacket::~AODVVANETControlPacket()
{
}

AODVVANETControlPacket& AODVVANETControlPacket::operator=(const AODVVANETControlPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVVANETControlPacket::copy(const AODVVANETControlPacket& other)
{
    this->packetType_var = other.packetType_var;
}

void AODVVANETControlPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
}

void AODVVANETControlPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
}

unsigned int AODVVANETControlPacket::getPacketType() const
{
    return packetType_var;
}

void AODVVANETControlPacket::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

class AODVVANETControlPacketDescriptor : public cClassDescriptor
{
  public:
    AODVVANETControlPacketDescriptor();
    virtual ~AODVVANETControlPacketDescriptor();

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

Register_ClassDescriptor(AODVVANETControlPacketDescriptor);

AODVVANETControlPacketDescriptor::AODVVANETControlPacketDescriptor() : cClassDescriptor("AODVVANETControlPacket", "cPacket")
{
}

AODVVANETControlPacketDescriptor::~AODVVANETControlPacketDescriptor()
{
}

bool AODVVANETControlPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVVANETControlPacket *>(obj)!=NULL;
}

const char *AODVVANETControlPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVVANETControlPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int AODVVANETControlPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *AODVVANETControlPacketDescriptor::getFieldName(void *object, int field) const
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

int AODVVANETControlPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVVANETControlPacketDescriptor::getFieldTypeString(void *object, int field) const
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

const char *AODVVANETControlPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AODVVANETControlPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETControlPacket *pp = (AODVVANETControlPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVVANETControlPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETControlPacket *pp = (AODVVANETControlPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool AODVVANETControlPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETControlPacket *pp = (AODVVANETControlPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVVANETControlPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *AODVVANETControlPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETControlPacket *pp = (AODVVANETControlPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(AODVVANETAODVVANETRoutingRREQ);

AODVVANETAODVVANETRoutingRREQ::AODVVANETAODVVANETRoutingRREQ(const char *name) : ::AODVVANETControlPacket(name)
{
    this->packetType_var = AODVVANETRoutingRREQ;
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
    this->expirationTime_var = 0;
}

AODVVANETAODVVANETRoutingRREQ::AODVVANETAODVVANETRoutingRREQ(const AODVVANETAODVVANETRoutingRREQ& other) : ::AODVVANETControlPacket(other)
{
    copy(other);
}

AODVVANETAODVVANETRoutingRREQ::~AODVVANETAODVVANETRoutingRREQ()
{
}

AODVVANETAODVVANETRoutingRREQ& AODVVANETAODVVANETRoutingRREQ::operator=(const AODVVANETAODVVANETRoutingRREQ& other)
{
    if (this==&other) return *this;
    ::AODVVANETControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVVANETAODVVANETRoutingRREQ::copy(const AODVVANETAODVVANETRoutingRREQ& other)
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
    this->expirationTime_var = other.expirationTime_var;
}

void AODVVANETAODVVANETRoutingRREQ::parsimPack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimPack(b);
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
    doPacking(b,this->expirationTime_var);
}

void AODVVANETAODVVANETRoutingRREQ::parsimUnpack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimUnpack(b);
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
    doUnpacking(b,this->expirationTime_var);
}

unsigned int AODVVANETAODVVANETRoutingRREQ::getPacketType() const
{
    return packetType_var;
}

void AODVVANETAODVVANETRoutingRREQ::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

bool AODVVANETAODVVANETRoutingRREQ::getJoinFlag() const
{
    return joinFlag_var;
}

void AODVVANETAODVVANETRoutingRREQ::setJoinFlag(bool joinFlag)
{
    this->joinFlag_var = joinFlag;
}

bool AODVVANETAODVVANETRoutingRREQ::getRepairFlag() const
{
    return repairFlag_var;
}

void AODVVANETAODVVANETRoutingRREQ::setRepairFlag(bool repairFlag)
{
    this->repairFlag_var = repairFlag;
}

bool AODVVANETAODVVANETRoutingRREQ::getGratuitousRREPFlag() const
{
    return gratuitousRREPFlag_var;
}

void AODVVANETAODVVANETRoutingRREQ::setGratuitousRREPFlag(bool gratuitousRREPFlag)
{
    this->gratuitousRREPFlag_var = gratuitousRREPFlag;
}

bool AODVVANETAODVVANETRoutingRREQ::getDestOnlyFlag() const
{
    return destOnlyFlag_var;
}

void AODVVANETAODVVANETRoutingRREQ::setDestOnlyFlag(bool destOnlyFlag)
{
    this->destOnlyFlag_var = destOnlyFlag;
}

bool AODVVANETAODVVANETRoutingRREQ::getUnknownSeqNumFlag() const
{
    return unknownSeqNumFlag_var;
}

void AODVVANETAODVVANETRoutingRREQ::setUnknownSeqNumFlag(bool unknownSeqNumFlag)
{
    this->unknownSeqNumFlag_var = unknownSeqNumFlag;
}

unsigned int AODVVANETAODVVANETRoutingRREQ::getHopCount() const
{
    return hopCount_var;
}

void AODVVANETAODVVANETRoutingRREQ::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

unsigned int AODVVANETAODVVANETRoutingRREQ::getRreqId() const
{
    return rreqId_var;
}

void AODVVANETAODVVANETRoutingRREQ::setRreqId(unsigned int rreqId)
{
    this->rreqId_var = rreqId;
}

IPv4Address& AODVVANETAODVVANETRoutingRREQ::getDestAddr()
{
    return destAddr_var;
}

void AODVVANETAODVVANETRoutingRREQ::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int AODVVANETAODVVANETRoutingRREQ::getDestSeqNum() const
{
    return destSeqNum_var;
}

void AODVVANETAODVVANETRoutingRREQ::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum_var = destSeqNum;
}

IPv4Address& AODVVANETAODVVANETRoutingRREQ::getOriginatorAddr()
{
    return originatorAddr_var;
}

void AODVVANETAODVVANETRoutingRREQ::setOriginatorAddr(const IPv4Address& originatorAddr)
{
    this->originatorAddr_var = originatorAddr;
}

unsigned int AODVVANETAODVVANETRoutingRREQ::getOriginatorSeqNum() const
{
    return originatorSeqNum_var;
}

void AODVVANETAODVVANETRoutingRREQ::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum_var = originatorSeqNum;
}

Coord& AODVVANETAODVVANETRoutingRREQ::getPosition()
{
    return position_var;
}

void AODVVANETAODVVANETRoutingRREQ::setPosition(const Coord& position)
{
    this->position_var = position;
}

Coord& AODVVANETAODVVANETRoutingRREQ::getSpeed()
{
    return speed_var;
}

void AODVVANETAODVVANETRoutingRREQ::setSpeed(const Coord& speed)
{
    this->speed_var = speed;
}

Coord& AODVVANETAODVVANETRoutingRREQ::getAcceleration()
{
    return acceleration_var;
}

void AODVVANETAODVVANETRoutingRREQ::setAcceleration(const Coord& acceleration)
{
    this->acceleration_var = acceleration;
}

Coord& AODVVANETAODVVANETRoutingRREQ::getDirection()
{
    return direction_var;
}

void AODVVANETAODVVANETRoutingRREQ::setDirection(const Coord& direction)
{
    this->direction_var = direction;
}

double AODVVANETAODVVANETRoutingRREQ::getTwr() const
{
    return twr_var;
}

void AODVVANETAODVVANETRoutingRREQ::setTwr(double twr)
{
    this->twr_var = twr;
}

double AODVVANETAODVVANETRoutingRREQ::getExpirationTime() const
{
    return expirationTime_var;
}

void AODVVANETAODVVANETRoutingRREQ::setExpirationTime(double expirationTime)
{
    this->expirationTime_var = expirationTime;
}

class AODVVANETAODVVANETRoutingRREQDescriptor : public cClassDescriptor
{
  public:
    AODVVANETAODVVANETRoutingRREQDescriptor();
    virtual ~AODVVANETAODVVANETRoutingRREQDescriptor();

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

Register_ClassDescriptor(AODVVANETAODVVANETRoutingRREQDescriptor);

AODVVANETAODVVANETRoutingRREQDescriptor::AODVVANETAODVVANETRoutingRREQDescriptor() : cClassDescriptor("AODVVANETAODVVANETRoutingRREQ", "AODVVANETControlPacket")
{
}

AODVVANETAODVVANETRoutingRREQDescriptor::~AODVVANETAODVVANETRoutingRREQDescriptor()
{
}

bool AODVVANETAODVVANETRoutingRREQDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVVANETAODVVANETRoutingRREQ *>(obj)!=NULL;
}

const char *AODVVANETAODVVANETRoutingRREQDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVVANETAODVVANETRoutingRREQDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 18+basedesc->getFieldCount(object) : 18;
}

unsigned int AODVVANETAODVVANETRoutingRREQDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *AODVVANETAODVVANETRoutingRREQDescriptor::getFieldName(void *object, int field) const
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
        "expirationTime",
    };
    return (field>=0 && field<18) ? fieldNames[field] : NULL;
}

int AODVVANETAODVVANETRoutingRREQDescriptor::findField(void *object, const char *fieldName) const
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
    if (fieldName[0]=='e' && strcmp(fieldName, "expirationTime")==0) return base+17;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVVANETAODVVANETRoutingRREQDescriptor::getFieldTypeString(void *object, int field) const
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

const char *AODVVANETAODVVANETRoutingRREQDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AODVVANETAODVVANETRoutingRREQDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETAODVVANETRoutingRREQ *pp = (AODVVANETAODVVANETRoutingRREQ *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVVANETAODVVANETRoutingRREQDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETAODVVANETRoutingRREQ *pp = (AODVVANETAODVVANETRoutingRREQ *)object; (void)pp;
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
        case 17: return double2string(pp->getExpirationTime());
        default: return "";
    }
}

bool AODVVANETAODVVANETRoutingRREQDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETAODVVANETRoutingRREQ *pp = (AODVVANETAODVVANETRoutingRREQ *)object; (void)pp;
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
        case 17: pp->setExpirationTime(string2double(value)); return true;
        default: return false;
    }
}

const char *AODVVANETAODVVANETRoutingRREQDescriptor::getFieldStructName(void *object, int field) const
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

void *AODVVANETAODVVANETRoutingRREQDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETAODVVANETRoutingRREQ *pp = (AODVVANETAODVVANETRoutingRREQ *)object; (void)pp;
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

Register_Class(AODVVANETRoutingRREP);

AODVVANETRoutingRREP::AODVVANETRoutingRREP(const char *name) : ::AODVVANETControlPacket(name)
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
    this->expirationTime_var = 0;
}

AODVVANETRoutingRREP::AODVVANETRoutingRREP(const AODVVANETRoutingRREP& other) : ::AODVVANETControlPacket(other)
{
    copy(other);
}

AODVVANETRoutingRREP::~AODVVANETRoutingRREP()
{
}

AODVVANETRoutingRREP& AODVVANETRoutingRREP::operator=(const AODVVANETRoutingRREP& other)
{
    if (this==&other) return *this;
    ::AODVVANETControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVVANETRoutingRREP::copy(const AODVVANETRoutingRREP& other)
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
    this->expirationTime_var = other.expirationTime_var;
}

void AODVVANETRoutingRREP::parsimPack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimPack(b);
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
    doPacking(b,this->expirationTime_var);
}

void AODVVANETRoutingRREP::parsimUnpack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimUnpack(b);
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
    doUnpacking(b,this->expirationTime_var);
}

unsigned int AODVVANETRoutingRREP::getPacketType() const
{
    return packetType_var;
}

void AODVVANETRoutingRREP::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

bool AODVVANETRoutingRREP::getRepairFlag() const
{
    return repairFlag_var;
}

void AODVVANETRoutingRREP::setRepairFlag(bool repairFlag)
{
    this->repairFlag_var = repairFlag;
}

bool AODVVANETRoutingRREP::getAckRequiredFlag() const
{
    return ackRequiredFlag_var;
}

void AODVVANETRoutingRREP::setAckRequiredFlag(bool ackRequiredFlag)
{
    this->ackRequiredFlag_var = ackRequiredFlag;
}

unsigned int AODVVANETRoutingRREP::getPrefixSize() const
{
    return prefixSize_var;
}

void AODVVANETRoutingRREP::setPrefixSize(unsigned int prefixSize)
{
    this->prefixSize_var = prefixSize;
}

unsigned int AODVVANETRoutingRREP::getHopCount() const
{
    return hopCount_var;
}

void AODVVANETRoutingRREP::setHopCount(unsigned int hopCount)
{
    this->hopCount_var = hopCount;
}

IPv4Address& AODVVANETRoutingRREP::getDestAddr()
{
    return destAddr_var;
}

void AODVVANETRoutingRREP::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int AODVVANETRoutingRREP::getDestSeqNum() const
{
    return destSeqNum_var;
}

void AODVVANETRoutingRREP::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum_var = destSeqNum;
}

IPv4Address& AODVVANETRoutingRREP::getOriginatorAddr()
{
    return originatorAddr_var;
}

void AODVVANETRoutingRREP::setOriginatorAddr(const IPv4Address& originatorAddr)
{
    this->originatorAddr_var = originatorAddr;
}

unsigned int AODVVANETRoutingRREP::getOriginatorSeqNum() const
{
    return originatorSeqNum_var;
}

void AODVVANETRoutingRREP::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum_var = originatorSeqNum;
}

simtime_t AODVVANETRoutingRREP::getLifeTime() const
{
    return lifeTime_var;
}

void AODVVANETRoutingRREP::setLifeTime(simtime_t lifeTime)
{
    this->lifeTime_var = lifeTime;
}

double AODVVANETRoutingRREP::getTwr() const
{
    return twr_var;
}

void AODVVANETRoutingRREP::setTwr(double twr)
{
    this->twr_var = twr;
}

double AODVVANETRoutingRREP::getExpirationTime() const
{
    return expirationTime_var;
}

void AODVVANETRoutingRREP::setExpirationTime(double expirationTime)
{
    this->expirationTime_var = expirationTime;
}

class AODVVANETRoutingRREPDescriptor : public cClassDescriptor
{
  public:
    AODVVANETRoutingRREPDescriptor();
    virtual ~AODVVANETRoutingRREPDescriptor();

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

Register_ClassDescriptor(AODVVANETRoutingRREPDescriptor);

AODVVANETRoutingRREPDescriptor::AODVVANETRoutingRREPDescriptor() : cClassDescriptor("AODVVANETRoutingRREP", "AODVVANETControlPacket")
{
}

AODVVANETRoutingRREPDescriptor::~AODVVANETRoutingRREPDescriptor()
{
}

bool AODVVANETRoutingRREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVVANETRoutingRREP *>(obj)!=NULL;
}

const char *AODVVANETRoutingRREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVVANETRoutingRREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 12+basedesc->getFieldCount(object) : 12;
}

unsigned int AODVVANETRoutingRREPDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *AODVVANETRoutingRREPDescriptor::getFieldName(void *object, int field) const
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
        "expirationTime",
    };
    return (field>=0 && field<12) ? fieldNames[field] : NULL;
}

int AODVVANETRoutingRREPDescriptor::findField(void *object, const char *fieldName) const
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
    if (fieldName[0]=='e' && strcmp(fieldName, "expirationTime")==0) return base+11;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVVANETRoutingRREPDescriptor::getFieldTypeString(void *object, int field) const
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

const char *AODVVANETRoutingRREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AODVVANETRoutingRREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRREP *pp = (AODVVANETRoutingRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVVANETRoutingRREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRREP *pp = (AODVVANETRoutingRREP *)object; (void)pp;
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
        case 11: return double2string(pp->getExpirationTime());
        default: return "";
    }
}

bool AODVVANETRoutingRREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRREP *pp = (AODVVANETRoutingRREP *)object; (void)pp;
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
        case 11: pp->setExpirationTime(string2double(value)); return true;
        default: return false;
    }
}

const char *AODVVANETRoutingRREPDescriptor::getFieldStructName(void *object, int field) const
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

void *AODVVANETRoutingRREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRREP *pp = (AODVVANETRoutingRREP *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getDestAddr()); break;
        case 7: return (void *)(&pp->getOriginatorAddr()); break;
        default: return NULL;
    }
}

Register_Class(AODVVANETRoutingRERR);

AODVVANETRoutingRERR::AODVVANETRoutingRERR(const char *name) : ::AODVVANETControlPacket(name)
{
    this->packetType_var = RERR;
    unreachableAODVNodes_arraysize = 0;
    this->unreachableAODVNodes_var = 0;
    this->noDeleteFlag_var = 0;
    this->destCount_var = 0;
}

AODVVANETRoutingRERR::AODVVANETRoutingRERR(const AODVVANETRoutingRERR& other) : ::AODVVANETControlPacket(other)
{
    unreachableAODVNodes_arraysize = 0;
    this->unreachableAODVNodes_var = 0;
    copy(other);
}

AODVVANETRoutingRERR::~AODVVANETRoutingRERR()
{
    delete [] unreachableAODVNodes_var;
}

AODVVANETRoutingRERR& AODVVANETRoutingRERR::operator=(const AODVVANETRoutingRERR& other)
{
    if (this==&other) return *this;
    ::AODVVANETControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVVANETRoutingRERR::copy(const AODVVANETRoutingRERR& other)
{
    this->packetType_var = other.packetType_var;
    delete [] this->unreachableAODVNodes_var;
    this->unreachableAODVNodes_var = (other.unreachableAODVNodes_arraysize==0) ? NULL : new UnreachableAODVNode[other.unreachableAODVNodes_arraysize];
    unreachableAODVNodes_arraysize = other.unreachableAODVNodes_arraysize;
    for (unsigned int i=0; i<unreachableAODVNodes_arraysize; i++)
        this->unreachableAODVNodes_var[i] = other.unreachableAODVNodes_var[i];
    this->noDeleteFlag_var = other.noDeleteFlag_var;
    this->destCount_var = other.destCount_var;
}

void AODVVANETRoutingRERR::parsimPack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    b->pack(unreachableAODVNodes_arraysize);
    doPacking(b,this->unreachableAODVNodes_var,unreachableAODVNodes_arraysize);
    doPacking(b,this->noDeleteFlag_var);
    doPacking(b,this->destCount_var);
}

void AODVVANETRoutingRERR::parsimUnpack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    delete [] this->unreachableAODVNodes_var;
    b->unpack(unreachableAODVNodes_arraysize);
    if (unreachableAODVNodes_arraysize==0) {
        this->unreachableAODVNodes_var = 0;
    } else {
        this->unreachableAODVNodes_var = new UnreachableAODVNode[unreachableAODVNodes_arraysize];
        doUnpacking(b,this->unreachableAODVNodes_var,unreachableAODVNodes_arraysize);
    }
    doUnpacking(b,this->noDeleteFlag_var);
    doUnpacking(b,this->destCount_var);
}

unsigned int AODVVANETRoutingRERR::getPacketType() const
{
    return packetType_var;
}

void AODVVANETRoutingRERR::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

void AODVVANETRoutingRERR::setUnreachableAODVNodesArraySize(unsigned int size)
{
    UnreachableAODVNode *unreachableAODVNodes_var2 = (size==0) ? NULL : new UnreachableAODVNode[size];
    unsigned int sz = unreachableAODVNodes_arraysize < size ? unreachableAODVNodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        unreachableAODVNodes_var2[i] = this->unreachableAODVNodes_var[i];
    unreachableAODVNodes_arraysize = size;
    delete [] this->unreachableAODVNodes_var;
    this->unreachableAODVNodes_var = unreachableAODVNodes_var2;
}

unsigned int AODVVANETRoutingRERR::getUnreachableAODVNodesArraySize() const
{
    return unreachableAODVNodes_arraysize;
}

UnreachableAODVNode& AODVVANETRoutingRERR::getUnreachableAODVNodes(unsigned int k)
{
    if (k>=unreachableAODVNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableAODVNodes_arraysize, k);
    return unreachableAODVNodes_var[k];
}

void AODVVANETRoutingRERR::setUnreachableAODVNodes(unsigned int k, const UnreachableAODVNode& unreachableAODVNodes)
{
    if (k>=unreachableAODVNodes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableAODVNodes_arraysize, k);
    this->unreachableAODVNodes_var[k] = unreachableAODVNodes;
}

bool AODVVANETRoutingRERR::getNoDeleteFlag() const
{
    return noDeleteFlag_var;
}

void AODVVANETRoutingRERR::setNoDeleteFlag(bool noDeleteFlag)
{
    this->noDeleteFlag_var = noDeleteFlag;
}

unsigned int AODVVANETRoutingRERR::getDestCount() const
{
    return destCount_var;
}

void AODVVANETRoutingRERR::setDestCount(unsigned int destCount)
{
    this->destCount_var = destCount;
}

class AODVVANETRoutingRERRDescriptor : public cClassDescriptor
{
  public:
    AODVVANETRoutingRERRDescriptor();
    virtual ~AODVVANETRoutingRERRDescriptor();

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

Register_ClassDescriptor(AODVVANETRoutingRERRDescriptor);

AODVVANETRoutingRERRDescriptor::AODVVANETRoutingRERRDescriptor() : cClassDescriptor("AODVVANETRoutingRERR", "AODVVANETControlPacket")
{
}

AODVVANETRoutingRERRDescriptor::~AODVVANETRoutingRERRDescriptor()
{
}

bool AODVVANETRoutingRERRDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVVANETRoutingRERR *>(obj)!=NULL;
}

const char *AODVVANETRoutingRERRDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVVANETRoutingRERRDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int AODVVANETRoutingRERRDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *AODVVANETRoutingRERRDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "unreachableAODVNodes",
        "noDeleteFlag",
        "destCount",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int AODVVANETRoutingRERRDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='u' && strcmp(fieldName, "unreachableAODVNodes")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "noDeleteFlag")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destCount")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVVANETRoutingRERRDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "UnreachableAODVNode",
        "bool",
        "unsigned int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *AODVVANETRoutingRERRDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AODVVANETRoutingRERRDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRERR *pp = (AODVVANETRoutingRERR *)object; (void)pp;
    switch (field) {
        case 1: return pp->getUnreachableAODVNodesArraySize();
        default: return 0;
    }
}

std::string AODVVANETRoutingRERRDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRERR *pp = (AODVVANETRoutingRERR *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        case 1: {std::stringstream out; out << pp->getUnreachableAODVNodes(i); return out.str();}
        case 2: return bool2string(pp->getNoDeleteFlag());
        case 3: return ulong2string(pp->getDestCount());
        default: return "";
    }
}

bool AODVVANETRoutingRERRDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRERR *pp = (AODVVANETRoutingRERR *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        case 2: pp->setNoDeleteFlag(string2bool(value)); return true;
        case 3: pp->setDestCount(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVVANETRoutingRERRDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(UnreachableAODVNode));
        default: return NULL;
    };
}

void *AODVVANETRoutingRERRDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRERR *pp = (AODVVANETRoutingRERR *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getUnreachableAODVNodes(i)); break;
        default: return NULL;
    }
}

Register_Class(AODVVANETRoutingRREPACK);

AODVVANETRoutingRREPACK::AODVVANETRoutingRREPACK(const char *name) : ::AODVVANETControlPacket(name)
{
    this->packetType_var = RREPACK;
}

AODVVANETRoutingRREPACK::AODVVANETRoutingRREPACK(const AODVVANETRoutingRREPACK& other) : ::AODVVANETControlPacket(other)
{
    copy(other);
}

AODVVANETRoutingRREPACK::~AODVVANETRoutingRREPACK()
{
}

AODVVANETRoutingRREPACK& AODVVANETRoutingRREPACK::operator=(const AODVVANETRoutingRREPACK& other)
{
    if (this==&other) return *this;
    ::AODVVANETControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVVANETRoutingRREPACK::copy(const AODVVANETRoutingRREPACK& other)
{
    this->packetType_var = other.packetType_var;
}

void AODVVANETRoutingRREPACK::parsimPack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
}

void AODVVANETRoutingRREPACK::parsimUnpack(cCommBuffer *b)
{
    ::AODVVANETControlPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
}

unsigned int AODVVANETRoutingRREPACK::getPacketType() const
{
    return packetType_var;
}

void AODVVANETRoutingRREPACK::setPacketType(unsigned int packetType)
{
    this->packetType_var = packetType;
}

class AODVVANETRoutingRREPACKDescriptor : public cClassDescriptor
{
  public:
    AODVVANETRoutingRREPACKDescriptor();
    virtual ~AODVVANETRoutingRREPACKDescriptor();

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

Register_ClassDescriptor(AODVVANETRoutingRREPACKDescriptor);

AODVVANETRoutingRREPACKDescriptor::AODVVANETRoutingRREPACKDescriptor() : cClassDescriptor("AODVVANETRoutingRREPACK", "AODVVANETControlPacket")
{
}

AODVVANETRoutingRREPACKDescriptor::~AODVVANETRoutingRREPACKDescriptor()
{
}

bool AODVVANETRoutingRREPACKDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODVVANETRoutingRREPACK *>(obj)!=NULL;
}

const char *AODVVANETRoutingRREPACKDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODVVANETRoutingRREPACKDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int AODVVANETRoutingRREPACKDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *AODVVANETRoutingRREPACKDescriptor::getFieldName(void *object, int field) const
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

int AODVVANETRoutingRREPACKDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODVVANETRoutingRREPACKDescriptor::getFieldTypeString(void *object, int field) const
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

const char *AODVVANETRoutingRREPACKDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AODVVANETRoutingRREPACKDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRREPACK *pp = (AODVVANETRoutingRREPACK *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODVVANETRoutingRREPACKDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRREPACK *pp = (AODVVANETRoutingRREPACK *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool AODVVANETRoutingRREPACKDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRREPACK *pp = (AODVVANETRoutingRREPACK *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVVANETRoutingRREPACKDescriptor::getFieldStructName(void *object, int field) const
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

void *AODVVANETRoutingRREPACKDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODVVANETRoutingRREPACK *pp = (AODVVANETRoutingRREPACK *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(WaitForAODVVANETRoutingRREP);

WaitForAODVVANETRoutingRREP::WaitForAODVVANETRoutingRREP(const char *name, int kind) : ::cMessage(name,kind)
{
    this->lastTTL_var = 0;
    this->fromInvalidEntry_var = 0;
}

WaitForAODVVANETRoutingRREP::WaitForAODVVANETRoutingRREP(const WaitForAODVVANETRoutingRREP& other) : ::cMessage(other)
{
    copy(other);
}

WaitForAODVVANETRoutingRREP::~WaitForAODVVANETRoutingRREP()
{
}

WaitForAODVVANETRoutingRREP& WaitForAODVVANETRoutingRREP::operator=(const WaitForAODVVANETRoutingRREP& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void WaitForAODVVANETRoutingRREP::copy(const WaitForAODVVANETRoutingRREP& other)
{
    this->destAddr_var = other.destAddr_var;
    this->lastTTL_var = other.lastTTL_var;
    this->fromInvalidEntry_var = other.fromInvalidEntry_var;
}

void WaitForAODVVANETRoutingRREP::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->lastTTL_var);
    doPacking(b,this->fromInvalidEntry_var);
}

void WaitForAODVVANETRoutingRREP::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->lastTTL_var);
    doUnpacking(b,this->fromInvalidEntry_var);
}

IPv4Address& WaitForAODVVANETRoutingRREP::getDestAddr()
{
    return destAddr_var;
}

void WaitForAODVVANETRoutingRREP::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

unsigned int WaitForAODVVANETRoutingRREP::getLastTTL() const
{
    return lastTTL_var;
}

void WaitForAODVVANETRoutingRREP::setLastTTL(unsigned int lastTTL)
{
    this->lastTTL_var = lastTTL;
}

bool WaitForAODVVANETRoutingRREP::getFromInvalidEntry() const
{
    return fromInvalidEntry_var;
}

void WaitForAODVVANETRoutingRREP::setFromInvalidEntry(bool fromInvalidEntry)
{
    this->fromInvalidEntry_var = fromInvalidEntry;
}

class WaitForAODVVANETRoutingRREPDescriptor : public cClassDescriptor
{
  public:
    WaitForAODVVANETRoutingRREPDescriptor();
    virtual ~WaitForAODVVANETRoutingRREPDescriptor();

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

Register_ClassDescriptor(WaitForAODVVANETRoutingRREPDescriptor);

WaitForAODVVANETRoutingRREPDescriptor::WaitForAODVVANETRoutingRREPDescriptor() : cClassDescriptor("WaitForAODVVANETRoutingRREP", "cMessage")
{
}

WaitForAODVVANETRoutingRREPDescriptor::~WaitForAODVVANETRoutingRREPDescriptor()
{
}

bool WaitForAODVVANETRoutingRREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<WaitForAODVVANETRoutingRREP *>(obj)!=NULL;
}

const char *WaitForAODVVANETRoutingRREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int WaitForAODVVANETRoutingRREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int WaitForAODVVANETRoutingRREPDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *WaitForAODVVANETRoutingRREPDescriptor::getFieldName(void *object, int field) const
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

int WaitForAODVVANETRoutingRREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastTTL")==0) return base+1;
    if (fieldName[0]=='f' && strcmp(fieldName, "fromInvalidEntry")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *WaitForAODVVANETRoutingRREPDescriptor::getFieldTypeString(void *object, int field) const
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

const char *WaitForAODVVANETRoutingRREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int WaitForAODVVANETRoutingRREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    WaitForAODVVANETRoutingRREP *pp = (WaitForAODVVANETRoutingRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string WaitForAODVVANETRoutingRREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    WaitForAODVVANETRoutingRREP *pp = (WaitForAODVVANETRoutingRREP *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 1: return ulong2string(pp->getLastTTL());
        case 2: return bool2string(pp->getFromInvalidEntry());
        default: return "";
    }
}

bool WaitForAODVVANETRoutingRREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    WaitForAODVVANETRoutingRREP *pp = (WaitForAODVVANETRoutingRREP *)object; (void)pp;
    switch (field) {
        case 1: pp->setLastTTL(string2ulong(value)); return true;
        case 2: pp->setFromInvalidEntry(string2bool(value)); return true;
        default: return false;
    }
}

const char *WaitForAODVVANETRoutingRREPDescriptor::getFieldStructName(void *object, int field) const
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

void *WaitForAODVVANETRoutingRREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    WaitForAODVVANETRoutingRREP *pp = (WaitForAODVVANETRoutingRREP *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestAddr()); break;
        default: return NULL;
    }
}


