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

Ieee80211CapabilityInformationDescriptor::Ieee80211CapabilityInformationDescriptor() : cClassDescriptor("Ieee80211CapabilityInformation", "")
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

Ieee80211HandoverParametersDescriptor::Ieee80211HandoverParametersDescriptor() : cClassDescriptor("Ieee80211HandoverParameters", "")
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
    cEnum *e = cEnum::find("Ieee80211ReasonCode");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee80211ReasonCode"));
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
    cEnum *e = cEnum::find("Ieee80211StatusCode");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee80211StatusCode"));
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
    cEnum *e = cEnum::find("Ieee80211HWMPCode");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee80211HWMPCode"));
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

Ieee80211SupportedRatesElementDescriptor::Ieee80211SupportedRatesElementDescriptor() : cClassDescriptor("Ieee80211SupportedRatesElement", "")
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

Ieee80211FrameBodyDescriptor::Ieee80211FrameBodyDescriptor() : cClassDescriptor("Ieee80211FrameBody", "cObject")
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

Ieee80211AuthenticationFrameBody::Ieee80211AuthenticationFrameBody() : ::Ieee80211FrameBody()
{
    this->setBodyLength(6);

    this->sequenceNumber_var = 0;
    this->statusCode_var = 0;
    this->isLast_var = 0;
}

Ieee80211AuthenticationFrameBody::Ieee80211AuthenticationFrameBody(const Ieee80211AuthenticationFrameBody& other) : ::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211AuthenticationFrameBody::~Ieee80211AuthenticationFrameBody()
{
}

Ieee80211AuthenticationFrameBody& Ieee80211AuthenticationFrameBody::operator=(const Ieee80211AuthenticationFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211FrameBody::operator=(other);
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
    ::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->sequenceNumber_var);
    doPacking(b,this->statusCode_var);
    doPacking(b,this->isLast_var);
}

void Ieee80211AuthenticationFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimUnpack(b);
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

Ieee80211AuthenticationFrameBodyDescriptor::Ieee80211AuthenticationFrameBodyDescriptor() : cClassDescriptor("Ieee80211AuthenticationFrameBody", "Ieee80211FrameBody")
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
            if (!strcmp(propertyname,"enum")) return "Ieee80211StatusCode";
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

Ieee80211DeauthenticationFrameBody::Ieee80211DeauthenticationFrameBody() : ::Ieee80211FrameBody()
{
    this->setBodyLength(2);

    this->reasonCode_var = 0;
}

Ieee80211DeauthenticationFrameBody::Ieee80211DeauthenticationFrameBody(const Ieee80211DeauthenticationFrameBody& other) : ::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211DeauthenticationFrameBody::~Ieee80211DeauthenticationFrameBody()
{
}

Ieee80211DeauthenticationFrameBody& Ieee80211DeauthenticationFrameBody::operator=(const Ieee80211DeauthenticationFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DeauthenticationFrameBody::copy(const Ieee80211DeauthenticationFrameBody& other)
{
    this->reasonCode_var = other.reasonCode_var;
}

void Ieee80211DeauthenticationFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->reasonCode_var);
}

void Ieee80211DeauthenticationFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimUnpack(b);
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

Ieee80211DeauthenticationFrameBodyDescriptor::Ieee80211DeauthenticationFrameBodyDescriptor() : cClassDescriptor("Ieee80211DeauthenticationFrameBody", "Ieee80211FrameBody")
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
            if (!strcmp(propertyname,"enum")) return "Ieee80211ReasonCode";
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

Ieee80211DisassociationFrameBody::Ieee80211DisassociationFrameBody() : ::Ieee80211FrameBody()
{
    this->setBodyLength(2);

    this->reasonCode_var = 0;
}

Ieee80211DisassociationFrameBody::Ieee80211DisassociationFrameBody(const Ieee80211DisassociationFrameBody& other) : ::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211DisassociationFrameBody::~Ieee80211DisassociationFrameBody()
{
}

Ieee80211DisassociationFrameBody& Ieee80211DisassociationFrameBody::operator=(const Ieee80211DisassociationFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DisassociationFrameBody::copy(const Ieee80211DisassociationFrameBody& other)
{
    this->reasonCode_var = other.reasonCode_var;
}

void Ieee80211DisassociationFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->reasonCode_var);
}

void Ieee80211DisassociationFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimUnpack(b);
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

Ieee80211DisassociationFrameBodyDescriptor::Ieee80211DisassociationFrameBodyDescriptor() : cClassDescriptor("Ieee80211DisassociationFrameBody", "Ieee80211FrameBody")
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
            if (!strcmp(propertyname,"enum")) return "Ieee80211ReasonCode";
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

Ieee80211ProbeRequestFrameBody::Ieee80211ProbeRequestFrameBody() : ::Ieee80211FrameBody()
{
    this->setBodyLength(12);

    this->SSID_var = 0;
}

Ieee80211ProbeRequestFrameBody::Ieee80211ProbeRequestFrameBody(const Ieee80211ProbeRequestFrameBody& other) : ::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211ProbeRequestFrameBody::~Ieee80211ProbeRequestFrameBody()
{
}

Ieee80211ProbeRequestFrameBody& Ieee80211ProbeRequestFrameBody::operator=(const Ieee80211ProbeRequestFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211FrameBody::operator=(other);
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
    ::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->SSID_var);
    doPacking(b,this->supportedRates_var);
}

void Ieee80211ProbeRequestFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimUnpack(b);
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

Ieee80211ProbeRequestFrameBodyDescriptor::Ieee80211ProbeRequestFrameBodyDescriptor() : cClassDescriptor("Ieee80211ProbeRequestFrameBody", "Ieee80211FrameBody")
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

Ieee80211AssociationRequestFrameBody::Ieee80211AssociationRequestFrameBody() : ::Ieee80211FrameBody()
{
    this->setBodyLength(16);

    this->SSID_var = 0;
}

Ieee80211AssociationRequestFrameBody::Ieee80211AssociationRequestFrameBody(const Ieee80211AssociationRequestFrameBody& other) : ::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211AssociationRequestFrameBody::~Ieee80211AssociationRequestFrameBody()
{
}

Ieee80211AssociationRequestFrameBody& Ieee80211AssociationRequestFrameBody::operator=(const Ieee80211AssociationRequestFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211FrameBody::operator=(other);
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
    ::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->SSID_var);
    doPacking(b,this->supportedRates_var);
}

void Ieee80211AssociationRequestFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimUnpack(b);
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

Ieee80211AssociationRequestFrameBodyDescriptor::Ieee80211AssociationRequestFrameBodyDescriptor() : cClassDescriptor("Ieee80211AssociationRequestFrameBody", "Ieee80211FrameBody")
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

Ieee80211ReassociationRequestFrameBody::Ieee80211ReassociationRequestFrameBody() : ::Ieee80211AssociationRequestFrameBody()
{
    this->setBodyLength(26);

}

Ieee80211ReassociationRequestFrameBody::Ieee80211ReassociationRequestFrameBody(const Ieee80211ReassociationRequestFrameBody& other) : ::Ieee80211AssociationRequestFrameBody(other)
{
    copy(other);
}

Ieee80211ReassociationRequestFrameBody::~Ieee80211ReassociationRequestFrameBody()
{
}

Ieee80211ReassociationRequestFrameBody& Ieee80211ReassociationRequestFrameBody::operator=(const Ieee80211ReassociationRequestFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211AssociationRequestFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ReassociationRequestFrameBody::copy(const Ieee80211ReassociationRequestFrameBody& other)
{
    this->currentAP_var = other.currentAP_var;
}

void Ieee80211ReassociationRequestFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211AssociationRequestFrameBody::parsimPack(b);
    doPacking(b,this->currentAP_var);
}

void Ieee80211ReassociationRequestFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211AssociationRequestFrameBody::parsimUnpack(b);
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

Ieee80211ReassociationRequestFrameBodyDescriptor::Ieee80211ReassociationRequestFrameBodyDescriptor() : cClassDescriptor("Ieee80211ReassociationRequestFrameBody", "Ieee80211AssociationRequestFrameBody")
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

Ieee80211AssociationResponseFrameBody::Ieee80211AssociationResponseFrameBody() : ::Ieee80211FrameBody()
{
    this->setBodyLength(26);

    this->statusCode_var = 0;
    this->aid_var = 0;
}

Ieee80211AssociationResponseFrameBody::Ieee80211AssociationResponseFrameBody(const Ieee80211AssociationResponseFrameBody& other) : ::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211AssociationResponseFrameBody::~Ieee80211AssociationResponseFrameBody()
{
}

Ieee80211AssociationResponseFrameBody& Ieee80211AssociationResponseFrameBody::operator=(const Ieee80211AssociationResponseFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211FrameBody::operator=(other);
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
    ::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->statusCode_var);
    doPacking(b,this->aid_var);
    doPacking(b,this->supportedRates_var);
}

void Ieee80211AssociationResponseFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimUnpack(b);
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

Ieee80211AssociationResponseFrameBodyDescriptor::Ieee80211AssociationResponseFrameBodyDescriptor() : cClassDescriptor("Ieee80211AssociationResponseFrameBody", "Ieee80211FrameBody")
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
            if (!strcmp(propertyname,"enum")) return "Ieee80211StatusCode";
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

Ieee80211ReassociationResponseFrameBody::Ieee80211ReassociationResponseFrameBody() : ::Ieee80211AssociationResponseFrameBody()
{
}

Ieee80211ReassociationResponseFrameBody::Ieee80211ReassociationResponseFrameBody(const Ieee80211ReassociationResponseFrameBody& other) : ::Ieee80211AssociationResponseFrameBody(other)
{
    copy(other);
}

Ieee80211ReassociationResponseFrameBody::~Ieee80211ReassociationResponseFrameBody()
{
}

Ieee80211ReassociationResponseFrameBody& Ieee80211ReassociationResponseFrameBody::operator=(const Ieee80211ReassociationResponseFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211AssociationResponseFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ReassociationResponseFrameBody::copy(const Ieee80211ReassociationResponseFrameBody& other)
{
}

void Ieee80211ReassociationResponseFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211AssociationResponseFrameBody::parsimPack(b);
}

void Ieee80211ReassociationResponseFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211AssociationResponseFrameBody::parsimUnpack(b);
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

Ieee80211ReassociationResponseFrameBodyDescriptor::Ieee80211ReassociationResponseFrameBodyDescriptor() : cClassDescriptor("Ieee80211ReassociationResponseFrameBody", "Ieee80211AssociationResponseFrameBody")
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

Ieee80211BeaconFrameBody::Ieee80211BeaconFrameBody() : ::Ieee80211FrameBody()
{
    this->setBodyLength(50);

    this->SSID_var = 0;
    this->beaconInterval_var = 0;
    this->channelNumber_var = 0;
}

Ieee80211BeaconFrameBody::Ieee80211BeaconFrameBody(const Ieee80211BeaconFrameBody& other) : ::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211BeaconFrameBody::~Ieee80211BeaconFrameBody()
{
}

Ieee80211BeaconFrameBody& Ieee80211BeaconFrameBody::operator=(const Ieee80211BeaconFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211FrameBody::operator=(other);
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
    ::Ieee80211FrameBody::parsimPack(b);
    doPacking(b,this->SSID_var);
    doPacking(b,this->supportedRates_var);
    doPacking(b,this->beaconInterval_var);
    doPacking(b,this->channelNumber_var);
    doPacking(b,this->handoverParameters_var);
}

void Ieee80211BeaconFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimUnpack(b);
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

Ieee80211BeaconFrameBodyDescriptor::Ieee80211BeaconFrameBodyDescriptor() : cClassDescriptor("Ieee80211BeaconFrameBody", "Ieee80211FrameBody")
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

Ieee80211ProbeResponseFrameBody::Ieee80211ProbeResponseFrameBody() : ::Ieee80211BeaconFrameBody()
{
}

Ieee80211ProbeResponseFrameBody::Ieee80211ProbeResponseFrameBody(const Ieee80211ProbeResponseFrameBody& other) : ::Ieee80211BeaconFrameBody(other)
{
    copy(other);
}

Ieee80211ProbeResponseFrameBody::~Ieee80211ProbeResponseFrameBody()
{
}

Ieee80211ProbeResponseFrameBody& Ieee80211ProbeResponseFrameBody::operator=(const Ieee80211ProbeResponseFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211BeaconFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ProbeResponseFrameBody::copy(const Ieee80211ProbeResponseFrameBody& other)
{
}

void Ieee80211ProbeResponseFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211BeaconFrameBody::parsimPack(b);
}

void Ieee80211ProbeResponseFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211BeaconFrameBody::parsimUnpack(b);
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

Ieee80211ProbeResponseFrameBodyDescriptor::Ieee80211ProbeResponseFrameBodyDescriptor() : cClassDescriptor("Ieee80211ProbeResponseFrameBody", "Ieee80211BeaconFrameBody")
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

Ieee80211ActionFrameBody::Ieee80211ActionFrameBody() : ::Ieee80211FrameBody()
{
}

Ieee80211ActionFrameBody::Ieee80211ActionFrameBody(const Ieee80211ActionFrameBody& other) : ::Ieee80211FrameBody(other)
{
    copy(other);
}

Ieee80211ActionFrameBody::~Ieee80211ActionFrameBody()
{
}

Ieee80211ActionFrameBody& Ieee80211ActionFrameBody::operator=(const Ieee80211ActionFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211FrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionFrameBody::copy(const Ieee80211ActionFrameBody& other)
{
}

void Ieee80211ActionFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimPack(b);
}

void Ieee80211ActionFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211FrameBody::parsimUnpack(b);
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

Ieee80211ActionFrameBodyDescriptor::Ieee80211ActionFrameBodyDescriptor() : cClassDescriptor("Ieee80211ActionFrameBody", "Ieee80211FrameBody")
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

Register_Class(Ieee80211ActionHWMPFrameBody);

Ieee80211ActionHWMPFrameBody::Ieee80211ActionHWMPFrameBody() : ::Ieee80211ActionFrameBody()
{
    this->id_var = 0;
    this->flags_var = 0;
    this->hopsCount_var = 0;
    this->TTL_var = 32;
}

Ieee80211ActionHWMPFrameBody::Ieee80211ActionHWMPFrameBody(const Ieee80211ActionHWMPFrameBody& other) : ::Ieee80211ActionFrameBody(other)
{
    copy(other);
}

Ieee80211ActionHWMPFrameBody::~Ieee80211ActionHWMPFrameBody()
{
}

Ieee80211ActionHWMPFrameBody& Ieee80211ActionHWMPFrameBody::operator=(const Ieee80211ActionHWMPFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionHWMPFrameBody::copy(const Ieee80211ActionHWMPFrameBody& other)
{
    this->id_var = other.id_var;
    this->flags_var = other.flags_var;
    this->hopsCount_var = other.hopsCount_var;
    this->TTL_var = other.TTL_var;
}

void Ieee80211ActionHWMPFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionFrameBody::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->flags_var);
    doPacking(b,this->hopsCount_var);
    doPacking(b,this->TTL_var);
}

void Ieee80211ActionHWMPFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionFrameBody::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->flags_var);
    doUnpacking(b,this->hopsCount_var);
    doUnpacking(b,this->TTL_var);
}

int Ieee80211ActionHWMPFrameBody::getId() const
{
    return id_var;
}

void Ieee80211ActionHWMPFrameBody::setId(int id)
{
    this->id_var = id;
}

unsigned char Ieee80211ActionHWMPFrameBody::getFlags() const
{
    return flags_var;
}

void Ieee80211ActionHWMPFrameBody::setFlags(unsigned char flags)
{
    this->flags_var = flags;
}

unsigned char Ieee80211ActionHWMPFrameBody::getHopsCount() const
{
    return hopsCount_var;
}

void Ieee80211ActionHWMPFrameBody::setHopsCount(unsigned char hopsCount)
{
    this->hopsCount_var = hopsCount;
}

unsigned char Ieee80211ActionHWMPFrameBody::getTTL() const
{
    return TTL_var;
}

void Ieee80211ActionHWMPFrameBody::setTTL(unsigned char TTL)
{
    this->TTL_var = TTL;
}

class Ieee80211ActionHWMPFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionHWMPFrameBodyDescriptor();
    virtual ~Ieee80211ActionHWMPFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionHWMPFrameBodyDescriptor);

Ieee80211ActionHWMPFrameBodyDescriptor::Ieee80211ActionHWMPFrameBodyDescriptor() : cClassDescriptor("Ieee80211ActionHWMPFrameBody", "Ieee80211ActionFrameBody")
{
}

Ieee80211ActionHWMPFrameBodyDescriptor::~Ieee80211ActionHWMPFrameBodyDescriptor()
{
}

bool Ieee80211ActionHWMPFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionHWMPFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ActionHWMPFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionHWMPFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int Ieee80211ActionHWMPFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ActionHWMPFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "id",
        "flags",
        "hopsCount",
        "TTL",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int Ieee80211ActionHWMPFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "flags")==0) return base+1;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopsCount")==0) return base+2;
    if (fieldName[0]=='T' && strcmp(fieldName, "TTL")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionHWMPFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "unsigned char",
        "unsigned char",
        "unsigned char",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionHWMPFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "Ieee80211HWMPCode";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211ActionHWMPFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionHWMPFrameBody *pp = (Ieee80211ActionHWMPFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionHWMPFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionHWMPFrameBody *pp = (Ieee80211ActionHWMPFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getId());
        case 1: return ulong2string(pp->getFlags());
        case 2: return ulong2string(pp->getHopsCount());
        case 3: return ulong2string(pp->getTTL());
        default: return "";
    }
}

bool Ieee80211ActionHWMPFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionHWMPFrameBody *pp = (Ieee80211ActionHWMPFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setFlags(string2ulong(value)); return true;
        case 2: pp->setHopsCount(string2ulong(value)); return true;
        case 3: pp->setTTL(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211ActionHWMPFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211ActionHWMPFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionHWMPFrameBody *pp = (Ieee80211ActionHWMPFrameBody *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

PREQElem::PREQElem()
{
    TO = true;
    USN = false;
    targetSeqNumber = 0;
}

void doPacking(cCommBuffer *b, PREQElem& a)
{
    doPacking(b,a.TO);
    doPacking(b,a.USN);
    doPacking(b,a.targetAddress);
    doPacking(b,a.targetSeqNumber);
}

void doUnpacking(cCommBuffer *b, PREQElem& a)
{
    doUnpacking(b,a.TO);
    doUnpacking(b,a.USN);
    doUnpacking(b,a.targetAddress);
    doUnpacking(b,a.targetSeqNumber);
}

class PREQElemDescriptor : public cClassDescriptor
{
  public:
    PREQElemDescriptor();
    virtual ~PREQElemDescriptor();

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

Register_ClassDescriptor(PREQElemDescriptor);

PREQElemDescriptor::PREQElemDescriptor() : cClassDescriptor("PREQElem", "")
{
}

PREQElemDescriptor::~PREQElemDescriptor()
{
}

bool PREQElemDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PREQElem *>(obj)!=NULL;
}

const char *PREQElemDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PREQElemDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PREQElemDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PREQElemDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "TO",
        "USN",
        "targetAddress",
        "targetSeqNumber",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int PREQElemDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='T' && strcmp(fieldName, "TO")==0) return base+0;
    if (fieldName[0]=='U' && strcmp(fieldName, "USN")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetAddress")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetSeqNumber")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PREQElemDescriptor::getFieldTypeString(void *object, int field) const
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
        "MACAddress",
        "unsigned int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *PREQElemDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PREQElemDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PREQElem *pp = (PREQElem *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PREQElemDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PREQElem *pp = (PREQElem *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->TO);
        case 1: return bool2string(pp->USN);
        case 2: {std::stringstream out; out << pp->targetAddress; return out.str();}
        case 3: return ulong2string(pp->targetSeqNumber);
        default: return "";
    }
}

bool PREQElemDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PREQElem *pp = (PREQElem *)object; (void)pp;
    switch (field) {
        case 0: pp->TO = string2bool(value); return true;
        case 1: pp->USN = string2bool(value); return true;
        case 3: pp->targetSeqNumber = string2ulong(value); return true;
        default: return false;
    }
}

const char *PREQElemDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *PREQElemDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PREQElem *pp = (PREQElem *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->targetAddress); break;
        default: return NULL;
    }
}

PERRElem::PERRElem()
{
    RC = 0;
    AE = 0;
    destSeqNumber = 0;
    destExternalAddress = 0;
    reasonCode = 0;
}

void doPacking(cCommBuffer *b, PERRElem& a)
{
    doPacking(b,a.RC);
    doPacking(b,a.AE);
    doPacking(b,a.destAddress);
    doPacking(b,a.destSeqNumber);
    doPacking(b,a.destExternalAddress);
    doPacking(b,a.reasonCode);
}

void doUnpacking(cCommBuffer *b, PERRElem& a)
{
    doUnpacking(b,a.RC);
    doUnpacking(b,a.AE);
    doUnpacking(b,a.destAddress);
    doUnpacking(b,a.destSeqNumber);
    doUnpacking(b,a.destExternalAddress);
    doUnpacking(b,a.reasonCode);
}

class PERRElemDescriptor : public cClassDescriptor
{
  public:
    PERRElemDescriptor();
    virtual ~PERRElemDescriptor();

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

Register_ClassDescriptor(PERRElemDescriptor);

PERRElemDescriptor::PERRElemDescriptor() : cClassDescriptor("PERRElem", "")
{
}

PERRElemDescriptor::~PERRElemDescriptor()
{
}

bool PERRElemDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PERRElem *>(obj)!=NULL;
}

const char *PERRElemDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PERRElemDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int PERRElemDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *PERRElemDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "RC",
        "AE",
        "destAddress",
        "destSeqNumber",
        "destExternalAddress",
        "reasonCode",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int PERRElemDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='R' && strcmp(fieldName, "RC")==0) return base+0;
    if (fieldName[0]=='A' && strcmp(fieldName, "AE")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddress")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destSeqNumber")==0) return base+3;
    if (fieldName[0]=='d' && strcmp(fieldName, "destExternalAddress")==0) return base+4;
    if (fieldName[0]=='r' && strcmp(fieldName, "reasonCode")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PERRElemDescriptor::getFieldTypeString(void *object, int field) const
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
        "MACAddress",
        "unsigned int",
        "unsigned int",
        "unsigned short",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *PERRElemDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PERRElemDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PERRElem *pp = (PERRElem *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PERRElemDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PERRElem *pp = (PERRElem *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->RC);
        case 1: return bool2string(pp->AE);
        case 2: {std::stringstream out; out << pp->destAddress; return out.str();}
        case 3: return ulong2string(pp->destSeqNumber);
        case 4: return ulong2string(pp->destExternalAddress);
        case 5: return ulong2string(pp->reasonCode);
        default: return "";
    }
}

bool PERRElemDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PERRElem *pp = (PERRElem *)object; (void)pp;
    switch (field) {
        case 0: pp->RC = string2bool(value); return true;
        case 1: pp->AE = string2bool(value); return true;
        case 3: pp->destSeqNumber = string2ulong(value); return true;
        case 4: pp->destExternalAddress = string2ulong(value); return true;
        case 5: pp->reasonCode = string2ulong(value); return true;
        default: return false;
    }
}

const char *PERRElemDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *PERRElemDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PERRElem *pp = (PERRElem *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->destAddress); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionRANNFrameBody);

Ieee80211ActionRANNFrameBody::Ieee80211ActionRANNFrameBody() : ::Ieee80211ActionHWMPFrameBody()
{
    this->setBodyLength(23);
    this->setId(IE11S_RANN);

    this->seqNumber_var = 0;
    this->interval_var = 0;
    this->metric_var = 0;
}

Ieee80211ActionRANNFrameBody::Ieee80211ActionRANNFrameBody(const Ieee80211ActionRANNFrameBody& other) : ::Ieee80211ActionHWMPFrameBody(other)
{
    copy(other);
}

Ieee80211ActionRANNFrameBody::~Ieee80211ActionRANNFrameBody()
{
}

Ieee80211ActionRANNFrameBody& Ieee80211ActionRANNFrameBody::operator=(const Ieee80211ActionRANNFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionHWMPFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionRANNFrameBody::copy(const Ieee80211ActionRANNFrameBody& other)
{
    this->root_var = other.root_var;
    this->seqNumber_var = other.seqNumber_var;
    this->interval_var = other.interval_var;
    this->metric_var = other.metric_var;
}

void Ieee80211ActionRANNFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrameBody::parsimPack(b);
    doPacking(b,this->root_var);
    doPacking(b,this->seqNumber_var);
    doPacking(b,this->interval_var);
    doPacking(b,this->metric_var);
}

void Ieee80211ActionRANNFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrameBody::parsimUnpack(b);
    doUnpacking(b,this->root_var);
    doUnpacking(b,this->seqNumber_var);
    doUnpacking(b,this->interval_var);
    doUnpacking(b,this->metric_var);
}

MACAddress& Ieee80211ActionRANNFrameBody::getRoot()
{
    return root_var;
}

void Ieee80211ActionRANNFrameBody::setRoot(const MACAddress& root)
{
    this->root_var = root;
}

unsigned int Ieee80211ActionRANNFrameBody::getSeqNumber() const
{
    return seqNumber_var;
}

void Ieee80211ActionRANNFrameBody::setSeqNumber(unsigned int seqNumber)
{
    this->seqNumber_var = seqNumber;
}

unsigned int Ieee80211ActionRANNFrameBody::getInterval() const
{
    return interval_var;
}

void Ieee80211ActionRANNFrameBody::setInterval(unsigned int interval)
{
    this->interval_var = interval;
}

unsigned int Ieee80211ActionRANNFrameBody::getMetric() const
{
    return metric_var;
}

void Ieee80211ActionRANNFrameBody::setMetric(unsigned int metric)
{
    this->metric_var = metric;
}

class Ieee80211ActionRANNFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionRANNFrameBodyDescriptor();
    virtual ~Ieee80211ActionRANNFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionRANNFrameBodyDescriptor);

Ieee80211ActionRANNFrameBodyDescriptor::Ieee80211ActionRANNFrameBodyDescriptor() : cClassDescriptor("Ieee80211ActionRANNFrameBody", "Ieee80211ActionHWMPFrameBody")
{
}

Ieee80211ActionRANNFrameBodyDescriptor::~Ieee80211ActionRANNFrameBodyDescriptor()
{
}

bool Ieee80211ActionRANNFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionRANNFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ActionRANNFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionRANNFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int Ieee80211ActionRANNFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ActionRANNFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "root",
        "seqNumber",
        "interval",
        "metric",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int Ieee80211ActionRANNFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "root")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNumber")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "interval")==0) return base+2;
    if (fieldName[0]=='m' && strcmp(fieldName, "metric")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionRANNFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "unsigned int",
        "unsigned int",
        "unsigned int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionRANNFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionRANNFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionRANNFrameBody *pp = (Ieee80211ActionRANNFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionRANNFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionRANNFrameBody *pp = (Ieee80211ActionRANNFrameBody *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRoot(); return out.str();}
        case 1: return ulong2string(pp->getSeqNumber());
        case 2: return ulong2string(pp->getInterval());
        case 3: return ulong2string(pp->getMetric());
        default: return "";
    }
}

bool Ieee80211ActionRANNFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionRANNFrameBody *pp = (Ieee80211ActionRANNFrameBody *)object; (void)pp;
    switch (field) {
        case 1: pp->setSeqNumber(string2ulong(value)); return true;
        case 2: pp->setInterval(string2ulong(value)); return true;
        case 3: pp->setMetric(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211ActionRANNFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211ActionRANNFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionRANNFrameBody *pp = (Ieee80211ActionRANNFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRoot()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionPREQFrameBody);

Ieee80211ActionPREQFrameBody::Ieee80211ActionPREQFrameBody() : ::Ieee80211ActionHWMPFrameBody()
{
    this->setBodyLength(26);
    this->setId(IE11S_PREQ);

    this->pathDiscoveryId_var = 0;
    this->originatorSeqNumber_var = 0;
    this->lifeTime_var = 0;
    this->metric_var = 0;
    this->targetCount_var = 0;
    preqElem_arraysize = 0;
    this->preqElem_var = 0;
}

Ieee80211ActionPREQFrameBody::Ieee80211ActionPREQFrameBody(const Ieee80211ActionPREQFrameBody& other) : ::Ieee80211ActionHWMPFrameBody(other)
{
    preqElem_arraysize = 0;
    this->preqElem_var = 0;
    copy(other);
}

Ieee80211ActionPREQFrameBody::~Ieee80211ActionPREQFrameBody()
{
    delete [] preqElem_var;
}

Ieee80211ActionPREQFrameBody& Ieee80211ActionPREQFrameBody::operator=(const Ieee80211ActionPREQFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionHWMPFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionPREQFrameBody::copy(const Ieee80211ActionPREQFrameBody& other)
{
    this->pathDiscoveryId_var = other.pathDiscoveryId_var;
    this->originator_var = other.originator_var;
    this->originatorSeqNumber_var = other.originatorSeqNumber_var;
    this->originatorExternalAddr_var = other.originatorExternalAddr_var;
    this->lifeTime_var = other.lifeTime_var;
    this->metric_var = other.metric_var;
    this->targetCount_var = other.targetCount_var;
    delete [] this->preqElem_var;
    this->preqElem_var = (other.preqElem_arraysize==0) ? NULL : new PREQElem[other.preqElem_arraysize];
    preqElem_arraysize = other.preqElem_arraysize;
    for (unsigned int i=0; i<preqElem_arraysize; i++)
        this->preqElem_var[i] = other.preqElem_var[i];
}

void Ieee80211ActionPREQFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrameBody::parsimPack(b);
    doPacking(b,this->pathDiscoveryId_var);
    doPacking(b,this->originator_var);
    doPacking(b,this->originatorSeqNumber_var);
    doPacking(b,this->originatorExternalAddr_var);
    doPacking(b,this->lifeTime_var);
    doPacking(b,this->metric_var);
    doPacking(b,this->targetCount_var);
    b->pack(preqElem_arraysize);
    doPacking(b,this->preqElem_var,preqElem_arraysize);
}

void Ieee80211ActionPREQFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrameBody::parsimUnpack(b);
    doUnpacking(b,this->pathDiscoveryId_var);
    doUnpacking(b,this->originator_var);
    doUnpacking(b,this->originatorSeqNumber_var);
    doUnpacking(b,this->originatorExternalAddr_var);
    doUnpacking(b,this->lifeTime_var);
    doUnpacking(b,this->metric_var);
    doUnpacking(b,this->targetCount_var);
    delete [] this->preqElem_var;
    b->unpack(preqElem_arraysize);
    if (preqElem_arraysize==0) {
        this->preqElem_var = 0;
    } else {
        this->preqElem_var = new PREQElem[preqElem_arraysize];
        doUnpacking(b,this->preqElem_var,preqElem_arraysize);
    }
}

unsigned int Ieee80211ActionPREQFrameBody::getPathDiscoveryId() const
{
    return pathDiscoveryId_var;
}

void Ieee80211ActionPREQFrameBody::setPathDiscoveryId(unsigned int pathDiscoveryId)
{
    this->pathDiscoveryId_var = pathDiscoveryId;
}

MACAddress& Ieee80211ActionPREQFrameBody::getOriginator()
{
    return originator_var;
}

void Ieee80211ActionPREQFrameBody::setOriginator(const MACAddress& originator)
{
    this->originator_var = originator;
}

unsigned int Ieee80211ActionPREQFrameBody::getOriginatorSeqNumber() const
{
    return originatorSeqNumber_var;
}

void Ieee80211ActionPREQFrameBody::setOriginatorSeqNumber(unsigned int originatorSeqNumber)
{
    this->originatorSeqNumber_var = originatorSeqNumber;
}

MACAddress& Ieee80211ActionPREQFrameBody::getOriginatorExternalAddr()
{
    return originatorExternalAddr_var;
}

void Ieee80211ActionPREQFrameBody::setOriginatorExternalAddr(const MACAddress& originatorExternalAddr)
{
    this->originatorExternalAddr_var = originatorExternalAddr;
}

unsigned int Ieee80211ActionPREQFrameBody::getLifeTime() const
{
    return lifeTime_var;
}

void Ieee80211ActionPREQFrameBody::setLifeTime(unsigned int lifeTime)
{
    this->lifeTime_var = lifeTime;
}

unsigned int Ieee80211ActionPREQFrameBody::getMetric() const
{
    return metric_var;
}

void Ieee80211ActionPREQFrameBody::setMetric(unsigned int metric)
{
    this->metric_var = metric;
}

unsigned char Ieee80211ActionPREQFrameBody::getTargetCount() const
{
    return targetCount_var;
}

void Ieee80211ActionPREQFrameBody::setTargetCount(unsigned char targetCount)
{
    this->targetCount_var = targetCount;
}

void Ieee80211ActionPREQFrameBody::setPreqElemArraySize(unsigned int size)
{
    PREQElem *preqElem_var2 = (size==0) ? NULL : new PREQElem[size];
    unsigned int sz = preqElem_arraysize < size ? preqElem_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        preqElem_var2[i] = this->preqElem_var[i];
    preqElem_arraysize = size;
    delete [] this->preqElem_var;
    this->preqElem_var = preqElem_var2;
}

unsigned int Ieee80211ActionPREQFrameBody::getPreqElemArraySize() const
{
    return preqElem_arraysize;
}

PREQElem& Ieee80211ActionPREQFrameBody::getPreqElem(unsigned int k)
{
    if (k>=preqElem_arraysize) throw cRuntimeError("Array of size %d indexed by %d", preqElem_arraysize, k);
    return preqElem_var[k];
}

void Ieee80211ActionPREQFrameBody::setPreqElem(unsigned int k, const PREQElem& preqElem)
{
    if (k>=preqElem_arraysize) throw cRuntimeError("Array of size %d indexed by %d", preqElem_arraysize, k);
    this->preqElem_var[k] = preqElem;
}

class Ieee80211ActionPREQFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionPREQFrameBodyDescriptor();
    virtual ~Ieee80211ActionPREQFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionPREQFrameBodyDescriptor);

Ieee80211ActionPREQFrameBodyDescriptor::Ieee80211ActionPREQFrameBodyDescriptor() : cClassDescriptor("Ieee80211ActionPREQFrameBody", "Ieee80211ActionHWMPFrameBody")
{
}

Ieee80211ActionPREQFrameBodyDescriptor::~Ieee80211ActionPREQFrameBodyDescriptor()
{
}

bool Ieee80211ActionPREQFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionPREQFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ActionPREQFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionPREQFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int Ieee80211ActionPREQFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<8) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ActionPREQFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "pathDiscoveryId",
        "originator",
        "originatorSeqNumber",
        "originatorExternalAddr",
        "lifeTime",
        "metric",
        "targetCount",
        "preqElem",
    };
    return (field>=0 && field<8) ? fieldNames[field] : NULL;
}

int Ieee80211ActionPREQFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pathDiscoveryId")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "originator")==0) return base+1;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorSeqNumber")==0) return base+2;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorExternalAddr")==0) return base+3;
    if (fieldName[0]=='l' && strcmp(fieldName, "lifeTime")==0) return base+4;
    if (fieldName[0]=='m' && strcmp(fieldName, "metric")==0) return base+5;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetCount")==0) return base+6;
    if (fieldName[0]=='p' && strcmp(fieldName, "preqElem")==0) return base+7;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionPREQFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "MACAddress",
        "unsigned int",
        "MACAddress",
        "unsigned int",
        "unsigned int",
        "unsigned char",
        "PREQElem",
    };
    return (field>=0 && field<8) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionPREQFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionPREQFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREQFrameBody *pp = (Ieee80211ActionPREQFrameBody *)object; (void)pp;
    switch (field) {
        case 7: return pp->getPreqElemArraySize();
        default: return 0;
    }
}

std::string Ieee80211ActionPREQFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREQFrameBody *pp = (Ieee80211ActionPREQFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPathDiscoveryId());
        case 1: {std::stringstream out; out << pp->getOriginator(); return out.str();}
        case 2: return ulong2string(pp->getOriginatorSeqNumber());
        case 3: {std::stringstream out; out << pp->getOriginatorExternalAddr(); return out.str();}
        case 4: return ulong2string(pp->getLifeTime());
        case 5: return ulong2string(pp->getMetric());
        case 6: return ulong2string(pp->getTargetCount());
        case 7: {std::stringstream out; out << pp->getPreqElem(i); return out.str();}
        default: return "";
    }
}

bool Ieee80211ActionPREQFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREQFrameBody *pp = (Ieee80211ActionPREQFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setPathDiscoveryId(string2ulong(value)); return true;
        case 2: pp->setOriginatorSeqNumber(string2ulong(value)); return true;
        case 4: pp->setLifeTime(string2ulong(value)); return true;
        case 5: pp->setMetric(string2ulong(value)); return true;
        case 6: pp->setTargetCount(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211ActionPREQFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(MACAddress));
        case 3: return opp_typename(typeid(MACAddress));
        case 7: return opp_typename(typeid(PREQElem));
        default: return NULL;
    };
}

void *Ieee80211ActionPREQFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREQFrameBody *pp = (Ieee80211ActionPREQFrameBody *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getOriginator()); break;
        case 3: return (void *)(&pp->getOriginatorExternalAddr()); break;
        case 7: return (void *)(&pp->getPreqElem(i)); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionPREPFrameBody);

Ieee80211ActionPREPFrameBody::Ieee80211ActionPREPFrameBody() : ::Ieee80211ActionHWMPFrameBody()
{
    this->setBodyLength(37);
    this->setId(IE11S_PREP);

    this->targetSeqNumber_var = 0;
    this->lifeTime_var = 0;
    this->metric_var = 0;
    this->originatorSeqNumber_var = 0;
}

Ieee80211ActionPREPFrameBody::Ieee80211ActionPREPFrameBody(const Ieee80211ActionPREPFrameBody& other) : ::Ieee80211ActionHWMPFrameBody(other)
{
    copy(other);
}

Ieee80211ActionPREPFrameBody::~Ieee80211ActionPREPFrameBody()
{
}

Ieee80211ActionPREPFrameBody& Ieee80211ActionPREPFrameBody::operator=(const Ieee80211ActionPREPFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionHWMPFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionPREPFrameBody::copy(const Ieee80211ActionPREPFrameBody& other)
{
    this->target_var = other.target_var;
    this->targetSeqNumber_var = other.targetSeqNumber_var;
    this->tagetExternalAddr_var = other.tagetExternalAddr_var;
    this->lifeTime_var = other.lifeTime_var;
    this->metric_var = other.metric_var;
    this->originator_var = other.originator_var;
    this->originatorSeqNumber_var = other.originatorSeqNumber_var;
}

void Ieee80211ActionPREPFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrameBody::parsimPack(b);
    doPacking(b,this->target_var);
    doPacking(b,this->targetSeqNumber_var);
    doPacking(b,this->tagetExternalAddr_var);
    doPacking(b,this->lifeTime_var);
    doPacking(b,this->metric_var);
    doPacking(b,this->originator_var);
    doPacking(b,this->originatorSeqNumber_var);
}

void Ieee80211ActionPREPFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrameBody::parsimUnpack(b);
    doUnpacking(b,this->target_var);
    doUnpacking(b,this->targetSeqNumber_var);
    doUnpacking(b,this->tagetExternalAddr_var);
    doUnpacking(b,this->lifeTime_var);
    doUnpacking(b,this->metric_var);
    doUnpacking(b,this->originator_var);
    doUnpacking(b,this->originatorSeqNumber_var);
}

MACAddress& Ieee80211ActionPREPFrameBody::getTarget()
{
    return target_var;
}

void Ieee80211ActionPREPFrameBody::setTarget(const MACAddress& target)
{
    this->target_var = target;
}

unsigned int Ieee80211ActionPREPFrameBody::getTargetSeqNumber() const
{
    return targetSeqNumber_var;
}

void Ieee80211ActionPREPFrameBody::setTargetSeqNumber(unsigned int targetSeqNumber)
{
    this->targetSeqNumber_var = targetSeqNumber;
}

MACAddress& Ieee80211ActionPREPFrameBody::getTagetExternalAddr()
{
    return tagetExternalAddr_var;
}

void Ieee80211ActionPREPFrameBody::setTagetExternalAddr(const MACAddress& tagetExternalAddr)
{
    this->tagetExternalAddr_var = tagetExternalAddr;
}

unsigned int Ieee80211ActionPREPFrameBody::getLifeTime() const
{
    return lifeTime_var;
}

void Ieee80211ActionPREPFrameBody::setLifeTime(unsigned int lifeTime)
{
    this->lifeTime_var = lifeTime;
}

unsigned int Ieee80211ActionPREPFrameBody::getMetric() const
{
    return metric_var;
}

void Ieee80211ActionPREPFrameBody::setMetric(unsigned int metric)
{
    this->metric_var = metric;
}

MACAddress& Ieee80211ActionPREPFrameBody::getOriginator()
{
    return originator_var;
}

void Ieee80211ActionPREPFrameBody::setOriginator(const MACAddress& originator)
{
    this->originator_var = originator;
}

unsigned int Ieee80211ActionPREPFrameBody::getOriginatorSeqNumber() const
{
    return originatorSeqNumber_var;
}

void Ieee80211ActionPREPFrameBody::setOriginatorSeqNumber(unsigned int originatorSeqNumber)
{
    this->originatorSeqNumber_var = originatorSeqNumber;
}

class Ieee80211ActionPREPFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionPREPFrameBodyDescriptor();
    virtual ~Ieee80211ActionPREPFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionPREPFrameBodyDescriptor);

Ieee80211ActionPREPFrameBodyDescriptor::Ieee80211ActionPREPFrameBodyDescriptor() : cClassDescriptor("Ieee80211ActionPREPFrameBody", "Ieee80211ActionHWMPFrameBody")
{
}

Ieee80211ActionPREPFrameBodyDescriptor::~Ieee80211ActionPREPFrameBodyDescriptor()
{
}

bool Ieee80211ActionPREPFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionPREPFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ActionPREPFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionPREPFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int Ieee80211ActionPREPFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ActionPREPFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "target",
        "targetSeqNumber",
        "tagetExternalAddr",
        "lifeTime",
        "metric",
        "originator",
        "originatorSeqNumber",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int Ieee80211ActionPREPFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "target")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetSeqNumber")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "tagetExternalAddr")==0) return base+2;
    if (fieldName[0]=='l' && strcmp(fieldName, "lifeTime")==0) return base+3;
    if (fieldName[0]=='m' && strcmp(fieldName, "metric")==0) return base+4;
    if (fieldName[0]=='o' && strcmp(fieldName, "originator")==0) return base+5;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorSeqNumber")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionPREPFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "unsigned int",
        "MACAddress",
        "unsigned int",
        "unsigned int",
        "MACAddress",
        "unsigned int",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionPREPFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionPREPFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREPFrameBody *pp = (Ieee80211ActionPREPFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionPREPFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREPFrameBody *pp = (Ieee80211ActionPREPFrameBody *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getTarget(); return out.str();}
        case 1: return ulong2string(pp->getTargetSeqNumber());
        case 2: {std::stringstream out; out << pp->getTagetExternalAddr(); return out.str();}
        case 3: return ulong2string(pp->getLifeTime());
        case 4: return ulong2string(pp->getMetric());
        case 5: {std::stringstream out; out << pp->getOriginator(); return out.str();}
        case 6: return ulong2string(pp->getOriginatorSeqNumber());
        default: return "";
    }
}

bool Ieee80211ActionPREPFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREPFrameBody *pp = (Ieee80211ActionPREPFrameBody *)object; (void)pp;
    switch (field) {
        case 1: pp->setTargetSeqNumber(string2ulong(value)); return true;
        case 3: pp->setLifeTime(string2ulong(value)); return true;
        case 4: pp->setMetric(string2ulong(value)); return true;
        case 6: pp->setOriginatorSeqNumber(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211ActionPREPFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(MACAddress));
        case 2: return opp_typename(typeid(MACAddress));
        case 5: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *Ieee80211ActionPREPFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREPFrameBody *pp = (Ieee80211ActionPREPFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getTarget()); break;
        case 2: return (void *)(&pp->getTagetExternalAddr()); break;
        case 5: return (void *)(&pp->getOriginator()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionPERRFrameBody);

Ieee80211ActionPERRFrameBody::Ieee80211ActionPERRFrameBody() : ::Ieee80211ActionHWMPFrameBody()
{
    this->setBodyLength(2);
    this->setId(IE11S_PERR);

    this->numDestination_var = 0;
    perrElem_arraysize = 0;
    this->perrElem_var = 0;
}

Ieee80211ActionPERRFrameBody::Ieee80211ActionPERRFrameBody(const Ieee80211ActionPERRFrameBody& other) : ::Ieee80211ActionHWMPFrameBody(other)
{
    perrElem_arraysize = 0;
    this->perrElem_var = 0;
    copy(other);
}

Ieee80211ActionPERRFrameBody::~Ieee80211ActionPERRFrameBody()
{
    delete [] perrElem_var;
}

Ieee80211ActionPERRFrameBody& Ieee80211ActionPERRFrameBody::operator=(const Ieee80211ActionPERRFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionHWMPFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionPERRFrameBody::copy(const Ieee80211ActionPERRFrameBody& other)
{
    this->numDestination_var = other.numDestination_var;
    delete [] this->perrElem_var;
    this->perrElem_var = (other.perrElem_arraysize==0) ? NULL : new PERRElem[other.perrElem_arraysize];
    perrElem_arraysize = other.perrElem_arraysize;
    for (unsigned int i=0; i<perrElem_arraysize; i++)
        this->perrElem_var[i] = other.perrElem_var[i];
}

void Ieee80211ActionPERRFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrameBody::parsimPack(b);
    doPacking(b,this->numDestination_var);
    b->pack(perrElem_arraysize);
    doPacking(b,this->perrElem_var,perrElem_arraysize);
}

void Ieee80211ActionPERRFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrameBody::parsimUnpack(b);
    doUnpacking(b,this->numDestination_var);
    delete [] this->perrElem_var;
    b->unpack(perrElem_arraysize);
    if (perrElem_arraysize==0) {
        this->perrElem_var = 0;
    } else {
        this->perrElem_var = new PERRElem[perrElem_arraysize];
        doUnpacking(b,this->perrElem_var,perrElem_arraysize);
    }
}

unsigned char Ieee80211ActionPERRFrameBody::getNumDestination() const
{
    return numDestination_var;
}

void Ieee80211ActionPERRFrameBody::setNumDestination(unsigned char numDestination)
{
    this->numDestination_var = numDestination;
}

void Ieee80211ActionPERRFrameBody::setPerrElemArraySize(unsigned int size)
{
    PERRElem *perrElem_var2 = (size==0) ? NULL : new PERRElem[size];
    unsigned int sz = perrElem_arraysize < size ? perrElem_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        perrElem_var2[i] = this->perrElem_var[i];
    perrElem_arraysize = size;
    delete [] this->perrElem_var;
    this->perrElem_var = perrElem_var2;
}

unsigned int Ieee80211ActionPERRFrameBody::getPerrElemArraySize() const
{
    return perrElem_arraysize;
}

PERRElem& Ieee80211ActionPERRFrameBody::getPerrElem(unsigned int k)
{
    if (k>=perrElem_arraysize) throw cRuntimeError("Array of size %d indexed by %d", perrElem_arraysize, k);
    return perrElem_var[k];
}

void Ieee80211ActionPERRFrameBody::setPerrElem(unsigned int k, const PERRElem& perrElem)
{
    if (k>=perrElem_arraysize) throw cRuntimeError("Array of size %d indexed by %d", perrElem_arraysize, k);
    this->perrElem_var[k] = perrElem;
}

class Ieee80211ActionPERRFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionPERRFrameBodyDescriptor();
    virtual ~Ieee80211ActionPERRFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionPERRFrameBodyDescriptor);

Ieee80211ActionPERRFrameBodyDescriptor::Ieee80211ActionPERRFrameBodyDescriptor() : cClassDescriptor("Ieee80211ActionPERRFrameBody", "Ieee80211ActionHWMPFrameBody")
{
}

Ieee80211ActionPERRFrameBodyDescriptor::~Ieee80211ActionPERRFrameBodyDescriptor()
{
}

bool Ieee80211ActionPERRFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionPERRFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ActionPERRFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionPERRFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211ActionPERRFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ActionPERRFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "numDestination",
        "perrElem",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int Ieee80211ActionPERRFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "numDestination")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "perrElem")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionPERRFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
        "PERRElem",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionPERRFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionPERRFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPERRFrameBody *pp = (Ieee80211ActionPERRFrameBody *)object; (void)pp;
    switch (field) {
        case 1: return pp->getPerrElemArraySize();
        default: return 0;
    }
}

std::string Ieee80211ActionPERRFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPERRFrameBody *pp = (Ieee80211ActionPERRFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getNumDestination());
        case 1: {std::stringstream out; out << pp->getPerrElem(i); return out.str();}
        default: return "";
    }
}

bool Ieee80211ActionPERRFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPERRFrameBody *pp = (Ieee80211ActionPERRFrameBody *)object; (void)pp;
    switch (field) {
        case 0: pp->setNumDestination(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211ActionPERRFrameBodyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(PERRElem));
        default: return NULL;
    };
}

void *Ieee80211ActionPERRFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPERRFrameBody *pp = (Ieee80211ActionPERRFrameBody *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getPerrElem(i)); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionGANNFrameBody);

Ieee80211ActionGANNFrameBody::Ieee80211ActionGANNFrameBody() : ::Ieee80211ActionHWMPFrameBody()
{
    this->setBodyLength(15);
    this->setId(IE11S_GANN);

    this->meshGateSeqNumber_var = 0;
}

Ieee80211ActionGANNFrameBody::Ieee80211ActionGANNFrameBody(const Ieee80211ActionGANNFrameBody& other) : ::Ieee80211ActionHWMPFrameBody(other)
{
    copy(other);
}

Ieee80211ActionGANNFrameBody::~Ieee80211ActionGANNFrameBody()
{
}

Ieee80211ActionGANNFrameBody& Ieee80211ActionGANNFrameBody::operator=(const Ieee80211ActionGANNFrameBody& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionHWMPFrameBody::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionGANNFrameBody::copy(const Ieee80211ActionGANNFrameBody& other)
{
    this->meshGateAddress_var = other.meshGateAddress_var;
    this->meshGateSeqNumber_var = other.meshGateSeqNumber_var;
}

void Ieee80211ActionGANNFrameBody::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrameBody::parsimPack(b);
    doPacking(b,this->meshGateAddress_var);
    doPacking(b,this->meshGateSeqNumber_var);
}

void Ieee80211ActionGANNFrameBody::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrameBody::parsimUnpack(b);
    doUnpacking(b,this->meshGateAddress_var);
    doUnpacking(b,this->meshGateSeqNumber_var);
}

MACAddress& Ieee80211ActionGANNFrameBody::getMeshGateAddress()
{
    return meshGateAddress_var;
}

void Ieee80211ActionGANNFrameBody::setMeshGateAddress(const MACAddress& meshGateAddress)
{
    this->meshGateAddress_var = meshGateAddress;
}

unsigned int Ieee80211ActionGANNFrameBody::getMeshGateSeqNumber() const
{
    return meshGateSeqNumber_var;
}

void Ieee80211ActionGANNFrameBody::setMeshGateSeqNumber(unsigned int meshGateSeqNumber)
{
    this->meshGateSeqNumber_var = meshGateSeqNumber;
}

class Ieee80211ActionGANNFrameBodyDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionGANNFrameBodyDescriptor();
    virtual ~Ieee80211ActionGANNFrameBodyDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionGANNFrameBodyDescriptor);

Ieee80211ActionGANNFrameBodyDescriptor::Ieee80211ActionGANNFrameBodyDescriptor() : cClassDescriptor("Ieee80211ActionGANNFrameBody", "Ieee80211ActionHWMPFrameBody")
{
}

Ieee80211ActionGANNFrameBodyDescriptor::~Ieee80211ActionGANNFrameBodyDescriptor()
{
}

bool Ieee80211ActionGANNFrameBodyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionGANNFrameBody *>(obj)!=NULL;
}

const char *Ieee80211ActionGANNFrameBodyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionGANNFrameBodyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211ActionGANNFrameBodyDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ActionGANNFrameBodyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "meshGateAddress",
        "meshGateSeqNumber",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int Ieee80211ActionGANNFrameBodyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "meshGateAddress")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "meshGateSeqNumber")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionGANNFrameBodyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "unsigned int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionGANNFrameBodyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionGANNFrameBodyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionGANNFrameBody *pp = (Ieee80211ActionGANNFrameBody *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionGANNFrameBodyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionGANNFrameBody *pp = (Ieee80211ActionGANNFrameBody *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getMeshGateAddress(); return out.str();}
        case 1: return ulong2string(pp->getMeshGateSeqNumber());
        default: return "";
    }
}

bool Ieee80211ActionGANNFrameBodyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionGANNFrameBody *pp = (Ieee80211ActionGANNFrameBody *)object; (void)pp;
    switch (field) {
        case 1: pp->setMeshGateSeqNumber(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211ActionGANNFrameBodyDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211ActionGANNFrameBodyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionGANNFrameBody *pp = (Ieee80211ActionGANNFrameBody *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getMeshGateAddress()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211AuthenticationFrame);

Ieee80211AuthenticationFrame::Ieee80211AuthenticationFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_AUTHENTICATION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211AuthenticationFrame::Ieee80211AuthenticationFrame(const Ieee80211AuthenticationFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211AuthenticationFrame::~Ieee80211AuthenticationFrame()
{
}

Ieee80211AuthenticationFrame& Ieee80211AuthenticationFrame::operator=(const Ieee80211AuthenticationFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211AuthenticationFrame::copy(const Ieee80211AuthenticationFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211AuthenticationFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211AuthenticationFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211AuthenticationFrameDescriptor::Ieee80211AuthenticationFrameDescriptor() : cClassDescriptor("Ieee80211AuthenticationFrame", "Ieee80211ManagementFrame")
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

Ieee80211DeauthenticationFrame::Ieee80211DeauthenticationFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_DEAUTHENTICATION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211DeauthenticationFrame::Ieee80211DeauthenticationFrame(const Ieee80211DeauthenticationFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211DeauthenticationFrame::~Ieee80211DeauthenticationFrame()
{
}

Ieee80211DeauthenticationFrame& Ieee80211DeauthenticationFrame::operator=(const Ieee80211DeauthenticationFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DeauthenticationFrame::copy(const Ieee80211DeauthenticationFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211DeauthenticationFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211DeauthenticationFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211DeauthenticationFrameDescriptor::Ieee80211DeauthenticationFrameDescriptor() : cClassDescriptor("Ieee80211DeauthenticationFrame", "Ieee80211ManagementFrame")
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

Ieee80211DisassociationFrame::Ieee80211DisassociationFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_DISASSOCIATION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211DisassociationFrame::Ieee80211DisassociationFrame(const Ieee80211DisassociationFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211DisassociationFrame::~Ieee80211DisassociationFrame()
{
}

Ieee80211DisassociationFrame& Ieee80211DisassociationFrame::operator=(const Ieee80211DisassociationFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DisassociationFrame::copy(const Ieee80211DisassociationFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211DisassociationFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211DisassociationFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211DisassociationFrameDescriptor::Ieee80211DisassociationFrameDescriptor() : cClassDescriptor("Ieee80211DisassociationFrame", "Ieee80211ManagementFrame")
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

Ieee80211ProbeRequestFrame::Ieee80211ProbeRequestFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_PROBEREQUEST);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ProbeRequestFrame::Ieee80211ProbeRequestFrame(const Ieee80211ProbeRequestFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211ProbeRequestFrame::~Ieee80211ProbeRequestFrame()
{
}

Ieee80211ProbeRequestFrame& Ieee80211ProbeRequestFrame::operator=(const Ieee80211ProbeRequestFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ProbeRequestFrame::copy(const Ieee80211ProbeRequestFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ProbeRequestFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ProbeRequestFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211ProbeRequestFrameDescriptor::Ieee80211ProbeRequestFrameDescriptor() : cClassDescriptor("Ieee80211ProbeRequestFrame", "Ieee80211ManagementFrame")
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

Ieee80211AssociationRequestFrame::Ieee80211AssociationRequestFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_ASSOCIATIONREQUEST);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211AssociationRequestFrame::Ieee80211AssociationRequestFrame(const Ieee80211AssociationRequestFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211AssociationRequestFrame::~Ieee80211AssociationRequestFrame()
{
}

Ieee80211AssociationRequestFrame& Ieee80211AssociationRequestFrame::operator=(const Ieee80211AssociationRequestFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211AssociationRequestFrame::copy(const Ieee80211AssociationRequestFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211AssociationRequestFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211AssociationRequestFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211AssociationRequestFrameDescriptor::Ieee80211AssociationRequestFrameDescriptor() : cClassDescriptor("Ieee80211AssociationRequestFrame", "Ieee80211ManagementFrame")
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

Ieee80211ReassociationRequestFrame::Ieee80211ReassociationRequestFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_REASSOCIATIONREQUEST);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ReassociationRequestFrame::Ieee80211ReassociationRequestFrame(const Ieee80211ReassociationRequestFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211ReassociationRequestFrame::~Ieee80211ReassociationRequestFrame()
{
}

Ieee80211ReassociationRequestFrame& Ieee80211ReassociationRequestFrame::operator=(const Ieee80211ReassociationRequestFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ReassociationRequestFrame::copy(const Ieee80211ReassociationRequestFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ReassociationRequestFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ReassociationRequestFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211ReassociationRequestFrameDescriptor::Ieee80211ReassociationRequestFrameDescriptor() : cClassDescriptor("Ieee80211ReassociationRequestFrame", "Ieee80211ManagementFrame")
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

Ieee80211AssociationResponseFrame::Ieee80211AssociationResponseFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_ASSOCIATIONRESPONSE);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211AssociationResponseFrame::Ieee80211AssociationResponseFrame(const Ieee80211AssociationResponseFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211AssociationResponseFrame::~Ieee80211AssociationResponseFrame()
{
}

Ieee80211AssociationResponseFrame& Ieee80211AssociationResponseFrame::operator=(const Ieee80211AssociationResponseFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211AssociationResponseFrame::copy(const Ieee80211AssociationResponseFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211AssociationResponseFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211AssociationResponseFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211AssociationResponseFrameDescriptor::Ieee80211AssociationResponseFrameDescriptor() : cClassDescriptor("Ieee80211AssociationResponseFrame", "Ieee80211ManagementFrame")
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

Ieee80211ReassociationResponseFrame::Ieee80211ReassociationResponseFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_REASSOCIATIONRESPONSE);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ReassociationResponseFrame::Ieee80211ReassociationResponseFrame(const Ieee80211ReassociationResponseFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211ReassociationResponseFrame::~Ieee80211ReassociationResponseFrame()
{
}

Ieee80211ReassociationResponseFrame& Ieee80211ReassociationResponseFrame::operator=(const Ieee80211ReassociationResponseFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ReassociationResponseFrame::copy(const Ieee80211ReassociationResponseFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ReassociationResponseFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ReassociationResponseFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211ReassociationResponseFrameDescriptor::Ieee80211ReassociationResponseFrameDescriptor() : cClassDescriptor("Ieee80211ReassociationResponseFrame", "Ieee80211ManagementFrame")
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

Ieee80211BeaconFrame::Ieee80211BeaconFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_BEACON);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211BeaconFrame::Ieee80211BeaconFrame(const Ieee80211BeaconFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211BeaconFrame::~Ieee80211BeaconFrame()
{
}

Ieee80211BeaconFrame& Ieee80211BeaconFrame::operator=(const Ieee80211BeaconFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211BeaconFrame::copy(const Ieee80211BeaconFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211BeaconFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211BeaconFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211BeaconFrameDescriptor::Ieee80211BeaconFrameDescriptor() : cClassDescriptor("Ieee80211BeaconFrame", "Ieee80211ManagementFrame")
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

Ieee80211ProbeResponseFrame::Ieee80211ProbeResponseFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_PROBERESPONSE);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ProbeResponseFrame::Ieee80211ProbeResponseFrame(const Ieee80211ProbeResponseFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211ProbeResponseFrame::~Ieee80211ProbeResponseFrame()
{
}

Ieee80211ProbeResponseFrame& Ieee80211ProbeResponseFrame::operator=(const Ieee80211ProbeResponseFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ProbeResponseFrame::copy(const Ieee80211ProbeResponseFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ProbeResponseFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ProbeResponseFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211ProbeResponseFrameDescriptor::Ieee80211ProbeResponseFrameDescriptor() : cClassDescriptor("Ieee80211ProbeResponseFrame", "Ieee80211ManagementFrame")
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

Ieee80211ActionFrame::Ieee80211ActionFrame(const char *name, int kind) : ::Ieee80211ManagementFrame(name,kind)
{
    this->setType(ST_ACTION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ActionFrame::Ieee80211ActionFrame(const Ieee80211ActionFrame& other) : ::Ieee80211ManagementFrame(other)
{
    copy(other);
}

Ieee80211ActionFrame::~Ieee80211ActionFrame()
{
}

Ieee80211ActionFrame& Ieee80211ActionFrame::operator=(const Ieee80211ActionFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ManagementFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionFrame::copy(const Ieee80211ActionFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ActionFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ActionFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ManagementFrame::parsimUnpack(b);
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

Ieee80211ActionFrameDescriptor::Ieee80211ActionFrameDescriptor() : cClassDescriptor("Ieee80211ActionFrame", "Ieee80211ManagementFrame")
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

Register_Class(Ieee80211ActionHWMPFrame);

Ieee80211ActionHWMPFrame::Ieee80211ActionHWMPFrame(const char *name, int kind) : ::Ieee80211ActionFrame(name,kind)
{
    this->setType(ST_ACTION);
    this->setByteLength(28+getBody().getBodyLength());

    this->isFragment_var = false;
    this->realLength_var = 0;
}

Ieee80211ActionHWMPFrame::Ieee80211ActionHWMPFrame(const Ieee80211ActionHWMPFrame& other) : ::Ieee80211ActionFrame(other)
{
    copy(other);
}

Ieee80211ActionHWMPFrame::~Ieee80211ActionHWMPFrame()
{
}

Ieee80211ActionHWMPFrame& Ieee80211ActionHWMPFrame::operator=(const Ieee80211ActionHWMPFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionHWMPFrame::copy(const Ieee80211ActionHWMPFrame& other)
{
    this->isFragment_var = other.isFragment_var;
    this->realLength_var = other.realLength_var;
    this->body_var = other.body_var;
}

void Ieee80211ActionHWMPFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionFrame::parsimPack(b);
    doPacking(b,this->isFragment_var);
    doPacking(b,this->realLength_var);
    doPacking(b,this->body_var);
}

void Ieee80211ActionHWMPFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionFrame::parsimUnpack(b);
    doUnpacking(b,this->isFragment_var);
    doUnpacking(b,this->realLength_var);
    doUnpacking(b,this->body_var);
}

bool Ieee80211ActionHWMPFrame::getIsFragment() const
{
    return isFragment_var;
}

void Ieee80211ActionHWMPFrame::setIsFragment(bool isFragment)
{
    this->isFragment_var = isFragment;
}

unsigned long Ieee80211ActionHWMPFrame::getRealLength() const
{
    return realLength_var;
}

void Ieee80211ActionHWMPFrame::setRealLength(unsigned long realLength)
{
    this->realLength_var = realLength;
}

Ieee80211ActionHWMPFrameBody& Ieee80211ActionHWMPFrame::getBody()
{
    return body_var;
}

void Ieee80211ActionHWMPFrame::setBody(const Ieee80211ActionHWMPFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ActionHWMPFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionHWMPFrameDescriptor();
    virtual ~Ieee80211ActionHWMPFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionHWMPFrameDescriptor);

Ieee80211ActionHWMPFrameDescriptor::Ieee80211ActionHWMPFrameDescriptor() : cClassDescriptor("Ieee80211ActionHWMPFrame", "Ieee80211ActionFrame")
{
}

Ieee80211ActionHWMPFrameDescriptor::~Ieee80211ActionHWMPFrameDescriptor()
{
}

bool Ieee80211ActionHWMPFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionHWMPFrame *>(obj)!=NULL;
}

const char *Ieee80211ActionHWMPFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionHWMPFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int Ieee80211ActionHWMPFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211ActionHWMPFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "isFragment",
        "realLength",
        "body",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int Ieee80211ActionHWMPFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "isFragment")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "realLength")==0) return base+1;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionHWMPFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "unsigned long",
        "Ieee80211ActionHWMPFrameBody",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionHWMPFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionHWMPFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionHWMPFrame *pp = (Ieee80211ActionHWMPFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionHWMPFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionHWMPFrame *pp = (Ieee80211ActionHWMPFrame *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getIsFragment());
        case 1: return ulong2string(pp->getRealLength());
        case 2: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ActionHWMPFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionHWMPFrame *pp = (Ieee80211ActionHWMPFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setIsFragment(string2bool(value)); return true;
        case 1: pp->setRealLength(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211ActionHWMPFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(Ieee80211ActionHWMPFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ActionHWMPFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionHWMPFrame *pp = (Ieee80211ActionHWMPFrame *)object; (void)pp;
    switch (field) {
        case 2: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionRANNFrame);

Ieee80211ActionRANNFrame::Ieee80211ActionRANNFrame(const char *name, int kind) : ::Ieee80211ActionHWMPFrame(name,kind)
{
    this->setType(ST_ACTION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ActionRANNFrame::Ieee80211ActionRANNFrame(const Ieee80211ActionRANNFrame& other) : ::Ieee80211ActionHWMPFrame(other)
{
    copy(other);
}

Ieee80211ActionRANNFrame::~Ieee80211ActionRANNFrame()
{
}

Ieee80211ActionRANNFrame& Ieee80211ActionRANNFrame::operator=(const Ieee80211ActionRANNFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionHWMPFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionRANNFrame::copy(const Ieee80211ActionRANNFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ActionRANNFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ActionRANNFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ActionRANNFrameBody& Ieee80211ActionRANNFrame::getBody()
{
    return body_var;
}

void Ieee80211ActionRANNFrame::setBody(const Ieee80211ActionRANNFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ActionRANNFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionRANNFrameDescriptor();
    virtual ~Ieee80211ActionRANNFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionRANNFrameDescriptor);

Ieee80211ActionRANNFrameDescriptor::Ieee80211ActionRANNFrameDescriptor() : cClassDescriptor("Ieee80211ActionRANNFrame", "Ieee80211ActionHWMPFrame")
{
}

Ieee80211ActionRANNFrameDescriptor::~Ieee80211ActionRANNFrameDescriptor()
{
}

bool Ieee80211ActionRANNFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionRANNFrame *>(obj)!=NULL;
}

const char *Ieee80211ActionRANNFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionRANNFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ActionRANNFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ActionRANNFrameDescriptor::getFieldName(void *object, int field) const
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

int Ieee80211ActionRANNFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionRANNFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211ActionRANNFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionRANNFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionRANNFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionRANNFrame *pp = (Ieee80211ActionRANNFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionRANNFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionRANNFrame *pp = (Ieee80211ActionRANNFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ActionRANNFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionRANNFrame *pp = (Ieee80211ActionRANNFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ActionRANNFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211ActionRANNFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ActionRANNFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionRANNFrame *pp = (Ieee80211ActionRANNFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionPREQFrame);

Ieee80211ActionPREQFrame::Ieee80211ActionPREQFrame(const char *name, int kind) : ::Ieee80211ActionHWMPFrame(name,kind)
{
    this->setType(ST_ACTION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ActionPREQFrame::Ieee80211ActionPREQFrame(const Ieee80211ActionPREQFrame& other) : ::Ieee80211ActionHWMPFrame(other)
{
    copy(other);
}

Ieee80211ActionPREQFrame::~Ieee80211ActionPREQFrame()
{
}

Ieee80211ActionPREQFrame& Ieee80211ActionPREQFrame::operator=(const Ieee80211ActionPREQFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionHWMPFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionPREQFrame::copy(const Ieee80211ActionPREQFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ActionPREQFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ActionPREQFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ActionPREQFrameBody& Ieee80211ActionPREQFrame::getBody()
{
    return body_var;
}

void Ieee80211ActionPREQFrame::setBody(const Ieee80211ActionPREQFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ActionPREQFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionPREQFrameDescriptor();
    virtual ~Ieee80211ActionPREQFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionPREQFrameDescriptor);

Ieee80211ActionPREQFrameDescriptor::Ieee80211ActionPREQFrameDescriptor() : cClassDescriptor("Ieee80211ActionPREQFrame", "Ieee80211ActionHWMPFrame")
{
}

Ieee80211ActionPREQFrameDescriptor::~Ieee80211ActionPREQFrameDescriptor()
{
}

bool Ieee80211ActionPREQFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionPREQFrame *>(obj)!=NULL;
}

const char *Ieee80211ActionPREQFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionPREQFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ActionPREQFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ActionPREQFrameDescriptor::getFieldName(void *object, int field) const
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

int Ieee80211ActionPREQFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionPREQFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211ActionPREQFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionPREQFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionPREQFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREQFrame *pp = (Ieee80211ActionPREQFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionPREQFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREQFrame *pp = (Ieee80211ActionPREQFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ActionPREQFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREQFrame *pp = (Ieee80211ActionPREQFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ActionPREQFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211ActionPREQFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ActionPREQFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREQFrame *pp = (Ieee80211ActionPREQFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionPREPFrame);

Ieee80211ActionPREPFrame::Ieee80211ActionPREPFrame(const char *name, int kind) : ::Ieee80211ActionHWMPFrame(name,kind)
{
    this->setType(ST_ACTION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ActionPREPFrame::Ieee80211ActionPREPFrame(const Ieee80211ActionPREPFrame& other) : ::Ieee80211ActionHWMPFrame(other)
{
    copy(other);
}

Ieee80211ActionPREPFrame::~Ieee80211ActionPREPFrame()
{
}

Ieee80211ActionPREPFrame& Ieee80211ActionPREPFrame::operator=(const Ieee80211ActionPREPFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionHWMPFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionPREPFrame::copy(const Ieee80211ActionPREPFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ActionPREPFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ActionPREPFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ActionPREPFrameBody& Ieee80211ActionPREPFrame::getBody()
{
    return body_var;
}

void Ieee80211ActionPREPFrame::setBody(const Ieee80211ActionPREPFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ActionPREPFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionPREPFrameDescriptor();
    virtual ~Ieee80211ActionPREPFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionPREPFrameDescriptor);

Ieee80211ActionPREPFrameDescriptor::Ieee80211ActionPREPFrameDescriptor() : cClassDescriptor("Ieee80211ActionPREPFrame", "Ieee80211ActionHWMPFrame")
{
}

Ieee80211ActionPREPFrameDescriptor::~Ieee80211ActionPREPFrameDescriptor()
{
}

bool Ieee80211ActionPREPFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionPREPFrame *>(obj)!=NULL;
}

const char *Ieee80211ActionPREPFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionPREPFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ActionPREPFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ActionPREPFrameDescriptor::getFieldName(void *object, int field) const
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

int Ieee80211ActionPREPFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionPREPFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211ActionPREPFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionPREPFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionPREPFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREPFrame *pp = (Ieee80211ActionPREPFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionPREPFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREPFrame *pp = (Ieee80211ActionPREPFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ActionPREPFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREPFrame *pp = (Ieee80211ActionPREPFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ActionPREPFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211ActionPREPFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ActionPREPFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPREPFrame *pp = (Ieee80211ActionPREPFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionPERRFrame);

Ieee80211ActionPERRFrame::Ieee80211ActionPERRFrame(const char *name, int kind) : ::Ieee80211ActionHWMPFrame(name,kind)
{
    this->setType(ST_ACTION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ActionPERRFrame::Ieee80211ActionPERRFrame(const Ieee80211ActionPERRFrame& other) : ::Ieee80211ActionHWMPFrame(other)
{
    copy(other);
}

Ieee80211ActionPERRFrame::~Ieee80211ActionPERRFrame()
{
}

Ieee80211ActionPERRFrame& Ieee80211ActionPERRFrame::operator=(const Ieee80211ActionPERRFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionHWMPFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionPERRFrame::copy(const Ieee80211ActionPERRFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ActionPERRFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ActionPERRFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ActionPERRFrameBody& Ieee80211ActionPERRFrame::getBody()
{
    return body_var;
}

void Ieee80211ActionPERRFrame::setBody(const Ieee80211ActionPERRFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ActionPERRFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionPERRFrameDescriptor();
    virtual ~Ieee80211ActionPERRFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionPERRFrameDescriptor);

Ieee80211ActionPERRFrameDescriptor::Ieee80211ActionPERRFrameDescriptor() : cClassDescriptor("Ieee80211ActionPERRFrame", "Ieee80211ActionHWMPFrame")
{
}

Ieee80211ActionPERRFrameDescriptor::~Ieee80211ActionPERRFrameDescriptor()
{
}

bool Ieee80211ActionPERRFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionPERRFrame *>(obj)!=NULL;
}

const char *Ieee80211ActionPERRFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionPERRFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ActionPERRFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ActionPERRFrameDescriptor::getFieldName(void *object, int field) const
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

int Ieee80211ActionPERRFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionPERRFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211ActionPERRFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionPERRFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionPERRFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPERRFrame *pp = (Ieee80211ActionPERRFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionPERRFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPERRFrame *pp = (Ieee80211ActionPERRFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ActionPERRFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPERRFrame *pp = (Ieee80211ActionPERRFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ActionPERRFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211ActionPERRFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ActionPERRFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionPERRFrame *pp = (Ieee80211ActionPERRFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211ActionGANNFrame);

Ieee80211ActionGANNFrame::Ieee80211ActionGANNFrame(const char *name, int kind) : ::Ieee80211ActionHWMPFrame(name,kind)
{
    this->setType(ST_ACTION);
    this->setByteLength(28+getBody().getBodyLength());

}

Ieee80211ActionGANNFrame::Ieee80211ActionGANNFrame(const Ieee80211ActionGANNFrame& other) : ::Ieee80211ActionHWMPFrame(other)
{
    copy(other);
}

Ieee80211ActionGANNFrame::~Ieee80211ActionGANNFrame()
{
}

Ieee80211ActionGANNFrame& Ieee80211ActionGANNFrame::operator=(const Ieee80211ActionGANNFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211ActionHWMPFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ActionGANNFrame::copy(const Ieee80211ActionGANNFrame& other)
{
    this->body_var = other.body_var;
}

void Ieee80211ActionGANNFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrame::parsimPack(b);
    doPacking(b,this->body_var);
}

void Ieee80211ActionGANNFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211ActionHWMPFrame::parsimUnpack(b);
    doUnpacking(b,this->body_var);
}

Ieee80211ActionGANNFrameBody& Ieee80211ActionGANNFrame::getBody()
{
    return body_var;
}

void Ieee80211ActionGANNFrame::setBody(const Ieee80211ActionGANNFrameBody& body)
{
    this->body_var = body;
}

class Ieee80211ActionGANNFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ActionGANNFrameDescriptor();
    virtual ~Ieee80211ActionGANNFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ActionGANNFrameDescriptor);

Ieee80211ActionGANNFrameDescriptor::Ieee80211ActionGANNFrameDescriptor() : cClassDescriptor("Ieee80211ActionGANNFrame", "Ieee80211ActionHWMPFrame")
{
}

Ieee80211ActionGANNFrameDescriptor::~Ieee80211ActionGANNFrameDescriptor()
{
}

bool Ieee80211ActionGANNFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ActionGANNFrame *>(obj)!=NULL;
}

const char *Ieee80211ActionGANNFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ActionGANNFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ActionGANNFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ActionGANNFrameDescriptor::getFieldName(void *object, int field) const
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

int Ieee80211ActionGANNFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "body")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ActionGANNFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "Ieee80211ActionGANNFrameBody",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211ActionGANNFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ActionGANNFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionGANNFrame *pp = (Ieee80211ActionGANNFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ActionGANNFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionGANNFrame *pp = (Ieee80211ActionGANNFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getBody(); return out.str();}
        default: return "";
    }
}

bool Ieee80211ActionGANNFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionGANNFrame *pp = (Ieee80211ActionGANNFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ActionGANNFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(Ieee80211ActionGANNFrameBody));
        default: return NULL;
    };
}

void *Ieee80211ActionGANNFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ActionGANNFrame *pp = (Ieee80211ActionGANNFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getBody()); break;
        default: return NULL;
    }
}


