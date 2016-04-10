//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/udpapp/VideoPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "VideoPacket_m.h"

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

Register_Class(VideoPacket);

VideoPacket::VideoPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->seqNum_var = 0;
    this->type_var = 0;
    this->frameSize_var = 0;
}

VideoPacket::VideoPacket(const VideoPacket& other) : ::cPacket(other)
{
    copy(other);
}

VideoPacket::~VideoPacket()
{
}

VideoPacket& VideoPacket::operator=(const VideoPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void VideoPacket::copy(const VideoPacket& other)
{
    this->seqNum_var = other.seqNum_var;
    this->type_var = other.type_var;
    this->frameSize_var = other.frameSize_var;
}

void VideoPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->seqNum_var);
    doPacking(b,this->type_var);
    doPacking(b,this->frameSize_var);
}

void VideoPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->seqNum_var);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->frameSize_var);
}

unsigned int VideoPacket::getSeqNum() const
{
    return seqNum_var;
}

void VideoPacket::setSeqNum(unsigned int seqNum)
{
    this->seqNum_var = seqNum;
}

char VideoPacket::getType() const
{
    return type_var;
}

void VideoPacket::setType(char type)
{
    this->type_var = type;
}

unsigned long VideoPacket::getFrameSize() const
{
    return frameSize_var;
}

void VideoPacket::setFrameSize(unsigned long frameSize)
{
    this->frameSize_var = frameSize;
}

class VideoPacketDescriptor : public cClassDescriptor
{
  public:
    VideoPacketDescriptor();
    virtual ~VideoPacketDescriptor();

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

Register_ClassDescriptor(VideoPacketDescriptor);

VideoPacketDescriptor::VideoPacketDescriptor() : cClassDescriptor("VideoPacket", "cPacket")
{
}

VideoPacketDescriptor::~VideoPacketDescriptor()
{
}

bool VideoPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<VideoPacket *>(obj)!=NULL;
}

const char *VideoPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int VideoPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int VideoPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *VideoPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "seqNum",
        "type",
        "frameSize",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int VideoPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNum")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+1;
    if (fieldName[0]=='f' && strcmp(fieldName, "frameSize")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *VideoPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "char",
        "unsigned long",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *VideoPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int VideoPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    VideoPacket *pp = (VideoPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string VideoPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    VideoPacket *pp = (VideoPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSeqNum());
        case 1: return long2string(pp->getType());
        case 2: return ulong2string(pp->getFrameSize());
        default: return "";
    }
}

bool VideoPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    VideoPacket *pp = (VideoPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setSeqNum(string2ulong(value)); return true;
        case 1: pp->setType(string2long(value)); return true;
        case 2: pp->setFrameSize(string2ulong(value)); return true;
        default: return false;
    }
}

const char *VideoPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *VideoPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    VideoPacket *pp = (VideoPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


