//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/icmpv6/ICMPv6Message.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ICMPv6Message_m.h"

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
    cEnum *e = cEnum::find("inet::ICMPv6Type");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ICMPv6Type"));
    e->insert(ICMPv6_UNSPECIFIED, "ICMPv6_UNSPECIFIED");
    e->insert(ICMPv6_DESTINATION_UNREACHABLE, "ICMPv6_DESTINATION_UNREACHABLE");
    e->insert(ICMPv6_PACKET_TOO_BIG, "ICMPv6_PACKET_TOO_BIG");
    e->insert(ICMPv6_TIME_EXCEEDED, "ICMPv6_TIME_EXCEEDED");
    e->insert(ICMPv6_PARAMETER_PROBLEM, "ICMPv6_PARAMETER_PROBLEM");
    e->insert(ICMPv6_ECHO_REQUEST, "ICMPv6_ECHO_REQUEST");
    e->insert(ICMPv6_ECHO_REPLY, "ICMPv6_ECHO_REPLY");
    e->insert(ICMPv6_MLD_QUERY, "ICMPv6_MLD_QUERY");
    e->insert(ICMPv6_MLD_REPORT, "ICMPv6_MLD_REPORT");
    e->insert(ICMPv6_MLD_DONE, "ICMPv6_MLD_DONE");
    e->insert(ICMPv6_ROUTER_SOL, "ICMPv6_ROUTER_SOL");
    e->insert(ICMPv6_ROUTER_AD, "ICMPv6_ROUTER_AD");
    e->insert(ICMPv6_NEIGHBOUR_SOL, "ICMPv6_NEIGHBOUR_SOL");
    e->insert(ICMPv6_NEIGHBOUR_AD, "ICMPv6_NEIGHBOUR_AD");
    e->insert(ICMPv6_REDIRECT, "ICMPv6_REDIRECT");
    e->insert(ICMPv6_MLDv2_REPORT, "ICMPv6_MLDv2_REPORT");
    e->insert(ICMPv6_EXPERIMENTAL_MOBILITY, "ICMPv6_EXPERIMENTAL_MOBILITY");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ICMPv6DEST_UN");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ICMPv6DEST_UN"));
    e->insert(NO_ROUTE_TO_DEST, "NO_ROUTE_TO_DEST");
    e->insert(COMM_WITH_DEST_PROHIBITED, "COMM_WITH_DEST_PROHIBITED");
    e->insert(ADDRESS_UNREACHABLE, "ADDRESS_UNREACHABLE");
    e->insert(PORT_UNREACHABLE, "PORT_UNREACHABLE");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ICMPv6_TIME_EX");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ICMPv6_TIME_EX"));
    e->insert(ND_HOP_LIMIT_EXCEEDED, "ND_HOP_LIMIT_EXCEEDED");
    e->insert(ND_FRAGMENT_REASSEMBLY_TIME, "ND_FRAGMENT_REASSEMBLY_TIME");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ICMPv6_PARAMETER_PROB");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ICMPv6_PARAMETER_PROB"));
    e->insert(ERROREOUS_HDR_FIELD, "ERROREOUS_HDR_FIELD");
    e->insert(UNRECOGNIZED_NEXT_HDR_TYPE, "UNRECOGNIZED_NEXT_HDR_TYPE");
    e->insert(UNRECOGNIZED_IPV6_OPTION, "UNRECOGNIZED_IPV6_OPTION");
);

Register_Class(ICMPv6Message);

ICMPv6Message::ICMPv6Message(const char *name, int kind) : ::cPacket(name,kind)
{
    this->type_var = 0;
}

ICMPv6Message::ICMPv6Message(const ICMPv6Message& other) : ::cPacket(other)
{
    copy(other);
}

ICMPv6Message::~ICMPv6Message()
{
}

ICMPv6Message& ICMPv6Message::operator=(const ICMPv6Message& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void ICMPv6Message::copy(const ICMPv6Message& other)
{
    this->type_var = other.type_var;
}

void ICMPv6Message::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->type_var);
}

void ICMPv6Message::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
}

int ICMPv6Message::getType() const
{
    return type_var;
}

void ICMPv6Message::setType(int type)
{
    this->type_var = type;
}

class ICMPv6MessageDescriptor : public cClassDescriptor
{
  public:
    ICMPv6MessageDescriptor();
    virtual ~ICMPv6MessageDescriptor();

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

Register_ClassDescriptor(ICMPv6MessageDescriptor);

ICMPv6MessageDescriptor::ICMPv6MessageDescriptor() : cClassDescriptor("inet::ICMPv6Message", "cPacket")
{
}

ICMPv6MessageDescriptor::~ICMPv6MessageDescriptor()
{
}

bool ICMPv6MessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ICMPv6Message *>(obj)!=NULL;
}

const char *ICMPv6MessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ICMPv6MessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ICMPv6MessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ICMPv6MessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int ICMPv6MessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ICMPv6MessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *ICMPv6MessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::ICMPv6Type";
            return NULL;
        default: return NULL;
    }
}

int ICMPv6MessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6Message *pp = (ICMPv6Message *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ICMPv6MessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6Message *pp = (ICMPv6Message *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        default: return "";
    }
}

bool ICMPv6MessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6Message *pp = (ICMPv6Message *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *ICMPv6MessageDescriptor::getFieldStructName(void *object, int field) const
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

void *ICMPv6MessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6Message *pp = (ICMPv6Message *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ICMPv6DestUnreachableMsg);

ICMPv6DestUnreachableMsg::ICMPv6DestUnreachableMsg(const char *name, int kind) : ::inet::ICMPv6Message(name,kind)
{
    this->code_var = 0;
}

ICMPv6DestUnreachableMsg::ICMPv6DestUnreachableMsg(const ICMPv6DestUnreachableMsg& other) : ::inet::ICMPv6Message(other)
{
    copy(other);
}

ICMPv6DestUnreachableMsg::~ICMPv6DestUnreachableMsg()
{
}

ICMPv6DestUnreachableMsg& ICMPv6DestUnreachableMsg::operator=(const ICMPv6DestUnreachableMsg& other)
{
    if (this==&other) return *this;
    ::inet::ICMPv6Message::operator=(other);
    copy(other);
    return *this;
}

void ICMPv6DestUnreachableMsg::copy(const ICMPv6DestUnreachableMsg& other)
{
    this->code_var = other.code_var;
}

void ICMPv6DestUnreachableMsg::parsimPack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimPack(b);
    doPacking(b,this->code_var);
}

void ICMPv6DestUnreachableMsg::parsimUnpack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimUnpack(b);
    doUnpacking(b,this->code_var);
}

int ICMPv6DestUnreachableMsg::getCode() const
{
    return code_var;
}

void ICMPv6DestUnreachableMsg::setCode(int code)
{
    this->code_var = code;
}

class ICMPv6DestUnreachableMsgDescriptor : public cClassDescriptor
{
  public:
    ICMPv6DestUnreachableMsgDescriptor();
    virtual ~ICMPv6DestUnreachableMsgDescriptor();

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

Register_ClassDescriptor(ICMPv6DestUnreachableMsgDescriptor);

ICMPv6DestUnreachableMsgDescriptor::ICMPv6DestUnreachableMsgDescriptor() : cClassDescriptor("inet::ICMPv6DestUnreachableMsg", "inet::ICMPv6Message")
{
}

ICMPv6DestUnreachableMsgDescriptor::~ICMPv6DestUnreachableMsgDescriptor()
{
}

bool ICMPv6DestUnreachableMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ICMPv6DestUnreachableMsg *>(obj)!=NULL;
}

const char *ICMPv6DestUnreachableMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ICMPv6DestUnreachableMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ICMPv6DestUnreachableMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ICMPv6DestUnreachableMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "code",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int ICMPv6DestUnreachableMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "code")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ICMPv6DestUnreachableMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *ICMPv6DestUnreachableMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::ICMPv6DEST_UN";
            return NULL;
        default: return NULL;
    }
}

int ICMPv6DestUnreachableMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6DestUnreachableMsg *pp = (ICMPv6DestUnreachableMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ICMPv6DestUnreachableMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6DestUnreachableMsg *pp = (ICMPv6DestUnreachableMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCode());
        default: return "";
    }
}

bool ICMPv6DestUnreachableMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6DestUnreachableMsg *pp = (ICMPv6DestUnreachableMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setCode(string2long(value)); return true;
        default: return false;
    }
}

const char *ICMPv6DestUnreachableMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *ICMPv6DestUnreachableMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6DestUnreachableMsg *pp = (ICMPv6DestUnreachableMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ICMPv6PacketTooBigMsg);

ICMPv6PacketTooBigMsg::ICMPv6PacketTooBigMsg(const char *name, int kind) : ::inet::ICMPv6Message(name,kind)
{
    this->code_var = 0;
    this->MTU_var = 0;
}

ICMPv6PacketTooBigMsg::ICMPv6PacketTooBigMsg(const ICMPv6PacketTooBigMsg& other) : ::inet::ICMPv6Message(other)
{
    copy(other);
}

ICMPv6PacketTooBigMsg::~ICMPv6PacketTooBigMsg()
{
}

ICMPv6PacketTooBigMsg& ICMPv6PacketTooBigMsg::operator=(const ICMPv6PacketTooBigMsg& other)
{
    if (this==&other) return *this;
    ::inet::ICMPv6Message::operator=(other);
    copy(other);
    return *this;
}

void ICMPv6PacketTooBigMsg::copy(const ICMPv6PacketTooBigMsg& other)
{
    this->code_var = other.code_var;
    this->MTU_var = other.MTU_var;
}

void ICMPv6PacketTooBigMsg::parsimPack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimPack(b);
    doPacking(b,this->code_var);
    doPacking(b,this->MTU_var);
}

void ICMPv6PacketTooBigMsg::parsimUnpack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimUnpack(b);
    doUnpacking(b,this->code_var);
    doUnpacking(b,this->MTU_var);
}

int ICMPv6PacketTooBigMsg::getCode() const
{
    return code_var;
}

void ICMPv6PacketTooBigMsg::setCode(int code)
{
    this->code_var = code;
}

int ICMPv6PacketTooBigMsg::getMTU() const
{
    return MTU_var;
}

void ICMPv6PacketTooBigMsg::setMTU(int MTU)
{
    this->MTU_var = MTU;
}

class ICMPv6PacketTooBigMsgDescriptor : public cClassDescriptor
{
  public:
    ICMPv6PacketTooBigMsgDescriptor();
    virtual ~ICMPv6PacketTooBigMsgDescriptor();

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

Register_ClassDescriptor(ICMPv6PacketTooBigMsgDescriptor);

ICMPv6PacketTooBigMsgDescriptor::ICMPv6PacketTooBigMsgDescriptor() : cClassDescriptor("inet::ICMPv6PacketTooBigMsg", "inet::ICMPv6Message")
{
}

ICMPv6PacketTooBigMsgDescriptor::~ICMPv6PacketTooBigMsgDescriptor()
{
}

bool ICMPv6PacketTooBigMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ICMPv6PacketTooBigMsg *>(obj)!=NULL;
}

const char *ICMPv6PacketTooBigMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ICMPv6PacketTooBigMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ICMPv6PacketTooBigMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ICMPv6PacketTooBigMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "code",
        "MTU",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ICMPv6PacketTooBigMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "code")==0) return base+0;
    if (fieldName[0]=='M' && strcmp(fieldName, "MTU")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ICMPv6PacketTooBigMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *ICMPv6PacketTooBigMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ICMPv6PacketTooBigMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6PacketTooBigMsg *pp = (ICMPv6PacketTooBigMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ICMPv6PacketTooBigMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6PacketTooBigMsg *pp = (ICMPv6PacketTooBigMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCode());
        case 1: return long2string(pp->getMTU());
        default: return "";
    }
}

bool ICMPv6PacketTooBigMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6PacketTooBigMsg *pp = (ICMPv6PacketTooBigMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setCode(string2long(value)); return true;
        case 1: pp->setMTU(string2long(value)); return true;
        default: return false;
    }
}

const char *ICMPv6PacketTooBigMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *ICMPv6PacketTooBigMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6PacketTooBigMsg *pp = (ICMPv6PacketTooBigMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ICMPv6TimeExceededMsg);

ICMPv6TimeExceededMsg::ICMPv6TimeExceededMsg(const char *name, int kind) : ::inet::ICMPv6Message(name,kind)
{
    this->code_var = 0;
}

ICMPv6TimeExceededMsg::ICMPv6TimeExceededMsg(const ICMPv6TimeExceededMsg& other) : ::inet::ICMPv6Message(other)
{
    copy(other);
}

ICMPv6TimeExceededMsg::~ICMPv6TimeExceededMsg()
{
}

ICMPv6TimeExceededMsg& ICMPv6TimeExceededMsg::operator=(const ICMPv6TimeExceededMsg& other)
{
    if (this==&other) return *this;
    ::inet::ICMPv6Message::operator=(other);
    copy(other);
    return *this;
}

void ICMPv6TimeExceededMsg::copy(const ICMPv6TimeExceededMsg& other)
{
    this->code_var = other.code_var;
}

void ICMPv6TimeExceededMsg::parsimPack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimPack(b);
    doPacking(b,this->code_var);
}

void ICMPv6TimeExceededMsg::parsimUnpack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimUnpack(b);
    doUnpacking(b,this->code_var);
}

int ICMPv6TimeExceededMsg::getCode() const
{
    return code_var;
}

void ICMPv6TimeExceededMsg::setCode(int code)
{
    this->code_var = code;
}

class ICMPv6TimeExceededMsgDescriptor : public cClassDescriptor
{
  public:
    ICMPv6TimeExceededMsgDescriptor();
    virtual ~ICMPv6TimeExceededMsgDescriptor();

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

Register_ClassDescriptor(ICMPv6TimeExceededMsgDescriptor);

ICMPv6TimeExceededMsgDescriptor::ICMPv6TimeExceededMsgDescriptor() : cClassDescriptor("inet::ICMPv6TimeExceededMsg", "inet::ICMPv6Message")
{
}

ICMPv6TimeExceededMsgDescriptor::~ICMPv6TimeExceededMsgDescriptor()
{
}

bool ICMPv6TimeExceededMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ICMPv6TimeExceededMsg *>(obj)!=NULL;
}

const char *ICMPv6TimeExceededMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ICMPv6TimeExceededMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ICMPv6TimeExceededMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ICMPv6TimeExceededMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "code",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int ICMPv6TimeExceededMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "code")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ICMPv6TimeExceededMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *ICMPv6TimeExceededMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::ICMPv6_TIME_EX";
            return NULL;
        default: return NULL;
    }
}

int ICMPv6TimeExceededMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6TimeExceededMsg *pp = (ICMPv6TimeExceededMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ICMPv6TimeExceededMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6TimeExceededMsg *pp = (ICMPv6TimeExceededMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCode());
        default: return "";
    }
}

bool ICMPv6TimeExceededMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6TimeExceededMsg *pp = (ICMPv6TimeExceededMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setCode(string2long(value)); return true;
        default: return false;
    }
}

const char *ICMPv6TimeExceededMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *ICMPv6TimeExceededMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6TimeExceededMsg *pp = (ICMPv6TimeExceededMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ICMPv6ParamProblemMsg);

ICMPv6ParamProblemMsg::ICMPv6ParamProblemMsg(const char *name, int kind) : ::inet::ICMPv6Message(name,kind)
{
    this->code_var = 0;
}

ICMPv6ParamProblemMsg::ICMPv6ParamProblemMsg(const ICMPv6ParamProblemMsg& other) : ::inet::ICMPv6Message(other)
{
    copy(other);
}

ICMPv6ParamProblemMsg::~ICMPv6ParamProblemMsg()
{
}

ICMPv6ParamProblemMsg& ICMPv6ParamProblemMsg::operator=(const ICMPv6ParamProblemMsg& other)
{
    if (this==&other) return *this;
    ::inet::ICMPv6Message::operator=(other);
    copy(other);
    return *this;
}

void ICMPv6ParamProblemMsg::copy(const ICMPv6ParamProblemMsg& other)
{
    this->code_var = other.code_var;
}

void ICMPv6ParamProblemMsg::parsimPack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimPack(b);
    doPacking(b,this->code_var);
}

void ICMPv6ParamProblemMsg::parsimUnpack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimUnpack(b);
    doUnpacking(b,this->code_var);
}

int ICMPv6ParamProblemMsg::getCode() const
{
    return code_var;
}

void ICMPv6ParamProblemMsg::setCode(int code)
{
    this->code_var = code;
}

class ICMPv6ParamProblemMsgDescriptor : public cClassDescriptor
{
  public:
    ICMPv6ParamProblemMsgDescriptor();
    virtual ~ICMPv6ParamProblemMsgDescriptor();

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

Register_ClassDescriptor(ICMPv6ParamProblemMsgDescriptor);

ICMPv6ParamProblemMsgDescriptor::ICMPv6ParamProblemMsgDescriptor() : cClassDescriptor("inet::ICMPv6ParamProblemMsg", "inet::ICMPv6Message")
{
}

ICMPv6ParamProblemMsgDescriptor::~ICMPv6ParamProblemMsgDescriptor()
{
}

bool ICMPv6ParamProblemMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ICMPv6ParamProblemMsg *>(obj)!=NULL;
}

const char *ICMPv6ParamProblemMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ICMPv6ParamProblemMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int ICMPv6ParamProblemMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ICMPv6ParamProblemMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "code",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int ICMPv6ParamProblemMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "code")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ICMPv6ParamProblemMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *ICMPv6ParamProblemMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::ICMPv6_PARAMETER_PROB";
            return NULL;
        default: return NULL;
    }
}

int ICMPv6ParamProblemMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6ParamProblemMsg *pp = (ICMPv6ParamProblemMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ICMPv6ParamProblemMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6ParamProblemMsg *pp = (ICMPv6ParamProblemMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCode());
        default: return "";
    }
}

bool ICMPv6ParamProblemMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6ParamProblemMsg *pp = (ICMPv6ParamProblemMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setCode(string2long(value)); return true;
        default: return false;
    }
}

const char *ICMPv6ParamProblemMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *ICMPv6ParamProblemMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6ParamProblemMsg *pp = (ICMPv6ParamProblemMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ICMPv6EchoRequestMsg);

ICMPv6EchoRequestMsg::ICMPv6EchoRequestMsg(const char *name, int kind) : ::inet::ICMPv6Message(name,kind)
{
    this->code_var = 0;
    this->identifier_var = 0;
    this->seqNumber_var = 0;
}

ICMPv6EchoRequestMsg::ICMPv6EchoRequestMsg(const ICMPv6EchoRequestMsg& other) : ::inet::ICMPv6Message(other)
{
    copy(other);
}

ICMPv6EchoRequestMsg::~ICMPv6EchoRequestMsg()
{
}

ICMPv6EchoRequestMsg& ICMPv6EchoRequestMsg::operator=(const ICMPv6EchoRequestMsg& other)
{
    if (this==&other) return *this;
    ::inet::ICMPv6Message::operator=(other);
    copy(other);
    return *this;
}

void ICMPv6EchoRequestMsg::copy(const ICMPv6EchoRequestMsg& other)
{
    this->code_var = other.code_var;
    this->identifier_var = other.identifier_var;
    this->seqNumber_var = other.seqNumber_var;
}

void ICMPv6EchoRequestMsg::parsimPack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimPack(b);
    doPacking(b,this->code_var);
    doPacking(b,this->identifier_var);
    doPacking(b,this->seqNumber_var);
}

void ICMPv6EchoRequestMsg::parsimUnpack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimUnpack(b);
    doUnpacking(b,this->code_var);
    doUnpacking(b,this->identifier_var);
    doUnpacking(b,this->seqNumber_var);
}

int ICMPv6EchoRequestMsg::getCode() const
{
    return code_var;
}

void ICMPv6EchoRequestMsg::setCode(int code)
{
    this->code_var = code;
}

int ICMPv6EchoRequestMsg::getIdentifier() const
{
    return identifier_var;
}

void ICMPv6EchoRequestMsg::setIdentifier(int identifier)
{
    this->identifier_var = identifier;
}

int ICMPv6EchoRequestMsg::getSeqNumber() const
{
    return seqNumber_var;
}

void ICMPv6EchoRequestMsg::setSeqNumber(int seqNumber)
{
    this->seqNumber_var = seqNumber;
}

class ICMPv6EchoRequestMsgDescriptor : public cClassDescriptor
{
  public:
    ICMPv6EchoRequestMsgDescriptor();
    virtual ~ICMPv6EchoRequestMsgDescriptor();

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

Register_ClassDescriptor(ICMPv6EchoRequestMsgDescriptor);

ICMPv6EchoRequestMsgDescriptor::ICMPv6EchoRequestMsgDescriptor() : cClassDescriptor("inet::ICMPv6EchoRequestMsg", "inet::ICMPv6Message")
{
}

ICMPv6EchoRequestMsgDescriptor::~ICMPv6EchoRequestMsgDescriptor()
{
}

bool ICMPv6EchoRequestMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ICMPv6EchoRequestMsg *>(obj)!=NULL;
}

const char *ICMPv6EchoRequestMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ICMPv6EchoRequestMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int ICMPv6EchoRequestMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *ICMPv6EchoRequestMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "code",
        "identifier",
        "seqNumber",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int ICMPv6EchoRequestMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "code")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "identifier")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNumber")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ICMPv6EchoRequestMsgDescriptor::getFieldTypeString(void *object, int field) const
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
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *ICMPv6EchoRequestMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ICMPv6EchoRequestMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6EchoRequestMsg *pp = (ICMPv6EchoRequestMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ICMPv6EchoRequestMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6EchoRequestMsg *pp = (ICMPv6EchoRequestMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCode());
        case 1: return long2string(pp->getIdentifier());
        case 2: return long2string(pp->getSeqNumber());
        default: return "";
    }
}

bool ICMPv6EchoRequestMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6EchoRequestMsg *pp = (ICMPv6EchoRequestMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setCode(string2long(value)); return true;
        case 1: pp->setIdentifier(string2long(value)); return true;
        case 2: pp->setSeqNumber(string2long(value)); return true;
        default: return false;
    }
}

const char *ICMPv6EchoRequestMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *ICMPv6EchoRequestMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6EchoRequestMsg *pp = (ICMPv6EchoRequestMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(ICMPv6EchoReplyMsg);

ICMPv6EchoReplyMsg::ICMPv6EchoReplyMsg(const char *name, int kind) : ::inet::ICMPv6Message(name,kind)
{
    this->code_var = 0;
    this->identifier_var = 0;
    this->seqNumber_var = 0;
}

ICMPv6EchoReplyMsg::ICMPv6EchoReplyMsg(const ICMPv6EchoReplyMsg& other) : ::inet::ICMPv6Message(other)
{
    copy(other);
}

ICMPv6EchoReplyMsg::~ICMPv6EchoReplyMsg()
{
}

ICMPv6EchoReplyMsg& ICMPv6EchoReplyMsg::operator=(const ICMPv6EchoReplyMsg& other)
{
    if (this==&other) return *this;
    ::inet::ICMPv6Message::operator=(other);
    copy(other);
    return *this;
}

void ICMPv6EchoReplyMsg::copy(const ICMPv6EchoReplyMsg& other)
{
    this->code_var = other.code_var;
    this->identifier_var = other.identifier_var;
    this->seqNumber_var = other.seqNumber_var;
}

void ICMPv6EchoReplyMsg::parsimPack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimPack(b);
    doPacking(b,this->code_var);
    doPacking(b,this->identifier_var);
    doPacking(b,this->seqNumber_var);
}

void ICMPv6EchoReplyMsg::parsimUnpack(cCommBuffer *b)
{
    ::inet::ICMPv6Message::parsimUnpack(b);
    doUnpacking(b,this->code_var);
    doUnpacking(b,this->identifier_var);
    doUnpacking(b,this->seqNumber_var);
}

int ICMPv6EchoReplyMsg::getCode() const
{
    return code_var;
}

void ICMPv6EchoReplyMsg::setCode(int code)
{
    this->code_var = code;
}

int ICMPv6EchoReplyMsg::getIdentifier() const
{
    return identifier_var;
}

void ICMPv6EchoReplyMsg::setIdentifier(int identifier)
{
    this->identifier_var = identifier;
}

int ICMPv6EchoReplyMsg::getSeqNumber() const
{
    return seqNumber_var;
}

void ICMPv6EchoReplyMsg::setSeqNumber(int seqNumber)
{
    this->seqNumber_var = seqNumber;
}

class ICMPv6EchoReplyMsgDescriptor : public cClassDescriptor
{
  public:
    ICMPv6EchoReplyMsgDescriptor();
    virtual ~ICMPv6EchoReplyMsgDescriptor();

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

Register_ClassDescriptor(ICMPv6EchoReplyMsgDescriptor);

ICMPv6EchoReplyMsgDescriptor::ICMPv6EchoReplyMsgDescriptor() : cClassDescriptor("inet::ICMPv6EchoReplyMsg", "inet::ICMPv6Message")
{
}

ICMPv6EchoReplyMsgDescriptor::~ICMPv6EchoReplyMsgDescriptor()
{
}

bool ICMPv6EchoReplyMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ICMPv6EchoReplyMsg *>(obj)!=NULL;
}

const char *ICMPv6EchoReplyMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ICMPv6EchoReplyMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int ICMPv6EchoReplyMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *ICMPv6EchoReplyMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "code",
        "identifier",
        "seqNumber",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int ICMPv6EchoReplyMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "code")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "identifier")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNumber")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ICMPv6EchoReplyMsgDescriptor::getFieldTypeString(void *object, int field) const
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
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *ICMPv6EchoReplyMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ICMPv6EchoReplyMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6EchoReplyMsg *pp = (ICMPv6EchoReplyMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ICMPv6EchoReplyMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6EchoReplyMsg *pp = (ICMPv6EchoReplyMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCode());
        case 1: return long2string(pp->getIdentifier());
        case 2: return long2string(pp->getSeqNumber());
        default: return "";
    }
}

bool ICMPv6EchoReplyMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6EchoReplyMsg *pp = (ICMPv6EchoReplyMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setCode(string2long(value)); return true;
        case 1: pp->setIdentifier(string2long(value)); return true;
        case 2: pp->setSeqNumber(string2long(value)); return true;
        default: return false;
    }
}

const char *ICMPv6EchoReplyMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *ICMPv6EchoReplyMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ICMPv6EchoReplyMsg *pp = (ICMPv6EchoReplyMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inet

