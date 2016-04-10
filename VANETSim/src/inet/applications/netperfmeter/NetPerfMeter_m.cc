//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/netperfmeter/NetPerfMeter.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "NetPerfMeter_m.h"

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

Register_Class(NetPerfMeterTransmitTimer);

NetPerfMeterTransmitTimer::NetPerfMeterTransmitTimer(const char *name, int kind) : ::cMessage(name,kind)
{
    this->streamID_var = 0;
}

NetPerfMeterTransmitTimer::NetPerfMeterTransmitTimer(const NetPerfMeterTransmitTimer& other) : ::cMessage(other)
{
    copy(other);
}

NetPerfMeterTransmitTimer::~NetPerfMeterTransmitTimer()
{
}

NetPerfMeterTransmitTimer& NetPerfMeterTransmitTimer::operator=(const NetPerfMeterTransmitTimer& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void NetPerfMeterTransmitTimer::copy(const NetPerfMeterTransmitTimer& other)
{
    this->streamID_var = other.streamID_var;
}

void NetPerfMeterTransmitTimer::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->streamID_var);
}

void NetPerfMeterTransmitTimer::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->streamID_var);
}

unsigned int NetPerfMeterTransmitTimer::getStreamID() const
{
    return streamID_var;
}

void NetPerfMeterTransmitTimer::setStreamID(unsigned int streamID)
{
    this->streamID_var = streamID;
}

class NetPerfMeterTransmitTimerDescriptor : public cClassDescriptor
{
  public:
    NetPerfMeterTransmitTimerDescriptor();
    virtual ~NetPerfMeterTransmitTimerDescriptor();

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

Register_ClassDescriptor(NetPerfMeterTransmitTimerDescriptor);

NetPerfMeterTransmitTimerDescriptor::NetPerfMeterTransmitTimerDescriptor() : cClassDescriptor("NetPerfMeterTransmitTimer", "cMessage")
{
}

NetPerfMeterTransmitTimerDescriptor::~NetPerfMeterTransmitTimerDescriptor()
{
}

bool NetPerfMeterTransmitTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NetPerfMeterTransmitTimer *>(obj)!=NULL;
}

const char *NetPerfMeterTransmitTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NetPerfMeterTransmitTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int NetPerfMeterTransmitTimerDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *NetPerfMeterTransmitTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "streamID",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int NetPerfMeterTransmitTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "streamID")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NetPerfMeterTransmitTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *NetPerfMeterTransmitTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NetPerfMeterTransmitTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NetPerfMeterTransmitTimer *pp = (NetPerfMeterTransmitTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NetPerfMeterTransmitTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NetPerfMeterTransmitTimer *pp = (NetPerfMeterTransmitTimer *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getStreamID());
        default: return "";
    }
}

bool NetPerfMeterTransmitTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NetPerfMeterTransmitTimer *pp = (NetPerfMeterTransmitTimer *)object; (void)pp;
    switch (field) {
        case 0: pp->setStreamID(string2ulong(value)); return true;
        default: return false;
    }
}

const char *NetPerfMeterTransmitTimerDescriptor::getFieldStructName(void *object, int field) const
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

void *NetPerfMeterTransmitTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NetPerfMeterTransmitTimer *pp = (NetPerfMeterTransmitTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

NetPerfMeterDataMessage::NetPerfMeterDataMessage() : ::SCTPSimpleMessage()
{
}

NetPerfMeterDataMessage::NetPerfMeterDataMessage(const NetPerfMeterDataMessage& other) : ::SCTPSimpleMessage(other)
{
    copy(other);
}

NetPerfMeterDataMessage::~NetPerfMeterDataMessage()
{
}

NetPerfMeterDataMessage& NetPerfMeterDataMessage::operator=(const NetPerfMeterDataMessage& other)
{
    if (this==&other) return *this;
    ::SCTPSimpleMessage::operator=(other);
    copy(other);
    return *this;
}

void NetPerfMeterDataMessage::copy(const NetPerfMeterDataMessage& other)
{
}

void NetPerfMeterDataMessage::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::SCTPSimpleMessage&)*this);
}

void NetPerfMeterDataMessage::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::SCTPSimpleMessage&)*this);
}

class NetPerfMeterDataMessageDescriptor : public cClassDescriptor
{
  public:
    NetPerfMeterDataMessageDescriptor();
    virtual ~NetPerfMeterDataMessageDescriptor();

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

Register_ClassDescriptor(NetPerfMeterDataMessageDescriptor);

NetPerfMeterDataMessageDescriptor::NetPerfMeterDataMessageDescriptor() : cClassDescriptor("NetPerfMeterDataMessage", "SCTPSimpleMessage")
{
}

NetPerfMeterDataMessageDescriptor::~NetPerfMeterDataMessageDescriptor()
{
}

bool NetPerfMeterDataMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NetPerfMeterDataMessage *>(obj)!=NULL;
}

const char *NetPerfMeterDataMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NetPerfMeterDataMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int NetPerfMeterDataMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *NetPerfMeterDataMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int NetPerfMeterDataMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NetPerfMeterDataMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *NetPerfMeterDataMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NetPerfMeterDataMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NetPerfMeterDataMessage *pp = (NetPerfMeterDataMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string NetPerfMeterDataMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NetPerfMeterDataMessage *pp = (NetPerfMeterDataMessage *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool NetPerfMeterDataMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NetPerfMeterDataMessage *pp = (NetPerfMeterDataMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *NetPerfMeterDataMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *NetPerfMeterDataMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NetPerfMeterDataMessage *pp = (NetPerfMeterDataMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


