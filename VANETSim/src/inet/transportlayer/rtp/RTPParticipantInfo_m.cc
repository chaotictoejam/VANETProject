//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transportlayer/rtp/RTPParticipantInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTPParticipantInfo_m.h"

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
namespace rtp {

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

RTPParticipantInfo_Base::RTPParticipantInfo_Base(const char *name) : ::cNamedObject(name)
{
    this->address_var = IPv4Address::UNSPECIFIED_ADDRESS;
    this->RTPPort_var = PORT_UNDEF;
    this->RTCPPort_var = PORT_UNDEF;
}

RTPParticipantInfo_Base::RTPParticipantInfo_Base(const RTPParticipantInfo_Base& other) : ::cNamedObject(other)
{
    copy(other);
}

RTPParticipantInfo_Base::~RTPParticipantInfo_Base()
{
}

RTPParticipantInfo_Base& RTPParticipantInfo_Base::operator=(const RTPParticipantInfo_Base& other)
{
    if (this==&other) return *this;
    ::cNamedObject::operator=(other);
    copy(other);
    return *this;
}

void RTPParticipantInfo_Base::copy(const RTPParticipantInfo_Base& other)
{
    this->address_var = other.address_var;
    this->RTPPort_var = other.RTPPort_var;
    this->RTCPPort_var = other.RTCPPort_var;
}

void RTPParticipantInfo_Base::parsimPack(cCommBuffer *b)
{
    ::cNamedObject::parsimPack(b);
    // field ssrc is abstract -- please do packing in customized class
    doPacking(b,this->address_var);
    doPacking(b,this->RTPPort_var);
    doPacking(b,this->RTCPPort_var);
}

void RTPParticipantInfo_Base::parsimUnpack(cCommBuffer *b)
{
    ::cNamedObject::parsimUnpack(b);
    // field ssrc is abstract -- please do unpacking in customized class
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->RTPPort_var);
    doUnpacking(b,this->RTCPPort_var);
}

IPv4Address& RTPParticipantInfo_Base::getAddress()
{
    return address_var;
}

void RTPParticipantInfo_Base::setAddress(const IPv4Address& address)
{
    this->address_var = address;
}

int RTPParticipantInfo_Base::getRTPPort() const
{
    return RTPPort_var;
}

void RTPParticipantInfo_Base::setRTPPort(int RTPPort)
{
    this->RTPPort_var = RTPPort;
}

int RTPParticipantInfo_Base::getRTCPPort() const
{
    return RTCPPort_var;
}

void RTPParticipantInfo_Base::setRTCPPort(int RTCPPort)
{
    this->RTCPPort_var = RTCPPort;
}

class RTPParticipantInfoDescriptor : public cClassDescriptor
{
  public:
    RTPParticipantInfoDescriptor();
    virtual ~RTPParticipantInfoDescriptor();

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

Register_ClassDescriptor(RTPParticipantInfoDescriptor);

RTPParticipantInfoDescriptor::RTPParticipantInfoDescriptor() : cClassDescriptor("inet::rtp::RTPParticipantInfo", "cNamedObject")
{
}

RTPParticipantInfoDescriptor::~RTPParticipantInfoDescriptor()
{
}

bool RTPParticipantInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPParticipantInfo_Base *>(obj)!=NULL;
}

const char *RTPParticipantInfoDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPParticipantInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int RTPParticipantInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *RTPParticipantInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ssrc",
        "address",
        "RTPPort",
        "RTCPPort",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int RTPParticipantInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssrc")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "address")==0) return base+1;
    if (fieldName[0]=='R' && strcmp(fieldName, "RTPPort")==0) return base+2;
    if (fieldName[0]=='R' && strcmp(fieldName, "RTCPPort")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPParticipantInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "IPv4Address",
        "int",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *RTPParticipantInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPParticipantInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPParticipantInfo_Base *pp = (RTPParticipantInfo_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPParticipantInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPParticipantInfo_Base *pp = (RTPParticipantInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSsrc());
        case 1: {std::stringstream out; out << pp->getAddress(); return out.str();}
        case 2: return long2string(pp->getRTPPort());
        case 3: return long2string(pp->getRTCPPort());
        default: return "";
    }
}

bool RTPParticipantInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPParticipantInfo_Base *pp = (RTPParticipantInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSsrc(string2ulong(value)); return true;
        case 2: pp->setRTPPort(string2long(value)); return true;
        case 3: pp->setRTCPPort(string2long(value)); return true;
        default: return false;
    }
}

const char *RTPParticipantInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *RTPParticipantInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPParticipantInfo_Base *pp = (RTPParticipantInfo_Base *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getAddress()); break;
        default: return NULL;
    }
}

} // namespace rtp
} // namespace inet

