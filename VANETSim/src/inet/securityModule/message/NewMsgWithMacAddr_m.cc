//
// Generated file, do not edit! Created by nedtool 4.6 from inet/securityModule/message/NewMsgWithMacAddr.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "NewMsgWithMacAddr_m.h"

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

Register_Class(newcMessage);

newcMessage::newcMessage(const char *name, int kind) : ::cMessage(name,kind)
{
}

newcMessage::newcMessage(const newcMessage& other) : ::cMessage(other)
{
    copy(other);
}

newcMessage::~newcMessage()
{
}

newcMessage& newcMessage::operator=(const newcMessage& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void newcMessage::copy(const newcMessage& other)
{
    this->MeshMACAddress_AuthTimeout_var = other.MeshMACAddress_AuthTimeout_var;
    this->senderMACAddr_var = other.senderMACAddr_var;
}

void newcMessage::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->MeshMACAddress_AuthTimeout_var);
    doPacking(b,this->senderMACAddr_var);
}

void newcMessage::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->MeshMACAddress_AuthTimeout_var);
    doUnpacking(b,this->senderMACAddr_var);
}

MACAddress& newcMessage::getMeshMACAddress_AuthTimeout()
{
    return MeshMACAddress_AuthTimeout_var;
}

void newcMessage::setMeshMACAddress_AuthTimeout(const MACAddress& MeshMACAddress_AuthTimeout)
{
    this->MeshMACAddress_AuthTimeout_var = MeshMACAddress_AuthTimeout;
}

MACAddress& newcMessage::getSenderMACAddr()
{
    return senderMACAddr_var;
}

void newcMessage::setSenderMACAddr(const MACAddress& senderMACAddr)
{
    this->senderMACAddr_var = senderMACAddr;
}

class newcMessageDescriptor : public cClassDescriptor
{
  public:
    newcMessageDescriptor();
    virtual ~newcMessageDescriptor();

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

Register_ClassDescriptor(newcMessageDescriptor);

newcMessageDescriptor::newcMessageDescriptor() : cClassDescriptor("newcMessage", "cMessage")
{
}

newcMessageDescriptor::~newcMessageDescriptor()
{
}

bool newcMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<newcMessage *>(obj)!=NULL;
}

const char *newcMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int newcMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int newcMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *newcMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "MeshMACAddress_AuthTimeout",
        "senderMACAddr",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int newcMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='M' && strcmp(fieldName, "MeshMACAddress_AuthTimeout")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderMACAddr")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *newcMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "MACAddress",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *newcMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int newcMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    newcMessage *pp = (newcMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string newcMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    newcMessage *pp = (newcMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMeshMACAddress_AuthTimeout(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSenderMACAddr(); return out.str();}
        default: return "";
    }
}

bool newcMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    newcMessage *pp = (newcMessage *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *newcMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(MACAddress));
        case 1: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *newcMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    newcMessage *pp = (newcMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMeshMACAddress_AuthTimeout()); break;
        case 1: return (void *)(&pp->getSenderMACAddr()); break;
        default: return NULL;
    }
}


