//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/udpapp/UDPVideoData.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "UDPVideoData_m.h"

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

Register_Class(UDPVideoDataPacket);

UDPVideoDataPacket::UDPVideoDataPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->videoSize_var = 0;
    this->bytesLeft_var = 0;
    this->numPkSent_var = 0;
}

UDPVideoDataPacket::UDPVideoDataPacket(const UDPVideoDataPacket& other) : ::cPacket(other)
{
    copy(other);
}

UDPVideoDataPacket::~UDPVideoDataPacket()
{
}

UDPVideoDataPacket& UDPVideoDataPacket::operator=(const UDPVideoDataPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void UDPVideoDataPacket::copy(const UDPVideoDataPacket& other)
{
    this->videoSize_var = other.videoSize_var;
    this->bytesLeft_var = other.bytesLeft_var;
    this->numPkSent_var = other.numPkSent_var;
}

void UDPVideoDataPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->videoSize_var);
    doPacking(b,this->bytesLeft_var);
    doPacking(b,this->numPkSent_var);
}

void UDPVideoDataPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->videoSize_var);
    doUnpacking(b,this->bytesLeft_var);
    doUnpacking(b,this->numPkSent_var);
}

long UDPVideoDataPacket::getVideoSize() const
{
    return videoSize_var;
}

void UDPVideoDataPacket::setVideoSize(long videoSize)
{
    this->videoSize_var = videoSize;
}

long UDPVideoDataPacket::getBytesLeft() const
{
    return bytesLeft_var;
}

void UDPVideoDataPacket::setBytesLeft(long bytesLeft)
{
    this->bytesLeft_var = bytesLeft;
}

long UDPVideoDataPacket::getNumPkSent() const
{
    return numPkSent_var;
}

void UDPVideoDataPacket::setNumPkSent(long numPkSent)
{
    this->numPkSent_var = numPkSent;
}

class UDPVideoDataPacketDescriptor : public cClassDescriptor
{
  public:
    UDPVideoDataPacketDescriptor();
    virtual ~UDPVideoDataPacketDescriptor();

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

Register_ClassDescriptor(UDPVideoDataPacketDescriptor);

UDPVideoDataPacketDescriptor::UDPVideoDataPacketDescriptor() : cClassDescriptor("UDPVideoDataPacket", "cPacket")
{
}

UDPVideoDataPacketDescriptor::~UDPVideoDataPacketDescriptor()
{
}

bool UDPVideoDataPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPVideoDataPacket *>(obj)!=NULL;
}

const char *UDPVideoDataPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPVideoDataPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int UDPVideoDataPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *UDPVideoDataPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "videoSize",
        "bytesLeft",
        "numPkSent",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int UDPVideoDataPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "videoSize")==0) return base+0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bytesLeft")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "numPkSent")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPVideoDataPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "long",
        "long",
        "long",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *UDPVideoDataPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPVideoDataPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPVideoDataPacket *pp = (UDPVideoDataPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string UDPVideoDataPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPVideoDataPacket *pp = (UDPVideoDataPacket *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getVideoSize());
        case 1: return long2string(pp->getBytesLeft());
        case 2: return long2string(pp->getNumPkSent());
        default: return "";
    }
}

bool UDPVideoDataPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPVideoDataPacket *pp = (UDPVideoDataPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setVideoSize(string2long(value)); return true;
        case 1: pp->setBytesLeft(string2long(value)); return true;
        case 2: pp->setNumPkSent(string2long(value)); return true;
        default: return false;
    }
}

const char *UDPVideoDataPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPVideoDataPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPVideoDataPacket *pp = (UDPVideoDataPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


