//
// Generated file, do not edit! Created by nedtool 4.6 from transport/udp/UDPPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "UDPPacket_m.h"

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

Register_Class(UDPPacket);

UDPPacket::UDPPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->sourcePort_var = 0;
    this->destinationPort_var = 0;
}

UDPPacket::UDPPacket(const UDPPacket& other) : ::cPacket(other)
{
    copy(other);
}

UDPPacket::~UDPPacket()
{
}

UDPPacket& UDPPacket::operator=(const UDPPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void UDPPacket::copy(const UDPPacket& other)
{
    this->sourcePort_var = other.sourcePort_var;
    this->destinationPort_var = other.destinationPort_var;
}

void UDPPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->sourcePort_var);
    doPacking(b,this->destinationPort_var);
}

void UDPPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->sourcePort_var);
    doUnpacking(b,this->destinationPort_var);
}

unsigned short UDPPacket::getSourcePort() const
{
    return sourcePort_var;
}

void UDPPacket::setSourcePort(unsigned short sourcePort)
{
    this->sourcePort_var = sourcePort;
}

unsigned short UDPPacket::getDestinationPort() const
{
    return destinationPort_var;
}

void UDPPacket::setDestinationPort(unsigned short destinationPort)
{
    this->destinationPort_var = destinationPort;
}

class UDPPacketDescriptor : public cClassDescriptor
{
  public:
    UDPPacketDescriptor();
    virtual ~UDPPacketDescriptor();

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

Register_ClassDescriptor(UDPPacketDescriptor);

UDPPacketDescriptor::UDPPacketDescriptor() : cClassDescriptor("UDPPacket", "cPacket")
{
}

UDPPacketDescriptor::~UDPPacketDescriptor()
{
}

bool UDPPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPPacket *>(obj)!=NULL;
}

const char *UDPPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int UDPPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sourcePort",
        "destinationPort",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int UDPPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourcePort")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationPort")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned short",
        "unsigned short",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *UDPPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPPacket *pp = (UDPPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPPacket *pp = (UDPPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSourcePort());
        case 1: return ulong2string(pp->getDestinationPort());
        default: return "";
    }
}

bool UDPPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPPacket *pp = (UDPPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setSourcePort(string2ulong(value)); return true;
        case 1: pp->setDestinationPort(string2ulong(value)); return true;
        default: return false;
    }
}

const char *UDPPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPPacket *pp = (UDPPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


