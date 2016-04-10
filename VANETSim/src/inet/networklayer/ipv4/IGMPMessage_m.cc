//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/ipv4/IGMPMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IGMPMessage_m.h"

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
    cEnum *e = cEnum::find("IGMPType");
    if (!e) enums.getInstance()->add(e = new cEnum("IGMPType"));
    e->insert(IGMP_MEMBERSHIP_QUERY, "IGMP_MEMBERSHIP_QUERY");
    e->insert(IGMPV1_MEMBERSHIP_REPORT, "IGMPV1_MEMBERSHIP_REPORT");
    e->insert(IGMPV2_MEMBERSHIP_REPORT, "IGMPV2_MEMBERSHIP_REPORT");
    e->insert(IGMPV2_LEAVE_GROUP, "IGMPV2_LEAVE_GROUP");
    e->insert(IGMPV3_MEMBERSHIP_REPORT, "IGMPV3_MEMBERSHIP_REPORT");
);

Register_Class(IGMPMessage);

IGMPMessage::IGMPMessage(const char *name, int kind) : ::cPacket(name,kind)
{
    this->type_var = 0;
    this->maxRespTime_var = 0;
}

IGMPMessage::IGMPMessage(const IGMPMessage& other) : ::cPacket(other)
{
    copy(other);
}

IGMPMessage::~IGMPMessage()
{
}

IGMPMessage& IGMPMessage::operator=(const IGMPMessage& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void IGMPMessage::copy(const IGMPMessage& other)
{
    this->type_var = other.type_var;
    this->maxRespTime_var = other.maxRespTime_var;
    this->groupAddress_var = other.groupAddress_var;
}

void IGMPMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->maxRespTime_var);
    doPacking(b,this->groupAddress_var);
}

void IGMPMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->maxRespTime_var);
    doUnpacking(b,this->groupAddress_var);
}

int IGMPMessage::getType() const
{
    return type_var;
}

void IGMPMessage::setType(int type)
{
    this->type_var = type;
}

int IGMPMessage::getMaxRespTime() const
{
    return maxRespTime_var;
}

void IGMPMessage::setMaxRespTime(int maxRespTime)
{
    this->maxRespTime_var = maxRespTime;
}

IPv4Address& IGMPMessage::getGroupAddress()
{
    return groupAddress_var;
}

void IGMPMessage::setGroupAddress(const IPv4Address& groupAddress)
{
    this->groupAddress_var = groupAddress;
}

class IGMPMessageDescriptor : public cClassDescriptor
{
  public:
    IGMPMessageDescriptor();
    virtual ~IGMPMessageDescriptor();

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

Register_ClassDescriptor(IGMPMessageDescriptor);

IGMPMessageDescriptor::IGMPMessageDescriptor() : cClassDescriptor("IGMPMessage", "cPacket")
{
}

IGMPMessageDescriptor::~IGMPMessageDescriptor()
{
}

bool IGMPMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IGMPMessage *>(obj)!=NULL;
}

const char *IGMPMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IGMPMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int IGMPMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *IGMPMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "maxRespTime",
        "groupAddress",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int IGMPMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxRespTime")==0) return base+1;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupAddress")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IGMPMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "IPv4Address",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *IGMPMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "IGMPType";
            return NULL;
        default: return NULL;
    }
}

int IGMPMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IGMPMessage *pp = (IGMPMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IGMPMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPMessage *pp = (IGMPMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: return long2string(pp->getMaxRespTime());
        case 2: {std::stringstream out; out << pp->getGroupAddress(); return out.str();}
        default: return "";
    }
}

bool IGMPMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IGMPMessage *pp = (IGMPMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setMaxRespTime(string2long(value)); return true;
        default: return false;
    }
}

const char *IGMPMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *IGMPMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPMessage *pp = (IGMPMessage *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getGroupAddress()); break;
        default: return NULL;
    }
}


