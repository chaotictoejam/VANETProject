//
// Generated file, do not edit! Created by nedtool 4.6 from routing/extras/dymo_fau/DYMO_UERR.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DYMO_UERR_m.h"

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

Register_Class(DYMO_UERR);

DYMO_UERR::DYMO_UERR(const char *name, int kind) : ::inet::inetmanet::DYMO_PacketBBMessage(name,kind)
{
    this->uelemTargetAddress_var = 0;
    this->uerrTargetAddress_var = 0;
    this->uelemType_var = 0;
}

DYMO_UERR::DYMO_UERR(const DYMO_UERR& other) : ::inet::inetmanet::DYMO_PacketBBMessage(other)
{
    copy(other);
}

DYMO_UERR::~DYMO_UERR()
{
}

DYMO_UERR& DYMO_UERR::operator=(const DYMO_UERR& other)
{
    if (this==&other) return *this;
    ::inet::inetmanet::DYMO_PacketBBMessage::operator=(other);
    copy(other);
    return *this;
}

void DYMO_UERR::copy(const DYMO_UERR& other)
{
    this->uelemTargetAddress_var = other.uelemTargetAddress_var;
    this->uerrTargetAddress_var = other.uerrTargetAddress_var;
    this->uelemType_var = other.uelemType_var;
}

void DYMO_UERR::parsimPack(cCommBuffer *b)
{
    ::inet::inetmanet::DYMO_PacketBBMessage::parsimPack(b);
    doPacking(b,this->uelemTargetAddress_var);
    doPacking(b,this->uerrTargetAddress_var);
    doPacking(b,this->uelemType_var);
}

void DYMO_UERR::parsimUnpack(cCommBuffer *b)
{
    ::inet::inetmanet::DYMO_PacketBBMessage::parsimUnpack(b);
    doUnpacking(b,this->uelemTargetAddress_var);
    doUnpacking(b,this->uerrTargetAddress_var);
    doUnpacking(b,this->uelemType_var);
}

int DYMO_UERR::getUelemTargetAddress() const
{
    return uelemTargetAddress_var;
}

void DYMO_UERR::setUelemTargetAddress(int uelemTargetAddress)
{
    this->uelemTargetAddress_var = uelemTargetAddress;
}

int DYMO_UERR::getUerrTargetAddress() const
{
    return uerrTargetAddress_var;
}

void DYMO_UERR::setUerrTargetAddress(int uerrTargetAddress)
{
    this->uerrTargetAddress_var = uerrTargetAddress;
}

char DYMO_UERR::getUelemType() const
{
    return uelemType_var;
}

void DYMO_UERR::setUelemType(char uelemType)
{
    this->uelemType_var = uelemType;
}

class DYMO_UERRDescriptor : public cClassDescriptor
{
  public:
    DYMO_UERRDescriptor();
    virtual ~DYMO_UERRDescriptor();

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

Register_ClassDescriptor(DYMO_UERRDescriptor);

DYMO_UERRDescriptor::DYMO_UERRDescriptor() : cClassDescriptor("inet::inetmanet::DYMO_UERR", "inet::inetmanet::DYMO_PacketBBMessage")
{
}

DYMO_UERRDescriptor::~DYMO_UERRDescriptor()
{
}

bool DYMO_UERRDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DYMO_UERR *>(obj)!=NULL;
}

const char *DYMO_UERRDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DYMO_UERRDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int DYMO_UERRDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DYMO_UERRDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "uelemTargetAddress",
        "uerrTargetAddress",
        "uelemType",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int DYMO_UERRDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='u' && strcmp(fieldName, "uelemTargetAddress")==0) return base+0;
    if (fieldName[0]=='u' && strcmp(fieldName, "uerrTargetAddress")==0) return base+1;
    if (fieldName[0]=='u' && strcmp(fieldName, "uelemType")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DYMO_UERRDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
        "char",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *DYMO_UERRDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DYMO_UERRDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_UERR *pp = (DYMO_UERR *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DYMO_UERRDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_UERR *pp = (DYMO_UERR *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getUelemTargetAddress());
        case 1: return long2string(pp->getUerrTargetAddress());
        case 2: return long2string(pp->getUelemType());
        default: return "";
    }
}

bool DYMO_UERRDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_UERR *pp = (DYMO_UERR *)object; (void)pp;
    switch (field) {
        case 0: pp->setUelemTargetAddress(string2long(value)); return true;
        case 1: pp->setUerrTargetAddress(string2long(value)); return true;
        case 2: pp->setUelemType(string2long(value)); return true;
        default: return false;
    }
}

const char *DYMO_UERRDescriptor::getFieldStructName(void *object, int field) const
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

void *DYMO_UERRDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_UERR *pp = (DYMO_UERR *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inetmanet
} // namespace inet

