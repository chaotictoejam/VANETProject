//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee80211ControlInfo_m.h"

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
namespace physicallayer {

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

Ieee80211ConfigureRadioCommand::Ieee80211ConfigureRadioCommand() : ::inetveins::physicallayer::ConfigureRadioCommand()
{
    this->opMode_var = 0;
    this->modeSet_var = nullptr;
    this->mode_var = nullptr;
    this->band_var = nullptr;
    this->channel_var = nullptr;
    this->channelNumber_var = -1;
}

Ieee80211ConfigureRadioCommand::Ieee80211ConfigureRadioCommand(const Ieee80211ConfigureRadioCommand& other) : ::inetveins::physicallayer::ConfigureRadioCommand(other)
{
    copy(other);
}

Ieee80211ConfigureRadioCommand::~Ieee80211ConfigureRadioCommand()
{
}

Ieee80211ConfigureRadioCommand& Ieee80211ConfigureRadioCommand::operator=(const Ieee80211ConfigureRadioCommand& other)
{
    if (this==&other) return *this;
    ::inetveins::physicallayer::ConfigureRadioCommand::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ConfigureRadioCommand::copy(const Ieee80211ConfigureRadioCommand& other)
{
    this->opMode_var = other.opMode_var;
    this->modeSet_var = other.modeSet_var;
    this->mode_var = other.mode_var;
    this->band_var = other.band_var;
    this->channel_var = other.channel_var;
    this->channelNumber_var = other.channelNumber_var;
}

void Ieee80211ConfigureRadioCommand::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inetveins::physicallayer::ConfigureRadioCommand&)*this);
    doPacking(b,this->opMode_var);
    doPacking(b,this->modeSet_var);
    doPacking(b,this->mode_var);
    doPacking(b,this->band_var);
    doPacking(b,this->channel_var);
    doPacking(b,this->channelNumber_var);
}

void Ieee80211ConfigureRadioCommand::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inetveins::physicallayer::ConfigureRadioCommand&)*this);
    doUnpacking(b,this->opMode_var);
    doUnpacking(b,this->modeSet_var);
    doUnpacking(b,this->mode_var);
    doUnpacking(b,this->band_var);
    doUnpacking(b,this->channel_var);
    doUnpacking(b,this->channelNumber_var);
}

const char * Ieee80211ConfigureRadioCommand::getOpMode() const
{
    return opMode_var.c_str();
}

void Ieee80211ConfigureRadioCommand::setOpMode(const char * opMode)
{
    this->opMode_var = opMode;
}

Ieee80211ModeSetPtr& Ieee80211ConfigureRadioCommand::getModeSet()
{
    return modeSet_var;
}

void Ieee80211ConfigureRadioCommand::setModeSet(const Ieee80211ModeSetPtr& modeSet)
{
    this->modeSet_var = modeSet;
}

IIeee80211ModePtr& Ieee80211ConfigureRadioCommand::getMode()
{
    return mode_var;
}

void Ieee80211ConfigureRadioCommand::setMode(const IIeee80211ModePtr& mode)
{
    this->mode_var = mode;
}

IIeee80211BandPtr& Ieee80211ConfigureRadioCommand::getBand()
{
    return band_var;
}

void Ieee80211ConfigureRadioCommand::setBand(const IIeee80211BandPtr& band)
{
    this->band_var = band;
}

Ieee80211ChannelPtr& Ieee80211ConfigureRadioCommand::getChannel()
{
    return channel_var;
}

void Ieee80211ConfigureRadioCommand::setChannel(const Ieee80211ChannelPtr& channel)
{
    this->channel_var = channel;
}

int Ieee80211ConfigureRadioCommand::getChannelNumber() const
{
    return channelNumber_var;
}

void Ieee80211ConfigureRadioCommand::setChannelNumber(int channelNumber)
{
    this->channelNumber_var = channelNumber;
}

class Ieee80211ConfigureRadioCommandDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ConfigureRadioCommandDescriptor();
    virtual ~Ieee80211ConfigureRadioCommandDescriptor();

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

Register_ClassDescriptor(Ieee80211ConfigureRadioCommandDescriptor);

Ieee80211ConfigureRadioCommandDescriptor::Ieee80211ConfigureRadioCommandDescriptor() : cClassDescriptor("inetveins::physicallayer::Ieee80211ConfigureRadioCommand", "inetveins::physicallayer::ConfigureRadioCommand")
{
}

Ieee80211ConfigureRadioCommandDescriptor::~Ieee80211ConfigureRadioCommandDescriptor()
{
}

bool Ieee80211ConfigureRadioCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ConfigureRadioCommand *>(obj)!=NULL;
}

const char *Ieee80211ConfigureRadioCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ConfigureRadioCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int Ieee80211ConfigureRadioCommandDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ConfigureRadioCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "opMode",
        "modeSet",
        "mode",
        "band",
        "channel",
        "channelNumber",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int Ieee80211ConfigureRadioCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "opMode")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "modeSet")==0) return base+1;
    if (fieldName[0]=='m' && strcmp(fieldName, "mode")==0) return base+2;
    if (fieldName[0]=='b' && strcmp(fieldName, "band")==0) return base+3;
    if (fieldName[0]=='c' && strcmp(fieldName, "channel")==0) return base+4;
    if (fieldName[0]=='c' && strcmp(fieldName, "channelNumber")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ConfigureRadioCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "Ieee80211ModeSetPtr",
        "IIeee80211ModePtr",
        "IIeee80211BandPtr",
        "Ieee80211ChannelPtr",
        "int",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ConfigureRadioCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ConfigureRadioCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ConfigureRadioCommand *pp = (Ieee80211ConfigureRadioCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ConfigureRadioCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ConfigureRadioCommand *pp = (Ieee80211ConfigureRadioCommand *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getOpMode());
        case 1: {std::stringstream out; out << pp->getModeSet(); return out.str();}
        case 2: {std::stringstream out; out << pp->getMode(); return out.str();}
        case 3: {std::stringstream out; out << pp->getBand(); return out.str();}
        case 4: {std::stringstream out; out << pp->getChannel(); return out.str();}
        case 5: return long2string(pp->getChannelNumber());
        default: return "";
    }
}

bool Ieee80211ConfigureRadioCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ConfigureRadioCommand *pp = (Ieee80211ConfigureRadioCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setOpMode((value)); return true;
        case 5: pp->setChannelNumber(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211ConfigureRadioCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(Ieee80211ModeSetPtr));
        case 2: return opp_typename(typeid(IIeee80211ModePtr));
        case 3: return opp_typename(typeid(IIeee80211BandPtr));
        case 4: return opp_typename(typeid(Ieee80211ChannelPtr));
        default: return NULL;
    };
}

void *Ieee80211ConfigureRadioCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ConfigureRadioCommand *pp = (Ieee80211ConfigureRadioCommand *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getModeSet()); break;
        case 2: return (void *)(&pp->getMode()); break;
        case 3: return (void *)(&pp->getBand()); break;
        case 4: return (void *)(&pp->getChannel()); break;
        default: return NULL;
    }
}

Ieee80211TransmissionRequest::Ieee80211TransmissionRequest() : ::inetveins::physicallayer::TransmissionRequest()
{
    this->mode_var = nullptr;
    this->channelNumber_var = -1;
    this->channel_var = nullptr;
}

Ieee80211TransmissionRequest::Ieee80211TransmissionRequest(const Ieee80211TransmissionRequest& other) : ::inetveins::physicallayer::TransmissionRequest(other)
{
    copy(other);
}

Ieee80211TransmissionRequest::~Ieee80211TransmissionRequest()
{
}

Ieee80211TransmissionRequest& Ieee80211TransmissionRequest::operator=(const Ieee80211TransmissionRequest& other)
{
    if (this==&other) return *this;
    ::inetveins::physicallayer::TransmissionRequest::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211TransmissionRequest::copy(const Ieee80211TransmissionRequest& other)
{
    this->mode_var = other.mode_var;
    this->channelNumber_var = other.channelNumber_var;
    this->channel_var = other.channel_var;
}

void Ieee80211TransmissionRequest::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inetveins::physicallayer::TransmissionRequest&)*this);
    doPacking(b,this->mode_var);
    doPacking(b,this->channelNumber_var);
    doPacking(b,this->channel_var);
}

void Ieee80211TransmissionRequest::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inetveins::physicallayer::TransmissionRequest&)*this);
    doUnpacking(b,this->mode_var);
    doUnpacking(b,this->channelNumber_var);
    doUnpacking(b,this->channel_var);
}

IIeee80211ModePtr& Ieee80211TransmissionRequest::getMode()
{
    return mode_var;
}

void Ieee80211TransmissionRequest::setMode(const IIeee80211ModePtr& mode)
{
    this->mode_var = mode;
}

int Ieee80211TransmissionRequest::getChannelNumber() const
{
    return channelNumber_var;
}

void Ieee80211TransmissionRequest::setChannelNumber(int channelNumber)
{
    this->channelNumber_var = channelNumber;
}

Ieee80211ChannelPtr& Ieee80211TransmissionRequest::getChannel()
{
    return channel_var;
}

void Ieee80211TransmissionRequest::setChannel(const Ieee80211ChannelPtr& channel)
{
    this->channel_var = channel;
}

class Ieee80211TransmissionRequestDescriptor : public cClassDescriptor
{
  public:
    Ieee80211TransmissionRequestDescriptor();
    virtual ~Ieee80211TransmissionRequestDescriptor();

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

Register_ClassDescriptor(Ieee80211TransmissionRequestDescriptor);

Ieee80211TransmissionRequestDescriptor::Ieee80211TransmissionRequestDescriptor() : cClassDescriptor("inetveins::physicallayer::Ieee80211TransmissionRequest", "inetveins::physicallayer::TransmissionRequest")
{
}

Ieee80211TransmissionRequestDescriptor::~Ieee80211TransmissionRequestDescriptor()
{
}

bool Ieee80211TransmissionRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211TransmissionRequest *>(obj)!=NULL;
}

const char *Ieee80211TransmissionRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211TransmissionRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int Ieee80211TransmissionRequestDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211TransmissionRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "mode",
        "channelNumber",
        "channel",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int Ieee80211TransmissionRequestDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "mode")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "channelNumber")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "channel")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211TransmissionRequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IIeee80211ModePtr",
        "int",
        "Ieee80211ChannelPtr",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211TransmissionRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211TransmissionRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211TransmissionRequest *pp = (Ieee80211TransmissionRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211TransmissionRequestDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211TransmissionRequest *pp = (Ieee80211TransmissionRequest *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMode(); return out.str();}
        case 1: return long2string(pp->getChannelNumber());
        case 2: {std::stringstream out; out << pp->getChannel(); return out.str();}
        default: return "";
    }
}

bool Ieee80211TransmissionRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211TransmissionRequest *pp = (Ieee80211TransmissionRequest *)object; (void)pp;
    switch (field) {
        case 1: pp->setChannelNumber(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211TransmissionRequestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IIeee80211ModePtr));
        case 2: return opp_typename(typeid(Ieee80211ChannelPtr));
        default: return NULL;
    };
}

void *Ieee80211TransmissionRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211TransmissionRequest *pp = (Ieee80211TransmissionRequest *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMode()); break;
        case 2: return (void *)(&pp->getChannel()); break;
        default: return NULL;
    }
}

Ieee80211ReceptionIndication::Ieee80211ReceptionIndication() : ::inetveins::physicallayer::ReceptionIndication()
{
    this->mode_var = nullptr;
    this->channel_var = nullptr;
    this->snr_var = 0;
    this->lossRate_var = 0;
    this->recPow_var = 0;
    this->airtimeMetric_var = 0;
    this->testFrameDuration_var = 0;
    this->testFrameError_var = 0;
    this->testFrameSize_var = 0;
}

Ieee80211ReceptionIndication::Ieee80211ReceptionIndication(const Ieee80211ReceptionIndication& other) : ::inetveins::physicallayer::ReceptionIndication(other)
{
    copy(other);
}

Ieee80211ReceptionIndication::~Ieee80211ReceptionIndication()
{
}

Ieee80211ReceptionIndication& Ieee80211ReceptionIndication::operator=(const Ieee80211ReceptionIndication& other)
{
    if (this==&other) return *this;
    ::inetveins::physicallayer::ReceptionIndication::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ReceptionIndication::copy(const Ieee80211ReceptionIndication& other)
{
    this->mode_var = other.mode_var;
    this->channel_var = other.channel_var;
    this->snr_var = other.snr_var;
    this->lossRate_var = other.lossRate_var;
    this->recPow_var = other.recPow_var;
    this->airtimeMetric_var = other.airtimeMetric_var;
    this->testFrameDuration_var = other.testFrameDuration_var;
    this->testFrameError_var = other.testFrameError_var;
    this->testFrameSize_var = other.testFrameSize_var;
}

void Ieee80211ReceptionIndication::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inetveins::physicallayer::ReceptionIndication&)*this);
    doPacking(b,this->mode_var);
    doPacking(b,this->channel_var);
    doPacking(b,this->snr_var);
    doPacking(b,this->lossRate_var);
    doPacking(b,this->recPow_var);
    doPacking(b,this->airtimeMetric_var);
    doPacking(b,this->testFrameDuration_var);
    doPacking(b,this->testFrameError_var);
    doPacking(b,this->testFrameSize_var);
}

void Ieee80211ReceptionIndication::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inetveins::physicallayer::ReceptionIndication&)*this);
    doUnpacking(b,this->mode_var);
    doUnpacking(b,this->channel_var);
    doUnpacking(b,this->snr_var);
    doUnpacking(b,this->lossRate_var);
    doUnpacking(b,this->recPow_var);
    doUnpacking(b,this->airtimeMetric_var);
    doUnpacking(b,this->testFrameDuration_var);
    doUnpacking(b,this->testFrameError_var);
    doUnpacking(b,this->testFrameSize_var);
}

IIeee80211ModePtr& Ieee80211ReceptionIndication::getMode()
{
    return mode_var;
}

void Ieee80211ReceptionIndication::setMode(const IIeee80211ModePtr& mode)
{
    this->mode_var = mode;
}

Ieee80211ChannelPtr& Ieee80211ReceptionIndication::getChannel()
{
    return channel_var;
}

void Ieee80211ReceptionIndication::setChannel(const Ieee80211ChannelPtr& channel)
{
    this->channel_var = channel;
}

double Ieee80211ReceptionIndication::getSnr() const
{
    return snr_var;
}

void Ieee80211ReceptionIndication::setSnr(double snr)
{
    this->snr_var = snr;
}

double Ieee80211ReceptionIndication::getLossRate() const
{
    return lossRate_var;
}

void Ieee80211ReceptionIndication::setLossRate(double lossRate)
{
    this->lossRate_var = lossRate;
}

double Ieee80211ReceptionIndication::getRecPow() const
{
    return recPow_var;
}

void Ieee80211ReceptionIndication::setRecPow(double recPow)
{
    this->recPow_var = recPow;
}

bool Ieee80211ReceptionIndication::getAirtimeMetric() const
{
    return airtimeMetric_var;
}

void Ieee80211ReceptionIndication::setAirtimeMetric(bool airtimeMetric)
{
    this->airtimeMetric_var = airtimeMetric;
}

double Ieee80211ReceptionIndication::getTestFrameDuration() const
{
    return testFrameDuration_var;
}

void Ieee80211ReceptionIndication::setTestFrameDuration(double testFrameDuration)
{
    this->testFrameDuration_var = testFrameDuration;
}

double Ieee80211ReceptionIndication::getTestFrameError() const
{
    return testFrameError_var;
}

void Ieee80211ReceptionIndication::setTestFrameError(double testFrameError)
{
    this->testFrameError_var = testFrameError;
}

int Ieee80211ReceptionIndication::getTestFrameSize() const
{
    return testFrameSize_var;
}

void Ieee80211ReceptionIndication::setTestFrameSize(int testFrameSize)
{
    this->testFrameSize_var = testFrameSize;
}

class Ieee80211ReceptionIndicationDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ReceptionIndicationDescriptor();
    virtual ~Ieee80211ReceptionIndicationDescriptor();

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

Register_ClassDescriptor(Ieee80211ReceptionIndicationDescriptor);

Ieee80211ReceptionIndicationDescriptor::Ieee80211ReceptionIndicationDescriptor() : cClassDescriptor("inetveins::physicallayer::Ieee80211ReceptionIndication", "inetveins::physicallayer::ReceptionIndication")
{
}

Ieee80211ReceptionIndicationDescriptor::~Ieee80211ReceptionIndicationDescriptor()
{
}

bool Ieee80211ReceptionIndicationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ReceptionIndication *>(obj)!=NULL;
}

const char *Ieee80211ReceptionIndicationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ReceptionIndicationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int Ieee80211ReceptionIndicationDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<9) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ReceptionIndicationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "mode",
        "channel",
        "snr",
        "lossRate",
        "recPow",
        "airtimeMetric",
        "testFrameDuration",
        "testFrameError",
        "testFrameSize",
    };
    return (field>=0 && field<9) ? fieldNames[field] : NULL;
}

int Ieee80211ReceptionIndicationDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "mode")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "channel")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "snr")==0) return base+2;
    if (fieldName[0]=='l' && strcmp(fieldName, "lossRate")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "recPow")==0) return base+4;
    if (fieldName[0]=='a' && strcmp(fieldName, "airtimeMetric")==0) return base+5;
    if (fieldName[0]=='t' && strcmp(fieldName, "testFrameDuration")==0) return base+6;
    if (fieldName[0]=='t' && strcmp(fieldName, "testFrameError")==0) return base+7;
    if (fieldName[0]=='t' && strcmp(fieldName, "testFrameSize")==0) return base+8;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ReceptionIndicationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IIeee80211ModePtr",
        "Ieee80211ChannelPtr",
        "double",
        "double",
        "double",
        "bool",
        "double",
        "double",
        "int",
    };
    return (field>=0 && field<9) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ReceptionIndicationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ReceptionIndicationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReceptionIndication *pp = (Ieee80211ReceptionIndication *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ReceptionIndicationDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReceptionIndication *pp = (Ieee80211ReceptionIndication *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMode(); return out.str();}
        case 1: {std::stringstream out; out << pp->getChannel(); return out.str();}
        case 2: return double2string(pp->getSnr());
        case 3: return double2string(pp->getLossRate());
        case 4: return double2string(pp->getRecPow());
        case 5: return bool2string(pp->getAirtimeMetric());
        case 6: return double2string(pp->getTestFrameDuration());
        case 7: return double2string(pp->getTestFrameError());
        case 8: return long2string(pp->getTestFrameSize());
        default: return "";
    }
}

bool Ieee80211ReceptionIndicationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReceptionIndication *pp = (Ieee80211ReceptionIndication *)object; (void)pp;
    switch (field) {
        case 2: pp->setSnr(string2double(value)); return true;
        case 3: pp->setLossRate(string2double(value)); return true;
        case 4: pp->setRecPow(string2double(value)); return true;
        case 5: pp->setAirtimeMetric(string2bool(value)); return true;
        case 6: pp->setTestFrameDuration(string2double(value)); return true;
        case 7: pp->setTestFrameError(string2double(value)); return true;
        case 8: pp->setTestFrameSize(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211ReceptionIndicationDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IIeee80211ModePtr));
        case 1: return opp_typename(typeid(Ieee80211ChannelPtr));
        default: return NULL;
    };
}

void *Ieee80211ReceptionIndicationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReceptionIndication *pp = (Ieee80211ReceptionIndication *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMode()); break;
        case 1: return (void *)(&pp->getChannel()); break;
        default: return NULL;
    }
}

} // namespace physicallayer
} // namespace inetveins

