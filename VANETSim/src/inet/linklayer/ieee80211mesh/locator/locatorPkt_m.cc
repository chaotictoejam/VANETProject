//
// Generated file, do not edit! Created by nedtool 4.6 from linklayer/ieee80211mesh/locator/locatorPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "locatorPkt_m.h"

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
    cEnum *e = cEnum::find("LocatorOpcode");
    if (!e) enums.getInstance()->add(e = new cEnum("LocatorOpcode"));
    e->insert(LocatorAssoc, "LocatorAssoc");
    e->insert(LocatorDisAssoc, "LocatorDisAssoc");
    e->insert(LocatorAskAddress, "LocatorAskAddress");
    e->insert(LocatorAckAddress, "LocatorAckAddress");
    e->insert(RequestAddress, "RequestAddress");
    e->insert(ReplyAddress, "ReplyAddress");
);

Register_Class(LocatorPkt);

LocatorPkt::LocatorPkt(const char *name, int kind) : ::cPacket(name,kind)
{
    this->setByteLength(22);

    this->opcode_var = 0;
    this->sequence_var = 0;
}

LocatorPkt::LocatorPkt(const LocatorPkt& other) : ::cPacket(other)
{
    copy(other);
}

LocatorPkt::~LocatorPkt()
{
}

LocatorPkt& LocatorPkt::operator=(const LocatorPkt& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void LocatorPkt::copy(const LocatorPkt& other)
{
    this->opcode_var = other.opcode_var;
    this->origin_var = other.origin_var;
    this->sequence_var = other.sequence_var;
    this->apMACAddress_var = other.apMACAddress_var;
    this->staMACAddress_var = other.staMACAddress_var;
    this->apIPAddress_var = other.apIPAddress_var;
    this->staIPAddress_var = other.staIPAddress_var;
}

void LocatorPkt::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->opcode_var);
    doPacking(b,this->origin_var);
    doPacking(b,this->sequence_var);
    doPacking(b,this->apMACAddress_var);
    doPacking(b,this->staMACAddress_var);
    doPacking(b,this->apIPAddress_var);
    doPacking(b,this->staIPAddress_var);
}

void LocatorPkt::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->opcode_var);
    doUnpacking(b,this->origin_var);
    doUnpacking(b,this->sequence_var);
    doUnpacking(b,this->apMACAddress_var);
    doUnpacking(b,this->staMACAddress_var);
    doUnpacking(b,this->apIPAddress_var);
    doUnpacking(b,this->staIPAddress_var);
}

int LocatorPkt::getOpcode() const
{
    return opcode_var;
}

void LocatorPkt::setOpcode(int opcode)
{
    this->opcode_var = opcode;
}

ManetAddress& LocatorPkt::getOrigin()
{
    return origin_var;
}

void LocatorPkt::setOrigin(const ManetAddress& origin)
{
    this->origin_var = origin;
}

unsigned int LocatorPkt::getSequence() const
{
    return sequence_var;
}

void LocatorPkt::setSequence(unsigned int sequence)
{
    this->sequence_var = sequence;
}

MACAddress& LocatorPkt::getApMACAddress()
{
    return apMACAddress_var;
}

void LocatorPkt::setApMACAddress(const MACAddress& apMACAddress)
{
    this->apMACAddress_var = apMACAddress;
}

MACAddress& LocatorPkt::getStaMACAddress()
{
    return staMACAddress_var;
}

void LocatorPkt::setStaMACAddress(const MACAddress& staMACAddress)
{
    this->staMACAddress_var = staMACAddress;
}

IPv4Address& LocatorPkt::getApIPAddress()
{
    return apIPAddress_var;
}

void LocatorPkt::setApIPAddress(const IPv4Address& apIPAddress)
{
    this->apIPAddress_var = apIPAddress;
}

IPv4Address& LocatorPkt::getStaIPAddress()
{
    return staIPAddress_var;
}

void LocatorPkt::setStaIPAddress(const IPv4Address& staIPAddress)
{
    this->staIPAddress_var = staIPAddress;
}

class LocatorPktDescriptor : public cClassDescriptor
{
  public:
    LocatorPktDescriptor();
    virtual ~LocatorPktDescriptor();

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

Register_ClassDescriptor(LocatorPktDescriptor);

LocatorPktDescriptor::LocatorPktDescriptor() : cClassDescriptor("LocatorPkt", "cPacket")
{
}

LocatorPktDescriptor::~LocatorPktDescriptor()
{
}

bool LocatorPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LocatorPkt *>(obj)!=NULL;
}

const char *LocatorPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LocatorPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int LocatorPktDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *LocatorPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "opcode",
        "origin",
        "sequence",
        "apMACAddress",
        "staMACAddress",
        "apIPAddress",
        "staIPAddress",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int LocatorPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "opcode")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origin")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequence")==0) return base+2;
    if (fieldName[0]=='a' && strcmp(fieldName, "apMACAddress")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "staMACAddress")==0) return base+4;
    if (fieldName[0]=='a' && strcmp(fieldName, "apIPAddress")==0) return base+5;
    if (fieldName[0]=='s' && strcmp(fieldName, "staIPAddress")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LocatorPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "ManetAddress",
        "unsigned int",
        "MACAddress",
        "MACAddress",
        "IPv4Address",
        "IPv4Address",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *LocatorPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "LocatorOpcode";
            return NULL;
        default: return NULL;
    }
}

int LocatorPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LocatorPkt *pp = (LocatorPkt *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LocatorPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LocatorPkt *pp = (LocatorPkt *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getOpcode());
        case 1: {std::stringstream out; out << pp->getOrigin(); return out.str();}
        case 2: return ulong2string(pp->getSequence());
        case 3: {std::stringstream out; out << pp->getApMACAddress(); return out.str();}
        case 4: {std::stringstream out; out << pp->getStaMACAddress(); return out.str();}
        case 5: {std::stringstream out; out << pp->getApIPAddress(); return out.str();}
        case 6: {std::stringstream out; out << pp->getStaIPAddress(); return out.str();}
        default: return "";
    }
}

bool LocatorPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LocatorPkt *pp = (LocatorPkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setOpcode(string2long(value)); return true;
        case 2: pp->setSequence(string2ulong(value)); return true;
        default: return false;
    }
}

const char *LocatorPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(ManetAddress));
        case 3: return opp_typename(typeid(MACAddress));
        case 4: return opp_typename(typeid(MACAddress));
        case 5: return opp_typename(typeid(IPv4Address));
        case 6: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *LocatorPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LocatorPkt *pp = (LocatorPkt *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getOrigin()); break;
        case 3: return (void *)(&pp->getApMACAddress()); break;
        case 4: return (void *)(&pp->getStaMACAddress()); break;
        case 5: return (void *)(&pp->getApIPAddress()); break;
        case 6: return (void *)(&pp->getStaIPAddress()); break;
        default: return NULL;
    }
}


