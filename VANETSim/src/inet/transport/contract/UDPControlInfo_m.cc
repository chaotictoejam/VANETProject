//
// Generated file, do not edit! Created by nedtool 4.6 from src/inet/transport/contract/UDPControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "UDPControlInfo_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("UDPCommandCode");
    if (!e) enums.getInstance()->add(e = new cEnum("UDPCommandCode"));
    e->insert(UDP_C_DATA, "UDP_C_DATA");
    e->insert(UDP_C_BIND, "UDP_C_BIND");
    e->insert(UDP_C_CONNECT, "UDP_C_CONNECT");
    e->insert(UDP_C_SETOPTION, "UDP_C_SETOPTION");
    e->insert(UDP_C_CLOSE, "UDP_C_CLOSE");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("UDPStatusInd");
    if (!e) enums.getInstance()->add(e = new cEnum("UDPStatusInd"));
    e->insert(UDP_I_DATA, "UDP_I_DATA");
    e->insert(UDP_I_ERROR, "UDP_I_ERROR");
);

Register_Class(UDPControlInfo);

UDPControlInfo::UDPControlInfo() : ::cObject()
{
    this->sockId_var = -1;
}

UDPControlInfo::UDPControlInfo(const UDPControlInfo& other) : ::cObject(other)
{
    copy(other);
}

UDPControlInfo::~UDPControlInfo()
{
}

UDPControlInfo& UDPControlInfo::operator=(const UDPControlInfo& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void UDPControlInfo::copy(const UDPControlInfo& other)
{
    this->sockId_var = other.sockId_var;
}

void UDPControlInfo::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->sockId_var);
}

void UDPControlInfo::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->sockId_var);
}

int UDPControlInfo::getSockId() const
{
    return sockId_var;
}

void UDPControlInfo::setSockId(int sockId)
{
    this->sockId_var = sockId;
}

class UDPControlInfoDescriptor : public cClassDescriptor
{
  public:
    UDPControlInfoDescriptor();
    virtual ~UDPControlInfoDescriptor();

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

Register_ClassDescriptor(UDPControlInfoDescriptor);

UDPControlInfoDescriptor::UDPControlInfoDescriptor() : cClassDescriptor("UDPControlInfo", "cObject")
{
}

UDPControlInfoDescriptor::~UDPControlInfoDescriptor()
{
}

bool UDPControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPControlInfo *>(obj)!=NULL;
}

const char *UDPControlInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UDPControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sockId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int UDPControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sockId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPControlInfoDescriptor::getFieldTypeString(void *object, int field) const
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

const char *UDPControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPControlInfo *pp = (UDPControlInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPControlInfo *pp = (UDPControlInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSockId());
        default: return "";
    }
}

bool UDPControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPControlInfo *pp = (UDPControlInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setSockId(string2long(value)); return true;
        default: return false;
    }
}

const char *UDPControlInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPControlInfo *pp = (UDPControlInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UDPBindCommand);

UDPBindCommand::UDPBindCommand() : ::UDPControlInfo()
{
    this->localPort_var = -1;
}

UDPBindCommand::UDPBindCommand(const UDPBindCommand& other) : ::UDPControlInfo(other)
{
    copy(other);
}

UDPBindCommand::~UDPBindCommand()
{
}

UDPBindCommand& UDPBindCommand::operator=(const UDPBindCommand& other)
{
    if (this==&other) return *this;
    ::UDPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void UDPBindCommand::copy(const UDPBindCommand& other)
{
    this->localAddr_var = other.localAddr_var;
    this->localPort_var = other.localPort_var;
}

void UDPBindCommand::parsimPack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimPack(b);
    doPacking(b,this->localAddr_var);
    doPacking(b,this->localPort_var);
}

void UDPBindCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimUnpack(b);
    doUnpacking(b,this->localAddr_var);
    doUnpacking(b,this->localPort_var);
}

IPvXAddress& UDPBindCommand::getLocalAddr()
{
    return localAddr_var;
}

void UDPBindCommand::setLocalAddr(const IPvXAddress& localAddr)
{
    this->localAddr_var = localAddr;
}

int UDPBindCommand::getLocalPort() const
{
    return localPort_var;
}

void UDPBindCommand::setLocalPort(int localPort)
{
    this->localPort_var = localPort;
}

class UDPBindCommandDescriptor : public cClassDescriptor
{
  public:
    UDPBindCommandDescriptor();
    virtual ~UDPBindCommandDescriptor();

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

Register_ClassDescriptor(UDPBindCommandDescriptor);

UDPBindCommandDescriptor::UDPBindCommandDescriptor() : cClassDescriptor("UDPBindCommand", "UDPControlInfo")
{
}

UDPBindCommandDescriptor::~UDPBindCommandDescriptor()
{
}

bool UDPBindCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPBindCommand *>(obj)!=NULL;
}

const char *UDPBindCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPBindCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int UDPBindCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPBindCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "localAddr",
        "localPort",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int UDPBindCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "localAddr")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "localPort")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPBindCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *UDPBindCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPBindCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPBindCommand *pp = (UDPBindCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPBindCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPBindCommand *pp = (UDPBindCommand *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLocalAddr(); return out.str();}
        case 1: return long2string(pp->getLocalPort());
        default: return "";
    }
}

bool UDPBindCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPBindCommand *pp = (UDPBindCommand *)object; (void)pp;
    switch (field) {
        case 1: pp->setLocalPort(string2long(value)); return true;
        default: return false;
    }
}

const char *UDPBindCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *UDPBindCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPBindCommand *pp = (UDPBindCommand *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLocalAddr()); break;
        default: return NULL;
    }
}

Register_Class(UDPConnectCommand);

UDPConnectCommand::UDPConnectCommand() : ::UDPControlInfo()
{
    this->remotePort_var = -1;
}

UDPConnectCommand::UDPConnectCommand(const UDPConnectCommand& other) : ::UDPControlInfo(other)
{
    copy(other);
}

UDPConnectCommand::~UDPConnectCommand()
{
}

UDPConnectCommand& UDPConnectCommand::operator=(const UDPConnectCommand& other)
{
    if (this==&other) return *this;
    ::UDPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void UDPConnectCommand::copy(const UDPConnectCommand& other)
{
    this->remoteAddr_var = other.remoteAddr_var;
    this->remotePort_var = other.remotePort_var;
}

void UDPConnectCommand::parsimPack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimPack(b);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->remotePort_var);
}

void UDPConnectCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimUnpack(b);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->remotePort_var);
}

IPvXAddress& UDPConnectCommand::getRemoteAddr()
{
    return remoteAddr_var;
}

void UDPConnectCommand::setRemoteAddr(const IPvXAddress& remoteAddr)
{
    this->remoteAddr_var = remoteAddr;
}

int UDPConnectCommand::getRemotePort() const
{
    return remotePort_var;
}

void UDPConnectCommand::setRemotePort(int remotePort)
{
    this->remotePort_var = remotePort;
}

class UDPConnectCommandDescriptor : public cClassDescriptor
{
  public:
    UDPConnectCommandDescriptor();
    virtual ~UDPConnectCommandDescriptor();

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

Register_ClassDescriptor(UDPConnectCommandDescriptor);

UDPConnectCommandDescriptor::UDPConnectCommandDescriptor() : cClassDescriptor("UDPConnectCommand", "UDPControlInfo")
{
}

UDPConnectCommandDescriptor::~UDPConnectCommandDescriptor()
{
}

bool UDPConnectCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPConnectCommand *>(obj)!=NULL;
}

const char *UDPConnectCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPConnectCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int UDPConnectCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPConnectCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "remoteAddr",
        "remotePort",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int UDPConnectCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddr")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "remotePort")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPConnectCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *UDPConnectCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPConnectCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPConnectCommand *pp = (UDPConnectCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPConnectCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPConnectCommand *pp = (UDPConnectCommand *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteAddr(); return out.str();}
        case 1: return long2string(pp->getRemotePort());
        default: return "";
    }
}

bool UDPConnectCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPConnectCommand *pp = (UDPConnectCommand *)object; (void)pp;
    switch (field) {
        case 1: pp->setRemotePort(string2long(value)); return true;
        default: return false;
    }
}

const char *UDPConnectCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *UDPConnectCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPConnectCommand *pp = (UDPConnectCommand *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(UDPSendCommand);

UDPSendCommand::UDPSendCommand() : ::UDPControlInfo()
{
    this->destPort_var = -1;
    this->interfaceId_var = -1;
}

UDPSendCommand::UDPSendCommand(const UDPSendCommand& other) : ::UDPControlInfo(other)
{
    copy(other);
}

UDPSendCommand::~UDPSendCommand()
{
}

UDPSendCommand& UDPSendCommand::operator=(const UDPSendCommand& other)
{
    if (this==&other) return *this;
    ::UDPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void UDPSendCommand::copy(const UDPSendCommand& other)
{
    this->destAddr_var = other.destAddr_var;
    this->destPort_var = other.destPort_var;
    this->srcAddr_var = other.srcAddr_var;
    this->interfaceId_var = other.interfaceId_var;
}

void UDPSendCommand::parsimPack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimPack(b);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->destPort_var);
    doPacking(b,this->srcAddr_var);
    doPacking(b,this->interfaceId_var);
}

void UDPSendCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimUnpack(b);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->destPort_var);
    doUnpacking(b,this->srcAddr_var);
    doUnpacking(b,this->interfaceId_var);
}

IPvXAddress& UDPSendCommand::getDestAddr()
{
    return destAddr_var;
}

void UDPSendCommand::setDestAddr(const IPvXAddress& destAddr)
{
    this->destAddr_var = destAddr;
}

int UDPSendCommand::getDestPort() const
{
    return destPort_var;
}

void UDPSendCommand::setDestPort(int destPort)
{
    this->destPort_var = destPort;
}

IPvXAddress& UDPSendCommand::getSrcAddr()
{
    return srcAddr_var;
}

void UDPSendCommand::setSrcAddr(const IPvXAddress& srcAddr)
{
    this->srcAddr_var = srcAddr;
}

int UDPSendCommand::getInterfaceId() const
{
    return interfaceId_var;
}

void UDPSendCommand::setInterfaceId(int interfaceId)
{
    this->interfaceId_var = interfaceId;
}

class UDPSendCommandDescriptor : public cClassDescriptor
{
  public:
    UDPSendCommandDescriptor();
    virtual ~UDPSendCommandDescriptor();

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

Register_ClassDescriptor(UDPSendCommandDescriptor);

UDPSendCommandDescriptor::UDPSendCommandDescriptor() : cClassDescriptor("UDPSendCommand", "UDPControlInfo")
{
}

UDPSendCommandDescriptor::~UDPSendCommandDescriptor()
{
}

bool UDPSendCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPSendCommand *>(obj)!=NULL;
}

const char *UDPSendCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPSendCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int UDPSendCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *UDPSendCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destAddr",
        "destPort",
        "srcAddr",
        "interfaceId",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int UDPSendCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destPort")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddr")==0) return base+2;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPSendCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
        "int",
        "IPvXAddress",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *UDPSendCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPSendCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPSendCommand *pp = (UDPSendCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPSendCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSendCommand *pp = (UDPSendCommand *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 1: return long2string(pp->getDestPort());
        case 2: {std::stringstream out; out << pp->getSrcAddr(); return out.str();}
        case 3: return long2string(pp->getInterfaceId());
        default: return "";
    }
}

bool UDPSendCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPSendCommand *pp = (UDPSendCommand *)object; (void)pp;
    switch (field) {
        case 1: pp->setDestPort(string2long(value)); return true;
        case 3: pp->setInterfaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *UDPSendCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPvXAddress));
        case 2: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *UDPSendCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSendCommand *pp = (UDPSendCommand *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestAddr()); break;
        case 2: return (void *)(&pp->getSrcAddr()); break;
        default: return NULL;
    }
}

Register_Class(UDPCloseCommand);

UDPCloseCommand::UDPCloseCommand() : ::UDPControlInfo()
{
}

UDPCloseCommand::UDPCloseCommand(const UDPCloseCommand& other) : ::UDPControlInfo(other)
{
    copy(other);
}

UDPCloseCommand::~UDPCloseCommand()
{
}

UDPCloseCommand& UDPCloseCommand::operator=(const UDPCloseCommand& other)
{
    if (this==&other) return *this;
    ::UDPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void UDPCloseCommand::copy(const UDPCloseCommand& other)
{
}

void UDPCloseCommand::parsimPack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimPack(b);
}

void UDPCloseCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimUnpack(b);
}

class UDPCloseCommandDescriptor : public cClassDescriptor
{
  public:
    UDPCloseCommandDescriptor();
    virtual ~UDPCloseCommandDescriptor();

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

Register_ClassDescriptor(UDPCloseCommandDescriptor);

UDPCloseCommandDescriptor::UDPCloseCommandDescriptor() : cClassDescriptor("UDPCloseCommand", "UDPControlInfo")
{
}

UDPCloseCommandDescriptor::~UDPCloseCommandDescriptor()
{
}

bool UDPCloseCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPCloseCommand *>(obj)!=NULL;
}

const char *UDPCloseCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPCloseCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int UDPCloseCommandDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *UDPCloseCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int UDPCloseCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPCloseCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *UDPCloseCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPCloseCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPCloseCommand *pp = (UDPCloseCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPCloseCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPCloseCommand *pp = (UDPCloseCommand *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool UDPCloseCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPCloseCommand *pp = (UDPCloseCommand *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *UDPCloseCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *UDPCloseCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPCloseCommand *pp = (UDPCloseCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UDPDataIndication);

UDPDataIndication::UDPDataIndication() : ::UDPControlInfo()
{
    this->srcPort_var = 0;
    this->destPort_var = 0;
    this->ttl_var = 0;
    this->interfaceId_var = 0;
    this->typeOfService_var = 0;
}

UDPDataIndication::UDPDataIndication(const UDPDataIndication& other) : ::UDPControlInfo(other)
{
    copy(other);
}

UDPDataIndication::~UDPDataIndication()
{
}

UDPDataIndication& UDPDataIndication::operator=(const UDPDataIndication& other)
{
    if (this==&other) return *this;
    ::UDPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void UDPDataIndication::copy(const UDPDataIndication& other)
{
    this->srcAddr_var = other.srcAddr_var;
    this->destAddr_var = other.destAddr_var;
    this->srcPort_var = other.srcPort_var;
    this->destPort_var = other.destPort_var;
    this->ttl_var = other.ttl_var;
    this->interfaceId_var = other.interfaceId_var;
    this->typeOfService_var = other.typeOfService_var;
}

void UDPDataIndication::parsimPack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimPack(b);
    doPacking(b,this->srcAddr_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->srcPort_var);
    doPacking(b,this->destPort_var);
    doPacking(b,this->ttl_var);
    doPacking(b,this->interfaceId_var);
    doPacking(b,this->typeOfService_var);
}

void UDPDataIndication::parsimUnpack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimUnpack(b);
    doUnpacking(b,this->srcAddr_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->srcPort_var);
    doUnpacking(b,this->destPort_var);
    doUnpacking(b,this->ttl_var);
    doUnpacking(b,this->interfaceId_var);
    doUnpacking(b,this->typeOfService_var);
}

IPvXAddress& UDPDataIndication::getSrcAddr()
{
    return srcAddr_var;
}

void UDPDataIndication::setSrcAddr(const IPvXAddress& srcAddr)
{
    this->srcAddr_var = srcAddr;
}

IPvXAddress& UDPDataIndication::getDestAddr()
{
    return destAddr_var;
}

void UDPDataIndication::setDestAddr(const IPvXAddress& destAddr)
{
    this->destAddr_var = destAddr;
}

int UDPDataIndication::getSrcPort() const
{
    return srcPort_var;
}

void UDPDataIndication::setSrcPort(int srcPort)
{
    this->srcPort_var = srcPort;
}

int UDPDataIndication::getDestPort() const
{
    return destPort_var;
}

void UDPDataIndication::setDestPort(int destPort)
{
    this->destPort_var = destPort;
}

int UDPDataIndication::getTtl() const
{
    return ttl_var;
}

void UDPDataIndication::setTtl(int ttl)
{
    this->ttl_var = ttl;
}

int UDPDataIndication::getInterfaceId() const
{
    return interfaceId_var;
}

void UDPDataIndication::setInterfaceId(int interfaceId)
{
    this->interfaceId_var = interfaceId;
}

unsigned char UDPDataIndication::getTypeOfService() const
{
    return typeOfService_var;
}

void UDPDataIndication::setTypeOfService(unsigned char typeOfService)
{
    this->typeOfService_var = typeOfService;
}

class UDPDataIndicationDescriptor : public cClassDescriptor
{
  public:
    UDPDataIndicationDescriptor();
    virtual ~UDPDataIndicationDescriptor();

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

Register_ClassDescriptor(UDPDataIndicationDescriptor);

UDPDataIndicationDescriptor::UDPDataIndicationDescriptor() : cClassDescriptor("UDPDataIndication", "UDPControlInfo")
{
}

UDPDataIndicationDescriptor::~UDPDataIndicationDescriptor()
{
}

bool UDPDataIndicationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPDataIndication *>(obj)!=NULL;
}

const char *UDPDataIndicationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPDataIndicationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int UDPDataIndicationDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *UDPDataIndicationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcAddr",
        "destAddr",
        "srcPort",
        "destPort",
        "ttl",
        "interfaceId",
        "typeOfService",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int UDPDataIndicationDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddr")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcPort")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destPort")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "ttl")==0) return base+4;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+5;
    if (fieldName[0]=='t' && strcmp(fieldName, "typeOfService")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPDataIndicationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
        "IPvXAddress",
        "int",
        "int",
        "int",
        "int",
        "unsigned char",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *UDPDataIndicationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPDataIndicationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPDataIndication *pp = (UDPDataIndication *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPDataIndicationDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPDataIndication *pp = (UDPDataIndication *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcAddr(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 2: return long2string(pp->getSrcPort());
        case 3: return long2string(pp->getDestPort());
        case 4: return long2string(pp->getTtl());
        case 5: return long2string(pp->getInterfaceId());
        case 6: return ulong2string(pp->getTypeOfService());
        default: return "";
    }
}

bool UDPDataIndicationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPDataIndication *pp = (UDPDataIndication *)object; (void)pp;
    switch (field) {
        case 2: pp->setSrcPort(string2long(value)); return true;
        case 3: pp->setDestPort(string2long(value)); return true;
        case 4: pp->setTtl(string2long(value)); return true;
        case 5: pp->setInterfaceId(string2long(value)); return true;
        case 6: pp->setTypeOfService(string2ulong(value)); return true;
        default: return false;
    }
}

const char *UDPDataIndicationDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPvXAddress));
        case 1: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *UDPDataIndicationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPDataIndication *pp = (UDPDataIndication *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcAddr()); break;
        case 1: return (void *)(&pp->getDestAddr()); break;
        default: return NULL;
    }
}

Register_Class(UDPErrorIndication);

UDPErrorIndication::UDPErrorIndication() : ::UDPControlInfo()
{
    this->srcPort_var = 0;
    this->destPort_var = 0;
}

UDPErrorIndication::UDPErrorIndication(const UDPErrorIndication& other) : ::UDPControlInfo(other)
{
    copy(other);
}

UDPErrorIndication::~UDPErrorIndication()
{
}

UDPErrorIndication& UDPErrorIndication::operator=(const UDPErrorIndication& other)
{
    if (this==&other) return *this;
    ::UDPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void UDPErrorIndication::copy(const UDPErrorIndication& other)
{
    this->srcAddr_var = other.srcAddr_var;
    this->destAddr_var = other.destAddr_var;
    this->srcPort_var = other.srcPort_var;
    this->destPort_var = other.destPort_var;
}

void UDPErrorIndication::parsimPack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimPack(b);
    doPacking(b,this->srcAddr_var);
    doPacking(b,this->destAddr_var);
    doPacking(b,this->srcPort_var);
    doPacking(b,this->destPort_var);
}

void UDPErrorIndication::parsimUnpack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimUnpack(b);
    doUnpacking(b,this->srcAddr_var);
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->srcPort_var);
    doUnpacking(b,this->destPort_var);
}

IPvXAddress& UDPErrorIndication::getSrcAddr()
{
    return srcAddr_var;
}

void UDPErrorIndication::setSrcAddr(const IPvXAddress& srcAddr)
{
    this->srcAddr_var = srcAddr;
}

IPvXAddress& UDPErrorIndication::getDestAddr()
{
    return destAddr_var;
}

void UDPErrorIndication::setDestAddr(const IPvXAddress& destAddr)
{
    this->destAddr_var = destAddr;
}

int UDPErrorIndication::getSrcPort() const
{
    return srcPort_var;
}

void UDPErrorIndication::setSrcPort(int srcPort)
{
    this->srcPort_var = srcPort;
}

int UDPErrorIndication::getDestPort() const
{
    return destPort_var;
}

void UDPErrorIndication::setDestPort(int destPort)
{
    this->destPort_var = destPort;
}

class UDPErrorIndicationDescriptor : public cClassDescriptor
{
  public:
    UDPErrorIndicationDescriptor();
    virtual ~UDPErrorIndicationDescriptor();

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

Register_ClassDescriptor(UDPErrorIndicationDescriptor);

UDPErrorIndicationDescriptor::UDPErrorIndicationDescriptor() : cClassDescriptor("UDPErrorIndication", "UDPControlInfo")
{
}

UDPErrorIndicationDescriptor::~UDPErrorIndicationDescriptor()
{
}

bool UDPErrorIndicationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPErrorIndication *>(obj)!=NULL;
}

const char *UDPErrorIndicationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPErrorIndicationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int UDPErrorIndicationDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *UDPErrorIndicationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcAddr",
        "destAddr",
        "srcPort",
        "destPort",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int UDPErrorIndicationDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddr")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcPort")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destPort")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPErrorIndicationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
        "IPvXAddress",
        "int",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *UDPErrorIndicationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPErrorIndicationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPErrorIndication *pp = (UDPErrorIndication *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPErrorIndicationDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPErrorIndication *pp = (UDPErrorIndication *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcAddr(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 2: return long2string(pp->getSrcPort());
        case 3: return long2string(pp->getDestPort());
        default: return "";
    }
}

bool UDPErrorIndicationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPErrorIndication *pp = (UDPErrorIndication *)object; (void)pp;
    switch (field) {
        case 2: pp->setSrcPort(string2long(value)); return true;
        case 3: pp->setDestPort(string2long(value)); return true;
        default: return false;
    }
}

const char *UDPErrorIndicationDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPvXAddress));
        case 1: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *UDPErrorIndicationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPErrorIndication *pp = (UDPErrorIndication *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcAddr()); break;
        case 1: return (void *)(&pp->getDestAddr()); break;
        default: return NULL;
    }
}

Register_Class(UDPSetOptionCommand);

UDPSetOptionCommand::UDPSetOptionCommand() : ::UDPControlInfo()
{
}

UDPSetOptionCommand::UDPSetOptionCommand(const UDPSetOptionCommand& other) : ::UDPControlInfo(other)
{
    copy(other);
}

UDPSetOptionCommand::~UDPSetOptionCommand()
{
}

UDPSetOptionCommand& UDPSetOptionCommand::operator=(const UDPSetOptionCommand& other)
{
    if (this==&other) return *this;
    ::UDPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void UDPSetOptionCommand::copy(const UDPSetOptionCommand& other)
{
}

void UDPSetOptionCommand::parsimPack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimPack(b);
}

void UDPSetOptionCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPControlInfo::parsimUnpack(b);
}

class UDPSetOptionCommandDescriptor : public cClassDescriptor
{
  public:
    UDPSetOptionCommandDescriptor();
    virtual ~UDPSetOptionCommandDescriptor();

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

Register_ClassDescriptor(UDPSetOptionCommandDescriptor);

UDPSetOptionCommandDescriptor::UDPSetOptionCommandDescriptor() : cClassDescriptor("UDPSetOptionCommand", "UDPControlInfo")
{
}

UDPSetOptionCommandDescriptor::~UDPSetOptionCommandDescriptor()
{
}

bool UDPSetOptionCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPSetOptionCommand *>(obj)!=NULL;
}

const char *UDPSetOptionCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPSetOptionCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int UDPSetOptionCommandDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *UDPSetOptionCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int UDPSetOptionCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPSetOptionCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *UDPSetOptionCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPSetOptionCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetOptionCommand *pp = (UDPSetOptionCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPSetOptionCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetOptionCommand *pp = (UDPSetOptionCommand *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool UDPSetOptionCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetOptionCommand *pp = (UDPSetOptionCommand *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *UDPSetOptionCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *UDPSetOptionCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetOptionCommand *pp = (UDPSetOptionCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UDPSetTimeToLiveCommand);

UDPSetTimeToLiveCommand::UDPSetTimeToLiveCommand() : ::UDPSetOptionCommand()
{
    this->ttl_var = 0;
}

UDPSetTimeToLiveCommand::UDPSetTimeToLiveCommand(const UDPSetTimeToLiveCommand& other) : ::UDPSetOptionCommand(other)
{
    copy(other);
}

UDPSetTimeToLiveCommand::~UDPSetTimeToLiveCommand()
{
}

UDPSetTimeToLiveCommand& UDPSetTimeToLiveCommand::operator=(const UDPSetTimeToLiveCommand& other)
{
    if (this==&other) return *this;
    ::UDPSetOptionCommand::operator=(other);
    copy(other);
    return *this;
}

void UDPSetTimeToLiveCommand::copy(const UDPSetTimeToLiveCommand& other)
{
    this->ttl_var = other.ttl_var;
}

void UDPSetTimeToLiveCommand::parsimPack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimPack(b);
    doPacking(b,this->ttl_var);
}

void UDPSetTimeToLiveCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimUnpack(b);
    doUnpacking(b,this->ttl_var);
}

int UDPSetTimeToLiveCommand::getTtl() const
{
    return ttl_var;
}

void UDPSetTimeToLiveCommand::setTtl(int ttl)
{
    this->ttl_var = ttl;
}

class UDPSetTimeToLiveCommandDescriptor : public cClassDescriptor
{
  public:
    UDPSetTimeToLiveCommandDescriptor();
    virtual ~UDPSetTimeToLiveCommandDescriptor();

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

Register_ClassDescriptor(UDPSetTimeToLiveCommandDescriptor);

UDPSetTimeToLiveCommandDescriptor::UDPSetTimeToLiveCommandDescriptor() : cClassDescriptor("UDPSetTimeToLiveCommand", "UDPSetOptionCommand")
{
}

UDPSetTimeToLiveCommandDescriptor::~UDPSetTimeToLiveCommandDescriptor()
{
}

bool UDPSetTimeToLiveCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPSetTimeToLiveCommand *>(obj)!=NULL;
}

const char *UDPSetTimeToLiveCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPSetTimeToLiveCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UDPSetTimeToLiveCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPSetTimeToLiveCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ttl",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int UDPSetTimeToLiveCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "ttl")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPSetTimeToLiveCommandDescriptor::getFieldTypeString(void *object, int field) const
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

const char *UDPSetTimeToLiveCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPSetTimeToLiveCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetTimeToLiveCommand *pp = (UDPSetTimeToLiveCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPSetTimeToLiveCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetTimeToLiveCommand *pp = (UDPSetTimeToLiveCommand *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getTtl());
        default: return "";
    }
}

bool UDPSetTimeToLiveCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetTimeToLiveCommand *pp = (UDPSetTimeToLiveCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setTtl(string2long(value)); return true;
        default: return false;
    }
}

const char *UDPSetTimeToLiveCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPSetTimeToLiveCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetTimeToLiveCommand *pp = (UDPSetTimeToLiveCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UDPSetTypeOfServiceCommand);

UDPSetTypeOfServiceCommand::UDPSetTypeOfServiceCommand() : ::UDPSetOptionCommand()
{
    this->tos_var = 0;
}

UDPSetTypeOfServiceCommand::UDPSetTypeOfServiceCommand(const UDPSetTypeOfServiceCommand& other) : ::UDPSetOptionCommand(other)
{
    copy(other);
}

UDPSetTypeOfServiceCommand::~UDPSetTypeOfServiceCommand()
{
}

UDPSetTypeOfServiceCommand& UDPSetTypeOfServiceCommand::operator=(const UDPSetTypeOfServiceCommand& other)
{
    if (this==&other) return *this;
    ::UDPSetOptionCommand::operator=(other);
    copy(other);
    return *this;
}

void UDPSetTypeOfServiceCommand::copy(const UDPSetTypeOfServiceCommand& other)
{
    this->tos_var = other.tos_var;
}

void UDPSetTypeOfServiceCommand::parsimPack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimPack(b);
    doPacking(b,this->tos_var);
}

void UDPSetTypeOfServiceCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimUnpack(b);
    doUnpacking(b,this->tos_var);
}

char UDPSetTypeOfServiceCommand::getTos() const
{
    return tos_var;
}

void UDPSetTypeOfServiceCommand::setTos(char tos)
{
    this->tos_var = tos;
}

class UDPSetTypeOfServiceCommandDescriptor : public cClassDescriptor
{
  public:
    UDPSetTypeOfServiceCommandDescriptor();
    virtual ~UDPSetTypeOfServiceCommandDescriptor();

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

Register_ClassDescriptor(UDPSetTypeOfServiceCommandDescriptor);

UDPSetTypeOfServiceCommandDescriptor::UDPSetTypeOfServiceCommandDescriptor() : cClassDescriptor("UDPSetTypeOfServiceCommand", "UDPSetOptionCommand")
{
}

UDPSetTypeOfServiceCommandDescriptor::~UDPSetTypeOfServiceCommandDescriptor()
{
}

bool UDPSetTypeOfServiceCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPSetTypeOfServiceCommand *>(obj)!=NULL;
}

const char *UDPSetTypeOfServiceCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPSetTypeOfServiceCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UDPSetTypeOfServiceCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPSetTypeOfServiceCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "tos",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int UDPSetTypeOfServiceCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "tos")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPSetTypeOfServiceCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "char",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *UDPSetTypeOfServiceCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPSetTypeOfServiceCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetTypeOfServiceCommand *pp = (UDPSetTypeOfServiceCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPSetTypeOfServiceCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetTypeOfServiceCommand *pp = (UDPSetTypeOfServiceCommand *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getTos());
        default: return "";
    }
}

bool UDPSetTypeOfServiceCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetTypeOfServiceCommand *pp = (UDPSetTypeOfServiceCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setTos(string2long(value)); return true;
        default: return false;
    }
}

const char *UDPSetTypeOfServiceCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPSetTypeOfServiceCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetTypeOfServiceCommand *pp = (UDPSetTypeOfServiceCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UDPSetBroadcastCommand);

UDPSetBroadcastCommand::UDPSetBroadcastCommand() : ::UDPSetOptionCommand()
{
    this->broadcast_var = 0;
}

UDPSetBroadcastCommand::UDPSetBroadcastCommand(const UDPSetBroadcastCommand& other) : ::UDPSetOptionCommand(other)
{
    copy(other);
}

UDPSetBroadcastCommand::~UDPSetBroadcastCommand()
{
}

UDPSetBroadcastCommand& UDPSetBroadcastCommand::operator=(const UDPSetBroadcastCommand& other)
{
    if (this==&other) return *this;
    ::UDPSetOptionCommand::operator=(other);
    copy(other);
    return *this;
}

void UDPSetBroadcastCommand::copy(const UDPSetBroadcastCommand& other)
{
    this->broadcast_var = other.broadcast_var;
}

void UDPSetBroadcastCommand::parsimPack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimPack(b);
    doPacking(b,this->broadcast_var);
}

void UDPSetBroadcastCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimUnpack(b);
    doUnpacking(b,this->broadcast_var);
}

bool UDPSetBroadcastCommand::getBroadcast() const
{
    return broadcast_var;
}

void UDPSetBroadcastCommand::setBroadcast(bool broadcast)
{
    this->broadcast_var = broadcast;
}

class UDPSetBroadcastCommandDescriptor : public cClassDescriptor
{
  public:
    UDPSetBroadcastCommandDescriptor();
    virtual ~UDPSetBroadcastCommandDescriptor();

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

Register_ClassDescriptor(UDPSetBroadcastCommandDescriptor);

UDPSetBroadcastCommandDescriptor::UDPSetBroadcastCommandDescriptor() : cClassDescriptor("UDPSetBroadcastCommand", "UDPSetOptionCommand")
{
}

UDPSetBroadcastCommandDescriptor::~UDPSetBroadcastCommandDescriptor()
{
}

bool UDPSetBroadcastCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPSetBroadcastCommand *>(obj)!=NULL;
}

const char *UDPSetBroadcastCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPSetBroadcastCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UDPSetBroadcastCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPSetBroadcastCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "broadcast",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int UDPSetBroadcastCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "broadcast")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPSetBroadcastCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *UDPSetBroadcastCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPSetBroadcastCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetBroadcastCommand *pp = (UDPSetBroadcastCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPSetBroadcastCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetBroadcastCommand *pp = (UDPSetBroadcastCommand *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getBroadcast());
        default: return "";
    }
}

bool UDPSetBroadcastCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetBroadcastCommand *pp = (UDPSetBroadcastCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setBroadcast(string2bool(value)); return true;
        default: return false;
    }
}

const char *UDPSetBroadcastCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPSetBroadcastCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetBroadcastCommand *pp = (UDPSetBroadcastCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UDPSetMulticastInterfaceCommand);

UDPSetMulticastInterfaceCommand::UDPSetMulticastInterfaceCommand() : ::UDPSetOptionCommand()
{
    this->interfaceId_var = 0;
}

UDPSetMulticastInterfaceCommand::UDPSetMulticastInterfaceCommand(const UDPSetMulticastInterfaceCommand& other) : ::UDPSetOptionCommand(other)
{
    copy(other);
}

UDPSetMulticastInterfaceCommand::~UDPSetMulticastInterfaceCommand()
{
}

UDPSetMulticastInterfaceCommand& UDPSetMulticastInterfaceCommand::operator=(const UDPSetMulticastInterfaceCommand& other)
{
    if (this==&other) return *this;
    ::UDPSetOptionCommand::operator=(other);
    copy(other);
    return *this;
}

void UDPSetMulticastInterfaceCommand::copy(const UDPSetMulticastInterfaceCommand& other)
{
    this->interfaceId_var = other.interfaceId_var;
}

void UDPSetMulticastInterfaceCommand::parsimPack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimPack(b);
    doPacking(b,this->interfaceId_var);
}

void UDPSetMulticastInterfaceCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimUnpack(b);
    doUnpacking(b,this->interfaceId_var);
}

int UDPSetMulticastInterfaceCommand::getInterfaceId() const
{
    return interfaceId_var;
}

void UDPSetMulticastInterfaceCommand::setInterfaceId(int interfaceId)
{
    this->interfaceId_var = interfaceId;
}

class UDPSetMulticastInterfaceCommandDescriptor : public cClassDescriptor
{
  public:
    UDPSetMulticastInterfaceCommandDescriptor();
    virtual ~UDPSetMulticastInterfaceCommandDescriptor();

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

Register_ClassDescriptor(UDPSetMulticastInterfaceCommandDescriptor);

UDPSetMulticastInterfaceCommandDescriptor::UDPSetMulticastInterfaceCommandDescriptor() : cClassDescriptor("UDPSetMulticastInterfaceCommand", "UDPSetOptionCommand")
{
}

UDPSetMulticastInterfaceCommandDescriptor::~UDPSetMulticastInterfaceCommandDescriptor()
{
}

bool UDPSetMulticastInterfaceCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPSetMulticastInterfaceCommand *>(obj)!=NULL;
}

const char *UDPSetMulticastInterfaceCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPSetMulticastInterfaceCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UDPSetMulticastInterfaceCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPSetMulticastInterfaceCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "interfaceId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int UDPSetMulticastInterfaceCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPSetMulticastInterfaceCommandDescriptor::getFieldTypeString(void *object, int field) const
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

const char *UDPSetMulticastInterfaceCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPSetMulticastInterfaceCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetMulticastInterfaceCommand *pp = (UDPSetMulticastInterfaceCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPSetMulticastInterfaceCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetMulticastInterfaceCommand *pp = (UDPSetMulticastInterfaceCommand *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getInterfaceId());
        default: return "";
    }
}

bool UDPSetMulticastInterfaceCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetMulticastInterfaceCommand *pp = (UDPSetMulticastInterfaceCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setInterfaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *UDPSetMulticastInterfaceCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPSetMulticastInterfaceCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetMulticastInterfaceCommand *pp = (UDPSetMulticastInterfaceCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UDPSetMulticastLoopCommand);

UDPSetMulticastLoopCommand::UDPSetMulticastLoopCommand() : ::UDPSetOptionCommand()
{
    this->loop_var = 0;
}

UDPSetMulticastLoopCommand::UDPSetMulticastLoopCommand(const UDPSetMulticastLoopCommand& other) : ::UDPSetOptionCommand(other)
{
    copy(other);
}

UDPSetMulticastLoopCommand::~UDPSetMulticastLoopCommand()
{
}

UDPSetMulticastLoopCommand& UDPSetMulticastLoopCommand::operator=(const UDPSetMulticastLoopCommand& other)
{
    if (this==&other) return *this;
    ::UDPSetOptionCommand::operator=(other);
    copy(other);
    return *this;
}

void UDPSetMulticastLoopCommand::copy(const UDPSetMulticastLoopCommand& other)
{
    this->loop_var = other.loop_var;
}

void UDPSetMulticastLoopCommand::parsimPack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimPack(b);
    doPacking(b,this->loop_var);
}

void UDPSetMulticastLoopCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimUnpack(b);
    doUnpacking(b,this->loop_var);
}

bool UDPSetMulticastLoopCommand::getLoop() const
{
    return loop_var;
}

void UDPSetMulticastLoopCommand::setLoop(bool loop)
{
    this->loop_var = loop;
}

class UDPSetMulticastLoopCommandDescriptor : public cClassDescriptor
{
  public:
    UDPSetMulticastLoopCommandDescriptor();
    virtual ~UDPSetMulticastLoopCommandDescriptor();

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

Register_ClassDescriptor(UDPSetMulticastLoopCommandDescriptor);

UDPSetMulticastLoopCommandDescriptor::UDPSetMulticastLoopCommandDescriptor() : cClassDescriptor("UDPSetMulticastLoopCommand", "UDPSetOptionCommand")
{
}

UDPSetMulticastLoopCommandDescriptor::~UDPSetMulticastLoopCommandDescriptor()
{
}

bool UDPSetMulticastLoopCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPSetMulticastLoopCommand *>(obj)!=NULL;
}

const char *UDPSetMulticastLoopCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPSetMulticastLoopCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UDPSetMulticastLoopCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPSetMulticastLoopCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "loop",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int UDPSetMulticastLoopCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "loop")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPSetMulticastLoopCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *UDPSetMulticastLoopCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPSetMulticastLoopCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetMulticastLoopCommand *pp = (UDPSetMulticastLoopCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPSetMulticastLoopCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetMulticastLoopCommand *pp = (UDPSetMulticastLoopCommand *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getLoop());
        default: return "";
    }
}

bool UDPSetMulticastLoopCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetMulticastLoopCommand *pp = (UDPSetMulticastLoopCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setLoop(string2bool(value)); return true;
        default: return false;
    }
}

const char *UDPSetMulticastLoopCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPSetMulticastLoopCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetMulticastLoopCommand *pp = (UDPSetMulticastLoopCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UDPSetReuseAddressCommand);

UDPSetReuseAddressCommand::UDPSetReuseAddressCommand() : ::UDPSetOptionCommand()
{
    this->reuseAddress_var = 0;
}

UDPSetReuseAddressCommand::UDPSetReuseAddressCommand(const UDPSetReuseAddressCommand& other) : ::UDPSetOptionCommand(other)
{
    copy(other);
}

UDPSetReuseAddressCommand::~UDPSetReuseAddressCommand()
{
}

UDPSetReuseAddressCommand& UDPSetReuseAddressCommand::operator=(const UDPSetReuseAddressCommand& other)
{
    if (this==&other) return *this;
    ::UDPSetOptionCommand::operator=(other);
    copy(other);
    return *this;
}

void UDPSetReuseAddressCommand::copy(const UDPSetReuseAddressCommand& other)
{
    this->reuseAddress_var = other.reuseAddress_var;
}

void UDPSetReuseAddressCommand::parsimPack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimPack(b);
    doPacking(b,this->reuseAddress_var);
}

void UDPSetReuseAddressCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimUnpack(b);
    doUnpacking(b,this->reuseAddress_var);
}

bool UDPSetReuseAddressCommand::getReuseAddress() const
{
    return reuseAddress_var;
}

void UDPSetReuseAddressCommand::setReuseAddress(bool reuseAddress)
{
    this->reuseAddress_var = reuseAddress;
}

class UDPSetReuseAddressCommandDescriptor : public cClassDescriptor
{
  public:
    UDPSetReuseAddressCommandDescriptor();
    virtual ~UDPSetReuseAddressCommandDescriptor();

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

Register_ClassDescriptor(UDPSetReuseAddressCommandDescriptor);

UDPSetReuseAddressCommandDescriptor::UDPSetReuseAddressCommandDescriptor() : cClassDescriptor("UDPSetReuseAddressCommand", "UDPSetOptionCommand")
{
}

UDPSetReuseAddressCommandDescriptor::~UDPSetReuseAddressCommandDescriptor()
{
}

bool UDPSetReuseAddressCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPSetReuseAddressCommand *>(obj)!=NULL;
}

const char *UDPSetReuseAddressCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPSetReuseAddressCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UDPSetReuseAddressCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPSetReuseAddressCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "reuseAddress",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int UDPSetReuseAddressCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "reuseAddress")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPSetReuseAddressCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *UDPSetReuseAddressCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPSetReuseAddressCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetReuseAddressCommand *pp = (UDPSetReuseAddressCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPSetReuseAddressCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetReuseAddressCommand *pp = (UDPSetReuseAddressCommand *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getReuseAddress());
        default: return "";
    }
}

bool UDPSetReuseAddressCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetReuseAddressCommand *pp = (UDPSetReuseAddressCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setReuseAddress(string2bool(value)); return true;
        default: return false;
    }
}

const char *UDPSetReuseAddressCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPSetReuseAddressCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPSetReuseAddressCommand *pp = (UDPSetReuseAddressCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(UDPJoinMulticastGroupsCommand);

UDPJoinMulticastGroupsCommand::UDPJoinMulticastGroupsCommand() : ::UDPSetOptionCommand()
{
    multicastAddr_arraysize = 0;
    this->multicastAddr_var = 0;
    interfaceId_arraysize = 0;
    this->interfaceId_var = 0;
}

UDPJoinMulticastGroupsCommand::UDPJoinMulticastGroupsCommand(const UDPJoinMulticastGroupsCommand& other) : ::UDPSetOptionCommand(other)
{
    multicastAddr_arraysize = 0;
    this->multicastAddr_var = 0;
    interfaceId_arraysize = 0;
    this->interfaceId_var = 0;
    copy(other);
}

UDPJoinMulticastGroupsCommand::~UDPJoinMulticastGroupsCommand()
{
    delete [] multicastAddr_var;
    delete [] interfaceId_var;
}

UDPJoinMulticastGroupsCommand& UDPJoinMulticastGroupsCommand::operator=(const UDPJoinMulticastGroupsCommand& other)
{
    if (this==&other) return *this;
    ::UDPSetOptionCommand::operator=(other);
    copy(other);
    return *this;
}

void UDPJoinMulticastGroupsCommand::copy(const UDPJoinMulticastGroupsCommand& other)
{
    delete [] this->multicastAddr_var;
    this->multicastAddr_var = (other.multicastAddr_arraysize==0) ? NULL : new IPvXAddress[other.multicastAddr_arraysize];
    multicastAddr_arraysize = other.multicastAddr_arraysize;
    for (unsigned int i=0; i<multicastAddr_arraysize; i++)
        this->multicastAddr_var[i] = other.multicastAddr_var[i];
    delete [] this->interfaceId_var;
    this->interfaceId_var = (other.interfaceId_arraysize==0) ? NULL : new int[other.interfaceId_arraysize];
    interfaceId_arraysize = other.interfaceId_arraysize;
    for (unsigned int i=0; i<interfaceId_arraysize; i++)
        this->interfaceId_var[i] = other.interfaceId_var[i];
}

void UDPJoinMulticastGroupsCommand::parsimPack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimPack(b);
    b->pack(multicastAddr_arraysize);
    doPacking(b,this->multicastAddr_var,multicastAddr_arraysize);
    b->pack(interfaceId_arraysize);
    doPacking(b,this->interfaceId_var,interfaceId_arraysize);
}

void UDPJoinMulticastGroupsCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimUnpack(b);
    delete [] this->multicastAddr_var;
    b->unpack(multicastAddr_arraysize);
    if (multicastAddr_arraysize==0) {
        this->multicastAddr_var = 0;
    } else {
        this->multicastAddr_var = new IPvXAddress[multicastAddr_arraysize];
        doUnpacking(b,this->multicastAddr_var,multicastAddr_arraysize);
    }
    delete [] this->interfaceId_var;
    b->unpack(interfaceId_arraysize);
    if (interfaceId_arraysize==0) {
        this->interfaceId_var = 0;
    } else {
        this->interfaceId_var = new int[interfaceId_arraysize];
        doUnpacking(b,this->interfaceId_var,interfaceId_arraysize);
    }
}

void UDPJoinMulticastGroupsCommand::setMulticastAddrArraySize(unsigned int size)
{
    IPvXAddress *multicastAddr_var2 = (size==0) ? NULL : new IPvXAddress[size];
    unsigned int sz = multicastAddr_arraysize < size ? multicastAddr_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        multicastAddr_var2[i] = this->multicastAddr_var[i];
    multicastAddr_arraysize = size;
    delete [] this->multicastAddr_var;
    this->multicastAddr_var = multicastAddr_var2;
}

unsigned int UDPJoinMulticastGroupsCommand::getMulticastAddrArraySize() const
{
    return multicastAddr_arraysize;
}

IPvXAddress& UDPJoinMulticastGroupsCommand::getMulticastAddr(unsigned int k)
{
    if (k>=multicastAddr_arraysize) throw cRuntimeError("Array of size %d indexed by %d", multicastAddr_arraysize, k);
    return multicastAddr_var[k];
}

void UDPJoinMulticastGroupsCommand::setMulticastAddr(unsigned int k, const IPvXAddress& multicastAddr)
{
    if (k>=multicastAddr_arraysize) throw cRuntimeError("Array of size %d indexed by %d", multicastAddr_arraysize, k);
    this->multicastAddr_var[k] = multicastAddr;
}

void UDPJoinMulticastGroupsCommand::setInterfaceIdArraySize(unsigned int size)
{
    int *interfaceId_var2 = (size==0) ? NULL : new int[size];
    unsigned int sz = interfaceId_arraysize < size ? interfaceId_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        interfaceId_var2[i] = this->interfaceId_var[i];
    for (unsigned int i=sz; i<size; i++)
        interfaceId_var2[i] = 0;
    interfaceId_arraysize = size;
    delete [] this->interfaceId_var;
    this->interfaceId_var = interfaceId_var2;
}

unsigned int UDPJoinMulticastGroupsCommand::getInterfaceIdArraySize() const
{
    return interfaceId_arraysize;
}

int UDPJoinMulticastGroupsCommand::getInterfaceId(unsigned int k) const
{
    if (k>=interfaceId_arraysize) throw cRuntimeError("Array of size %d indexed by %d", interfaceId_arraysize, k);
    return interfaceId_var[k];
}

void UDPJoinMulticastGroupsCommand::setInterfaceId(unsigned int k, int interfaceId)
{
    if (k>=interfaceId_arraysize) throw cRuntimeError("Array of size %d indexed by %d", interfaceId_arraysize, k);
    this->interfaceId_var[k] = interfaceId;
}

class UDPJoinMulticastGroupsCommandDescriptor : public cClassDescriptor
{
  public:
    UDPJoinMulticastGroupsCommandDescriptor();
    virtual ~UDPJoinMulticastGroupsCommandDescriptor();

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

Register_ClassDescriptor(UDPJoinMulticastGroupsCommandDescriptor);

UDPJoinMulticastGroupsCommandDescriptor::UDPJoinMulticastGroupsCommandDescriptor() : cClassDescriptor("UDPJoinMulticastGroupsCommand", "UDPSetOptionCommand")
{
}

UDPJoinMulticastGroupsCommandDescriptor::~UDPJoinMulticastGroupsCommandDescriptor()
{
}

bool UDPJoinMulticastGroupsCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPJoinMulticastGroupsCommand *>(obj)!=NULL;
}

const char *UDPJoinMulticastGroupsCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPJoinMulticastGroupsCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int UDPJoinMulticastGroupsCommandDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *UDPJoinMulticastGroupsCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "multicastAddr",
        "interfaceId",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int UDPJoinMulticastGroupsCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "multicastAddr")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPJoinMulticastGroupsCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *UDPJoinMulticastGroupsCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPJoinMulticastGroupsCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPJoinMulticastGroupsCommand *pp = (UDPJoinMulticastGroupsCommand *)object; (void)pp;
    switch (field) {
        case 0: return pp->getMulticastAddrArraySize();
        case 1: return pp->getInterfaceIdArraySize();
        default: return 0;
    }
}

std::string UDPJoinMulticastGroupsCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPJoinMulticastGroupsCommand *pp = (UDPJoinMulticastGroupsCommand *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMulticastAddr(i); return out.str();}
        case 1: return long2string(pp->getInterfaceId(i));
        default: return "";
    }
}

bool UDPJoinMulticastGroupsCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPJoinMulticastGroupsCommand *pp = (UDPJoinMulticastGroupsCommand *)object; (void)pp;
    switch (field) {
        case 1: pp->setInterfaceId(i,string2long(value)); return true;
        default: return false;
    }
}

const char *UDPJoinMulticastGroupsCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *UDPJoinMulticastGroupsCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPJoinMulticastGroupsCommand *pp = (UDPJoinMulticastGroupsCommand *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMulticastAddr(i)); break;
        default: return NULL;
    }
}

Register_Class(UDPLeaveMulticastGroupsCommand);

UDPLeaveMulticastGroupsCommand::UDPLeaveMulticastGroupsCommand() : ::UDPSetOptionCommand()
{
    multicastAddr_arraysize = 0;
    this->multicastAddr_var = 0;
}

UDPLeaveMulticastGroupsCommand::UDPLeaveMulticastGroupsCommand(const UDPLeaveMulticastGroupsCommand& other) : ::UDPSetOptionCommand(other)
{
    multicastAddr_arraysize = 0;
    this->multicastAddr_var = 0;
    copy(other);
}

UDPLeaveMulticastGroupsCommand::~UDPLeaveMulticastGroupsCommand()
{
    delete [] multicastAddr_var;
}

UDPLeaveMulticastGroupsCommand& UDPLeaveMulticastGroupsCommand::operator=(const UDPLeaveMulticastGroupsCommand& other)
{
    if (this==&other) return *this;
    ::UDPSetOptionCommand::operator=(other);
    copy(other);
    return *this;
}

void UDPLeaveMulticastGroupsCommand::copy(const UDPLeaveMulticastGroupsCommand& other)
{
    delete [] this->multicastAddr_var;
    this->multicastAddr_var = (other.multicastAddr_arraysize==0) ? NULL : new IPvXAddress[other.multicastAddr_arraysize];
    multicastAddr_arraysize = other.multicastAddr_arraysize;
    for (unsigned int i=0; i<multicastAddr_arraysize; i++)
        this->multicastAddr_var[i] = other.multicastAddr_var[i];
}

void UDPLeaveMulticastGroupsCommand::parsimPack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimPack(b);
    b->pack(multicastAddr_arraysize);
    doPacking(b,this->multicastAddr_var,multicastAddr_arraysize);
}

void UDPLeaveMulticastGroupsCommand::parsimUnpack(cCommBuffer *b)
{
    ::UDPSetOptionCommand::parsimUnpack(b);
    delete [] this->multicastAddr_var;
    b->unpack(multicastAddr_arraysize);
    if (multicastAddr_arraysize==0) {
        this->multicastAddr_var = 0;
    } else {
        this->multicastAddr_var = new IPvXAddress[multicastAddr_arraysize];
        doUnpacking(b,this->multicastAddr_var,multicastAddr_arraysize);
    }
}

void UDPLeaveMulticastGroupsCommand::setMulticastAddrArraySize(unsigned int size)
{
    IPvXAddress *multicastAddr_var2 = (size==0) ? NULL : new IPvXAddress[size];
    unsigned int sz = multicastAddr_arraysize < size ? multicastAddr_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        multicastAddr_var2[i] = this->multicastAddr_var[i];
    multicastAddr_arraysize = size;
    delete [] this->multicastAddr_var;
    this->multicastAddr_var = multicastAddr_var2;
}

unsigned int UDPLeaveMulticastGroupsCommand::getMulticastAddrArraySize() const
{
    return multicastAddr_arraysize;
}

IPvXAddress& UDPLeaveMulticastGroupsCommand::getMulticastAddr(unsigned int k)
{
    if (k>=multicastAddr_arraysize) throw cRuntimeError("Array of size %d indexed by %d", multicastAddr_arraysize, k);
    return multicastAddr_var[k];
}

void UDPLeaveMulticastGroupsCommand::setMulticastAddr(unsigned int k, const IPvXAddress& multicastAddr)
{
    if (k>=multicastAddr_arraysize) throw cRuntimeError("Array of size %d indexed by %d", multicastAddr_arraysize, k);
    this->multicastAddr_var[k] = multicastAddr;
}

class UDPLeaveMulticastGroupsCommandDescriptor : public cClassDescriptor
{
  public:
    UDPLeaveMulticastGroupsCommandDescriptor();
    virtual ~UDPLeaveMulticastGroupsCommandDescriptor();

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

Register_ClassDescriptor(UDPLeaveMulticastGroupsCommandDescriptor);

UDPLeaveMulticastGroupsCommandDescriptor::UDPLeaveMulticastGroupsCommandDescriptor() : cClassDescriptor("UDPLeaveMulticastGroupsCommand", "UDPSetOptionCommand")
{
}

UDPLeaveMulticastGroupsCommandDescriptor::~UDPLeaveMulticastGroupsCommandDescriptor()
{
}

bool UDPLeaveMulticastGroupsCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPLeaveMulticastGroupsCommand *>(obj)!=NULL;
}

const char *UDPLeaveMulticastGroupsCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPLeaveMulticastGroupsCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int UDPLeaveMulticastGroupsCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPLeaveMulticastGroupsCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "multicastAddr",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int UDPLeaveMulticastGroupsCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "multicastAddr")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPLeaveMulticastGroupsCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *UDPLeaveMulticastGroupsCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPLeaveMulticastGroupsCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPLeaveMulticastGroupsCommand *pp = (UDPLeaveMulticastGroupsCommand *)object; (void)pp;
    switch (field) {
        case 0: return pp->getMulticastAddrArraySize();
        default: return 0;
    }
}

std::string UDPLeaveMulticastGroupsCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPLeaveMulticastGroupsCommand *pp = (UDPLeaveMulticastGroupsCommand *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMulticastAddr(i); return out.str();}
        default: return "";
    }
}

bool UDPLeaveMulticastGroupsCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPLeaveMulticastGroupsCommand *pp = (UDPLeaveMulticastGroupsCommand *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *UDPLeaveMulticastGroupsCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *UDPLeaveMulticastGroupsCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPLeaveMulticastGroupsCommand *pp = (UDPLeaveMulticastGroupsCommand *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMulticastAddr(i)); break;
        default: return NULL;
    }
}


