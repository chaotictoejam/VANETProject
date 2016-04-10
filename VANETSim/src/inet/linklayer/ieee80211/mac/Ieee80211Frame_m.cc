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
    cEnum *e = cEnum::find("Ieee80211FrameType");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee80211FrameType"));
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
    e->insert(ST_LBMS_REQUEST, "ST_LBMS_REQUEST");
    e->insert(ST_LBMS_REPORT, "ST_LBMS_REPORT");
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

Ieee80211FrameDescriptor::Ieee80211FrameDescriptor() : cClassDescriptor("Ieee80211Frame", "cPacket")
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
            if (!strcmp(propertyname,"enum")) return "Ieee80211FrameType";
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

Ieee80211OneAddressFrame::Ieee80211OneAddressFrame(const char *name, int kind) : ::Ieee80211Frame(name,kind)
{
}

Ieee80211OneAddressFrame::Ieee80211OneAddressFrame(const Ieee80211OneAddressFrame& other) : ::Ieee80211Frame(other)
{
    copy(other);
}

Ieee80211OneAddressFrame::~Ieee80211OneAddressFrame()
{
}

Ieee80211OneAddressFrame& Ieee80211OneAddressFrame::operator=(const Ieee80211OneAddressFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211Frame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211OneAddressFrame::copy(const Ieee80211OneAddressFrame& other)
{
}

void Ieee80211OneAddressFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211Frame::parsimPack(b);
}

void Ieee80211OneAddressFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211Frame::parsimUnpack(b);
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

Ieee80211OneAddressFrameDescriptor::Ieee80211OneAddressFrameDescriptor() : cClassDescriptor("Ieee80211OneAddressFrame", "Ieee80211Frame")
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

Ieee80211ACKFrame::Ieee80211ACKFrame(const char *name, int kind) : ::Ieee80211OneAddressFrame(name,kind)
{
    this->setByteLength(LENGTH_ACK / 8);
    this->setType(ST_ACK);
}

Ieee80211ACKFrame::Ieee80211ACKFrame(const Ieee80211ACKFrame& other) : ::Ieee80211OneAddressFrame(other)
{
    copy(other);
}

Ieee80211ACKFrame::~Ieee80211ACKFrame()
{
}

Ieee80211ACKFrame& Ieee80211ACKFrame::operator=(const Ieee80211ACKFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211OneAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ACKFrame::copy(const Ieee80211ACKFrame& other)
{
}

void Ieee80211ACKFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211OneAddressFrame::parsimPack(b);
}

void Ieee80211ACKFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211OneAddressFrame::parsimUnpack(b);
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

Ieee80211ACKFrameDescriptor::Ieee80211ACKFrameDescriptor() : cClassDescriptor("Ieee80211ACKFrame", "Ieee80211OneAddressFrame")
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

Ieee80211TwoAddressFrame::Ieee80211TwoAddressFrame(const char *name, int kind) : ::Ieee80211OneAddressFrame(name,kind)
{
    this->setByteLength(LENGTH_RTS / 8);

}

Ieee80211TwoAddressFrame::Ieee80211TwoAddressFrame(const Ieee80211TwoAddressFrame& other) : ::Ieee80211OneAddressFrame(other)
{
    copy(other);
}

Ieee80211TwoAddressFrame::~Ieee80211TwoAddressFrame()
{
}

Ieee80211TwoAddressFrame& Ieee80211TwoAddressFrame::operator=(const Ieee80211TwoAddressFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211OneAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211TwoAddressFrame::copy(const Ieee80211TwoAddressFrame& other)
{
    this->transmitterAddress_var = other.transmitterAddress_var;
}

void Ieee80211TwoAddressFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211OneAddressFrame::parsimPack(b);
    doPacking(b,this->transmitterAddress_var);
}

void Ieee80211TwoAddressFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211OneAddressFrame::parsimUnpack(b);
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

Ieee80211TwoAddressFrameDescriptor::Ieee80211TwoAddressFrameDescriptor() : cClassDescriptor("Ieee80211TwoAddressFrame", "Ieee80211OneAddressFrame")
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

Ieee80211RTSFrame::Ieee80211RTSFrame(const char *name, int kind) : ::Ieee80211TwoAddressFrame(name,kind)
{
    this->setByteLength(LENGTH_RTS / 8);
    this->setType(ST_RTS);
}

Ieee80211RTSFrame::Ieee80211RTSFrame(const Ieee80211RTSFrame& other) : ::Ieee80211TwoAddressFrame(other)
{
    copy(other);
}

Ieee80211RTSFrame::~Ieee80211RTSFrame()
{
}

Ieee80211RTSFrame& Ieee80211RTSFrame::operator=(const Ieee80211RTSFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211TwoAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211RTSFrame::copy(const Ieee80211RTSFrame& other)
{
}

void Ieee80211RTSFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211TwoAddressFrame::parsimPack(b);
}

void Ieee80211RTSFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211TwoAddressFrame::parsimUnpack(b);
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

Ieee80211RTSFrameDescriptor::Ieee80211RTSFrameDescriptor() : cClassDescriptor("Ieee80211RTSFrame", "Ieee80211TwoAddressFrame")
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

Ieee80211CTSFrame::Ieee80211CTSFrame(const char *name, int kind) : ::Ieee80211OneAddressFrame(name,kind)
{
    this->setByteLength(LENGTH_CTS / 8);
    this->setType(ST_CTS);
}

Ieee80211CTSFrame::Ieee80211CTSFrame(const Ieee80211CTSFrame& other) : ::Ieee80211OneAddressFrame(other)
{
    copy(other);
}

Ieee80211CTSFrame::~Ieee80211CTSFrame()
{
}

Ieee80211CTSFrame& Ieee80211CTSFrame::operator=(const Ieee80211CTSFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211OneAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211CTSFrame::copy(const Ieee80211CTSFrame& other)
{
}

void Ieee80211CTSFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211OneAddressFrame::parsimPack(b);
}

void Ieee80211CTSFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211OneAddressFrame::parsimUnpack(b);
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

Ieee80211CTSFrameDescriptor::Ieee80211CTSFrameDescriptor() : cClassDescriptor("Ieee80211CTSFrame", "Ieee80211OneAddressFrame")
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

Ieee80211DataOrMgmtFrame::Ieee80211DataOrMgmtFrame(const char *name, int kind) : ::Ieee80211TwoAddressFrame(name,kind)
{
    this->setByteLength(LENGTH_MGMT / 8);

    this->fragmentNumber_var = 0;
    this->sequenceNumber_var = 0;
}

Ieee80211DataOrMgmtFrame::Ieee80211DataOrMgmtFrame(const Ieee80211DataOrMgmtFrame& other) : ::Ieee80211TwoAddressFrame(other)
{
    copy(other);
}

Ieee80211DataOrMgmtFrame::~Ieee80211DataOrMgmtFrame()
{
}

Ieee80211DataOrMgmtFrame& Ieee80211DataOrMgmtFrame::operator=(const Ieee80211DataOrMgmtFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211TwoAddressFrame::operator=(other);
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
    ::Ieee80211TwoAddressFrame::parsimPack(b);
    doPacking(b,this->address3_var);
    doPacking(b,this->fragmentNumber_var);
    doPacking(b,this->sequenceNumber_var);
}

void Ieee80211DataOrMgmtFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211TwoAddressFrame::parsimUnpack(b);
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

Ieee80211DataOrMgmtFrameDescriptor::Ieee80211DataOrMgmtFrameDescriptor() : cClassDescriptor("Ieee80211DataOrMgmtFrame", "Ieee80211TwoAddressFrame")
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

Ieee80211DataFrame::Ieee80211DataFrame(const char *name, int kind) : ::Ieee80211DataOrMgmtFrame(name,kind)
{
    this->setByteLength(LENGTH_DATAHDR / 8);
    this->setType(ST_DATA);

}

Ieee80211DataFrame::Ieee80211DataFrame(const Ieee80211DataFrame& other) : ::Ieee80211DataOrMgmtFrame(other)
{
    copy(other);
}

Ieee80211DataFrame::~Ieee80211DataFrame()
{
}

Ieee80211DataFrame& Ieee80211DataFrame::operator=(const Ieee80211DataFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211DataOrMgmtFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DataFrame::copy(const Ieee80211DataFrame& other)
{
    this->address4_var = other.address4_var;
}

void Ieee80211DataFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211DataOrMgmtFrame::parsimPack(b);
    doPacking(b,this->address4_var);
}

void Ieee80211DataFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211DataOrMgmtFrame::parsimUnpack(b);
    doUnpacking(b,this->address4_var);
}

MACAddress& Ieee80211DataFrame::getAddress4()
{
    return address4_var;
}

void Ieee80211DataFrame::setAddress4(const MACAddress& address4)
{
    this->address4_var = address4;
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

Ieee80211DataFrameDescriptor::Ieee80211DataFrameDescriptor() : cClassDescriptor("Ieee80211DataFrame", "Ieee80211DataOrMgmtFrame")
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
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
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
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
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
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee80211DataFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "address4")==0) return base+0;
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
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
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

Ieee80211DataFrameWithSNAP::Ieee80211DataFrameWithSNAP(const char *name, int kind) : ::Ieee80211DataFrame(name,kind)
{
    this->setByteLength(LENGTH_DATAHDR / 8 + SNAP_HEADER_BYTES);

    this->etherType_var = 0;
}

Ieee80211DataFrameWithSNAP::Ieee80211DataFrameWithSNAP(const Ieee80211DataFrameWithSNAP& other) : ::Ieee80211DataFrame(other)
{
    copy(other);
}

Ieee80211DataFrameWithSNAP::~Ieee80211DataFrameWithSNAP()
{
}

Ieee80211DataFrameWithSNAP& Ieee80211DataFrameWithSNAP::operator=(const Ieee80211DataFrameWithSNAP& other)
{
    if (this==&other) return *this;
    ::Ieee80211DataFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211DataFrameWithSNAP::copy(const Ieee80211DataFrameWithSNAP& other)
{
    this->etherType_var = other.etherType_var;
}

void Ieee80211DataFrameWithSNAP::parsimPack(cCommBuffer *b)
{
    ::Ieee80211DataFrame::parsimPack(b);
    doPacking(b,this->etherType_var);
}

void Ieee80211DataFrameWithSNAP::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211DataFrame::parsimUnpack(b);
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

Ieee80211DataFrameWithSNAPDescriptor::Ieee80211DataFrameWithSNAPDescriptor() : cClassDescriptor("Ieee80211DataFrameWithSNAP", "Ieee80211DataFrame")
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

Ieee80211ManagementFrame::Ieee80211ManagementFrame(const char *name, int kind) : ::Ieee80211DataOrMgmtFrame(name,kind)
{
    this->Category_var = 0;
}

Ieee80211ManagementFrame::Ieee80211ManagementFrame(const Ieee80211ManagementFrame& other) : ::Ieee80211DataOrMgmtFrame(other)
{
    copy(other);
}

Ieee80211ManagementFrame::~Ieee80211ManagementFrame()
{
}

Ieee80211ManagementFrame& Ieee80211ManagementFrame::operator=(const Ieee80211ManagementFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211DataOrMgmtFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211ManagementFrame::copy(const Ieee80211ManagementFrame& other)
{
    this->Category_var = other.Category_var;
}

void Ieee80211ManagementFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211DataOrMgmtFrame::parsimPack(b);
    doPacking(b,this->Category_var);
}

void Ieee80211ManagementFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211DataOrMgmtFrame::parsimUnpack(b);
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

Ieee80211ManagementFrameDescriptor::Ieee80211ManagementFrameDescriptor() : cClassDescriptor("Ieee80211ManagementFrame", "Ieee80211DataOrMgmtFrame")
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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("MeshType");
    if (!e) enums.getInstance()->add(e = new cEnum("MeshType"));
    e->insert(UPPERMESSAGE, "UPPERMESSAGE");
    e->insert(ROUTING, "ROUTING");
);

Register_Class(Ieee80211MeshFrame);

Ieee80211MeshFrame::Ieee80211MeshFrame(const char *name, int kind) : ::Ieee80211DataFrame(name,kind)
{
    this->setType(ST_DATA);
    this->setByteLength(38);

    this->TTL_var = 15;
    this->subType_var = 0;
    this->seqNumber_var = 0;
    this->totalHops_var = 0;
    this->totalStaticHops_var = 0;
    channels_arraysize = 0;
    this->channels_var = 0;
    this->isFragment_var = false;
    this->realLength_var = 0;
}

Ieee80211MeshFrame::Ieee80211MeshFrame(const Ieee80211MeshFrame& other) : ::Ieee80211DataFrame(other)
{
    channels_arraysize = 0;
    this->channels_var = 0;
    copy(other);
}

Ieee80211MeshFrame::~Ieee80211MeshFrame()
{
    delete [] channels_var;
}

Ieee80211MeshFrame& Ieee80211MeshFrame::operator=(const Ieee80211MeshFrame& other)
{
    if (this==&other) return *this;
    ::Ieee80211DataFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211MeshFrame::copy(const Ieee80211MeshFrame& other)
{
    this->TTL_var = other.TTL_var;
    this->subType_var = other.subType_var;
    this->seqNumber_var = other.seqNumber_var;
    this->finalAddress_var = other.finalAddress_var;
    this->totalHops_var = other.totalHops_var;
    this->totalStaticHops_var = other.totalStaticHops_var;
    delete [] this->channels_var;
    this->channels_var = (other.channels_arraysize==0) ? NULL : new int[other.channels_arraysize];
    channels_arraysize = other.channels_arraysize;
    for (unsigned int i=0; i<channels_arraysize; i++)
        this->channels_var[i] = other.channels_var[i];
    this->isFragment_var = other.isFragment_var;
    this->realLength_var = other.realLength_var;
}

void Ieee80211MeshFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee80211DataFrame::parsimPack(b);
    doPacking(b,this->TTL_var);
    doPacking(b,this->subType_var);
    doPacking(b,this->seqNumber_var);
    doPacking(b,this->finalAddress_var);
    doPacking(b,this->totalHops_var);
    doPacking(b,this->totalStaticHops_var);
    b->pack(channels_arraysize);
    doPacking(b,this->channels_var,channels_arraysize);
    doPacking(b,this->isFragment_var);
    doPacking(b,this->realLength_var);
}

void Ieee80211MeshFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211DataFrame::parsimUnpack(b);
    doUnpacking(b,this->TTL_var);
    doUnpacking(b,this->subType_var);
    doUnpacking(b,this->seqNumber_var);
    doUnpacking(b,this->finalAddress_var);
    doUnpacking(b,this->totalHops_var);
    doUnpacking(b,this->totalStaticHops_var);
    delete [] this->channels_var;
    b->unpack(channels_arraysize);
    if (channels_arraysize==0) {
        this->channels_var = 0;
    } else {
        this->channels_var = new int[channels_arraysize];
        doUnpacking(b,this->channels_var,channels_arraysize);
    }
    doUnpacking(b,this->isFragment_var);
    doUnpacking(b,this->realLength_var);
}

short Ieee80211MeshFrame::getTTL() const
{
    return TTL_var;
}

void Ieee80211MeshFrame::setTTL(short TTL)
{
    this->TTL_var = TTL;
}

unsigned short Ieee80211MeshFrame::getSubType() const
{
    return subType_var;
}

void Ieee80211MeshFrame::setSubType(unsigned short subType)
{
    this->subType_var = subType;
}

long Ieee80211MeshFrame::getSeqNumber() const
{
    return seqNumber_var;
}

void Ieee80211MeshFrame::setSeqNumber(long seqNumber)
{
    this->seqNumber_var = seqNumber;
}

MACAddress& Ieee80211MeshFrame::getFinalAddress()
{
    return finalAddress_var;
}

void Ieee80211MeshFrame::setFinalAddress(const MACAddress& finalAddress)
{
    this->finalAddress_var = finalAddress;
}

unsigned int Ieee80211MeshFrame::getTotalHops() const
{
    return totalHops_var;
}

void Ieee80211MeshFrame::setTotalHops(unsigned int totalHops)
{
    this->totalHops_var = totalHops;
}

unsigned int Ieee80211MeshFrame::getTotalStaticHops() const
{
    return totalStaticHops_var;
}

void Ieee80211MeshFrame::setTotalStaticHops(unsigned int totalStaticHops)
{
    this->totalStaticHops_var = totalStaticHops;
}

void Ieee80211MeshFrame::setChannelsArraySize(unsigned int size)
{
    int *channels_var2 = (size==0) ? NULL : new int[size];
    unsigned int sz = channels_arraysize < size ? channels_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        channels_var2[i] = this->channels_var[i];
    for (unsigned int i=sz; i<size; i++)
        channels_var2[i] = 0;
    channels_arraysize = size;
    delete [] this->channels_var;
    this->channels_var = channels_var2;
}

unsigned int Ieee80211MeshFrame::getChannelsArraySize() const
{
    return channels_arraysize;
}

int Ieee80211MeshFrame::getChannels(unsigned int k) const
{
    if (k>=channels_arraysize) throw cRuntimeError("Array of size %d indexed by %d", channels_arraysize, k);
    return channels_var[k];
}

void Ieee80211MeshFrame::setChannels(unsigned int k, int channels)
{
    if (k>=channels_arraysize) throw cRuntimeError("Array of size %d indexed by %d", channels_arraysize, k);
    this->channels_var[k] = channels;
}

bool Ieee80211MeshFrame::getIsFragment() const
{
    return isFragment_var;
}

void Ieee80211MeshFrame::setIsFragment(bool isFragment)
{
    this->isFragment_var = isFragment;
}

unsigned long Ieee80211MeshFrame::getRealLength() const
{
    return realLength_var;
}

void Ieee80211MeshFrame::setRealLength(unsigned long realLength)
{
    this->realLength_var = realLength;
}

class Ieee80211MeshFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211MeshFrameDescriptor();
    virtual ~Ieee80211MeshFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211MeshFrameDescriptor);

Ieee80211MeshFrameDescriptor::Ieee80211MeshFrameDescriptor() : cClassDescriptor("Ieee80211MeshFrame", "Ieee80211DataFrame")
{
}

Ieee80211MeshFrameDescriptor::~Ieee80211MeshFrameDescriptor()
{
}

bool Ieee80211MeshFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211MeshFrame *>(obj)!=NULL;
}

const char *Ieee80211MeshFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211MeshFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int Ieee80211MeshFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<9) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211MeshFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "TTL",
        "subType",
        "seqNumber",
        "finalAddress",
        "totalHops",
        "totalStaticHops",
        "channels",
        "isFragment",
        "realLength",
    };
    return (field>=0 && field<9) ? fieldNames[field] : NULL;
}

int Ieee80211MeshFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='T' && strcmp(fieldName, "TTL")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "subType")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNumber")==0) return base+2;
    if (fieldName[0]=='f' && strcmp(fieldName, "finalAddress")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "totalHops")==0) return base+4;
    if (fieldName[0]=='t' && strcmp(fieldName, "totalStaticHops")==0) return base+5;
    if (fieldName[0]=='c' && strcmp(fieldName, "channels")==0) return base+6;
    if (fieldName[0]=='i' && strcmp(fieldName, "isFragment")==0) return base+7;
    if (fieldName[0]=='r' && strcmp(fieldName, "realLength")==0) return base+8;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211MeshFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "unsigned short",
        "long",
        "MACAddress",
        "unsigned int",
        "unsigned int",
        "int",
        "bool",
        "unsigned long",
    };
    return (field>=0 && field<9) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211MeshFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211MeshFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211MeshFrame *pp = (Ieee80211MeshFrame *)object; (void)pp;
    switch (field) {
        case 6: return pp->getChannelsArraySize();
        default: return 0;
    }
}

std::string Ieee80211MeshFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211MeshFrame *pp = (Ieee80211MeshFrame *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getTTL());
        case 1: return ulong2string(pp->getSubType());
        case 2: return long2string(pp->getSeqNumber());
        case 3: {std::stringstream out; out << pp->getFinalAddress(); return out.str();}
        case 4: return ulong2string(pp->getTotalHops());
        case 5: return ulong2string(pp->getTotalStaticHops());
        case 6: return long2string(pp->getChannels(i));
        case 7: return bool2string(pp->getIsFragment());
        case 8: return ulong2string(pp->getRealLength());
        default: return "";
    }
}

bool Ieee80211MeshFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211MeshFrame *pp = (Ieee80211MeshFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setTTL(string2long(value)); return true;
        case 1: pp->setSubType(string2ulong(value)); return true;
        case 2: pp->setSeqNumber(string2long(value)); return true;
        case 4: pp->setTotalHops(string2ulong(value)); return true;
        case 5: pp->setTotalStaticHops(string2ulong(value)); return true;
        case 6: pp->setChannels(i,string2long(value)); return true;
        case 7: pp->setIsFragment(string2bool(value)); return true;
        case 8: pp->setRealLength(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211MeshFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *Ieee80211MeshFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211MeshFrame *pp = (Ieee80211MeshFrame *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getFinalAddress()); break;
        default: return NULL;
    }
}

Ieee80211BlockAckFrameReq_Base::Ieee80211BlockAckFrameReq_Base(const char *name, int kind) : ::Ieee80211TwoAddressFrame(name,kind)
{
    this->setType(ST_BLOCKACK_REQ);
    this->setByteLength(24);

    this->barAckPolicy_var = 0;
    this->multiTid_var = 0;
    this->compressed_var = 0;
    this->tidInfo_var = 0;
    this->fragNumber_var = 0;
    this->startingSequence_var = 0;
}

Ieee80211BlockAckFrameReq_Base::Ieee80211BlockAckFrameReq_Base(const Ieee80211BlockAckFrameReq_Base& other) : ::Ieee80211TwoAddressFrame(other)
{
    copy(other);
}

Ieee80211BlockAckFrameReq_Base::~Ieee80211BlockAckFrameReq_Base()
{
}

Ieee80211BlockAckFrameReq_Base& Ieee80211BlockAckFrameReq_Base::operator=(const Ieee80211BlockAckFrameReq_Base& other)
{
    if (this==&other) return *this;
    ::Ieee80211TwoAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211BlockAckFrameReq_Base::copy(const Ieee80211BlockAckFrameReq_Base& other)
{
    this->barAckPolicy_var = other.barAckPolicy_var;
    this->multiTid_var = other.multiTid_var;
    this->compressed_var = other.compressed_var;
    this->tidInfo_var = other.tidInfo_var;
    this->fragNumber_var = other.fragNumber_var;
    this->startingSequence_var = other.startingSequence_var;
}

void Ieee80211BlockAckFrameReq_Base::parsimPack(cCommBuffer *b)
{
    ::Ieee80211TwoAddressFrame::parsimPack(b);
    doPacking(b,this->barAckPolicy_var);
    doPacking(b,this->multiTid_var);
    doPacking(b,this->compressed_var);
    doPacking(b,this->tidInfo_var);
    doPacking(b,this->fragNumber_var);
    doPacking(b,this->startingSequence_var);
}

void Ieee80211BlockAckFrameReq_Base::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211TwoAddressFrame::parsimUnpack(b);
    doUnpacking(b,this->barAckPolicy_var);
    doUnpacking(b,this->multiTid_var);
    doUnpacking(b,this->compressed_var);
    doUnpacking(b,this->tidInfo_var);
    doUnpacking(b,this->fragNumber_var);
    doUnpacking(b,this->startingSequence_var);
}

bool Ieee80211BlockAckFrameReq_Base::getBarAckPolicy() const
{
    return barAckPolicy_var;
}

void Ieee80211BlockAckFrameReq_Base::setBarAckPolicy(bool barAckPolicy)
{
    this->barAckPolicy_var = barAckPolicy;
}

bool Ieee80211BlockAckFrameReq_Base::getMultiTid() const
{
    return multiTid_var;
}

void Ieee80211BlockAckFrameReq_Base::setMultiTid(bool multiTid)
{
    this->multiTid_var = multiTid;
}

bool Ieee80211BlockAckFrameReq_Base::getCompressed() const
{
    return compressed_var;
}

void Ieee80211BlockAckFrameReq_Base::setCompressed(bool compressed)
{
    this->compressed_var = compressed;
}

unsigned short Ieee80211BlockAckFrameReq_Base::getTidInfo() const
{
    return tidInfo_var;
}

void Ieee80211BlockAckFrameReq_Base::setTidInfo(unsigned short tidInfo)
{
    this->tidInfo_var = tidInfo;
}

unsigned short Ieee80211BlockAckFrameReq_Base::getFragNumber() const
{
    return fragNumber_var;
}

void Ieee80211BlockAckFrameReq_Base::setFragNumber(unsigned short fragNumber)
{
    this->fragNumber_var = fragNumber;
}

unsigned short Ieee80211BlockAckFrameReq_Base::getStartingSequence() const
{
    return startingSequence_var;
}

void Ieee80211BlockAckFrameReq_Base::setStartingSequence(unsigned short startingSequence)
{
    this->startingSequence_var = startingSequence;
}

class Ieee80211BlockAckFrameReqDescriptor : public cClassDescriptor
{
  public:
    Ieee80211BlockAckFrameReqDescriptor();
    virtual ~Ieee80211BlockAckFrameReqDescriptor();

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

Register_ClassDescriptor(Ieee80211BlockAckFrameReqDescriptor);

Ieee80211BlockAckFrameReqDescriptor::Ieee80211BlockAckFrameReqDescriptor() : cClassDescriptor("Ieee80211BlockAckFrameReq", "Ieee80211TwoAddressFrame")
{
}

Ieee80211BlockAckFrameReqDescriptor::~Ieee80211BlockAckFrameReqDescriptor()
{
}

bool Ieee80211BlockAckFrameReqDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211BlockAckFrameReq_Base *>(obj)!=NULL;
}

const char *Ieee80211BlockAckFrameReqDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211BlockAckFrameReqDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int Ieee80211BlockAckFrameReqDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *Ieee80211BlockAckFrameReqDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "barAckPolicy",
        "multiTid",
        "compressed",
        "tidInfo",
        "fragNumber",
        "startingSequence",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int Ieee80211BlockAckFrameReqDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "barAckPolicy")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "multiTid")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "compressed")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "tidInfo")==0) return base+3;
    if (fieldName[0]=='f' && strcmp(fieldName, "fragNumber")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "startingSequence")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211BlockAckFrameReqDescriptor::getFieldTypeString(void *object, int field) const
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
        "unsigned short",
        "unsigned short",
        "unsigned short",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211BlockAckFrameReqDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211BlockAckFrameReqDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BlockAckFrameReq_Base *pp = (Ieee80211BlockAckFrameReq_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211BlockAckFrameReqDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BlockAckFrameReq_Base *pp = (Ieee80211BlockAckFrameReq_Base *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getBarAckPolicy());
        case 1: return bool2string(pp->getMultiTid());
        case 2: return bool2string(pp->getCompressed());
        case 3: return ulong2string(pp->getTidInfo());
        case 4: return ulong2string(pp->getFragNumber());
        case 5: return ulong2string(pp->getStartingSequence());
        default: return "";
    }
}

bool Ieee80211BlockAckFrameReqDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BlockAckFrameReq_Base *pp = (Ieee80211BlockAckFrameReq_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setBarAckPolicy(string2bool(value)); return true;
        case 1: pp->setMultiTid(string2bool(value)); return true;
        case 2: pp->setCompressed(string2bool(value)); return true;
        case 3: pp->setTidInfo(string2ulong(value)); return true;
        case 4: pp->setFragNumber(string2ulong(value)); return true;
        case 5: pp->setStartingSequence(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211BlockAckFrameReqDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211BlockAckFrameReqDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BlockAckFrameReq_Base *pp = (Ieee80211BlockAckFrameReq_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Ieee80211BlockAckFrame_Base::Ieee80211BlockAckFrame_Base(const char *name, int kind) : ::Ieee80211TwoAddressFrame(name,kind)
{
    this->setType(ST_BLOCKACK);
    this->setByteLength(152);

    this->baAckPolicy_var = 0;
    this->multiTid_var = 0;
    this->compressed_var = 0;
    this->tidInfo_var = 0;
    this->startingSequence_var = 0;
}

Ieee80211BlockAckFrame_Base::Ieee80211BlockAckFrame_Base(const Ieee80211BlockAckFrame_Base& other) : ::Ieee80211TwoAddressFrame(other)
{
    copy(other);
}

Ieee80211BlockAckFrame_Base::~Ieee80211BlockAckFrame_Base()
{
}

Ieee80211BlockAckFrame_Base& Ieee80211BlockAckFrame_Base::operator=(const Ieee80211BlockAckFrame_Base& other)
{
    if (this==&other) return *this;
    ::Ieee80211TwoAddressFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211BlockAckFrame_Base::copy(const Ieee80211BlockAckFrame_Base& other)
{
    this->baAckPolicy_var = other.baAckPolicy_var;
    this->multiTid_var = other.multiTid_var;
    this->compressed_var = other.compressed_var;
    this->tidInfo_var = other.tidInfo_var;
    this->startingSequence_var = other.startingSequence_var;
}

void Ieee80211BlockAckFrame_Base::parsimPack(cCommBuffer *b)
{
    ::Ieee80211TwoAddressFrame::parsimPack(b);
    doPacking(b,this->baAckPolicy_var);
    doPacking(b,this->multiTid_var);
    doPacking(b,this->compressed_var);
    doPacking(b,this->tidInfo_var);
    doPacking(b,this->startingSequence_var);
}

void Ieee80211BlockAckFrame_Base::parsimUnpack(cCommBuffer *b)
{
    ::Ieee80211TwoAddressFrame::parsimUnpack(b);
    doUnpacking(b,this->baAckPolicy_var);
    doUnpacking(b,this->multiTid_var);
    doUnpacking(b,this->compressed_var);
    doUnpacking(b,this->tidInfo_var);
    doUnpacking(b,this->startingSequence_var);
}

bool Ieee80211BlockAckFrame_Base::getBaAckPolicy() const
{
    return baAckPolicy_var;
}

void Ieee80211BlockAckFrame_Base::setBaAckPolicy(bool baAckPolicy)
{
    this->baAckPolicy_var = baAckPolicy;
}

bool Ieee80211BlockAckFrame_Base::getMultiTid() const
{
    return multiTid_var;
}

void Ieee80211BlockAckFrame_Base::setMultiTid(bool multiTid)
{
    this->multiTid_var = multiTid;
}

bool Ieee80211BlockAckFrame_Base::getCompressed() const
{
    return compressed_var;
}

void Ieee80211BlockAckFrame_Base::setCompressed(bool compressed)
{
    this->compressed_var = compressed;
}

unsigned short Ieee80211BlockAckFrame_Base::getTidInfo() const
{
    return tidInfo_var;
}

void Ieee80211BlockAckFrame_Base::setTidInfo(unsigned short tidInfo)
{
    this->tidInfo_var = tidInfo;
}

unsigned short Ieee80211BlockAckFrame_Base::getStartingSequence() const
{
    return startingSequence_var;
}

void Ieee80211BlockAckFrame_Base::setStartingSequence(unsigned short startingSequence)
{
    this->startingSequence_var = startingSequence;
}

class Ieee80211BlockAckFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211BlockAckFrameDescriptor();
    virtual ~Ieee80211BlockAckFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211BlockAckFrameDescriptor);

Ieee80211BlockAckFrameDescriptor::Ieee80211BlockAckFrameDescriptor() : cClassDescriptor("Ieee80211BlockAckFrame", "Ieee80211TwoAddressFrame")
{
}

Ieee80211BlockAckFrameDescriptor::~Ieee80211BlockAckFrameDescriptor()
{
}

bool Ieee80211BlockAckFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211BlockAckFrame_Base *>(obj)!=NULL;
}

const char *Ieee80211BlockAckFrameDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211BlockAckFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int Ieee80211BlockAckFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211BlockAckFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "baAckPolicy",
        "multiTid",
        "compressed",
        "tidInfo",
        "startingSequence",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int Ieee80211BlockAckFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "baAckPolicy")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "multiTid")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "compressed")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "tidInfo")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "startingSequence")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211BlockAckFrameDescriptor::getFieldTypeString(void *object, int field) const
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
        "unsigned short",
        "unsigned short",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211BlockAckFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211BlockAckFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BlockAckFrame_Base *pp = (Ieee80211BlockAckFrame_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211BlockAckFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BlockAckFrame_Base *pp = (Ieee80211BlockAckFrame_Base *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getBaAckPolicy());
        case 1: return bool2string(pp->getMultiTid());
        case 2: return bool2string(pp->getCompressed());
        case 3: return ulong2string(pp->getTidInfo());
        case 4: return ulong2string(pp->getStartingSequence());
        default: return "";
    }
}

bool Ieee80211BlockAckFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BlockAckFrame_Base *pp = (Ieee80211BlockAckFrame_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setBaAckPolicy(string2bool(value)); return true;
        case 1: pp->setMultiTid(string2bool(value)); return true;
        case 2: pp->setCompressed(string2bool(value)); return true;
        case 3: pp->setTidInfo(string2ulong(value)); return true;
        case 4: pp->setStartingSequence(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee80211BlockAckFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211BlockAckFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211BlockAckFrame_Base *pp = (Ieee80211BlockAckFrame_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


