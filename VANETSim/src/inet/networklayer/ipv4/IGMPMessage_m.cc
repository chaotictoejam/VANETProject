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
    cEnum *e = cEnum::find("inet::IGMPType");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::IGMPType"));
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
}

void IGMPMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->type_var);
}

void IGMPMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
}

int IGMPMessage::getType() const
{
    return type_var;
}

void IGMPMessage::setType(int type)
{
    this->type_var = type;
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

IGMPMessageDescriptor::IGMPMessageDescriptor() : cClassDescriptor("inet::IGMPMessage", "cPacket")
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
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
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
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
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
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IGMPMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
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
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
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
            if (!strcmp(propertyname,"enum")) return "inet::IGMPType";
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
        default: return NULL;
    }
}

Register_Class(IGMPQuery);

IGMPQuery::IGMPQuery(const char *name, int kind) : ::inet::IGMPMessage(name,kind)
{
}

IGMPQuery::IGMPQuery(const IGMPQuery& other) : ::inet::IGMPMessage(other)
{
    copy(other);
}

IGMPQuery::~IGMPQuery()
{
}

IGMPQuery& IGMPQuery::operator=(const IGMPQuery& other)
{
    if (this==&other) return *this;
    ::inet::IGMPMessage::operator=(other);
    copy(other);
    return *this;
}

void IGMPQuery::copy(const IGMPQuery& other)
{
    this->groupAddress_var = other.groupAddress_var;
}

void IGMPQuery::parsimPack(cCommBuffer *b)
{
    ::inet::IGMPMessage::parsimPack(b);
    doPacking(b,this->groupAddress_var);
}

void IGMPQuery::parsimUnpack(cCommBuffer *b)
{
    ::inet::IGMPMessage::parsimUnpack(b);
    doUnpacking(b,this->groupAddress_var);
}

IPv4Address& IGMPQuery::getGroupAddress()
{
    return groupAddress_var;
}

void IGMPQuery::setGroupAddress(const IPv4Address& groupAddress)
{
    this->groupAddress_var = groupAddress;
}

class IGMPQueryDescriptor : public cClassDescriptor
{
  public:
    IGMPQueryDescriptor();
    virtual ~IGMPQueryDescriptor();

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

Register_ClassDescriptor(IGMPQueryDescriptor);

IGMPQueryDescriptor::IGMPQueryDescriptor() : cClassDescriptor("inet::IGMPQuery", "inet::IGMPMessage")
{
}

IGMPQueryDescriptor::~IGMPQueryDescriptor()
{
}

bool IGMPQueryDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IGMPQuery *>(obj)!=NULL;
}

const char *IGMPQueryDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IGMPQueryDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IGMPQueryDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *IGMPQueryDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupAddress",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IGMPQueryDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupAddress")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IGMPQueryDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IGMPQueryDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IGMPQueryDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IGMPQuery *pp = (IGMPQuery *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IGMPQueryDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPQuery *pp = (IGMPQuery *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupAddress(); return out.str();}
        default: return "";
    }
}

bool IGMPQueryDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IGMPQuery *pp = (IGMPQuery *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IGMPQueryDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *IGMPQueryDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPQuery *pp = (IGMPQuery *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupAddress()); break;
        default: return NULL;
    }
}

Register_Class(IGMPv1Query);

IGMPv1Query::IGMPv1Query(const char *name, int kind) : ::inet::IGMPQuery(name,kind)
{
    this->setType(IGMP_MEMBERSHIP_QUERY);
}

IGMPv1Query::IGMPv1Query(const IGMPv1Query& other) : ::inet::IGMPQuery(other)
{
    copy(other);
}

IGMPv1Query::~IGMPv1Query()
{
}

IGMPv1Query& IGMPv1Query::operator=(const IGMPv1Query& other)
{
    if (this==&other) return *this;
    ::inet::IGMPQuery::operator=(other);
    copy(other);
    return *this;
}

void IGMPv1Query::copy(const IGMPv1Query& other)
{
}

void IGMPv1Query::parsimPack(cCommBuffer *b)
{
    ::inet::IGMPQuery::parsimPack(b);
}

void IGMPv1Query::parsimUnpack(cCommBuffer *b)
{
    ::inet::IGMPQuery::parsimUnpack(b);
}

class IGMPv1QueryDescriptor : public cClassDescriptor
{
  public:
    IGMPv1QueryDescriptor();
    virtual ~IGMPv1QueryDescriptor();

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

Register_ClassDescriptor(IGMPv1QueryDescriptor);

IGMPv1QueryDescriptor::IGMPv1QueryDescriptor() : cClassDescriptor("inet::IGMPv1Query", "inet::IGMPQuery")
{
}

IGMPv1QueryDescriptor::~IGMPv1QueryDescriptor()
{
}

bool IGMPv1QueryDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IGMPv1Query *>(obj)!=NULL;
}

const char *IGMPv1QueryDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IGMPv1QueryDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int IGMPv1QueryDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *IGMPv1QueryDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int IGMPv1QueryDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IGMPv1QueryDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *IGMPv1QueryDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IGMPv1QueryDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv1Query *pp = (IGMPv1Query *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IGMPv1QueryDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv1Query *pp = (IGMPv1Query *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool IGMPv1QueryDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv1Query *pp = (IGMPv1Query *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IGMPv1QueryDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *IGMPv1QueryDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv1Query *pp = (IGMPv1Query *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(IGMPv1Report);

IGMPv1Report::IGMPv1Report(const char *name, int kind) : ::inet::IGMPMessage(name,kind)
{
    this->setType(IGMPV1_MEMBERSHIP_REPORT);

}

IGMPv1Report::IGMPv1Report(const IGMPv1Report& other) : ::inet::IGMPMessage(other)
{
    copy(other);
}

IGMPv1Report::~IGMPv1Report()
{
}

IGMPv1Report& IGMPv1Report::operator=(const IGMPv1Report& other)
{
    if (this==&other) return *this;
    ::inet::IGMPMessage::operator=(other);
    copy(other);
    return *this;
}

void IGMPv1Report::copy(const IGMPv1Report& other)
{
    this->groupAddress_var = other.groupAddress_var;
}

void IGMPv1Report::parsimPack(cCommBuffer *b)
{
    ::inet::IGMPMessage::parsimPack(b);
    doPacking(b,this->groupAddress_var);
}

void IGMPv1Report::parsimUnpack(cCommBuffer *b)
{
    ::inet::IGMPMessage::parsimUnpack(b);
    doUnpacking(b,this->groupAddress_var);
}

IPv4Address& IGMPv1Report::getGroupAddress()
{
    return groupAddress_var;
}

void IGMPv1Report::setGroupAddress(const IPv4Address& groupAddress)
{
    this->groupAddress_var = groupAddress;
}

class IGMPv1ReportDescriptor : public cClassDescriptor
{
  public:
    IGMPv1ReportDescriptor();
    virtual ~IGMPv1ReportDescriptor();

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

Register_ClassDescriptor(IGMPv1ReportDescriptor);

IGMPv1ReportDescriptor::IGMPv1ReportDescriptor() : cClassDescriptor("inet::IGMPv1Report", "inet::IGMPMessage")
{
}

IGMPv1ReportDescriptor::~IGMPv1ReportDescriptor()
{
}

bool IGMPv1ReportDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IGMPv1Report *>(obj)!=NULL;
}

const char *IGMPv1ReportDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IGMPv1ReportDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IGMPv1ReportDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *IGMPv1ReportDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupAddress",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IGMPv1ReportDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupAddress")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IGMPv1ReportDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IGMPv1ReportDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IGMPv1ReportDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv1Report *pp = (IGMPv1Report *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IGMPv1ReportDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv1Report *pp = (IGMPv1Report *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupAddress(); return out.str();}
        default: return "";
    }
}

bool IGMPv1ReportDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv1Report *pp = (IGMPv1Report *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IGMPv1ReportDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *IGMPv1ReportDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv1Report *pp = (IGMPv1Report *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupAddress()); break;
        default: return NULL;
    }
}

Register_Class(IGMPv2Query);

IGMPv2Query::IGMPv2Query(const char *name, int kind) : ::inet::IGMPQuery(name,kind)
{
    this->setType(IGMP_MEMBERSHIP_QUERY);

    this->maxRespTime_var = 0;
}

IGMPv2Query::IGMPv2Query(const IGMPv2Query& other) : ::inet::IGMPQuery(other)
{
    copy(other);
}

IGMPv2Query::~IGMPv2Query()
{
}

IGMPv2Query& IGMPv2Query::operator=(const IGMPv2Query& other)
{
    if (this==&other) return *this;
    ::inet::IGMPQuery::operator=(other);
    copy(other);
    return *this;
}

void IGMPv2Query::copy(const IGMPv2Query& other)
{
    this->maxRespTime_var = other.maxRespTime_var;
}

void IGMPv2Query::parsimPack(cCommBuffer *b)
{
    ::inet::IGMPQuery::parsimPack(b);
    doPacking(b,this->maxRespTime_var);
}

void IGMPv2Query::parsimUnpack(cCommBuffer *b)
{
    ::inet::IGMPQuery::parsimUnpack(b);
    doUnpacking(b,this->maxRespTime_var);
}

unsigned char IGMPv2Query::getMaxRespTime() const
{
    return maxRespTime_var;
}

void IGMPv2Query::setMaxRespTime(unsigned char maxRespTime)
{
    this->maxRespTime_var = maxRespTime;
}

class IGMPv2QueryDescriptor : public cClassDescriptor
{
  public:
    IGMPv2QueryDescriptor();
    virtual ~IGMPv2QueryDescriptor();

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

Register_ClassDescriptor(IGMPv2QueryDescriptor);

IGMPv2QueryDescriptor::IGMPv2QueryDescriptor() : cClassDescriptor("inet::IGMPv2Query", "inet::IGMPQuery")
{
}

IGMPv2QueryDescriptor::~IGMPv2QueryDescriptor()
{
}

bool IGMPv2QueryDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IGMPv2Query *>(obj)!=NULL;
}

const char *IGMPv2QueryDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"fieldNameSuffix")) return "_var";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IGMPv2QueryDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IGMPv2QueryDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *IGMPv2QueryDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "maxRespTime",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IGMPv2QueryDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxRespTime")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IGMPv2QueryDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IGMPv2QueryDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IGMPv2QueryDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Query *pp = (IGMPv2Query *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IGMPv2QueryDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Query *pp = (IGMPv2Query *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getMaxRespTime());
        default: return "";
    }
}

bool IGMPv2QueryDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Query *pp = (IGMPv2Query *)object; (void)pp;
    switch (field) {
        case 0: pp->setMaxRespTime(string2ulong(value)); return true;
        default: return false;
    }
}

const char *IGMPv2QueryDescriptor::getFieldStructName(void *object, int field) const
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

void *IGMPv2QueryDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Query *pp = (IGMPv2Query *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(IGMPv2Report);

IGMPv2Report::IGMPv2Report(const char *name, int kind) : ::inet::IGMPMessage(name,kind)
{
    this->setType(IGMPV2_MEMBERSHIP_REPORT);

}

IGMPv2Report::IGMPv2Report(const IGMPv2Report& other) : ::inet::IGMPMessage(other)
{
    copy(other);
}

IGMPv2Report::~IGMPv2Report()
{
}

IGMPv2Report& IGMPv2Report::operator=(const IGMPv2Report& other)
{
    if (this==&other) return *this;
    ::inet::IGMPMessage::operator=(other);
    copy(other);
    return *this;
}

void IGMPv2Report::copy(const IGMPv2Report& other)
{
    this->groupAddress_var = other.groupAddress_var;
}

void IGMPv2Report::parsimPack(cCommBuffer *b)
{
    ::inet::IGMPMessage::parsimPack(b);
    doPacking(b,this->groupAddress_var);
}

void IGMPv2Report::parsimUnpack(cCommBuffer *b)
{
    ::inet::IGMPMessage::parsimUnpack(b);
    doUnpacking(b,this->groupAddress_var);
}

IPv4Address& IGMPv2Report::getGroupAddress()
{
    return groupAddress_var;
}

void IGMPv2Report::setGroupAddress(const IPv4Address& groupAddress)
{
    this->groupAddress_var = groupAddress;
}

class IGMPv2ReportDescriptor : public cClassDescriptor
{
  public:
    IGMPv2ReportDescriptor();
    virtual ~IGMPv2ReportDescriptor();

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

Register_ClassDescriptor(IGMPv2ReportDescriptor);

IGMPv2ReportDescriptor::IGMPv2ReportDescriptor() : cClassDescriptor("inet::IGMPv2Report", "inet::IGMPMessage")
{
}

IGMPv2ReportDescriptor::~IGMPv2ReportDescriptor()
{
}

bool IGMPv2ReportDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IGMPv2Report *>(obj)!=NULL;
}

const char *IGMPv2ReportDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IGMPv2ReportDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IGMPv2ReportDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *IGMPv2ReportDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupAddress",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IGMPv2ReportDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupAddress")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IGMPv2ReportDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IGMPv2ReportDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IGMPv2ReportDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Report *pp = (IGMPv2Report *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IGMPv2ReportDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Report *pp = (IGMPv2Report *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupAddress(); return out.str();}
        default: return "";
    }
}

bool IGMPv2ReportDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Report *pp = (IGMPv2Report *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IGMPv2ReportDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *IGMPv2ReportDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Report *pp = (IGMPv2Report *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupAddress()); break;
        default: return NULL;
    }
}

Register_Class(IGMPv2Leave);

IGMPv2Leave::IGMPv2Leave(const char *name, int kind) : ::inet::IGMPMessage(name,kind)
{
    this->setType(IGMPV2_LEAVE_GROUP);

}

IGMPv2Leave::IGMPv2Leave(const IGMPv2Leave& other) : ::inet::IGMPMessage(other)
{
    copy(other);
}

IGMPv2Leave::~IGMPv2Leave()
{
}

IGMPv2Leave& IGMPv2Leave::operator=(const IGMPv2Leave& other)
{
    if (this==&other) return *this;
    ::inet::IGMPMessage::operator=(other);
    copy(other);
    return *this;
}

void IGMPv2Leave::copy(const IGMPv2Leave& other)
{
    this->groupAddress_var = other.groupAddress_var;
}

void IGMPv2Leave::parsimPack(cCommBuffer *b)
{
    ::inet::IGMPMessage::parsimPack(b);
    doPacking(b,this->groupAddress_var);
}

void IGMPv2Leave::parsimUnpack(cCommBuffer *b)
{
    ::inet::IGMPMessage::parsimUnpack(b);
    doUnpacking(b,this->groupAddress_var);
}

IPv4Address& IGMPv2Leave::getGroupAddress()
{
    return groupAddress_var;
}

void IGMPv2Leave::setGroupAddress(const IPv4Address& groupAddress)
{
    this->groupAddress_var = groupAddress;
}

class IGMPv2LeaveDescriptor : public cClassDescriptor
{
  public:
    IGMPv2LeaveDescriptor();
    virtual ~IGMPv2LeaveDescriptor();

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

Register_ClassDescriptor(IGMPv2LeaveDescriptor);

IGMPv2LeaveDescriptor::IGMPv2LeaveDescriptor() : cClassDescriptor("inet::IGMPv2Leave", "inet::IGMPMessage")
{
}

IGMPv2LeaveDescriptor::~IGMPv2LeaveDescriptor()
{
}

bool IGMPv2LeaveDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IGMPv2Leave *>(obj)!=NULL;
}

const char *IGMPv2LeaveDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IGMPv2LeaveDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IGMPv2LeaveDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *IGMPv2LeaveDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupAddress",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IGMPv2LeaveDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupAddress")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IGMPv2LeaveDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IGMPv2LeaveDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IGMPv2LeaveDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Leave *pp = (IGMPv2Leave *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IGMPv2LeaveDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Leave *pp = (IGMPv2Leave *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupAddress(); return out.str();}
        default: return "";
    }
}

bool IGMPv2LeaveDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Leave *pp = (IGMPv2Leave *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IGMPv2LeaveDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *IGMPv2LeaveDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv2Leave *pp = (IGMPv2Leave *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupAddress()); break;
        default: return NULL;
    }
}

IGMPv3Query_Base::IGMPv3Query_Base(const char *name, int kind) : ::inet::IGMPv2Query(name,kind)
{
    this->suppressRouterProc_var = 0;
    this->robustnessVariable_var = 0;
    this->queryIntervalCode_var = 0;
}

IGMPv3Query_Base::IGMPv3Query_Base(const IGMPv3Query_Base& other) : ::inet::IGMPv2Query(other)
{
    copy(other);
}

IGMPv3Query_Base::~IGMPv3Query_Base()
{
}

IGMPv3Query_Base& IGMPv3Query_Base::operator=(const IGMPv3Query_Base& other)
{
    if (this==&other) return *this;
    ::inet::IGMPv2Query::operator=(other);
    copy(other);
    return *this;
}

void IGMPv3Query_Base::copy(const IGMPv3Query_Base& other)
{
    this->suppressRouterProc_var = other.suppressRouterProc_var;
    this->robustnessVariable_var = other.robustnessVariable_var;
    this->queryIntervalCode_var = other.queryIntervalCode_var;
    this->sourceList_var = other.sourceList_var;
}

void IGMPv3Query_Base::parsimPack(cCommBuffer *b)
{
    ::inet::IGMPv2Query::parsimPack(b);
    doPacking(b,this->suppressRouterProc_var);
    doPacking(b,this->robustnessVariable_var);
    doPacking(b,this->queryIntervalCode_var);
    doPacking(b,this->sourceList_var);
    // field maxRespCode is abstract -- please do packing in customized class
}

void IGMPv3Query_Base::parsimUnpack(cCommBuffer *b)
{
    ::inet::IGMPv2Query::parsimUnpack(b);
    doUnpacking(b,this->suppressRouterProc_var);
    doUnpacking(b,this->robustnessVariable_var);
    doUnpacking(b,this->queryIntervalCode_var);
    doUnpacking(b,this->sourceList_var);
    // field maxRespCode is abstract -- please do unpacking in customized class
}

bool IGMPv3Query_Base::getSuppressRouterProc() const
{
    return suppressRouterProc_var;
}

void IGMPv3Query_Base::setSuppressRouterProc(bool suppressRouterProc)
{
    this->suppressRouterProc_var = suppressRouterProc;
}

unsigned char IGMPv3Query_Base::getRobustnessVariable() const
{
    return robustnessVariable_var;
}

void IGMPv3Query_Base::setRobustnessVariable(unsigned char robustnessVariable)
{
    this->robustnessVariable_var = robustnessVariable;
}

unsigned char IGMPv3Query_Base::getQueryIntervalCode() const
{
    return queryIntervalCode_var;
}

void IGMPv3Query_Base::setQueryIntervalCode(unsigned char queryIntervalCode)
{
    this->queryIntervalCode_var = queryIntervalCode;
}

IPv4AddressVector& IGMPv3Query_Base::getSourceList()
{
    return sourceList_var;
}

void IGMPv3Query_Base::setSourceList(const IPv4AddressVector& sourceList)
{
    this->sourceList_var = sourceList;
}

class IGMPv3QueryDescriptor : public cClassDescriptor
{
  public:
    IGMPv3QueryDescriptor();
    virtual ~IGMPv3QueryDescriptor();

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

Register_ClassDescriptor(IGMPv3QueryDescriptor);

IGMPv3QueryDescriptor::IGMPv3QueryDescriptor() : cClassDescriptor("inet::IGMPv3Query", "inet::IGMPv2Query")
{
}

IGMPv3QueryDescriptor::~IGMPv3QueryDescriptor()
{
}

bool IGMPv3QueryDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IGMPv3Query_Base *>(obj)!=NULL;
}

const char *IGMPv3QueryDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    if (!strcmp(propertyname,"fieldNameSuffix")) return "_var";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IGMPv3QueryDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int IGMPv3QueryDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *IGMPv3QueryDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "suppressRouterProc",
        "robustnessVariable",
        "queryIntervalCode",
        "sourceList",
        "maxRespCode",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int IGMPv3QueryDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "suppressRouterProc")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "robustnessVariable")==0) return base+1;
    if (fieldName[0]=='q' && strcmp(fieldName, "queryIntervalCode")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceList")==0) return base+3;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxRespCode")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IGMPv3QueryDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "unsigned char",
        "unsigned char",
        "IPv4AddressVector",
        "unsigned char",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *IGMPv3QueryDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IGMPv3QueryDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv3Query_Base *pp = (IGMPv3Query_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IGMPv3QueryDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv3Query_Base *pp = (IGMPv3Query_Base *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getSuppressRouterProc());
        case 1: return ulong2string(pp->getRobustnessVariable());
        case 2: return ulong2string(pp->getQueryIntervalCode());
        case 3: {std::stringstream out; out << pp->getSourceList(); return out.str();}
        case 4: return ulong2string(pp->getMaxRespCode());
        default: return "";
    }
}

bool IGMPv3QueryDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv3Query_Base *pp = (IGMPv3Query_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSuppressRouterProc(string2bool(value)); return true;
        case 1: pp->setRobustnessVariable(string2ulong(value)); return true;
        case 2: pp->setQueryIntervalCode(string2ulong(value)); return true;
        case 4: pp->setMaxRespCode(string2ulong(value)); return true;
        default: return false;
    }
}

const char *IGMPv3QueryDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return opp_typename(typeid(IPv4AddressVector));
        default: return NULL;
    };
}

void *IGMPv3QueryDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv3Query_Base *pp = (IGMPv3Query_Base *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getSourceList()); break;
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::GroupRecordType");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::GroupRecordType"));
    e->insert(MODE_IS_INCLUDE, "MODE_IS_INCLUDE");
    e->insert(MODE_IS_EXCLUDE, "MODE_IS_EXCLUDE");
    e->insert(CHANGE_TO_INCLUDE_MODE, "CHANGE_TO_INCLUDE_MODE");
    e->insert(CHANGE_TO_EXCLUDE_MODE, "CHANGE_TO_EXCLUDE_MODE");
    e->insert(ALLOW_NEW_SOURCES, "ALLOW_NEW_SOURCES");
    e->insert(BLOCK_OLD_SOURCE, "BLOCK_OLD_SOURCE");
);

GroupRecord::GroupRecord()
{
    recordType = 0;
}

void doPacking(cCommBuffer *b, GroupRecord& a)
{
    doPacking(b,a.recordType);
    doPacking(b,a.groupAddress);
    doPacking(b,a.sourceList);
}

void doUnpacking(cCommBuffer *b, GroupRecord& a)
{
    doUnpacking(b,a.recordType);
    doUnpacking(b,a.groupAddress);
    doUnpacking(b,a.sourceList);
}

class GroupRecordDescriptor : public cClassDescriptor
{
  public:
    GroupRecordDescriptor();
    virtual ~GroupRecordDescriptor();

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

Register_ClassDescriptor(GroupRecordDescriptor);

GroupRecordDescriptor::GroupRecordDescriptor() : cClassDescriptor("inet::GroupRecord", "")
{
}

GroupRecordDescriptor::~GroupRecordDescriptor()
{
}

bool GroupRecordDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GroupRecord *>(obj)!=NULL;
}

const char *GroupRecordDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GroupRecordDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int GroupRecordDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *GroupRecordDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "recordType",
        "groupAddress",
        "sourceList",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int GroupRecordDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "recordType")==0) return base+0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupAddress")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceList")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GroupRecordDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "IPv4Address",
        "IPv4AddressVector",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *GroupRecordDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::GroupRecordType";
            return NULL;
        default: return NULL;
    }
}

int GroupRecordDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GroupRecord *pp = (GroupRecord *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GroupRecordDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GroupRecord *pp = (GroupRecord *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->recordType);
        case 1: {std::stringstream out; out << pp->groupAddress; return out.str();}
        case 2: {std::stringstream out; out << pp->sourceList; return out.str();}
        default: return "";
    }
}

bool GroupRecordDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GroupRecord *pp = (GroupRecord *)object; (void)pp;
    switch (field) {
        case 0: pp->recordType = string2long(value); return true;
        default: return false;
    }
}

const char *GroupRecordDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv4Address));
        case 2: return opp_typename(typeid(IPv4AddressVector));
        default: return NULL;
    };
}

void *GroupRecordDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GroupRecord *pp = (GroupRecord *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->groupAddress); break;
        case 2: return (void *)(&pp->sourceList); break;
        default: return NULL;
    }
}

Register_Class(IGMPv3Report);

IGMPv3Report::IGMPv3Report(const char *name, int kind) : ::inet::IGMPMessage(name,kind)
{
    this->setType(IGMPV3_MEMBERSHIP_REPORT);

    groupRecord_arraysize = 0;
    this->groupRecord_var = 0;
}

IGMPv3Report::IGMPv3Report(const IGMPv3Report& other) : ::inet::IGMPMessage(other)
{
    groupRecord_arraysize = 0;
    this->groupRecord_var = 0;
    copy(other);
}

IGMPv3Report::~IGMPv3Report()
{
    delete [] groupRecord_var;
}

IGMPv3Report& IGMPv3Report::operator=(const IGMPv3Report& other)
{
    if (this==&other) return *this;
    ::inet::IGMPMessage::operator=(other);
    copy(other);
    return *this;
}

void IGMPv3Report::copy(const IGMPv3Report& other)
{
    delete [] this->groupRecord_var;
    this->groupRecord_var = (other.groupRecord_arraysize==0) ? NULL : new GroupRecord[other.groupRecord_arraysize];
    groupRecord_arraysize = other.groupRecord_arraysize;
    for (unsigned int i=0; i<groupRecord_arraysize; i++)
        this->groupRecord_var[i] = other.groupRecord_var[i];
}

void IGMPv3Report::parsimPack(cCommBuffer *b)
{
    ::inet::IGMPMessage::parsimPack(b);
    b->pack(groupRecord_arraysize);
    doPacking(b,this->groupRecord_var,groupRecord_arraysize);
}

void IGMPv3Report::parsimUnpack(cCommBuffer *b)
{
    ::inet::IGMPMessage::parsimUnpack(b);
    delete [] this->groupRecord_var;
    b->unpack(groupRecord_arraysize);
    if (groupRecord_arraysize==0) {
        this->groupRecord_var = 0;
    } else {
        this->groupRecord_var = new GroupRecord[groupRecord_arraysize];
        doUnpacking(b,this->groupRecord_var,groupRecord_arraysize);
    }
}

void IGMPv3Report::setGroupRecordArraySize(unsigned int size)
{
    GroupRecord *groupRecord_var2 = (size==0) ? NULL : new GroupRecord[size];
    unsigned int sz = groupRecord_arraysize < size ? groupRecord_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        groupRecord_var2[i] = this->groupRecord_var[i];
    groupRecord_arraysize = size;
    delete [] this->groupRecord_var;
    this->groupRecord_var = groupRecord_var2;
}

unsigned int IGMPv3Report::getGroupRecordArraySize() const
{
    return groupRecord_arraysize;
}

GroupRecord& IGMPv3Report::getGroupRecord(unsigned int k)
{
    if (k>=groupRecord_arraysize) throw cRuntimeError("Array of size %d indexed by %d", groupRecord_arraysize, k);
    return groupRecord_var[k];
}

void IGMPv3Report::setGroupRecord(unsigned int k, const GroupRecord& groupRecord)
{
    if (k>=groupRecord_arraysize) throw cRuntimeError("Array of size %d indexed by %d", groupRecord_arraysize, k);
    this->groupRecord_var[k] = groupRecord;
}

class IGMPv3ReportDescriptor : public cClassDescriptor
{
  public:
    IGMPv3ReportDescriptor();
    virtual ~IGMPv3ReportDescriptor();

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

Register_ClassDescriptor(IGMPv3ReportDescriptor);

IGMPv3ReportDescriptor::IGMPv3ReportDescriptor() : cClassDescriptor("inet::IGMPv3Report", "inet::IGMPMessage")
{
}

IGMPv3ReportDescriptor::~IGMPv3ReportDescriptor()
{
}

bool IGMPv3ReportDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IGMPv3Report *>(obj)!=NULL;
}

const char *IGMPv3ReportDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IGMPv3ReportDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IGMPv3ReportDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *IGMPv3ReportDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupRecord",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IGMPv3ReportDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupRecord")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IGMPv3ReportDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "GroupRecord",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IGMPv3ReportDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IGMPv3ReportDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv3Report *pp = (IGMPv3Report *)object; (void)pp;
    switch (field) {
        case 0: return pp->getGroupRecordArraySize();
        default: return 0;
    }
}

std::string IGMPv3ReportDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv3Report *pp = (IGMPv3Report *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupRecord(i); return out.str();}
        default: return "";
    }
}

bool IGMPv3ReportDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv3Report *pp = (IGMPv3Report *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IGMPv3ReportDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(GroupRecord));
        default: return NULL;
    };
}

void *IGMPv3ReportDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IGMPv3Report *pp = (IGMPv3Report *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupRecord(i)); break;
        default: return NULL;
    }
}

} // namespace inet

