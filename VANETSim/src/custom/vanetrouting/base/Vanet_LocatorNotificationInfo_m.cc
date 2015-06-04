//
// Generated file, do not edit! Created by nedtool 4.6 from custom/vanetrouting/base/Vanet_LocatorNotificationInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Vanet_LocatorNotificationInfo_m.h"

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

Register_Class(Vanet_LocatorNotificationInfo);

Vanet_LocatorNotificationInfo::Vanet_LocatorNotificationInfo() : ::cObject()
{
}

Vanet_LocatorNotificationInfo::Vanet_LocatorNotificationInfo(const Vanet_LocatorNotificationInfo& other) : ::cObject(other)
{
    copy(other);
}

Vanet_LocatorNotificationInfo::~Vanet_LocatorNotificationInfo()
{
}

Vanet_LocatorNotificationInfo& Vanet_LocatorNotificationInfo::operator=(const Vanet_LocatorNotificationInfo& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void Vanet_LocatorNotificationInfo::copy(const Vanet_LocatorNotificationInfo& other)
{
    this->macAddr_var = other.macAddr_var;
    this->ipAddr_var = other.ipAddr_var;
}

void Vanet_LocatorNotificationInfo::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->macAddr_var);
    doPacking(b,this->ipAddr_var);
}

void Vanet_LocatorNotificationInfo::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->macAddr_var);
    doUnpacking(b,this->ipAddr_var);
}

MACAddress& Vanet_LocatorNotificationInfo::getMacAddr()
{
    return macAddr_var;
}

void Vanet_LocatorNotificationInfo::setMacAddr(const MACAddress& macAddr)
{
    this->macAddr_var = macAddr;
}

IPv4Address& Vanet_LocatorNotificationInfo::getIpAddr()
{
    return ipAddr_var;
}

void Vanet_LocatorNotificationInfo::setIpAddr(const IPv4Address& ipAddr)
{
    this->ipAddr_var = ipAddr;
}

class Vanet_LocatorNotificationInfoDescriptor : public cClassDescriptor
{
  public:
    Vanet_LocatorNotificationInfoDescriptor();
    virtual ~Vanet_LocatorNotificationInfoDescriptor();

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

Register_ClassDescriptor(Vanet_LocatorNotificationInfoDescriptor);

Vanet_LocatorNotificationInfoDescriptor::Vanet_LocatorNotificationInfoDescriptor() : cClassDescriptor("Vanet_LocatorNotificationInfo", "cObject")
{
}

Vanet_LocatorNotificationInfoDescriptor::~Vanet_LocatorNotificationInfoDescriptor()
{
}

bool Vanet_LocatorNotificationInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Vanet_LocatorNotificationInfo *>(obj)!=NULL;
}

const char *Vanet_LocatorNotificationInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Vanet_LocatorNotificationInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Vanet_LocatorNotificationInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Vanet_LocatorNotificationInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "macAddr",
        "ipAddr",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int Vanet_LocatorNotificationInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "macAddr")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "ipAddr")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Vanet_LocatorNotificationInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "IPv4Address",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *Vanet_LocatorNotificationInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Vanet_LocatorNotificationInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Vanet_LocatorNotificationInfo *pp = (Vanet_LocatorNotificationInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Vanet_LocatorNotificationInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Vanet_LocatorNotificationInfo *pp = (Vanet_LocatorNotificationInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMacAddr(); return out.str();}
        case 1: {std::stringstream out; out << pp->getIpAddr(); return out.str();}
        default: return "";
    }
}

bool Vanet_LocatorNotificationInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Vanet_LocatorNotificationInfo *pp = (Vanet_LocatorNotificationInfo *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Vanet_LocatorNotificationInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(MACAddress));
        case 1: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *Vanet_LocatorNotificationInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Vanet_LocatorNotificationInfo *pp = (Vanet_LocatorNotificationInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMacAddr()); break;
        case 1: return (void *)(&pp->getIpAddr()); break;
        default: return NULL;
    }
}


