//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/tcpapp/GenericAppMsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "GenericAppMsg_m.h"

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

Register_Class(GenericAppMsg);

GenericAppMsg::GenericAppMsg(const char *name, int kind) : ::cPacket(name,kind)
{
    this->expectedReplyLength_var = 0;
    this->replyDelay_var = 0;
    this->serverClose_var = 0;
}

GenericAppMsg::GenericAppMsg(const GenericAppMsg& other) : ::cPacket(other)
{
    copy(other);
}

GenericAppMsg::~GenericAppMsg()
{
}

GenericAppMsg& GenericAppMsg::operator=(const GenericAppMsg& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void GenericAppMsg::copy(const GenericAppMsg& other)
{
    this->expectedReplyLength_var = other.expectedReplyLength_var;
    this->replyDelay_var = other.replyDelay_var;
    this->serverClose_var = other.serverClose_var;
}

void GenericAppMsg::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->expectedReplyLength_var);
    doPacking(b,this->replyDelay_var);
    doPacking(b,this->serverClose_var);
}

void GenericAppMsg::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->expectedReplyLength_var);
    doUnpacking(b,this->replyDelay_var);
    doUnpacking(b,this->serverClose_var);
}

int GenericAppMsg::getExpectedReplyLength() const
{
    return expectedReplyLength_var;
}

void GenericAppMsg::setExpectedReplyLength(int expectedReplyLength)
{
    this->expectedReplyLength_var = expectedReplyLength;
}

double GenericAppMsg::getReplyDelay() const
{
    return replyDelay_var;
}

void GenericAppMsg::setReplyDelay(double replyDelay)
{
    this->replyDelay_var = replyDelay;
}

bool GenericAppMsg::getServerClose() const
{
    return serverClose_var;
}

void GenericAppMsg::setServerClose(bool serverClose)
{
    this->serverClose_var = serverClose;
}

class GenericAppMsgDescriptor : public cClassDescriptor
{
  public:
    GenericAppMsgDescriptor();
    virtual ~GenericAppMsgDescriptor();

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

Register_ClassDescriptor(GenericAppMsgDescriptor);

GenericAppMsgDescriptor::GenericAppMsgDescriptor() : cClassDescriptor("inet::GenericAppMsg", "cPacket")
{
}

GenericAppMsgDescriptor::~GenericAppMsgDescriptor()
{
}

bool GenericAppMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GenericAppMsg *>(obj)!=NULL;
}

const char *GenericAppMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GenericAppMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int GenericAppMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *GenericAppMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "expectedReplyLength",
        "replyDelay",
        "serverClose",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int GenericAppMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "expectedReplyLength")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "replyDelay")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "serverClose")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GenericAppMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "double",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *GenericAppMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GenericAppMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GenericAppMsg *pp = (GenericAppMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GenericAppMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GenericAppMsg *pp = (GenericAppMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getExpectedReplyLength());
        case 1: return double2string(pp->getReplyDelay());
        case 2: return bool2string(pp->getServerClose());
        default: return "";
    }
}

bool GenericAppMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GenericAppMsg *pp = (GenericAppMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setExpectedReplyLength(string2long(value)); return true;
        case 1: pp->setReplyDelay(string2double(value)); return true;
        case 2: pp->setServerClose(string2bool(value)); return true;
        default: return false;
    }
}

const char *GenericAppMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *GenericAppMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GenericAppMsg *pp = (GenericAppMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inet

