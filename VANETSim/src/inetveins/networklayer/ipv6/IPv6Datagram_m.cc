//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/networklayer/ipv6/IPv6Datagram.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPv6Datagram_m.h"

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

IPv6Datagram_Base::IPv6Datagram_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->trafficClass_var = 0;
    this->flowLabel_var = 0;
    this->hopLimit_var = 0;
    this->transportProtocol_var = 0;
}

IPv6Datagram_Base::IPv6Datagram_Base(const IPv6Datagram_Base& other) : ::cPacket(other)
{
    copy(other);
}

IPv6Datagram_Base::~IPv6Datagram_Base()
{
}

IPv6Datagram_Base& IPv6Datagram_Base::operator=(const IPv6Datagram_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void IPv6Datagram_Base::copy(const IPv6Datagram_Base& other)
{
    this->srcAddress_var = other.srcAddress_var;
    this->destAddress_var = other.destAddress_var;
    this->trafficClass_var = other.trafficClass_var;
    this->flowLabel_var = other.flowLabel_var;
    this->hopLimit_var = other.hopLimit_var;
    this->transportProtocol_var = other.transportProtocol_var;
}

void IPv6Datagram_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->destAddress_var);
    doPacking(b,this->trafficClass_var);
    // field diffServCodePoint is abstract -- please do packing in customized class
    // field explicitCongestionNotification is abstract -- please do packing in customized class
    doPacking(b,this->flowLabel_var);
    doPacking(b,this->hopLimit_var);
    doPacking(b,this->transportProtocol_var);
    // field extensionHeader is abstract -- please do packing in customized class
}

void IPv6Datagram_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->destAddress_var);
    doUnpacking(b,this->trafficClass_var);
    // field diffServCodePoint is abstract -- please do unpacking in customized class
    // field explicitCongestionNotification is abstract -- please do unpacking in customized class
    doUnpacking(b,this->flowLabel_var);
    doUnpacking(b,this->hopLimit_var);
    doUnpacking(b,this->transportProtocol_var);
    // field extensionHeader is abstract -- please do unpacking in customized class
}

IPv6Address& IPv6Datagram_Base::getSrcAddress()
{
    return srcAddress_var;
}

void IPv6Datagram_Base::setSrcAddress(const IPv6Address& srcAddress)
{
    this->srcAddress_var = srcAddress;
}

IPv6Address& IPv6Datagram_Base::getDestAddress()
{
    return destAddress_var;
}

void IPv6Datagram_Base::setDestAddress(const IPv6Address& destAddress)
{
    this->destAddress_var = destAddress;
}

unsigned char IPv6Datagram_Base::getTrafficClass() const
{
    return trafficClass_var;
}

void IPv6Datagram_Base::setTrafficClass(unsigned char trafficClass)
{
    this->trafficClass_var = trafficClass;
}

unsigned int IPv6Datagram_Base::getFlowLabel() const
{
    return flowLabel_var;
}

void IPv6Datagram_Base::setFlowLabel(unsigned int flowLabel)
{
    this->flowLabel_var = flowLabel;
}

short IPv6Datagram_Base::getHopLimit() const
{
    return hopLimit_var;
}

void IPv6Datagram_Base::setHopLimit(short hopLimit)
{
    this->hopLimit_var = hopLimit;
}

int IPv6Datagram_Base::getTransportProtocol() const
{
    return transportProtocol_var;
}

void IPv6Datagram_Base::setTransportProtocol(int transportProtocol)
{
    this->transportProtocol_var = transportProtocol;
}

class IPv6DatagramDescriptor : public cClassDescriptor
{
  public:
    IPv6DatagramDescriptor();
    virtual ~IPv6DatagramDescriptor();

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

Register_ClassDescriptor(IPv6DatagramDescriptor);

IPv6DatagramDescriptor::IPv6DatagramDescriptor() : cClassDescriptor("inetveins::IPv6Datagram", "cPacket")
{
}

IPv6DatagramDescriptor::~IPv6DatagramDescriptor()
{
}

bool IPv6DatagramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6Datagram_Base *>(obj)!=NULL;
}

const char *IPv6DatagramDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6DatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int IPv6DatagramDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<9) ? fieldTypeFlags[field] : 0;
}

const char *IPv6DatagramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcAddress",
        "destAddress",
        "trafficClass",
        "diffServCodePoint",
        "explicitCongestionNotification",
        "flowLabel",
        "hopLimit",
        "transportProtocol",
        "extensionHeader",
    };
    return (field>=0 && field<9) ? fieldNames[field] : NULL;
}

int IPv6DatagramDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddress")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddress")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "trafficClass")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "diffServCodePoint")==0) return base+3;
    if (fieldName[0]=='e' && strcmp(fieldName, "explicitCongestionNotification")==0) return base+4;
    if (fieldName[0]=='f' && strcmp(fieldName, "flowLabel")==0) return base+5;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopLimit")==0) return base+6;
    if (fieldName[0]=='t' && strcmp(fieldName, "transportProtocol")==0) return base+7;
    if (fieldName[0]=='e' && strcmp(fieldName, "extensionHeader")==0) return base+8;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6DatagramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv6Address",
        "IPv6Address",
        "unsigned char",
        "int",
        "int",
        "unsigned int",
        "short",
        "int",
        "IPv6ExtensionHeaderPtr",
    };
    return (field>=0 && field<9) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6DatagramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 7:
            if (!strcmp(propertyname,"enum")) return "inetveins::IPProtocolId";
            return NULL;
        default: return NULL;
    }
}

int IPv6DatagramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 8: return pp->getExtensionHeaderArraySize();
        default: return 0;
    }
}

std::string IPv6DatagramDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestAddress(); return out.str();}
        case 2: return ulong2string(pp->getTrafficClass());
        case 3: return long2string(pp->getDiffServCodePoint());
        case 4: return long2string(pp->getExplicitCongestionNotification());
        case 5: return ulong2string(pp->getFlowLabel());
        case 6: return long2string(pp->getHopLimit());
        case 7: return long2string(pp->getTransportProtocol());
        case 8: {std::stringstream out; out << pp->getExtensionHeader(i); return out.str();}
        default: return "";
    }
}

bool IPv6DatagramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setTrafficClass(string2ulong(value)); return true;
        case 3: pp->setDiffServCodePoint(string2long(value)); return true;
        case 4: pp->setExplicitCongestionNotification(string2long(value)); return true;
        case 5: pp->setFlowLabel(string2ulong(value)); return true;
        case 6: pp->setHopLimit(string2long(value)); return true;
        case 7: pp->setTransportProtocol(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv6DatagramDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv6Address));
        case 1: return opp_typename(typeid(IPv6Address));
        case 8: return opp_typename(typeid(IPv6ExtensionHeaderPtr));
        default: return NULL;
    };
}

void *IPv6DatagramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6Datagram_Base *pp = (IPv6Datagram_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcAddress()); break;
        case 1: return (void *)(&pp->getDestAddress()); break;
        case 8: return (void *)(&pp->getExtensionHeader(i)); break;
        default: return NULL;
    }
}

Register_Class(IPv6ExtensionHeader);

IPv6ExtensionHeader::IPv6ExtensionHeader() : ::cObject()
{
    this->extensionType_var = 0;
    this->byteLength_var = 0;
}

IPv6ExtensionHeader::IPv6ExtensionHeader(const IPv6ExtensionHeader& other) : ::cObject(other)
{
    copy(other);
}

IPv6ExtensionHeader::~IPv6ExtensionHeader()
{
}

IPv6ExtensionHeader& IPv6ExtensionHeader::operator=(const IPv6ExtensionHeader& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void IPv6ExtensionHeader::copy(const IPv6ExtensionHeader& other)
{
    this->extensionType_var = other.extensionType_var;
    this->byteLength_var = other.byteLength_var;
}

void IPv6ExtensionHeader::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->extensionType_var);
    doPacking(b,this->byteLength_var);
}

void IPv6ExtensionHeader::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->extensionType_var);
    doUnpacking(b,this->byteLength_var);
}

short IPv6ExtensionHeader::getExtensionType() const
{
    return extensionType_var;
}

void IPv6ExtensionHeader::setExtensionType(short extensionType)
{
    this->extensionType_var = extensionType;
}

short IPv6ExtensionHeader::getByteLength() const
{
    return byteLength_var;
}

void IPv6ExtensionHeader::setByteLength(short byteLength)
{
    this->byteLength_var = byteLength;
}

class IPv6ExtensionHeaderDescriptor : public cClassDescriptor
{
  public:
    IPv6ExtensionHeaderDescriptor();
    virtual ~IPv6ExtensionHeaderDescriptor();

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

Register_ClassDescriptor(IPv6ExtensionHeaderDescriptor);

IPv6ExtensionHeaderDescriptor::IPv6ExtensionHeaderDescriptor() : cClassDescriptor("inetveins::IPv6ExtensionHeader", "cObject")
{
}

IPv6ExtensionHeaderDescriptor::~IPv6ExtensionHeaderDescriptor()
{
}

bool IPv6ExtensionHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv6ExtensionHeader *>(obj)!=NULL;
}

const char *IPv6ExtensionHeaderDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv6ExtensionHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int IPv6ExtensionHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *IPv6ExtensionHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "extensionType",
        "byteLength",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int IPv6ExtensionHeaderDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "extensionType")==0) return base+0;
    if (fieldName[0]=='b' && strcmp(fieldName, "byteLength")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv6ExtensionHeaderDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *IPv6ExtensionHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv6ExtensionHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader *pp = (IPv6ExtensionHeader *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv6ExtensionHeaderDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader *pp = (IPv6ExtensionHeader *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getExtensionType());
        case 1: return long2string(pp->getByteLength());
        default: return "";
    }
}

bool IPv6ExtensionHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader *pp = (IPv6ExtensionHeader *)object; (void)pp;
    switch (field) {
        case 0: pp->setExtensionType(string2long(value)); return true;
        case 1: pp->setByteLength(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv6ExtensionHeaderDescriptor::getFieldStructName(void *object, int field) const
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

void *IPv6ExtensionHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv6ExtensionHeader *pp = (IPv6ExtensionHeader *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inetveins

