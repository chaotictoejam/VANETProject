//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/vanetrouting/base/ControlVanetRouting.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ControlVanetRouting_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("VanetControlType");
    if (!e) enums.getInstance()->add(e = new cEnum("VanetControlType"));
    e->insert(VANET_ROUTE_NO_OPTION, "VANET_ROUTE_NO_OPTION");
    e->insert(VANET_ROUTE_UPDATE, "VANET_ROUTE_UPDATE");
    e->insert(VANET_ROUTE_NOROUTE, "VANET_ROUTE_NOROUTE");
);

Register_Class(ControlVanetRouting);

ControlVanetRouting::ControlVanetRouting(const char *name, int kind) : ::cPacket(name,kind)
{
    this->optionCode_var = VANET_ROUTE_NO_OPTION;
}

ControlVanetRouting::ControlVanetRouting(const ControlVanetRouting& other) : ::cPacket(other)
{
    copy(other);
}

ControlVanetRouting::~ControlVanetRouting()
{
}

ControlVanetRouting& ControlVanetRouting::operator=(const ControlVanetRouting& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void ControlVanetRouting::copy(const ControlVanetRouting& other)
{
    this->srcAddress_var = other.srcAddress_var;
    this->destAddress_var = other.destAddress_var;
    this->optionCode_var = other.optionCode_var;
}

void ControlVanetRouting::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->destAddress_var);
    doPacking(b,this->optionCode_var);
}

void ControlVanetRouting::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->destAddress_var);
    doUnpacking(b,this->optionCode_var);
}

VanetAddress& ControlVanetRouting::getSrcAddress()
{
    return srcAddress_var;
}

void ControlVanetRouting::setSrcAddress(const VanetAddress& srcAddress)
{
    this->srcAddress_var = srcAddress;
}

VanetAddress& ControlVanetRouting::getDestAddress()
{
    return destAddress_var;
}

void ControlVanetRouting::setDestAddress(const VanetAddress& destAddress)
{
    this->destAddress_var = destAddress;
}

int ControlVanetRouting::getOptionCode() const
{
    return optionCode_var;
}

void ControlVanetRouting::setOptionCode(int optionCode)
{
    this->optionCode_var = optionCode;
}

class ControlVanetRoutingDescriptor : public cClassDescriptor
{
  public:
    ControlVanetRoutingDescriptor();
    virtual ~ControlVanetRoutingDescriptor();

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

Register_ClassDescriptor(ControlVanetRoutingDescriptor);

ControlVanetRoutingDescriptor::ControlVanetRoutingDescriptor() : cClassDescriptor("ControlVanetRouting", "cPacket")
{
}

ControlVanetRoutingDescriptor::~ControlVanetRoutingDescriptor()
{
}

bool ControlVanetRoutingDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ControlVanetRouting *>(obj)!=NULL;
}

const char *ControlVanetRoutingDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ControlVanetRoutingDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int ControlVanetRoutingDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *ControlVanetRoutingDescriptor::getFieldName(void *object, int field) const
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
        "optionCode",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int ControlVanetRoutingDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddress")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddress")==0) return base+1;
    if (fieldName[0]=='o' && strcmp(fieldName, "optionCode")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ControlVanetRoutingDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "VanetAddress",
        "VanetAddress",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *ControlVanetRoutingDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "VanetControlType";
            return NULL;
        default: return NULL;
    }
}

int ControlVanetRoutingDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ControlVanetRouting *pp = (ControlVanetRouting *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ControlVanetRoutingDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ControlVanetRouting *pp = (ControlVanetRouting *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestAddress(); return out.str();}
        case 2: return long2string(pp->getOptionCode());
        default: return "";
    }
}

bool ControlVanetRoutingDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ControlVanetRouting *pp = (ControlVanetRouting *)object; (void)pp;
    switch (field) {
        case 2: pp->setOptionCode(string2long(value)); return true;
        default: return false;
    }
}

const char *ControlVanetRoutingDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(VanetAddress));
        case 1: return opp_typename(typeid(VanetAddress));
        default: return NULL;
    };
}

void *ControlVanetRoutingDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ControlVanetRouting *pp = (ControlVanetRouting *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcAddress()); break;
        case 1: return (void *)(&pp->getDestAddress()); break;
        default: return NULL;
    }
}


