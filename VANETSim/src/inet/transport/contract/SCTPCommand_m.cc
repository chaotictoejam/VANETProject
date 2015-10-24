//
// Generated file, do not edit! Created by nedtool 4.6 from transport/contract/SCTPCommand.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SCTPCommand_m.h"

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
    cEnum *e = cEnum::find("SCTPErrorCode");
    if (!e) enums.getInstance()->add(e = new cEnum("SCTPErrorCode"));
);

Register_Class(SCTPCommand);

SCTPCommand::SCTPCommand(const char *name) : ::cPacket(name)
{
    this->assocId_var = -1;
    this->sid_var = -1;
    this->numMsgs_var = 1;
    this->ssn_var = -1;
    this->sendUnordered_var = false;
    this->prValue_var = 0;
    this->localAddr_var = IPvXAddress("0.0.0.0");
    this->remoteAddr_var = IPvXAddress("0.0.0.0");
    this->localPort_var = 0;
    this->remotePort_var = 0;
    this->gate_var = -1;
}

SCTPCommand::SCTPCommand(const SCTPCommand& other) : ::cPacket(other)
{
    copy(other);
}

SCTPCommand::~SCTPCommand()
{
}

SCTPCommand& SCTPCommand::operator=(const SCTPCommand& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SCTPCommand::copy(const SCTPCommand& other)
{
    this->assocId_var = other.assocId_var;
    this->sid_var = other.sid_var;
    this->numMsgs_var = other.numMsgs_var;
    this->ssn_var = other.ssn_var;
    this->sendUnordered_var = other.sendUnordered_var;
    this->prValue_var = other.prValue_var;
    this->localAddr_var = other.localAddr_var;
    this->remoteAddr_var = other.remoteAddr_var;
    this->localPort_var = other.localPort_var;
    this->remotePort_var = other.remotePort_var;
    this->gate_var = other.gate_var;
}

void SCTPCommand::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->assocId_var);
    doPacking(b,this->sid_var);
    doPacking(b,this->numMsgs_var);
    doPacking(b,this->ssn_var);
    doPacking(b,this->sendUnordered_var);
    doPacking(b,this->prValue_var);
    doPacking(b,this->localAddr_var);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->localPort_var);
    doPacking(b,this->remotePort_var);
    doPacking(b,this->gate_var);
}

void SCTPCommand::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->assocId_var);
    doUnpacking(b,this->sid_var);
    doUnpacking(b,this->numMsgs_var);
    doUnpacking(b,this->ssn_var);
    doUnpacking(b,this->sendUnordered_var);
    doUnpacking(b,this->prValue_var);
    doUnpacking(b,this->localAddr_var);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->localPort_var);
    doUnpacking(b,this->remotePort_var);
    doUnpacking(b,this->gate_var);
}

int SCTPCommand::getAssocId() const
{
    return assocId_var;
}

void SCTPCommand::setAssocId(int assocId)
{
    this->assocId_var = assocId;
}

int SCTPCommand::getSid() const
{
    return sid_var;
}

void SCTPCommand::setSid(int sid)
{
    this->sid_var = sid;
}

int SCTPCommand::getNumMsgs() const
{
    return numMsgs_var;
}

void SCTPCommand::setNumMsgs(int numMsgs)
{
    this->numMsgs_var = numMsgs;
}

int SCTPCommand::getSsn() const
{
    return ssn_var;
}

void SCTPCommand::setSsn(int ssn)
{
    this->ssn_var = ssn;
}

unsigned short SCTPCommand::getSendUnordered() const
{
    return sendUnordered_var;
}

void SCTPCommand::setSendUnordered(unsigned short sendUnordered)
{
    this->sendUnordered_var = sendUnordered;
}

double SCTPCommand::getPrValue() const
{
    return prValue_var;
}

void SCTPCommand::setPrValue(double prValue)
{
    this->prValue_var = prValue;
}

IPvXAddress& SCTPCommand::getLocalAddr()
{
    return localAddr_var;
}

void SCTPCommand::setLocalAddr(const IPvXAddress& localAddr)
{
    this->localAddr_var = localAddr;
}

IPvXAddress& SCTPCommand::getRemoteAddr()
{
    return remoteAddr_var;
}

void SCTPCommand::setRemoteAddr(const IPvXAddress& remoteAddr)
{
    this->remoteAddr_var = remoteAddr;
}

int SCTPCommand::getLocalPort() const
{
    return localPort_var;
}

void SCTPCommand::setLocalPort(int localPort)
{
    this->localPort_var = localPort;
}

int SCTPCommand::getRemotePort() const
{
    return remotePort_var;
}

void SCTPCommand::setRemotePort(int remotePort)
{
    this->remotePort_var = remotePort;
}

int SCTPCommand::getGate() const
{
    return gate_var;
}

void SCTPCommand::setGate(int gate)
{
    this->gate_var = gate;
}

class SCTPCommandDescriptor : public cClassDescriptor
{
  public:
    SCTPCommandDescriptor();
    virtual ~SCTPCommandDescriptor();

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

Register_ClassDescriptor(SCTPCommandDescriptor);

SCTPCommandDescriptor::SCTPCommandDescriptor() : cClassDescriptor("SCTPCommand", "cPacket")
{
}

SCTPCommandDescriptor::~SCTPCommandDescriptor()
{
}

bool SCTPCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPCommand *>(obj)!=NULL;
}

const char *SCTPCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 11+basedesc->getFieldCount(object) : 11;
}

unsigned int SCTPCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<11) ? fieldTypeFlags[field] : 0;
}

const char *SCTPCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "assocId",
        "sid",
        "numMsgs",
        "ssn",
        "sendUnordered",
        "prValue",
        "localAddr",
        "remoteAddr",
        "localPort",
        "remotePort",
        "gate",
    };
    return (field>=0 && field<11) ? fieldNames[field] : NULL;
}

int SCTPCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "assocId")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sid")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "numMsgs")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssn")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendUnordered")==0) return base+4;
    if (fieldName[0]=='p' && strcmp(fieldName, "prValue")==0) return base+5;
    if (fieldName[0]=='l' && strcmp(fieldName, "localAddr")==0) return base+6;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddr")==0) return base+7;
    if (fieldName[0]=='l' && strcmp(fieldName, "localPort")==0) return base+8;
    if (fieldName[0]=='r' && strcmp(fieldName, "remotePort")==0) return base+9;
    if (fieldName[0]=='g' && strcmp(fieldName, "gate")==0) return base+10;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPCommandDescriptor::getFieldTypeString(void *object, int field) const
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
        "int",
        "int",
        "unsigned short",
        "double",
        "IPvXAddress",
        "IPvXAddress",
        "int",
        "int",
        "int",
    };
    return (field>=0 && field<11) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCommand *pp = (SCTPCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCommand *pp = (SCTPCommand *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getAssocId());
        case 1: return long2string(pp->getSid());
        case 2: return long2string(pp->getNumMsgs());
        case 3: return long2string(pp->getSsn());
        case 4: return ulong2string(pp->getSendUnordered());
        case 5: return double2string(pp->getPrValue());
        case 6: {std::stringstream out; out << pp->getLocalAddr(); return out.str();}
        case 7: {std::stringstream out; out << pp->getRemoteAddr(); return out.str();}
        case 8: return long2string(pp->getLocalPort());
        case 9: return long2string(pp->getRemotePort());
        case 10: return long2string(pp->getGate());
        default: return "";
    }
}

bool SCTPCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCommand *pp = (SCTPCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setAssocId(string2long(value)); return true;
        case 1: pp->setSid(string2long(value)); return true;
        case 2: pp->setNumMsgs(string2long(value)); return true;
        case 3: pp->setSsn(string2long(value)); return true;
        case 4: pp->setSendUnordered(string2ulong(value)); return true;
        case 5: pp->setPrValue(string2double(value)); return true;
        case 8: pp->setLocalPort(string2long(value)); return true;
        case 9: pp->setRemotePort(string2long(value)); return true;
        case 10: pp->setGate(string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 6: return opp_typename(typeid(IPvXAddress));
        case 7: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *SCTPCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCommand *pp = (SCTPCommand *)object; (void)pp;
    switch (field) {
        case 6: return (void *)(&pp->getLocalAddr()); break;
        case 7: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(SCTPErrorInfo);

SCTPErrorInfo::SCTPErrorInfo(const char *name) : ::SCTPCommand(name)
{
    this->errorCode_var = 0;
    this->messageText_var = 0;
}

SCTPErrorInfo::SCTPErrorInfo(const SCTPErrorInfo& other) : ::SCTPCommand(other)
{
    copy(other);
}

SCTPErrorInfo::~SCTPErrorInfo()
{
}

SCTPErrorInfo& SCTPErrorInfo::operator=(const SCTPErrorInfo& other)
{
    if (this==&other) return *this;
    ::SCTPCommand::operator=(other);
    copy(other);
    return *this;
}

void SCTPErrorInfo::copy(const SCTPErrorInfo& other)
{
    this->errorCode_var = other.errorCode_var;
    this->messageText_var = other.messageText_var;
}

void SCTPErrorInfo::parsimPack(cCommBuffer *b)
{
    ::SCTPCommand::parsimPack(b);
    doPacking(b,this->errorCode_var);
    doPacking(b,this->messageText_var);
}

void SCTPErrorInfo::parsimUnpack(cCommBuffer *b)
{
    ::SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->errorCode_var);
    doUnpacking(b,this->messageText_var);
}

int SCTPErrorInfo::getErrorCode() const
{
    return errorCode_var;
}

void SCTPErrorInfo::setErrorCode(int errorCode)
{
    this->errorCode_var = errorCode;
}

const char * SCTPErrorInfo::getMessageText() const
{
    return messageText_var.c_str();
}

void SCTPErrorInfo::setMessageText(const char * messageText)
{
    this->messageText_var = messageText;
}

class SCTPErrorInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPErrorInfoDescriptor();
    virtual ~SCTPErrorInfoDescriptor();

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

Register_ClassDescriptor(SCTPErrorInfoDescriptor);

SCTPErrorInfoDescriptor::SCTPErrorInfoDescriptor() : cClassDescriptor("SCTPErrorInfo", "SCTPCommand")
{
}

SCTPErrorInfoDescriptor::~SCTPErrorInfoDescriptor()
{
}

bool SCTPErrorInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPErrorInfo *>(obj)!=NULL;
}

const char *SCTPErrorInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPErrorInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SCTPErrorInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPErrorInfoDescriptor::getFieldName(void *object, int field) const
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

int SCTPErrorInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "errorCode")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "messageText")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPErrorInfoDescriptor::getFieldTypeString(void *object, int field) const
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

const char *SCTPErrorInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "SCTPErrorCode";
            return NULL;
        default: return NULL;
    }
}

int SCTPErrorInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorInfo *pp = (SCTPErrorInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPErrorInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorInfo *pp = (SCTPErrorInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getErrorCode());
        case 1: return oppstring2string(pp->getMessageText());
        default: return "";
    }
}

bool SCTPErrorInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorInfo *pp = (SCTPErrorInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setErrorCode(string2long(value)); return true;
        case 1: pp->setMessageText((value)); return true;
        default: return false;
    }
}

const char *SCTPErrorInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPErrorInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorInfo *pp = (SCTPErrorInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPOpenCommand);

SCTPOpenCommand::SCTPOpenCommand(const char *name) : ::SCTPCommand(name)
{
    this->fork_var = false;
    this->queueClass_var = "SCTPQueue";
    this->sctpAlgorithmClass_var = 0;
    this->inboundStreams_var = 0;
    this->outboundStreams_var = 0;
    this->streamReset_var = 0;
    this->prMethod_var = 0;
    this->numRequests_var = 0;
    this->messagesToPush_var = 0;
}

SCTPOpenCommand::SCTPOpenCommand(const SCTPOpenCommand& other) : ::SCTPCommand(other)
{
    copy(other);
}

SCTPOpenCommand::~SCTPOpenCommand()
{
}

SCTPOpenCommand& SCTPOpenCommand::operator=(const SCTPOpenCommand& other)
{
    if (this==&other) return *this;
    ::SCTPCommand::operator=(other);
    copy(other);
    return *this;
}

void SCTPOpenCommand::copy(const SCTPOpenCommand& other)
{
    this->localAddresses_var = other.localAddresses_var;
    this->remoteAddr_var = other.remoteAddr_var;
    this->remoteAddresses_var = other.remoteAddresses_var;
    this->fork_var = other.fork_var;
    this->queueClass_var = other.queueClass_var;
    this->sctpAlgorithmClass_var = other.sctpAlgorithmClass_var;
    this->inboundStreams_var = other.inboundStreams_var;
    this->outboundStreams_var = other.outboundStreams_var;
    this->streamReset_var = other.streamReset_var;
    this->prMethod_var = other.prMethod_var;
    this->numRequests_var = other.numRequests_var;
    this->messagesToPush_var = other.messagesToPush_var;
}

void SCTPOpenCommand::parsimPack(cCommBuffer *b)
{
    ::SCTPCommand::parsimPack(b);
    doPacking(b,this->localAddresses_var);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->remoteAddresses_var);
    doPacking(b,this->fork_var);
    doPacking(b,this->queueClass_var);
    doPacking(b,this->sctpAlgorithmClass_var);
    doPacking(b,this->inboundStreams_var);
    doPacking(b,this->outboundStreams_var);
    doPacking(b,this->streamReset_var);
    doPacking(b,this->prMethod_var);
    doPacking(b,this->numRequests_var);
    doPacking(b,this->messagesToPush_var);
}

void SCTPOpenCommand::parsimUnpack(cCommBuffer *b)
{
    ::SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->localAddresses_var);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->remoteAddresses_var);
    doUnpacking(b,this->fork_var);
    doUnpacking(b,this->queueClass_var);
    doUnpacking(b,this->sctpAlgorithmClass_var);
    doUnpacking(b,this->inboundStreams_var);
    doUnpacking(b,this->outboundStreams_var);
    doUnpacking(b,this->streamReset_var);
    doUnpacking(b,this->prMethod_var);
    doUnpacking(b,this->numRequests_var);
    doUnpacking(b,this->messagesToPush_var);
}

AddressVector& SCTPOpenCommand::getLocalAddresses()
{
    return localAddresses_var;
}

void SCTPOpenCommand::setLocalAddresses(const AddressVector& localAddresses)
{
    this->localAddresses_var = localAddresses;
}

IPvXAddress& SCTPOpenCommand::getRemoteAddr()
{
    return remoteAddr_var;
}

void SCTPOpenCommand::setRemoteAddr(const IPvXAddress& remoteAddr)
{
    this->remoteAddr_var = remoteAddr;
}

AddressVector& SCTPOpenCommand::getRemoteAddresses()
{
    return remoteAddresses_var;
}

void SCTPOpenCommand::setRemoteAddresses(const AddressVector& remoteAddresses)
{
    this->remoteAddresses_var = remoteAddresses;
}

bool SCTPOpenCommand::getFork() const
{
    return fork_var;
}

void SCTPOpenCommand::setFork(bool fork)
{
    this->fork_var = fork;
}

const char * SCTPOpenCommand::getQueueClass() const
{
    return queueClass_var.c_str();
}

void SCTPOpenCommand::setQueueClass(const char * queueClass)
{
    this->queueClass_var = queueClass;
}

const char * SCTPOpenCommand::getSctpAlgorithmClass() const
{
    return sctpAlgorithmClass_var.c_str();
}

void SCTPOpenCommand::setSctpAlgorithmClass(const char * sctpAlgorithmClass)
{
    this->sctpAlgorithmClass_var = sctpAlgorithmClass;
}

uint32 SCTPOpenCommand::getInboundStreams() const
{
    return inboundStreams_var;
}

void SCTPOpenCommand::setInboundStreams(uint32 inboundStreams)
{
    this->inboundStreams_var = inboundStreams;
}

uint32 SCTPOpenCommand::getOutboundStreams() const
{
    return outboundStreams_var;
}

void SCTPOpenCommand::setOutboundStreams(uint32 outboundStreams)
{
    this->outboundStreams_var = outboundStreams;
}

bool SCTPOpenCommand::getStreamReset() const
{
    return streamReset_var;
}

void SCTPOpenCommand::setStreamReset(bool streamReset)
{
    this->streamReset_var = streamReset;
}

int SCTPOpenCommand::getPrMethod() const
{
    return prMethod_var;
}

void SCTPOpenCommand::setPrMethod(int prMethod)
{
    this->prMethod_var = prMethod;
}

uint32 SCTPOpenCommand::getNumRequests() const
{
    return numRequests_var;
}

void SCTPOpenCommand::setNumRequests(uint32 numRequests)
{
    this->numRequests_var = numRequests;
}

uint32 SCTPOpenCommand::getMessagesToPush() const
{
    return messagesToPush_var;
}

void SCTPOpenCommand::setMessagesToPush(uint32 messagesToPush)
{
    this->messagesToPush_var = messagesToPush;
}

class SCTPOpenCommandDescriptor : public cClassDescriptor
{
  public:
    SCTPOpenCommandDescriptor();
    virtual ~SCTPOpenCommandDescriptor();

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

Register_ClassDescriptor(SCTPOpenCommandDescriptor);

SCTPOpenCommandDescriptor::SCTPOpenCommandDescriptor() : cClassDescriptor("SCTPOpenCommand", "SCTPCommand")
{
}

SCTPOpenCommandDescriptor::~SCTPOpenCommandDescriptor()
{
}

bool SCTPOpenCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPOpenCommand *>(obj)!=NULL;
}

const char *SCTPOpenCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPOpenCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 12+basedesc->getFieldCount(object) : 12;
}

unsigned int SCTPOpenCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<12) ? fieldTypeFlags[field] : 0;
}

const char *SCTPOpenCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "localAddresses",
        "remoteAddr",
        "remoteAddresses",
        "fork",
        "queueClass",
        "sctpAlgorithmClass",
        "inboundStreams",
        "outboundStreams",
        "streamReset",
        "prMethod",
        "numRequests",
        "messagesToPush",
    };
    return (field>=0 && field<12) ? fieldNames[field] : NULL;
}

int SCTPOpenCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "localAddresses")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddr")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddresses")==0) return base+2;
    if (fieldName[0]=='f' && strcmp(fieldName, "fork")==0) return base+3;
    if (fieldName[0]=='q' && strcmp(fieldName, "queueClass")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "sctpAlgorithmClass")==0) return base+5;
    if (fieldName[0]=='i' && strcmp(fieldName, "inboundStreams")==0) return base+6;
    if (fieldName[0]=='o' && strcmp(fieldName, "outboundStreams")==0) return base+7;
    if (fieldName[0]=='s' && strcmp(fieldName, "streamReset")==0) return base+8;
    if (fieldName[0]=='p' && strcmp(fieldName, "prMethod")==0) return base+9;
    if (fieldName[0]=='n' && strcmp(fieldName, "numRequests")==0) return base+10;
    if (fieldName[0]=='m' && strcmp(fieldName, "messagesToPush")==0) return base+11;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPOpenCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "AddressVector",
        "IPvXAddress",
        "AddressVector",
        "bool",
        "string",
        "string",
        "uint32",
        "uint32",
        "bool",
        "int",
        "uint32",
        "uint32",
    };
    return (field>=0 && field<12) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPOpenCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPOpenCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOpenCommand *pp = (SCTPOpenCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPOpenCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOpenCommand *pp = (SCTPOpenCommand *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getLocalAddresses(); return out.str();}
        case 1: {std::stringstream out; out << pp->getRemoteAddr(); return out.str();}
        case 2: {std::stringstream out; out << pp->getRemoteAddresses(); return out.str();}
        case 3: return bool2string(pp->getFork());
        case 4: return oppstring2string(pp->getQueueClass());
        case 5: return oppstring2string(pp->getSctpAlgorithmClass());
        case 6: return ulong2string(pp->getInboundStreams());
        case 7: return ulong2string(pp->getOutboundStreams());
        case 8: return bool2string(pp->getStreamReset());
        case 9: return long2string(pp->getPrMethod());
        case 10: return ulong2string(pp->getNumRequests());
        case 11: return ulong2string(pp->getMessagesToPush());
        default: return "";
    }
}

bool SCTPOpenCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOpenCommand *pp = (SCTPOpenCommand *)object; (void)pp;
    switch (field) {
        case 3: pp->setFork(string2bool(value)); return true;
        case 4: pp->setQueueClass((value)); return true;
        case 5: pp->setSctpAlgorithmClass((value)); return true;
        case 6: pp->setInboundStreams(string2ulong(value)); return true;
        case 7: pp->setOutboundStreams(string2ulong(value)); return true;
        case 8: pp->setStreamReset(string2bool(value)); return true;
        case 9: pp->setPrMethod(string2long(value)); return true;
        case 10: pp->setNumRequests(string2ulong(value)); return true;
        case 11: pp->setMessagesToPush(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPOpenCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(AddressVector));
        case 1: return opp_typename(typeid(IPvXAddress));
        case 2: return opp_typename(typeid(AddressVector));
        default: return NULL;
    };
}

void *SCTPOpenCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOpenCommand *pp = (SCTPOpenCommand *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getLocalAddresses()); break;
        case 1: return (void *)(&pp->getRemoteAddr()); break;
        case 2: return (void *)(&pp->getRemoteAddresses()); break;
        default: return NULL;
    }
}

Register_Class(SCTPSendCommand);

SCTPSendCommand::SCTPSendCommand(const char *name) : ::SCTPCommand(name)
{
    this->prMethod_var = 0;
    this->last_var = 0;
    this->ppid_var = 0;
    this->primary_var = true;
    this->sackNow_var = false;
}

SCTPSendCommand::SCTPSendCommand(const SCTPSendCommand& other) : ::SCTPCommand(other)
{
    copy(other);
}

SCTPSendCommand::~SCTPSendCommand()
{
}

SCTPSendCommand& SCTPSendCommand::operator=(const SCTPSendCommand& other)
{
    if (this==&other) return *this;
    ::SCTPCommand::operator=(other);
    copy(other);
    return *this;
}

void SCTPSendCommand::copy(const SCTPSendCommand& other)
{
    this->prMethod_var = other.prMethod_var;
    this->last_var = other.last_var;
    this->ppid_var = other.ppid_var;
    this->primary_var = other.primary_var;
    this->sackNow_var = other.sackNow_var;
}

void SCTPSendCommand::parsimPack(cCommBuffer *b)
{
    ::SCTPCommand::parsimPack(b);
    doPacking(b,this->prMethod_var);
    doPacking(b,this->last_var);
    doPacking(b,this->ppid_var);
    doPacking(b,this->primary_var);
    doPacking(b,this->sackNow_var);
}

void SCTPSendCommand::parsimUnpack(cCommBuffer *b)
{
    ::SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->prMethod_var);
    doUnpacking(b,this->last_var);
    doUnpacking(b,this->ppid_var);
    doUnpacking(b,this->primary_var);
    doUnpacking(b,this->sackNow_var);
}

unsigned int SCTPSendCommand::getPrMethod() const
{
    return prMethod_var;
}

void SCTPSendCommand::setPrMethod(unsigned int prMethod)
{
    this->prMethod_var = prMethod;
}

bool SCTPSendCommand::getLast() const
{
    return last_var;
}

void SCTPSendCommand::setLast(bool last)
{
    this->last_var = last;
}

unsigned int SCTPSendCommand::getPpid() const
{
    return ppid_var;
}

void SCTPSendCommand::setPpid(unsigned int ppid)
{
    this->ppid_var = ppid;
}

bool SCTPSendCommand::getPrimary() const
{
    return primary_var;
}

void SCTPSendCommand::setPrimary(bool primary)
{
    this->primary_var = primary;
}

bool SCTPSendCommand::getSackNow() const
{
    return sackNow_var;
}

void SCTPSendCommand::setSackNow(bool sackNow)
{
    this->sackNow_var = sackNow;
}

class SCTPSendCommandDescriptor : public cClassDescriptor
{
  public:
    SCTPSendCommandDescriptor();
    virtual ~SCTPSendCommandDescriptor();

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

Register_ClassDescriptor(SCTPSendCommandDescriptor);

SCTPSendCommandDescriptor::SCTPSendCommandDescriptor() : cClassDescriptor("SCTPSendCommand", "SCTPCommand")
{
}

SCTPSendCommandDescriptor::~SCTPSendCommandDescriptor()
{
}

bool SCTPSendCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPSendCommand *>(obj)!=NULL;
}

const char *SCTPSendCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPSendCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int SCTPSendCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPSendCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "prMethod",
        "last",
        "ppid",
        "primary",
        "sackNow",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int SCTPSendCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "prMethod")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "last")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "ppid")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "primary")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "sackNow")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPSendCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "bool",
        "unsigned int",
        "bool",
        "bool",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPSendCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPSendCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendCommand *pp = (SCTPSendCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPSendCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendCommand *pp = (SCTPSendCommand *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPrMethod());
        case 1: return bool2string(pp->getLast());
        case 2: return ulong2string(pp->getPpid());
        case 3: return bool2string(pp->getPrimary());
        case 4: return bool2string(pp->getSackNow());
        default: return "";
    }
}

bool SCTPSendCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendCommand *pp = (SCTPSendCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setPrMethod(string2ulong(value)); return true;
        case 1: pp->setLast(string2bool(value)); return true;
        case 2: pp->setPpid(string2ulong(value)); return true;
        case 3: pp->setPrimary(string2bool(value)); return true;
        case 4: pp->setSackNow(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPSendCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPSendCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendCommand *pp = (SCTPSendCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPConnectInfo);

SCTPConnectInfo::SCTPConnectInfo(const char *name) : ::SCTPCommand(name)
{
    this->status_var = 0;
    this->inboundStreams_var = 0;
    this->outboundStreams_var = 0;
}

SCTPConnectInfo::SCTPConnectInfo(const SCTPConnectInfo& other) : ::SCTPCommand(other)
{
    copy(other);
}

SCTPConnectInfo::~SCTPConnectInfo()
{
}

SCTPConnectInfo& SCTPConnectInfo::operator=(const SCTPConnectInfo& other)
{
    if (this==&other) return *this;
    ::SCTPCommand::operator=(other);
    copy(other);
    return *this;
}

void SCTPConnectInfo::copy(const SCTPConnectInfo& other)
{
    this->remoteAddresses_var = other.remoteAddresses_var;
    this->status_var = other.status_var;
    this->inboundStreams_var = other.inboundStreams_var;
    this->outboundStreams_var = other.outboundStreams_var;
}

void SCTPConnectInfo::parsimPack(cCommBuffer *b)
{
    ::SCTPCommand::parsimPack(b);
    doPacking(b,this->remoteAddresses_var);
    doPacking(b,this->status_var);
    doPacking(b,this->inboundStreams_var);
    doPacking(b,this->outboundStreams_var);
}

void SCTPConnectInfo::parsimUnpack(cCommBuffer *b)
{
    ::SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->remoteAddresses_var);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->inboundStreams_var);
    doUnpacking(b,this->outboundStreams_var);
}

AddressVector& SCTPConnectInfo::getRemoteAddresses()
{
    return remoteAddresses_var;
}

void SCTPConnectInfo::setRemoteAddresses(const AddressVector& remoteAddresses)
{
    this->remoteAddresses_var = remoteAddresses;
}

int SCTPConnectInfo::getStatus() const
{
    return status_var;
}

void SCTPConnectInfo::setStatus(int status)
{
    this->status_var = status;
}

int SCTPConnectInfo::getInboundStreams() const
{
    return inboundStreams_var;
}

void SCTPConnectInfo::setInboundStreams(int inboundStreams)
{
    this->inboundStreams_var = inboundStreams;
}

int SCTPConnectInfo::getOutboundStreams() const
{
    return outboundStreams_var;
}

void SCTPConnectInfo::setOutboundStreams(int outboundStreams)
{
    this->outboundStreams_var = outboundStreams;
}

class SCTPConnectInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPConnectInfoDescriptor();
    virtual ~SCTPConnectInfoDescriptor();

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

Register_ClassDescriptor(SCTPConnectInfoDescriptor);

SCTPConnectInfoDescriptor::SCTPConnectInfoDescriptor() : cClassDescriptor("SCTPConnectInfo", "SCTPCommand")
{
}

SCTPConnectInfoDescriptor::~SCTPConnectInfoDescriptor()
{
}

bool SCTPConnectInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPConnectInfo *>(obj)!=NULL;
}

const char *SCTPConnectInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPConnectInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SCTPConnectInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *SCTPConnectInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "remoteAddresses",
        "status",
        "inboundStreams",
        "outboundStreams",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SCTPConnectInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddresses")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "status")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "inboundStreams")==0) return base+2;
    if (fieldName[0]=='o' && strcmp(fieldName, "outboundStreams")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPConnectInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "AddressVector",
        "int",
        "int",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPConnectInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPConnectInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPConnectInfo *pp = (SCTPConnectInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPConnectInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPConnectInfo *pp = (SCTPConnectInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteAddresses(); return out.str();}
        case 1: return long2string(pp->getStatus());
        case 2: return long2string(pp->getInboundStreams());
        case 3: return long2string(pp->getOutboundStreams());
        default: return "";
    }
}

bool SCTPConnectInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPConnectInfo *pp = (SCTPConnectInfo *)object; (void)pp;
    switch (field) {
        case 1: pp->setStatus(string2long(value)); return true;
        case 2: pp->setInboundStreams(string2long(value)); return true;
        case 3: pp->setOutboundStreams(string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPConnectInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(AddressVector));
        default: return NULL;
    };
}

void *SCTPConnectInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPConnectInfo *pp = (SCTPConnectInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRemoteAddresses()); break;
        default: return NULL;
    }
}

Register_Class(SCTPStatusInfo);

SCTPStatusInfo::SCTPStatusInfo(const char *name) : ::SCTPCommand(name)
{
    this->state_var = 0;
    this->stateName_var = 0;
    this->active_var = 0;
}

SCTPStatusInfo::SCTPStatusInfo(const SCTPStatusInfo& other) : ::SCTPCommand(other)
{
    copy(other);
}

SCTPStatusInfo::~SCTPStatusInfo()
{
}

SCTPStatusInfo& SCTPStatusInfo::operator=(const SCTPStatusInfo& other)
{
    if (this==&other) return *this;
    ::SCTPCommand::operator=(other);
    copy(other);
    return *this;
}

void SCTPStatusInfo::copy(const SCTPStatusInfo& other)
{
    this->state_var = other.state_var;
    this->stateName_var = other.stateName_var;
    this->pathId_var = other.pathId_var;
    this->active_var = other.active_var;
}

void SCTPStatusInfo::parsimPack(cCommBuffer *b)
{
    ::SCTPCommand::parsimPack(b);
    doPacking(b,this->state_var);
    doPacking(b,this->stateName_var);
    doPacking(b,this->pathId_var);
    doPacking(b,this->active_var);
}

void SCTPStatusInfo::parsimUnpack(cCommBuffer *b)
{
    ::SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->state_var);
    doUnpacking(b,this->stateName_var);
    doUnpacking(b,this->pathId_var);
    doUnpacking(b,this->active_var);
}

int SCTPStatusInfo::getState() const
{
    return state_var;
}

void SCTPStatusInfo::setState(int state)
{
    this->state_var = state;
}

const char * SCTPStatusInfo::getStateName() const
{
    return stateName_var.c_str();
}

void SCTPStatusInfo::setStateName(const char * stateName)
{
    this->stateName_var = stateName;
}

IPvXAddress& SCTPStatusInfo::getPathId()
{
    return pathId_var;
}

void SCTPStatusInfo::setPathId(const IPvXAddress& pathId)
{
    this->pathId_var = pathId;
}

bool SCTPStatusInfo::getActive() const
{
    return active_var;
}

void SCTPStatusInfo::setActive(bool active)
{
    this->active_var = active;
}

class SCTPStatusInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPStatusInfoDescriptor();
    virtual ~SCTPStatusInfoDescriptor();

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

Register_ClassDescriptor(SCTPStatusInfoDescriptor);

SCTPStatusInfoDescriptor::SCTPStatusInfoDescriptor() : cClassDescriptor("SCTPStatusInfo", "SCTPCommand")
{
}

SCTPStatusInfoDescriptor::~SCTPStatusInfoDescriptor()
{
}

bool SCTPStatusInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPStatusInfo *>(obj)!=NULL;
}

const char *SCTPStatusInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPStatusInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SCTPStatusInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPStatusInfoDescriptor::getFieldName(void *object, int field) const
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
        "pathId",
        "active",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SCTPStatusInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "state")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "stateName")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "pathId")==0) return base+2;
    if (fieldName[0]=='a' && strcmp(fieldName, "active")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPStatusInfoDescriptor::getFieldTypeString(void *object, int field) const
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
        "IPvXAddress",
        "bool",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPStatusInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPStatusInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStatusInfo *pp = (SCTPStatusInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPStatusInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStatusInfo *pp = (SCTPStatusInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getState());
        case 1: return oppstring2string(pp->getStateName());
        case 2: {std::stringstream out; out << pp->getPathId(); return out.str();}
        case 3: return bool2string(pp->getActive());
        default: return "";
    }
}

bool SCTPStatusInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStatusInfo *pp = (SCTPStatusInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setState(string2long(value)); return true;
        case 1: pp->setStateName((value)); return true;
        case 3: pp->setActive(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPStatusInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *SCTPStatusInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStatusInfo *pp = (SCTPStatusInfo *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getPathId()); break;
        default: return NULL;
    }
}

Register_Class(SCTPPathInfo);

SCTPPathInfo::SCTPPathInfo(const char *name) : ::SCTPCommand(name)
{
}

SCTPPathInfo::SCTPPathInfo(const SCTPPathInfo& other) : ::SCTPCommand(other)
{
    copy(other);
}

SCTPPathInfo::~SCTPPathInfo()
{
}

SCTPPathInfo& SCTPPathInfo::operator=(const SCTPPathInfo& other)
{
    if (this==&other) return *this;
    ::SCTPCommand::operator=(other);
    copy(other);
    return *this;
}

void SCTPPathInfo::copy(const SCTPPathInfo& other)
{
    this->remoteAddress_var = other.remoteAddress_var;
}

void SCTPPathInfo::parsimPack(cCommBuffer *b)
{
    ::SCTPCommand::parsimPack(b);
    doPacking(b,this->remoteAddress_var);
}

void SCTPPathInfo::parsimUnpack(cCommBuffer *b)
{
    ::SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->remoteAddress_var);
}

IPvXAddress& SCTPPathInfo::getRemoteAddress()
{
    return remoteAddress_var;
}

void SCTPPathInfo::setRemoteAddress(const IPvXAddress& remoteAddress)
{
    this->remoteAddress_var = remoteAddress;
}

class SCTPPathInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPPathInfoDescriptor();
    virtual ~SCTPPathInfoDescriptor();

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

Register_ClassDescriptor(SCTPPathInfoDescriptor);

SCTPPathInfoDescriptor::SCTPPathInfoDescriptor() : cClassDescriptor("SCTPPathInfo", "SCTPCommand")
{
}

SCTPPathInfoDescriptor::~SCTPPathInfoDescriptor()
{
}

bool SCTPPathInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPPathInfo *>(obj)!=NULL;
}

const char *SCTPPathInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPPathInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPPathInfoDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *SCTPPathInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "remoteAddress",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPPathInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddress")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPPathInfoDescriptor::getFieldTypeString(void *object, int field) const
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

const char *SCTPPathInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPPathInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPathInfo *pp = (SCTPPathInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPPathInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPathInfo *pp = (SCTPPathInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteAddress(); return out.str();}
        default: return "";
    }
}

bool SCTPPathInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPathInfo *pp = (SCTPPathInfo *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SCTPPathInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPPathInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPathInfo *pp = (SCTPPathInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRemoteAddress()); break;
        default: return NULL;
    }
}

Register_Class(SCTPResetInfo);

SCTPResetInfo::SCTPResetInfo(const char *name) : ::SCTPCommand(name)
{
    this->requestType_var = 0;
    streams_arraysize = 0;
    this->streams_var = 0;
}

SCTPResetInfo::SCTPResetInfo(const SCTPResetInfo& other) : ::SCTPCommand(other)
{
    streams_arraysize = 0;
    this->streams_var = 0;
    copy(other);
}

SCTPResetInfo::~SCTPResetInfo()
{
    delete [] streams_var;
}

SCTPResetInfo& SCTPResetInfo::operator=(const SCTPResetInfo& other)
{
    if (this==&other) return *this;
    ::SCTPCommand::operator=(other);
    copy(other);
    return *this;
}

void SCTPResetInfo::copy(const SCTPResetInfo& other)
{
    this->remoteAddr_var = other.remoteAddr_var;
    this->requestType_var = other.requestType_var;
    delete [] this->streams_var;
    this->streams_var = (other.streams_arraysize==0) ? NULL : new char[other.streams_arraysize];
    streams_arraysize = other.streams_arraysize;
    for (unsigned int i=0; i<streams_arraysize; i++)
        this->streams_var[i] = other.streams_var[i];
}

void SCTPResetInfo::parsimPack(cCommBuffer *b)
{
    ::SCTPCommand::parsimPack(b);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->requestType_var);
    b->pack(streams_arraysize);
    doPacking(b,this->streams_var,streams_arraysize);
}

void SCTPResetInfo::parsimUnpack(cCommBuffer *b)
{
    ::SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->requestType_var);
    delete [] this->streams_var;
    b->unpack(streams_arraysize);
    if (streams_arraysize==0) {
        this->streams_var = 0;
    } else {
        this->streams_var = new char[streams_arraysize];
        doUnpacking(b,this->streams_var,streams_arraysize);
    }
}

IPvXAddress& SCTPResetInfo::getRemoteAddr()
{
    return remoteAddr_var;
}

void SCTPResetInfo::setRemoteAddr(const IPvXAddress& remoteAddr)
{
    this->remoteAddr_var = remoteAddr;
}

unsigned short SCTPResetInfo::getRequestType() const
{
    return requestType_var;
}

void SCTPResetInfo::setRequestType(unsigned short requestType)
{
    this->requestType_var = requestType;
}

void SCTPResetInfo::setStreamsArraySize(unsigned int size)
{
    char *streams_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = streams_arraysize < size ? streams_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        streams_var2[i] = this->streams_var[i];
    for (unsigned int i=sz; i<size; i++)
        streams_var2[i] = 0;
    streams_arraysize = size;
    delete [] this->streams_var;
    this->streams_var = streams_var2;
}

unsigned int SCTPResetInfo::getStreamsArraySize() const
{
    return streams_arraysize;
}

char SCTPResetInfo::getStreams(unsigned int k) const
{
    if (k>=streams_arraysize) throw cRuntimeError("Array of size %d indexed by %d", streams_arraysize, k);
    return streams_var[k];
}

void SCTPResetInfo::setStreams(unsigned int k, char streams)
{
    if (k>=streams_arraysize) throw cRuntimeError("Array of size %d indexed by %d", streams_arraysize, k);
    this->streams_var[k] = streams;
}

class SCTPResetInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPResetInfoDescriptor();
    virtual ~SCTPResetInfoDescriptor();

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

Register_ClassDescriptor(SCTPResetInfoDescriptor);

SCTPResetInfoDescriptor::SCTPResetInfoDescriptor() : cClassDescriptor("SCTPResetInfo", "SCTPCommand")
{
}

SCTPResetInfoDescriptor::~SCTPResetInfoDescriptor()
{
}

bool SCTPResetInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPResetInfo *>(obj)!=NULL;
}

const char *SCTPResetInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPResetInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SCTPResetInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *SCTPResetInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "remoteAddr",
        "requestType",
        "streams",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int SCTPResetInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddr")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "requestType")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "streams")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPResetInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
        "unsigned short",
        "char",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPResetInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPResetInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetInfo *pp = (SCTPResetInfo *)object; (void)pp;
    switch (field) {
        case 2: return pp->getStreamsArraySize();
        default: return 0;
    }
}

std::string SCTPResetInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetInfo *pp = (SCTPResetInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteAddr(); return out.str();}
        case 1: return ulong2string(pp->getRequestType());
        case 2: return long2string(pp->getStreams(i));
        default: return "";
    }
}

bool SCTPResetInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetInfo *pp = (SCTPResetInfo *)object; (void)pp;
    switch (field) {
        case 1: pp->setRequestType(string2ulong(value)); return true;
        case 2: pp->setStreams(i,string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPResetInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPResetInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetInfo *pp = (SCTPResetInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(SCTPInfo);

SCTPInfo::SCTPInfo(const char *name) : ::SCTPCommand(name)
{
    this->text_var = 0;
}

SCTPInfo::SCTPInfo(const SCTPInfo& other) : ::SCTPCommand(other)
{
    copy(other);
}

SCTPInfo::~SCTPInfo()
{
}

SCTPInfo& SCTPInfo::operator=(const SCTPInfo& other)
{
    if (this==&other) return *this;
    ::SCTPCommand::operator=(other);
    copy(other);
    return *this;
}

void SCTPInfo::copy(const SCTPInfo& other)
{
    this->text_var = other.text_var;
}

void SCTPInfo::parsimPack(cCommBuffer *b)
{
    ::SCTPCommand::parsimPack(b);
    doPacking(b,this->text_var);
}

void SCTPInfo::parsimUnpack(cCommBuffer *b)
{
    ::SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->text_var);
}

int SCTPInfo::getText() const
{
    return text_var;
}

void SCTPInfo::setText(int text)
{
    this->text_var = text;
}

class SCTPInfoDescriptor : public cClassDescriptor
{
  public:
    SCTPInfoDescriptor();
    virtual ~SCTPInfoDescriptor();

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

Register_ClassDescriptor(SCTPInfoDescriptor);

SCTPInfoDescriptor::SCTPInfoDescriptor() : cClassDescriptor("SCTPInfo", "SCTPCommand")
{
}

SCTPInfoDescriptor::~SCTPInfoDescriptor()
{
}

bool SCTPInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPInfo *>(obj)!=NULL;
}

const char *SCTPInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "text",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "text")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPInfoDescriptor::getFieldTypeString(void *object, int field) const
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

const char *SCTPInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInfo *pp = (SCTPInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInfo *pp = (SCTPInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getText());
        default: return "";
    }
}

bool SCTPInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInfo *pp = (SCTPInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setText(string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInfo *pp = (SCTPInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPRcvCommand);

SCTPRcvCommand::SCTPRcvCommand(const char *name) : ::SCTPCommand(name)
{
    this->ppid_var = 0;
    this->tsn_var = 0;
    this->cumTsn_var = 0;
}

SCTPRcvCommand::SCTPRcvCommand(const SCTPRcvCommand& other) : ::SCTPCommand(other)
{
    copy(other);
}

SCTPRcvCommand::~SCTPRcvCommand()
{
}

SCTPRcvCommand& SCTPRcvCommand::operator=(const SCTPRcvCommand& other)
{
    if (this==&other) return *this;
    ::SCTPCommand::operator=(other);
    copy(other);
    return *this;
}

void SCTPRcvCommand::copy(const SCTPRcvCommand& other)
{
    this->ppid_var = other.ppid_var;
    this->tsn_var = other.tsn_var;
    this->cumTsn_var = other.cumTsn_var;
}

void SCTPRcvCommand::parsimPack(cCommBuffer *b)
{
    ::SCTPCommand::parsimPack(b);
    doPacking(b,this->ppid_var);
    doPacking(b,this->tsn_var);
    doPacking(b,this->cumTsn_var);
}

void SCTPRcvCommand::parsimUnpack(cCommBuffer *b)
{
    ::SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->ppid_var);
    doUnpacking(b,this->tsn_var);
    doUnpacking(b,this->cumTsn_var);
}

uint32 SCTPRcvCommand::getPpid() const
{
    return ppid_var;
}

void SCTPRcvCommand::setPpid(uint32 ppid)
{
    this->ppid_var = ppid;
}

uint32 SCTPRcvCommand::getTsn() const
{
    return tsn_var;
}

void SCTPRcvCommand::setTsn(uint32 tsn)
{
    this->tsn_var = tsn;
}

uint32 SCTPRcvCommand::getCumTsn() const
{
    return cumTsn_var;
}

void SCTPRcvCommand::setCumTsn(uint32 cumTsn)
{
    this->cumTsn_var = cumTsn;
}

class SCTPRcvCommandDescriptor : public cClassDescriptor
{
  public:
    SCTPRcvCommandDescriptor();
    virtual ~SCTPRcvCommandDescriptor();

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

Register_ClassDescriptor(SCTPRcvCommandDescriptor);

SCTPRcvCommandDescriptor::SCTPRcvCommandDescriptor() : cClassDescriptor("SCTPRcvCommand", "SCTPCommand")
{
}

SCTPRcvCommandDescriptor::~SCTPRcvCommandDescriptor()
{
}

bool SCTPRcvCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPRcvCommand *>(obj)!=NULL;
}

const char *SCTPRcvCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPRcvCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SCTPRcvCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPRcvCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ppid",
        "tsn",
        "cumTsn",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int SCTPRcvCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "ppid")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "tsn")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "cumTsn")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPRcvCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "uint32",
        "uint32",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPRcvCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPRcvCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPRcvCommand *pp = (SCTPRcvCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPRcvCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPRcvCommand *pp = (SCTPRcvCommand *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPpid());
        case 1: return ulong2string(pp->getTsn());
        case 2: return ulong2string(pp->getCumTsn());
        default: return "";
    }
}

bool SCTPRcvCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPRcvCommand *pp = (SCTPRcvCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setPpid(string2ulong(value)); return true;
        case 1: pp->setTsn(string2ulong(value)); return true;
        case 2: pp->setCumTsn(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPRcvCommandDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPRcvCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPRcvCommand *pp = (SCTPRcvCommand *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPSendQueueAbated);

SCTPSendQueueAbated::SCTPSendQueueAbated(const char *name) : ::SCTPCommand(name)
{
    this->bytesAvailable_var = 0;
    this->bytesQueued_var = 0;
    this->bytesLimit_var = 0;
    queuedForStream_arraysize = 0;
    this->queuedForStream_var = 0;
}

SCTPSendQueueAbated::SCTPSendQueueAbated(const SCTPSendQueueAbated& other) : ::SCTPCommand(other)
{
    queuedForStream_arraysize = 0;
    this->queuedForStream_var = 0;
    copy(other);
}

SCTPSendQueueAbated::~SCTPSendQueueAbated()
{
    delete [] queuedForStream_var;
}

SCTPSendQueueAbated& SCTPSendQueueAbated::operator=(const SCTPSendQueueAbated& other)
{
    if (this==&other) return *this;
    ::SCTPCommand::operator=(other);
    copy(other);
    return *this;
}

void SCTPSendQueueAbated::copy(const SCTPSendQueueAbated& other)
{
    this->bytesAvailable_var = other.bytesAvailable_var;
    this->bytesQueued_var = other.bytesQueued_var;
    this->bytesLimit_var = other.bytesLimit_var;
    delete [] this->queuedForStream_var;
    this->queuedForStream_var = (other.queuedForStream_arraysize==0) ? NULL : new uint64[other.queuedForStream_arraysize];
    queuedForStream_arraysize = other.queuedForStream_arraysize;
    for (unsigned int i=0; i<queuedForStream_arraysize; i++)
        this->queuedForStream_var[i] = other.queuedForStream_var[i];
}

void SCTPSendQueueAbated::parsimPack(cCommBuffer *b)
{
    ::SCTPCommand::parsimPack(b);
    doPacking(b,this->bytesAvailable_var);
    doPacking(b,this->bytesQueued_var);
    doPacking(b,this->bytesLimit_var);
    b->pack(queuedForStream_arraysize);
    doPacking(b,this->queuedForStream_var,queuedForStream_arraysize);
}

void SCTPSendQueueAbated::parsimUnpack(cCommBuffer *b)
{
    ::SCTPCommand::parsimUnpack(b);
    doUnpacking(b,this->bytesAvailable_var);
    doUnpacking(b,this->bytesQueued_var);
    doUnpacking(b,this->bytesLimit_var);
    delete [] this->queuedForStream_var;
    b->unpack(queuedForStream_arraysize);
    if (queuedForStream_arraysize==0) {
        this->queuedForStream_var = 0;
    } else {
        this->queuedForStream_var = new uint64[queuedForStream_arraysize];
        doUnpacking(b,this->queuedForStream_var,queuedForStream_arraysize);
    }
}

uint64 SCTPSendQueueAbated::getBytesAvailable() const
{
    return bytesAvailable_var;
}

void SCTPSendQueueAbated::setBytesAvailable(uint64 bytesAvailable)
{
    this->bytesAvailable_var = bytesAvailable;
}

uint64 SCTPSendQueueAbated::getBytesQueued() const
{
    return bytesQueued_var;
}

void SCTPSendQueueAbated::setBytesQueued(uint64 bytesQueued)
{
    this->bytesQueued_var = bytesQueued;
}

uint64 SCTPSendQueueAbated::getBytesLimit() const
{
    return bytesLimit_var;
}

void SCTPSendQueueAbated::setBytesLimit(uint64 bytesLimit)
{
    this->bytesLimit_var = bytesLimit;
}

void SCTPSendQueueAbated::setQueuedForStreamArraySize(unsigned int size)
{
    uint64 *queuedForStream_var2 = (size==0) ? NULL : new uint64[size];
    unsigned int sz = queuedForStream_arraysize < size ? queuedForStream_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        queuedForStream_var2[i] = this->queuedForStream_var[i];
    for (unsigned int i=sz; i<size; i++)
        queuedForStream_var2[i] = 0;
    queuedForStream_arraysize = size;
    delete [] this->queuedForStream_var;
    this->queuedForStream_var = queuedForStream_var2;
}

unsigned int SCTPSendQueueAbated::getQueuedForStreamArraySize() const
{
    return queuedForStream_arraysize;
}

uint64 SCTPSendQueueAbated::getQueuedForStream(unsigned int k) const
{
    if (k>=queuedForStream_arraysize) throw cRuntimeError("Array of size %d indexed by %d", queuedForStream_arraysize, k);
    return queuedForStream_var[k];
}

void SCTPSendQueueAbated::setQueuedForStream(unsigned int k, uint64 queuedForStream)
{
    if (k>=queuedForStream_arraysize) throw cRuntimeError("Array of size %d indexed by %d", queuedForStream_arraysize, k);
    this->queuedForStream_var[k] = queuedForStream;
}

class SCTPSendQueueAbatedDescriptor : public cClassDescriptor
{
  public:
    SCTPSendQueueAbatedDescriptor();
    virtual ~SCTPSendQueueAbatedDescriptor();

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

Register_ClassDescriptor(SCTPSendQueueAbatedDescriptor);

SCTPSendQueueAbatedDescriptor::SCTPSendQueueAbatedDescriptor() : cClassDescriptor("SCTPSendQueueAbated", "SCTPCommand")
{
}

SCTPSendQueueAbatedDescriptor::~SCTPSendQueueAbatedDescriptor()
{
}

bool SCTPSendQueueAbatedDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPSendQueueAbated *>(obj)!=NULL;
}

const char *SCTPSendQueueAbatedDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPSendQueueAbatedDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SCTPSendQueueAbatedDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *SCTPSendQueueAbatedDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "bytesAvailable",
        "bytesQueued",
        "bytesLimit",
        "queuedForStream",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SCTPSendQueueAbatedDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bytesAvailable")==0) return base+0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bytesQueued")==0) return base+1;
    if (fieldName[0]=='b' && strcmp(fieldName, "bytesLimit")==0) return base+2;
    if (fieldName[0]=='q' && strcmp(fieldName, "queuedForStream")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPSendQueueAbatedDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint64",
        "uint64",
        "uint64",
        "uint64",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPSendQueueAbatedDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPSendQueueAbatedDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendQueueAbated *pp = (SCTPSendQueueAbated *)object; (void)pp;
    switch (field) {
        case 3: return pp->getQueuedForStreamArraySize();
        default: return 0;
    }
}

std::string SCTPSendQueueAbatedDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendQueueAbated *pp = (SCTPSendQueueAbated *)object; (void)pp;
    switch (field) {
        case 0: return uint642string(pp->getBytesAvailable());
        case 1: return uint642string(pp->getBytesQueued());
        case 2: return uint642string(pp->getBytesLimit());
        case 3: return uint642string(pp->getQueuedForStream(i));
        default: return "";
    }
}

bool SCTPSendQueueAbatedDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendQueueAbated *pp = (SCTPSendQueueAbated *)object; (void)pp;
    switch (field) {
        case 0: pp->setBytesAvailable(string2uint64(value)); return true;
        case 1: pp->setBytesQueued(string2uint64(value)); return true;
        case 2: pp->setBytesLimit(string2uint64(value)); return true;
        case 3: pp->setQueuedForStream(i,string2uint64(value)); return true;
        default: return false;
    }
}

const char *SCTPSendQueueAbatedDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPSendQueueAbatedDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSendQueueAbated *pp = (SCTPSendQueueAbated *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


