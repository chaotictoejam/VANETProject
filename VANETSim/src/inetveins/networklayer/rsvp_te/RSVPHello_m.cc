//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/networklayer/rsvp_te/RSVPHello.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RSVPHello_m.h"

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



namespace inetveins {

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

RSVPHelloMsg_Base::RSVPHelloMsg_Base(const char *name, int kind) : ::inetveins::RSVPMessage(name,kind)
{
    this->request_var = 0;
    this->ack_var = 0;
    this->srcInstance_var = 0;
    this->dstInstance_var = 0;
    this->rsvpKind_var = HELLO_MESSAGE;
}

RSVPHelloMsg_Base::RSVPHelloMsg_Base(const RSVPHelloMsg_Base& other) : ::inetveins::RSVPMessage(other)
{
    copy(other);
}

RSVPHelloMsg_Base::~RSVPHelloMsg_Base()
{
}

RSVPHelloMsg_Base& RSVPHelloMsg_Base::operator=(const RSVPHelloMsg_Base& other)
{
    if (this==&other) return *this;
    ::inetveins::RSVPMessage::operator=(other);
    copy(other);
    return *this;
}

void RSVPHelloMsg_Base::copy(const RSVPHelloMsg_Base& other)
{
    this->request_var = other.request_var;
    this->ack_var = other.ack_var;
    this->srcInstance_var = other.srcInstance_var;
    this->dstInstance_var = other.dstInstance_var;
    this->rsvpKind_var = other.rsvpKind_var;
}

void RSVPHelloMsg_Base::parsimPack(cCommBuffer *b)
{
    ::inetveins::RSVPMessage::parsimPack(b);
    doPacking(b,this->request_var);
    doPacking(b,this->ack_var);
    doPacking(b,this->srcInstance_var);
    doPacking(b,this->dstInstance_var);
    doPacking(b,this->rsvpKind_var);
}

void RSVPHelloMsg_Base::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::RSVPMessage::parsimUnpack(b);
    doUnpacking(b,this->request_var);
    doUnpacking(b,this->ack_var);
    doUnpacking(b,this->srcInstance_var);
    doUnpacking(b,this->dstInstance_var);
    doUnpacking(b,this->rsvpKind_var);
}

bool RSVPHelloMsg_Base::getRequest() const
{
    return request_var;
}

void RSVPHelloMsg_Base::setRequest(bool request)
{
    this->request_var = request;
}

bool RSVPHelloMsg_Base::getAck() const
{
    return ack_var;
}

void RSVPHelloMsg_Base::setAck(bool ack)
{
    this->ack_var = ack;
}

int RSVPHelloMsg_Base::getSrcInstance() const
{
    return srcInstance_var;
}

void RSVPHelloMsg_Base::setSrcInstance(int srcInstance)
{
    this->srcInstance_var = srcInstance;
}

int RSVPHelloMsg_Base::getDstInstance() const
{
    return dstInstance_var;
}

void RSVPHelloMsg_Base::setDstInstance(int dstInstance)
{
    this->dstInstance_var = dstInstance;
}

int RSVPHelloMsg_Base::getRsvpKind() const
{
    return rsvpKind_var;
}

void RSVPHelloMsg_Base::setRsvpKind(int rsvpKind)
{
    this->rsvpKind_var = rsvpKind;
}

class RSVPHelloMsgDescriptor : public cClassDescriptor
{
  public:
    RSVPHelloMsgDescriptor();
    virtual ~RSVPHelloMsgDescriptor();

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

Register_ClassDescriptor(RSVPHelloMsgDescriptor);

RSVPHelloMsgDescriptor::RSVPHelloMsgDescriptor() : cClassDescriptor("inetveins::RSVPHelloMsg", "inetveins::RSVPMessage")
{
}

RSVPHelloMsgDescriptor::~RSVPHelloMsgDescriptor()
{
}

bool RSVPHelloMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPHelloMsg_Base *>(obj)!=NULL;
}

const char *RSVPHelloMsgDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPHelloMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int RSVPHelloMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *RSVPHelloMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "request",
        "ack",
        "srcInstance",
        "dstInstance",
        "rsvpKind",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int RSVPHelloMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "request")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "ack")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcInstance")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "dstInstance")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "rsvpKind")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RSVPHelloMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "bool",
        "int",
        "int",
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *RSVPHelloMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPHelloMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPHelloMsg_Base *pp = (RSVPHelloMsg_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RSVPHelloMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPHelloMsg_Base *pp = (RSVPHelloMsg_Base *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getRequest());
        case 1: return bool2string(pp->getAck());
        case 2: return long2string(pp->getSrcInstance());
        case 3: return long2string(pp->getDstInstance());
        case 4: return long2string(pp->getRsvpKind());
        default: return "";
    }
}

bool RSVPHelloMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPHelloMsg_Base *pp = (RSVPHelloMsg_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setRequest(string2bool(value)); return true;
        case 1: pp->setAck(string2bool(value)); return true;
        case 2: pp->setSrcInstance(string2long(value)); return true;
        case 3: pp->setDstInstance(string2long(value)); return true;
        case 4: pp->setRsvpKind(string2long(value)); return true;
        default: return false;
    }
}

const char *RSVPHelloMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *RSVPHelloMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPHelloMsg_Base *pp = (RSVPHelloMsg_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inetveins

