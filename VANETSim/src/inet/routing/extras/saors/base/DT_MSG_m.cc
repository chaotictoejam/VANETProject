//
// Generated file, do not edit! Created by nedtool 4.6 from routing/extras/saors/base/DT_MSG.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DT_MSG_m.h"

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
namespace inetmanet {

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

Register_Class(DT_MSG);

DT_MSG::DT_MSG(const char *name, int kind) : ::cPacket(name,kind)
{
    this->copiesLeft_var = 0;
    this->isCopy_var = 0;
    this->transportProtocol_var = IP_PROT_NONE;
}

DT_MSG::DT_MSG(const DT_MSG& other) : ::cPacket(other)
{
    copy(other);
}

DT_MSG::~DT_MSG()
{
}

DT_MSG& DT_MSG::operator=(const DT_MSG& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void DT_MSG::copy(const DT_MSG& other)
{
    this->dstAddress_var = other.dstAddress_var;
    this->srcAddress_var = other.srcAddress_var;
    this->copiesLeft_var = other.copiesLeft_var;
    this->isCopy_var = other.isCopy_var;
    this->transportProtocol_var = other.transportProtocol_var;
}

void DT_MSG::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->dstAddress_var);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->copiesLeft_var);
    doPacking(b,this->isCopy_var);
    doPacking(b,this->transportProtocol_var);
}

void DT_MSG::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->dstAddress_var);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->copiesLeft_var);
    doUnpacking(b,this->isCopy_var);
    doUnpacking(b,this->transportProtocol_var);
}

IPv4Address& DT_MSG::getDstAddress()
{
    return dstAddress_var;
}

void DT_MSG::setDstAddress(const IPv4Address& dstAddress)
{
    this->dstAddress_var = dstAddress;
}

IPv4Address& DT_MSG::getSrcAddress()
{
    return srcAddress_var;
}

void DT_MSG::setSrcAddress(const IPv4Address& srcAddress)
{
    this->srcAddress_var = srcAddress;
}

uint8_t DT_MSG::getCopiesLeft() const
{
    return copiesLeft_var;
}

void DT_MSG::setCopiesLeft(uint8_t copiesLeft)
{
    this->copiesLeft_var = copiesLeft;
}

bool DT_MSG::getIsCopy() const
{
    return isCopy_var;
}

void DT_MSG::setIsCopy(bool isCopy)
{
    this->isCopy_var = isCopy;
}

uint8_t DT_MSG::getTransportProtocol() const
{
    return transportProtocol_var;
}

void DT_MSG::setTransportProtocol(uint8_t transportProtocol)
{
    this->transportProtocol_var = transportProtocol;
}

class DT_MSGDescriptor : public cClassDescriptor
{
  public:
    DT_MSGDescriptor();
    virtual ~DT_MSGDescriptor();

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

Register_ClassDescriptor(DT_MSGDescriptor);

DT_MSGDescriptor::DT_MSGDescriptor() : cClassDescriptor("inet::inetmanet::DT_MSG", "cPacket")
{
}

DT_MSGDescriptor::~DT_MSGDescriptor()
{
}

bool DT_MSGDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DT_MSG *>(obj)!=NULL;
}

const char *DT_MSGDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DT_MSGDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int DT_MSGDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DT_MSGDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "dstAddress",
        "srcAddress",
        "copiesLeft",
        "isCopy",
        "transportProtocol",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int DT_MSGDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dstAddress")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddress")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "copiesLeft")==0) return base+2;
    if (fieldName[0]=='i' && strcmp(fieldName, "isCopy")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "transportProtocol")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DT_MSGDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "IPv4Address",
        "uint8_t",
        "bool",
        "uint8_t",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *DT_MSGDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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
        default: return NULL;
    }
}

int DT_MSGDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DT_MSG *pp = (DT_MSG *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DT_MSGDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DT_MSG *pp = (DT_MSG *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDstAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSrcAddress(); return out.str();}
        case 2: return ulong2string(pp->getCopiesLeft());
        case 3: return bool2string(pp->getIsCopy());
        case 4: return ulong2string(pp->getTransportProtocol());
        default: return "";
    }
}

bool DT_MSGDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DT_MSG *pp = (DT_MSG *)object; (void)pp;
    switch (field) {
        case 2: pp->setCopiesLeft(string2ulong(value)); return true;
        case 3: pp->setIsCopy(string2bool(value)); return true;
        case 4: pp->setTransportProtocol(string2ulong(value)); return true;
        default: return false;
    }
}

const char *DT_MSGDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        case 1: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *DT_MSGDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DT_MSG *pp = (DT_MSG *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDstAddress()); break;
        case 1: return (void *)(&pp->getSrcAddress()); break;
        default: return NULL;
    }
}

} // namespace inetmanet
} // namespace inet

