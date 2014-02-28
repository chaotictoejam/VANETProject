//
// Generated file, do not edit! Created by opp_msgc 4.4 from messages/UWBIRMacPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "UWBIRMacPkt_m.h"

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




UWBIRMacPkt_Base::UWBIRMacPkt_Base(const char *name, int kind) : MacPkt(name,kind)
{
    this->nbSymbols_var = 0;
}

UWBIRMacPkt_Base::UWBIRMacPkt_Base(const UWBIRMacPkt_Base& other) : MacPkt(other)
{
    copy(other);
}

UWBIRMacPkt_Base::~UWBIRMacPkt_Base()
{
}

UWBIRMacPkt_Base& UWBIRMacPkt_Base::operator=(const UWBIRMacPkt_Base& other)
{
    if (this==&other) return *this;
    MacPkt::operator=(other);
    copy(other);
    return *this;
}

void UWBIRMacPkt_Base::copy(const UWBIRMacPkt_Base& other)
{
    this->nbSymbols_var = other.nbSymbols_var;
}

void UWBIRMacPkt_Base::parsimPack(cCommBuffer *b)
{
    MacPkt::parsimPack(b);
    // field bitValues is abstract -- please do packing in customized class
    doPacking(b,this->nbSymbols_var);
}

void UWBIRMacPkt_Base::parsimUnpack(cCommBuffer *b)
{
    MacPkt::parsimUnpack(b);
    // field bitValues is abstract -- please do unpacking in customized class
    doUnpacking(b,this->nbSymbols_var);
}

int UWBIRMacPkt_Base::getNbSymbols() const
{
    return nbSymbols_var;
}

void UWBIRMacPkt_Base::setNbSymbols(int nbSymbols)
{
    this->nbSymbols_var = nbSymbols;
}

class UWBIRMacPktDescriptor : public cClassDescriptor
{
  public:
    UWBIRMacPktDescriptor();
    virtual ~UWBIRMacPktDescriptor();

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

Register_ClassDescriptor(UWBIRMacPktDescriptor);

UWBIRMacPktDescriptor::UWBIRMacPktDescriptor() : cClassDescriptor("UWBIRMacPkt", "MacPkt")
{
}

UWBIRMacPktDescriptor::~UWBIRMacPktDescriptor()
{
}

bool UWBIRMacPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UWBIRMacPkt_Base *>(obj)!=NULL;
}

const char *UWBIRMacPktDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UWBIRMacPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int UWBIRMacPktDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *UWBIRMacPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "bitValues",
        "nbSymbols",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int UWBIRMacPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bitValues")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nbSymbols")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UWBIRMacPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *UWBIRMacPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UWBIRMacPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UWBIRMacPkt_Base *pp = (UWBIRMacPkt_Base *)object; (void)pp;
    switch (field) {
        case 0: return pp->getBitValuesArraySize();
        default: return 0;
    }
}

std::string UWBIRMacPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UWBIRMacPkt_Base *pp = (UWBIRMacPkt_Base *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getBitValues(i));
        case 1: return long2string(pp->getNbSymbols());
        default: return "";
    }
}

bool UWBIRMacPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UWBIRMacPkt_Base *pp = (UWBIRMacPkt_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setBitValues(i,string2bool(value)); return true;
        case 1: pp->setNbSymbols(string2long(value)); return true;
        default: return false;
    }
}

const char *UWBIRMacPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *UWBIRMacPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UWBIRMacPkt_Base *pp = (UWBIRMacPkt_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


