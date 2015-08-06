//
// Generated file, do not edit! Created by nedtool 4.6 from vanetrouting/base/Vanet_ControlInfoBreakLink.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Vanet_ControlInfoBreakLink_m.h"

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

Register_Class(Vanet_ControlInfoBreakLink);

Vanet_ControlInfoBreakLink::Vanet_ControlInfoBreakLink() : ::cObject()
{
}

Vanet_ControlInfoBreakLink::Vanet_ControlInfoBreakLink(const Vanet_ControlInfoBreakLink& other) : ::cObject(other)
{
    copy(other);
}

Vanet_ControlInfoBreakLink::~Vanet_ControlInfoBreakLink()
{
}

Vanet_ControlInfoBreakLink& Vanet_ControlInfoBreakLink::operator=(const Vanet_ControlInfoBreakLink& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void Vanet_ControlInfoBreakLink::copy(const Vanet_ControlInfoBreakLink& other)
{
    this->dest_var = other.dest_var;
}

void Vanet_ControlInfoBreakLink::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->dest_var);
}

void Vanet_ControlInfoBreakLink::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->dest_var);
}

MACAddress& Vanet_ControlInfoBreakLink::getDest()
{
    return dest_var;
}

void Vanet_ControlInfoBreakLink::setDest(const MACAddress& dest)
{
    this->dest_var = dest;
}

class Vanet_ControlInfoBreakLinkDescriptor : public cClassDescriptor
{
  public:
    Vanet_ControlInfoBreakLinkDescriptor();
    virtual ~Vanet_ControlInfoBreakLinkDescriptor();

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

Register_ClassDescriptor(Vanet_ControlInfoBreakLinkDescriptor);

Vanet_ControlInfoBreakLinkDescriptor::Vanet_ControlInfoBreakLinkDescriptor() : cClassDescriptor("Vanet_ControlInfoBreakLink", "cObject")
{
}

Vanet_ControlInfoBreakLinkDescriptor::~Vanet_ControlInfoBreakLinkDescriptor()
{
}

bool Vanet_ControlInfoBreakLinkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Vanet_ControlInfoBreakLink *>(obj)!=NULL;
}

const char *Vanet_ControlInfoBreakLinkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Vanet_ControlInfoBreakLinkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Vanet_ControlInfoBreakLinkDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Vanet_ControlInfoBreakLinkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "dest",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Vanet_ControlInfoBreakLinkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Vanet_ControlInfoBreakLinkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Vanet_ControlInfoBreakLinkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Vanet_ControlInfoBreakLinkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Vanet_ControlInfoBreakLink *pp = (Vanet_ControlInfoBreakLink *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Vanet_ControlInfoBreakLinkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Vanet_ControlInfoBreakLink *pp = (Vanet_ControlInfoBreakLink *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDest(); return out.str();}
        default: return "";
    }
}

bool Vanet_ControlInfoBreakLinkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Vanet_ControlInfoBreakLink *pp = (Vanet_ControlInfoBreakLink *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Vanet_ControlInfoBreakLinkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *Vanet_ControlInfoBreakLinkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Vanet_ControlInfoBreakLink *pp = (Vanet_ControlInfoBreakLink *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDest()); break;
        default: return NULL;
    }
}


