//
// Generated file, do not edit! Created by nedtool 4.6 from wpan/networklayer/contract/Ieee802154NetworkCtrlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee802154NetworkCtrlInfo_m.h"

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

Register_Class(Ieee802154NetworkCtrlInfo);

Ieee802154NetworkCtrlInfo::Ieee802154NetworkCtrlInfo(const char *name, int kind) : ::cMessage(name,kind)
{
    this->toParent_var = 0;
    this->destName_var = 0;
    this->netwAddr_var = -1;
}

Ieee802154NetworkCtrlInfo::Ieee802154NetworkCtrlInfo(const Ieee802154NetworkCtrlInfo& other) : ::cMessage(other)
{
    copy(other);
}

Ieee802154NetworkCtrlInfo::~Ieee802154NetworkCtrlInfo()
{
}

Ieee802154NetworkCtrlInfo& Ieee802154NetworkCtrlInfo::operator=(const Ieee802154NetworkCtrlInfo& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154NetworkCtrlInfo::copy(const Ieee802154NetworkCtrlInfo& other)
{
    this->toParent_var = other.toParent_var;
    this->destName_var = other.destName_var;
    this->netwAddr_var = other.netwAddr_var;
}

void Ieee802154NetworkCtrlInfo::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->toParent_var);
    doPacking(b,this->destName_var);
    doPacking(b,this->netwAddr_var);
}

void Ieee802154NetworkCtrlInfo::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->toParent_var);
    doUnpacking(b,this->destName_var);
    doUnpacking(b,this->netwAddr_var);
}

bool Ieee802154NetworkCtrlInfo::getToParent() const
{
    return toParent_var;
}

void Ieee802154NetworkCtrlInfo::setToParent(bool toParent)
{
    this->toParent_var = toParent;
}

const char * Ieee802154NetworkCtrlInfo::getDestName() const
{
    return destName_var.c_str();
}

void Ieee802154NetworkCtrlInfo::setDestName(const char * destName)
{
    this->destName_var = destName;
}

int64_t Ieee802154NetworkCtrlInfo::getNetwAddr() const
{
    return netwAddr_var;
}

void Ieee802154NetworkCtrlInfo::setNetwAddr(int64_t netwAddr)
{
    this->netwAddr_var = netwAddr;
}

class Ieee802154NetworkCtrlInfoDescriptor : public cClassDescriptor
{
  public:
    Ieee802154NetworkCtrlInfoDescriptor();
    virtual ~Ieee802154NetworkCtrlInfoDescriptor();

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

Register_ClassDescriptor(Ieee802154NetworkCtrlInfoDescriptor);

Ieee802154NetworkCtrlInfoDescriptor::Ieee802154NetworkCtrlInfoDescriptor() : cClassDescriptor("Ieee802154NetworkCtrlInfo", "cMessage")
{
}

Ieee802154NetworkCtrlInfoDescriptor::~Ieee802154NetworkCtrlInfoDescriptor()
{
}

bool Ieee802154NetworkCtrlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154NetworkCtrlInfo *>(obj)!=NULL;
}

const char *Ieee802154NetworkCtrlInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154NetworkCtrlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int Ieee802154NetworkCtrlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *Ieee802154NetworkCtrlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "toParent",
        "destName",
        "netwAddr",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int Ieee802154NetworkCtrlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "toParent")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destName")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "netwAddr")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154NetworkCtrlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "string",
        "int64_t",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154NetworkCtrlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154NetworkCtrlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154NetworkCtrlInfo *pp = (Ieee802154NetworkCtrlInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154NetworkCtrlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154NetworkCtrlInfo *pp = (Ieee802154NetworkCtrlInfo *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getToParent());
        case 1: return oppstring2string(pp->getDestName());
        case 2: return int642string(pp->getNetwAddr());
        default: return "";
    }
}

bool Ieee802154NetworkCtrlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154NetworkCtrlInfo *pp = (Ieee802154NetworkCtrlInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setToParent(string2bool(value)); return true;
        case 1: pp->setDestName((value)); return true;
        case 2: pp->setNetwAddr(string2int64(value)); return true;
        default: return false;
    }
}

const char *Ieee802154NetworkCtrlInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee802154NetworkCtrlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154NetworkCtrlInfo *pp = (Ieee802154NetworkCtrlInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


