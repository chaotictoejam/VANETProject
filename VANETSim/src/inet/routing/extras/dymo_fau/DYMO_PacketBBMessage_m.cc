//
// Generated file, do not edit! Created by nedtool 4.6 from inet/routing/extras/dymo_fau/DYMO_PacketBBMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DYMO_PacketBBMessage_m.h"

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

Register_Class(DYMO_PacketBBMessage);

DYMO_PacketBBMessage::DYMO_PacketBBMessage(const char *name, int kind) : ::cPacket(name,kind)
{
    this->msgHdrHopLimit_var = 0;
}

DYMO_PacketBBMessage::DYMO_PacketBBMessage(const DYMO_PacketBBMessage& other) : ::cPacket(other)
{
    copy(other);
}

DYMO_PacketBBMessage::~DYMO_PacketBBMessage()
{
}

DYMO_PacketBBMessage& DYMO_PacketBBMessage::operator=(const DYMO_PacketBBMessage& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void DYMO_PacketBBMessage::copy(const DYMO_PacketBBMessage& other)
{
    this->msgHdrHopLimit_var = other.msgHdrHopLimit_var;
}

void DYMO_PacketBBMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->msgHdrHopLimit_var);
}

void DYMO_PacketBBMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->msgHdrHopLimit_var);
}

int DYMO_PacketBBMessage::getMsgHdrHopLimit() const
{
    return msgHdrHopLimit_var;
}

void DYMO_PacketBBMessage::setMsgHdrHopLimit(int msgHdrHopLimit)
{
    this->msgHdrHopLimit_var = msgHdrHopLimit;
}

class DYMO_PacketBBMessageDescriptor : public cClassDescriptor
{
  public:
    DYMO_PacketBBMessageDescriptor();
    virtual ~DYMO_PacketBBMessageDescriptor();

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

Register_ClassDescriptor(DYMO_PacketBBMessageDescriptor);

DYMO_PacketBBMessageDescriptor::DYMO_PacketBBMessageDescriptor() : cClassDescriptor("inet::inetmanet::DYMO_PacketBBMessage", "cPacket")
{
}

DYMO_PacketBBMessageDescriptor::~DYMO_PacketBBMessageDescriptor()
{
}

bool DYMO_PacketBBMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DYMO_PacketBBMessage *>(obj)!=NULL;
}

const char *DYMO_PacketBBMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DYMO_PacketBBMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int DYMO_PacketBBMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DYMO_PacketBBMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "msgHdrHopLimit",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int DYMO_PacketBBMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "msgHdrHopLimit")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DYMO_PacketBBMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *DYMO_PacketBBMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DYMO_PacketBBMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_PacketBBMessage *pp = (DYMO_PacketBBMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DYMO_PacketBBMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_PacketBBMessage *pp = (DYMO_PacketBBMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getMsgHdrHopLimit());
        default: return "";
    }
}

bool DYMO_PacketBBMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_PacketBBMessage *pp = (DYMO_PacketBBMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setMsgHdrHopLimit(string2long(value)); return true;
        default: return false;
    }
}

const char *DYMO_PacketBBMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *DYMO_PacketBBMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_PacketBBMessage *pp = (DYMO_PacketBBMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inetmanet
} // namespace inet

