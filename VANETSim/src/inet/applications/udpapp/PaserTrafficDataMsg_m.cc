//
// Generated file, do not edit! Created by nedtool 4.6 from applications/udpapp/PaserTrafficDataMsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "PaserTrafficDataMsg_m.h"

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

Register_Class(PaserTrafficDataMsg);

PaserTrafficDataMsg::PaserTrafficDataMsg(const char *name, int kind) : ::cPacket(name,kind)
{
    this->srcId_var = 0;
    this->counter_var = 0;
    this->hops_var = 0;
    this->timestamp_var = 0;
}

PaserTrafficDataMsg::PaserTrafficDataMsg(const PaserTrafficDataMsg& other) : ::cPacket(other)
{
    copy(other);
}

PaserTrafficDataMsg::~PaserTrafficDataMsg()
{
}

PaserTrafficDataMsg& PaserTrafficDataMsg::operator=(const PaserTrafficDataMsg& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void PaserTrafficDataMsg::copy(const PaserTrafficDataMsg& other)
{
    this->srcId_var = other.srcId_var;
    this->counter_var = other.counter_var;
    this->hops_var = other.hops_var;
    this->timestamp_var = other.timestamp_var;
}

void PaserTrafficDataMsg::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->srcId_var);
    doPacking(b,this->counter_var);
    doPacking(b,this->hops_var);
    doPacking(b,this->timestamp_var);
}

void PaserTrafficDataMsg::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcId_var);
    doUnpacking(b,this->counter_var);
    doUnpacking(b,this->hops_var);
    doUnpacking(b,this->timestamp_var);
}

const char * PaserTrafficDataMsg::getSrcId() const
{
    return srcId_var.c_str();
}

void PaserTrafficDataMsg::setSrcId(const char * srcId)
{
    this->srcId_var = srcId;
}

int PaserTrafficDataMsg::getCounter() const
{
    return counter_var;
}

void PaserTrafficDataMsg::setCounter(int counter)
{
    this->counter_var = counter;
}

int PaserTrafficDataMsg::getHops() const
{
    return hops_var;
}

void PaserTrafficDataMsg::setHops(int hops)
{
    this->hops_var = hops;
}

double PaserTrafficDataMsg::getTimestamp() const
{
    return timestamp_var;
}

void PaserTrafficDataMsg::setTimestamp(double timestamp)
{
    this->timestamp_var = timestamp;
}

class PaserTrafficDataMsgDescriptor : public cClassDescriptor
{
  public:
    PaserTrafficDataMsgDescriptor();
    virtual ~PaserTrafficDataMsgDescriptor();

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

Register_ClassDescriptor(PaserTrafficDataMsgDescriptor);

PaserTrafficDataMsgDescriptor::PaserTrafficDataMsgDescriptor() : cClassDescriptor("inet::PaserTrafficDataMsg", "cPacket")
{
}

PaserTrafficDataMsgDescriptor::~PaserTrafficDataMsgDescriptor()
{
}

bool PaserTrafficDataMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PaserTrafficDataMsg *>(obj)!=NULL;
}

const char *PaserTrafficDataMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PaserTrafficDataMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PaserTrafficDataMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *PaserTrafficDataMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcId",
        "counter",
        "hops",
        "timestamp",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int PaserTrafficDataMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcId")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "counter")==0) return base+1;
    if (fieldName[0]=='h' && strcmp(fieldName, "hops")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PaserTrafficDataMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "int",
        "int",
        "double",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *PaserTrafficDataMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PaserTrafficDataMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PaserTrafficDataMsg *pp = (PaserTrafficDataMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PaserTrafficDataMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PaserTrafficDataMsg *pp = (PaserTrafficDataMsg *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getSrcId());
        case 1: return long2string(pp->getCounter());
        case 2: return long2string(pp->getHops());
        case 3: return double2string(pp->getTimestamp());
        default: return "";
    }
}

bool PaserTrafficDataMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PaserTrafficDataMsg *pp = (PaserTrafficDataMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setSrcId((value)); return true;
        case 1: pp->setCounter(string2long(value)); return true;
        case 2: pp->setHops(string2long(value)); return true;
        case 3: pp->setTimestamp(string2double(value)); return true;
        default: return false;
    }
}

const char *PaserTrafficDataMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *PaserTrafficDataMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PaserTrafficDataMsg *pp = (PaserTrafficDataMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inet

