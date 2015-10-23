//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/rsvp_te/RSVPPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RSVPPacket_m.h"

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

Register_Class(RSVPMessage);

RSVPMessage::RSVPMessage(const char *name, int kind) : ::cPacket(name,kind)
{
    this->rsvpKind_var = 0;
}

RSVPMessage::RSVPMessage(const RSVPMessage& other) : ::cPacket(other)
{
    copy(other);
}

RSVPMessage::~RSVPMessage()
{
}

RSVPMessage& RSVPMessage::operator=(const RSVPMessage& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void RSVPMessage::copy(const RSVPMessage& other)
{
    this->rsvpKind_var = other.rsvpKind_var;
}

void RSVPMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->rsvpKind_var);
}

void RSVPMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->rsvpKind_var);
}

int RSVPMessage::getRsvpKind() const
{
    return rsvpKind_var;
}

void RSVPMessage::setRsvpKind(int rsvpKind)
{
    this->rsvpKind_var = rsvpKind;
}

class RSVPMessageDescriptor : public cClassDescriptor
{
  public:
    RSVPMessageDescriptor();
    virtual ~RSVPMessageDescriptor();

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

Register_ClassDescriptor(RSVPMessageDescriptor);

RSVPMessageDescriptor::RSVPMessageDescriptor() : cClassDescriptor("inet::RSVPMessage", "cPacket")
{
}

RSVPMessageDescriptor::~RSVPMessageDescriptor()
{
}

bool RSVPMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPMessage *>(obj)!=NULL;
}

const char *RSVPMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"fieldNameSuffix")) return "_var";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RSVPMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RSVPMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "rsvpKind",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RSVPMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "rsvpKind")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RSVPMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RSVPMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPMessage *pp = (RSVPMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RSVPMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPMessage *pp = (RSVPMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getRsvpKind());
        default: return "";
    }
}

bool RSVPMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPMessage *pp = (RSVPMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setRsvpKind(string2long(value)); return true;
        default: return false;
    }
}

const char *RSVPMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *RSVPMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPMessage *pp = (RSVPMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

RSVPPacket_Base::RSVPPacket_Base(const char *name, int kind) : ::inet::RSVPMessage(name,kind)
{
    this->checksumValid_var = true;
}

RSVPPacket_Base::RSVPPacket_Base(const RSVPPacket_Base& other) : ::inet::RSVPMessage(other)
{
    copy(other);
}

RSVPPacket_Base::~RSVPPacket_Base()
{
}

RSVPPacket_Base& RSVPPacket_Base::operator=(const RSVPPacket_Base& other)
{
    if (this==&other) return *this;
    ::inet::RSVPMessage::operator=(other);
    copy(other);
    return *this;
}

void RSVPPacket_Base::copy(const RSVPPacket_Base& other)
{
    this->session_var = other.session_var;
    this->checksumValid_var = other.checksumValid_var;
}

void RSVPPacket_Base::parsimPack(cCommBuffer *b)
{
    ::inet::RSVPMessage::parsimPack(b);
    doPacking(b,this->session_var);
    doPacking(b,this->checksumValid_var);
}

void RSVPPacket_Base::parsimUnpack(cCommBuffer *b)
{
    ::inet::RSVPMessage::parsimUnpack(b);
    doUnpacking(b,this->session_var);
    doUnpacking(b,this->checksumValid_var);
}

SessionObj_t& RSVPPacket_Base::getSession()
{
    return session_var;
}

void RSVPPacket_Base::setSession(const SessionObj_t& session)
{
    this->session_var = session;
}

bool RSVPPacket_Base::getChecksumValid() const
{
    return checksumValid_var;
}

void RSVPPacket_Base::setChecksumValid(bool checksumValid)
{
    this->checksumValid_var = checksumValid;
}

class RSVPPacketDescriptor : public cClassDescriptor
{
  public:
    RSVPPacketDescriptor();
    virtual ~RSVPPacketDescriptor();

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

Register_ClassDescriptor(RSVPPacketDescriptor);

RSVPPacketDescriptor::RSVPPacketDescriptor() : cClassDescriptor("inet::RSVPPacket", "inet::RSVPMessage")
{
}

RSVPPacketDescriptor::~RSVPPacketDescriptor()
{
}

bool RSVPPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPPacket_Base *>(obj)!=NULL;
}

const char *RSVPPacketDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RSVPPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RSVPPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "session",
        "checksumValid",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RSVPPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "session")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "checksumValid")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RSVPPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "SessionObj_t",
        "bool",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *RSVPPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPacket_Base *pp = (RSVPPacket_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RSVPPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPacket_Base *pp = (RSVPPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSession(); return out.str();}
        case 1: return bool2string(pp->getChecksumValid());
        default: return "";
    }
}

bool RSVPPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPacket_Base *pp = (RSVPPacket_Base *)object; (void)pp;
    switch (field) {
        case 1: pp->setChecksumValid(string2bool(value)); return true;
        default: return false;
    }
}

const char *RSVPPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(SessionObj_t));
        default: return NULL;
    };
}

void *RSVPPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPacket_Base *pp = (RSVPPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSession()); break;
        default: return NULL;
    }
}

} // namespace inet

