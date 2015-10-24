//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/rsvp_te/SignallingMsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SignallingMsg_m.h"

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

Register_Class(SignallingMsg);

SignallingMsg::SignallingMsg(const char *name, int kind) : ::cMessage(name,kind)
{
    this->command_var = 0;
}

SignallingMsg::SignallingMsg(const SignallingMsg& other) : ::cMessage(other)
{
    copy(other);
}

SignallingMsg::~SignallingMsg()
{
}

SignallingMsg& SignallingMsg::operator=(const SignallingMsg& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void SignallingMsg::copy(const SignallingMsg& other)
{
    this->command_var = other.command_var;
}

void SignallingMsg::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->command_var);
}

void SignallingMsg::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->command_var);
}

int SignallingMsg::getCommand() const
{
    return command_var;
}

void SignallingMsg::setCommand(int command)
{
    this->command_var = command;
}

class SignallingMsgDescriptor : public cClassDescriptor
{
  public:
    SignallingMsgDescriptor();
    virtual ~SignallingMsgDescriptor();

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

Register_ClassDescriptor(SignallingMsgDescriptor);

SignallingMsgDescriptor::SignallingMsgDescriptor() : cClassDescriptor("SignallingMsg", "cMessage")
{
}

SignallingMsgDescriptor::~SignallingMsgDescriptor()
{
}

bool SignallingMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SignallingMsg *>(obj)!=NULL;
}

const char *SignallingMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SignallingMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SignallingMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SignallingMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "command",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SignallingMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SignallingMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *SignallingMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SignallingMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SignallingMsg *pp = (SignallingMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SignallingMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SignallingMsg *pp = (SignallingMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCommand());
        default: return "";
    }
}

bool SignallingMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SignallingMsg *pp = (SignallingMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *SignallingMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *SignallingMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SignallingMsg *pp = (SignallingMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PsbTimerMsg);

PsbTimerMsg::PsbTimerMsg(const char *name, int kind) : ::SignallingMsg(name,kind)
{
    this->id_var = 0;
    this->command_var = MSG_PSB_TIMER;
}

PsbTimerMsg::PsbTimerMsg(const PsbTimerMsg& other) : ::SignallingMsg(other)
{
    copy(other);
}

PsbTimerMsg::~PsbTimerMsg()
{
}

PsbTimerMsg& PsbTimerMsg::operator=(const PsbTimerMsg& other)
{
    if (this==&other) return *this;
    ::SignallingMsg::operator=(other);
    copy(other);
    return *this;
}

void PsbTimerMsg::copy(const PsbTimerMsg& other)
{
    this->id_var = other.id_var;
    this->command_var = other.command_var;
}

void PsbTimerMsg::parsimPack(cCommBuffer *b)
{
    ::SignallingMsg::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->command_var);
}

void PsbTimerMsg::parsimUnpack(cCommBuffer *b)
{
    ::SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->command_var);
}

int PsbTimerMsg::getId() const
{
    return id_var;
}

void PsbTimerMsg::setId(int id)
{
    this->id_var = id;
}

int PsbTimerMsg::getCommand() const
{
    return command_var;
}

void PsbTimerMsg::setCommand(int command)
{
    this->command_var = command;
}

class PsbTimerMsgDescriptor : public cClassDescriptor
{
  public:
    PsbTimerMsgDescriptor();
    virtual ~PsbTimerMsgDescriptor();

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

Register_ClassDescriptor(PsbTimerMsgDescriptor);

PsbTimerMsgDescriptor::PsbTimerMsgDescriptor() : cClassDescriptor("PsbTimerMsg", "SignallingMsg")
{
}

PsbTimerMsgDescriptor::~PsbTimerMsgDescriptor()
{
}

bool PsbTimerMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PsbTimerMsg *>(obj)!=NULL;
}

const char *PsbTimerMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PsbTimerMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PsbTimerMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PsbTimerMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "id",
        "command",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PsbTimerMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PsbTimerMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PsbTimerMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PsbTimerMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimerMsg *pp = (PsbTimerMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PsbTimerMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimerMsg *pp = (PsbTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getId());
        case 1: return long2string(pp->getCommand());
        default: return "";
    }
}

bool PsbTimerMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimerMsg *pp = (PsbTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *PsbTimerMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *PsbTimerMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimerMsg *pp = (PsbTimerMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PsbTimeoutMsg);

PsbTimeoutMsg::PsbTimeoutMsg(const char *name, int kind) : ::SignallingMsg(name,kind)
{
    this->id_var = 0;
    this->command_var = MSG_PSB_TIMEOUT;
}

PsbTimeoutMsg::PsbTimeoutMsg(const PsbTimeoutMsg& other) : ::SignallingMsg(other)
{
    copy(other);
}

PsbTimeoutMsg::~PsbTimeoutMsg()
{
}

PsbTimeoutMsg& PsbTimeoutMsg::operator=(const PsbTimeoutMsg& other)
{
    if (this==&other) return *this;
    ::SignallingMsg::operator=(other);
    copy(other);
    return *this;
}

void PsbTimeoutMsg::copy(const PsbTimeoutMsg& other)
{
    this->id_var = other.id_var;
    this->command_var = other.command_var;
}

void PsbTimeoutMsg::parsimPack(cCommBuffer *b)
{
    ::SignallingMsg::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->command_var);
}

void PsbTimeoutMsg::parsimUnpack(cCommBuffer *b)
{
    ::SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->command_var);
}

int PsbTimeoutMsg::getId() const
{
    return id_var;
}

void PsbTimeoutMsg::setId(int id)
{
    this->id_var = id;
}

int PsbTimeoutMsg::getCommand() const
{
    return command_var;
}

void PsbTimeoutMsg::setCommand(int command)
{
    this->command_var = command;
}

class PsbTimeoutMsgDescriptor : public cClassDescriptor
{
  public:
    PsbTimeoutMsgDescriptor();
    virtual ~PsbTimeoutMsgDescriptor();

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

Register_ClassDescriptor(PsbTimeoutMsgDescriptor);

PsbTimeoutMsgDescriptor::PsbTimeoutMsgDescriptor() : cClassDescriptor("PsbTimeoutMsg", "SignallingMsg")
{
}

PsbTimeoutMsgDescriptor::~PsbTimeoutMsgDescriptor()
{
}

bool PsbTimeoutMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PsbTimeoutMsg *>(obj)!=NULL;
}

const char *PsbTimeoutMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PsbTimeoutMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PsbTimeoutMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PsbTimeoutMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "id",
        "command",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PsbTimeoutMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PsbTimeoutMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PsbTimeoutMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PsbTimeoutMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimeoutMsg *pp = (PsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PsbTimeoutMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimeoutMsg *pp = (PsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getId());
        case 1: return long2string(pp->getCommand());
        default: return "";
    }
}

bool PsbTimeoutMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimeoutMsg *pp = (PsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *PsbTimeoutMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *PsbTimeoutMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PsbTimeoutMsg *pp = (PsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RsbRefreshTimerMsg);

RsbRefreshTimerMsg::RsbRefreshTimerMsg(const char *name, int kind) : ::SignallingMsg(name,kind)
{
    this->id_var = 0;
    this->command_var = MSG_RSB_REFRESH_TIMER;
}

RsbRefreshTimerMsg::RsbRefreshTimerMsg(const RsbRefreshTimerMsg& other) : ::SignallingMsg(other)
{
    copy(other);
}

RsbRefreshTimerMsg::~RsbRefreshTimerMsg()
{
}

RsbRefreshTimerMsg& RsbRefreshTimerMsg::operator=(const RsbRefreshTimerMsg& other)
{
    if (this==&other) return *this;
    ::SignallingMsg::operator=(other);
    copy(other);
    return *this;
}

void RsbRefreshTimerMsg::copy(const RsbRefreshTimerMsg& other)
{
    this->id_var = other.id_var;
    this->command_var = other.command_var;
}

void RsbRefreshTimerMsg::parsimPack(cCommBuffer *b)
{
    ::SignallingMsg::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->command_var);
}

void RsbRefreshTimerMsg::parsimUnpack(cCommBuffer *b)
{
    ::SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->command_var);
}

int RsbRefreshTimerMsg::getId() const
{
    return id_var;
}

void RsbRefreshTimerMsg::setId(int id)
{
    this->id_var = id;
}

int RsbRefreshTimerMsg::getCommand() const
{
    return command_var;
}

void RsbRefreshTimerMsg::setCommand(int command)
{
    this->command_var = command;
}

class RsbRefreshTimerMsgDescriptor : public cClassDescriptor
{
  public:
    RsbRefreshTimerMsgDescriptor();
    virtual ~RsbRefreshTimerMsgDescriptor();

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

Register_ClassDescriptor(RsbRefreshTimerMsgDescriptor);

RsbRefreshTimerMsgDescriptor::RsbRefreshTimerMsgDescriptor() : cClassDescriptor("RsbRefreshTimerMsg", "SignallingMsg")
{
}

RsbRefreshTimerMsgDescriptor::~RsbRefreshTimerMsgDescriptor()
{
}

bool RsbRefreshTimerMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RsbRefreshTimerMsg *>(obj)!=NULL;
}

const char *RsbRefreshTimerMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RsbRefreshTimerMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RsbRefreshTimerMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RsbRefreshTimerMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "id",
        "command",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RsbRefreshTimerMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RsbRefreshTimerMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RsbRefreshTimerMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RsbRefreshTimerMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RsbRefreshTimerMsg *pp = (RsbRefreshTimerMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RsbRefreshTimerMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RsbRefreshTimerMsg *pp = (RsbRefreshTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getId());
        case 1: return long2string(pp->getCommand());
        default: return "";
    }
}

bool RsbRefreshTimerMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RsbRefreshTimerMsg *pp = (RsbRefreshTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *RsbRefreshTimerMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *RsbRefreshTimerMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RsbRefreshTimerMsg *pp = (RsbRefreshTimerMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RsbCommitTimerMsg);

RsbCommitTimerMsg::RsbCommitTimerMsg(const char *name, int kind) : ::SignallingMsg(name,kind)
{
    this->id_var = 0;
    this->command_var = MSG_RSB_COMMIT_TIMER;
}

RsbCommitTimerMsg::RsbCommitTimerMsg(const RsbCommitTimerMsg& other) : ::SignallingMsg(other)
{
    copy(other);
}

RsbCommitTimerMsg::~RsbCommitTimerMsg()
{
}

RsbCommitTimerMsg& RsbCommitTimerMsg::operator=(const RsbCommitTimerMsg& other)
{
    if (this==&other) return *this;
    ::SignallingMsg::operator=(other);
    copy(other);
    return *this;
}

void RsbCommitTimerMsg::copy(const RsbCommitTimerMsg& other)
{
    this->id_var = other.id_var;
    this->command_var = other.command_var;
}

void RsbCommitTimerMsg::parsimPack(cCommBuffer *b)
{
    ::SignallingMsg::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->command_var);
}

void RsbCommitTimerMsg::parsimUnpack(cCommBuffer *b)
{
    ::SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->command_var);
}

int RsbCommitTimerMsg::getId() const
{
    return id_var;
}

void RsbCommitTimerMsg::setId(int id)
{
    this->id_var = id;
}

int RsbCommitTimerMsg::getCommand() const
{
    return command_var;
}

void RsbCommitTimerMsg::setCommand(int command)
{
    this->command_var = command;
}

class RsbCommitTimerMsgDescriptor : public cClassDescriptor
{
  public:
    RsbCommitTimerMsgDescriptor();
    virtual ~RsbCommitTimerMsgDescriptor();

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

Register_ClassDescriptor(RsbCommitTimerMsgDescriptor);

RsbCommitTimerMsgDescriptor::RsbCommitTimerMsgDescriptor() : cClassDescriptor("RsbCommitTimerMsg", "SignallingMsg")
{
}

RsbCommitTimerMsgDescriptor::~RsbCommitTimerMsgDescriptor()
{
}

bool RsbCommitTimerMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RsbCommitTimerMsg *>(obj)!=NULL;
}

const char *RsbCommitTimerMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RsbCommitTimerMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RsbCommitTimerMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RsbCommitTimerMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "id",
        "command",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RsbCommitTimerMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RsbCommitTimerMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RsbCommitTimerMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RsbCommitTimerMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RsbCommitTimerMsg *pp = (RsbCommitTimerMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RsbCommitTimerMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RsbCommitTimerMsg *pp = (RsbCommitTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getId());
        case 1: return long2string(pp->getCommand());
        default: return "";
    }
}

bool RsbCommitTimerMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RsbCommitTimerMsg *pp = (RsbCommitTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *RsbCommitTimerMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *RsbCommitTimerMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RsbCommitTimerMsg *pp = (RsbCommitTimerMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RsbTimeoutMsg);

RsbTimeoutMsg::RsbTimeoutMsg(const char *name, int kind) : ::SignallingMsg(name,kind)
{
    this->id_var = 0;
    this->command_var = MSG_RSB_TIMEOUT;
}

RsbTimeoutMsg::RsbTimeoutMsg(const RsbTimeoutMsg& other) : ::SignallingMsg(other)
{
    copy(other);
}

RsbTimeoutMsg::~RsbTimeoutMsg()
{
}

RsbTimeoutMsg& RsbTimeoutMsg::operator=(const RsbTimeoutMsg& other)
{
    if (this==&other) return *this;
    ::SignallingMsg::operator=(other);
    copy(other);
    return *this;
}

void RsbTimeoutMsg::copy(const RsbTimeoutMsg& other)
{
    this->id_var = other.id_var;
    this->command_var = other.command_var;
}

void RsbTimeoutMsg::parsimPack(cCommBuffer *b)
{
    ::SignallingMsg::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->command_var);
}

void RsbTimeoutMsg::parsimUnpack(cCommBuffer *b)
{
    ::SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->command_var);
}

int RsbTimeoutMsg::getId() const
{
    return id_var;
}

void RsbTimeoutMsg::setId(int id)
{
    this->id_var = id;
}

int RsbTimeoutMsg::getCommand() const
{
    return command_var;
}

void RsbTimeoutMsg::setCommand(int command)
{
    this->command_var = command;
}

class RsbTimeoutMsgDescriptor : public cClassDescriptor
{
  public:
    RsbTimeoutMsgDescriptor();
    virtual ~RsbTimeoutMsgDescriptor();

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

Register_ClassDescriptor(RsbTimeoutMsgDescriptor);

RsbTimeoutMsgDescriptor::RsbTimeoutMsgDescriptor() : cClassDescriptor("RsbTimeoutMsg", "SignallingMsg")
{
}

RsbTimeoutMsgDescriptor::~RsbTimeoutMsgDescriptor()
{
}

bool RsbTimeoutMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RsbTimeoutMsg *>(obj)!=NULL;
}

const char *RsbTimeoutMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RsbTimeoutMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RsbTimeoutMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RsbTimeoutMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "id",
        "command",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RsbTimeoutMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RsbTimeoutMsgDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RsbTimeoutMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RsbTimeoutMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RsbTimeoutMsg *pp = (RsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RsbTimeoutMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RsbTimeoutMsg *pp = (RsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getId());
        case 1: return long2string(pp->getCommand());
        default: return "";
    }
}

bool RsbTimeoutMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RsbTimeoutMsg *pp = (RsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *RsbTimeoutMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *RsbTimeoutMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RsbTimeoutMsg *pp = (RsbTimeoutMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HelloTimerMsg);

HelloTimerMsg::HelloTimerMsg(const char *name, int kind) : ::SignallingMsg(name,kind)
{
    this->command_var = MSG_HELLO_TIMER;
}

HelloTimerMsg::HelloTimerMsg(const HelloTimerMsg& other) : ::SignallingMsg(other)
{
    copy(other);
}

HelloTimerMsg::~HelloTimerMsg()
{
}

HelloTimerMsg& HelloTimerMsg::operator=(const HelloTimerMsg& other)
{
    if (this==&other) return *this;
    ::SignallingMsg::operator=(other);
    copy(other);
    return *this;
}

void HelloTimerMsg::copy(const HelloTimerMsg& other)
{
    this->peer_var = other.peer_var;
    this->command_var = other.command_var;
}

void HelloTimerMsg::parsimPack(cCommBuffer *b)
{
    ::SignallingMsg::parsimPack(b);
    doPacking(b,this->peer_var);
    doPacking(b,this->command_var);
}

void HelloTimerMsg::parsimUnpack(cCommBuffer *b)
{
    ::SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->peer_var);
    doUnpacking(b,this->command_var);
}

IPv4Address& HelloTimerMsg::getPeer()
{
    return peer_var;
}

void HelloTimerMsg::setPeer(const IPv4Address& peer)
{
    this->peer_var = peer;
}

int HelloTimerMsg::getCommand() const
{
    return command_var;
}

void HelloTimerMsg::setCommand(int command)
{
    this->command_var = command;
}

class HelloTimerMsgDescriptor : public cClassDescriptor
{
  public:
    HelloTimerMsgDescriptor();
    virtual ~HelloTimerMsgDescriptor();

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

Register_ClassDescriptor(HelloTimerMsgDescriptor);

HelloTimerMsgDescriptor::HelloTimerMsgDescriptor() : cClassDescriptor("HelloTimerMsg", "SignallingMsg")
{
}

HelloTimerMsgDescriptor::~HelloTimerMsgDescriptor()
{
}

bool HelloTimerMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HelloTimerMsg *>(obj)!=NULL;
}

const char *HelloTimerMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HelloTimerMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HelloTimerMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HelloTimerMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "peer",
        "command",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int HelloTimerMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "peer")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HelloTimerMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *HelloTimerMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HelloTimerMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimerMsg *pp = (HelloTimerMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HelloTimerMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimerMsg *pp = (HelloTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPeer(); return out.str();}
        case 1: return long2string(pp->getCommand());
        default: return "";
    }
}

bool HelloTimerMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimerMsg *pp = (HelloTimerMsg *)object; (void)pp;
    switch (field) {
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *HelloTimerMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *HelloTimerMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimerMsg *pp = (HelloTimerMsg *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPeer()); break;
        default: return NULL;
    }
}

Register_Class(HelloTimeoutMsg);

HelloTimeoutMsg::HelloTimeoutMsg(const char *name, int kind) : ::SignallingMsg(name,kind)
{
    this->command_var = MSG_HELLO_TIMEOUT;
}

HelloTimeoutMsg::HelloTimeoutMsg(const HelloTimeoutMsg& other) : ::SignallingMsg(other)
{
    copy(other);
}

HelloTimeoutMsg::~HelloTimeoutMsg()
{
}

HelloTimeoutMsg& HelloTimeoutMsg::operator=(const HelloTimeoutMsg& other)
{
    if (this==&other) return *this;
    ::SignallingMsg::operator=(other);
    copy(other);
    return *this;
}

void HelloTimeoutMsg::copy(const HelloTimeoutMsg& other)
{
    this->peer_var = other.peer_var;
    this->command_var = other.command_var;
}

void HelloTimeoutMsg::parsimPack(cCommBuffer *b)
{
    ::SignallingMsg::parsimPack(b);
    doPacking(b,this->peer_var);
    doPacking(b,this->command_var);
}

void HelloTimeoutMsg::parsimUnpack(cCommBuffer *b)
{
    ::SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->peer_var);
    doUnpacking(b,this->command_var);
}

IPv4Address& HelloTimeoutMsg::getPeer()
{
    return peer_var;
}

void HelloTimeoutMsg::setPeer(const IPv4Address& peer)
{
    this->peer_var = peer;
}

int HelloTimeoutMsg::getCommand() const
{
    return command_var;
}

void HelloTimeoutMsg::setCommand(int command)
{
    this->command_var = command;
}

class HelloTimeoutMsgDescriptor : public cClassDescriptor
{
  public:
    HelloTimeoutMsgDescriptor();
    virtual ~HelloTimeoutMsgDescriptor();

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

Register_ClassDescriptor(HelloTimeoutMsgDescriptor);

HelloTimeoutMsgDescriptor::HelloTimeoutMsgDescriptor() : cClassDescriptor("HelloTimeoutMsg", "SignallingMsg")
{
}

HelloTimeoutMsgDescriptor::~HelloTimeoutMsgDescriptor()
{
}

bool HelloTimeoutMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HelloTimeoutMsg *>(obj)!=NULL;
}

const char *HelloTimeoutMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HelloTimeoutMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HelloTimeoutMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HelloTimeoutMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "peer",
        "command",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int HelloTimeoutMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "peer")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HelloTimeoutMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *HelloTimeoutMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HelloTimeoutMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimeoutMsg *pp = (HelloTimeoutMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HelloTimeoutMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimeoutMsg *pp = (HelloTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPeer(); return out.str();}
        case 1: return long2string(pp->getCommand());
        default: return "";
    }
}

bool HelloTimeoutMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimeoutMsg *pp = (HelloTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 1: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *HelloTimeoutMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *HelloTimeoutMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HelloTimeoutMsg *pp = (HelloTimeoutMsg *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPeer()); break;
        default: return NULL;
    }
}

Register_Class(PathNotifyMsg);

PathNotifyMsg::PathNotifyMsg(const char *name, int kind) : ::SignallingMsg(name,kind)
{
    this->status_var = 0;
    this->command_var = MSG_PATH_NOTIFY;
}

PathNotifyMsg::PathNotifyMsg(const PathNotifyMsg& other) : ::SignallingMsg(other)
{
    copy(other);
}

PathNotifyMsg::~PathNotifyMsg()
{
}

PathNotifyMsg& PathNotifyMsg::operator=(const PathNotifyMsg& other)
{
    if (this==&other) return *this;
    ::SignallingMsg::operator=(other);
    copy(other);
    return *this;
}

void PathNotifyMsg::copy(const PathNotifyMsg& other)
{
    this->session_var = other.session_var;
    this->sender_var = other.sender_var;
    this->status_var = other.status_var;
    this->command_var = other.command_var;
}

void PathNotifyMsg::parsimPack(cCommBuffer *b)
{
    ::SignallingMsg::parsimPack(b);
    doPacking(b,this->session_var);
    doPacking(b,this->sender_var);
    doPacking(b,this->status_var);
    doPacking(b,this->command_var);
}

void PathNotifyMsg::parsimUnpack(cCommBuffer *b)
{
    ::SignallingMsg::parsimUnpack(b);
    doUnpacking(b,this->session_var);
    doUnpacking(b,this->sender_var);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->command_var);
}

SessionObj_t& PathNotifyMsg::getSession()
{
    return session_var;
}

void PathNotifyMsg::setSession(const SessionObj_t& session)
{
    this->session_var = session;
}

SenderTemplateObj_t& PathNotifyMsg::getSender()
{
    return sender_var;
}

void PathNotifyMsg::setSender(const SenderTemplateObj_t& sender)
{
    this->sender_var = sender;
}

int PathNotifyMsg::getStatus() const
{
    return status_var;
}

void PathNotifyMsg::setStatus(int status)
{
    this->status_var = status;
}

int PathNotifyMsg::getCommand() const
{
    return command_var;
}

void PathNotifyMsg::setCommand(int command)
{
    this->command_var = command;
}

class PathNotifyMsgDescriptor : public cClassDescriptor
{
  public:
    PathNotifyMsgDescriptor();
    virtual ~PathNotifyMsgDescriptor();

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

Register_ClassDescriptor(PathNotifyMsgDescriptor);

PathNotifyMsgDescriptor::PathNotifyMsgDescriptor() : cClassDescriptor("PathNotifyMsg", "SignallingMsg")
{
}

PathNotifyMsgDescriptor::~PathNotifyMsgDescriptor()
{
}

bool PathNotifyMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PathNotifyMsg *>(obj)!=NULL;
}

const char *PathNotifyMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PathNotifyMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PathNotifyMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PathNotifyMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "session",
        "sender",
        "status",
        "command",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int PathNotifyMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "session")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sender")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "status")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PathNotifyMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "SessionObj_t",
        "SenderTemplateObj_t",
        "int",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *PathNotifyMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PathNotifyMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PathNotifyMsg *pp = (PathNotifyMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PathNotifyMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PathNotifyMsg *pp = (PathNotifyMsg *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSession(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSender(); return out.str();}
        case 2: return long2string(pp->getStatus());
        case 3: return long2string(pp->getCommand());
        default: return "";
    }
}

bool PathNotifyMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PathNotifyMsg *pp = (PathNotifyMsg *)object; (void)pp;
    switch (field) {
        case 2: pp->setStatus(string2long(value)); return true;
        case 3: pp->setCommand(string2long(value)); return true;
        default: return false;
    }
}

const char *PathNotifyMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(SessionObj_t));
        case 1: return opp_typename(typeid(SenderTemplateObj_t));
        default: return NULL;
    };
}

void *PathNotifyMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PathNotifyMsg *pp = (PathNotifyMsg *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSession()); break;
        case 1: return (void *)(&pp->getSender()); break;
        default: return NULL;
    }
}


