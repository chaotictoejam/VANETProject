//
// Generated file, do not edit! Created by nedtool 4.6 from inet/physicallayer/contract/packetlevel/RadioControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RadioControlInfo_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::physicallayer::RadioCommandCode");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::physicallayer::RadioCommandCode"));
    e->insert(RADIO_C_CONFIGURE, "RADIO_C_CONFIGURE");
);

Register_Class(ConfigureRadioCommand);

ConfigureRadioCommand::ConfigureRadioCommand() : ::cObject()
{
    this->radioMode_var = -1;
    this->power_var = W(NaN);
    this->bitrate_var = bps(NaN);
    this->modulation_var = nullptr;
    this->carrierFrequency_var = Hz(NaN);
    this->bandwidth_var = Hz(NaN);
}

ConfigureRadioCommand::ConfigureRadioCommand(const ConfigureRadioCommand& other) : ::cObject(other)
{
    copy(other);
}

ConfigureRadioCommand::~ConfigureRadioCommand()
{
}

ConfigureRadioCommand& ConfigureRadioCommand::operator=(const ConfigureRadioCommand& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void ConfigureRadioCommand::copy(const ConfigureRadioCommand& other)
{
    this->radioMode_var = other.radioMode_var;
    this->power_var = other.power_var;
    this->bitrate_var = other.bitrate_var;
    this->modulation_var = other.modulation_var;
    this->carrierFrequency_var = other.carrierFrequency_var;
    this->bandwidth_var = other.bandwidth_var;
}

void ConfigureRadioCommand::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->radioMode_var);
    doPacking(b,this->power_var);
    doPacking(b,this->bitrate_var);
    doPacking(b,this->modulation_var);
    doPacking(b,this->carrierFrequency_var);
    doPacking(b,this->bandwidth_var);
}

void ConfigureRadioCommand::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->radioMode_var);
    doUnpacking(b,this->power_var);
    doUnpacking(b,this->bitrate_var);
    doUnpacking(b,this->modulation_var);
    doUnpacking(b,this->carrierFrequency_var);
    doUnpacking(b,this->bandwidth_var);
}

int ConfigureRadioCommand::getRadioMode() const
{
    return radioMode_var;
}

void ConfigureRadioCommand::setRadioMode(int radioMode)
{
    this->radioMode_var = radioMode;
}

W& ConfigureRadioCommand::getPower()
{
    return power_var;
}

void ConfigureRadioCommand::setPower(const W& power)
{
    this->power_var = power;
}

bps& ConfigureRadioCommand::getBitrate()
{
    return bitrate_var;
}

void ConfigureRadioCommand::setBitrate(const bps& bitrate)
{
    this->bitrate_var = bitrate;
}

IModulationPtr& ConfigureRadioCommand::getModulation()
{
    return modulation_var;
}

void ConfigureRadioCommand::setModulation(const IModulationPtr& modulation)
{
    this->modulation_var = modulation;
}

Hz& ConfigureRadioCommand::getCarrierFrequency()
{
    return carrierFrequency_var;
}

void ConfigureRadioCommand::setCarrierFrequency(const Hz& carrierFrequency)
{
    this->carrierFrequency_var = carrierFrequency;
}

Hz& ConfigureRadioCommand::getBandwidth()
{
    return bandwidth_var;
}

void ConfigureRadioCommand::setBandwidth(const Hz& bandwidth)
{
    this->bandwidth_var = bandwidth;
}

class ConfigureRadioCommandDescriptor : public cClassDescriptor
{
  public:
    ConfigureRadioCommandDescriptor();
    virtual ~ConfigureRadioCommandDescriptor();

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

Register_ClassDescriptor(ConfigureRadioCommandDescriptor);

ConfigureRadioCommandDescriptor::ConfigureRadioCommandDescriptor() : cClassDescriptor("inet::physicallayer::ConfigureRadioCommand", "cObject")
{
}

ConfigureRadioCommandDescriptor::~ConfigureRadioCommandDescriptor()
{
}

bool ConfigureRadioCommandDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ConfigureRadioCommand *>(obj)!=NULL;
}

const char *ConfigureRadioCommandDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ConfigureRadioCommandDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int ConfigureRadioCommandDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *ConfigureRadioCommandDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "radioMode",
        "power",
        "bitrate",
        "modulation",
        "carrierFrequency",
        "bandwidth",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int ConfigureRadioCommandDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "radioMode")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "power")==0) return base+1;
    if (fieldName[0]=='b' && strcmp(fieldName, "bitrate")==0) return base+2;
    if (fieldName[0]=='m' && strcmp(fieldName, "modulation")==0) return base+3;
    if (fieldName[0]=='c' && strcmp(fieldName, "carrierFrequency")==0) return base+4;
    if (fieldName[0]=='b' && strcmp(fieldName, "bandwidth")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ConfigureRadioCommandDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "W",
        "bps",
        "IModulationPtr",
        "Hz",
        "Hz",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *ConfigureRadioCommandDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ConfigureRadioCommandDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ConfigureRadioCommand *pp = (ConfigureRadioCommand *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ConfigureRadioCommandDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ConfigureRadioCommand *pp = (ConfigureRadioCommand *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getRadioMode());
        case 1: {std::stringstream out; out << pp->getPower(); return out.str();}
        case 2: {std::stringstream out; out << pp->getBitrate(); return out.str();}
        case 3: {std::stringstream out; out << pp->getModulation(); return out.str();}
        case 4: {std::stringstream out; out << pp->getCarrierFrequency(); return out.str();}
        case 5: {std::stringstream out; out << pp->getBandwidth(); return out.str();}
        default: return "";
    }
}

bool ConfigureRadioCommandDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ConfigureRadioCommand *pp = (ConfigureRadioCommand *)object; (void)pp;
    switch (field) {
        case 0: pp->setRadioMode(string2long(value)); return true;
        default: return false;
    }
}

const char *ConfigureRadioCommandDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(W));
        case 2: return opp_typename(typeid(bps));
        case 3: return opp_typename(typeid(IModulationPtr));
        case 4: return opp_typename(typeid(Hz));
        case 5: return opp_typename(typeid(Hz));
        default: return NULL;
    };
}

void *ConfigureRadioCommandDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ConfigureRadioCommand *pp = (ConfigureRadioCommand *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getPower()); break;
        case 2: return (void *)(&pp->getBitrate()); break;
        case 3: return (void *)(&pp->getModulation()); break;
        case 4: return (void *)(&pp->getCarrierFrequency()); break;
        case 5: return (void *)(&pp->getBandwidth()); break;
        default: return NULL;
    }
}

Register_Class(TransmissionRequest);

TransmissionRequest::TransmissionRequest() : ::cObject()
{
    this->power_var = W(NaN);
    this->bitrate_var = bps(NaN);
    this->carrierFrequency_var = Hz(NaN);
    this->bandwidth_var = Hz(NaN);
}

TransmissionRequest::TransmissionRequest(const TransmissionRequest& other) : ::cObject(other)
{
    copy(other);
}

TransmissionRequest::~TransmissionRequest()
{
}

TransmissionRequest& TransmissionRequest::operator=(const TransmissionRequest& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void TransmissionRequest::copy(const TransmissionRequest& other)
{
    this->power_var = other.power_var;
    this->bitrate_var = other.bitrate_var;
    this->carrierFrequency_var = other.carrierFrequency_var;
    this->bandwidth_var = other.bandwidth_var;
}

void TransmissionRequest::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->power_var);
    doPacking(b,this->bitrate_var);
    doPacking(b,this->carrierFrequency_var);
    doPacking(b,this->bandwidth_var);
}

void TransmissionRequest::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->power_var);
    doUnpacking(b,this->bitrate_var);
    doUnpacking(b,this->carrierFrequency_var);
    doUnpacking(b,this->bandwidth_var);
}

W& TransmissionRequest::getPower()
{
    return power_var;
}

void TransmissionRequest::setPower(const W& power)
{
    this->power_var = power;
}

bps& TransmissionRequest::getBitrate()
{
    return bitrate_var;
}

void TransmissionRequest::setBitrate(const bps& bitrate)
{
    this->bitrate_var = bitrate;
}

Hz& TransmissionRequest::getCarrierFrequency()
{
    return carrierFrequency_var;
}

void TransmissionRequest::setCarrierFrequency(const Hz& carrierFrequency)
{
    this->carrierFrequency_var = carrierFrequency;
}

Hz& TransmissionRequest::getBandwidth()
{
    return bandwidth_var;
}

void TransmissionRequest::setBandwidth(const Hz& bandwidth)
{
    this->bandwidth_var = bandwidth;
}

class TransmissionRequestDescriptor : public cClassDescriptor
{
  public:
    TransmissionRequestDescriptor();
    virtual ~TransmissionRequestDescriptor();

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

Register_ClassDescriptor(TransmissionRequestDescriptor);

TransmissionRequestDescriptor::TransmissionRequestDescriptor() : cClassDescriptor("inet::physicallayer::TransmissionRequest", "cObject")
{
}

TransmissionRequestDescriptor::~TransmissionRequestDescriptor()
{
}

bool TransmissionRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TransmissionRequest *>(obj)!=NULL;
}

const char *TransmissionRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TransmissionRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int TransmissionRequestDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *TransmissionRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "power",
        "bitrate",
        "carrierFrequency",
        "bandwidth",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int TransmissionRequestDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "power")==0) return base+0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bitrate")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "carrierFrequency")==0) return base+2;
    if (fieldName[0]=='b' && strcmp(fieldName, "bandwidth")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TransmissionRequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "W",
        "bps",
        "Hz",
        "Hz",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *TransmissionRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TransmissionRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TransmissionRequest *pp = (TransmissionRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TransmissionRequestDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TransmissionRequest *pp = (TransmissionRequest *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getPower(); return out.str();}
        case 1: {std::stringstream out; out << pp->getBitrate(); return out.str();}
        case 2: {std::stringstream out; out << pp->getCarrierFrequency(); return out.str();}
        case 3: {std::stringstream out; out << pp->getBandwidth(); return out.str();}
        default: return "";
    }
}

bool TransmissionRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TransmissionRequest *pp = (TransmissionRequest *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TransmissionRequestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(W));
        case 1: return opp_typename(typeid(bps));
        case 2: return opp_typename(typeid(Hz));
        case 3: return opp_typename(typeid(Hz));
        default: return NULL;
    };
}

void *TransmissionRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TransmissionRequest *pp = (TransmissionRequest *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getPower()); break;
        case 1: return (void *)(&pp->getBitrate()); break;
        case 2: return (void *)(&pp->getCarrierFrequency()); break;
        case 3: return (void *)(&pp->getBandwidth()); break;
        default: return NULL;
    }
}

Register_Class(ReceptionIndication);

ReceptionIndication::ReceptionIndication() : ::cObject()
{
    this->bitErrorCount_var = -1;
    this->symbolErrorCount_var = -1;
    this->packetErrorRate_var = NaN;
    this->bitErrorRate_var = NaN;
    this->symbolErrorRate_var = NaN;
    this->minRSSI_var = W(NaN);
    this->minSNIR_var = NaN;
}

ReceptionIndication::ReceptionIndication(const ReceptionIndication& other) : ::cObject(other)
{
    copy(other);
}

ReceptionIndication::~ReceptionIndication()
{
}

ReceptionIndication& ReceptionIndication::operator=(const ReceptionIndication& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void ReceptionIndication::copy(const ReceptionIndication& other)
{
    this->bitErrorCount_var = other.bitErrorCount_var;
    this->symbolErrorCount_var = other.symbolErrorCount_var;
    this->packetErrorRate_var = other.packetErrorRate_var;
    this->bitErrorRate_var = other.bitErrorRate_var;
    this->symbolErrorRate_var = other.symbolErrorRate_var;
    this->minRSSI_var = other.minRSSI_var;
    this->minSNIR_var = other.minSNIR_var;
}

void ReceptionIndication::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->bitErrorCount_var);
    doPacking(b,this->symbolErrorCount_var);
    doPacking(b,this->packetErrorRate_var);
    doPacking(b,this->bitErrorRate_var);
    doPacking(b,this->symbolErrorRate_var);
    doPacking(b,this->minRSSI_var);
    doPacking(b,this->minSNIR_var);
}

void ReceptionIndication::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->bitErrorCount_var);
    doUnpacking(b,this->symbolErrorCount_var);
    doUnpacking(b,this->packetErrorRate_var);
    doUnpacking(b,this->bitErrorRate_var);
    doUnpacking(b,this->symbolErrorRate_var);
    doUnpacking(b,this->minRSSI_var);
    doUnpacking(b,this->minSNIR_var);
}

int ReceptionIndication::getBitErrorCount() const
{
    return bitErrorCount_var;
}

void ReceptionIndication::setBitErrorCount(int bitErrorCount)
{
    this->bitErrorCount_var = bitErrorCount;
}

int ReceptionIndication::getSymbolErrorCount() const
{
    return symbolErrorCount_var;
}

void ReceptionIndication::setSymbolErrorCount(int symbolErrorCount)
{
    this->symbolErrorCount_var = symbolErrorCount;
}

double ReceptionIndication::getPacketErrorRate() const
{
    return packetErrorRate_var;
}

void ReceptionIndication::setPacketErrorRate(double packetErrorRate)
{
    this->packetErrorRate_var = packetErrorRate;
}

double ReceptionIndication::getBitErrorRate() const
{
    return bitErrorRate_var;
}

void ReceptionIndication::setBitErrorRate(double bitErrorRate)
{
    this->bitErrorRate_var = bitErrorRate;
}

double ReceptionIndication::getSymbolErrorRate() const
{
    return symbolErrorRate_var;
}

void ReceptionIndication::setSymbolErrorRate(double symbolErrorRate)
{
    this->symbolErrorRate_var = symbolErrorRate;
}

W& ReceptionIndication::getMinRSSI()
{
    return minRSSI_var;
}

void ReceptionIndication::setMinRSSI(const W& minRSSI)
{
    this->minRSSI_var = minRSSI;
}

double ReceptionIndication::getMinSNIR() const
{
    return minSNIR_var;
}

void ReceptionIndication::setMinSNIR(double minSNIR)
{
    this->minSNIR_var = minSNIR;
}

class ReceptionIndicationDescriptor : public cClassDescriptor
{
  public:
    ReceptionIndicationDescriptor();
    virtual ~ReceptionIndicationDescriptor();

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

Register_ClassDescriptor(ReceptionIndicationDescriptor);

ReceptionIndicationDescriptor::ReceptionIndicationDescriptor() : cClassDescriptor("inet::physicallayer::ReceptionIndication", "cObject")
{
}

ReceptionIndicationDescriptor::~ReceptionIndicationDescriptor()
{
}

bool ReceptionIndicationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ReceptionIndication *>(obj)!=NULL;
}

const char *ReceptionIndicationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ReceptionIndicationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int ReceptionIndicationDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *ReceptionIndicationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "bitErrorCount",
        "symbolErrorCount",
        "packetErrorRate",
        "bitErrorRate",
        "symbolErrorRate",
        "minRSSI",
        "minSNIR",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int ReceptionIndicationDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bitErrorCount")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "symbolErrorCount")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetErrorRate")==0) return base+2;
    if (fieldName[0]=='b' && strcmp(fieldName, "bitErrorRate")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "symbolErrorRate")==0) return base+4;
    if (fieldName[0]=='m' && strcmp(fieldName, "minRSSI")==0) return base+5;
    if (fieldName[0]=='m' && strcmp(fieldName, "minSNIR")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ReceptionIndicationDescriptor::getFieldTypeString(void *object, int field) const
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
        "double",
        "double",
        "double",
        "W",
        "double",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *ReceptionIndicationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ReceptionIndicationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ReceptionIndication *pp = (ReceptionIndication *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ReceptionIndicationDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ReceptionIndication *pp = (ReceptionIndication *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getBitErrorCount());
        case 1: return long2string(pp->getSymbolErrorCount());
        case 2: return double2string(pp->getPacketErrorRate());
        case 3: return double2string(pp->getBitErrorRate());
        case 4: return double2string(pp->getSymbolErrorRate());
        case 5: {std::stringstream out; out << pp->getMinRSSI(); return out.str();}
        case 6: return double2string(pp->getMinSNIR());
        default: return "";
    }
}

bool ReceptionIndicationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ReceptionIndication *pp = (ReceptionIndication *)object; (void)pp;
    switch (field) {
        case 0: pp->setBitErrorCount(string2long(value)); return true;
        case 1: pp->setSymbolErrorCount(string2long(value)); return true;
        case 2: pp->setPacketErrorRate(string2double(value)); return true;
        case 3: pp->setBitErrorRate(string2double(value)); return true;
        case 4: pp->setSymbolErrorRate(string2double(value)); return true;
        case 6: pp->setMinSNIR(string2double(value)); return true;
        default: return false;
    }
}

const char *ReceptionIndicationDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return opp_typename(typeid(W));
        default: return NULL;
    };
}

void *ReceptionIndicationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ReceptionIndication *pp = (ReceptionIndication *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getMinRSSI()); break;
        default: return NULL;
    }
}

} // namespace physicallayer
} // namespace inet

