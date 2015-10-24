//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transportlayer/rtp/reports.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "reports_m.h"

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
namespace rtp {

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

SenderReport_Base::SenderReport_Base() : ::cObject()
{
    this->NTPTimeStamp_var = 0;
    this->RTPTimeStamp_var = 0;
    this->packetCount_var = 0;
    this->byteCount_var = 0;
}

SenderReport_Base::SenderReport_Base(const SenderReport_Base& other) : ::cObject(other)
{
    copy(other);
}

SenderReport_Base::~SenderReport_Base()
{
}

SenderReport_Base& SenderReport_Base::operator=(const SenderReport_Base& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void SenderReport_Base::copy(const SenderReport_Base& other)
{
    this->NTPTimeStamp_var = other.NTPTimeStamp_var;
    this->RTPTimeStamp_var = other.RTPTimeStamp_var;
    this->packetCount_var = other.packetCount_var;
    this->byteCount_var = other.byteCount_var;
}

void SenderReport_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->NTPTimeStamp_var);
    doPacking(b,this->RTPTimeStamp_var);
    doPacking(b,this->packetCount_var);
    doPacking(b,this->byteCount_var);
}

void SenderReport_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->NTPTimeStamp_var);
    doUnpacking(b,this->RTPTimeStamp_var);
    doUnpacking(b,this->packetCount_var);
    doUnpacking(b,this->byteCount_var);
}

uint64 SenderReport_Base::getNTPTimeStamp() const
{
    return NTPTimeStamp_var;
}

void SenderReport_Base::setNTPTimeStamp(uint64 NTPTimeStamp)
{
    this->NTPTimeStamp_var = NTPTimeStamp;
}

uint32 SenderReport_Base::getRTPTimeStamp() const
{
    return RTPTimeStamp_var;
}

void SenderReport_Base::setRTPTimeStamp(uint32 RTPTimeStamp)
{
    this->RTPTimeStamp_var = RTPTimeStamp;
}

uint32 SenderReport_Base::getPacketCount() const
{
    return packetCount_var;
}

void SenderReport_Base::setPacketCount(uint32 packetCount)
{
    this->packetCount_var = packetCount;
}

uint32 SenderReport_Base::getByteCount() const
{
    return byteCount_var;
}

void SenderReport_Base::setByteCount(uint32 byteCount)
{
    this->byteCount_var = byteCount;
}

class SenderReportDescriptor : public cClassDescriptor
{
  public:
    SenderReportDescriptor();
    virtual ~SenderReportDescriptor();

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

Register_ClassDescriptor(SenderReportDescriptor);

SenderReportDescriptor::SenderReportDescriptor() : cClassDescriptor("inet::rtp::SenderReport", "cObject")
{
}

SenderReportDescriptor::~SenderReportDescriptor()
{
}

bool SenderReportDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SenderReport_Base *>(obj)!=NULL;
}

const char *SenderReportDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SenderReportDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SenderReportDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SenderReportDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "NTPTimeStamp",
        "RTPTimeStamp",
        "packetCount",
        "byteCount",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SenderReportDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='N' && strcmp(fieldName, "NTPTimeStamp")==0) return base+0;
    if (fieldName[0]=='R' && strcmp(fieldName, "RTPTimeStamp")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetCount")==0) return base+2;
    if (fieldName[0]=='b' && strcmp(fieldName, "byteCount")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SenderReportDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint64",
        "uint32",
        "uint32",
        "uint32",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SenderReportDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SenderReportDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SenderReport_Base *pp = (SenderReport_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SenderReportDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SenderReport_Base *pp = (SenderReport_Base *)object; (void)pp;
    switch (field) {
        case 0: return uint642string(pp->getNTPTimeStamp());
        case 1: return ulong2string(pp->getRTPTimeStamp());
        case 2: return ulong2string(pp->getPacketCount());
        case 3: return ulong2string(pp->getByteCount());
        default: return "";
    }
}

bool SenderReportDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SenderReport_Base *pp = (SenderReport_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setNTPTimeStamp(string2uint64(value)); return true;
        case 1: pp->setRTPTimeStamp(string2ulong(value)); return true;
        case 2: pp->setPacketCount(string2ulong(value)); return true;
        case 3: pp->setByteCount(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SenderReportDescriptor::getFieldStructName(void *object, int field) const
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

void *SenderReportDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SenderReport_Base *pp = (SenderReport_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

ReceptionReport_Base::ReceptionReport_Base() : ::cObject()
{
    this->ssrc_var = 0;
    this->fractionLost_var = 0;
    this->packetsLostCumulative_var = 0;
    this->sequenceNumber_var = 0;
    this->jitter_var = 0;
    this->lastSR_var = 0;
    this->delaySinceLastSR_var = 0;
}

ReceptionReport_Base::ReceptionReport_Base(const ReceptionReport_Base& other) : ::cObject(other)
{
    copy(other);
}

ReceptionReport_Base::~ReceptionReport_Base()
{
}

ReceptionReport_Base& ReceptionReport_Base::operator=(const ReceptionReport_Base& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void ReceptionReport_Base::copy(const ReceptionReport_Base& other)
{
    this->ssrc_var = other.ssrc_var;
    this->fractionLost_var = other.fractionLost_var;
    this->packetsLostCumulative_var = other.packetsLostCumulative_var;
    this->sequenceNumber_var = other.sequenceNumber_var;
    this->jitter_var = other.jitter_var;
    this->lastSR_var = other.lastSR_var;
    this->delaySinceLastSR_var = other.delaySinceLastSR_var;
}

void ReceptionReport_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->ssrc_var);
    doPacking(b,this->fractionLost_var);
    doPacking(b,this->packetsLostCumulative_var);
    doPacking(b,this->sequenceNumber_var);
    doPacking(b,this->jitter_var);
    doPacking(b,this->lastSR_var);
    doPacking(b,this->delaySinceLastSR_var);
}

void ReceptionReport_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->ssrc_var);
    doUnpacking(b,this->fractionLost_var);
    doUnpacking(b,this->packetsLostCumulative_var);
    doUnpacking(b,this->sequenceNumber_var);
    doUnpacking(b,this->jitter_var);
    doUnpacking(b,this->lastSR_var);
    doUnpacking(b,this->delaySinceLastSR_var);
}

uint32 ReceptionReport_Base::getSsrc() const
{
    return ssrc_var;
}

void ReceptionReport_Base::setSsrc(uint32 ssrc)
{
    this->ssrc_var = ssrc;
}

uint8 ReceptionReport_Base::getFractionLost() const
{
    return fractionLost_var;
}

void ReceptionReport_Base::setFractionLost(uint8 fractionLost)
{
    this->fractionLost_var = fractionLost;
}

int ReceptionReport_Base::getPacketsLostCumulative() const
{
    return packetsLostCumulative_var;
}

void ReceptionReport_Base::setPacketsLostCumulative(int packetsLostCumulative)
{
    this->packetsLostCumulative_var = packetsLostCumulative;
}

uint32 ReceptionReport_Base::getSequenceNumber() const
{
    return sequenceNumber_var;
}

void ReceptionReport_Base::setSequenceNumber(uint32 sequenceNumber)
{
    this->sequenceNumber_var = sequenceNumber;
}

int ReceptionReport_Base::getJitter() const
{
    return jitter_var;
}

void ReceptionReport_Base::setJitter(int jitter)
{
    this->jitter_var = jitter;
}

int ReceptionReport_Base::getLastSR() const
{
    return lastSR_var;
}

void ReceptionReport_Base::setLastSR(int lastSR)
{
    this->lastSR_var = lastSR;
}

int ReceptionReport_Base::getDelaySinceLastSR() const
{
    return delaySinceLastSR_var;
}

void ReceptionReport_Base::setDelaySinceLastSR(int delaySinceLastSR)
{
    this->delaySinceLastSR_var = delaySinceLastSR;
}

class ReceptionReportDescriptor : public cClassDescriptor
{
  public:
    ReceptionReportDescriptor();
    virtual ~ReceptionReportDescriptor();

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

Register_ClassDescriptor(ReceptionReportDescriptor);

ReceptionReportDescriptor::ReceptionReportDescriptor() : cClassDescriptor("inet::rtp::ReceptionReport", "cObject")
{
}

ReceptionReportDescriptor::~ReceptionReportDescriptor()
{
}

bool ReceptionReportDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ReceptionReport_Base *>(obj)!=NULL;
}

const char *ReceptionReportDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ReceptionReportDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int ReceptionReportDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ReceptionReportDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ssrc",
        "fractionLost",
        "packetsLostCumulative",
        "sequenceNumber",
        "jitter",
        "lastSR",
        "delaySinceLastSR",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int ReceptionReportDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssrc")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "fractionLost")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetsLostCumulative")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequenceNumber")==0) return base+3;
    if (fieldName[0]=='j' && strcmp(fieldName, "jitter")==0) return base+4;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastSR")==0) return base+5;
    if (fieldName[0]=='d' && strcmp(fieldName, "delaySinceLastSR")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ReceptionReportDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "uint8",
        "int",
        "uint32",
        "int",
        "int",
        "int",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *ReceptionReportDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ReceptionReportDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ReceptionReport_Base *pp = (ReceptionReport_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ReceptionReportDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ReceptionReport_Base *pp = (ReceptionReport_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSsrc());
        case 1: return ulong2string(pp->getFractionLost());
        case 2: return long2string(pp->getPacketsLostCumulative());
        case 3: return ulong2string(pp->getSequenceNumber());
        case 4: return long2string(pp->getJitter());
        case 5: return long2string(pp->getLastSR());
        case 6: return long2string(pp->getDelaySinceLastSR());
        default: return "";
    }
}

bool ReceptionReportDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ReceptionReport_Base *pp = (ReceptionReport_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSsrc(string2ulong(value)); return true;
        case 1: pp->setFractionLost(string2ulong(value)); return true;
        case 2: pp->setPacketsLostCumulative(string2long(value)); return true;
        case 3: pp->setSequenceNumber(string2ulong(value)); return true;
        case 4: pp->setJitter(string2long(value)); return true;
        case 5: pp->setLastSR(string2long(value)); return true;
        case 6: pp->setDelaySinceLastSR(string2long(value)); return true;
        default: return false;
    }
}

const char *ReceptionReportDescriptor::getFieldStructName(void *object, int field) const
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

void *ReceptionReportDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ReceptionReport_Base *pp = (ReceptionReport_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace rtp
} // namespace inet

