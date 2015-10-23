//
// Generated file, do not edit! Created by nedtool 4.6 from linklayer/base/MACFrameBase.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "MACFrameBase_m.h"

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



namespace inet {

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

Register_Class(MACFrameBase);

MACFrameBase::MACFrameBase(const char *name, int kind) : ::cPacket(name,kind)
{
}

MACFrameBase::MACFrameBase(const MACFrameBase& other) : ::cPacket(other)
{
    copy(other);
}

MACFrameBase::~MACFrameBase()
{
}

MACFrameBase& MACFrameBase::operator=(const MACFrameBase& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void MACFrameBase::copy(const MACFrameBase& other)
{
    this->srcAddr_var = other.srcAddr_var;
    this->destAddr_var = other.destAddr_var;
}

void MACFrameBase::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->srcAddr_var);
    doPacking(b,this->destAddr_var);
}

void MACFrameBase::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcAddr_var);
    doUnpacking(b,this->destAddr_var);
}

MACAddress& MACFrameBase::getSrcAddr()
{
    return srcAddr_var;
}

void MACFrameBase::setSrcAddr(const MACAddress& srcAddr)
{
    this->srcAddr_var = srcAddr;
}

MACAddress& MACFrameBase::getDestAddr()
{
    return destAddr_var;
}

void MACFrameBase::setDestAddr(const MACAddress& destAddr)
{
    this->destAddr_var = destAddr;
}

class MACFrameBaseDescriptor : public cClassDescriptor
{
  public:
    MACFrameBaseDescriptor();
    virtual ~MACFrameBaseDescriptor();

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

Register_ClassDescriptor(MACFrameBaseDescriptor);

MACFrameBaseDescriptor::MACFrameBaseDescriptor() : cClassDescriptor("inet::MACFrameBase", "cPacket")
{
}

MACFrameBaseDescriptor::~MACFrameBaseDescriptor()
{
}

bool MACFrameBaseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MACFrameBase *>(obj)!=NULL;
}

const char *MACFrameBaseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MACFrameBaseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int MACFrameBaseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *MACFrameBaseDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcAddr",
        "destAddr",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int MACFrameBaseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddr")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MACFrameBaseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "MACAddress",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *MACFrameBaseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MACFrameBaseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MACFrameBase *pp = (MACFrameBase *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MACFrameBaseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MACFrameBase *pp = (MACFrameBase *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcAddr(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        default: return "";
    }
}

bool MACFrameBaseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MACFrameBase *pp = (MACFrameBase *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *MACFrameBaseDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(MACAddress));
        case 1: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *MACFrameBaseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MACFrameBase *pp = (MACFrameBase *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcAddr()); break;
        case 1: return (void *)(&pp->getDestAddr()); break;
        default: return NULL;
    }
}

} // namespace inet

