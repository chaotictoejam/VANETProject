//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/manetrouting/base/LocatorNotificationInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LocatorNotificationInfo_m.h"

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

Register_Class(LocatorNotificationInfo);

LocatorNotificationInfo::LocatorNotificationInfo() : ::cObject()
{
}

LocatorNotificationInfo::LocatorNotificationInfo(const LocatorNotificationInfo& other) : ::cObject(other)
{
    copy(other);
}

LocatorNotificationInfo::~LocatorNotificationInfo()
{
}

LocatorNotificationInfo& LocatorNotificationInfo::operator=(const LocatorNotificationInfo& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void LocatorNotificationInfo::copy(const LocatorNotificationInfo& other)
{
    this->macAddr_var = other.macAddr_var;
    this->ipAddr_var = other.ipAddr_var;
}

void LocatorNotificationInfo::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->macAddr_var);
    doPacking(b,this->ipAddr_var);
}

void LocatorNotificationInfo::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->macAddr_var);
    doUnpacking(b,this->ipAddr_var);
}

MACAddress& LocatorNotificationInfo::getMacAddr()
{
    return macAddr_var;
}

void LocatorNotificationInfo::setMacAddr(const MACAddress& macAddr)
{
    this->macAddr_var = macAddr;
}

IPv4Address& LocatorNotificationInfo::getIpAddr()
{
    return ipAddr_var;
}

void LocatorNotificationInfo::setIpAddr(const IPv4Address& ipAddr)
{
    this->ipAddr_var = ipAddr;
}

class LocatorNotificationInfoDescriptor : public cClassDescriptor
{
  public:
    LocatorNotificationInfoDescriptor();
    virtual ~LocatorNotificationInfoDescriptor();

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

Register_ClassDescriptor(LocatorNotificationInfoDescriptor);

LocatorNotificationInfoDescriptor::LocatorNotificationInfoDescriptor() : cClassDescriptor("LocatorNotificationInfo", "cObject")
{
}

LocatorNotificationInfoDescriptor::~LocatorNotificationInfoDescriptor()
{
}

bool LocatorNotificationInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LocatorNotificationInfo *>(obj)!=NULL;
}

const char *LocatorNotificationInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LocatorNotificationInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int LocatorNotificationInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *LocatorNotificationInfoDescriptor::getFieldName(void *object, int field) const
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

int LocatorNotificationInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "macAddr")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "ipAddr")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LocatorNotificationInfoDescriptor::getFieldTypeString(void *object, int field) const
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

const char *LocatorNotificationInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LocatorNotificationInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LocatorNotificationInfo *pp = (LocatorNotificationInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LocatorNotificationInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LocatorNotificationInfo *pp = (LocatorNotificationInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMacAddr(); return out.str();}
        case 1: {std::stringstream out; out << pp->getIpAddr(); return out.str();}
        default: return "";
    }
}

bool LocatorNotificationInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LocatorNotificationInfo *pp = (LocatorNotificationInfo *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *LocatorNotificationInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *LocatorNotificationInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LocatorNotificationInfo *pp = (LocatorNotificationInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMacAddr()); break;
        case 1: return (void *)(&pp->getIpAddr()); break;
        default: return NULL;
    }
}


