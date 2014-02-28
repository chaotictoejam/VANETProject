//
// Generated file, do not edit! Created by opp_msgc 4.4 from messages/AggrPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "AggrPkt_m.h"

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




AggrPkt_Base::AggrPkt_Base(const char *name, int kind) : cPacket(name,kind)
{
}

AggrPkt_Base::AggrPkt_Base(const AggrPkt_Base& other) : cPacket(other)
{
    copy(other);
}

AggrPkt_Base::~AggrPkt_Base()
{
}

AggrPkt_Base& AggrPkt_Base::operator=(const AggrPkt_Base& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void AggrPkt_Base::copy(const AggrPkt_Base& other)
{
}

void AggrPkt_Base::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    // field storedPackets is abstract -- please do packing in customized class
}

void AggrPkt_Base::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    // field storedPackets is abstract -- please do unpacking in customized class
}

class AggrPktDescriptor : public cClassDescriptor
{
  public:
    AggrPktDescriptor();
    virtual ~AggrPktDescriptor();

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

Register_ClassDescriptor(AggrPktDescriptor);

AggrPktDescriptor::AggrPktDescriptor() : cClassDescriptor("AggrPkt", "cPacket")
{
}

AggrPktDescriptor::~AggrPktDescriptor()
{
}

bool AggrPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AggrPkt_Base *>(obj)!=NULL;
}

const char *AggrPktDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AggrPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int AggrPktDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *AggrPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "storedPackets",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int AggrPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "storedPackets")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AggrPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "pApplPkt",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *AggrPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AggrPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AggrPkt_Base *pp = (AggrPkt_Base *)object; (void)pp;
    switch (field) {
        case 0: return pp->getStoredPacketsArraySize();
        default: return 0;
    }
}

std::string AggrPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AggrPkt_Base *pp = (AggrPkt_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getStoredPackets(i); return out.str();}
        default: return "";
    }
}

bool AggrPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AggrPkt_Base *pp = (AggrPkt_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *AggrPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "pApplPkt",
    };
    return (field>=0 && field<1) ? fieldStructNames[field] : NULL;
}

void *AggrPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AggrPkt_Base *pp = (AggrPkt_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getStoredPackets(i)); break;
        default: return NULL;
    }
}


