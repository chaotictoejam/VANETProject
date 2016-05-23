//
// Generated file, do not edit! Created by nedtool 4.6 from inet/routing/extras/dymo_fau/DYMO_RERR.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DYMO_RERR_m.h"

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

Register_Class(DYMO_RERR);

DYMO_RERR::DYMO_RERR(const char *name, int kind) : ::inet::inetmanet::DYMO_PacketBBMessage(name,kind)
{
}

DYMO_RERR::DYMO_RERR(const DYMO_RERR& other) : ::inet::inetmanet::DYMO_PacketBBMessage(other)
{
    copy(other);
}

DYMO_RERR::~DYMO_RERR()
{
}

DYMO_RERR& DYMO_RERR::operator=(const DYMO_RERR& other)
{
    if (this==&other) return *this;
    ::inet::inetmanet::DYMO_PacketBBMessage::operator=(other);
    copy(other);
    return *this;
}

void DYMO_RERR::copy(const DYMO_RERR& other)
{
    this->unreachableNodes_var = other.unreachableNodes_var;
}

void DYMO_RERR::parsimPack(cCommBuffer *b)
{
    ::inet::inetmanet::DYMO_PacketBBMessage::parsimPack(b);
    doPacking(b,this->unreachableNodes_var);
}

void DYMO_RERR::parsimUnpack(cCommBuffer *b)
{
    ::inet::inetmanet::DYMO_PacketBBMessage::parsimUnpack(b);
    doUnpacking(b,this->unreachableNodes_var);
}

VectorOfDYMOAddressBlocks& DYMO_RERR::getUnreachableNodes()
{
    return unreachableNodes_var;
}

void DYMO_RERR::setUnreachableNodes(const VectorOfDYMOAddressBlocks& unreachableNodes)
{
    this->unreachableNodes_var = unreachableNodes;
}

class DYMO_RERRDescriptor : public cClassDescriptor
{
  public:
    DYMO_RERRDescriptor();
    virtual ~DYMO_RERRDescriptor();

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

Register_ClassDescriptor(DYMO_RERRDescriptor);

DYMO_RERRDescriptor::DYMO_RERRDescriptor() : cClassDescriptor("inet::inetmanet::DYMO_RERR", "inet::inetmanet::DYMO_PacketBBMessage")
{
}

DYMO_RERRDescriptor::~DYMO_RERRDescriptor()
{
}

bool DYMO_RERRDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DYMO_RERR *>(obj)!=NULL;
}

const char *DYMO_RERRDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DYMO_RERRDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int DYMO_RERRDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DYMO_RERRDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "unreachableNodes",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int DYMO_RERRDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='u' && strcmp(fieldName, "unreachableNodes")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DYMO_RERRDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "VectorOfDYMOAddressBlocks",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *DYMO_RERRDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DYMO_RERRDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_RERR *pp = (DYMO_RERR *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DYMO_RERRDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_RERR *pp = (DYMO_RERR *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getUnreachableNodes(); return out.str();}
        default: return "";
    }
}

bool DYMO_RERRDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_RERR *pp = (DYMO_RERR *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *DYMO_RERRDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(VectorOfDYMOAddressBlocks));
        default: return NULL;
    };
}

void *DYMO_RERRDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_RERR *pp = (DYMO_RERR *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getUnreachableNodes()); break;
        default: return NULL;
    }
}

} // namespace inetmanet
} // namespace inet

