//
// Generated file, do not edit! Created by opp_msgc 4.4 from messages/DummyRoutePkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DummyRoutePkt_m.h"

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




Register_Class(DummyRoutePkt);

DummyRoutePkt::DummyRoutePkt(const char *name, int kind) : NetwPkt(name,kind)
{
    this->networkID_var = 0;
}

DummyRoutePkt::DummyRoutePkt(const DummyRoutePkt& other) : NetwPkt(other)
{
    copy(other);
}

DummyRoutePkt::~DummyRoutePkt()
{
}

DummyRoutePkt& DummyRoutePkt::operator=(const DummyRoutePkt& other)
{
    if (this==&other) return *this;
    NetwPkt::operator=(other);
    copy(other);
    return *this;
}

void DummyRoutePkt::copy(const DummyRoutePkt& other)
{
    this->networkID_var = other.networkID_var;
}

void DummyRoutePkt::parsimPack(cCommBuffer *b)
{
    NetwPkt::parsimPack(b);
    doPacking(b,this->networkID_var);
}

void DummyRoutePkt::parsimUnpack(cCommBuffer *b)
{
    NetwPkt::parsimUnpack(b);
    doUnpacking(b,this->networkID_var);
}

int DummyRoutePkt::getNetworkID() const
{
    return networkID_var;
}

void DummyRoutePkt::setNetworkID(int networkID)
{
    this->networkID_var = networkID;
}

class DummyRoutePktDescriptor : public cClassDescriptor
{
  public:
    DummyRoutePktDescriptor();
    virtual ~DummyRoutePktDescriptor();

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

Register_ClassDescriptor(DummyRoutePktDescriptor);

DummyRoutePktDescriptor::DummyRoutePktDescriptor() : cClassDescriptor("DummyRoutePkt", "NetwPkt")
{
}

DummyRoutePktDescriptor::~DummyRoutePktDescriptor()
{
}

bool DummyRoutePktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DummyRoutePkt *>(obj)!=NULL;
}

const char *DummyRoutePktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DummyRoutePktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int DummyRoutePktDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *DummyRoutePktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "networkID",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int DummyRoutePktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "networkID")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DummyRoutePktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *DummyRoutePktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DummyRoutePktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DummyRoutePkt *pp = (DummyRoutePkt *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DummyRoutePktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DummyRoutePkt *pp = (DummyRoutePkt *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getNetworkID());
        default: return "";
    }
}

bool DummyRoutePktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DummyRoutePkt *pp = (DummyRoutePkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setNetworkID(string2long(value)); return true;
        default: return false;
    }
}

const char *DummyRoutePktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *DummyRoutePktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DummyRoutePkt *pp = (DummyRoutePkt *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


