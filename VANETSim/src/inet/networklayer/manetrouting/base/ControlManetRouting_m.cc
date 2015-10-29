//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/manetrouting/base/ControlManetRouting.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ControlManetRouting_m.h"

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
    cEnum *e = cEnum::find("ManetControlType");
    if (!e) enums.getInstance()->add(e = new cEnum("ManetControlType"));
    e->insert(MANET_ROUTE_NO_OPTION, "MANET_ROUTE_NO_OPTION");
    e->insert(MANET_ROUTE_UPDATE, "MANET_ROUTE_UPDATE");
    e->insert(MANET_ROUTE_NOROUTE, "MANET_ROUTE_NOROUTE");
);

Register_Class(ControlManetRouting);

ControlManetRouting::ControlManetRouting(const char *name, int kind) : ::cPacket(name,kind)
{
    this->optionCode_var = MANET_ROUTE_NO_OPTION;
}

ControlManetRouting::ControlManetRouting(const ControlManetRouting& other) : ::cPacket(other)
{
    copy(other);
}

ControlManetRouting::~ControlManetRouting()
{
}

ControlManetRouting& ControlManetRouting::operator=(const ControlManetRouting& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void ControlManetRouting::copy(const ControlManetRouting& other)
{
    this->srcAddress_var = other.srcAddress_var;
    this->destAddress_var = other.destAddress_var;
    this->optionCode_var = other.optionCode_var;
}

void ControlManetRouting::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->destAddress_var);
    doPacking(b,this->optionCode_var);
}

void ControlManetRouting::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->destAddress_var);
    doUnpacking(b,this->optionCode_var);
}

ManetAddress& ControlManetRouting::getSrcAddress()
{
    return srcAddress_var;
}

void ControlManetRouting::setSrcAddress(const ManetAddress& srcAddress)
{
    this->srcAddress_var = srcAddress;
}

ManetAddress& ControlManetRouting::getDestAddress()
{
    return destAddress_var;
}

void ControlManetRouting::setDestAddress(const ManetAddress& destAddress)
{
    this->destAddress_var = destAddress;
}

int ControlManetRouting::getOptionCode() const
{
    return optionCode_var;
}

void ControlManetRouting::setOptionCode(int optionCode)
{
    this->optionCode_var = optionCode;
}

class ControlManetRoutingDescriptor : public cClassDescriptor
{
  public:
    ControlManetRoutingDescriptor();
    virtual ~ControlManetRoutingDescriptor();

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

Register_ClassDescriptor(ControlManetRoutingDescriptor);

ControlManetRoutingDescriptor::ControlManetRoutingDescriptor() : cClassDescriptor("ControlManetRouting", "cPacket")
{
}

ControlManetRoutingDescriptor::~ControlManetRoutingDescriptor()
{
}

bool ControlManetRoutingDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ControlManetRouting *>(obj)!=NULL;
}

const char *ControlManetRoutingDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ControlManetRoutingDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int ControlManetRoutingDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ControlManetRoutingDescriptor::getFieldName(void *object, int field) const
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

int ControlManetRoutingDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddress")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddress")==0) return base+1;
    if (fieldName[0]=='o' && strcmp(fieldName, "optionCode")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ControlManetRoutingDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "ManetAddress",
        "ManetAddress",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *ControlManetRoutingDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "ManetControlType";
            return NULL;
        default: return NULL;
    }
}

int ControlManetRoutingDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ControlManetRouting *pp = (ControlManetRouting *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ControlManetRoutingDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ControlManetRouting *pp = (ControlManetRouting *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestAddress(); return out.str();}
        case 2: return long2string(pp->getOptionCode());
        default: return "";
    }
}

bool ControlManetRoutingDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ControlManetRouting *pp = (ControlManetRouting *)object; (void)pp;
    switch (field) {
        case 2: pp->setOptionCode(string2long(value)); return true;
        default: return false;
    }
}

const char *ControlManetRoutingDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(ManetAddress));
        case 1: return opp_typename(typeid(ManetAddress));
        default: return NULL;
    };
}

void *ControlManetRoutingDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ControlManetRouting *pp = (ControlManetRouting *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcAddress()); break;
        case 1: return (void *)(&pp->getDestAddress()); break;
        default: return NULL;
    }
}


