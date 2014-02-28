//
// Generated file, do not edit! Created by opp_msgc 4.4 from messages/ApplPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ApplPkt_m.h"

USING_NAMESPACE

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(ApplPkt);

ApplPkt::ApplPkt(const char *name, int kind) : cPacket(name,kind)
{
    this->destAddr_var = LAddress::L3BROADCAST;
    this->srcAddr_var = LAddress::L3BROADCAST;
}

ApplPkt::ApplPkt(const ApplPkt& other) : cPacket(other)
{
    copy(other);
}

ApplPkt::~ApplPkt()
{
}

ApplPkt& ApplPkt::operator=(const ApplPkt& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void ApplPkt::copy(const ApplPkt& other)
{
    this->destAddr_var = other.destAddr_var;
    this->srcAddr_var = other.srcAddr_var;
}

void ApplPkt::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->srcAddr_var);
}

void ApplPkt::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->srcAddr_var);
}

LAddress::L3Type& ApplPkt::getDestAddr()
{
    return destAddr_var;
}

void ApplPkt::setDestAddr(const LAddress::L3Type& destAddr)
{
    this->destAddr_var = destAddr;
}

LAddress::L3Type& ApplPkt::getSrcAddr()
{
    return srcAddr_var;
}

void ApplPkt::setSrcAddr(const LAddress::L3Type& srcAddr)
{
    this->srcAddr_var = srcAddr;
}

class ApplPktDescriptor : public cClassDescriptor
{
  public:
    ApplPktDescriptor();
    virtual ~ApplPktDescriptor();

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

Register_ClassDescriptor(ApplPktDescriptor);

ApplPktDescriptor::ApplPktDescriptor() : cClassDescriptor("ApplPkt", "cPacket")
{
}

ApplPktDescriptor::~ApplPktDescriptor()
{
}

bool ApplPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ApplPkt *>(obj)!=NULL;
}

const char *ApplPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ApplPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ApplPktDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *ApplPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destAddr",
        "srcAddr",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ApplPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddr")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ApplPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "LAddress::L3Type",
        "LAddress::L3Type",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *ApplPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ApplPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ApplPkt *pp = (ApplPkt *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ApplPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ApplPkt *pp = (ApplPkt *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSrcAddr(); return out.str();}
        default: return "";
    }
}

bool ApplPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ApplPkt *pp = (ApplPkt *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ApplPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "LAddress::L3Type",
        "LAddress::L3Type",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *ApplPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ApplPkt *pp = (ApplPkt *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestAddr()); break;
        case 1: return (void *)(&pp->getSrcAddr()); break;
        default: return NULL;
    }
}


