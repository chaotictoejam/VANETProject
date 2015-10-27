//
// Generated file, do not edit! Created by nedtool 4.6 from transport/rtp/RTPPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTPPacket_m.h"

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
    cEnum *e = cEnum::find("RTPPacketEnums");
    if (!e) enums.getInstance()->add(e = new cEnum("RTPPacketEnums"));
    e->insert(RTPPACKET_FIX_HEADERLENGTH, "RTPPACKET_FIX_HEADERLENGTH");
);

RTPPacket_Base::RTPPacket_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->setByteLength(RTPPACKET_FIX_HEADERLENGTH);

    this->version_var = 2;
    this->padding_var = false;
    this->extension_var = false;
    this->marker_var = false;
    this->payloadType_var = 0;
    this->sequenceNumber_var = 0;
    this->timeStamp_var = 0;
    this->ssrc_var = 0;
    csrc_arraysize = 0;
    this->csrc_var = 0;
}

RTPPacket_Base::RTPPacket_Base(const RTPPacket_Base& other) : ::cPacket(other)
{
    csrc_arraysize = 0;
    this->csrc_var = 0;
    copy(other);
}

RTPPacket_Base::~RTPPacket_Base()
{
    delete [] csrc_var;
}

RTPPacket_Base& RTPPacket_Base::operator=(const RTPPacket_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void RTPPacket_Base::copy(const RTPPacket_Base& other)
{
    this->version_var = other.version_var;
    this->padding_var = other.padding_var;
    this->extension_var = other.extension_var;
    this->marker_var = other.marker_var;
    this->payloadType_var = other.payloadType_var;
    this->sequenceNumber_var = other.sequenceNumber_var;
    this->timeStamp_var = other.timeStamp_var;
    this->ssrc_var = other.ssrc_var;
    delete [] this->csrc_var;
    this->csrc_var = (other.csrc_arraysize==0) ? NULL : new uint32[other.csrc_arraysize];
    csrc_arraysize = other.csrc_arraysize;
    for (unsigned int i=0; i<csrc_arraysize; i++)
        this->csrc_var[i] = other.csrc_var[i];
}

void RTPPacket_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->version_var);
    doPacking(b,this->padding_var);
    doPacking(b,this->extension_var);
    doPacking(b,this->marker_var);
    doPacking(b,this->payloadType_var);
    doPacking(b,this->sequenceNumber_var);
    doPacking(b,this->timeStamp_var);
    doPacking(b,this->ssrc_var);
    b->pack(csrc_arraysize);
    doPacking(b,this->csrc_var,csrc_arraysize);
    // field headerLength is abstract -- please do packing in customized class
    // field payloadLength is abstract -- please do packing in customized class
}

void RTPPacket_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->version_var);
    doUnpacking(b,this->padding_var);
    doUnpacking(b,this->extension_var);
    doUnpacking(b,this->marker_var);
    doUnpacking(b,this->payloadType_var);
    doUnpacking(b,this->sequenceNumber_var);
    doUnpacking(b,this->timeStamp_var);
    doUnpacking(b,this->ssrc_var);
    delete [] this->csrc_var;
    b->unpack(csrc_arraysize);
    if (csrc_arraysize==0) {
        this->csrc_var = 0;
    } else {
        this->csrc_var = new uint32[csrc_arraysize];
        doUnpacking(b,this->csrc_var,csrc_arraysize);
    }
    // field headerLength is abstract -- please do unpacking in customized class
    // field payloadLength is abstract -- please do unpacking in customized class
}

uint8 RTPPacket_Base::getVersion() const
{
    return version_var;
}

void RTPPacket_Base::setVersion(uint8 version)
{
    this->version_var = version;
}

bool RTPPacket_Base::getPadding() const
{
    return padding_var;
}

void RTPPacket_Base::setPadding(bool padding)
{
    this->padding_var = padding;
}

bool RTPPacket_Base::getExtension() const
{
    return extension_var;
}

void RTPPacket_Base::setExtension(bool extension)
{
    this->extension_var = extension;
}

bool RTPPacket_Base::getMarker() const
{
    return marker_var;
}

void RTPPacket_Base::setMarker(bool marker)
{
    this->marker_var = marker;
}

int8 RTPPacket_Base::getPayloadType() const
{
    return payloadType_var;
}

void RTPPacket_Base::setPayloadType(int8 payloadType)
{
    this->payloadType_var = payloadType;
}

uint16 RTPPacket_Base::getSequenceNumber() const
{
    return sequenceNumber_var;
}

void RTPPacket_Base::setSequenceNumber(uint16 sequenceNumber)
{
    this->sequenceNumber_var = sequenceNumber;
}

uint32 RTPPacket_Base::getTimeStamp() const
{
    return timeStamp_var;
}

void RTPPacket_Base::setTimeStamp(uint32 timeStamp)
{
    this->timeStamp_var = timeStamp;
}

uint32 RTPPacket_Base::getSsrc() const
{
    return ssrc_var;
}

void RTPPacket_Base::setSsrc(uint32 ssrc)
{
    this->ssrc_var = ssrc;
}

void RTPPacket_Base::setCsrcArraySize(unsigned int size)
{
    uint32 *csrc_var2 = (size==0) ? NULL : new uint32[size];
    unsigned int sz = csrc_arraysize < size ? csrc_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        csrc_var2[i] = this->csrc_var[i];
    for (unsigned int i=sz; i<size; i++)
        csrc_var2[i] = 0;
    csrc_arraysize = size;
    delete [] this->csrc_var;
    this->csrc_var = csrc_var2;
}

unsigned int RTPPacket_Base::getCsrcArraySize() const
{
    return csrc_arraysize;
}

uint32 RTPPacket_Base::getCsrc(unsigned int k) const
{
    if (k>=csrc_arraysize) throw cRuntimeError("Array of size %d indexed by %d", csrc_arraysize, k);
    return csrc_var[k];
}

void RTPPacket_Base::setCsrc(unsigned int k, uint32 csrc)
{
    if (k>=csrc_arraysize) throw cRuntimeError("Array of size %d indexed by %d", csrc_arraysize, k);
    this->csrc_var[k] = csrc;
}

class RTPPacketDescriptor : public cClassDescriptor
{
  public:
    RTPPacketDescriptor();
    virtual ~RTPPacketDescriptor();

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

Register_ClassDescriptor(RTPPacketDescriptor);

RTPPacketDescriptor::RTPPacketDescriptor() : cClassDescriptor("RTPPacket", "cPacket")
{
}

RTPPacketDescriptor::~RTPPacketDescriptor()
{
}

bool RTPPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPPacket_Base *>(obj)!=NULL;
}

const char *RTPPacketDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 11+basedesc->getFieldCount(object) : 11;
}

unsigned int RTPPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<11) ? fieldTypeFlags[field] : 0;
}

const char *RTPPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "version",
        "padding",
        "extension",
        "marker",
        "payloadType",
        "sequenceNumber",
        "timeStamp",
        "ssrc",
        "csrc",
        "headerLength",
        "payloadLength",
    };
    return (field>=0 && field<11) ? fieldNames[field] : NULL;
}

int RTPPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "version")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "padding")==0) return base+1;
    if (fieldName[0]=='e' && strcmp(fieldName, "extension")==0) return base+2;
    if (fieldName[0]=='m' && strcmp(fieldName, "marker")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "payloadType")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequenceNumber")==0) return base+5;
    if (fieldName[0]=='t' && strcmp(fieldName, "timeStamp")==0) return base+6;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssrc")==0) return base+7;
    if (fieldName[0]=='c' && strcmp(fieldName, "csrc")==0) return base+8;
    if (fieldName[0]=='h' && strcmp(fieldName, "headerLength")==0) return base+9;
    if (fieldName[0]=='p' && strcmp(fieldName, "payloadLength")==0) return base+10;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8",
        "bool",
        "bool",
        "bool",
        "int8",
        "uint16",
        "uint32",
        "uint32",
        "uint32",
        "int",
        "int",
    };
    return (field>=0 && field<11) ? fieldTypeStrings[field] : NULL;
}

const char *RTPPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPPacket_Base *pp = (RTPPacket_Base *)object; (void)pp;
    switch (field) {
        case 8: return pp->getCsrcArraySize();
        default: return 0;
    }
}

std::string RTPPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPPacket_Base *pp = (RTPPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getVersion());
        case 1: return bool2string(pp->getPadding());
        case 2: return bool2string(pp->getExtension());
        case 3: return bool2string(pp->getMarker());
        case 4: return long2string(pp->getPayloadType());
        case 5: return ulong2string(pp->getSequenceNumber());
        case 6: return ulong2string(pp->getTimeStamp());
        case 7: return ulong2string(pp->getSsrc());
        case 8: return ulong2string(pp->getCsrc(i));
        case 9: return long2string(pp->getHeaderLength());
        case 10: return long2string(pp->getPayloadLength());
        default: return "";
    }
}

bool RTPPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPPacket_Base *pp = (RTPPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setVersion(string2ulong(value)); return true;
        case 1: pp->setPadding(string2bool(value)); return true;
        case 2: pp->setExtension(string2bool(value)); return true;
        case 3: pp->setMarker(string2bool(value)); return true;
        case 4: pp->setPayloadType(string2long(value)); return true;
        case 5: pp->setSequenceNumber(string2ulong(value)); return true;
        case 6: pp->setTimeStamp(string2ulong(value)); return true;
        case 7: pp->setSsrc(string2ulong(value)); return true;
        case 8: pp->setCsrc(i,string2ulong(value)); return true;
        case 9: pp->setHeaderLength(string2long(value)); return true;
        case 10: pp->setPayloadLength(string2long(value)); return true;
        default: return false;
    }
}

const char *RTPPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *RTPPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPPacket_Base *pp = (RTPPacket_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


