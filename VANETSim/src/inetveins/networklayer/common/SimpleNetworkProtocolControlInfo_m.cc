//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/networklayer/common/SimpleNetworkProtocolControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SimpleNetworkProtocolControlInfo_m.h"

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



namespace inetveins {

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

SimpleNetworkProtocolControlInfo_Base::SimpleNetworkProtocolControlInfo_Base() : ::cObject()
{
    this->interfaceId_var = -1;
    this->protocol_var = 0;
    this->hopLimit_var = 0;
}

SimpleNetworkProtocolControlInfo_Base::SimpleNetworkProtocolControlInfo_Base(const SimpleNetworkProtocolControlInfo_Base& other) : ::cObject(other)
{
    copy(other);
}

SimpleNetworkProtocolControlInfo_Base::~SimpleNetworkProtocolControlInfo_Base()
{
}

SimpleNetworkProtocolControlInfo_Base& SimpleNetworkProtocolControlInfo_Base::operator=(const SimpleNetworkProtocolControlInfo_Base& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void SimpleNetworkProtocolControlInfo_Base::copy(const SimpleNetworkProtocolControlInfo_Base& other)
{
    this->destinationAddress_var = other.destinationAddress_var;
    this->sourceAddress_var = other.sourceAddress_var;
    this->interfaceId_var = other.interfaceId_var;
    this->protocol_var = other.protocol_var;
    this->hopLimit_var = other.hopLimit_var;
}

void SimpleNetworkProtocolControlInfo_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->destinationAddress_var);
    doPacking(b,this->sourceAddress_var);
    doPacking(b,this->interfaceId_var);
    doPacking(b,this->protocol_var);
    doPacking(b,this->hopLimit_var);
}

void SimpleNetworkProtocolControlInfo_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->destinationAddress_var);
    doUnpacking(b,this->sourceAddress_var);
    doUnpacking(b,this->interfaceId_var);
    doUnpacking(b,this->protocol_var);
    doUnpacking(b,this->hopLimit_var);
}

L3Address& SimpleNetworkProtocolControlInfo_Base::_getDestinationAddress()
{
    return destinationAddress_var;
}

void SimpleNetworkProtocolControlInfo_Base::setDestinationAddress(const L3Address& destinationAddress)
{
    this->destinationAddress_var = destinationAddress;
}

L3Address& SimpleNetworkProtocolControlInfo_Base::_getSourceAddress()
{
    return sourceAddress_var;
}

void SimpleNetworkProtocolControlInfo_Base::setSourceAddress(const L3Address& sourceAddress)
{
    this->sourceAddress_var = sourceAddress;
}

int SimpleNetworkProtocolControlInfo_Base::getInterfaceId() const
{
    return interfaceId_var;
}

void SimpleNetworkProtocolControlInfo_Base::setInterfaceId(int interfaceId)
{
    this->interfaceId_var = interfaceId;
}

short SimpleNetworkProtocolControlInfo_Base::getProtocol() const
{
    return protocol_var;
}

void SimpleNetworkProtocolControlInfo_Base::setProtocol(short protocol)
{
    this->protocol_var = protocol;
}

short SimpleNetworkProtocolControlInfo_Base::getHopLimit() const
{
    return hopLimit_var;
}

void SimpleNetworkProtocolControlInfo_Base::setHopLimit(short hopLimit)
{
    this->hopLimit_var = hopLimit;
}

class SimpleNetworkProtocolControlInfoDescriptor : public cClassDescriptor
{
  public:
    SimpleNetworkProtocolControlInfoDescriptor();
    virtual ~SimpleNetworkProtocolControlInfoDescriptor();

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

Register_ClassDescriptor(SimpleNetworkProtocolControlInfoDescriptor);

SimpleNetworkProtocolControlInfoDescriptor::SimpleNetworkProtocolControlInfoDescriptor() : cClassDescriptor("inetveins::SimpleNetworkProtocolControlInfo", "cObject")
{
}

SimpleNetworkProtocolControlInfoDescriptor::~SimpleNetworkProtocolControlInfoDescriptor()
{
}

bool SimpleNetworkProtocolControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SimpleNetworkProtocolControlInfo_Base *>(obj)!=NULL;
}

const char *SimpleNetworkProtocolControlInfoDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SimpleNetworkProtocolControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int SimpleNetworkProtocolControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *SimpleNetworkProtocolControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destinationAddress",
        "sourceAddress",
        "interfaceId",
        "protocol",
        "hopLimit",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int SimpleNetworkProtocolControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationAddress")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceAddress")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "protocol")==0) return base+3;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopLimit")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SimpleNetworkProtocolControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "L3Address",
        "L3Address",
        "int",
        "short",
        "short",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *SimpleNetworkProtocolControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "_getDestinationAddress";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"getter")) return "_getSourceAddress";
            return NULL;
        default: return NULL;
    }
}

int SimpleNetworkProtocolControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SimpleNetworkProtocolControlInfo_Base *pp = (SimpleNetworkProtocolControlInfo_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SimpleNetworkProtocolControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SimpleNetworkProtocolControlInfo_Base *pp = (SimpleNetworkProtocolControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->_getDestinationAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->_getSourceAddress(); return out.str();}
        case 2: return long2string(pp->getInterfaceId());
        case 3: return long2string(pp->getProtocol());
        case 4: return long2string(pp->getHopLimit());
        default: return "";
    }
}

bool SimpleNetworkProtocolControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SimpleNetworkProtocolControlInfo_Base *pp = (SimpleNetworkProtocolControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setInterfaceId(string2long(value)); return true;
        case 3: pp->setProtocol(string2long(value)); return true;
        case 4: pp->setHopLimit(string2long(value)); return true;
        default: return false;
    }
}

const char *SimpleNetworkProtocolControlInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(L3Address));
        case 1: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *SimpleNetworkProtocolControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SimpleNetworkProtocolControlInfo_Base *pp = (SimpleNetworkProtocolControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->_getDestinationAddress()); break;
        case 1: return (void *)(&pp->_getSourceAddress()); break;
        default: return NULL;
    }
}

} // namespace inetveins

