//
// Generated file, do not edit! Created by nedtool 4.6 from routing/extras/saors/base/SAORS_RREP.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SAORS_RREP_m.h"

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

Register_Class(SAORS_RREP);

SAORS_RREP::SAORS_RREP(const char *name, int kind) : ::inet::inetmanet::DYMO_RM(name,kind)
{
    this->deliveryProb_var = 0;
}

SAORS_RREP::SAORS_RREP(const SAORS_RREP& other) : ::inet::inetmanet::DYMO_RM(other)
{
    copy(other);
}

SAORS_RREP::~SAORS_RREP()
{
}

SAORS_RREP& SAORS_RREP::operator=(const SAORS_RREP& other)
{
    if (this==&other) return *this;
    ::inet::inetmanet::DYMO_RM::operator=(other);
    copy(other);
    return *this;
}

void SAORS_RREP::copy(const SAORS_RREP& other)
{
    this->searchedNode_var = other.searchedNode_var;
    this->deliveryProb_var = other.deliveryProb_var;
}

void SAORS_RREP::parsimPack(cCommBuffer *b)
{
    ::inet::inetmanet::DYMO_RM::parsimPack(b);
    doPacking(b,this->searchedNode_var);
    doPacking(b,this->deliveryProb_var);
}

void SAORS_RREP::parsimUnpack(cCommBuffer *b)
{
    ::inet::inetmanet::DYMO_RM::parsimUnpack(b);
    doUnpacking(b,this->searchedNode_var);
    doUnpacking(b,this->deliveryProb_var);
}

DYMO_AddressBlock& SAORS_RREP::getSearchedNode()
{
    return searchedNode_var;
}

void SAORS_RREP::setSearchedNode(const DYMO_AddressBlock& searchedNode)
{
    this->searchedNode_var = searchedNode;
}

double SAORS_RREP::getDeliveryProb() const
{
    return deliveryProb_var;
}

void SAORS_RREP::setDeliveryProb(double deliveryProb)
{
    this->deliveryProb_var = deliveryProb;
}

class SAORS_RREPDescriptor : public cClassDescriptor
{
  public:
    SAORS_RREPDescriptor();
    virtual ~SAORS_RREPDescriptor();

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

Register_ClassDescriptor(SAORS_RREPDescriptor);

SAORS_RREPDescriptor::SAORS_RREPDescriptor() : cClassDescriptor("inet::inetmanet::SAORS_RREP", "inet::inetmanet::DYMO_RM")
{
}

SAORS_RREPDescriptor::~SAORS_RREPDescriptor()
{
}

bool SAORS_RREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SAORS_RREP *>(obj)!=NULL;
}

const char *SAORS_RREPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SAORS_RREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SAORS_RREPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *SAORS_RREPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "searchedNode",
        "deliveryProb",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int SAORS_RREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "searchedNode")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "deliveryProb")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SAORS_RREPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "DYMO_AddressBlock",
        "double",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *SAORS_RREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SAORS_RREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_RREP *pp = (SAORS_RREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SAORS_RREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_RREP *pp = (SAORS_RREP *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSearchedNode(); return out.str();}
        case 1: return double2string(pp->getDeliveryProb());
        default: return "";
    }
}

bool SAORS_RREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_RREP *pp = (SAORS_RREP *)object; (void)pp;
    switch (field) {
        case 1: pp->setDeliveryProb(string2double(value)); return true;
        default: return false;
    }
}

const char *SAORS_RREPDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(DYMO_AddressBlock));
        default: return NULL;
    };
}

void *SAORS_RREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_RREP *pp = (SAORS_RREP *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSearchedNode()); break;
        default: return NULL;
    }
}

} // namespace inetmanet
} // namespace inet

