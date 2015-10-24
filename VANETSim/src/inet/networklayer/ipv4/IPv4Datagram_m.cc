//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/ipv4/IPv4Datagram.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPv4Datagram_m.h"

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
    cEnum *e = cEnum::find("IPOptionClass");
    if (!e) enums.getInstance()->add(e = new cEnum("IPOptionClass"));
    e->insert(IPOPTION_CLASS_CONTROL, "IPOPTION_CLASS_CONTROL");
    e->insert(IPOPTION_CLASS_RESERVED, "IPOPTION_CLASS_RESERVED");
    e->insert(IPOPTION_CLASS_DEBUGGING, "IPOPTION_CLASS_DEBUGGING");
    e->insert(IPOPTION_CLASS_RESERVED2, "IPOPTION_CLASS_RESERVED2");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("IPOption");
    if (!e) enums.getInstance()->add(e = new cEnum("IPOption"));
    e->insert(IPOPTION_END_OF_OPTIONS, "IPOPTION_END_OF_OPTIONS");
    e->insert(IPOPTION_NO_OPTION, "IPOPTION_NO_OPTION");
    e->insert(IPOPTION_STREAM_ID, "IPOPTION_STREAM_ID");
    e->insert(IPOPTION_TIMESTAMP, "IPOPTION_TIMESTAMP");
    e->insert(IPOPTION_SECURITY, "IPOPTION_SECURITY");
    e->insert(IPOPTION_LOOSE_SOURCE_ROUTING, "IPOPTION_LOOSE_SOURCE_ROUTING");
    e->insert(IPOPTION_RECORD_ROUTE, "IPOPTION_RECORD_ROUTE");
    e->insert(IPOPTION_STRICT_SOURCE_ROUTING, "IPOPTION_STRICT_SOURCE_ROUTING");
    e->insert(IPOPTION_ROUTER_ALERT, "IPOPTION_ROUTER_ALERT");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("TimestampFlag");
    if (!e) enums.getInstance()->add(e = new cEnum("TimestampFlag"));
    e->insert(IP_TIMESTAMP_TIMESTAMP_ONLY, "IP_TIMESTAMP_TIMESTAMP_ONLY");
    e->insert(IP_TIMESTAMP_WITH_ADDRESS, "IP_TIMESTAMP_WITH_ADDRESS");
    e->insert(IP_TIMESTAMP_SENDER_INIT_ADDRESS, "IP_TIMESTAMP_SENDER_INIT_ADDRESS");
);

Register_Class(IPv4RecordRouteOption);

IPv4RecordRouteOption::IPv4RecordRouteOption() : ::cObject()
{
    this->nextAddressPtr_var = 0;
}

IPv4RecordRouteOption::IPv4RecordRouteOption(const IPv4RecordRouteOption& other) : ::cObject(other)
{
    copy(other);
}

IPv4RecordRouteOption::~IPv4RecordRouteOption()
{
}

IPv4RecordRouteOption& IPv4RecordRouteOption::operator=(const IPv4RecordRouteOption& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void IPv4RecordRouteOption::copy(const IPv4RecordRouteOption& other)
{
    for (unsigned int i=0; i<MAX_IPADDR_OPTION_ENTRIES; i++)
        this->recordAddress_var[i] = other.recordAddress_var[i];
    this->nextAddressPtr_var = other.nextAddressPtr_var;
}

void IPv4RecordRouteOption::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->recordAddress_var,MAX_IPADDR_OPTION_ENTRIES);
    doPacking(b,this->nextAddressPtr_var);
}

void IPv4RecordRouteOption::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->recordAddress_var,MAX_IPADDR_OPTION_ENTRIES);
    doUnpacking(b,this->nextAddressPtr_var);
}

unsigned int IPv4RecordRouteOption::getRecordAddressArraySize() const
{
    return MAX_IPADDR_OPTION_ENTRIES;
}

IPv4Address& IPv4RecordRouteOption::getRecordAddress(unsigned int k)
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %lu", (unsigned long)k);
    return recordAddress_var[k];
}

void IPv4RecordRouteOption::setRecordAddress(unsigned int k, const IPv4Address& recordAddress)
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %lu", (unsigned long)k);
    this->recordAddress_var[k] = recordAddress;
}

short IPv4RecordRouteOption::getNextAddressPtr() const
{
    return nextAddressPtr_var;
}

void IPv4RecordRouteOption::setNextAddressPtr(short nextAddressPtr)
{
    this->nextAddressPtr_var = nextAddressPtr;
}

class IPv4RecordRouteOptionDescriptor : public cClassDescriptor
{
  public:
    IPv4RecordRouteOptionDescriptor();
    virtual ~IPv4RecordRouteOptionDescriptor();

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

Register_ClassDescriptor(IPv4RecordRouteOptionDescriptor);

IPv4RecordRouteOptionDescriptor::IPv4RecordRouteOptionDescriptor() : cClassDescriptor("IPv4RecordRouteOption", "cObject")
{
}

IPv4RecordRouteOptionDescriptor::~IPv4RecordRouteOptionDescriptor()
{
}

bool IPv4RecordRouteOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4RecordRouteOption *>(obj)!=NULL;
}

const char *IPv4RecordRouteOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4RecordRouteOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int IPv4RecordRouteOptionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *IPv4RecordRouteOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "recordAddress",
        "nextAddressPtr",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int IPv4RecordRouteOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "recordAddress")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextAddressPtr")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4RecordRouteOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "short",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *IPv4RecordRouteOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv4RecordRouteOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4RecordRouteOption *pp = (IPv4RecordRouteOption *)object; (void)pp;
    switch (field) {
        case 0: return MAX_IPADDR_OPTION_ENTRIES;
        default: return 0;
    }
}

std::string IPv4RecordRouteOptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4RecordRouteOption *pp = (IPv4RecordRouteOption *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRecordAddress(i); return out.str();}
        case 1: return long2string(pp->getNextAddressPtr());
        default: return "";
    }
}

bool IPv4RecordRouteOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4RecordRouteOption *pp = (IPv4RecordRouteOption *)object; (void)pp;
    switch (field) {
        case 1: pp->setNextAddressPtr(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv4RecordRouteOptionDescriptor::getFieldStructName(void *object, int field) const
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

void *IPv4RecordRouteOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4RecordRouteOption *pp = (IPv4RecordRouteOption *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRecordAddress(i)); break;
        default: return NULL;
    }
}

Register_Class(IPv4TimestampOption);

IPv4TimestampOption::IPv4TimestampOption() : ::cObject()
{
    this->flag_var = 0;
    this->overflow_var = 0;
    this->nextAddressPtr_var = 0;
    for (unsigned int i=0; i<MAX_IPADDR_OPTION_ENTRIES; i++)
        this->recordTimestamp_var[i] = 0;
}

IPv4TimestampOption::IPv4TimestampOption(const IPv4TimestampOption& other) : ::cObject(other)
{
    copy(other);
}

IPv4TimestampOption::~IPv4TimestampOption()
{
}

IPv4TimestampOption& IPv4TimestampOption::operator=(const IPv4TimestampOption& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void IPv4TimestampOption::copy(const IPv4TimestampOption& other)
{
    this->flag_var = other.flag_var;
    this->overflow_var = other.overflow_var;
    this->nextAddressPtr_var = other.nextAddressPtr_var;
    for (unsigned int i=0; i<MAX_TIMESTAMP_OPTION_ENTRIES; i++)
        this->recordAddress_var[i] = other.recordAddress_var[i];
    for (unsigned int i=0; i<MAX_IPADDR_OPTION_ENTRIES; i++)
        this->recordTimestamp_var[i] = other.recordTimestamp_var[i];
}

void IPv4TimestampOption::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->flag_var);
    doPacking(b,this->overflow_var);
    doPacking(b,this->nextAddressPtr_var);
    doPacking(b,this->recordAddress_var,MAX_TIMESTAMP_OPTION_ENTRIES);
    doPacking(b,this->recordTimestamp_var,MAX_IPADDR_OPTION_ENTRIES);
}

void IPv4TimestampOption::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->flag_var);
    doUnpacking(b,this->overflow_var);
    doUnpacking(b,this->nextAddressPtr_var);
    doUnpacking(b,this->recordAddress_var,MAX_TIMESTAMP_OPTION_ENTRIES);
    doUnpacking(b,this->recordTimestamp_var,MAX_IPADDR_OPTION_ENTRIES);
}

int IPv4TimestampOption::getFlag() const
{
    return flag_var;
}

void IPv4TimestampOption::setFlag(int flag)
{
    this->flag_var = flag;
}

short IPv4TimestampOption::getOverflow() const
{
    return overflow_var;
}

void IPv4TimestampOption::setOverflow(short overflow)
{
    this->overflow_var = overflow;
}

short IPv4TimestampOption::getNextAddressPtr() const
{
    return nextAddressPtr_var;
}

void IPv4TimestampOption::setNextAddressPtr(short nextAddressPtr)
{
    this->nextAddressPtr_var = nextAddressPtr;
}

unsigned int IPv4TimestampOption::getRecordAddressArraySize() const
{
    return MAX_TIMESTAMP_OPTION_ENTRIES;
}

IPv4Address& IPv4TimestampOption::getRecordAddress(unsigned int k)
{
    if (k>=MAX_TIMESTAMP_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_TIMESTAMP_OPTION_ENTRIES indexed by %lu", (unsigned long)k);
    return recordAddress_var[k];
}

void IPv4TimestampOption::setRecordAddress(unsigned int k, const IPv4Address& recordAddress)
{
    if (k>=MAX_TIMESTAMP_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_TIMESTAMP_OPTION_ENTRIES indexed by %lu", (unsigned long)k);
    this->recordAddress_var[k] = recordAddress;
}

unsigned int IPv4TimestampOption::getRecordTimestampArraySize() const
{
    return MAX_IPADDR_OPTION_ENTRIES;
}

simtime_t IPv4TimestampOption::getRecordTimestamp(unsigned int k) const
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %lu", (unsigned long)k);
    return recordTimestamp_var[k];
}

void IPv4TimestampOption::setRecordTimestamp(unsigned int k, simtime_t recordTimestamp)
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %lu", (unsigned long)k);
    this->recordTimestamp_var[k] = recordTimestamp;
}

class IPv4TimestampOptionDescriptor : public cClassDescriptor
{
  public:
    IPv4TimestampOptionDescriptor();
    virtual ~IPv4TimestampOptionDescriptor();

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

Register_ClassDescriptor(IPv4TimestampOptionDescriptor);

IPv4TimestampOptionDescriptor::IPv4TimestampOptionDescriptor() : cClassDescriptor("IPv4TimestampOption", "cObject")
{
}

IPv4TimestampOptionDescriptor::~IPv4TimestampOptionDescriptor()
{
}

bool IPv4TimestampOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4TimestampOption *>(obj)!=NULL;
}

const char *IPv4TimestampOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4TimestampOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int IPv4TimestampOptionDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *IPv4TimestampOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "flag",
        "overflow",
        "nextAddressPtr",
        "recordAddress",
        "recordTimestamp",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int IPv4TimestampOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "flag")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "overflow")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextAddressPtr")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "recordAddress")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "recordTimestamp")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4TimestampOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "short",
        "short",
        "IPv4Address",
        "simtime_t",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *IPv4TimestampOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "TimestampFlag";
            return NULL;
        default: return NULL;
    }
}

int IPv4TimestampOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4TimestampOption *pp = (IPv4TimestampOption *)object; (void)pp;
    switch (field) {
        case 3: return MAX_TIMESTAMP_OPTION_ENTRIES;
        case 4: return MAX_IPADDR_OPTION_ENTRIES;
        default: return 0;
    }
}

std::string IPv4TimestampOptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4TimestampOption *pp = (IPv4TimestampOption *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getFlag());
        case 1: return long2string(pp->getOverflow());
        case 2: return long2string(pp->getNextAddressPtr());
        case 3: {std::stringstream out; out << pp->getRecordAddress(i); return out.str();}
        case 4: return double2string(pp->getRecordTimestamp(i));
        default: return "";
    }
}

bool IPv4TimestampOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4TimestampOption *pp = (IPv4TimestampOption *)object; (void)pp;
    switch (field) {
        case 0: pp->setFlag(string2long(value)); return true;
        case 1: pp->setOverflow(string2long(value)); return true;
        case 2: pp->setNextAddressPtr(string2long(value)); return true;
        case 4: pp->setRecordTimestamp(i,string2double(value)); return true;
        default: return false;
    }
}

const char *IPv4TimestampOptionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *IPv4TimestampOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4TimestampOption *pp = (IPv4TimestampOption *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getRecordAddress(i)); break;
        default: return NULL;
    }
}

Register_Class(IPv4SourceRoutingOption);

IPv4SourceRoutingOption::IPv4SourceRoutingOption() : ::cObject()
{
    this->nextAddressPtr_var = 0;
    this->lastAddressPtr_var = 0;
}

IPv4SourceRoutingOption::IPv4SourceRoutingOption(const IPv4SourceRoutingOption& other) : ::cObject(other)
{
    copy(other);
}

IPv4SourceRoutingOption::~IPv4SourceRoutingOption()
{
}

IPv4SourceRoutingOption& IPv4SourceRoutingOption::operator=(const IPv4SourceRoutingOption& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void IPv4SourceRoutingOption::copy(const IPv4SourceRoutingOption& other)
{
    for (unsigned int i=0; i<MAX_IPADDR_OPTION_ENTRIES; i++)
        this->recordAddress_var[i] = other.recordAddress_var[i];
    this->nextAddressPtr_var = other.nextAddressPtr_var;
    this->lastAddressPtr_var = other.lastAddressPtr_var;
}

void IPv4SourceRoutingOption::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->recordAddress_var,MAX_IPADDR_OPTION_ENTRIES);
    doPacking(b,this->nextAddressPtr_var);
    doPacking(b,this->lastAddressPtr_var);
}

void IPv4SourceRoutingOption::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->recordAddress_var,MAX_IPADDR_OPTION_ENTRIES);
    doUnpacking(b,this->nextAddressPtr_var);
    doUnpacking(b,this->lastAddressPtr_var);
}

unsigned int IPv4SourceRoutingOption::getRecordAddressArraySize() const
{
    return MAX_IPADDR_OPTION_ENTRIES;
}

IPv4Address& IPv4SourceRoutingOption::getRecordAddress(unsigned int k)
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %lu", (unsigned long)k);
    return recordAddress_var[k];
}

void IPv4SourceRoutingOption::setRecordAddress(unsigned int k, const IPv4Address& recordAddress)
{
    if (k>=MAX_IPADDR_OPTION_ENTRIES) throw cRuntimeError("Array of size MAX_IPADDR_OPTION_ENTRIES indexed by %lu", (unsigned long)k);
    this->recordAddress_var[k] = recordAddress;
}

short IPv4SourceRoutingOption::getNextAddressPtr() const
{
    return nextAddressPtr_var;
}

void IPv4SourceRoutingOption::setNextAddressPtr(short nextAddressPtr)
{
    this->nextAddressPtr_var = nextAddressPtr;
}

short IPv4SourceRoutingOption::getLastAddressPtr() const
{
    return lastAddressPtr_var;
}

void IPv4SourceRoutingOption::setLastAddressPtr(short lastAddressPtr)
{
    this->lastAddressPtr_var = lastAddressPtr;
}

class IPv4SourceRoutingOptionDescriptor : public cClassDescriptor
{
  public:
    IPv4SourceRoutingOptionDescriptor();
    virtual ~IPv4SourceRoutingOptionDescriptor();

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

Register_ClassDescriptor(IPv4SourceRoutingOptionDescriptor);

IPv4SourceRoutingOptionDescriptor::IPv4SourceRoutingOptionDescriptor() : cClassDescriptor("IPv4SourceRoutingOption", "cObject")
{
}

IPv4SourceRoutingOptionDescriptor::~IPv4SourceRoutingOptionDescriptor()
{
}

bool IPv4SourceRoutingOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4SourceRoutingOption *>(obj)!=NULL;
}

const char *IPv4SourceRoutingOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4SourceRoutingOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int IPv4SourceRoutingOptionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *IPv4SourceRoutingOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "recordAddress",
        "nextAddressPtr",
        "lastAddressPtr",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int IPv4SourceRoutingOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "recordAddress")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextAddressPtr")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastAddressPtr")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4SourceRoutingOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "short",
        "short",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *IPv4SourceRoutingOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv4SourceRoutingOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4SourceRoutingOption *pp = (IPv4SourceRoutingOption *)object; (void)pp;
    switch (field) {
        case 0: return MAX_IPADDR_OPTION_ENTRIES;
        default: return 0;
    }
}

std::string IPv4SourceRoutingOptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4SourceRoutingOption *pp = (IPv4SourceRoutingOption *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRecordAddress(i); return out.str();}
        case 1: return long2string(pp->getNextAddressPtr());
        case 2: return long2string(pp->getLastAddressPtr());
        default: return "";
    }
}

bool IPv4SourceRoutingOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4SourceRoutingOption *pp = (IPv4SourceRoutingOption *)object; (void)pp;
    switch (field) {
        case 1: pp->setNextAddressPtr(string2long(value)); return true;
        case 2: pp->setLastAddressPtr(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv4SourceRoutingOptionDescriptor::getFieldStructName(void *object, int field) const
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

void *IPv4SourceRoutingOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4SourceRoutingOption *pp = (IPv4SourceRoutingOption *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRecordAddress(i)); break;
        default: return NULL;
    }
}

IPv4Datagram_Base::IPv4Datagram_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->version_var = 4;
    this->headerLength_var = IP_HEADER_BYTES;
    this->transportProtocol_var = IP_PROT_NONE;
    this->timeToLive_var = 0;
    this->identification_var = 0;
    this->moreFragments_var = 0;
    this->dontFragment_var = 0;
    this->fragmentOffset_var = 0;
    this->typeOfService_var = 0;
    this->optionCode_var = IPOPTION_NO_OPTION;
    this->totalPayloadLength_var = 0;
}

IPv4Datagram_Base::IPv4Datagram_Base(const IPv4Datagram_Base& other) : ::cPacket(other)
{
    copy(other);
}

IPv4Datagram_Base::~IPv4Datagram_Base()
{
}

IPv4Datagram_Base& IPv4Datagram_Base::operator=(const IPv4Datagram_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void IPv4Datagram_Base::copy(const IPv4Datagram_Base& other)
{
    this->version_var = other.version_var;
    this->headerLength_var = other.headerLength_var;
    this->srcAddress_var = other.srcAddress_var;
    this->destAddress_var = other.destAddress_var;
    this->transportProtocol_var = other.transportProtocol_var;
    this->timeToLive_var = other.timeToLive_var;
    this->identification_var = other.identification_var;
    this->moreFragments_var = other.moreFragments_var;
    this->dontFragment_var = other.dontFragment_var;
    this->fragmentOffset_var = other.fragmentOffset_var;
    this->typeOfService_var = other.typeOfService_var;
    this->optionCode_var = other.optionCode_var;
    this->recordRoute_var = other.recordRoute_var;
    this->timestampOption_var = other.timestampOption_var;
    this->sourceRoutingOption_var = other.sourceRoutingOption_var;
    this->totalPayloadLength_var = other.totalPayloadLength_var;
}

void IPv4Datagram_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->version_var);
    doPacking(b,this->headerLength_var);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->destAddress_var);
    doPacking(b,this->transportProtocol_var);
    doPacking(b,this->timeToLive_var);
    doPacking(b,this->identification_var);
    doPacking(b,this->moreFragments_var);
    doPacking(b,this->dontFragment_var);
    doPacking(b,this->fragmentOffset_var);
    doPacking(b,this->typeOfService_var);
    // field diffServCodePoint is abstract -- please do packing in customized class
    // field explicitCongestionNotification is abstract -- please do packing in customized class
    doPacking(b,this->optionCode_var);
    doPacking(b,this->recordRoute_var);
    doPacking(b,this->timestampOption_var);
    doPacking(b,this->sourceRoutingOption_var);
    doPacking(b,this->totalPayloadLength_var);
}

void IPv4Datagram_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->version_var);
    doUnpacking(b,this->headerLength_var);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->destAddress_var);
    doUnpacking(b,this->transportProtocol_var);
    doUnpacking(b,this->timeToLive_var);
    doUnpacking(b,this->identification_var);
    doUnpacking(b,this->moreFragments_var);
    doUnpacking(b,this->dontFragment_var);
    doUnpacking(b,this->fragmentOffset_var);
    doUnpacking(b,this->typeOfService_var);
    // field diffServCodePoint is abstract -- please do unpacking in customized class
    // field explicitCongestionNotification is abstract -- please do unpacking in customized class
    doUnpacking(b,this->optionCode_var);
    doUnpacking(b,this->recordRoute_var);
    doUnpacking(b,this->timestampOption_var);
    doUnpacking(b,this->sourceRoutingOption_var);
    doUnpacking(b,this->totalPayloadLength_var);
}

short IPv4Datagram_Base::getVersion() const
{
    return version_var;
}

void IPv4Datagram_Base::setVersion(short version)
{
    this->version_var = version;
}

short IPv4Datagram_Base::getHeaderLength() const
{
    return headerLength_var;
}

void IPv4Datagram_Base::setHeaderLength(short headerLength)
{
    this->headerLength_var = headerLength;
}

IPv4Address& IPv4Datagram_Base::getSrcAddress()
{
    return srcAddress_var;
}

void IPv4Datagram_Base::setSrcAddress(const IPv4Address& srcAddress)
{
    this->srcAddress_var = srcAddress;
}

IPv4Address& IPv4Datagram_Base::getDestAddress()
{
    return destAddress_var;
}

void IPv4Datagram_Base::setDestAddress(const IPv4Address& destAddress)
{
    this->destAddress_var = destAddress;
}

int IPv4Datagram_Base::getTransportProtocol() const
{
    return transportProtocol_var;
}

void IPv4Datagram_Base::setTransportProtocol(int transportProtocol)
{
    this->transportProtocol_var = transportProtocol;
}

short IPv4Datagram_Base::getTimeToLive() const
{
    return timeToLive_var;
}

void IPv4Datagram_Base::setTimeToLive(short timeToLive)
{
    this->timeToLive_var = timeToLive;
}

int IPv4Datagram_Base::getIdentification() const
{
    return identification_var;
}

void IPv4Datagram_Base::setIdentification(int identification)
{
    this->identification_var = identification;
}

bool IPv4Datagram_Base::getMoreFragments() const
{
    return moreFragments_var;
}

void IPv4Datagram_Base::setMoreFragments(bool moreFragments)
{
    this->moreFragments_var = moreFragments;
}

bool IPv4Datagram_Base::getDontFragment() const
{
    return dontFragment_var;
}

void IPv4Datagram_Base::setDontFragment(bool dontFragment)
{
    this->dontFragment_var = dontFragment;
}

int IPv4Datagram_Base::getFragmentOffset() const
{
    return fragmentOffset_var;
}

void IPv4Datagram_Base::setFragmentOffset(int fragmentOffset)
{
    this->fragmentOffset_var = fragmentOffset;
}

unsigned char IPv4Datagram_Base::getTypeOfService() const
{
    return typeOfService_var;
}

void IPv4Datagram_Base::setTypeOfService(unsigned char typeOfService)
{
    this->typeOfService_var = typeOfService;
}

int IPv4Datagram_Base::getOptionCode() const
{
    return optionCode_var;
}

void IPv4Datagram_Base::setOptionCode(int optionCode)
{
    this->optionCode_var = optionCode;
}

IPv4RecordRouteOption& IPv4Datagram_Base::getRecordRoute()
{
    return recordRoute_var;
}

void IPv4Datagram_Base::setRecordRoute(const IPv4RecordRouteOption& recordRoute)
{
    this->recordRoute_var = recordRoute;
}

IPv4TimestampOption& IPv4Datagram_Base::getTimestampOption()
{
    return timestampOption_var;
}

void IPv4Datagram_Base::setTimestampOption(const IPv4TimestampOption& timestampOption)
{
    this->timestampOption_var = timestampOption;
}

IPv4SourceRoutingOption& IPv4Datagram_Base::getSourceRoutingOption()
{
    return sourceRoutingOption_var;
}

void IPv4Datagram_Base::setSourceRoutingOption(const IPv4SourceRoutingOption& sourceRoutingOption)
{
    this->sourceRoutingOption_var = sourceRoutingOption;
}

unsigned int IPv4Datagram_Base::getTotalPayloadLength() const
{
    return totalPayloadLength_var;
}

void IPv4Datagram_Base::setTotalPayloadLength(unsigned int totalPayloadLength)
{
    this->totalPayloadLength_var = totalPayloadLength;
}

class IPv4DatagramDescriptor : public cClassDescriptor
{
  public:
    IPv4DatagramDescriptor();
    virtual ~IPv4DatagramDescriptor();

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

Register_ClassDescriptor(IPv4DatagramDescriptor);

IPv4DatagramDescriptor::IPv4DatagramDescriptor() : cClassDescriptor("IPv4Datagram", "cPacket")
{
}

IPv4DatagramDescriptor::~IPv4DatagramDescriptor()
{
}

bool IPv4DatagramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4Datagram_Base *>(obj)!=NULL;
}

const char *IPv4DatagramDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4DatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 18+basedesc->getFieldCount(object) : 18;
}

unsigned int IPv4DatagramDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND | FD_ISCOBJECT,
        FD_ISCOMPOUND | FD_ISCOBJECT,
        FD_ISCOMPOUND | FD_ISCOBJECT,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<18) ? fieldTypeFlags[field] : 0;
}

const char *IPv4DatagramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "version",
        "headerLength",
        "srcAddress",
        "destAddress",
        "transportProtocol",
        "timeToLive",
        "identification",
        "moreFragments",
        "dontFragment",
        "fragmentOffset",
        "typeOfService",
        "diffServCodePoint",
        "explicitCongestionNotification",
        "optionCode",
        "recordRoute",
        "timestampOption",
        "sourceRoutingOption",
        "totalPayloadLength",
    };
    return (field>=0 && field<18) ? fieldNames[field] : NULL;
}

int IPv4DatagramDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "version")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "headerLength")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddress")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddress")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "transportProtocol")==0) return base+4;
    if (fieldName[0]=='t' && strcmp(fieldName, "timeToLive")==0) return base+5;
    if (fieldName[0]=='i' && strcmp(fieldName, "identification")==0) return base+6;
    if (fieldName[0]=='m' && strcmp(fieldName, "moreFragments")==0) return base+7;
    if (fieldName[0]=='d' && strcmp(fieldName, "dontFragment")==0) return base+8;
    if (fieldName[0]=='f' && strcmp(fieldName, "fragmentOffset")==0) return base+9;
    if (fieldName[0]=='t' && strcmp(fieldName, "typeOfService")==0) return base+10;
    if (fieldName[0]=='d' && strcmp(fieldName, "diffServCodePoint")==0) return base+11;
    if (fieldName[0]=='e' && strcmp(fieldName, "explicitCongestionNotification")==0) return base+12;
    if (fieldName[0]=='o' && strcmp(fieldName, "optionCode")==0) return base+13;
    if (fieldName[0]=='r' && strcmp(fieldName, "recordRoute")==0) return base+14;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestampOption")==0) return base+15;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceRoutingOption")==0) return base+16;
    if (fieldName[0]=='t' && strcmp(fieldName, "totalPayloadLength")==0) return base+17;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4DatagramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "short",
        "IPv4Address",
        "IPv4Address",
        "int",
        "short",
        "int",
        "bool",
        "bool",
        "int",
        "unsigned char",
        "int",
        "int",
        "int",
        "IPv4RecordRouteOption",
        "IPv4TimestampOption",
        "IPv4SourceRoutingOption",
        "unsigned int",
    };
    return (field>=0 && field<18) ? fieldTypeStrings[field] : NULL;
}

const char *IPv4DatagramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 4:
            if (!strcmp(propertyname,"enum")) return "IPProtocolId";
            return NULL;
        case 13:
            if (!strcmp(propertyname,"enum")) return "IPOption";
            return NULL;
        default: return NULL;
    }
}

int IPv4DatagramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4Datagram_Base *pp = (IPv4Datagram_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv4DatagramDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4Datagram_Base *pp = (IPv4Datagram_Base *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getVersion());
        case 1: return long2string(pp->getHeaderLength());
        case 2: {std::stringstream out; out << pp->getSrcAddress(); return out.str();}
        case 3: {std::stringstream out; out << pp->getDestAddress(); return out.str();}
        case 4: return long2string(pp->getTransportProtocol());
        case 5: return long2string(pp->getTimeToLive());
        case 6: return long2string(pp->getIdentification());
        case 7: return bool2string(pp->getMoreFragments());
        case 8: return bool2string(pp->getDontFragment());
        case 9: return long2string(pp->getFragmentOffset());
        case 10: return ulong2string(pp->getTypeOfService());
        case 11: return long2string(pp->getDiffServCodePoint());
        case 12: return long2string(pp->getExplicitCongestionNotification());
        case 13: return long2string(pp->getOptionCode());
        case 14: {std::stringstream out; out << pp->getRecordRoute(); return out.str();}
        case 15: {std::stringstream out; out << pp->getTimestampOption(); return out.str();}
        case 16: {std::stringstream out; out << pp->getSourceRoutingOption(); return out.str();}
        case 17: return ulong2string(pp->getTotalPayloadLength());
        default: return "";
    }
}

bool IPv4DatagramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4Datagram_Base *pp = (IPv4Datagram_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setVersion(string2long(value)); return true;
        case 1: pp->setHeaderLength(string2long(value)); return true;
        case 4: pp->setTransportProtocol(string2long(value)); return true;
        case 5: pp->setTimeToLive(string2long(value)); return true;
        case 6: pp->setIdentification(string2long(value)); return true;
        case 7: pp->setMoreFragments(string2bool(value)); return true;
        case 8: pp->setDontFragment(string2bool(value)); return true;
        case 9: pp->setFragmentOffset(string2long(value)); return true;
        case 10: pp->setTypeOfService(string2ulong(value)); return true;
        case 11: pp->setDiffServCodePoint(string2long(value)); return true;
        case 12: pp->setExplicitCongestionNotification(string2long(value)); return true;
        case 13: pp->setOptionCode(string2long(value)); return true;
        case 17: pp->setTotalPayloadLength(string2ulong(value)); return true;
        default: return false;
    }
}

const char *IPv4DatagramDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(IPv4Address));
        case 3: return opp_typename(typeid(IPv4Address));
        case 14: return opp_typename(typeid(IPv4RecordRouteOption));
        case 15: return opp_typename(typeid(IPv4TimestampOption));
        case 16: return opp_typename(typeid(IPv4SourceRoutingOption));
        default: return NULL;
    };
}

void *IPv4DatagramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4Datagram_Base *pp = (IPv4Datagram_Base *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getSrcAddress()); break;
        case 3: return (void *)(&pp->getDestAddress()); break;
        case 14: return (void *)static_cast<cObject *>(&pp->getRecordRoute()); break;
        case 15: return (void *)static_cast<cObject *>(&pp->getTimestampOption()); break;
        case 16: return (void *)static_cast<cObject *>(&pp->getSourceRoutingOption()); break;
        default: return NULL;
    }
}


