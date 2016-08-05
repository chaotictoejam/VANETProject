//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/transportlayer/contract/tcp/TCPCommand.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "TCPCommand_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inetveins::TcpCommandCode");
    if (!e) enums.getInstance()->add(e = new cEnum("inetveins::TcpCommandCode"));
    e->insert(TCP_C_OPEN_ACTIVE, "TCP_C_OPEN_ACTIVE");
    e->insert(TCP_C_OPEN_PASSIVE, "TCP_C_OPEN_PASSIVE");
    e->insert(TCP_C_SEND, "TCP_C_SEND");
    e->insert(TCP_C_CLOSE, "TCP_C_CLOSE");
    e->insert(TCP_C_ABORT, "TCP_C_ABORT");
    e->insert(TCP_C_STATUS, "TCP_C_STATUS");
    e->insert(TCP_C_QUEUE_BYTES_LIMIT, "TCP_C_QUEUE_BYTES_LIMIT");
    e->insert(TCP_C_READ, "TCP_C_READ");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inetveins::TcpStatusInd");
    if (!e) enums.getInstance()->add(e = new cEnum("inetveins::TcpStatusInd"));
    e->insert(TCP_I_DATA, "TCP_I_DATA");
    e->insert(TCP_I_URGENT_DATA, "TCP_I_URGENT_DATA");
    e->insert(TCP_I_ESTABLISHED, "TCP_I_ESTABLISHED");
    e->insert(TCP_I_PEER_CLOSED, "TCP_I_PEER_CLOSED");
    e->insert(TCP_I_CLOSED, "TCP_I_CLOSED");
    e->insert(TCP_I_CONNECTION_REFUSED, "TCP_I_CONNECTION_REFUSED");
    e->insert(TCP_I_CONNECTION_RESET, "TCP_I_CONNECTION_RESET");
    e->insert(TCP_I_TIMED_OUT, "TCP_I_TIMED_OUT");
    e->insert(TCP_I_STATUS, "TCP_I_STATUS");
    e->insert(TCP_I_SEND_MSG, "TCP_I_SEND_MSG");
    e->insert(TCP_I_DATA_NOTIFICATION, "TCP_I_DATA_NOTIFICATION");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inetveins::TCPErrorCode");
    if (!e) enums.getInstance()->add(e = new cEnum("inetveins::TCPErrorCode"));
);

Register_Class(TCPCommand);

TCPCommand::TCPCommand() : ::cObject()
{
    this->connId_var = -1;
    this->userId_var = -1;
}

TCPCommand::TCPCommand(const TCPCommand& other) : ::cObject(other)
{
    copy(other);
}

TCPCommand::~TCPCommand()
{
}

TCPCommand& TCPCommand::operator=(const TCPCommand& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void TCPCommand::copy(const TCPCommand& other)
{
    this->connId_var = other.connId_var;
    this->userId_var = other.userId_var;
}

void TCPCommand::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->connId_var);
    doPacking(b,this->userId_var);
}

void TCPCommand::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->connId_var);
    doUnpacking(b,this->userId_var);
}

int TCPCommand::getConnId() const
{
    return connId_var;
}

void TCPCommand::setConnId(int connId)
{
    this->connId_var = connId;
}

int TCPCommand::getUserId() const
{
    return userId_var;
}

void TCPCommand::setUserId(int userId)
{
    this->userId_var = userId;
}

class TCPCommandDescriptor : public cClassDescriptor
{
  public:
    TCPCommandDescriptor();
    virtual ~TCPCommandDescriptor();

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

Register_ClassDescriptor(TCPCommandDescriptor);

TCPCommandDescriptor::TCPCommandDescriptor() : cClassDescriptor("inetveins::TCPCommand", "cObject")
{
}

TCPCommandDescriptor::~TCPCommandDescriptor()
{
}

bool TCPCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPCommand *>(obj)!=NULL;
}

const char *TCPCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TCPCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *TCPCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "connId",
        "userId",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int TCPCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "connId")==0) return base+0;
    if (fieldName[0]=='u' && strcmp(fieldName, "userId")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPCommandDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *TCPCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPCommand *pp = (TCPCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPCommand *pp = (TCPCommand *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getConnId());
        case 1: return long2string(pp->getUserId());
        default: return "";
    }
}

bool TCPCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPCommand *pp = (TCPCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setConnId(string2long(value)); return true;
        case 1: pp->setUserId(string2long(value)); return true;
        default: return false;
    }
}

const char *TCPCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *TCPCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPCommand *pp = (TCPCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPErrorInfo);

TCPErrorInfo::TCPErrorInfo() : ::inetveins::TCPCommand()
{
    this->errorCode_var = 0;
    this->messageText_var = 0;
}

TCPErrorInfo::TCPErrorInfo(const TCPErrorInfo& other) : ::inetveins::TCPCommand(other)
{
    copy(other);
}

TCPErrorInfo::~TCPErrorInfo()
{
}

TCPErrorInfo& TCPErrorInfo::operator=(const TCPErrorInfo& other)
{
    if (this==&other) return *this;
    ::inetveins::TCPCommand::operator=(other);
    copy(other);
    return *this;
}

void TCPErrorInfo::copy(const TCPErrorInfo& other)
{
    this->errorCode_var = other.errorCode_var;
    this->messageText_var = other.messageText_var;
}

void TCPErrorInfo::parsimPack(cCommBuffer *b)
{
    ::inetveins::TCPCommand::parsimPack(b);
    doPacking(b,this->errorCode_var);
    doPacking(b,this->messageText_var);
}

void TCPErrorInfo::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::TCPCommand::parsimUnpack(b);
    doUnpacking(b,this->errorCode_var);
    doUnpacking(b,this->messageText_var);
}

int TCPErrorInfo::getErrorCode() const
{
    return errorCode_var;
}

void TCPErrorInfo::setErrorCode(int errorCode)
{
    this->errorCode_var = errorCode;
}

const char * TCPErrorInfo::getMessageText() const
{
    return messageText_var.c_str();
}

void TCPErrorInfo::setMessageText(const char * messageText)
{
    this->messageText_var = messageText;
}

class TCPErrorInfoDescriptor : public cClassDescriptor
{
  public:
    TCPErrorInfoDescriptor();
    virtual ~TCPErrorInfoDescriptor();

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

Register_ClassDescriptor(TCPErrorInfoDescriptor);

TCPErrorInfoDescriptor::TCPErrorInfoDescriptor() : cClassDescriptor("inetveins::TCPErrorInfo", "inetveins::TCPCommand")
{
}

TCPErrorInfoDescriptor::~TCPErrorInfoDescriptor()
{
}

bool TCPErrorInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPErrorInfo *>(obj)!=NULL;
}

const char *TCPErrorInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPErrorInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TCPErrorInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *TCPErrorInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "errorCode",
        "messageText",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int TCPErrorInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "errorCode")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "messageText")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPErrorInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "string",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *TCPErrorInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inetveins::TCPErrorCode";
            return NULL;
        default: return NULL;
    }
}

int TCPErrorInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPErrorInfo *pp = (TCPErrorInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPErrorInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPErrorInfo *pp = (TCPErrorInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getErrorCode());
        case 1: return oppstring2string(pp->getMessageText());
        default: return "";
    }
}

bool TCPErrorInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPErrorInfo *pp = (TCPErrorInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setErrorCode(string2long(value)); return true;
        case 1: pp->setMessageText((value)); return true;
        default: return false;
    }
}

const char *TCPErrorInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *TCPErrorInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPErrorInfo *pp = (TCPErrorInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inetveins::TCPDataTransferMode");
    if (!e) enums.getInstance()->add(e = new cEnum("inetveins::TCPDataTransferMode"));
    e->insert(TCP_TRANSFER_UNDEFINED, "TCP_TRANSFER_UNDEFINED");
    e->insert(TCP_TRANSFER_BYTECOUNT, "TCP_TRANSFER_BYTECOUNT");
    e->insert(TCP_TRANSFER_OBJECT, "TCP_TRANSFER_OBJECT");
    e->insert(TCP_TRANSFER_BYTESTREAM, "TCP_TRANSFER_BYTESTREAM");
);

Register_Class(TCPOpenCommand);

TCPOpenCommand::TCPOpenCommand() : ::inetveins::TCPCommand()
{
    this->localPort_var = -1;
    this->remotePort_var = -1;
    this->fork_var = false;
    this->dataTransferMode_var = 0;
    this->tcpAlgorithmClass_var = 0;
}

TCPOpenCommand::TCPOpenCommand(const TCPOpenCommand& other) : ::inetveins::TCPCommand(other)
{
    copy(other);
}

TCPOpenCommand::~TCPOpenCommand()
{
}

TCPOpenCommand& TCPOpenCommand::operator=(const TCPOpenCommand& other)
{
    if (this==&other) return *this;
    ::inetveins::TCPCommand::operator=(other);
    copy(other);
    return *this;
}

void TCPOpenCommand::copy(const TCPOpenCommand& other)
{
    this->localAddr_var = other.localAddr_var;
    this->remoteAddr_var = other.remoteAddr_var;
    this->localPort_var = other.localPort_var;
    this->remotePort_var = other.remotePort_var;
    this->fork_var = other.fork_var;
    this->dataTransferMode_var = other.dataTransferMode_var;
    this->tcpAlgorithmClass_var = other.tcpAlgorithmClass_var;
}

void TCPOpenCommand::parsimPack(cCommBuffer *b)
{
    ::inetveins::TCPCommand::parsimPack(b);
    doPacking(b,this->localAddr_var);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->localPort_var);
    doPacking(b,this->remotePort_var);
    doPacking(b,this->fork_var);
    doPacking(b,this->dataTransferMode_var);
    doPacking(b,this->tcpAlgorithmClass_var);
}

void TCPOpenCommand::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::TCPCommand::parsimUnpack(b);
    doUnpacking(b,this->localAddr_var);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->localPort_var);
    doUnpacking(b,this->remotePort_var);
    doUnpacking(b,this->fork_var);
    doUnpacking(b,this->dataTransferMode_var);
    doUnpacking(b,this->tcpAlgorithmClass_var);
}

L3Address& TCPOpenCommand::getLocalAddr()
{
    return localAddr_var;
}

void TCPOpenCommand::setLocalAddr(const L3Address& localAddr)
{
    this->localAddr_var = localAddr;
}

L3Address& TCPOpenCommand::getRemoteAddr()
{
    return remoteAddr_var;
}

void TCPOpenCommand::setRemoteAddr(const L3Address& remoteAddr)
{
    this->remoteAddr_var = remoteAddr;
}

int TCPOpenCommand::getLocalPort() const
{
    return localPort_var;
}

void TCPOpenCommand::setLocalPort(int localPort)
{
    this->localPort_var = localPort;
}

int TCPOpenCommand::getRemotePort() const
{
    return remotePort_var;
}

void TCPOpenCommand::setRemotePort(int remotePort)
{
    this->remotePort_var = remotePort;
}

bool TCPOpenCommand::getFork() const
{
    return fork_var;
}

void TCPOpenCommand::setFork(bool fork)
{
    this->fork_var = fork;
}

int TCPOpenCommand::getDataTransferMode() const
{
    return dataTransferMode_var;
}

void TCPOpenCommand::setDataTransferMode(int dataTransferMode)
{
    this->dataTransferMode_var = dataTransferMode;
}

const char * TCPOpenCommand::getTcpAlgorithmClass() const
{
    return tcpAlgorithmClass_var.c_str();
}

void TCPOpenCommand::setTcpAlgorithmClass(const char * tcpAlgorithmClass)
{
    this->tcpAlgorithmClass_var = tcpAlgorithmClass;
}

class TCPOpenCommandDescriptor : public cClassDescriptor
{
  public:
    TCPOpenCommandDescriptor();
    virtual ~TCPOpenCommandDescriptor();

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

Register_ClassDescriptor(TCPOpenCommandDescriptor);

TCPOpenCommandDescriptor::TCPOpenCommandDescriptor() : cClassDescriptor("inetveins::TCPOpenCommand", "inetveins::TCPCommand")
{
}

TCPOpenCommandDescriptor::~TCPOpenCommandDescriptor()
{
}

bool TCPOpenCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOpenCommand *>(obj)!=NULL;
}

const char *TCPOpenCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOpenCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int TCPOpenCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TCPOpenCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "localAddr",
        "remoteAddr",
        "localPort",
        "remotePort",
        "fork",
        "dataTransferMode",
        "tcpAlgorithmClass",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int TCPOpenCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "localAddr")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddr")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "localPort")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "remotePort")==0) return base+3;
    if (fieldName[0]=='f' && strcmp(fieldName, "fork")==0) return base+4;
    if (fieldName[0]=='d' && strcmp(fieldName, "dataTransferMode")==0) return base+5;
    if (fieldName[0]=='t' && strcmp(fieldName, "tcpAlgorithmClass")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPOpenCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "L3Address",
        "L3Address",
        "int",
        "int",
        "bool",
        "int",
        "string",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *TCPOpenCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5:
            if (!strcmp(propertyname,"enum")) return "inetveins::TCPDataTransferMode";
            return NULL;
        default: return NULL;
    }
}

int TCPOpenCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOpenCommand *pp = (TCPOpenCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPOpenCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOpenCommand *pp = (TCPOpenCommand *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLocalAddr(); return out.str();}
        case 1: {std::stringstream out; out << pp->getRemoteAddr(); return out.str();}
        case 2: return long2string(pp->getLocalPort());
        case 3: return long2string(pp->getRemotePort());
        case 4: return bool2string(pp->getFork());
        case 5: return long2string(pp->getDataTransferMode());
        case 6: return oppstring2string(pp->getTcpAlgorithmClass());
        default: return "";
    }
}

bool TCPOpenCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOpenCommand *pp = (TCPOpenCommand *)object; (void)pp;
    switch (field) {
        case 2: pp->setLocalPort(string2long(value)); return true;
        case 3: pp->setRemotePort(string2long(value)); return true;
        case 4: pp->setFork(string2bool(value)); return true;
        case 5: pp->setDataTransferMode(string2long(value)); return true;
        case 6: pp->setTcpAlgorithmClass((value)); return true;
        default: return false;
    }
}

const char *TCPOpenCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(L3Address));
        case 1: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *TCPOpenCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOpenCommand *pp = (TCPOpenCommand *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLocalAddr()); break;
        case 1: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(TCPSendCommand);

TCPSendCommand::TCPSendCommand() : ::inetveins::TCPCommand()
{
}

TCPSendCommand::TCPSendCommand(const TCPSendCommand& other) : ::inetveins::TCPCommand(other)
{
    copy(other);
}

TCPSendCommand::~TCPSendCommand()
{
}

TCPSendCommand& TCPSendCommand::operator=(const TCPSendCommand& other)
{
    if (this==&other) return *this;
    ::inetveins::TCPCommand::operator=(other);
    copy(other);
    return *this;
}

void TCPSendCommand::copy(const TCPSendCommand& other)
{
}

void TCPSendCommand::parsimPack(cCommBuffer *b)
{
    ::inetveins::TCPCommand::parsimPack(b);
}

void TCPSendCommand::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::TCPCommand::parsimUnpack(b);
}

class TCPSendCommandDescriptor : public cClassDescriptor
{
  public:
    TCPSendCommandDescriptor();
    virtual ~TCPSendCommandDescriptor();

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

Register_ClassDescriptor(TCPSendCommandDescriptor);

TCPSendCommandDescriptor::TCPSendCommandDescriptor() : cClassDescriptor("inetveins::TCPSendCommand", "inetveins::TCPCommand")
{
}

TCPSendCommandDescriptor::~TCPSendCommandDescriptor()
{
}

bool TCPSendCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPSendCommand *>(obj)!=NULL;
}

const char *TCPSendCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPSendCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int TCPSendCommandDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *TCPSendCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int TCPSendCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPSendCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *TCPSendCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPSendCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPSendCommand *pp = (TCPSendCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPSendCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPSendCommand *pp = (TCPSendCommand *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool TCPSendCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPSendCommand *pp = (TCPSendCommand *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TCPSendCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *TCPSendCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPSendCommand *pp = (TCPSendCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPConnectInfo);

TCPConnectInfo::TCPConnectInfo() : ::inetveins::TCPCommand()
{
    this->localPort_var = 0;
    this->remotePort_var = 0;
}

TCPConnectInfo::TCPConnectInfo(const TCPConnectInfo& other) : ::inetveins::TCPCommand(other)
{
    copy(other);
}

TCPConnectInfo::~TCPConnectInfo()
{
}

TCPConnectInfo& TCPConnectInfo::operator=(const TCPConnectInfo& other)
{
    if (this==&other) return *this;
    ::inetveins::TCPCommand::operator=(other);
    copy(other);
    return *this;
}

void TCPConnectInfo::copy(const TCPConnectInfo& other)
{
    this->localAddr_var = other.localAddr_var;
    this->remoteAddr_var = other.remoteAddr_var;
    this->localPort_var = other.localPort_var;
    this->remotePort_var = other.remotePort_var;
}

void TCPConnectInfo::parsimPack(cCommBuffer *b)
{
    ::inetveins::TCPCommand::parsimPack(b);
    doPacking(b,this->localAddr_var);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->localPort_var);
    doPacking(b,this->remotePort_var);
}

void TCPConnectInfo::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::TCPCommand::parsimUnpack(b);
    doUnpacking(b,this->localAddr_var);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->localPort_var);
    doUnpacking(b,this->remotePort_var);
}

L3Address& TCPConnectInfo::getLocalAddr()
{
    return localAddr_var;
}

void TCPConnectInfo::setLocalAddr(const L3Address& localAddr)
{
    this->localAddr_var = localAddr;
}

L3Address& TCPConnectInfo::getRemoteAddr()
{
    return remoteAddr_var;
}

void TCPConnectInfo::setRemoteAddr(const L3Address& remoteAddr)
{
    this->remoteAddr_var = remoteAddr;
}

int TCPConnectInfo::getLocalPort() const
{
    return localPort_var;
}

void TCPConnectInfo::setLocalPort(int localPort)
{
    this->localPort_var = localPort;
}

int TCPConnectInfo::getRemotePort() const
{
    return remotePort_var;
}

void TCPConnectInfo::setRemotePort(int remotePort)
{
    this->remotePort_var = remotePort;
}

class TCPConnectInfoDescriptor : public cClassDescriptor
{
  public:
    TCPConnectInfoDescriptor();
    virtual ~TCPConnectInfoDescriptor();

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

Register_ClassDescriptor(TCPConnectInfoDescriptor);

TCPConnectInfoDescriptor::TCPConnectInfoDescriptor() : cClassDescriptor("inetveins::TCPConnectInfo", "inetveins::TCPCommand")
{
}

TCPConnectInfoDescriptor::~TCPConnectInfoDescriptor()
{
}

bool TCPConnectInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPConnectInfo *>(obj)!=NULL;
}

const char *TCPConnectInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPConnectInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int TCPConnectInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TCPConnectInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "localAddr",
        "remoteAddr",
        "localPort",
        "remotePort",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int TCPConnectInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "localAddr")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddr")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "localPort")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "remotePort")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPConnectInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "L3Address",
        "L3Address",
        "int",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *TCPConnectInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPConnectInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPConnectInfo *pp = (TCPConnectInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPConnectInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPConnectInfo *pp = (TCPConnectInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLocalAddr(); return out.str();}
        case 1: {std::stringstream out; out << pp->getRemoteAddr(); return out.str();}
        case 2: return long2string(pp->getLocalPort());
        case 3: return long2string(pp->getRemotePort());
        default: return "";
    }
}

bool TCPConnectInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPConnectInfo *pp = (TCPConnectInfo *)object; (void)pp;
    switch (field) {
        case 2: pp->setLocalPort(string2long(value)); return true;
        case 3: pp->setRemotePort(string2long(value)); return true;
        default: return false;
    }
}

const char *TCPConnectInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(L3Address));
        case 1: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *TCPConnectInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPConnectInfo *pp = (TCPConnectInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLocalAddr()); break;
        case 1: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(TCPStatusInfo);

TCPStatusInfo::TCPStatusInfo() : ::inetveins::TCPCommand()
{
    this->state_var = 0;
    this->stateName_var = 0;
    this->localPort_var = 0;
    this->remotePort_var = 0;
    this->snd_mss_var = 0;
    this->snd_una_var = 0;
    this->snd_nxt_var = 0;
    this->snd_max_var = 0;
    this->snd_wnd_var = 0;
    this->snd_up_var = 0;
    this->snd_wl1_var = 0;
    this->snd_wl2_var = 0;
    this->iss_var = 0;
    this->rcv_nxt_var = 0;
    this->rcv_wnd_var = 0;
    this->rcv_up_var = 0;
    this->irs_var = 0;
    this->fin_ack_rcvd_var = 0;
}

TCPStatusInfo::TCPStatusInfo(const TCPStatusInfo& other) : ::inetveins::TCPCommand(other)
{
    copy(other);
}

TCPStatusInfo::~TCPStatusInfo()
{
}

TCPStatusInfo& TCPStatusInfo::operator=(const TCPStatusInfo& other)
{
    if (this==&other) return *this;
    ::inetveins::TCPCommand::operator=(other);
    copy(other);
    return *this;
}

void TCPStatusInfo::copy(const TCPStatusInfo& other)
{
    this->state_var = other.state_var;
    this->stateName_var = other.stateName_var;
    this->localAddr_var = other.localAddr_var;
    this->remoteAddr_var = other.remoteAddr_var;
    this->localPort_var = other.localPort_var;
    this->remotePort_var = other.remotePort_var;
    this->snd_mss_var = other.snd_mss_var;
    this->snd_una_var = other.snd_una_var;
    this->snd_nxt_var = other.snd_nxt_var;
    this->snd_max_var = other.snd_max_var;
    this->snd_wnd_var = other.snd_wnd_var;
    this->snd_up_var = other.snd_up_var;
    this->snd_wl1_var = other.snd_wl1_var;
    this->snd_wl2_var = other.snd_wl2_var;
    this->iss_var = other.iss_var;
    this->rcv_nxt_var = other.rcv_nxt_var;
    this->rcv_wnd_var = other.rcv_wnd_var;
    this->rcv_up_var = other.rcv_up_var;
    this->irs_var = other.irs_var;
    this->fin_ack_rcvd_var = other.fin_ack_rcvd_var;
}

void TCPStatusInfo::parsimPack(cCommBuffer *b)
{
    ::inetveins::TCPCommand::parsimPack(b);
    doPacking(b,this->state_var);
    doPacking(b,this->stateName_var);
    doPacking(b,this->localAddr_var);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->localPort_var);
    doPacking(b,this->remotePort_var);
    doPacking(b,this->snd_mss_var);
    doPacking(b,this->snd_una_var);
    doPacking(b,this->snd_nxt_var);
    doPacking(b,this->snd_max_var);
    doPacking(b,this->snd_wnd_var);
    doPacking(b,this->snd_up_var);
    doPacking(b,this->snd_wl1_var);
    doPacking(b,this->snd_wl2_var);
    doPacking(b,this->iss_var);
    doPacking(b,this->rcv_nxt_var);
    doPacking(b,this->rcv_wnd_var);
    doPacking(b,this->rcv_up_var);
    doPacking(b,this->irs_var);
    doPacking(b,this->fin_ack_rcvd_var);
}

void TCPStatusInfo::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::TCPCommand::parsimUnpack(b);
    doUnpacking(b,this->state_var);
    doUnpacking(b,this->stateName_var);
    doUnpacking(b,this->localAddr_var);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->localPort_var);
    doUnpacking(b,this->remotePort_var);
    doUnpacking(b,this->snd_mss_var);
    doUnpacking(b,this->snd_una_var);
    doUnpacking(b,this->snd_nxt_var);
    doUnpacking(b,this->snd_max_var);
    doUnpacking(b,this->snd_wnd_var);
    doUnpacking(b,this->snd_up_var);
    doUnpacking(b,this->snd_wl1_var);
    doUnpacking(b,this->snd_wl2_var);
    doUnpacking(b,this->iss_var);
    doUnpacking(b,this->rcv_nxt_var);
    doUnpacking(b,this->rcv_wnd_var);
    doUnpacking(b,this->rcv_up_var);
    doUnpacking(b,this->irs_var);
    doUnpacking(b,this->fin_ack_rcvd_var);
}

int TCPStatusInfo::getState() const
{
    return state_var;
}

void TCPStatusInfo::setState(int state)
{
    this->state_var = state;
}

const char * TCPStatusInfo::getStateName() const
{
    return stateName_var.c_str();
}

void TCPStatusInfo::setStateName(const char * stateName)
{
    this->stateName_var = stateName;
}

L3Address& TCPStatusInfo::getLocalAddr()
{
    return localAddr_var;
}

void TCPStatusInfo::setLocalAddr(const L3Address& localAddr)
{
    this->localAddr_var = localAddr;
}

L3Address& TCPStatusInfo::getRemoteAddr()
{
    return remoteAddr_var;
}

void TCPStatusInfo::setRemoteAddr(const L3Address& remoteAddr)
{
    this->remoteAddr_var = remoteAddr;
}

int TCPStatusInfo::getLocalPort() const
{
    return localPort_var;
}

void TCPStatusInfo::setLocalPort(int localPort)
{
    this->localPort_var = localPort;
}

int TCPStatusInfo::getRemotePort() const
{
    return remotePort_var;
}

void TCPStatusInfo::setRemotePort(int remotePort)
{
    this->remotePort_var = remotePort;
}

unsigned int TCPStatusInfo::getSnd_mss() const
{
    return snd_mss_var;
}

void TCPStatusInfo::setSnd_mss(unsigned int snd_mss)
{
    this->snd_mss_var = snd_mss;
}

unsigned int TCPStatusInfo::getSnd_una() const
{
    return snd_una_var;
}

void TCPStatusInfo::setSnd_una(unsigned int snd_una)
{
    this->snd_una_var = snd_una;
}

unsigned int TCPStatusInfo::getSnd_nxt() const
{
    return snd_nxt_var;
}

void TCPStatusInfo::setSnd_nxt(unsigned int snd_nxt)
{
    this->snd_nxt_var = snd_nxt;
}

unsigned int TCPStatusInfo::getSnd_max() const
{
    return snd_max_var;
}

void TCPStatusInfo::setSnd_max(unsigned int snd_max)
{
    this->snd_max_var = snd_max;
}

unsigned int TCPStatusInfo::getSnd_wnd() const
{
    return snd_wnd_var;
}

void TCPStatusInfo::setSnd_wnd(unsigned int snd_wnd)
{
    this->snd_wnd_var = snd_wnd;
}

unsigned int TCPStatusInfo::getSnd_up() const
{
    return snd_up_var;
}

void TCPStatusInfo::setSnd_up(unsigned int snd_up)
{
    this->snd_up_var = snd_up;
}

unsigned int TCPStatusInfo::getSnd_wl1() const
{
    return snd_wl1_var;
}

void TCPStatusInfo::setSnd_wl1(unsigned int snd_wl1)
{
    this->snd_wl1_var = snd_wl1;
}

unsigned int TCPStatusInfo::getSnd_wl2() const
{
    return snd_wl2_var;
}

void TCPStatusInfo::setSnd_wl2(unsigned int snd_wl2)
{
    this->snd_wl2_var = snd_wl2;
}

unsigned int TCPStatusInfo::getIss() const
{
    return iss_var;
}

void TCPStatusInfo::setIss(unsigned int iss)
{
    this->iss_var = iss;
}

unsigned int TCPStatusInfo::getRcv_nxt() const
{
    return rcv_nxt_var;
}

void TCPStatusInfo::setRcv_nxt(unsigned int rcv_nxt)
{
    this->rcv_nxt_var = rcv_nxt;
}

unsigned int TCPStatusInfo::getRcv_wnd() const
{
    return rcv_wnd_var;
}

void TCPStatusInfo::setRcv_wnd(unsigned int rcv_wnd)
{
    this->rcv_wnd_var = rcv_wnd;
}

unsigned int TCPStatusInfo::getRcv_up() const
{
    return rcv_up_var;
}

void TCPStatusInfo::setRcv_up(unsigned int rcv_up)
{
    this->rcv_up_var = rcv_up;
}

unsigned int TCPStatusInfo::getIrs() const
{
    return irs_var;
}

void TCPStatusInfo::setIrs(unsigned int irs)
{
    this->irs_var = irs;
}

bool TCPStatusInfo::getFin_ack_rcvd() const
{
    return fin_ack_rcvd_var;
}

void TCPStatusInfo::setFin_ack_rcvd(bool fin_ack_rcvd)
{
    this->fin_ack_rcvd_var = fin_ack_rcvd;
}

class TCPStatusInfoDescriptor : public cClassDescriptor
{
  public:
    TCPStatusInfoDescriptor();
    virtual ~TCPStatusInfoDescriptor();

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

Register_ClassDescriptor(TCPStatusInfoDescriptor);

TCPStatusInfoDescriptor::TCPStatusInfoDescriptor() : cClassDescriptor("inetveins::TCPStatusInfo", "inetveins::TCPCommand")
{
}

TCPStatusInfoDescriptor::~TCPStatusInfoDescriptor()
{
}

bool TCPStatusInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPStatusInfo *>(obj)!=NULL;
}

const char *TCPStatusInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPStatusInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 20+basedesc->getFieldCount(object) : 20;
}

unsigned int TCPStatusInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<20) ? fieldTypeFlags[field] : 0;
}

const char *TCPStatusInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "state",
        "stateName",
        "localAddr",
        "remoteAddr",
        "localPort",
        "remotePort",
        "snd_mss",
        "snd_una",
        "snd_nxt",
        "snd_max",
        "snd_wnd",
        "snd_up",
        "snd_wl1",
        "snd_wl2",
        "iss",
        "rcv_nxt",
        "rcv_wnd",
        "rcv_up",
        "irs",
        "fin_ack_rcvd",
    };
    return (field>=0 && field<20) ? fieldNames[field] : NULL;
}

int TCPStatusInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "state")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "stateName")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "localAddr")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddr")==0) return base+3;
    if (fieldName[0]=='l' && strcmp(fieldName, "localPort")==0) return base+4;
    if (fieldName[0]=='r' && strcmp(fieldName, "remotePort")==0) return base+5;
    if (fieldName[0]=='s' && strcmp(fieldName, "snd_mss")==0) return base+6;
    if (fieldName[0]=='s' && strcmp(fieldName, "snd_una")==0) return base+7;
    if (fieldName[0]=='s' && strcmp(fieldName, "snd_nxt")==0) return base+8;
    if (fieldName[0]=='s' && strcmp(fieldName, "snd_max")==0) return base+9;
    if (fieldName[0]=='s' && strcmp(fieldName, "snd_wnd")==0) return base+10;
    if (fieldName[0]=='s' && strcmp(fieldName, "snd_up")==0) return base+11;
    if (fieldName[0]=='s' && strcmp(fieldName, "snd_wl1")==0) return base+12;
    if (fieldName[0]=='s' && strcmp(fieldName, "snd_wl2")==0) return base+13;
    if (fieldName[0]=='i' && strcmp(fieldName, "iss")==0) return base+14;
    if (fieldName[0]=='r' && strcmp(fieldName, "rcv_nxt")==0) return base+15;
    if (fieldName[0]=='r' && strcmp(fieldName, "rcv_wnd")==0) return base+16;
    if (fieldName[0]=='r' && strcmp(fieldName, "rcv_up")==0) return base+17;
    if (fieldName[0]=='i' && strcmp(fieldName, "irs")==0) return base+18;
    if (fieldName[0]=='f' && strcmp(fieldName, "fin_ack_rcvd")==0) return base+19;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPStatusInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "string",
        "L3Address",
        "L3Address",
        "int",
        "int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "bool",
    };
    return (field>=0 && field<20) ? fieldTypeStrings[field] : NULL;
}

const char *TCPStatusInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPStatusInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPStatusInfo *pp = (TCPStatusInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPStatusInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPStatusInfo *pp = (TCPStatusInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getState());
        case 1: return oppstring2string(pp->getStateName());
        case 2: {std::stringstream out; out << pp->getLocalAddr(); return out.str();}
        case 3: {std::stringstream out; out << pp->getRemoteAddr(); return out.str();}
        case 4: return long2string(pp->getLocalPort());
        case 5: return long2string(pp->getRemotePort());
        case 6: return ulong2string(pp->getSnd_mss());
        case 7: return ulong2string(pp->getSnd_una());
        case 8: return ulong2string(pp->getSnd_nxt());
        case 9: return ulong2string(pp->getSnd_max());
        case 10: return ulong2string(pp->getSnd_wnd());
        case 11: return ulong2string(pp->getSnd_up());
        case 12: return ulong2string(pp->getSnd_wl1());
        case 13: return ulong2string(pp->getSnd_wl2());
        case 14: return ulong2string(pp->getIss());
        case 15: return ulong2string(pp->getRcv_nxt());
        case 16: return ulong2string(pp->getRcv_wnd());
        case 17: return ulong2string(pp->getRcv_up());
        case 18: return ulong2string(pp->getIrs());
        case 19: return bool2string(pp->getFin_ack_rcvd());
        default: return "";
    }
}

bool TCPStatusInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPStatusInfo *pp = (TCPStatusInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setState(string2long(value)); return true;
        case 1: pp->setStateName((value)); return true;
        case 4: pp->setLocalPort(string2long(value)); return true;
        case 5: pp->setRemotePort(string2long(value)); return true;
        case 6: pp->setSnd_mss(string2ulong(value)); return true;
        case 7: pp->setSnd_una(string2ulong(value)); return true;
        case 8: pp->setSnd_nxt(string2ulong(value)); return true;
        case 9: pp->setSnd_max(string2ulong(value)); return true;
        case 10: pp->setSnd_wnd(string2ulong(value)); return true;
        case 11: pp->setSnd_up(string2ulong(value)); return true;
        case 12: pp->setSnd_wl1(string2ulong(value)); return true;
        case 13: pp->setSnd_wl2(string2ulong(value)); return true;
        case 14: pp->setIss(string2ulong(value)); return true;
        case 15: pp->setRcv_nxt(string2ulong(value)); return true;
        case 16: pp->setRcv_wnd(string2ulong(value)); return true;
        case 17: pp->setRcv_up(string2ulong(value)); return true;
        case 18: pp->setIrs(string2ulong(value)); return true;
        case 19: pp->setFin_ack_rcvd(string2bool(value)); return true;
        default: return false;
    }
}

const char *TCPStatusInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(L3Address));
        case 3: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *TCPStatusInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPStatusInfo *pp = (TCPStatusInfo *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getLocalAddr()); break;
        case 3: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

} // namespace inetveins

