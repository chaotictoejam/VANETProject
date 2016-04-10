//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/routing/dymo/DYMO.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DYMO_m.h"

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



namespace DYMO {

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

Register_Class(AddressBlock);

AddressBlock::AddressBlock() : ::cObject()
{
    this->prefixLength_var = 0;
    this->hasValidityTime_var = 0;
    this->validityTime_var = 0;
    this->hasMetric_var = 0;
    this->metric_var = 0;
    this->hasMetricType_var = 0;
    this->hasSequenceNumber_var = 0;
}

AddressBlock::AddressBlock(const AddressBlock& other) : ::cObject(other)
{
    copy(other);
}

AddressBlock::~AddressBlock()
{
}

AddressBlock& AddressBlock::operator=(const AddressBlock& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void AddressBlock::copy(const AddressBlock& other)
{
    this->address_var = other.address_var;
    this->prefixLength_var = other.prefixLength_var;
    this->hasValidityTime_var = other.hasValidityTime_var;
    this->validityTime_var = other.validityTime_var;
    this->hasMetric_var = other.hasMetric_var;
    this->metric_var = other.metric_var;
    this->hasMetricType_var = other.hasMetricType_var;
    this->metricType_var = other.metricType_var;
    this->hasSequenceNumber_var = other.hasSequenceNumber_var;
    this->sequenceNumber_var = other.sequenceNumber_var;
}

void AddressBlock::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->address_var);
    doPacking(b,this->prefixLength_var);
    doPacking(b,this->hasValidityTime_var);
    doPacking(b,this->validityTime_var);
    doPacking(b,this->hasMetric_var);
    doPacking(b,this->metric_var);
    doPacking(b,this->hasMetricType_var);
    doPacking(b,this->metricType_var);
    doPacking(b,this->hasSequenceNumber_var);
    doPacking(b,this->sequenceNumber_var);
}

void AddressBlock::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->prefixLength_var);
    doUnpacking(b,this->hasValidityTime_var);
    doUnpacking(b,this->validityTime_var);
    doUnpacking(b,this->hasMetric_var);
    doUnpacking(b,this->metric_var);
    doUnpacking(b,this->hasMetricType_var);
    doUnpacking(b,this->metricType_var);
    doUnpacking(b,this->hasSequenceNumber_var);
    doUnpacking(b,this->sequenceNumber_var);
}

IPv4Address& AddressBlock::getAddress()
{
    return address_var;
}

void AddressBlock::setAddress(const IPv4Address& address)
{
    this->address_var = address;
}

int AddressBlock::getPrefixLength() const
{
    return prefixLength_var;
}

void AddressBlock::setPrefixLength(int prefixLength)
{
    this->prefixLength_var = prefixLength;
}

bool AddressBlock::getHasValidityTime() const
{
    return hasValidityTime_var;
}

void AddressBlock::setHasValidityTime(bool hasValidityTime)
{
    this->hasValidityTime_var = hasValidityTime;
}

simtime_t AddressBlock::getValidityTime() const
{
    return validityTime_var;
}

void AddressBlock::setValidityTime(simtime_t validityTime)
{
    this->validityTime_var = validityTime;
}

bool AddressBlock::getHasMetric() const
{
    return hasMetric_var;
}

void AddressBlock::setHasMetric(bool hasMetric)
{
    this->hasMetric_var = hasMetric;
}

double AddressBlock::getMetric() const
{
    return metric_var;
}

void AddressBlock::setMetric(double metric)
{
    this->metric_var = metric;
}

bool AddressBlock::getHasMetricType() const
{
    return hasMetricType_var;
}

void AddressBlock::setHasMetricType(bool hasMetricType)
{
    this->hasMetricType_var = hasMetricType;
}

DYMOMetricType& AddressBlock::getMetricType()
{
    return metricType_var;
}

void AddressBlock::setMetricType(const DYMOMetricType& metricType)
{
    this->metricType_var = metricType;
}

bool AddressBlock::getHasSequenceNumber() const
{
    return hasSequenceNumber_var;
}

void AddressBlock::setHasSequenceNumber(bool hasSequenceNumber)
{
    this->hasSequenceNumber_var = hasSequenceNumber;
}

DYMOSequenceNumber& AddressBlock::getSequenceNumber()
{
    return sequenceNumber_var;
}

void AddressBlock::setSequenceNumber(const DYMOSequenceNumber& sequenceNumber)
{
    this->sequenceNumber_var = sequenceNumber;
}

class AddressBlockDescriptor : public cClassDescriptor
{
  public:
    AddressBlockDescriptor();
    virtual ~AddressBlockDescriptor();

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

Register_ClassDescriptor(AddressBlockDescriptor);

AddressBlockDescriptor::AddressBlockDescriptor() : cClassDescriptor("DYMO::AddressBlock", "cObject")
{
}

AddressBlockDescriptor::~AddressBlockDescriptor()
{
}

bool AddressBlockDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AddressBlock *>(obj)!=NULL;
}

const char *AddressBlockDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AddressBlockDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 10+basedesc->getFieldCount(object) : 10;
}

unsigned int AddressBlockDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<10) ? fieldTypeFlags[field] : 0;
}

const char *AddressBlockDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "address",
        "prefixLength",
        "hasValidityTime",
        "validityTime",
        "hasMetric",
        "metric",
        "hasMetricType",
        "metricType",
        "hasSequenceNumber",
        "sequenceNumber",
    };
    return (field>=0 && field<10) ? fieldNames[field] : NULL;
}

int AddressBlockDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "address")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefixLength")==0) return base+1;
    if (fieldName[0]=='h' && strcmp(fieldName, "hasValidityTime")==0) return base+2;
    if (fieldName[0]=='v' && strcmp(fieldName, "validityTime")==0) return base+3;
    if (fieldName[0]=='h' && strcmp(fieldName, "hasMetric")==0) return base+4;
    if (fieldName[0]=='m' && strcmp(fieldName, "metric")==0) return base+5;
    if (fieldName[0]=='h' && strcmp(fieldName, "hasMetricType")==0) return base+6;
    if (fieldName[0]=='m' && strcmp(fieldName, "metricType")==0) return base+7;
    if (fieldName[0]=='h' && strcmp(fieldName, "hasSequenceNumber")==0) return base+8;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequenceNumber")==0) return base+9;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AddressBlockDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "int",
        "bool",
        "simtime_t",
        "bool",
        "double",
        "bool",
        "DYMOMetricType",
        "bool",
        "DYMOSequenceNumber",
    };
    return (field>=0 && field<10) ? fieldTypeStrings[field] : NULL;
}

const char *AddressBlockDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AddressBlockDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AddressBlock *pp = (AddressBlock *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AddressBlockDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AddressBlock *pp = (AddressBlock *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress(); return out.str();}
        case 1: return long2string(pp->getPrefixLength());
        case 2: return bool2string(pp->getHasValidityTime());
        case 3: return double2string(pp->getValidityTime());
        case 4: return bool2string(pp->getHasMetric());
        case 5: return double2string(pp->getMetric());
        case 6: return bool2string(pp->getHasMetricType());
        case 7: {std::stringstream out; out << pp->getMetricType(); return out.str();}
        case 8: return bool2string(pp->getHasSequenceNumber());
        case 9: {std::stringstream out; out << pp->getSequenceNumber(); return out.str();}
        default: return "";
    }
}

bool AddressBlockDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AddressBlock *pp = (AddressBlock *)object; (void)pp;
    switch (field) {
        case 1: pp->setPrefixLength(string2long(value)); return true;
        case 2: pp->setHasValidityTime(string2bool(value)); return true;
        case 3: pp->setValidityTime(string2double(value)); return true;
        case 4: pp->setHasMetric(string2bool(value)); return true;
        case 5: pp->setMetric(string2double(value)); return true;
        case 6: pp->setHasMetricType(string2bool(value)); return true;
        case 8: pp->setHasSequenceNumber(string2bool(value)); return true;
        default: return false;
    }
}

const char *AddressBlockDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        case 7: return opp_typename(typeid(DYMOMetricType));
        case 9: return opp_typename(typeid(DYMOSequenceNumber));
        default: return NULL;
    };
}

void *AddressBlockDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AddressBlock *pp = (AddressBlock *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress()); break;
        case 7: return (void *)(&pp->getMetricType()); break;
        case 9: return (void *)(&pp->getSequenceNumber()); break;
        default: return NULL;
    }
}

Register_Class(RREQTimer);

RREQTimer::RREQTimer(const char *name, int kind) : ::cMessage(name,kind)
{
}

RREQTimer::RREQTimer(const RREQTimer& other) : ::cMessage(other)
{
    copy(other);
}

RREQTimer::~RREQTimer()
{
}

RREQTimer& RREQTimer::operator=(const RREQTimer& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void RREQTimer::copy(const RREQTimer& other)
{
    this->target_var = other.target_var;
}

void RREQTimer::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->target_var);
}

void RREQTimer::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->target_var);
}

IPv4Address& RREQTimer::getTarget()
{
    return target_var;
}

void RREQTimer::setTarget(const IPv4Address& target)
{
    this->target_var = target;
}

class RREQTimerDescriptor : public cClassDescriptor
{
  public:
    RREQTimerDescriptor();
    virtual ~RREQTimerDescriptor();

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

Register_ClassDescriptor(RREQTimerDescriptor);

RREQTimerDescriptor::RREQTimerDescriptor() : cClassDescriptor("DYMO::RREQTimer", "cMessage")
{
}

RREQTimerDescriptor::~RREQTimerDescriptor()
{
}

bool RREQTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RREQTimer *>(obj)!=NULL;
}

const char *RREQTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RREQTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RREQTimerDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RREQTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "target",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RREQTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "target")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RREQTimerDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RREQTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RREQTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RREQTimer *pp = (RREQTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RREQTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RREQTimer *pp = (RREQTimer *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getTarget(); return out.str();}
        default: return "";
    }
}

bool RREQTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RREQTimer *pp = (RREQTimer *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RREQTimerDescriptor::getFieldStructName(void *object, int field) const
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

void *RREQTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RREQTimer *pp = (RREQTimer *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getTarget()); break;
        default: return NULL;
    }
}

Register_Class(RREQWaitRREPTimer);

RREQWaitRREPTimer::RREQWaitRREPTimer(const char *name, int kind) : ::DYMO::RREQTimer(name,kind)
{
    this->retryCount_var = 0;
}

RREQWaitRREPTimer::RREQWaitRREPTimer(const RREQWaitRREPTimer& other) : ::DYMO::RREQTimer(other)
{
    copy(other);
}

RREQWaitRREPTimer::~RREQWaitRREPTimer()
{
}

RREQWaitRREPTimer& RREQWaitRREPTimer::operator=(const RREQWaitRREPTimer& other)
{
    if (this==&other) return *this;
    ::DYMO::RREQTimer::operator=(other);
    copy(other);
    return *this;
}

void RREQWaitRREPTimer::copy(const RREQWaitRREPTimer& other)
{
    this->retryCount_var = other.retryCount_var;
}

void RREQWaitRREPTimer::parsimPack(cCommBuffer *b)
{
    ::DYMO::RREQTimer::parsimPack(b);
    doPacking(b,this->retryCount_var);
}

void RREQWaitRREPTimer::parsimUnpack(cCommBuffer *b)
{
    ::DYMO::RREQTimer::parsimUnpack(b);
    doUnpacking(b,this->retryCount_var);
}

int RREQWaitRREPTimer::getRetryCount() const
{
    return retryCount_var;
}

void RREQWaitRREPTimer::setRetryCount(int retryCount)
{
    this->retryCount_var = retryCount;
}

class RREQWaitRREPTimerDescriptor : public cClassDescriptor
{
  public:
    RREQWaitRREPTimerDescriptor();
    virtual ~RREQWaitRREPTimerDescriptor();

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

Register_ClassDescriptor(RREQWaitRREPTimerDescriptor);

RREQWaitRREPTimerDescriptor::RREQWaitRREPTimerDescriptor() : cClassDescriptor("DYMO::RREQWaitRREPTimer", "DYMO::RREQTimer")
{
}

RREQWaitRREPTimerDescriptor::~RREQWaitRREPTimerDescriptor()
{
}

bool RREQWaitRREPTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RREQWaitRREPTimer *>(obj)!=NULL;
}

const char *RREQWaitRREPTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RREQWaitRREPTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RREQWaitRREPTimerDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RREQWaitRREPTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "retryCount",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RREQWaitRREPTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "retryCount")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RREQWaitRREPTimerDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RREQWaitRREPTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RREQWaitRREPTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RREQWaitRREPTimer *pp = (RREQWaitRREPTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RREQWaitRREPTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RREQWaitRREPTimer *pp = (RREQWaitRREPTimer *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getRetryCount());
        default: return "";
    }
}

bool RREQWaitRREPTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RREQWaitRREPTimer *pp = (RREQWaitRREPTimer *)object; (void)pp;
    switch (field) {
        case 0: pp->setRetryCount(string2long(value)); return true;
        default: return false;
    }
}

const char *RREQWaitRREPTimerDescriptor::getFieldStructName(void *object, int field) const
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

void *RREQWaitRREPTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RREQWaitRREPTimer *pp = (RREQWaitRREPTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RREQBackoffTimer);

RREQBackoffTimer::RREQBackoffTimer(const char *name, int kind) : ::DYMO::RREQTimer(name,kind)
{
    this->retryCount_var = 0;
}

RREQBackoffTimer::RREQBackoffTimer(const RREQBackoffTimer& other) : ::DYMO::RREQTimer(other)
{
    copy(other);
}

RREQBackoffTimer::~RREQBackoffTimer()
{
}

RREQBackoffTimer& RREQBackoffTimer::operator=(const RREQBackoffTimer& other)
{
    if (this==&other) return *this;
    ::DYMO::RREQTimer::operator=(other);
    copy(other);
    return *this;
}

void RREQBackoffTimer::copy(const RREQBackoffTimer& other)
{
    this->retryCount_var = other.retryCount_var;
}

void RREQBackoffTimer::parsimPack(cCommBuffer *b)
{
    ::DYMO::RREQTimer::parsimPack(b);
    doPacking(b,this->retryCount_var);
}

void RREQBackoffTimer::parsimUnpack(cCommBuffer *b)
{
    ::DYMO::RREQTimer::parsimUnpack(b);
    doUnpacking(b,this->retryCount_var);
}

int RREQBackoffTimer::getRetryCount() const
{
    return retryCount_var;
}

void RREQBackoffTimer::setRetryCount(int retryCount)
{
    this->retryCount_var = retryCount;
}

class RREQBackoffTimerDescriptor : public cClassDescriptor
{
  public:
    RREQBackoffTimerDescriptor();
    virtual ~RREQBackoffTimerDescriptor();

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

Register_ClassDescriptor(RREQBackoffTimerDescriptor);

RREQBackoffTimerDescriptor::RREQBackoffTimerDescriptor() : cClassDescriptor("DYMO::RREQBackoffTimer", "DYMO::RREQTimer")
{
}

RREQBackoffTimerDescriptor::~RREQBackoffTimerDescriptor()
{
}

bool RREQBackoffTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RREQBackoffTimer *>(obj)!=NULL;
}

const char *RREQBackoffTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RREQBackoffTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RREQBackoffTimerDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RREQBackoffTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "retryCount",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RREQBackoffTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "retryCount")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RREQBackoffTimerDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RREQBackoffTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RREQBackoffTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RREQBackoffTimer *pp = (RREQBackoffTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RREQBackoffTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RREQBackoffTimer *pp = (RREQBackoffTimer *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getRetryCount());
        default: return "";
    }
}

bool RREQBackoffTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RREQBackoffTimer *pp = (RREQBackoffTimer *)object; (void)pp;
    switch (field) {
        case 0: pp->setRetryCount(string2long(value)); return true;
        default: return false;
    }
}

const char *RREQBackoffTimerDescriptor::getFieldStructName(void *object, int field) const
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

void *RREQBackoffTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RREQBackoffTimer *pp = (RREQBackoffTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RREQHolddownTimer);

RREQHolddownTimer::RREQHolddownTimer(const char *name, int kind) : ::DYMO::RREQTimer(name,kind)
{
}

RREQHolddownTimer::RREQHolddownTimer(const RREQHolddownTimer& other) : ::DYMO::RREQTimer(other)
{
    copy(other);
}

RREQHolddownTimer::~RREQHolddownTimer()
{
}

RREQHolddownTimer& RREQHolddownTimer::operator=(const RREQHolddownTimer& other)
{
    if (this==&other) return *this;
    ::DYMO::RREQTimer::operator=(other);
    copy(other);
    return *this;
}

void RREQHolddownTimer::copy(const RREQHolddownTimer& other)
{
}

void RREQHolddownTimer::parsimPack(cCommBuffer *b)
{
    ::DYMO::RREQTimer::parsimPack(b);
}

void RREQHolddownTimer::parsimUnpack(cCommBuffer *b)
{
    ::DYMO::RREQTimer::parsimUnpack(b);
}

class RREQHolddownTimerDescriptor : public cClassDescriptor
{
  public:
    RREQHolddownTimerDescriptor();
    virtual ~RREQHolddownTimerDescriptor();

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

Register_ClassDescriptor(RREQHolddownTimerDescriptor);

RREQHolddownTimerDescriptor::RREQHolddownTimerDescriptor() : cClassDescriptor("DYMO::RREQHolddownTimer", "DYMO::RREQTimer")
{
}

RREQHolddownTimerDescriptor::~RREQHolddownTimerDescriptor()
{
}

bool RREQHolddownTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RREQHolddownTimer *>(obj)!=NULL;
}

const char *RREQHolddownTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RREQHolddownTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RREQHolddownTimerDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RREQHolddownTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RREQHolddownTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RREQHolddownTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RREQHolddownTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RREQHolddownTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RREQHolddownTimer *pp = (RREQHolddownTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RREQHolddownTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RREQHolddownTimer *pp = (RREQHolddownTimer *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RREQHolddownTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RREQHolddownTimer *pp = (RREQHolddownTimer *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RREQHolddownTimerDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RREQHolddownTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RREQHolddownTimer *pp = (RREQHolddownTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(DYMOPacket);

DYMOPacket::DYMOPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->hopLimit_var = 0;
}

DYMOPacket::DYMOPacket(const DYMOPacket& other) : ::cPacket(other)
{
    copy(other);
}

DYMOPacket::~DYMOPacket()
{
}

DYMOPacket& DYMOPacket::operator=(const DYMOPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void DYMOPacket::copy(const DYMOPacket& other)
{
    this->hopLimit_var = other.hopLimit_var;
}

void DYMOPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->hopLimit_var);
}

void DYMOPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->hopLimit_var);
}

int DYMOPacket::getHopLimit() const
{
    return hopLimit_var;
}

void DYMOPacket::setHopLimit(int hopLimit)
{
    this->hopLimit_var = hopLimit;
}

class DYMOPacketDescriptor : public cClassDescriptor
{
  public:
    DYMOPacketDescriptor();
    virtual ~DYMOPacketDescriptor();

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

Register_ClassDescriptor(DYMOPacketDescriptor);

DYMOPacketDescriptor::DYMOPacketDescriptor() : cClassDescriptor("DYMO::DYMOPacket", "cPacket")
{
}

DYMOPacketDescriptor::~DYMOPacketDescriptor()
{
}

bool DYMOPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DYMOPacket *>(obj)!=NULL;
}

const char *DYMOPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DYMOPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int DYMOPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DYMOPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "hopLimit",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int DYMOPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopLimit")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DYMOPacketDescriptor::getFieldTypeString(void *object, int field) const
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

const char *DYMOPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DYMOPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DYMOPacket *pp = (DYMOPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DYMOPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DYMOPacket *pp = (DYMOPacket *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getHopLimit());
        default: return "";
    }
}

bool DYMOPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DYMOPacket *pp = (DYMOPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setHopLimit(string2long(value)); return true;
        default: return false;
    }
}

const char *DYMOPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *DYMOPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DYMOPacket *pp = (DYMOPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RteMsg);

RteMsg::RteMsg(const char *name, int kind) : ::DYMO::DYMOPacket(name,kind)
{
    this->hopCount_var = 0;
    addedNode_arraysize = 0;
    this->addedNode_var = 0;
}

RteMsg::RteMsg(const RteMsg& other) : ::DYMO::DYMOPacket(other)
{
    addedNode_arraysize = 0;
    this->addedNode_var = 0;
    copy(other);
}

RteMsg::~RteMsg()
{
    delete [] addedNode_var;
}

RteMsg& RteMsg::operator=(const RteMsg& other)
{
    if (this==&other) return *this;
    ::DYMO::DYMOPacket::operator=(other);
    copy(other);
    return *this;
}

void RteMsg::copy(const RteMsg& other)
{
    this->hopCount_var = other.hopCount_var;
    this->originatorNode_var = other.originatorNode_var;
    this->targetNode_var = other.targetNode_var;
    delete [] this->addedNode_var;
    this->addedNode_var = (other.addedNode_arraysize==0) ? NULL : new AddressBlock[other.addedNode_arraysize];
    addedNode_arraysize = other.addedNode_arraysize;
    for (unsigned int i=0; i<addedNode_arraysize; i++)
        this->addedNode_var[i] = other.addedNode_var[i];
}

void RteMsg::parsimPack(cCommBuffer *b)
{
    ::DYMO::DYMOPacket::parsimPack(b);
    doPacking(b,this->hopCount_var);
    doPacking(b,this->originatorNode_var);
    doPacking(b,this->targetNode_var);
    b->pack(addedNode_arraysize);
    doPacking(b,this->addedNode_var,addedNode_arraysize);
}

void RteMsg::parsimUnpack(cCommBuffer *b)
{
    ::DYMO::DYMOPacket::parsimUnpack(b);
    doUnpacking(b,this->hopCount_var);
    doUnpacking(b,this->originatorNode_var);
    doUnpacking(b,this->targetNode_var);
    delete [] this->addedNode_var;
    b->unpack(addedNode_arraysize);
    if (addedNode_arraysize==0) {
        this->addedNode_var = 0;
    } else {
        this->addedNode_var = new AddressBlock[addedNode_arraysize];
        doUnpacking(b,this->addedNode_var,addedNode_arraysize);
    }
}

int RteMsg::getHopCount() const
{
    return hopCount_var;
}

void RteMsg::setHopCount(int hopCount)
{
    this->hopCount_var = hopCount;
}

AddressBlock& RteMsg::getOriginatorNode()
{
    return originatorNode_var;
}

void RteMsg::setOriginatorNode(const AddressBlock& originatorNode)
{
    this->originatorNode_var = originatorNode;
}

AddressBlock& RteMsg::getTargetNode()
{
    return targetNode_var;
}

void RteMsg::setTargetNode(const AddressBlock& targetNode)
{
    this->targetNode_var = targetNode;
}

void RteMsg::setAddedNodeArraySize(unsigned int size)
{
    AddressBlock *addedNode_var2 = (size==0) ? NULL : new AddressBlock[size];
    unsigned int sz = addedNode_arraysize < size ? addedNode_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        addedNode_var2[i] = this->addedNode_var[i];
    addedNode_arraysize = size;
    delete [] this->addedNode_var;
    this->addedNode_var = addedNode_var2;
}

unsigned int RteMsg::getAddedNodeArraySize() const
{
    return addedNode_arraysize;
}

AddressBlock& RteMsg::getAddedNode(unsigned int k)
{
    if (k>=addedNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", addedNode_arraysize, k);
    return addedNode_var[k];
}

void RteMsg::setAddedNode(unsigned int k, const AddressBlock& addedNode)
{
    if (k>=addedNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", addedNode_arraysize, k);
    this->addedNode_var[k] = addedNode;
}

class RteMsgDescriptor : public cClassDescriptor
{
  public:
    RteMsgDescriptor();
    virtual ~RteMsgDescriptor();

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

Register_ClassDescriptor(RteMsgDescriptor);

RteMsgDescriptor::RteMsgDescriptor() : cClassDescriptor("DYMO::RteMsg", "DYMO::DYMOPacket")
{
}

RteMsgDescriptor::~RteMsgDescriptor()
{
}

bool RteMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RteMsg *>(obj)!=NULL;
}

const char *RteMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RteMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int RteMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND | FD_ISCOBJECT,
        FD_ISCOMPOUND | FD_ISCOBJECT,
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *RteMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "hopCount",
        "originatorNode",
        "targetNode",
        "addedNode",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int RteMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorNode")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetNode")==0) return base+2;
    if (fieldName[0]=='a' && strcmp(fieldName, "addedNode")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RteMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "AddressBlock",
        "AddressBlock",
        "AddressBlock",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *RteMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RteMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RteMsg *pp = (RteMsg *)object; (void)pp;
    switch (field) {
        case 3: return pp->getAddedNodeArraySize();
        default: return 0;
    }
}

std::string RteMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RteMsg *pp = (RteMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getHopCount());
        case 1: {std::stringstream out; out << pp->getOriginatorNode(); return out.str();}
        case 2: {std::stringstream out; out << pp->getTargetNode(); return out.str();}
        case 3: {std::stringstream out; out << pp->getAddedNode(i); return out.str();}
        default: return "";
    }
}

bool RteMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RteMsg *pp = (RteMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setHopCount(string2long(value)); return true;
        default: return false;
    }
}

const char *RteMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(AddressBlock));
        case 2: return opp_typename(typeid(AddressBlock));
        case 3: return opp_typename(typeid(AddressBlock));
        default: return NULL;
    };
}

void *RteMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RteMsg *pp = (RteMsg *)object; (void)pp;
    switch (field) {
        case 1: return (void *)static_cast<cObject *>(&pp->getOriginatorNode()); break;
        case 2: return (void *)static_cast<cObject *>(&pp->getTargetNode()); break;
        case 3: return (void *)static_cast<cObject *>(&pp->getAddedNode(i)); break;
        default: return NULL;
    }
}

Register_Class(RREQ);

RREQ::RREQ(const char *name, int kind) : ::DYMO::RteMsg(name,kind)
{
}

RREQ::RREQ(const RREQ& other) : ::DYMO::RteMsg(other)
{
    copy(other);
}

RREQ::~RREQ()
{
}

RREQ& RREQ::operator=(const RREQ& other)
{
    if (this==&other) return *this;
    ::DYMO::RteMsg::operator=(other);
    copy(other);
    return *this;
}

void RREQ::copy(const RREQ& other)
{
}

void RREQ::parsimPack(cCommBuffer *b)
{
    ::DYMO::RteMsg::parsimPack(b);
}

void RREQ::parsimUnpack(cCommBuffer *b)
{
    ::DYMO::RteMsg::parsimUnpack(b);
}

class RREQDescriptor : public cClassDescriptor
{
  public:
    RREQDescriptor();
    virtual ~RREQDescriptor();

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

Register_ClassDescriptor(RREQDescriptor);

RREQDescriptor::RREQDescriptor() : cClassDescriptor("DYMO::RREQ", "DYMO::RteMsg")
{
}

RREQDescriptor::~RREQDescriptor()
{
}

bool RREQDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RREQ *>(obj)!=NULL;
}

const char *RREQDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RREQDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RREQDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RREQDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RREQDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RREQDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RREQDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RREQDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RREQ *pp = (RREQ *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RREQDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RREQ *pp = (RREQ *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RREQDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RREQ *pp = (RREQ *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RREQDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RREQDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RREQ *pp = (RREQ *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RREP);

RREP::RREP(const char *name, int kind) : ::DYMO::RteMsg(name,kind)
{
}

RREP::RREP(const RREP& other) : ::DYMO::RteMsg(other)
{
    copy(other);
}

RREP::~RREP()
{
}

RREP& RREP::operator=(const RREP& other)
{
    if (this==&other) return *this;
    ::DYMO::RteMsg::operator=(other);
    copy(other);
    return *this;
}

void RREP::copy(const RREP& other)
{
}

void RREP::parsimPack(cCommBuffer *b)
{
    ::DYMO::RteMsg::parsimPack(b);
}

void RREP::parsimUnpack(cCommBuffer *b)
{
    ::DYMO::RteMsg::parsimUnpack(b);
}

class RREPDescriptor : public cClassDescriptor
{
  public:
    RREPDescriptor();
    virtual ~RREPDescriptor();

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

Register_ClassDescriptor(RREPDescriptor);

RREPDescriptor::RREPDescriptor() : cClassDescriptor("DYMO::RREP", "DYMO::RteMsg")
{
}

RREPDescriptor::~RREPDescriptor()
{
}

bool RREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RREP *>(obj)!=NULL;
}

const char *RREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RREPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RREPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RREPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RREP *pp = (RREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RREP *pp = (RREP *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RREP *pp = (RREP *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RREPDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RREP *pp = (RREP *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RREP_ACK);

RREP_ACK::RREP_ACK(const char *name, int kind) : ::DYMO::DYMOPacket(name,kind)
{
}

RREP_ACK::RREP_ACK(const RREP_ACK& other) : ::DYMO::DYMOPacket(other)
{
    copy(other);
}

RREP_ACK::~RREP_ACK()
{
}

RREP_ACK& RREP_ACK::operator=(const RREP_ACK& other)
{
    if (this==&other) return *this;
    ::DYMO::DYMOPacket::operator=(other);
    copy(other);
    return *this;
}

void RREP_ACK::copy(const RREP_ACK& other)
{
}

void RREP_ACK::parsimPack(cCommBuffer *b)
{
    ::DYMO::DYMOPacket::parsimPack(b);
}

void RREP_ACK::parsimUnpack(cCommBuffer *b)
{
    ::DYMO::DYMOPacket::parsimUnpack(b);
}

class RREP_ACKDescriptor : public cClassDescriptor
{
  public:
    RREP_ACKDescriptor();
    virtual ~RREP_ACKDescriptor();

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

Register_ClassDescriptor(RREP_ACKDescriptor);

RREP_ACKDescriptor::RREP_ACKDescriptor() : cClassDescriptor("DYMO::RREP_ACK", "DYMO::DYMOPacket")
{
}

RREP_ACKDescriptor::~RREP_ACKDescriptor()
{
}

bool RREP_ACKDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RREP_ACK *>(obj)!=NULL;
}

const char *RREP_ACKDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RREP_ACKDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RREP_ACKDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RREP_ACKDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RREP_ACKDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RREP_ACKDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RREP_ACKDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RREP_ACKDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RREP_ACK *pp = (RREP_ACK *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RREP_ACKDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RREP_ACK *pp = (RREP_ACK *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RREP_ACKDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RREP_ACK *pp = (RREP_ACK *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RREP_ACKDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RREP_ACKDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RREP_ACK *pp = (RREP_ACK *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RERR);

RERR::RERR(const char *name, int kind) : ::DYMO::DYMOPacket(name,kind)
{
    unreachableNode_arraysize = 0;
    this->unreachableNode_var = 0;
}

RERR::RERR(const RERR& other) : ::DYMO::DYMOPacket(other)
{
    unreachableNode_arraysize = 0;
    this->unreachableNode_var = 0;
    copy(other);
}

RERR::~RERR()
{
    delete [] unreachableNode_var;
}

RERR& RERR::operator=(const RERR& other)
{
    if (this==&other) return *this;
    ::DYMO::DYMOPacket::operator=(other);
    copy(other);
    return *this;
}

void RERR::copy(const RERR& other)
{
    delete [] this->unreachableNode_var;
    this->unreachableNode_var = (other.unreachableNode_arraysize==0) ? NULL : new AddressBlock[other.unreachableNode_arraysize];
    unreachableNode_arraysize = other.unreachableNode_arraysize;
    for (unsigned int i=0; i<unreachableNode_arraysize; i++)
        this->unreachableNode_var[i] = other.unreachableNode_var[i];
}

void RERR::parsimPack(cCommBuffer *b)
{
    ::DYMO::DYMOPacket::parsimPack(b);
    b->pack(unreachableNode_arraysize);
    doPacking(b,this->unreachableNode_var,unreachableNode_arraysize);
}

void RERR::parsimUnpack(cCommBuffer *b)
{
    ::DYMO::DYMOPacket::parsimUnpack(b);
    delete [] this->unreachableNode_var;
    b->unpack(unreachableNode_arraysize);
    if (unreachableNode_arraysize==0) {
        this->unreachableNode_var = 0;
    } else {
        this->unreachableNode_var = new AddressBlock[unreachableNode_arraysize];
        doUnpacking(b,this->unreachableNode_var,unreachableNode_arraysize);
    }
}

void RERR::setUnreachableNodeArraySize(unsigned int size)
{
    AddressBlock *unreachableNode_var2 = (size==0) ? NULL : new AddressBlock[size];
    unsigned int sz = unreachableNode_arraysize < size ? unreachableNode_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        unreachableNode_var2[i] = this->unreachableNode_var[i];
    unreachableNode_arraysize = size;
    delete [] this->unreachableNode_var;
    this->unreachableNode_var = unreachableNode_var2;
}

unsigned int RERR::getUnreachableNodeArraySize() const
{
    return unreachableNode_arraysize;
}

AddressBlock& RERR::getUnreachableNode(unsigned int k)
{
    if (k>=unreachableNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableNode_arraysize, k);
    return unreachableNode_var[k];
}

void RERR::setUnreachableNode(unsigned int k, const AddressBlock& unreachableNode)
{
    if (k>=unreachableNode_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unreachableNode_arraysize, k);
    this->unreachableNode_var[k] = unreachableNode;
}

class RERRDescriptor : public cClassDescriptor
{
  public:
    RERRDescriptor();
    virtual ~RERRDescriptor();

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

Register_ClassDescriptor(RERRDescriptor);

RERRDescriptor::RERRDescriptor() : cClassDescriptor("DYMO::RERR", "DYMO::DYMOPacket")
{
}

RERRDescriptor::~RERRDescriptor()
{
}

bool RERRDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RERR *>(obj)!=NULL;
}

const char *RERRDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RERRDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RERRDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *RERRDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "unreachableNode",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RERRDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='u' && strcmp(fieldName, "unreachableNode")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RERRDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "AddressBlock",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *RERRDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RERRDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RERR *pp = (RERR *)object; (void)pp;
    switch (field) {
        case 0: return pp->getUnreachableNodeArraySize();
        default: return 0;
    }
}

std::string RERRDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RERR *pp = (RERR *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getUnreachableNode(i); return out.str();}
        default: return "";
    }
}

bool RERRDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RERR *pp = (RERR *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RERRDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(AddressBlock));
        default: return NULL;
    };
}

void *RERRDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RERR *pp = (RERR *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getUnreachableNode(i)); break;
        default: return NULL;
    }
}

} // namespace DYMO

