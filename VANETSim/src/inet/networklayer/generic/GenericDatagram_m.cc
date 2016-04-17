//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/generic/GenericDatagram.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "GenericDatagram_m.h"

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
    cEnum *e = cEnum::find("inet::GenericTLVOptionTypes");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::GenericTLVOptionTypes"));
    e->insert(GENERIC_TLVOPTION_NOP1, "GENERIC_TLVOPTION_NOP1");
    e->insert(GENERIC_TLVOPTION_NOPN, "GENERIC_TLVOPTION_NOPN");
    e->insert(GENERIC_TLVOPTION_TLV_GPSR, "GENERIC_TLVOPTION_TLV_GPSR");
);

GenericDatagram_Base::GenericDatagram_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->transportProtocol_var = IP_PROT_NONE;
    this->hopLimit_var = 0;
}

GenericDatagram_Base::GenericDatagram_Base(const GenericDatagram_Base& other) : ::cPacket(other)
{
    copy(other);
}

GenericDatagram_Base::~GenericDatagram_Base()
{
}

GenericDatagram_Base& GenericDatagram_Base::operator=(const GenericDatagram_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void GenericDatagram_Base::copy(const GenericDatagram_Base& other)
{
    this->sourceAddress_var = other.sourceAddress_var;
    this->destinationAddress_var = other.destinationAddress_var;
    this->transportProtocol_var = other.transportProtocol_var;
    this->hopLimit_var = other.hopLimit_var;
    this->tlvOptions_var = other.tlvOptions_var;
}

void GenericDatagram_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->sourceAddress_var);
    doPacking(b,this->destinationAddress_var);
    doPacking(b,this->transportProtocol_var);
    doPacking(b,this->hopLimit_var);
    doPacking(b,this->tlvOptions_var);
}

void GenericDatagram_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->sourceAddress_var);
    doUnpacking(b,this->destinationAddress_var);
    doUnpacking(b,this->transportProtocol_var);
    doUnpacking(b,this->hopLimit_var);
    doUnpacking(b,this->tlvOptions_var);
}

L3Address& GenericDatagram_Base::_getSrcAddr()
{
    return sourceAddress_var;
}

void GenericDatagram_Base::setSourceAddress(const L3Address& sourceAddress)
{
    this->sourceAddress_var = sourceAddress;
}

L3Address& GenericDatagram_Base::_getDestAddr()
{
    return destinationAddress_var;
}

void GenericDatagram_Base::setDestinationAddress(const L3Address& destinationAddress)
{
    this->destinationAddress_var = destinationAddress;
}

int GenericDatagram_Base::getTransportProtocol() const
{
    return transportProtocol_var;
}

void GenericDatagram_Base::setTransportProtocol(int transportProtocol)
{
    this->transportProtocol_var = transportProtocol;
}

short GenericDatagram_Base::getHopLimit() const
{
    return hopLimit_var;
}

void GenericDatagram_Base::setHopLimit(short hopLimit)
{
    this->hopLimit_var = hopLimit;
}

TLVOptions& GenericDatagram_Base::getTlvOptions()
{
    return tlvOptions_var;
}

void GenericDatagram_Base::setTlvOptions(const TLVOptions& tlvOptions)
{
    this->tlvOptions_var = tlvOptions;
}

class GenericDatagramDescriptor : public cClassDescriptor
{
  public:
    GenericDatagramDescriptor();
    virtual ~GenericDatagramDescriptor();

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

Register_ClassDescriptor(GenericDatagramDescriptor);

GenericDatagramDescriptor::GenericDatagramDescriptor() : cClassDescriptor("inet::GenericDatagram", "cPacket")
{
}

GenericDatagramDescriptor::~GenericDatagramDescriptor()
{
}

bool GenericDatagramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GenericDatagram_Base *>(obj)!=NULL;
}

const char *GenericDatagramDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GenericDatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int GenericDatagramDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *GenericDatagramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sourceAddress",
        "destinationAddress",
        "transportProtocol",
        "hopLimit",
        "tlvOptions",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int GenericDatagramDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceAddress")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationAddress")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "transportProtocol")==0) return base+2;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopLimit")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "tlvOptions")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GenericDatagramDescriptor::getFieldTypeString(void *object, int field) const
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
        "TLVOptions",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *GenericDatagramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"getter")) return "_getSrcAddr";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"getter")) return "_getDestAddr";
            return NULL;
        case 2:
            if (!strcmp(propertyname,"enum")) return "inet::IPProtocolId";
            return NULL;
        default: return NULL;
    }
}

int GenericDatagramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GenericDatagram_Base *pp = (GenericDatagram_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GenericDatagramDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GenericDatagram_Base *pp = (GenericDatagram_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->_getSrcAddr(); return out.str();}
        case 1: {std::stringstream out; out << pp->_getDestAddr(); return out.str();}
        case 2: return long2string(pp->getTransportProtocol());
        case 3: return long2string(pp->getHopLimit());
        case 4: {std::stringstream out; out << pp->getTlvOptions(); return out.str();}
        default: return "";
    }
}

bool GenericDatagramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GenericDatagram_Base *pp = (GenericDatagram_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setTransportProtocol(string2long(value)); return true;
        case 3: pp->setHopLimit(string2long(value)); return true;
        default: return false;
    }
}

const char *GenericDatagramDescriptor::getFieldStructName(void *object, int field) const
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
        case 4: return opp_typename(typeid(TLVOptions));
        default: return NULL;
    };
}

void *GenericDatagramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GenericDatagram_Base *pp = (GenericDatagram_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->_getSrcAddr()); break;
        case 1: return (void *)(&pp->_getDestAddr()); break;
        case 4: return (void *)(&pp->getTlvOptions()); break;
        default: return NULL;
    }
}

} // namespace inet

