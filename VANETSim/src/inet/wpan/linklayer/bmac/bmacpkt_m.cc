//
// Generated file, do not edit! Created by nedtool 4.6 from wpan/linklayer/bmac/bmacpkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "bmacpkt_m.h"

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

Register_Class(BmacPkt);

BmacPkt::BmacPkt(const char *name, int kind) : ::cPacket(name,kind)
{
    this->packetType_var = 0;
    this->destAddr_var = 0;
    this->srcAddr_var = 0;
    this->sequenceId_var = 0;
}

BmacPkt::BmacPkt(const BmacPkt& other) : ::cPacket(other)
{
    copy(other);
}

BmacPkt::~BmacPkt()
{
}

BmacPkt& BmacPkt::operator=(const BmacPkt& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void BmacPkt::copy(const BmacPkt& other)
{
    this->packetType_var = other.packetType_var;
    this->destAddr_var = other.destAddr_var;
    this->srcAddr_var = other.srcAddr_var;
    this->sequenceId_var = other.sequenceId_var;
}

void BmacPkt::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->packetType_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->srcAddr_var);
    doPacking(b,this->sequenceId_var);
}

void BmacPkt::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->packetType_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->srcAddr_var);
    doUnpacking(b,this->sequenceId_var);
}

int BmacPkt::getPacketType() const
{
    return packetType_var;
}

void BmacPkt::setPacketType(int packetType)
{
    this->packetType_var = packetType;
}

uint64_t BmacPkt::getDestAddr() const
{
    return destAddr_var;
}

void BmacPkt::setDestAddr(uint64_t destAddr)
{
    this->destAddr_var = destAddr;
}

uint64_t BmacPkt::getSrcAddr() const
{
    return srcAddr_var;
}

void BmacPkt::setSrcAddr(uint64_t srcAddr)
{
    this->srcAddr_var = srcAddr;
}

long BmacPkt::getSequenceId() const
{
    return sequenceId_var;
}

void BmacPkt::setSequenceId(long sequenceId)
{
    this->sequenceId_var = sequenceId;
}

class BmacPktDescriptor : public cClassDescriptor
{
  public:
    BmacPktDescriptor();
    virtual ~BmacPktDescriptor();

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

Register_ClassDescriptor(BmacPktDescriptor);

BmacPktDescriptor::BmacPktDescriptor() : cClassDescriptor("BmacPkt", "cPacket")
{
}

BmacPktDescriptor::~BmacPktDescriptor()
{
}

bool BmacPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BmacPkt *>(obj)!=NULL;
}

const char *BmacPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BmacPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int BmacPktDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *BmacPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "packetType",
        "destAddr",
        "srcAddr",
        "sequenceId",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int BmacPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddr")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequenceId")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BmacPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "uint64_t",
        "uint64_t",
        "long",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *BmacPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BmacPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BmacPkt *pp = (BmacPkt *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BmacPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BmacPkt *pp = (BmacPkt *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPacketType());
        case 1: return uint642string(pp->getDestAddr());
        case 2: return uint642string(pp->getSrcAddr());
        case 3: return long2string(pp->getSequenceId());
        default: return "";
    }
}

bool BmacPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BmacPkt *pp = (BmacPkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2long(value)); return true;
        case 1: pp->setDestAddr(string2uint64(value)); return true;
        case 2: pp->setSrcAddr(string2uint64(value)); return true;
        case 3: pp->setSequenceId(string2long(value)); return true;
        default: return false;
    }
}

const char *BmacPktDescriptor::getFieldStructName(void *object, int field) const
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

void *BmacPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BmacPkt *pp = (BmacPkt *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


