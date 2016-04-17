//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/ieee80211/mac/Ieee80211Frame.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee80211Frame_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ieee80211::Ieee80211FrameType");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ieee80211::Ieee80211FrameType"));
    e->insert(ST_ASSOCIATIONREQUEST, "ST_ASSOCIATIONREQUEST");
    e->insert(ST_ASSOCIATIONRESPONSE, "ST_ASSOCIATIONRESPONSE");
    e->insert(ST_REASSOCIATIONREQUEST, "ST_REASSOCIATIONREQUEST");
    e->insert(ST_REASSOCIATIONRESPONSE, "ST_REASSOCIATIONRESPONSE");
    e->insert(ST_PROBEREQUEST, "ST_PROBEREQUEST");
    e->insert(ST_PROBERESPONSE, "ST_PROBERESPONSE");
    e->insert(ST_BEACON, "ST_BEACON");
    e->insert(ST_ATIM, "ST_ATIM");
    e->insert(ST_DISASSOCIATION, "ST_DISASSOCIATION");
    e->insert(ST_AUTHENTICATION, "ST_AUTHENTICATION");
    e->insert(ST_DEAUTHENTICATION, "ST_DEAUTHENTICATION");
    e->insert(ST_ACTION, "ST_ACTION");
    e->insert(ST_NOACKACTION, "ST_NOACKACTION");
    e->insert(ST_PSPOLL, "ST_PSPOLL");
    e->insert(ST_RTS, "ST_RTS");
    e->insert(ST_CTS, "ST_CTS");
    e->insert(ST_ACK, "ST_ACK");
    e->insert(ST_BLOCKACK_REQ, "ST_BLOCKACK_REQ");
    e->insert(ST_BLOCKACK, "ST_BLOCKACK");
    e->insert(ST_DATA, "ST_DATA");
    e->insert(ST_DATA_WITH_QOS, "ST_DATA_WITH_QOS");
    e->insert(ST_LBMS_REQUEST, "ST_LBMS_REQUEST");
    e->insert(ST_LBMS_REPORT, "ST_LBMS_REPORT");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::ieee80211::AckPolicy");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::ieee80211::AckPolicy"));
    e->insert(NORMAL_ACK, "NORMAL_ACK");
    e->insert(NO_ACK, "NO_ACK");
    e->insert(NO_EXPLICIT_ACK, "NO_EXPLICIT_ACK");
    e->insert(BLOCK_ACK, "BLOCK_ACK");
);

Register_Class(Ieee80211Frame);

Ieee80211Frame::Ieee80211Frame(const char *name, int kind) : ::cPacket(name,kind)
{
    this->setByteLength(LENGTH_ACK / 8);

    this->type_var = 0;
    this->toDS_var = 0;
    this->fromDS_var = 0;
    this->retry_var = 0;
    this->moreFragments_var = 0;
    this->duration_var = -1;
    this->AID_var = -1;
    this->MACArrive_var = 0;
}

Ieee80211Frame::Ieee80211Frame(const Ieee80211Frame& other) : ::cPacket(other)
{
    copy(other);
}

Ieee80211Frame::~Ieee80211Frame()
{
}

Ieee80211Frame& Ieee80211Frame::operator=(const Ieee80211Frame& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211Frame::copy(const Ieee80211Frame& other)
{
    this->type_var = other.type_var;
    this->toDS_var = other.toDS_var;
    this->fromDS_var = other.fromDS_var;
    this->retry_var = other.retry_var;
    this->moreFragments_var = other.moreFragments_var;
    this->duration_var = other.duration_var;
    this->AID_var = other.AID_var;
    this->receiverAddress_var = other.receiverAddress_var;
    this->MACArrive_var = other.MACArrive_var;
}

void Ieee80211Frame::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->toDS_var);
    doPacking(b,this->fromDS_var);
    doPacking(b,this->retry_var);
    doPacking(b,this->moreFragments_var);
    doPacking(b,this->duration_var);
    doPacking(b,this->AID_var);
    doPacking(b,this->receiverAddress_var);
    doPacking(b,this->MACArrive_var);
}

void Ieee80211Frame::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->toDS_var);
    doUnpacking(b,this->fromDS_var);
    doUnpacking(b,this->retry_var);
    doUnpacking(b,this->moreFragments_var);
    doUnpacking(b,this->duration_var);
    doUnpacking(b,this->AID_var);
    doUnpacking(b,this->receiverAddress_var);
    doUnpacking(b,this->MACArrive_var);
}

short Ieee80211Frame::getType() const
{
    return type_var;
}

void Ieee80211Frame::setType(short type)
{
    this->type_var = type;
}

bool Ieee80211Frame::getToDS() const
{
    return toDS_var;
}

void Ieee80211Frame::setToDS(bool toDS)
{
    this->toDS_var = toDS;
}

bool Ieee80211Frame::getFromDS() const
{
    return fromDS_var;
}

void Ieee80211Frame::setFromDS(bool fromDS)
{
    this->fromDS_var = fromDS;
}

bool Ieee80211Frame::getRetry() const
{
    return retry_var;
}

void Ieee80211Frame::setRetry(bool retry)
{
    this->retry_var = retry;
}

bool Ieee80211Frame::getMoreFragments() const
{
    return moreFragments_var;
}

void Ieee80211Frame::setMoreFragments(bool moreFragments)
{
    this->moreFragments_var = moreFragments;
}

simtime_t Ieee80211Frame::getDuration() const
{
    return duration_var;
}

void Ieee80211Frame::setDuration(simtime_t duration)
{
    this->duration_var = duration;
}

short Ieee80211Frame::getAID() const
{
    return AID_var;
}

void Ieee80211Frame::setAID(short AID)
{
    this->AID_var = AID;
}

MACAddress& Ieee80211Frame::getReceiverAddress()
{
    return receiverAddress_var;
}

void Ieee80211Frame::setReceiverAddress(const MACAddress& receiverAddress)
{
    this->receiverAddress_var = receiverAddress;
}

simtime_t Ieee80211Frame::getMACArrive() const
{
    return MACArrive_var;
}

void Ieee80211Frame::setMACArrive(simtime_t MACArrive)
{
    this->MACArrive_var = MACArrive;
}

class Ieee80211FrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211FrameDescriptor();
    virtual ~Ieee80211FrameDescriptor();

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

Register_ClassDescriptor(Ieee80211FrameDescriptor);

Ieee80211FrameDescriptor::Ieee80211FrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211Frame", "cPacket")
{
}

Ieee80211FrameDescriptor::~Ieee80211FrameDescriptor()
{
}

bool Ieee80211FrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211Frame *>(obj)!=NULL;
}

const char *Ieee80211FrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211FrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int Ieee80211FrameDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<9) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211FrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "toDS",
        "fromDS",
        "retry",
        "moreFragments",
        "duration",
        "AID",
        "receiverAddress",
        "MACArrive",
    };
    return (field>=0 && field<9) ? fieldNames[field] : NULL;
}

int Ieee80211FrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "toDS")==0) return base+1;
    if (fieldName[0]=='f' && strcmp(fieldName, "fromDS")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "retry")==0) return base+3;
    if (fieldName[0]=='m' && strcmp(fieldName, "moreFragments")==0) return base+4;
    if (fieldName[0]=='d' && strcmp(fieldName, "duration")==0) return base+5;
    if (fieldName[0]=='A' && strcmp(fieldName, "AID")==0) return base+6;
    if (fieldName[0]=='r' && strcmp(fieldName, "receiverAddress")==0) return base+7;
    if (fieldName[0]=='M' && strcmp(fieldName, "MACArrive")==0) return base+8;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211FrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "bool",
        "bool",
        "bool",
        "bool",
        "simtime_t",
        "short",
        "MACAddress",
        "simtime_t",
    };
    return (field>=0 && field<9) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211FrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::ieee80211::Ieee80211FrameType";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211FrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Frame *pp = (Ieee80211Frame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211FrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Frame *pp = (Ieee80211Frame *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: return bool2string(pp->getToDS());
        case 2: return bool2string(pp->getFromDS());
        case 3: return bool2string(pp->getRetry());
        case 4: return bool2string(pp->getMoreFragments());
        case 5: return double2string(pp->getDuration());
        case 6: return long2string(pp->getAID());
        case 7: {std::stringstream out; out << pp->getReceiverAddress(); return out.str();}
        case 8: return double2string(pp->getMACArrive());
        default: return "";
    }
}

bool Ieee80211FrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Frame *pp = (Ieee80211Frame *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setToDS(string2bool(value)); return true;
        case 2: pp->setFromDS(string2bool(value)); return true;
        case 3: pp->setRetry(string2bool(value)); return true;
        case 4: pp->setMoreFragments(string2bool(value)); return true;
        case 5: pp->setDuration(string2double(value)); return true;
        case 6: pp->setAID(string2long(value)); return true;
        case 8: pp->setMACArrive(string2double(value)); return true;
        default: return false;
    }
}

const char *Ieee80211FrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 7: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *Ieee80211FrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211Frame *pp = (Ieee80211Frame *)object; (void)pp;
    switch (field) {
        case 7: return (void *)(&pp->getReceiverAddress()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211OneAddressFrame);

Ieee80211OneAddressFrame::Ieee80211OneAddressFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211Frame(name,kind)
{
}

Ieee80211OneAddressFrame::Ieee80211OneAddressFrame(const Ieee80211OneAddressFrame& other) : ::inet::ieee80211::Ieee80211Frame(other)
{
    copy(other);
}

Ieee80211OneAddressFrame::~Ieee80211OneAddressFrame()
{
}

Ieee80211OneAddressFrame& Ieee80211OneAddressFrame::operator=(const Ieee80211OneAddressFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211Frame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211OneAddressFrame::copy(const Ieee80211OneAddressFrame& other)
{
}

void Ieee80211OneAddressFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211Frame::parsimPack(b);
}

void Ieee80211OneAddressFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211Frame::parsimUnpack(b);
}

class Ieee80211OneAddressFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211OneAddressFrameDescriptor();
    virtual ~Ieee80211OneAddressFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211OneAddressFrameDescriptor);

Ieee80211OneAddressFrameDescriptor::Ieee80211OneAddressFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211OneAddressFrame", "inet::ieee80211::Ieee80211Frame")
{
}

Ieee80211OneAddressFrameDescriptor::~Ieee80211OneAddressFrameDescriptor()
{
}

bool Ieee80211OneAddressFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211OneAddressFrame *>(obj)!=NULL;
}

const char *Ieee80211OneAddressFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211OneAddressFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211OneAddressFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee80211OneAddressFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee80211OneAddressFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211OneAddressFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee80211OneAddressFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211OneAddressFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211OneAddressFrame *pp = (Ieee80211OneAddressFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211OneAddressFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211OneAddressFrame *pp = (Ieee80211OneAddressFrame *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee80211OneAddressFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211OneAddressFrame *pp = (Ieee80211OneAddressFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211OneAddressFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee80211OneAddressFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211OneAddressFrame *pp = (Ieee80211OneAddressFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211ACKFrame);

Ieee80211ACKFrame::Ieee80211ACKFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211OneAddressFrame(name,kind)
{
    this->setByteLength(LENGTH_ACK / 8);
    this->setType(ST_ACK);
}

Ieee80211ACKFrame::Ieee80211ACKFrame(const Ieee80211ACKFrame& other) : ::inet::ieee80211::Ieee80211OneAddressFrame(other)
{
    copy(other);
}

Ieee80211ACKFrame::~Ieee80211ACKFrame()
{
}

Ieee80211ACKFrame& Ieee80211ACKFrame::operator=(const Ieee80211ACKFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211OneAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ACKFrame::copy(const Ieee80211ACKFrame& other)
{
}

void Ieee80211ACKFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211OneAddressFrame::parsimPack(b);
}

void Ieee80211ACKFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211OneAddressFrame::parsimUnpack(b);
}

class Ieee80211ACKFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ACKFrameDescriptor();
    virtual ~Ieee80211ACKFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ACKFrameDescriptor);

Ieee80211ACKFrameDescriptor::Ieee80211ACKFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ACKFrame", "inet::ieee80211::Ieee80211OneAddressFrame")
{
}

Ieee80211ACKFrameDescriptor::~Ieee80211ACKFrameDescriptor()
{
}

bool Ieee80211ACKFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ACKFrame *>(obj)!=NULL;
}

const char *Ieee80211ACKFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ACKFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211ACKFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee80211ACKFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee80211ACKFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ACKFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee80211ACKFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ACKFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ACKFrame *pp = (Ieee80211ACKFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ACKFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ACKFrame *pp = (Ieee80211ACKFrame *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee80211ACKFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ACKFrame *pp = (Ieee80211ACKFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211ACKFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee80211ACKFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ACKFrame *pp = (Ieee80211ACKFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211TwoAddressFrame);

Ieee80211TwoAddressFrame::Ieee80211TwoAddressFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211OneAddressFrame(name,kind)
{
    this->setByteLength(LENGTH_RTS / 8);

}

Ieee80211TwoAddressFrame::Ieee80211TwoAddressFrame(const Ieee80211TwoAddressFrame& other) : ::inet::ieee80211::Ieee80211OneAddressFrame(other)
{
    copy(other);
}

Ieee80211TwoAddressFrame::~Ieee80211TwoAddressFrame()
{
}

Ieee80211TwoAddressFrame& Ieee80211TwoAddressFrame::operator=(const Ieee80211TwoAddressFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211OneAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211TwoAddressFrame::copy(const Ieee80211TwoAddressFrame& other)
{
    this->transmitterAddress_var = other.transmitterAddress_var;
}

void Ieee80211TwoAddressFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211OneAddressFrame::parsimPack(b);
    doPacking(b,this->transmitterAddress_var);
}

void Ieee80211TwoAddressFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211OneAddressFrame::parsimUnpack(b);
    doUnpacking(b,this->transmitterAddress_var);
}

MACAddress& Ieee80211TwoAddressFrame::getTransmitterAddress()
{
    return transmitterAddress_var;
}

void Ieee80211TwoAddressFrame::setTransmitterAddress(const MACAddress& transmitterAddress)
{
    this->transmitterAddress_var = transmitterAddress;
}

class Ieee80211TwoAddressFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211TwoAddressFrameDescriptor();
    virtual ~Ieee80211TwoAddressFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211TwoAddressFrameDescriptor);

Ieee80211TwoAddressFrameDescriptor::Ieee80211TwoAddressFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211TwoAddressFrame", "inet::ieee80211::Ieee80211OneAddressFrame")
{
}

Ieee80211TwoAddressFrameDescriptor::~Ieee80211TwoAddressFrameDescriptor()
{
}

bool Ieee80211TwoAddressFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211TwoAddressFrame *>(obj)!=NULL;
}

const char *Ieee80211TwoAddressFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211TwoAddressFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211TwoAddressFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211TwoAddressFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "transmitterAddress",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211TwoAddressFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "transmitterAddress")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211TwoAddressFrameDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211TwoAddressFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211TwoAddressFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211TwoAddressFrame *pp = (Ieee80211TwoAddressFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211TwoAddressFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211TwoAddressFrame *pp = (Ieee80211TwoAddressFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getTransmitterAddress(); return out.str();}
        default: return "";
    }
}

bool Ieee80211TwoAddressFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211TwoAddressFrame *pp = (Ieee80211TwoAddressFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211TwoAddressFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211TwoAddressFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211TwoAddressFrame *pp = (Ieee80211TwoAddressFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getTransmitterAddress()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211RTSFrame);

Ieee80211RTSFrame::Ieee80211RTSFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211TwoAddressFrame(name,kind)
{
    this->setByteLength(LENGTH_RTS / 8);
    this->setType(ST_RTS);
}

Ieee80211RTSFrame::Ieee80211RTSFrame(const Ieee80211RTSFrame& other) : ::inet::ieee80211::Ieee80211TwoAddressFrame(other)
{
    copy(other);
}

Ieee80211RTSFrame::~Ieee80211RTSFrame()
{
}

Ieee80211RTSFrame& Ieee80211RTSFrame::operator=(const Ieee80211RTSFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211TwoAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211RTSFrame::copy(const Ieee80211RTSFrame& other)
{
}

void Ieee80211RTSFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211TwoAddressFrame::parsimPack(b);
}

void Ieee80211RTSFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211TwoAddressFrame::parsimUnpack(b);
}

class Ieee80211RTSFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211RTSFrameDescriptor();
    virtual ~Ieee80211RTSFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211RTSFrameDescriptor);

Ieee80211RTSFrameDescriptor::Ieee80211RTSFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211RTSFrame", "inet::ieee80211::Ieee80211TwoAddressFrame")
{
}

Ieee80211RTSFrameDescriptor::~Ieee80211RTSFrameDescriptor()
{
}

bool Ieee80211RTSFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211RTSFrame *>(obj)!=NULL;
}

const char *Ieee80211RTSFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211RTSFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211RTSFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee80211RTSFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee80211RTSFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211RTSFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee80211RTSFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211RTSFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211RTSFrame *pp = (Ieee80211RTSFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211RTSFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211RTSFrame *pp = (Ieee80211RTSFrame *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee80211RTSFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211RTSFrame *pp = (Ieee80211RTSFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211RTSFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee80211RTSFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211RTSFrame *pp = (Ieee80211RTSFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211CTSFrame);

Ieee80211CTSFrame::Ieee80211CTSFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211OneAddressFrame(name,kind)
{
    this->setByteLength(LENGTH_CTS / 8);
    this->setType(ST_CTS);
}

Ieee80211CTSFrame::Ieee80211CTSFrame(const Ieee80211CTSFrame& other) : ::inet::ieee80211::Ieee80211OneAddressFrame(other)
{
    copy(other);
}

Ieee80211CTSFrame::~Ieee80211CTSFrame()
{
}

Ieee80211CTSFrame& Ieee80211CTSFrame::operator=(const Ieee80211CTSFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211OneAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211CTSFrame::copy(const Ieee80211CTSFrame& other)
{
}

void Ieee80211CTSFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211OneAddressFrame::parsimPack(b);
}

void Ieee80211CTSFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211OneAddressFrame::parsimUnpack(b);
}

class Ieee80211CTSFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211CTSFrameDescriptor();
    virtual ~Ieee80211CTSFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211CTSFrameDescriptor);

Ieee80211CTSFrameDescriptor::Ieee80211CTSFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211CTSFrame", "inet::ieee80211::Ieee80211OneAddressFrame")
{
}

Ieee80211CTSFrameDescriptor::~Ieee80211CTSFrameDescriptor()
{
}

bool Ieee80211CTSFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211CTSFrame *>(obj)!=NULL;
}

const char *Ieee80211CTSFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211CTSFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee80211CTSFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee80211CTSFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee80211CTSFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211CTSFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee80211CTSFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211CTSFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CTSFrame *pp = (Ieee80211CTSFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211CTSFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CTSFrame *pp = (Ieee80211CTSFrame *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee80211CTSFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CTSFrame *pp = (Ieee80211CTSFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee80211CTSFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee80211CTSFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211CTSFrame *pp = (Ieee80211CTSFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211DataOrMgmtFrame);

Ieee80211DataOrMgmtFrame::Ieee80211DataOrMgmtFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211TwoAddressFrame(name,kind)
{
    this->setByteLength(LENGTH_MGMT / 8);

    this->fragmentNumber_var = 0;
    this->sequenceNumber_var = 0;
}

Ieee80211DataOrMgmtFrame::Ieee80211DataOrMgmtFrame(const Ieee80211DataOrMgmtFrame& other) : ::inet::ieee80211::Ieee80211TwoAddressFrame(other)
{
    copy(other);
}

Ieee80211DataOrMgmtFrame::~Ieee80211DataOrMgmtFrame()
{
}

Ieee80211DataOrMgmtFrame& Ieee80211DataOrMgmtFrame::operator=(const Ieee80211DataOrMgmtFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211TwoAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DataOrMgmtFrame::copy(const Ieee80211DataOrMgmtFrame& other)
{
    this->address3_var = other.address3_var;
    this->fragmentNumber_var = other.fragmentNumber_var;
    this->sequenceNumber_var = other.sequenceNumber_var;
}

void Ieee80211DataOrMgmtFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211TwoAddressFrame::parsimPack(b);
    doPacking(b,this->address3_var);
    doPacking(b,this->fragmentNumber_var);
    doPacking(b,this->sequenceNumber_var);
}

void Ieee80211DataOrMgmtFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211TwoAddressFrame::parsimUnpack(b);
    doUnpacking(b,this->address3_var);
    doUnpacking(b,this->fragmentNumber_var);
    doUnpacking(b,this->sequenceNumber_var);
}

MACAddress& Ieee80211DataOrMgmtFrame::getAddress3()
{
    return address3_var;
}

void Ieee80211DataOrMgmtFrame::setAddress3(const MACAddress& address3)
{
    this->address3_var = address3;
}

short Ieee80211DataOrMgmtFrame::getFragmentNumber() const
{
    return fragmentNumber_var;
}

void Ieee80211DataOrMgmtFrame::setFragmentNumber(short fragmentNumber)
{
    this->fragmentNumber_var = fragmentNumber;
}

uint16 Ieee80211DataOrMgmtFrame::getSequenceNumber() const
{
    return sequenceNumber_var;
}

void Ieee80211DataOrMgmtFrame::setSequenceNumber(uint16 sequenceNumber)
{
    this->sequenceNumber_var = sequenceNumber;
}

class Ieee80211DataOrMgmtFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DataOrMgmtFrameDescriptor();
    virtual ~Ieee80211DataOrMgmtFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211DataOrMgmtFrameDescriptor);

Ieee80211DataOrMgmtFrameDescriptor::Ieee80211DataOrMgmtFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211DataOrMgmtFrame", "inet::ieee80211::Ieee80211TwoAddressFrame")
{
}

Ieee80211DataOrMgmtFrameDescriptor::~Ieee80211DataOrMgmtFrameDescriptor()
{
}

bool Ieee80211DataOrMgmtFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DataOrMgmtFrame *>(obj)!=NULL;
}

const char *Ieee80211DataOrMgmtFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DataOrMgmtFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int Ieee80211DataOrMgmtFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211DataOrMgmtFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "address3",
        "fragmentNumber",
        "sequenceNumber",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int Ieee80211DataOrMgmtFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "address3")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "fragmentNumber")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequenceNumber")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211DataOrMgmtFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "short",
        "uint16",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211DataOrMgmtFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211DataOrMgmtFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataOrMgmtFrame *pp = (Ieee80211DataOrMgmtFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211DataOrMgmtFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataOrMgmtFrame *pp = (Ieee80211DataOrMgmtFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress3(); return out.str();}
        case 1: return long2string(pp->getFragmentNumber());
        case 2: return ulong2string(pp->getSequenceNumber());
        default: return "";
    }
}

bool Ieee80211DataOrMgmtFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataOrMgmtFrame *pp = (Ieee80211DataOrMgmtFrame *)object; (void)pp;
    switch (field) {
        case 1: pp->setFragmentNumber(string2long(value)); return true;
        case 2: pp->setSequenceNumber(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211DataOrMgmtFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211DataOrMgmtFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataOrMgmtFrame *pp = (Ieee80211DataOrMgmtFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress3()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211DataFrame);

Ieee80211DataFrame::Ieee80211DataFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211DataOrMgmtFrame(name,kind)
{
    this->setByteLength(DATAFRAME_HEADER_MINLENGTH / 8);
    this->setType(ST_DATA);

    this->qos_var = 0;
    this->ackPolicy_var = 0;
    this->tid_var = 0;
}

Ieee80211DataFrame::Ieee80211DataFrame(const Ieee80211DataFrame& other) : ::inet::ieee80211::Ieee80211DataOrMgmtFrame(other)
{
    copy(other);
}

Ieee80211DataFrame::~Ieee80211DataFrame()
{
}

Ieee80211DataFrame& Ieee80211DataFrame::operator=(const Ieee80211DataFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211DataOrMgmtFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DataFrame::copy(const Ieee80211DataFrame& other)
{
    this->address4_var = other.address4_var;
    this->qos_var = other.qos_var;
    this->ackPolicy_var = other.ackPolicy_var;
    this->tid_var = other.tid_var;
}

void Ieee80211DataFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211DataOrMgmtFrame::parsimPack(b);
    doPacking(b,this->address4_var);
    doPacking(b,this->qos_var);
    doPacking(b,this->ackPolicy_var);
    doPacking(b,this->tid_var);
}

void Ieee80211DataFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211DataOrMgmtFrame::parsimUnpack(b);
    doUnpacking(b,this->address4_var);
    doUnpacking(b,this->qos_var);
    doUnpacking(b,this->ackPolicy_var);
    doUnpacking(b,this->tid_var);
}

MACAddress& Ieee80211DataFrame::getAddress4()
{
    return address4_var;
}

void Ieee80211DataFrame::setAddress4(const MACAddress& address4)
{
    this->address4_var = address4;
}

uint16 Ieee80211DataFrame::getQos() const
{
    return qos_var;
}

void Ieee80211DataFrame::setQos(uint16 qos)
{
    this->qos_var = qos;
}

int Ieee80211DataFrame::getAckPolicy() const
{
    return ackPolicy_var;
}

void Ieee80211DataFrame::setAckPolicy(int ackPolicy)
{
    this->ackPolicy_var = ackPolicy;
}

uint8 Ieee80211DataFrame::getTid() const
{
    return tid_var;
}

void Ieee80211DataFrame::setTid(uint8 tid)
{
    this->tid_var = tid;
}

class Ieee80211DataFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DataFrameDescriptor();
    virtual ~Ieee80211DataFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211DataFrameDescriptor);

Ieee80211DataFrameDescriptor::Ieee80211DataFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211DataFrame", "inet::ieee80211::Ieee80211DataOrMgmtFrame")
{
}

Ieee80211DataFrameDescriptor::~Ieee80211DataFrameDescriptor()
{
}

bool Ieee80211DataFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DataFrame *>(obj)!=NULL;
}

const char *Ieee80211DataFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DataFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int Ieee80211DataFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211DataFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "address4",
        "qos",
        "ackPolicy",
        "tid",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int Ieee80211DataFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "address4")==0) return base+0;
    if (fieldName[0]=='q' && strcmp(fieldName, "qos")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "ackPolicy")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "tid")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211DataFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "uint16",
        "int",
        "uint8",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211DataFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "inet::ieee80211::AckPolicy";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211DataFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataFrame *pp = (Ieee80211DataFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211DataFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataFrame *pp = (Ieee80211DataFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress4(); return out.str();}
        case 1: return ulong2string(pp->getQos());
        case 2: return long2string(pp->getAckPolicy());
        case 3: return ulong2string(pp->getTid());
        default: return "";
    }
}

bool Ieee80211DataFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataFrame *pp = (Ieee80211DataFrame *)object; (void)pp;
    switch (field) {
        case 1: pp->setQos(string2ulong(value)); return true;
        case 2: pp->setAckPolicy(string2long(value)); return true;
        case 3: pp->setTid(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211DataFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211DataFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataFrame *pp = (Ieee80211DataFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress4()); break;
        default: return NULL;
    }
}

Register_Class(Ieee80211DataFrameWithSNAP);

Ieee80211DataFrameWithSNAP::Ieee80211DataFrameWithSNAP(const char *name, int kind) : ::inet::ieee80211::Ieee80211DataFrame(name,kind)
{
    this->setByteLength(DATAFRAME_HEADER_MINLENGTH / 8 + SNAP_HEADER_BYTES);

    this->etherType_var = 0;
}

Ieee80211DataFrameWithSNAP::Ieee80211DataFrameWithSNAP(const Ieee80211DataFrameWithSNAP& other) : ::inet::ieee80211::Ieee80211DataFrame(other)
{
    copy(other);
}

Ieee80211DataFrameWithSNAP::~Ieee80211DataFrameWithSNAP()
{
}

Ieee80211DataFrameWithSNAP& Ieee80211DataFrameWithSNAP::operator=(const Ieee80211DataFrameWithSNAP& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211DataFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DataFrameWithSNAP::copy(const Ieee80211DataFrameWithSNAP& other)
{
    this->etherType_var = other.etherType_var;
}

void Ieee80211DataFrameWithSNAP::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211DataFrame::parsimPack(b);
    doPacking(b,this->etherType_var);
}

void Ieee80211DataFrameWithSNAP::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211DataFrame::parsimUnpack(b);
    doUnpacking(b,this->etherType_var);
}

int Ieee80211DataFrameWithSNAP::getEtherType() const
{
    return etherType_var;
}

void Ieee80211DataFrameWithSNAP::setEtherType(int etherType)
{
    this->etherType_var = etherType;
}

class Ieee80211DataFrameWithSNAPDescriptor : public cClassDescriptor
{
  public:
    Ieee80211DataFrameWithSNAPDescriptor();
    virtual ~Ieee80211DataFrameWithSNAPDescriptor();

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

Register_ClassDescriptor(Ieee80211DataFrameWithSNAPDescriptor);

Ieee80211DataFrameWithSNAPDescriptor::Ieee80211DataFrameWithSNAPDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211DataFrameWithSNAP", "inet::ieee80211::Ieee80211DataFrame")
{
}

Ieee80211DataFrameWithSNAPDescriptor::~Ieee80211DataFrameWithSNAPDescriptor()
{
}

bool Ieee80211DataFrameWithSNAPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211DataFrameWithSNAP *>(obj)!=NULL;
}

const char *Ieee80211DataFrameWithSNAPDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211DataFrameWithSNAPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211DataFrameWithSNAPDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211DataFrameWithSNAPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "etherType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211DataFrameWithSNAPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "etherType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211DataFrameWithSNAPDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211DataFrameWithSNAPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "EtherType";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211DataFrameWithSNAPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataFrameWithSNAP *pp = (Ieee80211DataFrameWithSNAP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211DataFrameWithSNAPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataFrameWithSNAP *pp = (Ieee80211DataFrameWithSNAP *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getEtherType());
        default: return "";
    }
}

bool Ieee80211DataFrameWithSNAPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataFrameWithSNAP *pp = (Ieee80211DataFrameWithSNAP *)object; (void)pp;
    switch (field) {
        case 0: pp->setEtherType(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211DataFrameWithSNAPDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211DataFrameWithSNAPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211DataFrameWithSNAP *pp = (Ieee80211DataFrameWithSNAP *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee80211ManagementFrame);

Ieee80211ManagementFrame::Ieee80211ManagementFrame(const char *name, int kind) : ::inet::ieee80211::Ieee80211DataOrMgmtFrame(name,kind)
{
    this->Category_var = 0;
}

Ieee80211ManagementFrame::Ieee80211ManagementFrame(const Ieee80211ManagementFrame& other) : ::inet::ieee80211::Ieee80211DataOrMgmtFrame(other)
{
    copy(other);
}

Ieee80211ManagementFrame::~Ieee80211ManagementFrame()
{
}

Ieee80211ManagementFrame& Ieee80211ManagementFrame::operator=(const Ieee80211ManagementFrame& other)
{
    if (this==&other) return *this;
    ::inet::ieee80211::Ieee80211DataOrMgmtFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ManagementFrame::copy(const Ieee80211ManagementFrame& other)
{
    this->Category_var = other.Category_var;
}

void Ieee80211ManagementFrame::parsimPack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211DataOrMgmtFrame::parsimPack(b);
    doPacking(b,this->Category_var);
}

void Ieee80211ManagementFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::ieee80211::Ieee80211DataOrMgmtFrame::parsimUnpack(b);
    doUnpacking(b,this->Category_var);
}

short Ieee80211ManagementFrame::getCategory() const
{
    return Category_var;
}

void Ieee80211ManagementFrame::setCategory(short Category)
{
    this->Category_var = Category;
}

class Ieee80211ManagementFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211ManagementFrameDescriptor();
    virtual ~Ieee80211ManagementFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211ManagementFrameDescriptor);

Ieee80211ManagementFrameDescriptor::Ieee80211ManagementFrameDescriptor() : cClassDescriptor("inet::ieee80211::Ieee80211ManagementFrame", "inet::ieee80211::Ieee80211DataOrMgmtFrame")
{
}

Ieee80211ManagementFrameDescriptor::~Ieee80211ManagementFrameDescriptor()
{
}

bool Ieee80211ManagementFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211ManagementFrame *>(obj)!=NULL;
}

const char *Ieee80211ManagementFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211ManagementFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211ManagementFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211ManagementFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "Category",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211ManagementFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='C' && strcmp(fieldName, "Category")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211ManagementFrameDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211ManagementFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211ManagementFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ManagementFrame *pp = (Ieee80211ManagementFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211ManagementFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ManagementFrame *pp = (Ieee80211ManagementFrame *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCategory());
        default: return "";
    }
}

bool Ieee80211ManagementFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ManagementFrame *pp = (Ieee80211ManagementFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setCategory(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211ManagementFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211ManagementFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211ManagementFrame *pp = (Ieee80211ManagementFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace ieee80211
} // namespace inet

