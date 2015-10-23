//
// Generated file, do not edit! Created by nedtool 4.6 from routing/extras/saors/base/SAORS_RREQ.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SAORS_RREQ_m.h"

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

Register_Class(SAORS_RREQ);

SAORS_RREQ::SAORS_RREQ(const char *name, int kind) : ::inet::inetmanet::DYMO_RM(name,kind)
{
    this->minDeliveryProb_var = 0;
}

SAORS_RREQ::SAORS_RREQ(const SAORS_RREQ& other) : ::inet::inetmanet::DYMO_RM(other)
{
    copy(other);
}

SAORS_RREQ::~SAORS_RREQ()
{
}

SAORS_RREQ& SAORS_RREQ::operator=(const SAORS_RREQ& other)
{
    if (this==&other) return *this;
    ::inet::inetmanet::DYMO_RM::operator=(other);
    copy(other);
    return *this;
}

void SAORS_RREQ::copy(const SAORS_RREQ& other)
{
    this->minDeliveryProb_var = other.minDeliveryProb_var;
}

void SAORS_RREQ::parsimPack(cCommBuffer *b)
{
    ::inet::inetmanet::DYMO_RM::parsimPack(b);
    doPacking(b,this->minDeliveryProb_var);
}

void SAORS_RREQ::parsimUnpack(cCommBuffer *b)
{
    ::inet::inetmanet::DYMO_RM::parsimUnpack(b);
    doUnpacking(b,this->minDeliveryProb_var);
}

double SAORS_RREQ::getMinDeliveryProb() const
{
    return minDeliveryProb_var;
}

void SAORS_RREQ::setMinDeliveryProb(double minDeliveryProb)
{
    this->minDeliveryProb_var = minDeliveryProb;
}

class SAORS_RREQDescriptor : public cClassDescriptor
{
  public:
    SAORS_RREQDescriptor();
    virtual ~SAORS_RREQDescriptor();

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

Register_ClassDescriptor(SAORS_RREQDescriptor);

SAORS_RREQDescriptor::SAORS_RREQDescriptor() : cClassDescriptor("inet::inetmanet::SAORS_RREQ", "inet::inetmanet::DYMO_RM")
{
}

SAORS_RREQDescriptor::~SAORS_RREQDescriptor()
{
}

bool SAORS_RREQDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SAORS_RREQ *>(obj)!=NULL;
}

const char *SAORS_RREQDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SAORS_RREQDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SAORS_RREQDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SAORS_RREQDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "minDeliveryProb",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SAORS_RREQDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "minDeliveryProb")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SAORS_RREQDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SAORS_RREQDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SAORS_RREQDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_RREQ *pp = (SAORS_RREQ *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SAORS_RREQDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_RREQ *pp = (SAORS_RREQ *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getMinDeliveryProb());
        default: return "";
    }
}

bool SAORS_RREQDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_RREQ *pp = (SAORS_RREQ *)object; (void)pp;
    switch (field) {
        case 0: pp->setMinDeliveryProb(string2double(value)); return true;
        default: return false;
    }
}

const char *SAORS_RREQDescriptor::getFieldStructName(void *object, int field) const
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

void *SAORS_RREQDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_RREQ *pp = (SAORS_RREQ *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inetmanet
} // namespace inet

