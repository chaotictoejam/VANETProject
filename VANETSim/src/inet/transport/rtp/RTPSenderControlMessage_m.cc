//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transport/rtp/RTPSenderControlMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTPSenderControlMessage_m.h"

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
    cEnum *e = cEnum::find("RTPSenderControlMessageCommands");
    if (!e) enums.getInstance()->add(e = new cEnum("RTPSenderControlMessageCommands"));
    e->insert(RTP_CONTROL_PLAY, "RTP_CONTROL_PLAY");
    e->insert(RTP_CONTROL_PLAY_UNTIL_TIME, "RTP_CONTROL_PLAY_UNTIL_TIME");
    e->insert(RTP_CONTROL_PLAY_UNTIL_BYTE, "RTP_CONTROL_PLAY_UNTIL_BYTE");
    e->insert(RTP_CONTROL_PAUSE, "RTP_CONTROL_PAUSE");
    e->insert(RTP_CONTROL_STOP, "RTP_CONTROL_STOP");
    e->insert(RTP_CONTROL_SEEK_TIME, "RTP_CONTROL_SEEK_TIME");
    e->insert(RTP_CONTROL_SEEK_BYTE, "RTP_CONTROL_SEEK_BYTE");
);

Register_Class(RTPSenderControlMessage);

RTPSenderControlMessage::RTPSenderControlMessage(const char *name, int kind) : ::cPacket(name,kind)
{
    this->command_var = 0;
    this->commandParameter1_var = 0;
    this->commandParameter2_var = 0;
}

RTPSenderControlMessage::RTPSenderControlMessage(const RTPSenderControlMessage& other) : ::cPacket(other)
{
    copy(other);
}

RTPSenderControlMessage::~RTPSenderControlMessage()
{
}

RTPSenderControlMessage& RTPSenderControlMessage::operator=(const RTPSenderControlMessage& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void RTPSenderControlMessage::copy(const RTPSenderControlMessage& other)
{
    this->command_var = other.command_var;
    this->commandParameter1_var = other.commandParameter1_var;
    this->commandParameter2_var = other.commandParameter2_var;
}

void RTPSenderControlMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->command_var);
    doPacking(b,this->commandParameter1_var);
    doPacking(b,this->commandParameter2_var);
}

void RTPSenderControlMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->command_var);
    doUnpacking(b,this->commandParameter1_var);
    doUnpacking(b,this->commandParameter2_var);
}

short RTPSenderControlMessage::getCommand() const
{
    return command_var;
}

void RTPSenderControlMessage::setCommand(short command)
{
    this->command_var = command;
}

float RTPSenderControlMessage::getCommandParameter1() const
{
    return commandParameter1_var;
}

void RTPSenderControlMessage::setCommandParameter1(float commandParameter1)
{
    this->commandParameter1_var = commandParameter1;
}

float RTPSenderControlMessage::getCommandParameter2() const
{
    return commandParameter2_var;
}

void RTPSenderControlMessage::setCommandParameter2(float commandParameter2)
{
    this->commandParameter2_var = commandParameter2;
}

class RTPSenderControlMessageDescriptor : public cClassDescriptor
{
  public:
    RTPSenderControlMessageDescriptor();
    virtual ~RTPSenderControlMessageDescriptor();

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

Register_ClassDescriptor(RTPSenderControlMessageDescriptor);

RTPSenderControlMessageDescriptor::RTPSenderControlMessageDescriptor() : cClassDescriptor("RTPSenderControlMessage", "cPacket")
{
}

RTPSenderControlMessageDescriptor::~RTPSenderControlMessageDescriptor()
{
}

bool RTPSenderControlMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPSenderControlMessage *>(obj)!=NULL;
}

const char *RTPSenderControlMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPSenderControlMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int RTPSenderControlMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RTPSenderControlMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "command",
        "commandParameter1",
        "commandParameter2",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int RTPSenderControlMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "commandParameter1")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "commandParameter2")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPSenderControlMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "float",
        "float",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *RTPSenderControlMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "RTPSenderControlMessageCommands";
            return NULL;
        default: return NULL;
    }
}

int RTPSenderControlMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderControlMessage *pp = (RTPSenderControlMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPSenderControlMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderControlMessage *pp = (RTPSenderControlMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCommand());
        case 1: return double2string(pp->getCommandParameter1());
        case 2: return double2string(pp->getCommandParameter2());
        default: return "";
    }
}

bool RTPSenderControlMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderControlMessage *pp = (RTPSenderControlMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        case 1: pp->setCommandParameter1(string2double(value)); return true;
        case 2: pp->setCommandParameter2(string2double(value)); return true;
        default: return false;
    }
}

const char *RTPSenderControlMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *RTPSenderControlMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPSenderControlMessage *pp = (RTPSenderControlMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


