//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/ipv4/IPv4Datagram.msg.
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
    cEnum *e = cEnum::find("inet::IPOptionClass");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::IPOptionClass"));
    e->insert(IPOPTION_CLASS_CONTROL, "IPOPTION_CLASS_CONTROL");
    e->insert(IPOPTION_CLASS_RESERVED, "IPOPTION_CLASS_RESERVED");
    e->insert(IPOPTION_CLASS_DEBUGGING, "IPOPTION_CLASS_DEBUGGING");
    e->insert(IPOPTION_CLASS_RESERVED2, "IPOPTION_CLASS_RESERVED2");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::IPOption");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::IPOption"));
    e->insert(IPOPTION_END_OF_OPTIONS, "IPOPTION_END_OF_OPTIONS");
    e->insert(IPOPTION_NO_OPTION, "IPOPTION_NO_OPTION");
    e->insert(IPOPTION_STREAM_ID, "IPOPTION_STREAM_ID");
    e->insert(IPOPTION_TIMESTAMP, "IPOPTION_TIMESTAMP");
    e->insert(IPOPTION_SECURITY, "IPOPTION_SECURITY");
    e->insert(IPOPTION_LOOSE_SOURCE_ROUTING, "IPOPTION_LOOSE_SOURCE_ROUTING");
    e->insert(IPOPTION_RECORD_ROUTE, "IPOPTION_RECORD_ROUTE");
    e->insert(IPOPTION_STRICT_SOURCE_ROUTING, "IPOPTION_STRICT_SOURCE_ROUTING");
    e->insert(IPOPTION_ROUTER_ALERT, "IPOPTION_ROUTER_ALERT");
    e->insert(IPOPTION_TLV_GPSR, "IPOPTION_TLV_GPSR");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::TimestampFlag");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::TimestampFlag"));
    e->insert(IP_TIMESTAMP_TIMESTAMP_ONLY, "IP_TIMESTAMP_TIMESTAMP_ONLY");
    e->insert(IP_TIMESTAMP_WITH_ADDRESS, "IP_TIMESTAMP_WITH_ADDRESS");
    e->insert(IP_TIMESTAMP_SENDER_INIT_ADDRESS, "IP_TIMESTAMP_SENDER_INIT_ADDRESS");
);

IPv4Option::IPv4Option() : ::inet::TLVOptionBase()
{
}

IPv4Option::IPv4Option(const IPv4Option& other) : ::inet::TLVOptionBase(other)
{
    copy(other);
}

IPv4Option::~IPv4Option()
{
}

IPv4Option& IPv4Option::operator=(const IPv4Option& other)
{
    if (this==&other) return *this;
    ::inet::TLVOptionBase::operator=(other);
    copy(other);
    return *this;
}

void IPv4Option::copy(const IPv4Option& other)
{
}

void IPv4Option::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inet::TLVOptionBase&)*this);
}

void IPv4Option::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inet::TLVOptionBase&)*this);
}

class IPv4OptionDescriptor : public cClassDescriptor
{
  public:
    IPv4OptionDescriptor();
    virtual ~IPv4OptionDescriptor();

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

Register_ClassDescriptor(IPv4OptionDescriptor);

IPv4OptionDescriptor::IPv4OptionDescriptor() : cClassDescriptor("inet::IPv4Option", "inet::TLVOptionBase")
{
}

IPv4OptionDescriptor::~IPv4OptionDescriptor()
{
}

bool IPv4OptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4Option *>(obj)!=NULL;
}

const char *IPv4OptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4OptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int IPv4OptionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *IPv4OptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int IPv4OptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4OptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *IPv4OptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv4OptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4Option *pp = (IPv4Option *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv4OptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4Option *pp = (IPv4Option *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool IPv4OptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4Option *pp = (IPv4Option *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv4OptionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *IPv4OptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4Option *pp = (IPv4Option *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

IPv4OptionNop::IPv4OptionNop() : ::inet::IPv4Option()
{
    this->setType(IPOPTION_NO_OPTION);
    this->setLength(1);
}

IPv4OptionNop::IPv4OptionNop(const IPv4OptionNop& other) : ::inet::IPv4Option(other)
{
    copy(other);
}

IPv4OptionNop::~IPv4OptionNop()
{
}

IPv4OptionNop& IPv4OptionNop::operator=(const IPv4OptionNop& other)
{
    if (this==&other) return *this;
    ::inet::IPv4Option::operator=(other);
    copy(other);
    return *this;
}

void IPv4OptionNop::copy(const IPv4OptionNop& other)
{
}

void IPv4OptionNop::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inet::IPv4Option&)*this);
}

void IPv4OptionNop::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inet::IPv4Option&)*this);
}

class IPv4OptionNopDescriptor : public cClassDescriptor
{
  public:
    IPv4OptionNopDescriptor();
    virtual ~IPv4OptionNopDescriptor();

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

Register_ClassDescriptor(IPv4OptionNopDescriptor);

IPv4OptionNopDescriptor::IPv4OptionNopDescriptor() : cClassDescriptor("inet::IPv4OptionNop", "inet::IPv4Option")
{
}

IPv4OptionNopDescriptor::~IPv4OptionNopDescriptor()
{
}

bool IPv4OptionNopDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4OptionNop *>(obj)!=NULL;
}

const char *IPv4OptionNopDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4OptionNopDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int IPv4OptionNopDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *IPv4OptionNopDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int IPv4OptionNopDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4OptionNopDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *IPv4OptionNopDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv4OptionNopDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionNop *pp = (IPv4OptionNop *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv4OptionNopDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionNop *pp = (IPv4OptionNop *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool IPv4OptionNopDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionNop *pp = (IPv4OptionNop *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv4OptionNopDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *IPv4OptionNopDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionNop *pp = (IPv4OptionNop *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

IPv4OptionEnd::IPv4OptionEnd() : ::inet::IPv4Option()
{
    this->setType(IPOPTION_END_OF_OPTIONS);
    this->setLength(1);
}

IPv4OptionEnd::IPv4OptionEnd(const IPv4OptionEnd& other) : ::inet::IPv4Option(other)
{
    copy(other);
}

IPv4OptionEnd::~IPv4OptionEnd()
{
}

IPv4OptionEnd& IPv4OptionEnd::operator=(const IPv4OptionEnd& other)
{
    if (this==&other) return *this;
    ::inet::IPv4Option::operator=(other);
    copy(other);
    return *this;
}

void IPv4OptionEnd::copy(const IPv4OptionEnd& other)
{
}

void IPv4OptionEnd::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inet::IPv4Option&)*this);
}

void IPv4OptionEnd::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inet::IPv4Option&)*this);
}

class IPv4OptionEndDescriptor : public cClassDescriptor
{
  public:
    IPv4OptionEndDescriptor();
    virtual ~IPv4OptionEndDescriptor();

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

Register_ClassDescriptor(IPv4OptionEndDescriptor);

IPv4OptionEndDescriptor::IPv4OptionEndDescriptor() : cClassDescriptor("inet::IPv4OptionEnd", "inet::IPv4Option")
{
}

IPv4OptionEndDescriptor::~IPv4OptionEndDescriptor()
{
}

bool IPv4OptionEndDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4OptionEnd *>(obj)!=NULL;
}

const char *IPv4OptionEndDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4OptionEndDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int IPv4OptionEndDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *IPv4OptionEndDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int IPv4OptionEndDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4OptionEndDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *IPv4OptionEndDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv4OptionEndDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionEnd *pp = (IPv4OptionEnd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv4OptionEndDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionEnd *pp = (IPv4OptionEnd *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool IPv4OptionEndDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionEnd *pp = (IPv4OptionEnd *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *IPv4OptionEndDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *IPv4OptionEndDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionEnd *pp = (IPv4OptionEnd *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

IPv4OptionRecordRoute::IPv4OptionRecordRoute() : ::inet::IPv4Option()
{
    this->nextAddressIdx_var = 0;
    recordAddress_arraysize = 0;
    this->recordAddress_var = 0;
}

IPv4OptionRecordRoute::IPv4OptionRecordRoute(const IPv4OptionRecordRoute& other) : ::inet::IPv4Option(other)
{
    recordAddress_arraysize = 0;
    this->recordAddress_var = 0;
    copy(other);
}

IPv4OptionRecordRoute::~IPv4OptionRecordRoute()
{
    delete [] recordAddress_var;
}

IPv4OptionRecordRoute& IPv4OptionRecordRoute::operator=(const IPv4OptionRecordRoute& other)
{
    if (this==&other) return *this;
    ::inet::IPv4Option::operator=(other);
    copy(other);
    return *this;
}

void IPv4OptionRecordRoute::copy(const IPv4OptionRecordRoute& other)
{
    this->nextAddressIdx_var = other.nextAddressIdx_var;
    delete [] this->recordAddress_var;
    this->recordAddress_var = (other.recordAddress_arraysize==0) ? NULL : new IPv4Address[other.recordAddress_arraysize];
    recordAddress_arraysize = other.recordAddress_arraysize;
    for (unsigned int i=0; i<recordAddress_arraysize; i++)
        this->recordAddress_var[i] = other.recordAddress_var[i];
}

void IPv4OptionRecordRoute::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inet::IPv4Option&)*this);
    doPacking(b,this->nextAddressIdx_var);
    b->pack(recordAddress_arraysize);
    doPacking(b,this->recordAddress_var,recordAddress_arraysize);
}

void IPv4OptionRecordRoute::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inet::IPv4Option&)*this);
    doUnpacking(b,this->nextAddressIdx_var);
    delete [] this->recordAddress_var;
    b->unpack(recordAddress_arraysize);
    if (recordAddress_arraysize==0) {
        this->recordAddress_var = 0;
    } else {
        this->recordAddress_var = new IPv4Address[recordAddress_arraysize];
        doUnpacking(b,this->recordAddress_var,recordAddress_arraysize);
    }
}

short IPv4OptionRecordRoute::getNextAddressIdx() const
{
    return nextAddressIdx_var;
}

void IPv4OptionRecordRoute::setNextAddressIdx(short nextAddressIdx)
{
    this->nextAddressIdx_var = nextAddressIdx;
}

void IPv4OptionRecordRoute::setRecordAddressArraySize(unsigned int size)
{
    IPv4Address *recordAddress_var2 = (size==0) ? NULL : new IPv4Address[size];
    unsigned int sz = recordAddress_arraysize < size ? recordAddress_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        recordAddress_var2[i] = this->recordAddress_var[i];
    recordAddress_arraysize = size;
    delete [] this->recordAddress_var;
    this->recordAddress_var = recordAddress_var2;
}

unsigned int IPv4OptionRecordRoute::getRecordAddressArraySize() const
{
    return recordAddress_arraysize;
}

IPv4Address& IPv4OptionRecordRoute::getRecordAddress(unsigned int k)
{
    if (k>=recordAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", recordAddress_arraysize, k);
    return recordAddress_var[k];
}

void IPv4OptionRecordRoute::setRecordAddress(unsigned int k, const IPv4Address& recordAddress)
{
    if (k>=recordAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", recordAddress_arraysize, k);
    this->recordAddress_var[k] = recordAddress;
}

class IPv4OptionRecordRouteDescriptor : public cClassDescriptor
{
  public:
    IPv4OptionRecordRouteDescriptor();
    virtual ~IPv4OptionRecordRouteDescriptor();

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

Register_ClassDescriptor(IPv4OptionRecordRouteDescriptor);

IPv4OptionRecordRouteDescriptor::IPv4OptionRecordRouteDescriptor() : cClassDescriptor("inet::IPv4OptionRecordRoute", "inet::IPv4Option")
{
}

IPv4OptionRecordRouteDescriptor::~IPv4OptionRecordRouteDescriptor()
{
}

bool IPv4OptionRecordRouteDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4OptionRecordRoute *>(obj)!=NULL;
}

const char *IPv4OptionRecordRouteDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4OptionRecordRouteDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int IPv4OptionRecordRouteDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *IPv4OptionRecordRouteDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nextAddressIdx",
        "recordAddress",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int IPv4OptionRecordRouteDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextAddressIdx")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "recordAddress")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4OptionRecordRouteDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "IPv4Address",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *IPv4OptionRecordRouteDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv4OptionRecordRouteDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionRecordRoute *pp = (IPv4OptionRecordRoute *)object; (void)pp;
    switch (field) {
        case 1: return pp->getRecordAddressArraySize();
        default: return 0;
    }
}

std::string IPv4OptionRecordRouteDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionRecordRoute *pp = (IPv4OptionRecordRoute *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getNextAddressIdx());
        case 1: {std::stringstream out; out << pp->getRecordAddress(i); return out.str();}
        default: return "";
    }
}

bool IPv4OptionRecordRouteDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionRecordRoute *pp = (IPv4OptionRecordRoute *)object; (void)pp;
    switch (field) {
        case 0: pp->setNextAddressIdx(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv4OptionRecordRouteDescriptor::getFieldStructName(void *object, int field) const
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

void *IPv4OptionRecordRouteDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionRecordRoute *pp = (IPv4OptionRecordRoute *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getRecordAddress(i)); break;
        default: return NULL;
    }
}

IPv4OptionTimestamp::IPv4OptionTimestamp() : ::inet::IPv4Option()
{
    this->setType(IPOPTION_TIMESTAMP);

    this->flag_var = 0;
    this->overflow_var = 0;
    this->nextIdx_var = 0;
    recordAddress_arraysize = 0;
    this->recordAddress_var = 0;
    recordTimestamp_arraysize = 0;
    this->recordTimestamp_var = 0;
}

IPv4OptionTimestamp::IPv4OptionTimestamp(const IPv4OptionTimestamp& other) : ::inet::IPv4Option(other)
{
    recordAddress_arraysize = 0;
    this->recordAddress_var = 0;
    recordTimestamp_arraysize = 0;
    this->recordTimestamp_var = 0;
    copy(other);
}

IPv4OptionTimestamp::~IPv4OptionTimestamp()
{
    delete [] recordAddress_var;
    delete [] recordTimestamp_var;
}

IPv4OptionTimestamp& IPv4OptionTimestamp::operator=(const IPv4OptionTimestamp& other)
{
    if (this==&other) return *this;
    ::inet::IPv4Option::operator=(other);
    copy(other);
    return *this;
}

void IPv4OptionTimestamp::copy(const IPv4OptionTimestamp& other)
{
    this->flag_var = other.flag_var;
    this->overflow_var = other.overflow_var;
    this->nextIdx_var = other.nextIdx_var;
    delete [] this->recordAddress_var;
    this->recordAddress_var = (other.recordAddress_arraysize==0) ? NULL : new IPv4Address[other.recordAddress_arraysize];
    recordAddress_arraysize = other.recordAddress_arraysize;
    for (unsigned int i=0; i<recordAddress_arraysize; i++)
        this->recordAddress_var[i] = other.recordAddress_var[i];
    delete [] this->recordTimestamp_var;
    this->recordTimestamp_var = (other.recordTimestamp_arraysize==0) ? NULL : new simtime_t[other.recordTimestamp_arraysize];
    recordTimestamp_arraysize = other.recordTimestamp_arraysize;
    for (unsigned int i=0; i<recordTimestamp_arraysize; i++)
        this->recordTimestamp_var[i] = other.recordTimestamp_var[i];
}

void IPv4OptionTimestamp::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inet::IPv4Option&)*this);
    doPacking(b,this->flag_var);
    doPacking(b,this->overflow_var);
    doPacking(b,this->nextIdx_var);
    b->pack(recordAddress_arraysize);
    doPacking(b,this->recordAddress_var,recordAddress_arraysize);
    b->pack(recordTimestamp_arraysize);
    doPacking(b,this->recordTimestamp_var,recordTimestamp_arraysize);
}

void IPv4OptionTimestamp::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inet::IPv4Option&)*this);
    doUnpacking(b,this->flag_var);
    doUnpacking(b,this->overflow_var);
    doUnpacking(b,this->nextIdx_var);
    delete [] this->recordAddress_var;
    b->unpack(recordAddress_arraysize);
    if (recordAddress_arraysize==0) {
        this->recordAddress_var = 0;
    } else {
        this->recordAddress_var = new IPv4Address[recordAddress_arraysize];
        doUnpacking(b,this->recordAddress_var,recordAddress_arraysize);
    }
    delete [] this->recordTimestamp_var;
    b->unpack(recordTimestamp_arraysize);
    if (recordTimestamp_arraysize==0) {
        this->recordTimestamp_var = 0;
    } else {
        this->recordTimestamp_var = new simtime_t[recordTimestamp_arraysize];
        doUnpacking(b,this->recordTimestamp_var,recordTimestamp_arraysize);
    }
}

int IPv4OptionTimestamp::getFlag() const
{
    return flag_var;
}

void IPv4OptionTimestamp::setFlag(int flag)
{
    this->flag_var = flag;
}

short IPv4OptionTimestamp::getOverflow() const
{
    return overflow_var;
}

void IPv4OptionTimestamp::setOverflow(short overflow)
{
    this->overflow_var = overflow;
}

short IPv4OptionTimestamp::getNextIdx() const
{
    return nextIdx_var;
}

void IPv4OptionTimestamp::setNextIdx(short nextIdx)
{
    this->nextIdx_var = nextIdx;
}

void IPv4OptionTimestamp::setRecordAddressArraySize(unsigned int size)
{
    IPv4Address *recordAddress_var2 = (size==0) ? NULL : new IPv4Address[size];
    unsigned int sz = recordAddress_arraysize < size ? recordAddress_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        recordAddress_var2[i] = this->recordAddress_var[i];
    recordAddress_arraysize = size;
    delete [] this->recordAddress_var;
    this->recordAddress_var = recordAddress_var2;
}

unsigned int IPv4OptionTimestamp::getRecordAddressArraySize() const
{
    return recordAddress_arraysize;
}

IPv4Address& IPv4OptionTimestamp::getRecordAddress(unsigned int k)
{
    if (k>=recordAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", recordAddress_arraysize, k);
    return recordAddress_var[k];
}

void IPv4OptionTimestamp::setRecordAddress(unsigned int k, const IPv4Address& recordAddress)
{
    if (k>=recordAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", recordAddress_arraysize, k);
    this->recordAddress_var[k] = recordAddress;
}

void IPv4OptionTimestamp::setRecordTimestampArraySize(unsigned int size)
{
    simtime_t *recordTimestamp_var2 = (size==0) ? NULL : new simtime_t[size];
    unsigned int sz = recordTimestamp_arraysize < size ? recordTimestamp_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        recordTimestamp_var2[i] = this->recordTimestamp_var[i];
    for (unsigned int i=sz; i<size; i++)
        recordTimestamp_var2[i] = 0;
    recordTimestamp_arraysize = size;
    delete [] this->recordTimestamp_var;
    this->recordTimestamp_var = recordTimestamp_var2;
}

unsigned int IPv4OptionTimestamp::getRecordTimestampArraySize() const
{
    return recordTimestamp_arraysize;
}

simtime_t IPv4OptionTimestamp::getRecordTimestamp(unsigned int k) const
{
    if (k>=recordTimestamp_arraysize) throw cRuntimeError("Array of size %d indexed by %d", recordTimestamp_arraysize, k);
    return recordTimestamp_var[k];
}

void IPv4OptionTimestamp::setRecordTimestamp(unsigned int k, simtime_t recordTimestamp)
{
    if (k>=recordTimestamp_arraysize) throw cRuntimeError("Array of size %d indexed by %d", recordTimestamp_arraysize, k);
    this->recordTimestamp_var[k] = recordTimestamp;
}

class IPv4OptionTimestampDescriptor : public cClassDescriptor
{
  public:
    IPv4OptionTimestampDescriptor();
    virtual ~IPv4OptionTimestampDescriptor();

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

Register_ClassDescriptor(IPv4OptionTimestampDescriptor);

IPv4OptionTimestampDescriptor::IPv4OptionTimestampDescriptor() : cClassDescriptor("inet::IPv4OptionTimestamp", "inet::IPv4Option")
{
}

IPv4OptionTimestampDescriptor::~IPv4OptionTimestampDescriptor()
{
}

bool IPv4OptionTimestampDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4OptionTimestamp *>(obj)!=NULL;
}

const char *IPv4OptionTimestampDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4OptionTimestampDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int IPv4OptionTimestampDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *IPv4OptionTimestampDescriptor::getFieldName(void *object, int field) const
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
        "nextIdx",
        "recordAddress",
        "recordTimestamp",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int IPv4OptionTimestampDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "flag")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "overflow")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextIdx")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "recordAddress")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "recordTimestamp")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4OptionTimestampDescriptor::getFieldTypeString(void *object, int field) const
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

const char *IPv4OptionTimestampDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::TimestampFlag";
            return NULL;
        default: return NULL;
    }
}

int IPv4OptionTimestampDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionTimestamp *pp = (IPv4OptionTimestamp *)object; (void)pp;
    switch (field) {
        case 3: return pp->getRecordAddressArraySize();
        case 4: return pp->getRecordTimestampArraySize();
        default: return 0;
    }
}

std::string IPv4OptionTimestampDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionTimestamp *pp = (IPv4OptionTimestamp *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getFlag());
        case 1: return long2string(pp->getOverflow());
        case 2: return long2string(pp->getNextIdx());
        case 3: {std::stringstream out; out << pp->getRecordAddress(i); return out.str();}
        case 4: return double2string(pp->getRecordTimestamp(i));
        default: return "";
    }
}

bool IPv4OptionTimestampDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionTimestamp *pp = (IPv4OptionTimestamp *)object; (void)pp;
    switch (field) {
        case 0: pp->setFlag(string2long(value)); return true;
        case 1: pp->setOverflow(string2long(value)); return true;
        case 2: pp->setNextIdx(string2long(value)); return true;
        case 4: pp->setRecordTimestamp(i,string2double(value)); return true;
        default: return false;
    }
}

const char *IPv4OptionTimestampDescriptor::getFieldStructName(void *object, int field) const
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

void *IPv4OptionTimestampDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionTimestamp *pp = (IPv4OptionTimestamp *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getRecordAddress(i)); break;
        default: return NULL;
    }
}

IPv4OptionStreamId::IPv4OptionStreamId() : ::inet::IPv4Option()
{
    this->setType(IPOPTION_STREAM_ID);
    this->setLength(4);

    this->streamId_var = 0;
}

IPv4OptionStreamId::IPv4OptionStreamId(const IPv4OptionStreamId& other) : ::inet::IPv4Option(other)
{
    copy(other);
}

IPv4OptionStreamId::~IPv4OptionStreamId()
{
}

IPv4OptionStreamId& IPv4OptionStreamId::operator=(const IPv4OptionStreamId& other)
{
    if (this==&other) return *this;
    ::inet::IPv4Option::operator=(other);
    copy(other);
    return *this;
}

void IPv4OptionStreamId::copy(const IPv4OptionStreamId& other)
{
    this->streamId_var = other.streamId_var;
}

void IPv4OptionStreamId::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inet::IPv4Option&)*this);
    doPacking(b,this->streamId_var);
}

void IPv4OptionStreamId::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inet::IPv4Option&)*this);
    doUnpacking(b,this->streamId_var);
}

short IPv4OptionStreamId::getStreamId() const
{
    return streamId_var;
}

void IPv4OptionStreamId::setStreamId(short streamId)
{
    this->streamId_var = streamId;
}

class IPv4OptionStreamIdDescriptor : public cClassDescriptor
{
  public:
    IPv4OptionStreamIdDescriptor();
    virtual ~IPv4OptionStreamIdDescriptor();

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

Register_ClassDescriptor(IPv4OptionStreamIdDescriptor);

IPv4OptionStreamIdDescriptor::IPv4OptionStreamIdDescriptor() : cClassDescriptor("inet::IPv4OptionStreamId", "inet::IPv4Option")
{
}

IPv4OptionStreamIdDescriptor::~IPv4OptionStreamIdDescriptor()
{
}

bool IPv4OptionStreamIdDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4OptionStreamId *>(obj)!=NULL;
}

const char *IPv4OptionStreamIdDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4OptionStreamIdDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IPv4OptionStreamIdDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *IPv4OptionStreamIdDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "streamId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IPv4OptionStreamIdDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "streamId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4OptionStreamIdDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IPv4OptionStreamIdDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv4OptionStreamIdDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionStreamId *pp = (IPv4OptionStreamId *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv4OptionStreamIdDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionStreamId *pp = (IPv4OptionStreamId *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getStreamId());
        default: return "";
    }
}

bool IPv4OptionStreamIdDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionStreamId *pp = (IPv4OptionStreamId *)object; (void)pp;
    switch (field) {
        case 0: pp->setStreamId(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv4OptionStreamIdDescriptor::getFieldStructName(void *object, int field) const
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

void *IPv4OptionStreamIdDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionStreamId *pp = (IPv4OptionStreamId *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

IPv4OptionUnknown::IPv4OptionUnknown() : ::inet::IPv4Option()
{
    bytes_arraysize = 0;
    this->bytes_var = 0;
}

IPv4OptionUnknown::IPv4OptionUnknown(const IPv4OptionUnknown& other) : ::inet::IPv4Option(other)
{
    bytes_arraysize = 0;
    this->bytes_var = 0;
    copy(other);
}

IPv4OptionUnknown::~IPv4OptionUnknown()
{
    delete [] bytes_var;
}

IPv4OptionUnknown& IPv4OptionUnknown::operator=(const IPv4OptionUnknown& other)
{
    if (this==&other) return *this;
    ::inet::IPv4Option::operator=(other);
    copy(other);
    return *this;
}

void IPv4OptionUnknown::copy(const IPv4OptionUnknown& other)
{
    delete [] this->bytes_var;
    this->bytes_var = (other.bytes_arraysize==0) ? NULL : new uint8_t[other.bytes_arraysize];
    bytes_arraysize = other.bytes_arraysize;
    for (unsigned int i=0; i<bytes_arraysize; i++)
        this->bytes_var[i] = other.bytes_var[i];
}

void IPv4OptionUnknown::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inet::IPv4Option&)*this);
    b->pack(bytes_arraysize);
    doPacking(b,this->bytes_var,bytes_arraysize);
}

void IPv4OptionUnknown::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inet::IPv4Option&)*this);
    delete [] this->bytes_var;
    b->unpack(bytes_arraysize);
    if (bytes_arraysize==0) {
        this->bytes_var = 0;
    } else {
        this->bytes_var = new uint8_t[bytes_arraysize];
        doUnpacking(b,this->bytes_var,bytes_arraysize);
    }
}

void IPv4OptionUnknown::setBytesArraySize(unsigned int size)
{
    uint8_t *bytes_var2 = (size==0) ? NULL : new uint8_t[size];
    unsigned int sz = bytes_arraysize < size ? bytes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        bytes_var2[i] = this->bytes_var[i];
    for (unsigned int i=sz; i<size; i++)
        bytes_var2[i] = 0;
    bytes_arraysize = size;
    delete [] this->bytes_var;
    this->bytes_var = bytes_var2;
}

unsigned int IPv4OptionUnknown::getBytesArraySize() const
{
    return bytes_arraysize;
}

uint8_t IPv4OptionUnknown::getBytes(unsigned int k) const
{
    if (k>=bytes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", bytes_arraysize, k);
    return bytes_var[k];
}

void IPv4OptionUnknown::setBytes(unsigned int k, uint8_t bytes)
{
    if (k>=bytes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", bytes_arraysize, k);
    this->bytes_var[k] = bytes;
}

class IPv4OptionUnknownDescriptor : public cClassDescriptor
{
  public:
    IPv4OptionUnknownDescriptor();
    virtual ~IPv4OptionUnknownDescriptor();

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

Register_ClassDescriptor(IPv4OptionUnknownDescriptor);

IPv4OptionUnknownDescriptor::IPv4OptionUnknownDescriptor() : cClassDescriptor("inet::IPv4OptionUnknown", "inet::IPv4Option")
{
}

IPv4OptionUnknownDescriptor::~IPv4OptionUnknownDescriptor()
{
}

bool IPv4OptionUnknownDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4OptionUnknown *>(obj)!=NULL;
}

const char *IPv4OptionUnknownDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4OptionUnknownDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int IPv4OptionUnknownDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *IPv4OptionUnknownDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "bytes",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int IPv4OptionUnknownDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bytes")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4OptionUnknownDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *IPv4OptionUnknownDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv4OptionUnknownDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionUnknown *pp = (IPv4OptionUnknown *)object; (void)pp;
    switch (field) {
        case 0: return pp->getBytesArraySize();
        default: return 0;
    }
}

std::string IPv4OptionUnknownDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionUnknown *pp = (IPv4OptionUnknown *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getBytes(i));
        default: return "";
    }
}

bool IPv4OptionUnknownDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionUnknown *pp = (IPv4OptionUnknown *)object; (void)pp;
    switch (field) {
        case 0: pp->setBytes(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *IPv4OptionUnknownDescriptor::getFieldStructName(void *object, int field) const
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

void *IPv4OptionUnknownDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4OptionUnknown *pp = (IPv4OptionUnknown *)object; (void)pp;
    switch (field) {
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
    this->totalLengthField_var = -1;
    this->typeOfService_var = 0;
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
    this->totalLengthField_var = other.totalLengthField_var;
    this->typeOfService_var = other.typeOfService_var;
    this->options_var = other.options_var;
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
    doPacking(b,this->totalLengthField_var);
    doPacking(b,this->typeOfService_var);
    // field diffServCodePoint is abstract -- please do packing in customized class
    // field explicitCongestionNotification is abstract -- please do packing in customized class
    doPacking(b,this->options_var);
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
    doUnpacking(b,this->totalLengthField_var);
    doUnpacking(b,this->typeOfService_var);
    // field diffServCodePoint is abstract -- please do unpacking in customized class
    // field explicitCongestionNotification is abstract -- please do unpacking in customized class
    doUnpacking(b,this->options_var);
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

int IPv4Datagram_Base::getTotalLengthField() const
{
    return totalLengthField_var;
}

void IPv4Datagram_Base::setTotalLengthField(int totalLengthField)
{
    this->totalLengthField_var = totalLengthField;
}

unsigned char IPv4Datagram_Base::getTypeOfService() const
{
    return typeOfService_var;
}

void IPv4Datagram_Base::setTypeOfService(unsigned char typeOfService)
{
    this->typeOfService_var = typeOfService;
}

TLVOptions& IPv4Datagram_Base::getOptions()
{
    return options_var;
}

void IPv4Datagram_Base::setOptions(const TLVOptions& options)
{
    this->options_var = options;
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

IPv4DatagramDescriptor::IPv4DatagramDescriptor() : cClassDescriptor("inet::IPv4Datagram", "cPacket")
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
    if (!strcmp(propertyname,"fieldNameSuffix")) return "_var";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4DatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 15+basedesc->getFieldCount(object) : 15;
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<15) ? fieldTypeFlags[field] : 0;
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
        "totalLengthField",
        "typeOfService",
        "diffServCodePoint",
        "explicitCongestionNotification",
        "options",
    };
    return (field>=0 && field<15) ? fieldNames[field] : NULL;
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
    if (fieldName[0]=='t' && strcmp(fieldName, "totalLengthField")==0) return base+10;
    if (fieldName[0]=='t' && strcmp(fieldName, "typeOfService")==0) return base+11;
    if (fieldName[0]=='d' && strcmp(fieldName, "diffServCodePoint")==0) return base+12;
    if (fieldName[0]=='e' && strcmp(fieldName, "explicitCongestionNotification")==0) return base+13;
    if (fieldName[0]=='o' && strcmp(fieldName, "options")==0) return base+14;
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
        "int",
        "unsigned char",
        "int",
        "int",
        "TLVOptions",
    };
    return (field>=0 && field<15) ? fieldTypeStrings[field] : NULL;
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
            if (!strcmp(propertyname,"enum")) return "inet::IPProtocolId";
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
        case 10: return long2string(pp->getTotalLengthField());
        case 11: return ulong2string(pp->getTypeOfService());
        case 12: return long2string(pp->getDiffServCodePoint());
        case 13: return long2string(pp->getExplicitCongestionNotification());
        case 14: {std::stringstream out; out << pp->getOptions(); return out.str();}
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
        case 10: pp->setTotalLengthField(string2long(value)); return true;
        case 11: pp->setTypeOfService(string2ulong(value)); return true;
        case 12: pp->setDiffServCodePoint(string2long(value)); return true;
        case 13: pp->setExplicitCongestionNotification(string2long(value)); return true;
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
        case 14: return opp_typename(typeid(TLVOptions));
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
        case 14: return (void *)(&pp->getOptions()); break;
        default: return NULL;
    }
}

} // namespace inet

