//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/networklayer/arp/ipv4/ARPPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ARPPacket_m.h"

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



namespace inetveins {

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
    cEnum *e = cEnum::find("inetveins::ARPOpcode");
    if (!e) enums.getInstance()->add(e = new cEnum("inetveins::ARPOpcode"));
    e->insert(ARP_REQUEST, "ARP_REQUEST");
    e->insert(ARP_REPLY, "ARP_REPLY");
    e->insert(ARP_RARP_REQUEST, "ARP_RARP_REQUEST");
    e->insert(ARP_RARP_REPLY, "ARP_RARP_REPLY");
);

Register_Class(ARPPacket);

ARPPacket::ARPPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->opcode_var = 0;
}

ARPPacket::ARPPacket(const ARPPacket& other) : ::cPacket(other)
{
    copy(other);
}

ARPPacket::~ARPPacket()
{
}

ARPPacket& ARPPacket::operator=(const ARPPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void ARPPacket::copy(const ARPPacket& other)
{
    this->opcode_var = other.opcode_var;
    this->srcMACAddress_var = other.srcMACAddress_var;
    this->destMACAddress_var = other.destMACAddress_var;
    this->srcIPAddress_var = other.srcIPAddress_var;
    this->destIPAddress_var = other.destIPAddress_var;
}

void ARPPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->opcode_var);
    doPacking(b,this->srcMACAddress_var);
    doPacking(b,this->destMACAddress_var);
    doPacking(b,this->srcIPAddress_var);
    doPacking(b,this->destIPAddress_var);
}

void ARPPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->opcode_var);
    doUnpacking(b,this->srcMACAddress_var);
    doUnpacking(b,this->destMACAddress_var);
    doUnpacking(b,this->srcIPAddress_var);
    doUnpacking(b,this->destIPAddress_var);
}

int ARPPacket::getOpcode() const
{
    return opcode_var;
}

void ARPPacket::setOpcode(int opcode)
{
    this->opcode_var = opcode;
}

MACAddress& ARPPacket::getSrcMACAddress()
{
    return srcMACAddress_var;
}

void ARPPacket::setSrcMACAddress(const MACAddress& srcMACAddress)
{
    this->srcMACAddress_var = srcMACAddress;
}

MACAddress& ARPPacket::getDestMACAddress()
{
    return destMACAddress_var;
}

void ARPPacket::setDestMACAddress(const MACAddress& destMACAddress)
{
    this->destMACAddress_var = destMACAddress;
}

IPv4Address& ARPPacket::getSrcIPAddress()
{
    return srcIPAddress_var;
}

void ARPPacket::setSrcIPAddress(const IPv4Address& srcIPAddress)
{
    this->srcIPAddress_var = srcIPAddress;
}

IPv4Address& ARPPacket::getDestIPAddress()
{
    return destIPAddress_var;
}

void ARPPacket::setDestIPAddress(const IPv4Address& destIPAddress)
{
    this->destIPAddress_var = destIPAddress;
}

class ARPPacketDescriptor : public cClassDescriptor
{
  public:
    ARPPacketDescriptor();
    virtual ~ARPPacketDescriptor();

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

Register_ClassDescriptor(ARPPacketDescriptor);

ARPPacketDescriptor::ARPPacketDescriptor() : cClassDescriptor("inetveins::ARPPacket", "cPacket")
{
}

ARPPacketDescriptor::~ARPPacketDescriptor()
{
}

bool ARPPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ARPPacket *>(obj)!=NULL;
}

const char *ARPPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ARPPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int ARPPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *ARPPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "opcode",
        "srcMACAddress",
        "destMACAddress",
        "srcIPAddress",
        "destIPAddress",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int ARPPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "opcode")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcMACAddress")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "destMACAddress")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcIPAddress")==0) return base+3;
    if (fieldName[0]=='d' && strcmp(fieldName, "destIPAddress")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ARPPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "MACAddress",
        "MACAddress",
        "IPv4Address",
        "IPv4Address",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *ARPPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inetveins::ARPOpcode";
            return NULL;
        default: return NULL;
    }
}

int ARPPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ARPPacket *pp = (ARPPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ARPPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ARPPacket *pp = (ARPPacket *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getOpcode());
        case 1: {std::stringstream out; out << pp->getSrcMACAddress(); return out.str();}
        case 2: {std::stringstream out; out << pp->getDestMACAddress(); return out.str();}
        case 3: {std::stringstream out; out << pp->getSrcIPAddress(); return out.str();}
        case 4: {std::stringstream out; out << pp->getDestIPAddress(); return out.str();}
        default: return "";
    }
}

bool ARPPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ARPPacket *pp = (ARPPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setOpcode(string2long(value)); return true;
        default: return false;
    }
}

const char *ARPPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(MACAddress));
        case 2: return opp_typename(typeid(MACAddress));
        case 3: return opp_typename(typeid(IPv4Address));
        case 4: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *ARPPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ARPPacket *pp = (ARPPacket *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSrcMACAddress()); break;
        case 2: return (void *)(&pp->getDestMACAddress()); break;
        case 3: return (void *)(&pp->getSrcIPAddress()); break;
        case 4: return (void *)(&pp->getDestIPAddress()); break;
        default: return NULL;
    }
}

} // namespace inetveins

