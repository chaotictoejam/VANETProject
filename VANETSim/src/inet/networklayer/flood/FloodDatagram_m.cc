//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/flood/FloodDatagram.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "FloodDatagram_m.h"

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

FloodDatagram_Base::FloodDatagram_Base(const char *name, int kind) : ::inet::NetworkDatagramBase(name,kind)
{
    this->ttl_var = 1;
    this->seqNum_var = 0;
    this->transportProtocol_var = -1;
}

FloodDatagram_Base::FloodDatagram_Base(const FloodDatagram_Base& other) : ::inet::NetworkDatagramBase(other)
{
    copy(other);
}

FloodDatagram_Base::~FloodDatagram_Base()
{
}

FloodDatagram_Base& FloodDatagram_Base::operator=(const FloodDatagram_Base& other)
{
    if (this==&other) return *this;
    ::inet::NetworkDatagramBase::operator=(other);
    copy(other);
    return *this;
}

void FloodDatagram_Base::copy(const FloodDatagram_Base& other)
{
    this->ttl_var = other.ttl_var;
    this->seqNum_var = other.seqNum_var;
    this->transportProtocol_var = other.transportProtocol_var;
}

void FloodDatagram_Base::parsimPack(cCommBuffer *b)
{
    ::inet::NetworkDatagramBase::parsimPack(b);
    doPacking(b,this->ttl_var);
    doPacking(b,this->seqNum_var);
    doPacking(b,this->transportProtocol_var);
}

void FloodDatagram_Base::parsimUnpack(cCommBuffer *b)
{
    ::inet::NetworkDatagramBase::parsimUnpack(b);
    doUnpacking(b,this->ttl_var);
    doUnpacking(b,this->seqNum_var);
    doUnpacking(b,this->transportProtocol_var);
}

int FloodDatagram_Base::getTtl() const
{
    return ttl_var;
}

void FloodDatagram_Base::setTtl(int ttl)
{
    this->ttl_var = ttl;
}

unsigned long FloodDatagram_Base::getSeqNum() const
{
    return seqNum_var;
}

void FloodDatagram_Base::setSeqNum(unsigned long seqNum)
{
    this->seqNum_var = seqNum;
}

int FloodDatagram_Base::getTransportProtocol() const
{
    return transportProtocol_var;
}

void FloodDatagram_Base::setTransportProtocol(int transportProtocol)
{
    this->transportProtocol_var = transportProtocol;
}

class FloodDatagramDescriptor : public cClassDescriptor
{
  public:
    FloodDatagramDescriptor();
    virtual ~FloodDatagramDescriptor();

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

Register_ClassDescriptor(FloodDatagramDescriptor);

FloodDatagramDescriptor::FloodDatagramDescriptor() : cClassDescriptor("inet::FloodDatagram", "inet::NetworkDatagramBase")
{
}

FloodDatagramDescriptor::~FloodDatagramDescriptor()
{
}

bool FloodDatagramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FloodDatagram_Base *>(obj)!=NULL;
}

const char *FloodDatagramDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FloodDatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int FloodDatagramDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *FloodDatagramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ttl",
        "seqNum",
        "transportProtocol",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int FloodDatagramDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "ttl")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNum")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "transportProtocol")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *FloodDatagramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "unsigned long",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *FloodDatagramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FloodDatagramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FloodDatagram_Base *pp = (FloodDatagram_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string FloodDatagramDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    FloodDatagram_Base *pp = (FloodDatagram_Base *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getTtl());
        case 1: return ulong2string(pp->getSeqNum());
        case 2: return long2string(pp->getTransportProtocol());
        default: return "";
    }
}

bool FloodDatagramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FloodDatagram_Base *pp = (FloodDatagram_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setTtl(string2long(value)); return true;
        case 1: pp->setSeqNum(string2ulong(value)); return true;
        case 2: pp->setTransportProtocol(string2long(value)); return true;
        default: return false;
    }
}

const char *FloodDatagramDescriptor::getFieldStructName(void *object, int field) const
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

void *FloodDatagramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FloodDatagram_Base *pp = (FloodDatagram_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inet

