//
// Generated file, do not edit! Created by nedtool 4.6 from routing/bgpv4/BGPMessage/BGPKeepAlive.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "BGPKeepAlive_m.h"

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
namespace bgp {

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

Register_Class(BGPKeepAliveMessage);

BGPKeepAliveMessage::BGPKeepAliveMessage(const char *name, int kind) : ::inet::bgp::BGPHeader(name,kind)
{
    this->setType(BGP_KEEPALIVE);
}

BGPKeepAliveMessage::BGPKeepAliveMessage(const BGPKeepAliveMessage& other) : ::inet::bgp::BGPHeader(other)
{
    copy(other);
}

BGPKeepAliveMessage::~BGPKeepAliveMessage()
{
}

BGPKeepAliveMessage& BGPKeepAliveMessage::operator=(const BGPKeepAliveMessage& other)
{
    if (this==&other) return *this;
    ::inet::bgp::BGPHeader::operator=(other);
    copy(other);
    return *this;
}

void BGPKeepAliveMessage::copy(const BGPKeepAliveMessage& other)
{
}

void BGPKeepAliveMessage::parsimPack(cCommBuffer *b)
{
    ::inet::bgp::BGPHeader::parsimPack(b);
}

void BGPKeepAliveMessage::parsimUnpack(cCommBuffer *b)
{
    ::inet::bgp::BGPHeader::parsimUnpack(b);
}

class BGPKeepAliveMessageDescriptor : public cClassDescriptor
{
  public:
    BGPKeepAliveMessageDescriptor();
    virtual ~BGPKeepAliveMessageDescriptor();

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

Register_ClassDescriptor(BGPKeepAliveMessageDescriptor);

BGPKeepAliveMessageDescriptor::BGPKeepAliveMessageDescriptor() : cClassDescriptor("inet::bgp::BGPKeepAliveMessage", "inet::bgp::BGPHeader")
{
}

BGPKeepAliveMessageDescriptor::~BGPKeepAliveMessageDescriptor()
{
}

bool BGPKeepAliveMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPKeepAliveMessage *>(obj)!=NULL;
}

const char *BGPKeepAliveMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPKeepAliveMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int BGPKeepAliveMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *BGPKeepAliveMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int BGPKeepAliveMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPKeepAliveMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *BGPKeepAliveMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPKeepAliveMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPKeepAliveMessage *pp = (BGPKeepAliveMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPKeepAliveMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPKeepAliveMessage *pp = (BGPKeepAliveMessage *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool BGPKeepAliveMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPKeepAliveMessage *pp = (BGPKeepAliveMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *BGPKeepAliveMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *BGPKeepAliveMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPKeepAliveMessage *pp = (BGPKeepAliveMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace bgp
} // namespace inet

