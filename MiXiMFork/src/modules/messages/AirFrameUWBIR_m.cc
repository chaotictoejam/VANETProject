//
// Generated file, do not edit! Created by opp_msgc 4.4 from messages/AirFrameUWBIR.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "AirFrameUWBIR_m.h"

USING_NAMESPACE

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(AirFrameUWBIR);

AirFrameUWBIR::AirFrameUWBIR(const char *name, int kind) : AirFrame(name,kind)
{
}

AirFrameUWBIR::AirFrameUWBIR(const AirFrameUWBIR& other) : AirFrame(other)
{
    copy(other);
}

AirFrameUWBIR::~AirFrameUWBIR()
{
}

AirFrameUWBIR& AirFrameUWBIR::operator=(const AirFrameUWBIR& other)
{
    if (this==&other) return *this;
    AirFrame::operator=(other);
    copy(other);
    return *this;
}

void AirFrameUWBIR::copy(const AirFrameUWBIR& other)
{
    this->cfg_var = other.cfg_var;
}

void AirFrameUWBIR::parsimPack(cCommBuffer *b)
{
    AirFrame::parsimPack(b);
    doPacking(b,this->cfg_var);
}

void AirFrameUWBIR::parsimUnpack(cCommBuffer *b)
{
    AirFrame::parsimUnpack(b);
    doUnpacking(b,this->cfg_var);
}

IEEE802154A::config& AirFrameUWBIR::getCfg()
{
    return cfg_var;
}

void AirFrameUWBIR::setCfg(const IEEE802154A::config& cfg)
{
    this->cfg_var = cfg;
}

class AirFrameUWBIRDescriptor : public cClassDescriptor
{
  public:
    AirFrameUWBIRDescriptor();
    virtual ~AirFrameUWBIRDescriptor();

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

Register_ClassDescriptor(AirFrameUWBIRDescriptor);

AirFrameUWBIRDescriptor::AirFrameUWBIRDescriptor() : cClassDescriptor("AirFrameUWBIR", "AirFrame")
{
}

AirFrameUWBIRDescriptor::~AirFrameUWBIRDescriptor()
{
}

bool AirFrameUWBIRDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AirFrameUWBIR *>(obj)!=NULL;
}

const char *AirFrameUWBIRDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AirFrameUWBIRDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int AirFrameUWBIRDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *AirFrameUWBIRDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "cfg",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int AirFrameUWBIRDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "cfg")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AirFrameUWBIRDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IEEE802154A::config",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *AirFrameUWBIRDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AirFrameUWBIRDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AirFrameUWBIR *pp = (AirFrameUWBIR *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AirFrameUWBIRDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AirFrameUWBIR *pp = (AirFrameUWBIR *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getCfg(); return out.str();}
        default: return "";
    }
}

bool AirFrameUWBIRDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AirFrameUWBIR *pp = (AirFrameUWBIR *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *AirFrameUWBIRDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "IEEE802154A::config",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *AirFrameUWBIRDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AirFrameUWBIR *pp = (AirFrameUWBIR *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getCfg()); break;
        default: return NULL;
    }
}


