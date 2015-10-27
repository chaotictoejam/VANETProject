//
// Generated file, do not edit! Created by nedtool 4.6 from transport/rtp/RTPInnerPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTPInnerPacket_m.h"

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
    cEnum *e = cEnum::find("RTP_INP_TYPE");
    if (!e) enums.getInstance()->add(e = new cEnum("RTP_INP_TYPE"));
    e->insert(RTP_INP_UNDEF, "RTP_INP_UNDEF");
    e->insert(RTP_INP_INITIALIZE_PROFILE, "RTP_INP_INITIALIZE_PROFILE");
    e->insert(RTP_INP_PROFILE_INITIALIZED, "RTP_INP_PROFILE_INITIALIZED");
    e->insert(RTP_INP_INITIALIZE_RTCP, "RTP_INP_INITIALIZE_RTCP");
    e->insert(RTP_INP_RTCP_INITIALIZED, "RTP_INP_RTCP_INITIALIZED");
    e->insert(RTP_INP_CREATE_SENDER_MODULE, "RTP_INP_CREATE_SENDER_MODULE");
    e->insert(RTP_INP_SENDER_MODULE_CREATED, "RTP_INP_SENDER_MODULE_CREATED");
    e->insert(RTP_INP_DELETE_SENDER_MODULE, "RTP_INP_DELETE_SENDER_MODULE");
    e->insert(RTP_INP_SENDER_MODULE_DELETED, "RTP_INP_SENDER_MODULE_DELETED");
    e->insert(RTP_INP_INITIALIZE_SENDER_MODULE, "RTP_INP_INITIALIZE_SENDER_MODULE");
    e->insert(RTP_INP_SENDER_MODULE_INITIALIZED, "RTP_INP_SENDER_MODULE_INITIALIZED");
    e->insert(RTP_INP_SENDER_MODULE_CONTROL, "RTP_INP_SENDER_MODULE_CONTROL");
    e->insert(RTP_INP_SENDER_MODULE_STATUS, "RTP_INP_SENDER_MODULE_STATUS");
    e->insert(RTP_INP_LEAVE_SESSION, "RTP_INP_LEAVE_SESSION");
    e->insert(RTP_INP_SESSION_LEFT, "RTP_INP_SESSION_LEFT");
    e->insert(RTP_INP_DATA_OUT, "RTP_INP_DATA_OUT");
    e->insert(RTP_INP_DATA_IN, "RTP_INP_DATA_IN");
);

RTPInnerPacket_Base::RTPInnerPacket_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->type_var = RTP_INP_UNDEF;
    this->commonName_var = 0;
    this->mtu_var = 0;
    this->bandwidth_var = 0;
    this->rtcpPercentage_var = 0;
    this->address_var = IPv4Address::UNSPECIFIED_ADDRESS;
    this->port_var = PORT_UNDEF;
    this->ssrc_var = 0;
    this->payloadType_var = 0;
    this->fileName_var = 0;
    this->clockRate_var = 0;
    this->timeStampBase_var = 0;
    this->sequenceNumberBase_var = 0;
}

RTPInnerPacket_Base::RTPInnerPacket_Base(const RTPInnerPacket_Base& other) : ::cPacket(other)
{
    copy(other);
}

RTPInnerPacket_Base::~RTPInnerPacket_Base()
{
}

RTPInnerPacket_Base& RTPInnerPacket_Base::operator=(const RTPInnerPacket_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void RTPInnerPacket_Base::copy(const RTPInnerPacket_Base& other)
{
    this->type_var = other.type_var;
    this->commonName_var = other.commonName_var;
    this->mtu_var = other.mtu_var;
    this->bandwidth_var = other.bandwidth_var;
    this->rtcpPercentage_var = other.rtcpPercentage_var;
    this->address_var = other.address_var;
    this->port_var = other.port_var;
    this->ssrc_var = other.ssrc_var;
    this->payloadType_var = other.payloadType_var;
    this->fileName_var = other.fileName_var;
    this->clockRate_var = other.clockRate_var;
    this->timeStampBase_var = other.timeStampBase_var;
    this->sequenceNumberBase_var = other.sequenceNumberBase_var;
}

void RTPInnerPacket_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->commonName_var);
    doPacking(b,this->mtu_var);
    doPacking(b,this->bandwidth_var);
    doPacking(b,this->rtcpPercentage_var);
    doPacking(b,this->address_var);
    doPacking(b,this->port_var);
    doPacking(b,this->ssrc_var);
    doPacking(b,this->payloadType_var);
    doPacking(b,this->fileName_var);
    doPacking(b,this->clockRate_var);
    doPacking(b,this->timeStampBase_var);
    doPacking(b,this->sequenceNumberBase_var);
}

void RTPInnerPacket_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->commonName_var);
    doUnpacking(b,this->mtu_var);
    doUnpacking(b,this->bandwidth_var);
    doUnpacking(b,this->rtcpPercentage_var);
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->port_var);
    doUnpacking(b,this->ssrc_var);
    doUnpacking(b,this->payloadType_var);
    doUnpacking(b,this->fileName_var);
    doUnpacking(b,this->clockRate_var);
    doUnpacking(b,this->timeStampBase_var);
    doUnpacking(b,this->sequenceNumberBase_var);
}

short RTPInnerPacket_Base::getType() const
{
    return type_var;
}

void RTPInnerPacket_Base::setType(short type)
{
    this->type_var = type;
}

const char * RTPInnerPacket_Base::getCommonName() const
{
    return commonName_var.c_str();
}

void RTPInnerPacket_Base::setCommonName(const char * commonName)
{
    this->commonName_var = commonName;
}

int RTPInnerPacket_Base::getMtu() const
{
    return mtu_var;
}

void RTPInnerPacket_Base::setMtu(int mtu)
{
    this->mtu_var = mtu;
}

int RTPInnerPacket_Base::getBandwidth() const
{
    return bandwidth_var;
}

void RTPInnerPacket_Base::setBandwidth(int bandwidth)
{
    this->bandwidth_var = bandwidth;
}

int RTPInnerPacket_Base::getRtcpPercentage() const
{
    return rtcpPercentage_var;
}

void RTPInnerPacket_Base::setRtcpPercentage(int rtcpPercentage)
{
    this->rtcpPercentage_var = rtcpPercentage;
}

IPv4Address& RTPInnerPacket_Base::getAddress()
{
    return address_var;
}

void RTPInnerPacket_Base::setAddress(const IPv4Address& address)
{
    this->address_var = address;
}

int RTPInnerPacket_Base::getPort() const
{
    return port_var;
}

void RTPInnerPacket_Base::setPort(int port)
{
    this->port_var = port;
}

uint32 RTPInnerPacket_Base::getSsrc() const
{
    return ssrc_var;
}

void RTPInnerPacket_Base::setSsrc(uint32 ssrc)
{
    this->ssrc_var = ssrc;
}

int RTPInnerPacket_Base::getPayloadType() const
{
    return payloadType_var;
}

void RTPInnerPacket_Base::setPayloadType(int payloadType)
{
    this->payloadType_var = payloadType;
}

const char * RTPInnerPacket_Base::getFileName() const
{
    return fileName_var.c_str();
}

void RTPInnerPacket_Base::setFileName(const char * fileName)
{
    this->fileName_var = fileName;
}

int RTPInnerPacket_Base::getClockRate() const
{
    return clockRate_var;
}

void RTPInnerPacket_Base::setClockRate(int clockRate)
{
    this->clockRate_var = clockRate;
}

int RTPInnerPacket_Base::getTimeStampBase() const
{
    return timeStampBase_var;
}

void RTPInnerPacket_Base::setTimeStampBase(int timeStampBase)
{
    this->timeStampBase_var = timeStampBase;
}

int RTPInnerPacket_Base::getSequenceNumberBase() const
{
    return sequenceNumberBase_var;
}

void RTPInnerPacket_Base::setSequenceNumberBase(int sequenceNumberBase)
{
    this->sequenceNumberBase_var = sequenceNumberBase;
}

class RTPInnerPacketDescriptor : public cClassDescriptor
{
  public:
    RTPInnerPacketDescriptor();
    virtual ~RTPInnerPacketDescriptor();

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

Register_ClassDescriptor(RTPInnerPacketDescriptor);

RTPInnerPacketDescriptor::RTPInnerPacketDescriptor() : cClassDescriptor("RTPInnerPacket", "cPacket")
{
}

RTPInnerPacketDescriptor::~RTPInnerPacketDescriptor()
{
}

bool RTPInnerPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPInnerPacket_Base *>(obj)!=NULL;
}

const char *RTPInnerPacketDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPInnerPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 13+basedesc->getFieldCount(object) : 13;
}

unsigned int RTPInnerPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<13) ? fieldTypeFlags[field] : 0;
}

const char *RTPInnerPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "commonName",
        "mtu",
        "bandwidth",
        "rtcpPercentage",
        "address",
        "port",
        "ssrc",
        "payloadType",
        "fileName",
        "clockRate",
        "timeStampBase",
        "sequenceNumberBase",
    };
    return (field>=0 && field<13) ? fieldNames[field] : NULL;
}

int RTPInnerPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "commonName")==0) return base+1;
    if (fieldName[0]=='m' && strcmp(fieldName, "mtu")==0) return base+2;
    if (fieldName[0]=='b' && strcmp(fieldName, "bandwidth")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "rtcpPercentage")==0) return base+4;
    if (fieldName[0]=='a' && strcmp(fieldName, "address")==0) return base+5;
    if (fieldName[0]=='p' && strcmp(fieldName, "port")==0) return base+6;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssrc")==0) return base+7;
    if (fieldName[0]=='p' && strcmp(fieldName, "payloadType")==0) return base+8;
    if (fieldName[0]=='f' && strcmp(fieldName, "fileName")==0) return base+9;
    if (fieldName[0]=='c' && strcmp(fieldName, "clockRate")==0) return base+10;
    if (fieldName[0]=='t' && strcmp(fieldName, "timeStampBase")==0) return base+11;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequenceNumberBase")==0) return base+12;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPInnerPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "string",
        "int",
        "int",
        "int",
        "IPv4Address",
        "int",
        "uint32",
        "int",
        "string",
        "int",
        "int",
        "int",
    };
    return (field>=0 && field<13) ? fieldTypeStrings[field] : NULL;
}

const char *RTPInnerPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "RTP_INP_TYPE";
            return NULL;
        default: return NULL;
    }
}

int RTPInnerPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPInnerPacket_Base *pp = (RTPInnerPacket_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPInnerPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPInnerPacket_Base *pp = (RTPInnerPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: return oppstring2string(pp->getCommonName());
        case 2: return long2string(pp->getMtu());
        case 3: return long2string(pp->getBandwidth());
        case 4: return long2string(pp->getRtcpPercentage());
        case 5: {std::stringstream out; out << pp->getAddress(); return out.str();}
        case 6: return long2string(pp->getPort());
        case 7: return ulong2string(pp->getSsrc());
        case 8: return long2string(pp->getPayloadType());
        case 9: return oppstring2string(pp->getFileName());
        case 10: return long2string(pp->getClockRate());
        case 11: return long2string(pp->getTimeStampBase());
        case 12: return long2string(pp->getSequenceNumberBase());
        default: return "";
    }
}

bool RTPInnerPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPInnerPacket_Base *pp = (RTPInnerPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setCommonName((value)); return true;
        case 2: pp->setMtu(string2long(value)); return true;
        case 3: pp->setBandwidth(string2long(value)); return true;
        case 4: pp->setRtcpPercentage(string2long(value)); return true;
        case 6: pp->setPort(string2long(value)); return true;
        case 7: pp->setSsrc(string2ulong(value)); return true;
        case 8: pp->setPayloadType(string2long(value)); return true;
        case 9: pp->setFileName((value)); return true;
        case 10: pp->setClockRate(string2long(value)); return true;
        case 11: pp->setTimeStampBase(string2long(value)); return true;
        case 12: pp->setSequenceNumberBase(string2long(value)); return true;
        default: return false;
    }
}

const char *RTPInnerPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *RTPInnerPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPInnerPacket_Base *pp = (RTPInnerPacket_Base *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getAddress()); break;
        default: return NULL;
    }
}


