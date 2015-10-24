//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/contract/IPProtocolId.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPProtocolId_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("IPProtocolId");
    if (!e) enums.getInstance()->add(e = new cEnum("IPProtocolId"));
    e->insert(IP_PROT_ICMP, "IP_PROT_ICMP");
    e->insert(IP_PROT_IGMP, "IP_PROT_IGMP");
    e->insert(IP_PROT_IP, "IP_PROT_IP");
    e->insert(IP_PROT_TCP, "IP_PROT_TCP");
    e->insert(IP_PROT_EGP, "IP_PROT_EGP");
    e->insert(IP_PROT_IGP, "IP_PROT_IGP");
    e->insert(IP_PROT_UDP, "IP_PROT_UDP");
    e->insert(IP_PROT_XTP, "IP_PROT_XTP");
    e->insert(IP_PROT_IPv6, "IP_PROT_IPv6");
    e->insert(IP_PROT_RSVP, "IP_PROT_RSVP");
    e->insert(IP_PROT_IPv6_ICMP, "IP_PROT_IPv6_ICMP");
    e->insert(IP_PROT_NONE, "IP_PROT_NONE");
    e->insert(IP_PROT_OSPF, "IP_PROT_OSPF");
    e->insert(IP_PROT_PIM, "IP_PROT_PIM");
    e->insert(IP_PROT_SCTP, "IP_PROT_SCTP");
    e->insert(IP_PROT_DSR, "IP_PROT_DSR");
    e->insert(IP_PROT_MANET, "IP_PROT_MANET");
    e->insert(IP_PROT_IPv6EXT_HOP, "IP_PROT_IPv6EXT_HOP");
    e->insert(IP_PROT_IPv6EXT_DEST, "IP_PROT_IPv6EXT_DEST");
    e->insert(IP_PROT_IPv6EXT_ROUTING, "IP_PROT_IPv6EXT_ROUTING");
    e->insert(IP_PROT_IPv6EXT_FRAGMENT, "IP_PROT_IPv6EXT_FRAGMENT");
    e->insert(IP_PROT_IPv6EXT_AUTH, "IP_PROT_IPv6EXT_AUTH");
    e->insert(IP_PROT_IPv6EXT_ESP, "IP_PROT_IPv6EXT_ESP");
    e->insert(IP_PROT_IPv6EXT_MOB, "IP_PROT_IPv6EXT_MOB");
);

Register_Class(IPRegisterProtocolCommand);

IPRegisterProtocolCommand::IPRegisterProtocolCommand() : ::cObject()
{
    this->protocol_var = 0;
}

IPRegisterProtocolCommand::IPRegisterProtocolCommand(const IPRegisterProtocolCommand& other) : ::cObject(other)
{
    copy(other);
}

IPRegisterProtocolCommand::~IPRegisterProtocolCommand()
{
}

IPRegisterProtocolCommand& IPRegisterProtocolCommand::operator=(const IPRegisterProtocolCommand& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void IPRegisterProtocolCommand::copy(const IPRegisterProtocolCommand& other)
{
    this->protocol_var = other.protocol_var;
}

void IPRegisterProtocolCommand::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->protocol_var);
}

void IPRegisterProtocolCommand::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->protocol_var);
}

int IPRegisterProtocolCommand::getProtocol() const
{
    return protocol_var;
}

void IPRegisterProtocolCommand::setProtocol(int protocol)
{
    this->protocol_var = protocol;
}

class IPRegisterProtocolCommandDescriptor : public cClassDescriptor
{
  public:
    IPRegisterProtocolCommandDescriptor();
    virtual ~IPRegisterProtocolCommandDescriptor();

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

Register_ClassDescriptor(IPRegisterProtocolCommandDescriptor);

IPRegisterProtocolCommandDescriptor::IPRegisterProtocolCommandDescriptor() : cClassDescriptor("IPRegisterProtocolCommand", "cObject")
{
}

IPRegisterProtocolCommandDescriptor::~IPRegisterProtocolCommandDescriptor()
{
}

bool IPRegisterProtocolCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPRegisterProtocolCommand *>(obj)!=NULL;
}

const char *IPRegisterProtocolCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPRegisterProtocolCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IPRegisterProtocolCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *IPRegisterProtocolCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "protocol",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IPRegisterProtocolCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "protocol")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPRegisterProtocolCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IPRegisterProtocolCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "IPProtocolId";
            return NULL;
        default: return NULL;
    }
}

int IPRegisterProtocolCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPRegisterProtocolCommand *pp = (IPRegisterProtocolCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPRegisterProtocolCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPRegisterProtocolCommand *pp = (IPRegisterProtocolCommand *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getProtocol());
        default: return "";
    }
}

bool IPRegisterProtocolCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPRegisterProtocolCommand *pp = (IPRegisterProtocolCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setProtocol(string2long(value)); return true;
        default: return false;
    }
}

const char *IPRegisterProtocolCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *IPRegisterProtocolCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPRegisterProtocolCommand *pp = (IPRegisterProtocolCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


