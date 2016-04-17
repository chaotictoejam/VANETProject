//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee80211MgmtFrames_m.h"

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
namespace ieee80211 {

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

Ieee80211CapabilityInformation::Ieee80211CapabilityInformation()
{
    ESS = 0;
    IBSS = 0;
    CFPollable = 0;
    CFPollRequest = 0;
    privacy = 0;
    DelayedBlockAck = 0;
    InmediateBlockAck = 0;
}

void doPacking(cCommBuffer *b, Ieee80211CapabilityInformation& a)
{
    doPacking(b,a.ESS);
    doPacking(b,a.IBSS);
    doPacking(b,a.CFPollable);
    doPacking(b,a.CFPollRequest);
    doPacking(b,a.privacy);
    doPacking(b,a.DelayedBlockAck);
    doPacking(b,a.InmediateBlockAck);
}

void doUnpacking(cCommBuffer *b, Ieee80211CapabilityInformation& a)
{
    doUnpacking(b,a.ESS);
    doUnpacking(b,a.IBSS);
    doUnpacking(b,a.CFPollable);
    doUnpacking(b,a.CFPollRequest);
    doUnpacking(b,a.privacy);
    doUnpacking(b,a.DelayedBlockAck);
    doUnpacking(b,a.InmediateBlockAck);
}

class Ieee80211CapabilityInformationDescriptor : public cClassDescriptor
{
  public:
    Ieee80211CapabilityInformationDescriptor();
    virtual ~Ieee80211CapabilityInformationDescriptor();

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

Register_ClassDescriptor(Ieee80211CapabilityInformationDescriptor);

Ieee80211CapabilityInformationDescriptor::Ieee80211CapabilityInformationDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211CapabilityInformation", "")
{
}

Ieee80211CapabilityInformationDescriptor::~Ieee80211CapabilityInformationDescriptor()
{
}

bool Ieee80211CapabilityInformationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211CapabilityInformation *>(obj)!=NULL;
}

const char *Ieee80211CapabilityInformationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211CapabilityInformationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int Ieee80211CapabilityInformationDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211CapabilityInformationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ESS",
        "IBSS",
        "CFPollable",
        "CFPollRequest",
        "privacy",
        "DelayedBlockAck",
        "InmediateBlockAck",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int Ieee80211CapabilityInformationDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='E' && strcmp(fieldName, "ESS")==0) return base+0;
    if (fieldName[0]=='I' && strcmp(fieldName, "IBSS")==0) return base+1;
    if (fieldName[0]=='C' && strcmp(fieldName, "CFPollable")==0) return base+2;
    if (fieldName[0]=='C' && strcmp(fieldName, "CFPollRequest")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "privacy")==0) return base+4;
    if (fieldName[0]=='D' && strcmp(fieldName, "DelayedBlockAck")==0) return base+5;
    if (fieldName[0]=='I' && strcmp(fieldName, "InmediateBlockAck")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211CapabilityInformationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "bool",
        "bool",
        "bool",
        "bool",
        "bool",
        "bool",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211CapabilityInformationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211CapabilityInformationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CapabilityInformation *pp = (Ieee80211CapabilityInformation *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211CapabilityInformationDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CapabilityInformation *pp = (Ieee80211CapabilityInformation *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->ESS);
        case 1: return bool2string(pp->IBSS);
        case 2: return bool2string(pp->CFPollable);
        case 3: return bool2string(pp->CFPollRequest);
        case 4: return bool2string(pp->privacy);
        case 5: return bool2string(pp->DelayedBlockAck);
        case 6: return bool2string(pp->InmediateBlockAck);
        default: return "";
    }
}

bool Ieee80211CapabilityInformationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CapabilityInformation *pp = (Ieee80211CapabilityInformation *)object; (void)pp;
    switch (field) {
        case 0: pp->ESS = string2bool(value); return true;
        case 1: pp->IBSS = string2bool(value); return true;
        case 2: pp->CFPollable = string2bool(value); return true;
        case 3: pp->CFPollRequest = string2bool(value); return true;
        case 4: pp->privacy = string2bool(value); return true;
        case 5: pp->DelayedBlockAck = string2bool(value); return true;
        case 6: pp->InmediateBlockAck = string2bool(value); return true;
        default: return false;
    }
}

const char *Ieee80211CapabilityInformationDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211CapabilityInformationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CapabilityInformation *pp = (Ieee80211CapabilityInformation *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Ieee80211HandoverParameters::Ieee80211HandoverParameters()
{
    avgBackoffTime = 0;
    avgWaitTime = 0;
    avgErrorRate = 0;
    estAvailBW = 0;
}

void doPacking(cCommBuffer *b, Ieee80211HandoverParameters& a)
{
    doPacking(b,a.avgBackoffTime);
    doPacking(b,a.avgWaitTime);
    doPacking(b,a.avgErrorRate);
    doPacking(b,a.estAvailBW);
}

void doUnpacking(cCommBuffer *b, Ieee80211HandoverParameters& a)
{
    doUnpacking(b,a.avgBackoffTime);
    doUnpacking(b,a.avgWaitTime);
    doUnpacking(b,a.avgErrorRate);
    doUnpacking(b,a.estAvailBW);
}

class Ieee80211HandoverParametersDescriptor : public cClassDescriptor
{
  public:
    Ieee80211HandoverParametersDescriptor();
    virtual ~Ieee80211HandoverParametersDescriptor();

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

Register_ClassDescriptor(Ieee80211HandoverParametersDescriptor);

Ieee80211HandoverParametersDescriptor::Ieee80211HandoverParametersDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211HandoverParameters", "")
{
}

Ieee80211HandoverParametersDescriptor::~Ieee80211HandoverParametersDescriptor()
{
}

bool Ieee80211HandoverParametersDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211HandoverParameters *>(obj)!=NULL;
}

const char *Ieee80211HandoverParametersDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211HandoverParametersDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int Ieee80211HandoverParametersDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211HandoverParametersDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "avgBackoffTime",
        "avgWaitTime",
        "avgErrorRate",
        "estAvailBW",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int Ieee80211HandoverParametersDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "avgBackoffTime")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "avgWaitTime")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "avgErrorRate")==0) return base+2;
    if (fieldName[0]=='e' && strcmp(fieldName, "estAvailBW")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211HandoverParametersDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "double",
        "double",
        "double",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211HandoverParametersDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211HandoverParametersDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211HandoverParameters *pp = (Ieee80211HandoverParameters *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211HandoverParametersDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211HandoverParameters *pp = (Ieee80211HandoverParameters *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->avgBackoffTime);
        case 1: return double2string(pp->avgWaitTime);
        case 2: return double2string(pp->avgErrorRate);
        case 3: return double2string(pp->estAvailBW);
        default: return "";
    }
}

bool Ieee80211HandoverParametersDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211HandoverParameters *pp = (Ieee80211HandoverParameters *)object; (void)pp;
    switch (field) {
        case 0: pp->avgBackoffTime = string2double(value); return true;
        case 1: pp->avgWaitTime = string2double(value); return true;
        case 2: pp->avgErrorRate = string2double(value); return true;
        case 3: pp->estAvailBW = string2double(value); return true;
        default: return false;
    }
}

const char *Ieee80211HandoverParametersDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211HandoverParametersDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211HandoverParameters *pp = (Ieee80211HandoverParameters *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ieee80211::Ieee80211ReasonCode");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ieee80211::Ieee80211ReasonCode"));
    e->insert(RC_UNSPECIFIED, "RC_UNSPECIFIED");
    e->insert(RC_PREV_AUTH_EXPIRED, "RC_PREV_AUTH_EXPIRED");
    e->insert(RC_DEAUTH_MS_LEAVING, "RC_DEAUTH_MS_LEAVING");
    e->insert(RC_DISASS_INACTIVITY, "RC_DISASS_INACTIVITY");
    e->insert(RC_DISASS_TOO_MANY_MS, "RC_DISASS_TOO_MANY_MS");
    e->insert(RC_NONAUTH_CLASS2, "RC_NONAUTH_CLASS2");
    e->insert(RC_NONASS_CLASS3, "RC_NONASS_CLASS3");
    e->insert(RC_DIASS_MS_LEAVING, "RC_DIASS_MS_LEAVING");
    e->insert(RC_NONAUTH_ASS_REQUEST, "RC_NONAUTH_ASS_REQUEST");
    e->insert(RC_MESH_PEERING_CANCELLED, "RC_MESH_PEERING_CANCELLED");
    e->insert(RC_MESH_MAX_PEERS, "RC_MESH_MAX_PEERS");
    e->insert(RC_MESH_CONFIGURATION_POLICY_VIOLATION, "RC_MESH_CONFIGURATION_POLICY_VIOLATION");
    e->insert(RC_MESH_CLOSE_RCVD, "RC_MESH_CLOSE_RCVD");
    e->insert(RC_MESH_MAX_RETRIES, "RC_MESH_MAX_RETRIES");
    e->insert(RC_MESH_CONFIRM_TIMEOUT, "RC_MESH_CONFIRM_TIMEOUT");
    e->insert(RC_MESH_INVALID_GTK, "RC_MESH_INVALID_GTK");
    e->insert(RC_MESH_INCONSISTENT_PARAMETERS, "RC_MESH_INCONSISTENT_PARAMETERS");
    e->insert(RC_MESH_INVALID_SECURITY_CAPABILITY, "RC_MESH_INVALID_SECURITY_CAPABILITY");
    e->insert(RC_MESH_PATH_ERROR_NO_PROXY_INFORMATION, "RC_MESH_PATH_ERROR_NO_PROXY_INFORMATION");
    e->insert(RC_MESH_PATH_ERROR_NO_FORWARDING_INFORMATION, "RC_MESH_PATH_ERROR_NO_FORWARDING_INFORMATION");
    e->insert(RC_MESH_PATH_ERROR_DESTINATION_UNREACHABLE, "RC_MESH_PATH_ERROR_DESTINATION_UNREACHABLE");
    e->insert(RC_MAC_ADDRESS_ALREADY_EXISTS_IN_MBSS, "RC_MAC_ADDRESS_ALREADY_EXISTS_IN_MBSS");
    e->insert(RC_MESH_CHANNEL_SWITCH_REGULATORY_REQUIREMENTS, "RC_MESH_CHANNEL_SWITCH_REGULATORY_REQUIREMENTS");
    e->insert(RC_MESH_CHANNEL_SWITCH_UNSPECIFIED, "RC_MESH_CHANNEL_SWITCH_UNSPECIFIED");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ieee80211::Ieee80211StatusCode");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ieee80211::Ieee80211StatusCode"));
    e->insert(SC_SUCCESSFUL, "SC_SUCCESSFUL");
    e->insert(SC_UNSPECIFIED, "SC_UNSPECIFIED");
    e->insert(SC_UNSUP_CAP, "SC_UNSUP_CAP");
    e->insert(SC_REASS_DENIED, "SC_REASS_DENIED");
    e->insert(SC_ASS_DENIED_UNKNOWN, "SC_ASS_DENIED_UNKNOWN");
    e->insert(SC_AUTH_ALG0_UNSUP, "SC_AUTH_ALG0_UNSUP");
    e->insert(SC_AUTH_OUT_OF_SEQ, "SC_AUTH_OUT_OF_SEQ");
    e->insert(SC_AUTH_CHALLENGE_FAIL, "SC_AUTH_CHALLENGE_FAIL");
    e->insert(SC_AUTH_TIMEOUT, "SC_AUTH_TIMEOUT");
    e->insert(SC_ASS_TOO_MANY_MS, "SC_ASS_TOO_MANY_MS");
    e->insert(SC_DATARATE_UNSUP, "SC_DATARATE_UNSUP");
    e->insert(SC_AUTH_REJECT_ANTI_CLOGING, "SC_AUTH_REJECT_ANTI_CLOGING");
    e->insert(SC_AUTH_REJECT_FINITE_CYC_GROUP_UNS, "SC_AUTH_REJECT_FINITE_CYC_GROUP_UNS");
    e->insert(SC_TBTT_REQUEST, "SC_TBTT_REQUEST");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ieee80211::Ieee80211HWMPCode");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ieee80211::Ieee80211HWMPCode"));
    e->insert(IE11S_GANN, "IE11S_GANN");
    e->insert(IE11S_RANN, "IE11S_RANN");
    e->insert(IE11S_PREQ, "IE11S_PREQ");
    e->insert(IE11S_PREP, "IE11S_PREP");
    e->insert(IE11S_PERR, "IE11S_PERR");
);

Ieee80211SupportedRatesElement::Ieee80211SupportedRatesElement()
{
    numRates = 0;
    for (unsigned int i=0; i<8; i++)
        rate[i] = 0;
}

void doPacking(cCommBuffer *b, Ieee80211SupportedRatesElement& a)
{
    doPacking(b,a.numRates);
    doPacking(b,a.rate,8);
}

void doUnpacking(cCommBuffer *b, Ieee80211SupportedRatesElement& a)
{
    doUnpacking(b,a.numRates);
    doUnpacking(b,a.rate,8);
}

class Ieee80211SupportedRatesElementDescriptor : public cClassDescriptor
{
  public:
    Ieee80211SupportedRatesElementDescriptor();
    virtual ~Ieee80211SupportedRatesElementDescriptor();

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

Register_ClassDescriptor(Ieee80211SupportedRatesElementDescriptor);

Ieee80211SupportedRatesElementDescriptor::Ieee80211SupportedRatesElementDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211SupportedRatesElement", "")
{
}

Ieee80211SupportedRatesElementDescriptor::~Ieee80211SupportedRatesElementDescriptor()
{
}

bool Ieee80211SupportedRatesElementDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211SupportedRatesElement *>(obj)!=NULL;
}

const char *Ieee80211SupportedRatesElementDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211SupportedRatesElementDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211SupportedRatesElementDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211SupportedRatesElementDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "numRates",
        "rate",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int Ieee80211SupportedRatesElementDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "numRates")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "rate")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211SupportedRatesElementDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "double",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211SupportedRatesElementDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211SupportedRatesElementDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211SupportedRatesElement *pp = (Ieee80211SupportedRatesElement *)object; (void)pp;
    switch (field) {
        case 1: return 8;
        default: return 0;
    }
}

std::string Ieee80211SupportedRatesElementDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211SupportedRatesElement *pp = (Ieee80211SupportedRatesElement *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->numRates);
        case 1: if (i>=8) return "";
                return double2string(pp->rate[i]);
        default: return "";
    }
}

bool Ieee80211SupportedRatesElementDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211SupportedRatesElement *pp = (Ieee80211SupportedRatesElement *)object; (void)pp;
    switch (field) {
        case 0: pp->numRates = string2long(value); return true;
        case 1: if (i>=8) return false;
                pp->rate[i] = string2double(value); return true;
        default: return false;
    }
}

const char *Ieee80211SupportedRatesElementDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211SupportedRatesElementDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211SupportedRatesElement *pp = (Ieee80211SupportedRatesElement *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211FrameBody);

Ieee80211FrameBody::Ieee80211FrameBody() : ::cObject()
{
    this->bodyLength_var = 0;
}

Ieee80211FrameBody::Ieee80211FrameBody(const Ieee80211FrameBody& other) : ::cObject(other)
{
    copy(other);
}

Ieee80211FrameBody::~Ieee80211FrameBody()
{
}

Ieee80211FrameBody& Ieee80211FrameBody::operator=(const Ieee80211FrameBody& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211FrameBody::copy(const Ieee80211FrameBody& other)
{
    this->bodyLength_var = other.bodyLength_var;
}

void Ieee80211FrameBody::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->bodyLength_var);
}

void Ieee80211FrameBody::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->bodyLength_var);
}

short Ieee80211FrameBody::getBodyLength() const
{
    return bodyLength_var;
}

void Ieee80211FrameBody::setBodyLength(short bodyLength)
{
    this->bodyLength_var = bodyLength;
}

class Ieee80211FrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211FrameBodyDescriptor();
    virtual ~Ieee80211FrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211FrameBodyDescriptor);

Ieee80211FrameBodyDescriptor::Ieee80211FrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211FrameBody", "cObject")
{
}

Ieee80211FrameBodyDescriptor::~Ieee80211FrameBodyDescriptor()
{
}

bool Ieee80211FrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211FrameBody *>(obj)!=NULL;
}

const char *Ieee80211FrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211FrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211FrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211FrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "bodyLength",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211FrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bodyLength")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211FrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211FrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211FrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211FrameBody *pp = (Ieee80211FrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211FrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211FrameBody *pp = (Ieee80211FrameBody *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getBodyLength());
        default: return "";
    }
}

bool Ieee80211FrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211FrameBody *pp = (Ieee80211FrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setBodyLength(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211FrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211FrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211FrameBody *pp = (Ieee80211FrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211AuthenticationFrameBody);

Ieee80211AuthenticationFrameBody::Ieee80211AuthenticationFrameBody() : ::inet::ieee80211::Ieee80211FrameBody()
{
    this->setBodyLength(6);

    this->sequenceNumber_var = 0;
    this->statusCode_var = 0;
    this->isLast_var = 0;
}

Ieee80211AuthenticationFrameBody::Ieee80211AuthenticationFrameBody(const Ieee80211AuthenticationFrameBody& other) : ::inet::ieee80211::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211AuthenticationFrameBody::~Ieee80211AuthenticationFrameBody()
{
}

Ieee80211AuthenticationFrameBody& Ieee80211AuthenticationFrameBody::operator=(const Ieee80211AuthenticationFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211AuthenticationFrameBody::copy(const Ieee80211AuthenticationFrameBody& other)
{
    this->sequenceNumber_var = other.sequenceNumber_var;
    this->statusCode_var = other.statusCode_var;
    this->isLast_var = other.isLast_var;
}

void Ieee80211AuthenticationFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->sequenceNumber_var);
    doPacking(b,this->statusCode_var);
    doPacking(b,this->isLast_var);
}

void Ieee80211AuthenticationFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->sequenceNumber_var);
    doUnpacking(b,this->statusCode_var);
    doUnpacking(b,this->isLast_var);
}

unsigned short Ieee80211AuthenticationFrameBody::getSequenceNumber() const
{
    return sequenceNumber_var;
}

void Ieee80211AuthenticationFrameBody::setSequenceNumber(unsigned short sequenceNumber)
{
    this->sequenceNumber_var = sequenceNumber;
}

int Ieee80211AuthenticationFrameBody::getStatusCode() const
{
    return statusCode_var;
}

void Ieee80211AuthenticationFrameBody::setStatusCode(int statusCode)
{
    this->statusCode_var = statusCode;
}

bool Ieee80211AuthenticationFrameBody::getIsLast() const
{
    return isLast_var;
}

void Ieee80211AuthenticationFrameBody::setIsLast(bool isLast)
{
    this->isLast_var = isLast;
}

class Ieee80211AuthenticationFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AuthenticationFrameBodyDescriptor();
    virtual ~Ieee80211AuthenticationFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211AuthenticationFrameBodyDescriptor);

Ieee80211AuthenticationFrameBodyDescriptor::Ieee80211AuthenticationFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211AuthenticationFrameBody", "inet::ieee80211::Ieee80211FrameBody")
{
}

Ieee80211AuthenticationFrameBodyDescriptor::~Ieee80211AuthenticationFrameBodyDescriptor()
{
}

bool Ieee80211AuthenticationFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AuthenticationFrameBody *>(obj)!=NULL;
}

const char *Ieee80211AuthenticationFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AuthenticationFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int Ieee80211AuthenticationFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211AuthenticationFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sequenceNumber",
        "statusCode",
        "isLast",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int Ieee80211AuthenticationFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequenceNumber")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "statusCode")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "isLast")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211AuthenticationFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned short",
        "int",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211AuthenticationFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "inet::ieee80211::Ieee80211StatusCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211AuthenticationFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrameBody *pp = (Ieee80211AuthenticationFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211AuthenticationFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrameBody *pp = (Ieee80211AuthenticationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSequenceNumber());
        case 1: return long2string(pp->getStatusCode());
        case 2: return bool2string(pp->getIsLast());
        default: return "";
    }
}

bool Ieee80211AuthenticationFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrameBody *pp = (Ieee80211AuthenticationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setSequenceNumber(string2ulong(value)); return true;
        case 1: pp->setStatusCode(string2long(value)); return true;
        case 2: pp->setIsLast(string2bool(value)); return true;
        default: return false;
    }
}

const char *Ieee80211AuthenticationFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211AuthenticationFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrameBody *pp = (Ieee80211AuthenticationFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211DeauthenticationFrameBody);

Ieee80211DeauthenticationFrameBody::Ieee80211DeauthenticationFrameBody() : ::inet::ieee80211::Ieee80211FrameBody()
{
    this->setBodyLength(2);

    this->reasonCode_var = 0;
}

Ieee80211DeauthenticationFrameBody::Ieee80211DeauthenticationFrameBody(const Ieee80211DeauthenticationFrameBody& other) : ::inet::ieee80211::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211DeauthenticationFrameBody::~Ieee80211DeauthenticationFrameBody()
{
}

Ieee80211DeauthenticationFrameBody& Ieee80211DeauthenticationFrameBody::operator=(const Ieee80211DeauthenticationFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DeauthenticationFrameBody::copy(const Ieee80211DeauthenticationFrameBody& other)
{
    this->reasonCode_var = other.reasonCode_var;
}

void Ieee80211DeauthenticationFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->reasonCode_var);
}

void Ieee80211DeauthenticationFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->reasonCode_var);
}

int Ieee80211DeauthenticationFrameBody::getReasonCode() const
{
    return reasonCode_var;
}

void Ieee80211DeauthenticationFrameBody::setReasonCode(int reasonCode)
{
    this->reasonCode_var = reasonCode;
}

class Ieee80211DeauthenticationFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DeauthenticationFrameBodyDescriptor();
    virtual ~Ieee80211DeauthenticationFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211DeauthenticationFrameBodyDescriptor);

Ieee80211DeauthenticationFrameBodyDescriptor::Ieee80211DeauthenticationFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211DeauthenticationFrameBody", "inet::ieee80211::Ieee80211FrameBody")
{
}

Ieee80211DeauthenticationFrameBodyDescriptor::~Ieee80211DeauthenticationFrameBodyDescriptor()
{
}

bool Ieee80211DeauthenticationFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DeauthenticationFrameBody *>(obj)!=NULL;
}

const char *Ieee80211DeauthenticationFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DeauthenticationFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211DeauthenticationFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211DeauthenticationFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "reasonCode",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211DeauthenticationFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "reasonCode")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211DeauthenticationFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211DeauthenticationFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::ieee80211::Ieee80211ReasonCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211DeauthenticationFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrameBody *pp = (Ieee80211DeauthenticationFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211DeauthenticationFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrameBody *pp = (Ieee80211DeauthenticationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getReasonCode());
        default: return "";
    }
}

bool Ieee80211DeauthenticationFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrameBody *pp = (Ieee80211DeauthenticationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setReasonCode(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211DeauthenticationFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211DeauthenticationFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrameBody *pp = (Ieee80211DeauthenticationFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211DisassociationFrameBody);

Ieee80211DisassociationFrameBody::Ieee80211DisassociationFrameBody() : ::inet::ieee80211::Ieee80211FrameBody()
{
    this->setBodyLength(2);

    this->reasonCode_var = 0;
}

Ieee80211DisassociationFrameBody::Ieee80211DisassociationFrameBody(const Ieee80211DisassociationFrameBody& other) : ::inet::ieee80211::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211DisassociationFrameBody::~Ieee80211DisassociationFrameBody()
{
}

Ieee80211DisassociationFrameBody& Ieee80211DisassociationFrameBody::operator=(const Ieee80211DisassociationFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DisassociationFrameBody::copy(const Ieee80211DisassociationFrameBody& other)
{
    this->reasonCode_var = other.reasonCode_var;
}

void Ieee80211DisassociationFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->reasonCode_var);
}

void Ieee80211DisassociationFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->reasonCode_var);
}

int Ieee80211DisassociationFrameBody::getReasonCode() const
{
    return reasonCode_var;
}

void Ieee80211DisassociationFrameBody::setReasonCode(int reasonCode)
{
    this->reasonCode_var = reasonCode;
}

class Ieee80211DisassociationFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DisassociationFrameBodyDescriptor();
    virtual ~Ieee80211DisassociationFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211DisassociationFrameBodyDescriptor);

Ieee80211DisassociationFrameBodyDescriptor::Ieee80211DisassociationFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211DisassociationFrameBody", "inet::ieee80211::Ieee80211FrameBody")
{
}

Ieee80211DisassociationFrameBodyDescriptor::~Ieee80211DisassociationFrameBodyDescriptor()
{
}

bool Ieee80211DisassociationFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DisassociationFrameBody *>(obj)!=NULL;
}

const char *Ieee80211DisassociationFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DisassociationFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211DisassociationFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211DisassociationFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "reasonCode",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211DisassociationFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "reasonCode")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211DisassociationFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211DisassociationFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::ieee80211::Ieee80211ReasonCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211DisassociationFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrameBody *pp = (Ieee80211DisassociationFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211DisassociationFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrameBody *pp = (Ieee80211DisassociationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getReasonCode());
        default: return "";
    }
}

bool Ieee80211DisassociationFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrameBody *pp = (Ieee80211DisassociationFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setReasonCode(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211DisassociationFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211DisassociationFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrameBody *pp = (Ieee80211DisassociationFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211ProbeRequestFrameBody);

Ieee80211ProbeRequestFrameBody::Ieee80211ProbeRequestFrameBody() : ::inet::ieee80211::Ieee80211FrameBody()
{
    this->setBodyLength(12);

    this->SSID_var = 0;
}

Ieee80211ProbeRequestFrameBody::Ieee80211ProbeRequestFrameBody(const Ieee80211ProbeRequestFrameBody& other) : ::inet::ieee80211::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211ProbeRequestFrameBody::~Ieee80211ProbeRequestFrameBody()
{
}

Ieee80211ProbeRequestFrameBody& Ieee80211ProbeRequestFrameBody::operator=(const Ieee80211ProbeRequestFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ProbeRequestFrameBody::copy(const Ieee80211ProbeRequestFrameBody& other)
{
    this->SSID_var = other.SSID_var;
    this->supportedRates_var = other.supportedRates_var;
}

void Ieee80211ProbeRequestFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->SSID_var);
    doPacking(b,this->supportedRates_var);
}

void Ieee80211ProbeRequestFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->SSID_var);
    doUnpacking(b,this->supportedRates_var);
}

const char * Ieee80211ProbeRequestFrameBody::getSSID() const
{
    return SSID_var.c_str();
}

void Ieee80211ProbeRequestFrameBody::setSSID(const char * SSID)
{
    this->SSID_var = SSID;
}

Ieee80211SupportedRatesElement& Ieee80211ProbeRequestFrameBody::getSupportedRates()
{
    return supportedRates_var;
}

void Ieee80211ProbeRequestFrameBody::setSupportedRates(const Ieee80211SupportedRatesElement& supportedRates)
{
    this->supportedRates_var = supportedRates;
}

class Ieee80211ProbeRequestFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ProbeRequestFrameBodyDescriptor();
    virtual ~Ieee80211ProbeRequestFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ProbeRequestFrameBodyDescriptor);

Ieee80211ProbeRequestFrameBodyDescriptor::Ieee80211ProbeRequestFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ProbeRequestFrameBody", "inet::ieee80211::Ieee80211FrameBody")
{
}

Ieee80211ProbeRequestFrameBodyDescriptor::~Ieee80211ProbeRequestFrameBodyDescriptor()
{
}

bool Ieee80211ProbeRequestFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ProbeRequestFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ProbeRequestFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ProbeRequestFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211ProbeRequestFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ProbeRequestFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "SSID",
        "supportedRates",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int Ieee80211ProbeRequestFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='S' && strcmp(fieldName, "SSID")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "supportedRates")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ProbeRequestFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "Ieee80211SupportedRatesElement",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ProbeRequestFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ProbeRequestFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrameBody *pp = (Ieee80211ProbeRequestFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ProbeRequestFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrameBody *pp = (Ieee80211ProbeRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getSSID());
        case 1: {std::stringstream out; out << pp->getSupportedRates(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ProbeRequestFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrameBody *pp = (Ieee80211ProbeRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setSSID((value)); return true;
        default: return false;
    }
}

const char *Ieee80211ProbeRequestFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(Ieee80211SupportedRatesElement));
        default: return NULL;
    };
}

void *Ieee80211ProbeRequestFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrameBody *pp = (Ieee80211ProbeRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSupportedRates()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211AssociationRequestFrameBody);

Ieee80211AssociationRequestFrameBody::Ieee80211AssociationRequestFrameBody() : ::inet::ieee80211::Ieee80211FrameBody()
{
    this->setBodyLength(16);

    this->SSID_var = 0;
}

Ieee80211AssociationRequestFrameBody::Ieee80211AssociationRequestFrameBody(const Ieee80211AssociationRequestFrameBody& other) : ::inet::ieee80211::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211AssociationRequestFrameBody::~Ieee80211AssociationRequestFrameBody()
{
}

Ieee80211AssociationRequestFrameBody& Ieee80211AssociationRequestFrameBody::operator=(const Ieee80211AssociationRequestFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211AssociationRequestFrameBody::copy(const Ieee80211AssociationRequestFrameBody& other)
{
    this->SSID_var = other.SSID_var;
    this->supportedRates_var = other.supportedRates_var;
}

void Ieee80211AssociationRequestFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->SSID_var);
    doPacking(b,this->supportedRates_var);
}

void Ieee80211AssociationRequestFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->SSID_var);
    doUnpacking(b,this->supportedRates_var);
}

const char * Ieee80211AssociationRequestFrameBody::getSSID() const
{
    return SSID_var.c_str();
}

void Ieee80211AssociationRequestFrameBody::setSSID(const char * SSID)
{
    this->SSID_var = SSID;
}

Ieee80211SupportedRatesElement& Ieee80211AssociationRequestFrameBody::getSupportedRates()
{
    return supportedRates_var;
}

void Ieee80211AssociationRequestFrameBody::setSupportedRates(const Ieee80211SupportedRatesElement& supportedRates)
{
    this->supportedRates_var = supportedRates;
}

class Ieee80211AssociationRequestFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AssociationRequestFrameBodyDescriptor();
    virtual ~Ieee80211AssociationRequestFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211AssociationRequestFrameBodyDescriptor);

Ieee80211AssociationRequestFrameBodyDescriptor::Ieee80211AssociationRequestFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211AssociationRequestFrameBody", "inet::ieee80211::Ieee80211FrameBody")
{
}

Ieee80211AssociationRequestFrameBodyDescriptor::~Ieee80211AssociationRequestFrameBodyDescriptor()
{
}

bool Ieee80211AssociationRequestFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AssociationRequestFrameBody *>(obj)!=NULL;
}

const char *Ieee80211AssociationRequestFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AssociationRequestFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211AssociationRequestFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211AssociationRequestFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "SSID",
        "supportedRates",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int Ieee80211AssociationRequestFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='S' && strcmp(fieldName, "SSID")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "supportedRates")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211AssociationRequestFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "Ieee80211SupportedRatesElement",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211AssociationRequestFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211AssociationRequestFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrameBody *pp = (Ieee80211AssociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211AssociationRequestFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrameBody *pp = (Ieee80211AssociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getSSID());
        case 1: {std::stringstream out; out << pp->getSupportedRates(); return out.str();}
        default: return "";
    }
}

bool Ieee80211AssociationRequestFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrameBody *pp = (Ieee80211AssociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setSSID((value)); return true;
        default: return false;
    }
}

const char *Ieee80211AssociationRequestFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(Ieee80211SupportedRatesElement));
        default: return NULL;
    };
}

void *Ieee80211AssociationRequestFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrameBody *pp = (Ieee80211AssociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSupportedRates()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ReassociationRequestFrameBody);

Ieee80211ReassociationRequestFrameBody::Ieee80211ReassociationRequestFrameBody() : ::inet::ieee80211::Ieee80211AssociationRequestFrameBody()
{
    this->setBodyLength(26);

}

Ieee80211ReassociationRequestFrameBody::Ieee80211ReassociationRequestFrameBody(const Ieee80211ReassociationRequestFrameBody& other) : ::inet::ieee80211::Ieee80211AssociationRequestFrameBody(other)
{
    copy(other);
}

Ieee80211ReassociationRequestFrameBody::~Ieee80211ReassociationRequestFrameBody()
{
}

Ieee80211ReassociationRequestFrameBody& Ieee80211ReassociationRequestFrameBody::operator=(const Ieee80211ReassociationRequestFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211AssociationRequestFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ReassociationRequestFrameBody::copy(const Ieee80211ReassociationRequestFrameBody& other)
{
    this->currentAP_var = other.currentAP_var;
}

void Ieee80211ReassociationRequestFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211AssociationRequestFrameBody::parsimPack(b);
    doPacking(b,this->currentAP_var);
}

void Ieee80211ReassociationRequestFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211AssociationRequestFrameBody::parsimUnpack(b);
    doUnpacking(b,this->currentAP_var);
}

MACAddress& Ieee80211ReassociationRequestFrameBody::getCurrentAP()
{
    return currentAP_var;
}

void Ieee80211ReassociationRequestFrameBody::setCurrentAP(const MACAddress& currentAP)
{
    this->currentAP_var = currentAP;
}

class Ieee80211ReassociationRequestFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ReassociationRequestFrameBodyDescriptor();
    virtual ~Ieee80211ReassociationRequestFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ReassociationRequestFrameBodyDescriptor);

Ieee80211ReassociationRequestFrameBodyDescriptor::Ieee80211ReassociationRequestFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ReassociationRequestFrameBody", "inet::ieee80211::Ieee80211AssociationRequestFrameBody")
{
}

Ieee80211ReassociationRequestFrameBodyDescriptor::~Ieee80211ReassociationRequestFrameBodyDescriptor()
{
}

bool Ieee80211ReassociationRequestFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ReassociationRequestFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ReassociationRequestFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "currentAP",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211ReassociationRequestFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "currentAP")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ReassociationRequestFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrameBody *pp = (Ieee80211ReassociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrameBody *pp = (Ieee80211ReassociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getCurrentAP(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ReassociationRequestFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrameBody *pp = (Ieee80211ReassociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *Ieee80211ReassociationRequestFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrameBody *pp = (Ieee80211ReassociationRequestFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getCurrentAP()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211AssociationResponseFrameBody);

Ieee80211AssociationResponseFrameBody::Ieee80211AssociationResponseFrameBody() : ::inet::ieee80211::Ieee80211FrameBody()
{
    this->setBodyLength(26);

    this->statusCode_var = 0;
    this->aid_var = 0;
}

Ieee80211AssociationResponseFrameBody::Ieee80211AssociationResponseFrameBody(const Ieee80211AssociationResponseFrameBody& other) : ::inet::ieee80211::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211AssociationResponseFrameBody::~Ieee80211AssociationResponseFrameBody()
{
}

Ieee80211AssociationResponseFrameBody& Ieee80211AssociationResponseFrameBody::operator=(const Ieee80211AssociationResponseFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211AssociationResponseFrameBody::copy(const Ieee80211AssociationResponseFrameBody& other)
{
    this->statusCode_var = other.statusCode_var;
    this->aid_var = other.aid_var;
    this->supportedRates_var = other.supportedRates_var;
}

void Ieee80211AssociationResponseFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->statusCode_var);
    doPacking(b,this->aid_var);
    doPacking(b,this->supportedRates_var);
}

void Ieee80211AssociationResponseFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->statusCode_var);
    doUnpacking(b,this->aid_var);
    doUnpacking(b,this->supportedRates_var);
}

int Ieee80211AssociationResponseFrameBody::getStatusCode() const
{
    return statusCode_var;
}

void Ieee80211AssociationResponseFrameBody::setStatusCode(int statusCode)
{
    this->statusCode_var = statusCode;
}

short Ieee80211AssociationResponseFrameBody::getAid() const
{
    return aid_var;
}

void Ieee80211AssociationResponseFrameBody::setAid(short aid)
{
    this->aid_var = aid;
}

Ieee80211SupportedRatesElement& Ieee80211AssociationResponseFrameBody::getSupportedRates()
{
    return supportedRates_var;
}

void Ieee80211AssociationResponseFrameBody::setSupportedRates(const Ieee80211SupportedRatesElement& supportedRates)
{
    this->supportedRates_var = supportedRates;
}

class Ieee80211AssociationResponseFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AssociationResponseFrameBodyDescriptor();
    virtual ~Ieee80211AssociationResponseFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211AssociationResponseFrameBodyDescriptor);

Ieee80211AssociationResponseFrameBodyDescriptor::Ieee80211AssociationResponseFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211AssociationResponseFrameBody", "inet::ieee80211::Ieee80211FrameBody")
{
}

Ieee80211AssociationResponseFrameBodyDescriptor::~Ieee80211AssociationResponseFrameBodyDescriptor()
{
}

bool Ieee80211AssociationResponseFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AssociationResponseFrameBody *>(obj)!=NULL;
}

const char *Ieee80211AssociationResponseFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AssociationResponseFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int Ieee80211AssociationResponseFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211AssociationResponseFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "statusCode",
        "aid",
        "supportedRates",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int Ieee80211AssociationResponseFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "statusCode")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "aid")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "supportedRates")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211AssociationResponseFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "short",
        "Ieee80211SupportedRatesElement",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211AssociationResponseFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::ieee80211::Ieee80211StatusCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211AssociationResponseFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrameBody *pp = (Ieee80211AssociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211AssociationResponseFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrameBody *pp = (Ieee80211AssociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getStatusCode());
        case 1: return long2string(pp->getAid());
        case 2: {std::stringstream out; out << pp->getSupportedRates(); return out.str();}
        default: return "";
    }
}

bool Ieee80211AssociationResponseFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrameBody *pp = (Ieee80211AssociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatusCode(string2long(value)); return true;
        case 1: pp->setAid(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211AssociationResponseFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(Ieee80211SupportedRatesElement));
        default: return NULL;
    };
}

void *Ieee80211AssociationResponseFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrameBody *pp = (Ieee80211AssociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getSupportedRates()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ReassociationResponseFrameBody);

Ieee80211ReassociationResponseFrameBody::Ieee80211ReassociationResponseFrameBody() : ::inet::ieee80211::Ieee80211AssociationResponseFrameBody()
{
}

Ieee80211ReassociationResponseFrameBody::Ieee80211ReassociationResponseFrameBody(const Ieee80211ReassociationResponseFrameBody& other) : ::inet::ieee80211::Ieee80211AssociationResponseFrameBody(other)
{
    copy(other);
}

Ieee80211ReassociationResponseFrameBody::~Ieee80211ReassociationResponseFrameBody()
{
}

Ieee80211ReassociationResponseFrameBody& Ieee80211ReassociationResponseFrameBody::operator=(const Ieee80211ReassociationResponseFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211AssociationResponseFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ReassociationResponseFrameBody::copy(const Ieee80211ReassociationResponseFrameBody& other)
{
}

void Ieee80211ReassociationResponseFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211AssociationResponseFrameBody::parsimPack(b);
}

void Ieee80211ReassociationResponseFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211AssociationResponseFrameBody::parsimUnpack(b);
}

class Ieee80211ReassociationResponseFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ReassociationResponseFrameBodyDescriptor();
    virtual ~Ieee80211ReassociationResponseFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ReassociationResponseFrameBodyDescriptor);

Ieee80211ReassociationResponseFrameBodyDescriptor::Ieee80211ReassociationResponseFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ReassociationResponseFrameBody", "inet::ieee80211::Ieee80211AssociationResponseFrameBody")
{
}

Ieee80211ReassociationResponseFrameBodyDescriptor::~Ieee80211ReassociationResponseFrameBodyDescriptor()
{
}

bool Ieee80211ReassociationResponseFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ReassociationResponseFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ReassociationResponseFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee80211ReassociationResponseFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ReassociationResponseFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrameBody *pp = (Ieee80211ReassociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrameBody *pp = (Ieee80211ReassociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee80211ReassociationResponseFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrameBody *pp = (Ieee80211ReassociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee80211ReassociationResponseFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrameBody *pp = (Ieee80211ReassociationResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211BeaconFrameBody);

Ieee80211BeaconFrameBody::Ieee80211BeaconFrameBody() : ::inet::ieee80211::Ieee80211FrameBody()
{
    this->setBodyLength(50);

    this->SSID_var = 0;
    this->beaconInterval_var = 0;
    this->channelNumber_var = 0;
}

Ieee80211BeaconFrameBody::Ieee80211BeaconFrameBody(const Ieee80211BeaconFrameBody& other) : ::inet::ieee80211::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211BeaconFrameBody::~Ieee80211BeaconFrameBody()
{
}

Ieee80211BeaconFrameBody& Ieee80211BeaconFrameBody::operator=(const Ieee80211BeaconFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211BeaconFrameBody::copy(const Ieee80211BeaconFrameBody& other)
{
    this->SSID_var = other.SSID_var;
    this->supportedRates_var = other.supportedRates_var;
    this->beaconInterval_var = other.beaconInterval_var;
    this->channelNumber_var = other.channelNumber_var;
    this->handoverParameters_var = other.handoverParameters_var;
}

void Ieee80211BeaconFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->SSID_var);
    doPacking(b,this->supportedRates_var);
    doPacking(b,this->beaconInterval_var);
    doPacking(b,this->channelNumber_var);
    doPacking(b,this->handoverParameters_var);
}

void Ieee80211BeaconFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimUnpack(b);
    doUnpacking(b,this->SSID_var);
    doUnpacking(b,this->supportedRates_var);
    doUnpacking(b,this->beaconInterval_var);
    doUnpacking(b,this->channelNumber_var);
    doUnpacking(b,this->handoverParameters_var);
}

const char * Ieee80211BeaconFrameBody::getSSID() const
{
    return SSID_var.c_str();
}

void Ieee80211BeaconFrameBody::setSSID(const char * SSID)
{
    this->SSID_var = SSID;
}

Ieee80211SupportedRatesElement& Ieee80211BeaconFrameBody::getSupportedRates()
{
    return supportedRates_var;
}

void Ieee80211BeaconFrameBody::setSupportedRates(const Ieee80211SupportedRatesElement& supportedRates)
{
    this->supportedRates_var = supportedRates;
}

simtime_t Ieee80211BeaconFrameBody::getBeaconInterval() const
{
    return beaconInterval_var;
}

void Ieee80211BeaconFrameBody::setBeaconInterval(simtime_t beaconInterval)
{
    this->beaconInterval_var = beaconInterval;
}

int Ieee80211BeaconFrameBody::getChannelNumber() const
{
    return channelNumber_var;
}

void Ieee80211BeaconFrameBody::setChannelNumber(int channelNumber)
{
    this->channelNumber_var = channelNumber;
}

Ieee80211HandoverParameters& Ieee80211BeaconFrameBody::getHandoverParameters()
{
    return handoverParameters_var;
}

void Ieee80211BeaconFrameBody::setHandoverParameters(const Ieee80211HandoverParameters& handoverParameters)
{
    this->handoverParameters_var = handoverParameters;
}

class Ieee80211BeaconFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211BeaconFrameBodyDescriptor();
    virtual ~Ieee80211BeaconFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211BeaconFrameBodyDescriptor);

Ieee80211BeaconFrameBodyDescriptor::Ieee80211BeaconFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211BeaconFrameBody", "inet::ieee80211::Ieee80211FrameBody")
{
}

Ieee80211BeaconFrameBodyDescriptor::~Ieee80211BeaconFrameBodyDescriptor()
{
}

bool Ieee80211BeaconFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211BeaconFrameBody *>(obj)!=NULL;
}

const char *Ieee80211BeaconFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211BeaconFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int Ieee80211BeaconFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211BeaconFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "SSID",
        "supportedRates",
        "beaconInterval",
        "channelNumber",
        "handoverParameters",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int Ieee80211BeaconFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='S' && strcmp(fieldName, "SSID")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "supportedRates")==0) return base+1;
    if (fieldName[0]=='b' && strcmp(fieldName, "beaconInterval")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "channelNumber")==0) return base+3;
    if (fieldName[0]=='h' && strcmp(fieldName, "handoverParameters")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211BeaconFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "Ieee80211SupportedRatesElement",
        "simtime_t",
        "int",
        "Ieee80211HandoverParameters",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211BeaconFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211BeaconFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrameBody *pp = (Ieee80211BeaconFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211BeaconFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrameBody *pp = (Ieee80211BeaconFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getSSID());
        case 1: {std::stringstream out; out << pp->getSupportedRates(); return out.str();}
        case 2: return double2string(pp->getBeaconInterval());
        case 3: return long2string(pp->getChannelNumber());
        case 4: {std::stringstream out; out << pp->getHandoverParameters(); return out.str();}
        default: return "";
    }
}

bool Ieee80211BeaconFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrameBody *pp = (Ieee80211BeaconFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setSSID((value)); return true;
        case 2: pp->setBeaconInterval(string2double(value)); return true;
        case 3: pp->setChannelNumber(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211BeaconFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(Ieee80211SupportedRatesElement));
        case 4: return opp_typename(typeid(Ieee80211HandoverParameters));
        default: return NULL;
    };
}

void *Ieee80211BeaconFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrameBody *pp = (Ieee80211BeaconFrameBody *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSupportedRates()); break;
        case 4: return (void *)(&pp->getHandoverParameters()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ProbeResponseFrameBody);

Ieee80211ProbeResponseFrameBody::Ieee80211ProbeResponseFrameBody() : ::inet::ieee80211::Ieee80211BeaconFrameBody()
{
}

Ieee80211ProbeResponseFrameBody::Ieee80211ProbeResponseFrameBody(const Ieee80211ProbeResponseFrameBody& other) : ::inet::ieee80211::Ieee80211BeaconFrameBody(other)
{
    copy(other);
}

Ieee80211ProbeResponseFrameBody::~Ieee80211ProbeResponseFrameBody()
{
}

Ieee80211ProbeResponseFrameBody& Ieee80211ProbeResponseFrameBody::operator=(const Ieee80211ProbeResponseFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211BeaconFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ProbeResponseFrameBody::copy(const Ieee80211ProbeResponseFrameBody& other)
{
}

void Ieee80211ProbeResponseFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211BeaconFrameBody::parsimPack(b);
}

void Ieee80211ProbeResponseFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211BeaconFrameBody::parsimUnpack(b);
}

class Ieee80211ProbeResponseFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ProbeResponseFrameBodyDescriptor();
    virtual ~Ieee80211ProbeResponseFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ProbeResponseFrameBodyDescriptor);

Ieee80211ProbeResponseFrameBodyDescriptor::Ieee80211ProbeResponseFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ProbeResponseFrameBody", "inet::ieee80211::Ieee80211BeaconFrameBody")
{
}

Ieee80211ProbeResponseFrameBodyDescriptor::~Ieee80211ProbeResponseFrameBodyDescriptor()
{
}

bool Ieee80211ProbeResponseFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ProbeResponseFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ProbeResponseFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ProbeResponseFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211ProbeResponseFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee80211ProbeResponseFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee80211ProbeResponseFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ProbeResponseFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee80211ProbeResponseFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ProbeResponseFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrameBody *pp = (Ieee80211ProbeResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ProbeResponseFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrameBody *pp = (Ieee80211ProbeResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee80211ProbeResponseFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrameBody *pp = (Ieee80211ProbeResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ProbeResponseFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee80211ProbeResponseFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrameBody *pp = (Ieee80211ProbeResponseFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionFrameBody);

Ieee80211ActionFrameBody::Ieee80211ActionFrameBody() : ::inet::ieee80211::Ieee80211FrameBody()
{
}

Ieee80211ActionFrameBody::Ieee80211ActionFrameBody(const Ieee80211ActionFrameBody& other) : ::inet::ieee80211::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211ActionFrameBody::~Ieee80211ActionFrameBody()
{
}

Ieee80211ActionFrameBody& Ieee80211ActionFrameBody::operator=(const Ieee80211ActionFrameBody& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionFrameBody::copy(const Ieee80211ActionFrameBody& other)
{
}

void Ieee80211ActionFrameBody::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimPack(b);
}

void Ieee80211ActionFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211FrameBody::parsimUnpack(b);
}

class Ieee80211ActionFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionFrameBodyDescriptor();
    virtual ~Ieee80211ActionFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionFrameBodyDescriptor);

Ieee80211ActionFrameBodyDescriptor::Ieee80211ActionFrameBodyDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ActionFrameBody", "inet::ieee80211::Ieee80211FrameBody")
{
}

Ieee80211ActionFrameBodyDescriptor::~Ieee80211ActionFrameBodyDescriptor()
{
}

bool Ieee80211ActionFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ActionFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211ActionFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee80211ActionFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee80211ActionFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee80211ActionFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionFrameBody *pp = (Ieee80211ActionFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionFrameBody *pp = (Ieee80211ActionFrameBody *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee80211ActionFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionFrameBody *pp = (Ieee80211ActionFrameBody *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ActionFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee80211ActionFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionFrameBody *pp = (Ieee80211ActionFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211AuthenticationFrame);

Ieee80211AuthenticationFrame::Ieee80211AuthenticationFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_AUTHENTICATION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211AuthenticationFrame::Ieee80211AuthenticationFrame(const Ieee80211AuthenticationFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211AuthenticationFrame::~Ieee80211AuthenticationFrame()
{
}

Ieee80211AuthenticationFrame& Ieee80211AuthenticationFrame::operator=(const Ieee80211AuthenticationFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211AuthenticationFrame::copy(const Ieee80211AuthenticationFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211AuthenticationFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211AuthenticationFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211AuthenticationFrameBody& Ieee80211AuthenticationFrame::getBody()
{
    return body_var;
}

void Ieee80211AuthenticationFrame::setBody(const Ieee80211AuthenticationFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211AuthenticationFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AuthenticationFrameDescriptor();
    virtual ~Ieee80211AuthenticationFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211AuthenticationFrameDescriptor);

Ieee80211AuthenticationFrameDescriptor::Ieee80211AuthenticationFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211AuthenticationFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211AuthenticationFrameDescriptor::~Ieee80211AuthenticationFrameDescriptor()
{
}

bool Ieee80211AuthenticationFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AuthenticationFrame *>(obj)!=NULL;
}

const char *Ieee80211AuthenticationFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AuthenticationFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211AuthenticationFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211AuthenticationFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211AuthenticationFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211AuthenticationFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211AuthenticationFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211AuthenticationFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211AuthenticationFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrame *pp = (Ieee80211AuthenticationFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211AuthenticationFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrame *pp = (Ieee80211AuthenticationFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211AuthenticationFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrame *pp = (Ieee80211AuthenticationFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211AuthenticationFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211AuthenticationFrameBody));
        default: return NULL;
    };
}

void *Ieee80211AuthenticationFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AuthenticationFrame *pp = (Ieee80211AuthenticationFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211DeauthenticationFrame);

Ieee80211DeauthenticationFrame::Ieee80211DeauthenticationFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_DEAUTHENTICATION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211DeauthenticationFrame::Ieee80211DeauthenticationFrame(const Ieee80211DeauthenticationFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211DeauthenticationFrame::~Ieee80211DeauthenticationFrame()
{
}

Ieee80211DeauthenticationFrame& Ieee80211DeauthenticationFrame::operator=(const Ieee80211DeauthenticationFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DeauthenticationFrame::copy(const Ieee80211DeauthenticationFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211DeauthenticationFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211DeauthenticationFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211DeauthenticationFrameBody& Ieee80211DeauthenticationFrame::getBody()
{
    return body_var;
}

void Ieee80211DeauthenticationFrame::setBody(const Ieee80211DeauthenticationFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211DeauthenticationFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DeauthenticationFrameDescriptor();
    virtual ~Ieee80211DeauthenticationFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211DeauthenticationFrameDescriptor);

Ieee80211DeauthenticationFrameDescriptor::Ieee80211DeauthenticationFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211DeauthenticationFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211DeauthenticationFrameDescriptor::~Ieee80211DeauthenticationFrameDescriptor()
{
}

bool Ieee80211DeauthenticationFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DeauthenticationFrame *>(obj)!=NULL;
}

const char *Ieee80211DeauthenticationFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DeauthenticationFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211DeauthenticationFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211DeauthenticationFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211DeauthenticationFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211DeauthenticationFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211DeauthenticationFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211DeauthenticationFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211DeauthenticationFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrame *pp = (Ieee80211DeauthenticationFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211DeauthenticationFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrame *pp = (Ieee80211DeauthenticationFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211DeauthenticationFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrame *pp = (Ieee80211DeauthenticationFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211DeauthenticationFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211DeauthenticationFrameBody));
        default: return NULL;
    };
}

void *Ieee80211DeauthenticationFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DeauthenticationFrame *pp = (Ieee80211DeauthenticationFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211DisassociationFrame);

Ieee80211DisassociationFrame::Ieee80211DisassociationFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_DISASSOCIATION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211DisassociationFrame::Ieee80211DisassociationFrame(const Ieee80211DisassociationFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211DisassociationFrame::~Ieee80211DisassociationFrame()
{
}

Ieee80211DisassociationFrame& Ieee80211DisassociationFrame::operator=(const Ieee80211DisassociationFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DisassociationFrame::copy(const Ieee80211DisassociationFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211DisassociationFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211DisassociationFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211DisassociationFrameBody& Ieee80211DisassociationFrame::getBody()
{
    return body_var;
}

void Ieee80211DisassociationFrame::setBody(const Ieee80211DisassociationFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211DisassociationFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DisassociationFrameDescriptor();
    virtual ~Ieee80211DisassociationFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211DisassociationFrameDescriptor);

Ieee80211DisassociationFrameDescriptor::Ieee80211DisassociationFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211DisassociationFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211DisassociationFrameDescriptor::~Ieee80211DisassociationFrameDescriptor()
{
}

bool Ieee80211DisassociationFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DisassociationFrame *>(obj)!=NULL;
}

const char *Ieee80211DisassociationFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DisassociationFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211DisassociationFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211DisassociationFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211DisassociationFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211DisassociationFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211DisassociationFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211DisassociationFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211DisassociationFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrame *pp = (Ieee80211DisassociationFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211DisassociationFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrame *pp = (Ieee80211DisassociationFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211DisassociationFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrame *pp = (Ieee80211DisassociationFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211DisassociationFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211DisassociationFrameBody));
        default: return NULL;
    };
}

void *Ieee80211DisassociationFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DisassociationFrame *pp = (Ieee80211DisassociationFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ProbeRequestFrame);

Ieee80211ProbeRequestFrame::Ieee80211ProbeRequestFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_PROBEREQUEST);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ProbeRequestFrame::Ieee80211ProbeRequestFrame(const Ieee80211ProbeRequestFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211ProbeRequestFrame::~Ieee80211ProbeRequestFrame()
{
}

Ieee80211ProbeRequestFrame& Ieee80211ProbeRequestFrame::operator=(const Ieee80211ProbeRequestFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ProbeRequestFrame::copy(const Ieee80211ProbeRequestFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ProbeRequestFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ProbeRequestFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ProbeRequestFrameBody& Ieee80211ProbeRequestFrame::getBody()
{
    return body_var;
}

void Ieee80211ProbeRequestFrame::setBody(const Ieee80211ProbeRequestFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ProbeRequestFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ProbeRequestFrameDescriptor();
    virtual ~Ieee80211ProbeRequestFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ProbeRequestFrameDescriptor);

Ieee80211ProbeRequestFrameDescriptor::Ieee80211ProbeRequestFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ProbeRequestFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211ProbeRequestFrameDescriptor::~Ieee80211ProbeRequestFrameDescriptor()
{
}

bool Ieee80211ProbeRequestFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ProbeRequestFrame *>(obj)!=NULL;
}

const char *Ieee80211ProbeRequestFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ProbeRequestFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ProbeRequestFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ProbeRequestFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211ProbeRequestFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ProbeRequestFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211ProbeRequestFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ProbeRequestFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ProbeRequestFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrame *pp = (Ieee80211ProbeRequestFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ProbeRequestFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrame *pp = (Ieee80211ProbeRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ProbeRequestFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrame *pp = (Ieee80211ProbeRequestFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ProbeRequestFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211ProbeRequestFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ProbeRequestFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeRequestFrame *pp = (Ieee80211ProbeRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211AssociationRequestFrame);

Ieee80211AssociationRequestFrame::Ieee80211AssociationRequestFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_ASSOCIATIONREQUEST);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211AssociationRequestFrame::Ieee80211AssociationRequestFrame(const Ieee80211AssociationRequestFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211AssociationRequestFrame::~Ieee80211AssociationRequestFrame()
{
}

Ieee80211AssociationRequestFrame& Ieee80211AssociationRequestFrame::operator=(const Ieee80211AssociationRequestFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211AssociationRequestFrame::copy(const Ieee80211AssociationRequestFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211AssociationRequestFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211AssociationRequestFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211AssociationRequestFrameBody& Ieee80211AssociationRequestFrame::getBody()
{
    return body_var;
}

void Ieee80211AssociationRequestFrame::setBody(const Ieee80211AssociationRequestFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211AssociationRequestFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AssociationRequestFrameDescriptor();
    virtual ~Ieee80211AssociationRequestFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211AssociationRequestFrameDescriptor);

Ieee80211AssociationRequestFrameDescriptor::Ieee80211AssociationRequestFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211AssociationRequestFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211AssociationRequestFrameDescriptor::~Ieee80211AssociationRequestFrameDescriptor()
{
}

bool Ieee80211AssociationRequestFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AssociationRequestFrame *>(obj)!=NULL;
}

const char *Ieee80211AssociationRequestFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AssociationRequestFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211AssociationRequestFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211AssociationRequestFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211AssociationRequestFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211AssociationRequestFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211AssociationRequestFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211AssociationRequestFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211AssociationRequestFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrame *pp = (Ieee80211AssociationRequestFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211AssociationRequestFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrame *pp = (Ieee80211AssociationRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211AssociationRequestFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrame *pp = (Ieee80211AssociationRequestFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211AssociationRequestFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211AssociationRequestFrameBody));
        default: return NULL;
    };
}

void *Ieee80211AssociationRequestFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationRequestFrame *pp = (Ieee80211AssociationRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ReassociationRequestFrame);

Ieee80211ReassociationRequestFrame::Ieee80211ReassociationRequestFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_REASSOCIATIONREQUEST);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ReassociationRequestFrame::Ieee80211ReassociationRequestFrame(const Ieee80211ReassociationRequestFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211ReassociationRequestFrame::~Ieee80211ReassociationRequestFrame()
{
}

Ieee80211ReassociationRequestFrame& Ieee80211ReassociationRequestFrame::operator=(const Ieee80211ReassociationRequestFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ReassociationRequestFrame::copy(const Ieee80211ReassociationRequestFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ReassociationRequestFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ReassociationRequestFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ReassociationRequestFrameBody& Ieee80211ReassociationRequestFrame::getBody()
{
    return body_var;
}

void Ieee80211ReassociationRequestFrame::setBody(const Ieee80211ReassociationRequestFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ReassociationRequestFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ReassociationRequestFrameDescriptor();
    virtual ~Ieee80211ReassociationRequestFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ReassociationRequestFrameDescriptor);

Ieee80211ReassociationRequestFrameDescriptor::Ieee80211ReassociationRequestFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ReassociationRequestFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211ReassociationRequestFrameDescriptor::~Ieee80211ReassociationRequestFrameDescriptor()
{
}

bool Ieee80211ReassociationRequestFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ReassociationRequestFrame *>(obj)!=NULL;
}

const char *Ieee80211ReassociationRequestFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ReassociationRequestFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ReassociationRequestFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ReassociationRequestFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211ReassociationRequestFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ReassociationRequestFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211ReassociationRequestFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ReassociationRequestFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ReassociationRequestFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrame *pp = (Ieee80211ReassociationRequestFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ReassociationRequestFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrame *pp = (Ieee80211ReassociationRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ReassociationRequestFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrame *pp = (Ieee80211ReassociationRequestFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ReassociationRequestFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211ReassociationRequestFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ReassociationRequestFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationRequestFrame *pp = (Ieee80211ReassociationRequestFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211AssociationResponseFrame);

Ieee80211AssociationResponseFrame::Ieee80211AssociationResponseFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_ASSOCIATIONRESPONSE);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211AssociationResponseFrame::Ieee80211AssociationResponseFrame(const Ieee80211AssociationResponseFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211AssociationResponseFrame::~Ieee80211AssociationResponseFrame()
{
}

Ieee80211AssociationResponseFrame& Ieee80211AssociationResponseFrame::operator=(const Ieee80211AssociationResponseFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211AssociationResponseFrame::copy(const Ieee80211AssociationResponseFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211AssociationResponseFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211AssociationResponseFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211AssociationResponseFrameBody& Ieee80211AssociationResponseFrame::getBody()
{
    return body_var;
}

void Ieee80211AssociationResponseFrame::setBody(const Ieee80211AssociationResponseFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211AssociationResponseFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211AssociationResponseFrameDescriptor();
    virtual ~Ieee80211AssociationResponseFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211AssociationResponseFrameDescriptor);

Ieee80211AssociationResponseFrameDescriptor::Ieee80211AssociationResponseFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211AssociationResponseFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211AssociationResponseFrameDescriptor::~Ieee80211AssociationResponseFrameDescriptor()
{
}

bool Ieee80211AssociationResponseFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211AssociationResponseFrame *>(obj)!=NULL;
}

const char *Ieee80211AssociationResponseFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211AssociationResponseFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211AssociationResponseFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211AssociationResponseFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211AssociationResponseFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211AssociationResponseFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211AssociationResponseFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211AssociationResponseFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211AssociationResponseFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrame *pp = (Ieee80211AssociationResponseFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211AssociationResponseFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrame *pp = (Ieee80211AssociationResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211AssociationResponseFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrame *pp = (Ieee80211AssociationResponseFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211AssociationResponseFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211AssociationResponseFrameBody));
        default: return NULL;
    };
}

void *Ieee80211AssociationResponseFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211AssociationResponseFrame *pp = (Ieee80211AssociationResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ReassociationResponseFrame);

Ieee80211ReassociationResponseFrame::Ieee80211ReassociationResponseFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_REASSOCIATIONRESPONSE);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ReassociationResponseFrame::Ieee80211ReassociationResponseFrame(const Ieee80211ReassociationResponseFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211ReassociationResponseFrame::~Ieee80211ReassociationResponseFrame()
{
}

Ieee80211ReassociationResponseFrame& Ieee80211ReassociationResponseFrame::operator=(const Ieee80211ReassociationResponseFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ReassociationResponseFrame::copy(const Ieee80211ReassociationResponseFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ReassociationResponseFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ReassociationResponseFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ReassociationResponseFrameBody& Ieee80211ReassociationResponseFrame::getBody()
{
    return body_var;
}

void Ieee80211ReassociationResponseFrame::setBody(const Ieee80211ReassociationResponseFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ReassociationResponseFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ReassociationResponseFrameDescriptor();
    virtual ~Ieee80211ReassociationResponseFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ReassociationResponseFrameDescriptor);

Ieee80211ReassociationResponseFrameDescriptor::Ieee80211ReassociationResponseFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ReassociationResponseFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211ReassociationResponseFrameDescriptor::~Ieee80211ReassociationResponseFrameDescriptor()
{
}

bool Ieee80211ReassociationResponseFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ReassociationResponseFrame *>(obj)!=NULL;
}

const char *Ieee80211ReassociationResponseFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ReassociationResponseFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ReassociationResponseFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ReassociationResponseFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211ReassociationResponseFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ReassociationResponseFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211ReassociationResponseFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ReassociationResponseFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ReassociationResponseFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrame *pp = (Ieee80211ReassociationResponseFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ReassociationResponseFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrame *pp = (Ieee80211ReassociationResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ReassociationResponseFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrame *pp = (Ieee80211ReassociationResponseFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ReassociationResponseFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211ReassociationResponseFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ReassociationResponseFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ReassociationResponseFrame *pp = (Ieee80211ReassociationResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211BeaconFrame);

Ieee80211BeaconFrame::Ieee80211BeaconFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_BEACON);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211BeaconFrame::Ieee80211BeaconFrame(const Ieee80211BeaconFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211BeaconFrame::~Ieee80211BeaconFrame()
{
}

Ieee80211BeaconFrame& Ieee80211BeaconFrame::operator=(const Ieee80211BeaconFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211BeaconFrame::copy(const Ieee80211BeaconFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211BeaconFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211BeaconFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211BeaconFrameBody& Ieee80211BeaconFrame::getBody()
{
    return body_var;
}

void Ieee80211BeaconFrame::setBody(const Ieee80211BeaconFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211BeaconFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211BeaconFrameDescriptor();
    virtual ~Ieee80211BeaconFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211BeaconFrameDescriptor);

Ieee80211BeaconFrameDescriptor::Ieee80211BeaconFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211BeaconFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211BeaconFrameDescriptor::~Ieee80211BeaconFrameDescriptor()
{
}

bool Ieee80211BeaconFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211BeaconFrame *>(obj)!=NULL;
}

const char *Ieee80211BeaconFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211BeaconFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211BeaconFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211BeaconFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211BeaconFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211BeaconFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211BeaconFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211BeaconFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211BeaconFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrame *pp = (Ieee80211BeaconFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211BeaconFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrame *pp = (Ieee80211BeaconFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211BeaconFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrame *pp = (Ieee80211BeaconFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211BeaconFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211BeaconFrameBody));
        default: return NULL;
    };
}

void *Ieee80211BeaconFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BeaconFrame *pp = (Ieee80211BeaconFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ProbeResponseFrame);

Ieee80211ProbeResponseFrame::Ieee80211ProbeResponseFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_PROBERESPONSE);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ProbeResponseFrame::Ieee80211ProbeResponseFrame(const Ieee80211ProbeResponseFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211ProbeResponseFrame::~Ieee80211ProbeResponseFrame()
{
}

Ieee80211ProbeResponseFrame& Ieee80211ProbeResponseFrame::operator=(const Ieee80211ProbeResponseFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ProbeResponseFrame::copy(const Ieee80211ProbeResponseFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ProbeResponseFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ProbeResponseFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ProbeResponseFrameBody& Ieee80211ProbeResponseFrame::getBody()
{
    return body_var;
}

void Ieee80211ProbeResponseFrame::setBody(const Ieee80211ProbeResponseFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ProbeResponseFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ProbeResponseFrameDescriptor();
    virtual ~Ieee80211ProbeResponseFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ProbeResponseFrameDescriptor);

Ieee80211ProbeResponseFrameDescriptor::Ieee80211ProbeResponseFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ProbeResponseFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211ProbeResponseFrameDescriptor::~Ieee80211ProbeResponseFrameDescriptor()
{
}

bool Ieee80211ProbeResponseFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ProbeResponseFrame *>(obj)!=NULL;
}

const char *Ieee80211ProbeResponseFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ProbeResponseFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ProbeResponseFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ProbeResponseFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211ProbeResponseFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ProbeResponseFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211ProbeResponseFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ProbeResponseFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ProbeResponseFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrame *pp = (Ieee80211ProbeResponseFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ProbeResponseFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrame *pp = (Ieee80211ProbeResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ProbeResponseFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrame *pp = (Ieee80211ProbeResponseFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ProbeResponseFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211ProbeResponseFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ProbeResponseFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ProbeResponseFrame *pp = (Ieee80211ProbeResponseFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionFrame);

Ieee80211ActionFrame::Ieee80211ActionFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_ACTION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ActionFrame::Ieee80211ActionFrame(const Ieee80211ActionFrame& other) : ::inet::ieee80211::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211ActionFrame::~Ieee80211ActionFrame()
{
}

Ieee80211ActionFrame& Ieee80211ActionFrame::operator=(const Ieee80211ActionFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionFrame::copy(const Ieee80211ActionFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ActionFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ActionFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211ManagementFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ActionFrameBody& Ieee80211ActionFrame::getBody()
{
    return body_var;
}

void Ieee80211ActionFrame::setBody(const Ieee80211ActionFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ActionFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionFrameDescriptor();
    virtual ~Ieee80211ActionFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionFrameDescriptor);

Ieee80211ActionFrameDescriptor::Ieee80211ActionFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ActionFrame", "inet::ieee80211::Ieee80211ManagementFrame")
{
}

Ieee80211ActionFrameDescriptor::~Ieee80211ActionFrameDescriptor()
{
}

bool Ieee80211ActionFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionFrame *>(obj)!=NULL;
}

const char *Ieee80211ActionFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ActionFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ActionFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "body",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211ActionFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211ActionFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionFrame *pp = (Ieee80211ActionFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionFrame *pp = (Ieee80211ActionFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ActionFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionFrame *pp = (Ieee80211ActionFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ActionFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211ActionFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ActionFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionFrame *pp = (Ieee80211ActionFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

} // namespace ieee80211
} // namespace inet

