//
// Generated file, do not edit! Created by nedtool 4.6 from linklayer/channels/LinkFailureMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LinkFailureMessage_m.h"

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

Register_Class(LinkFailureMessage);

LinkFailureMessage::LinkFailureMessage(const char *name, int kind) : ::cMessage(name,kind)
{
    this->module_id_var = 0;
    this->port_id_var = 0;
    this->description_var = 0;
}

LinkFailureMessage::LinkFailureMessage(const LinkFailureMessage& other) : ::cMessage(other)
{
    copy(other);
}

LinkFailureMessage::~LinkFailureMessage()
{
}

LinkFailureMessage& LinkFailureMessage::operator=(const LinkFailureMessage& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void LinkFailureMessage::copy(const LinkFailureMessage& other)
{
    this->module_id_var = other.module_id_var;
    this->port_id_var = other.port_id_var;
    this->state_var = other.state_var;
    this->description_var = other.description_var;
}

void LinkFailureMessage::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->module_id_var);
    doPacking(b,this->port_id_var);
    doPacking(b,this->state_var);
    doPacking(b,this->description_var);
}

void LinkFailureMessage::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->module_id_var);
    doUnpacking(b,this->port_id_var);
    doUnpacking(b,this->state_var);
    doUnpacking(b,this->description_var);
}

int LinkFailureMessage::getModule_id() const
{
    return module_id_var;
}

void LinkFailureMessage::setModule_id(int module_id)
{
    this->module_id_var = module_id;
}

int LinkFailureMessage::getPort_id() const
{
    return port_id_var;
}

void LinkFailureMessage::setPort_id(int port_id)
{
    this->port_id_var = port_id;
}

LinkState& LinkFailureMessage::getState()
{
    return state_var;
}

void LinkFailureMessage::setState(const LinkState& state)
{
    this->state_var = state;
}

const char * LinkFailureMessage::getDescription() const
{
    return description_var.c_str();
}

void LinkFailureMessage::setDescription(const char * description)
{
    this->description_var = description;
}

class LinkFailureMessageDescriptor : public cClassDescriptor
{
  public:
    LinkFailureMessageDescriptor();
    virtual ~LinkFailureMessageDescriptor();

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

Register_ClassDescriptor(LinkFailureMessageDescriptor);

LinkFailureMessageDescriptor::LinkFailureMessageDescriptor() : cClassDescriptor("inet::LinkFailureMessage", "cMessage")
{
}

LinkFailureMessageDescriptor::~LinkFailureMessageDescriptor()
{
}

bool LinkFailureMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LinkFailureMessage *>(obj)!=NULL;
}

const char *LinkFailureMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LinkFailureMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int LinkFailureMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *LinkFailureMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "module_id",
        "port_id",
        "state",
        "description",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int LinkFailureMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "module_id")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "port_id")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "state")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "description")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LinkFailureMessageDescriptor::getFieldTypeString(void *object, int field) const
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
        "LinkState",
        "string",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *LinkFailureMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LinkFailureMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LinkFailureMessage *pp = (LinkFailureMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LinkFailureMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LinkFailureMessage *pp = (LinkFailureMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getModule_id());
        case 1: return long2string(pp->getPort_id());
        case 2: {std::stringstream out; out << pp->getState(); return out.str();}
        case 3: return oppstring2string(pp->getDescription());
        default: return "";
    }
}

bool LinkFailureMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LinkFailureMessage *pp = (LinkFailureMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setModule_id(string2long(value)); return true;
        case 1: pp->setPort_id(string2long(value)); return true;
        case 3: pp->setDescription((value)); return true;
        default: return false;
    }
}

const char *LinkFailureMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(LinkState));
        default: return NULL;
    };
}

void *LinkFailureMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LinkFailureMessage *pp = (LinkFailureMessage *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getState()); break;
        default: return NULL;
    }
}

} // namespace inet

