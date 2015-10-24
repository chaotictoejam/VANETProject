//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transportlayer/rtp/profiles/avprofile/RTPMpegPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTPMpegPacket_m.h"

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

Register_Class(RTPMpegPacket);

RTPMpegPacket::RTPMpegPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->headerLength_var = 4;
    this->payloadLength_var = 0;
    this->pictureType_var = 0;
}

RTPMpegPacket::RTPMpegPacket(const RTPMpegPacket& other) : ::cPacket(other)
{
    copy(other);
}

RTPMpegPacket::~RTPMpegPacket()
{
}

RTPMpegPacket& RTPMpegPacket::operator=(const RTPMpegPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void RTPMpegPacket::copy(const RTPMpegPacket& other)
{
    this->headerLength_var = other.headerLength_var;
    this->payloadLength_var = other.payloadLength_var;
    this->pictureType_var = other.pictureType_var;
}

void RTPMpegPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->headerLength_var);
    doPacking(b,this->payloadLength_var);
    doPacking(b,this->pictureType_var);
}

void RTPMpegPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->headerLength_var);
    doUnpacking(b,this->payloadLength_var);
    doUnpacking(b,this->pictureType_var);
}

int RTPMpegPacket::getHeaderLength() const
{
    return headerLength_var;
}

void RTPMpegPacket::setHeaderLength(int headerLength)
{
    this->headerLength_var = headerLength;
}

int RTPMpegPacket::getPayloadLength() const
{
    return payloadLength_var;
}

void RTPMpegPacket::setPayloadLength(int payloadLength)
{
    this->payloadLength_var = payloadLength;
}

int RTPMpegPacket::getPictureType() const
{
    return pictureType_var;
}

void RTPMpegPacket::setPictureType(int pictureType)
{
    this->pictureType_var = pictureType;
}

class RTPMpegPacketDescriptor : public cClassDescriptor
{
  public:
    RTPMpegPacketDescriptor();
    virtual ~RTPMpegPacketDescriptor();

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

Register_ClassDescriptor(RTPMpegPacketDescriptor);

RTPMpegPacketDescriptor::RTPMpegPacketDescriptor() : cClassDescriptor("inet::rtp::RTPMpegPacket", "cPacket")
{
}

RTPMpegPacketDescriptor::~RTPMpegPacketDescriptor()
{
}

bool RTPMpegPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPMpegPacket *>(obj)!=NULL;
}

const char *RTPMpegPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPMpegPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int RTPMpegPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RTPMpegPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "headerLength",
        "payloadLength",
        "pictureType",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int RTPMpegPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "headerLength")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "payloadLength")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "pictureType")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPMpegPacketDescriptor::getFieldTypeString(void *object, int field) const
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
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *RTPMpegPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPMpegPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPMpegPacket *pp = (RTPMpegPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPMpegPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPMpegPacket *pp = (RTPMpegPacket *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getHeaderLength());
        case 1: return long2string(pp->getPayloadLength());
        case 2: return long2string(pp->getPictureType());
        default: return "";
    }
}

bool RTPMpegPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPMpegPacket *pp = (RTPMpegPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setHeaderLength(string2long(value)); return true;
        case 1: pp->setPayloadLength(string2long(value)); return true;
        case 2: pp->setPictureType(string2long(value)); return true;
        default: return false;
    }
}

const char *RTPMpegPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *RTPMpegPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPMpegPacket *pp = (RTPMpegPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace rtp
} // namespace inet

