//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/ipv4/ICMPMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ICMPMessage_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ICMPType");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ICMPType"));
    e->insert(ICMP_DESTINATION_UNREACHABLE, "ICMP_DESTINATION_UNREACHABLE");
    e->insert(ICMP_SOURCEQUENCH, "ICMP_SOURCEQUENCH");
    e->insert(ICMP_REDIRECT, "ICMP_REDIRECT");
    e->insert(ICMP_ECHO_REQUEST, "ICMP_ECHO_REQUEST");
    e->insert(ICMP_ROUTER_ADVERTISEMENT, "ICMP_ROUTER_ADVERTISEMENT");
    e->insert(ICMP_ROUTER_SOLICITATION, "ICMP_ROUTER_SOLICITATION");
    e->insert(ICMP_TIME_EXCEEDED, "ICMP_TIME_EXCEEDED");
    e->insert(ICMP_PARAMETER_PROBLEM, "ICMP_PARAMETER_PROBLEM");
    e->insert(ICMP_ECHO_REPLY, "ICMP_ECHO_REPLY");
    e->insert(ICMP_TIMESTAMP_REQUEST, "ICMP_TIMESTAMP_REQUEST");
    e->insert(ICMP_TIMESTAMP_REPLY, "ICMP_TIMESTAMP_REPLY");
    e->insert(ICMP_INFORMATION_REQUEST, "ICMP_INFORMATION_REQUEST");
    e->insert(ICMP_INFORMATION_REPLY, "ICMP_INFORMATION_REPLY");
    e->insert(ICMP_MASK_REQUEST, "ICMP_MASK_REQUEST");
    e->insert(ICMP_MASK_REPLY, "ICMP_MASK_REPLY");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ICMPRedirectSubcodes");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ICMPRedirectSubcodes"));
    e->insert(ICMP_REDIRECT_NET, "ICMP_REDIRECT_NET");
    e->insert(ICMP_REDIRECT_HOST, "ICMP_REDIRECT_HOST");
    e->insert(ICMP_REDIRECT_TOSNET, "ICMP_REDIRECT_TOSNET");
    e->insert(ICMP_REDIRECT_TOSHOST, "ICMP_REDIRECT_TOSHOST");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ICMPTimeExceededSubcodes");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ICMPTimeExceededSubcodes"));
    e->insert(ICMP_TIMXCEED_INTRANS, "ICMP_TIMXCEED_INTRANS");
    e->insert(ICMP_TIMXCEED_REASS, "ICMP_TIMXCEED_REASS");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ICMPParameterProblemSubcodes");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ICMPParameterProblemSubcodes"));
    e->insert(ICMP_PARAMPROB_ERRATPTR, "ICMP_PARAMPROB_ERRATPTR");
    e->insert(ICMP_PARAMPROB_OPTABSENT, "ICMP_PARAMPROB_OPTABSENT");
    e->insert(ICMP_PARAMPROB_LENGTH, "ICMP_PARAMPROB_LENGTH");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ICMPDestinationUnreachableCodes");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ICMPDestinationUnreachableCodes"));
    e->insert(ICMP_DU_NETWORK_UNREACHABLE, "ICMP_DU_NETWORK_UNREACHABLE");
    e->insert(ICMP_DU_HOST_UNREACHABLE, "ICMP_DU_HOST_UNREACHABLE");
    e->insert(ICMP_DU_PROTOCOL_UNREACHABLE, "ICMP_DU_PROTOCOL_UNREACHABLE");
    e->insert(ICMP_DU_PORT_UNREACHABLE, "ICMP_DU_PORT_UNREACHABLE");
    e->insert(ICMP_DU_FRAGMENTATION_NEEDED, "ICMP_DU_FRAGMENTATION_NEEDED");
    e->insert(ICMP_DU_SOURCE_ROUTE_FAILED, "ICMP_DU_SOURCE_ROUTE_FAILED");
    e->insert(ICMP_DU_DESTINATION_NETWORK_UNKNOWN, "ICMP_DU_DESTINATION_NETWORK_UNKNOWN");
    e->insert(ICMP_DU_DESTINATION_HOST_UNKNOWN, "ICMP_DU_DESTINATION_HOST_UNKNOWN");
    e->insert(ICMP_DU_SOURCE_HOST_ISOLATED, "ICMP_DU_SOURCE_HOST_ISOLATED");
    e->insert(ICMP_DU_NETWORK_PROHIBITED, "ICMP_DU_NETWORK_PROHIBITED");
    e->insert(ICMP_DU_HOST_PROHIBITED, "ICMP_DU_HOST_PROHIBITED");
    e->insert(ICMP_DU_NETWORK_UNREACHABLE_FOR_TYPE_OF_SERVICE, "ICMP_DU_NETWORK_UNREACHABLE_FOR_TYPE_OF_SERVICE");
    e->insert(ICMP_DU_HOST_UNREACHABLE_FOR_TYPE_OF_SERVICE, "ICMP_DU_HOST_UNREACHABLE_FOR_TYPE_OF_SERVICE");
    e->insert(ICMP_DU_COMMUNICATION_PROHIBITED, "ICMP_DU_COMMUNICATION_PROHIBITED");
    e->insert(ICMP_DU_HOST_PRECEDENCE_VIOLATION, "ICMP_DU_HOST_PRECEDENCE_VIOLATION");
    e->insert(ICMP_DU_PRECEDENCE_CUTOFF_IN_EFFECT, "ICMP_DU_PRECEDENCE_CUTOFF_IN_EFFECT");
    e->insert(ICMP_AODV_QUEUE_FULL, "ICMP_AODV_QUEUE_FULL");
);

Register_Class(ICMPMessage);

ICMPMessage::ICMPMessage(const char *name, int kind) : ::cPacket(name,kind)
{
    this->type_var = 0;
    this->code_var = 0;
}

ICMPMessage::ICMPMessage(const ICMPMessage& other) : ::cPacket(other)
{
    copy(other);
}

ICMPMessage::~ICMPMessage()
{
}

ICMPMessage& ICMPMessage::operator=(const ICMPMessage& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void ICMPMessage::copy(const ICMPMessage& other)
{
    this->type_var = other.type_var;
    this->code_var = other.code_var;
}

void ICMPMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->code_var);
}

void ICMPMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->code_var);
}

int ICMPMessage::getType() const
{
    return type_var;
}

void ICMPMessage::setType(int type)
{
    this->type_var = type;
}

int ICMPMessage::getCode() const
{
    return code_var;
}

void ICMPMessage::setCode(int code)
{
    this->code_var = code;
}

class ICMPMessageDescriptor : public cClassDescriptor
{
  public:
    ICMPMessageDescriptor();
    virtual ~ICMPMessageDescriptor();

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

Register_ClassDescriptor(ICMPMessageDescriptor);

ICMPMessageDescriptor::ICMPMessageDescriptor() : cClassDescriptor("inet::ICMPMessage", "cPacket")
{
}

ICMPMessageDescriptor::~ICMPMessageDescriptor()
{
}

bool ICMPMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ICMPMessage *>(obj)!=NULL;
}

const char *ICMPMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ICMPMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ICMPMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *ICMPMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "code",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ICMPMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "code")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ICMPMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *ICMPMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::ICMPType";
            return NULL;
        default: return NULL;
    }
}

int ICMPMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ICMPMessage *pp = (ICMPMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ICMPMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPMessage *pp = (ICMPMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: return long2string(pp->getCode());
        default: return "";
    }
}

bool ICMPMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ICMPMessage *pp = (ICMPMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setCode(string2long(value)); return true;
        default: return false;
    }
}

const char *ICMPMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ICMPMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPMessage *pp = (ICMPMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inet

