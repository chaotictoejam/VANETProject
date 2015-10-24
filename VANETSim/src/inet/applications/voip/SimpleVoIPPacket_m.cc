//
// Generated file, do not edit! Created by nedtool 4.6 from applications/voip/SimpleVoIPPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SimpleVoIPPacket_m.h"

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

Register_Class(SimpleVoIPPacket);

SimpleVoIPPacket::SimpleVoIPPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->talkspurtID_var = 0;
    this->talkspurtNumPackets_var = 0;
    this->packetID_var = 0;
    this->voipTimestamp_var = 0;
    this->voiceDuration_var = 0;
}

SimpleVoIPPacket::SimpleVoIPPacket(const SimpleVoIPPacket& other) : ::cPacket(other)
{
    copy(other);
}

SimpleVoIPPacket::~SimpleVoIPPacket()
{
}

SimpleVoIPPacket& SimpleVoIPPacket::operator=(const SimpleVoIPPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SimpleVoIPPacket::copy(const SimpleVoIPPacket& other)
{
    this->talkspurtID_var = other.talkspurtID_var;
    this->talkspurtNumPackets_var = other.talkspurtNumPackets_var;
    this->packetID_var = other.packetID_var;
    this->voipTimestamp_var = other.voipTimestamp_var;
    this->voiceDuration_var = other.voiceDuration_var;
}

void SimpleVoIPPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->talkspurtID_var);
    doPacking(b,this->talkspurtNumPackets_var);
    doPacking(b,this->packetID_var);
    doPacking(b,this->voipTimestamp_var);
    doPacking(b,this->voiceDuration_var);
}

void SimpleVoIPPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->talkspurtID_var);
    doUnpacking(b,this->talkspurtNumPackets_var);
    doUnpacking(b,this->packetID_var);
    doUnpacking(b,this->voipTimestamp_var);
    doUnpacking(b,this->voiceDuration_var);
}

unsigned int SimpleVoIPPacket::getTalkspurtID() const
{
    return talkspurtID_var;
}

void SimpleVoIPPacket::setTalkspurtID(unsigned int talkspurtID)
{
    this->talkspurtID_var = talkspurtID;
}

unsigned int SimpleVoIPPacket::getTalkspurtNumPackets() const
{
    return talkspurtNumPackets_var;
}

void SimpleVoIPPacket::setTalkspurtNumPackets(unsigned int talkspurtNumPackets)
{
    this->talkspurtNumPackets_var = talkspurtNumPackets;
}

unsigned int SimpleVoIPPacket::getPacketID() const
{
    return packetID_var;
}

void SimpleVoIPPacket::setPacketID(unsigned int packetID)
{
    this->packetID_var = packetID;
}

simtime_t SimpleVoIPPacket::getVoipTimestamp() const
{
    return voipTimestamp_var;
}

void SimpleVoIPPacket::setVoipTimestamp(simtime_t voipTimestamp)
{
    this->voipTimestamp_var = voipTimestamp;
}

simtime_t SimpleVoIPPacket::getVoiceDuration() const
{
    return voiceDuration_var;
}

void SimpleVoIPPacket::setVoiceDuration(simtime_t voiceDuration)
{
    this->voiceDuration_var = voiceDuration;
}

class SimpleVoIPPacketDescriptor : public cClassDescriptor
{
  public:
    SimpleVoIPPacketDescriptor();
    virtual ~SimpleVoIPPacketDescriptor();

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

Register_ClassDescriptor(SimpleVoIPPacketDescriptor);

SimpleVoIPPacketDescriptor::SimpleVoIPPacketDescriptor() : cClassDescriptor("SimpleVoIPPacket", "cPacket")
{
}

SimpleVoIPPacketDescriptor::~SimpleVoIPPacketDescriptor()
{
}

bool SimpleVoIPPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SimpleVoIPPacket *>(obj)!=NULL;
}

const char *SimpleVoIPPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SimpleVoIPPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int SimpleVoIPPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SimpleVoIPPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "talkspurtID",
        "talkspurtNumPackets",
        "packetID",
        "voipTimestamp",
        "voiceDuration",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int SimpleVoIPPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "talkspurtID")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "talkspurtNumPackets")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetID")==0) return base+2;
    if (fieldName[0]=='v' && strcmp(fieldName, "voipTimestamp")==0) return base+3;
    if (fieldName[0]=='v' && strcmp(fieldName, "voiceDuration")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SimpleVoIPPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "simtime_t",
        "simtime_t",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *SimpleVoIPPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SimpleVoIPPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SimpleVoIPPacket *pp = (SimpleVoIPPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SimpleVoIPPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SimpleVoIPPacket *pp = (SimpleVoIPPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getTalkspurtID());
        case 1: return ulong2string(pp->getTalkspurtNumPackets());
        case 2: return ulong2string(pp->getPacketID());
        case 3: return double2string(pp->getVoipTimestamp());
        case 4: return double2string(pp->getVoiceDuration());
        default: return "";
    }
}

bool SimpleVoIPPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SimpleVoIPPacket *pp = (SimpleVoIPPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setTalkspurtID(string2ulong(value)); return true;
        case 1: pp->setTalkspurtNumPackets(string2ulong(value)); return true;
        case 2: pp->setPacketID(string2ulong(value)); return true;
        case 3: pp->setVoipTimestamp(string2double(value)); return true;
        case 4: pp->setVoiceDuration(string2double(value)); return true;
        default: return false;
    }
}

const char *SimpleVoIPPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *SimpleVoIPPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SimpleVoIPPacket *pp = (SimpleVoIPPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


