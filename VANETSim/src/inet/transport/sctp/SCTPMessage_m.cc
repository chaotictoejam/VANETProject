//
// Generated file, do not edit! Created by nedtool 4.6 from src/inet/transport/sctp/SCTPMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SCTPMessage_m.h"

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

Register_Class(SCTPSimpleMessage);

SCTPSimpleMessage::SCTPSimpleMessage(const char *name, int kind) : ::cPacket(name,kind)
{
    this->dataLen_var = 0;
    data_arraysize = 0;
    this->data_var = 0;
    this->creationTime_var = 0;
    this->encaps_var = false;
}

SCTPSimpleMessage::SCTPSimpleMessage(const SCTPSimpleMessage& other) : ::cPacket(other)
{
    data_arraysize = 0;
    this->data_var = 0;
    copy(other);
}

SCTPSimpleMessage::~SCTPSimpleMessage()
{
    delete [] data_var;
}

SCTPSimpleMessage& SCTPSimpleMessage::operator=(const SCTPSimpleMessage& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SCTPSimpleMessage::copy(const SCTPSimpleMessage& other)
{
    this->dataLen_var = other.dataLen_var;
    delete [] this->data_var;
    this->data_var = (other.data_arraysize==0) ? NULL : new char[other.data_arraysize];
    data_arraysize = other.data_arraysize;
    for (unsigned int i=0; i<data_arraysize; i++)
        this->data_var[i] = other.data_var[i];
    this->creationTime_var = other.creationTime_var;
    this->encaps_var = other.encaps_var;
}

void SCTPSimpleMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->dataLen_var);
    b->pack(data_arraysize);
    doPacking(b,this->data_var,data_arraysize);
    doPacking(b,this->creationTime_var);
    doPacking(b,this->encaps_var);
}

void SCTPSimpleMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->dataLen_var);
    delete [] this->data_var;
    b->unpack(data_arraysize);
    if (data_arraysize==0) {
        this->data_var = 0;
    } else {
        this->data_var = new char[data_arraysize];
        doUnpacking(b,this->data_var,data_arraysize);
    }
    doUnpacking(b,this->creationTime_var);
    doUnpacking(b,this->encaps_var);
}

uint32 SCTPSimpleMessage::getDataLen() const
{
    return dataLen_var;
}

void SCTPSimpleMessage::setDataLen(uint32 dataLen)
{
    this->dataLen_var = dataLen;
}

void SCTPSimpleMessage::setDataArraySize(unsigned int size)
{
    char *data_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = data_arraysize < size ? data_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        data_var2[i] = this->data_var[i];
    for (unsigned int i=sz; i<size; i++)
        data_var2[i] = 0;
    data_arraysize = size;
    delete [] this->data_var;
    this->data_var = data_var2;
}

unsigned int SCTPSimpleMessage::getDataArraySize() const
{
    return data_arraysize;
}

char SCTPSimpleMessage::getData(unsigned int k) const
{
    if (k>=data_arraysize) throw cRuntimeError("Array of size %d indexed by %d", data_arraysize, k);
    return data_var[k];
}

void SCTPSimpleMessage::setData(unsigned int k, char data)
{
    if (k>=data_arraysize) throw cRuntimeError("Array of size %d indexed by %d", data_arraysize, k);
    this->data_var[k] = data;
}

simtime_t SCTPSimpleMessage::getCreationTime() const
{
    return creationTime_var;
}

void SCTPSimpleMessage::setCreationTime(simtime_t creationTime)
{
    this->creationTime_var = creationTime;
}

bool SCTPSimpleMessage::getEncaps() const
{
    return encaps_var;
}

void SCTPSimpleMessage::setEncaps(bool encaps)
{
    this->encaps_var = encaps;
}

class SCTPSimpleMessageDescriptor : public cClassDescriptor
{
  public:
    SCTPSimpleMessageDescriptor();
    virtual ~SCTPSimpleMessageDescriptor();

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

Register_ClassDescriptor(SCTPSimpleMessageDescriptor);

SCTPSimpleMessageDescriptor::SCTPSimpleMessageDescriptor() : cClassDescriptor("SCTPSimpleMessage", "cPacket")
{
}

SCTPSimpleMessageDescriptor::~SCTPSimpleMessageDescriptor()
{
}

bool SCTPSimpleMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPSimpleMessage *>(obj)!=NULL;
}

const char *SCTPSimpleMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPSimpleMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SCTPSimpleMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *SCTPSimpleMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "dataLen",
        "data",
        "creationTime",
        "encaps",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SCTPSimpleMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dataLen")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "data")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "creationTime")==0) return base+2;
    if (fieldName[0]=='e' && strcmp(fieldName, "encaps")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPSimpleMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "char",
        "simtime_t",
        "bool",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPSimpleMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPSimpleMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSimpleMessage *pp = (SCTPSimpleMessage *)object; (void)pp;
    switch (field) {
        case 1: return pp->getDataArraySize();
        default: return 0;
    }
}

std::string SCTPSimpleMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSimpleMessage *pp = (SCTPSimpleMessage *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getDataLen());
        case 1: return long2string(pp->getData(i));
        case 2: return double2string(pp->getCreationTime());
        case 3: return bool2string(pp->getEncaps());
        default: return "";
    }
}

bool SCTPSimpleMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSimpleMessage *pp = (SCTPSimpleMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setDataLen(string2ulong(value)); return true;
        case 1: pp->setData(i,string2long(value)); return true;
        case 2: pp->setCreationTime(string2double(value)); return true;
        case 3: pp->setEncaps(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPSimpleMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPSimpleMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSimpleMessage *pp = (SCTPSimpleMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

SCTPMessage_Base::SCTPMessage_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->srcPort_var = 0;
    this->destPort_var = 0;
    this->tag_var = 0;
    this->checksumOk_var = 0;
}

SCTPMessage_Base::SCTPMessage_Base(const SCTPMessage_Base& other) : ::cPacket(other)
{
    copy(other);
}

SCTPMessage_Base::~SCTPMessage_Base()
{
}

SCTPMessage_Base& SCTPMessage_Base::operator=(const SCTPMessage_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SCTPMessage_Base::copy(const SCTPMessage_Base& other)
{
    this->srcPort_var = other.srcPort_var;
    this->destPort_var = other.destPort_var;
    this->tag_var = other.tag_var;
    this->checksumOk_var = other.checksumOk_var;
}

void SCTPMessage_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->srcPort_var);
    doPacking(b,this->destPort_var);
    doPacking(b,this->tag_var);
    doPacking(b,this->checksumOk_var);
    // field chunks is abstract -- please do packing in customized class
}

void SCTPMessage_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcPort_var);
    doUnpacking(b,this->destPort_var);
    doUnpacking(b,this->tag_var);
    doUnpacking(b,this->checksumOk_var);
    // field chunks is abstract -- please do unpacking in customized class
}

uint16 SCTPMessage_Base::getSrcPort() const
{
    return srcPort_var;
}

void SCTPMessage_Base::setSrcPort(uint16 srcPort)
{
    this->srcPort_var = srcPort;
}

uint16 SCTPMessage_Base::getDestPort() const
{
    return destPort_var;
}

void SCTPMessage_Base::setDestPort(uint16 destPort)
{
    this->destPort_var = destPort;
}

uint32 SCTPMessage_Base::getTag() const
{
    return tag_var;
}

void SCTPMessage_Base::setTag(uint32 tag)
{
    this->tag_var = tag;
}

bool SCTPMessage_Base::getChecksumOk() const
{
    return checksumOk_var;
}

void SCTPMessage_Base::setChecksumOk(bool checksumOk)
{
    this->checksumOk_var = checksumOk;
}

class SCTPMessageDescriptor : public cClassDescriptor
{
  public:
    SCTPMessageDescriptor();
    virtual ~SCTPMessageDescriptor();

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

Register_ClassDescriptor(SCTPMessageDescriptor);

SCTPMessageDescriptor::SCTPMessageDescriptor() : cClassDescriptor("SCTPMessage", "cPacket")
{
}

SCTPMessageDescriptor::~SCTPMessageDescriptor()
{
}

bool SCTPMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPMessage_Base *>(obj)!=NULL;
}

const char *SCTPMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int SCTPMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *SCTPMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcPort",
        "destPort",
        "tag",
        "checksumOk",
        "chunks",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int SCTPMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcPort")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destPort")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "tag")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "checksumOk")==0) return base+3;
    if (fieldName[0]=='c' && strcmp(fieldName, "chunks")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16",
        "uint16",
        "uint32",
        "bool",
        "cPacketPtr",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPMessage_Base *pp = (SCTPMessage_Base *)object; (void)pp;
    switch (field) {
        case 4: return pp->getChunksArraySize();
        default: return 0;
    }
}

std::string SCTPMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPMessage_Base *pp = (SCTPMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSrcPort());
        case 1: return ulong2string(pp->getDestPort());
        case 2: return ulong2string(pp->getTag());
        case 3: return bool2string(pp->getChecksumOk());
        case 4: {std::stringstream out; out << pp->getChunks(i); return out.str();}
        default: return "";
    }
}

bool SCTPMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPMessage_Base *pp = (SCTPMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSrcPort(string2ulong(value)); return true;
        case 1: pp->setDestPort(string2ulong(value)); return true;
        case 2: pp->setTag(string2ulong(value)); return true;
        case 3: pp->setChecksumOk(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 4: return opp_typename(typeid(cPacketPtr));
        default: return NULL;
    };
}

void *SCTPMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPMessage_Base *pp = (SCTPMessage_Base *)object; (void)pp;
    switch (field) {
        case 4: return (void *)(&pp->getChunks(i)); break;
        default: return NULL;
    }
}

Register_Class(SCTPChunk);

SCTPChunk::SCTPChunk(const char *name, int kind) : ::cPacket(name,kind)
{
    this->chunkType_var = 0;
}

SCTPChunk::SCTPChunk(const SCTPChunk& other) : ::cPacket(other)
{
    copy(other);
}

SCTPChunk::~SCTPChunk()
{
}

SCTPChunk& SCTPChunk::operator=(const SCTPChunk& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SCTPChunk::copy(const SCTPChunk& other)
{
    this->chunkType_var = other.chunkType_var;
}

void SCTPChunk::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->chunkType_var);
}

void SCTPChunk::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->chunkType_var);
}

uint8 SCTPChunk::getChunkType() const
{
    return chunkType_var;
}

void SCTPChunk::setChunkType(uint8 chunkType)
{
    this->chunkType_var = chunkType;
}

class SCTPChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPChunkDescriptor();
    virtual ~SCTPChunkDescriptor();

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

Register_ClassDescriptor(SCTPChunkDescriptor);

SCTPChunkDescriptor::SCTPChunkDescriptor() : cClassDescriptor("SCTPChunk", "cPacket")
{
}

SCTPChunkDescriptor::~SCTPChunkDescriptor()
{
}

bool SCTPChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPChunk *>(obj)!=NULL;
}

const char *SCTPChunkDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "false";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "chunkType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "chunkType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPChunk *pp = (SCTPChunk *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPChunk *pp = (SCTPChunk *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getChunkType());
        default: return "";
    }
}

bool SCTPChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPChunk *pp = (SCTPChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setChunkType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPChunkDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPChunk *pp = (SCTPChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPInitChunk);

SCTPInitChunk::SCTPInitChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->initTag_var = 0;
    this->a_rwnd_var = 0;
    this->noOutStreams_var = 0;
    this->noInStreams_var = 0;
    this->initTSN_var = 0;
    this->forwardTsn_var = 0;
    addresses_arraysize = 0;
    this->addresses_var = 0;
    unrecognizedParameters_arraysize = 0;
    this->unrecognizedParameters_var = 0;
    this->msg_rwnd_var = 0;
    chunkTypes_arraysize = 0;
    this->chunkTypes_var = 0;
    sepChunks_arraysize = 0;
    this->sepChunks_var = 0;
    hmacTypes_arraysize = 0;
    this->hmacTypes_var = 0;
    random_arraysize = 0;
    this->random_var = 0;
}

SCTPInitChunk::SCTPInitChunk(const SCTPInitChunk& other) : ::SCTPChunk(other)
{
    addresses_arraysize = 0;
    this->addresses_var = 0;
    unrecognizedParameters_arraysize = 0;
    this->unrecognizedParameters_var = 0;
    chunkTypes_arraysize = 0;
    this->chunkTypes_var = 0;
    sepChunks_arraysize = 0;
    this->sepChunks_var = 0;
    hmacTypes_arraysize = 0;
    this->hmacTypes_var = 0;
    random_arraysize = 0;
    this->random_var = 0;
    copy(other);
}

SCTPInitChunk::~SCTPInitChunk()
{
    delete [] addresses_var;
    delete [] unrecognizedParameters_var;
    delete [] chunkTypes_var;
    delete [] sepChunks_var;
    delete [] hmacTypes_var;
    delete [] random_var;
}

SCTPInitChunk& SCTPInitChunk::operator=(const SCTPInitChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPInitChunk::copy(const SCTPInitChunk& other)
{
    this->initTag_var = other.initTag_var;
    this->a_rwnd_var = other.a_rwnd_var;
    this->noOutStreams_var = other.noOutStreams_var;
    this->noInStreams_var = other.noInStreams_var;
    this->initTSN_var = other.initTSN_var;
    this->forwardTsn_var = other.forwardTsn_var;
    delete [] this->addresses_var;
    this->addresses_var = (other.addresses_arraysize==0) ? NULL : new IPvXAddress[other.addresses_arraysize];
    addresses_arraysize = other.addresses_arraysize;
    for (unsigned int i=0; i<addresses_arraysize; i++)
        this->addresses_var[i] = other.addresses_var[i];
    delete [] this->unrecognizedParameters_var;
    this->unrecognizedParameters_var = (other.unrecognizedParameters_arraysize==0) ? NULL : new uint8[other.unrecognizedParameters_arraysize];
    unrecognizedParameters_arraysize = other.unrecognizedParameters_arraysize;
    for (unsigned int i=0; i<unrecognizedParameters_arraysize; i++)
        this->unrecognizedParameters_var[i] = other.unrecognizedParameters_var[i];
    this->msg_rwnd_var = other.msg_rwnd_var;
    delete [] this->chunkTypes_var;
    this->chunkTypes_var = (other.chunkTypes_arraysize==0) ? NULL : new uint16[other.chunkTypes_arraysize];
    chunkTypes_arraysize = other.chunkTypes_arraysize;
    for (unsigned int i=0; i<chunkTypes_arraysize; i++)
        this->chunkTypes_var[i] = other.chunkTypes_var[i];
    delete [] this->sepChunks_var;
    this->sepChunks_var = (other.sepChunks_arraysize==0) ? NULL : new uint16[other.sepChunks_arraysize];
    sepChunks_arraysize = other.sepChunks_arraysize;
    for (unsigned int i=0; i<sepChunks_arraysize; i++)
        this->sepChunks_var[i] = other.sepChunks_var[i];
    delete [] this->hmacTypes_var;
    this->hmacTypes_var = (other.hmacTypes_arraysize==0) ? NULL : new uint16[other.hmacTypes_arraysize];
    hmacTypes_arraysize = other.hmacTypes_arraysize;
    for (unsigned int i=0; i<hmacTypes_arraysize; i++)
        this->hmacTypes_var[i] = other.hmacTypes_var[i];
    delete [] this->random_var;
    this->random_var = (other.random_arraysize==0) ? NULL : new uint8[other.random_arraysize];
    random_arraysize = other.random_arraysize;
    for (unsigned int i=0; i<random_arraysize; i++)
        this->random_var[i] = other.random_var[i];
}

void SCTPInitChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->initTag_var);
    doPacking(b,this->a_rwnd_var);
    doPacking(b,this->noOutStreams_var);
    doPacking(b,this->noInStreams_var);
    doPacking(b,this->initTSN_var);
    doPacking(b,this->forwardTsn_var);
    b->pack(addresses_arraysize);
    doPacking(b,this->addresses_var,addresses_arraysize);
    b->pack(unrecognizedParameters_arraysize);
    doPacking(b,this->unrecognizedParameters_var,unrecognizedParameters_arraysize);
    doPacking(b,this->msg_rwnd_var);
    b->pack(chunkTypes_arraysize);
    doPacking(b,this->chunkTypes_var,chunkTypes_arraysize);
    b->pack(sepChunks_arraysize);
    doPacking(b,this->sepChunks_var,sepChunks_arraysize);
    b->pack(hmacTypes_arraysize);
    doPacking(b,this->hmacTypes_var,hmacTypes_arraysize);
    b->pack(random_arraysize);
    doPacking(b,this->random_var,random_arraysize);
}

void SCTPInitChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->initTag_var);
    doUnpacking(b,this->a_rwnd_var);
    doUnpacking(b,this->noOutStreams_var);
    doUnpacking(b,this->noInStreams_var);
    doUnpacking(b,this->initTSN_var);
    doUnpacking(b,this->forwardTsn_var);
    delete [] this->addresses_var;
    b->unpack(addresses_arraysize);
    if (addresses_arraysize==0) {
        this->addresses_var = 0;
    } else {
        this->addresses_var = new IPvXAddress[addresses_arraysize];
        doUnpacking(b,this->addresses_var,addresses_arraysize);
    }
    delete [] this->unrecognizedParameters_var;
    b->unpack(unrecognizedParameters_arraysize);
    if (unrecognizedParameters_arraysize==0) {
        this->unrecognizedParameters_var = 0;
    } else {
        this->unrecognizedParameters_var = new uint8[unrecognizedParameters_arraysize];
        doUnpacking(b,this->unrecognizedParameters_var,unrecognizedParameters_arraysize);
    }
    doUnpacking(b,this->msg_rwnd_var);
    delete [] this->chunkTypes_var;
    b->unpack(chunkTypes_arraysize);
    if (chunkTypes_arraysize==0) {
        this->chunkTypes_var = 0;
    } else {
        this->chunkTypes_var = new uint16[chunkTypes_arraysize];
        doUnpacking(b,this->chunkTypes_var,chunkTypes_arraysize);
    }
    delete [] this->sepChunks_var;
    b->unpack(sepChunks_arraysize);
    if (sepChunks_arraysize==0) {
        this->sepChunks_var = 0;
    } else {
        this->sepChunks_var = new uint16[sepChunks_arraysize];
        doUnpacking(b,this->sepChunks_var,sepChunks_arraysize);
    }
    delete [] this->hmacTypes_var;
    b->unpack(hmacTypes_arraysize);
    if (hmacTypes_arraysize==0) {
        this->hmacTypes_var = 0;
    } else {
        this->hmacTypes_var = new uint16[hmacTypes_arraysize];
        doUnpacking(b,this->hmacTypes_var,hmacTypes_arraysize);
    }
    delete [] this->random_var;
    b->unpack(random_arraysize);
    if (random_arraysize==0) {
        this->random_var = 0;
    } else {
        this->random_var = new uint8[random_arraysize];
        doUnpacking(b,this->random_var,random_arraysize);
    }
}

uint32 SCTPInitChunk::getInitTag() const
{
    return initTag_var;
}

void SCTPInitChunk::setInitTag(uint32 initTag)
{
    this->initTag_var = initTag;
}

uint32 SCTPInitChunk::getA_rwnd() const
{
    return a_rwnd_var;
}

void SCTPInitChunk::setA_rwnd(uint32 a_rwnd)
{
    this->a_rwnd_var = a_rwnd;
}

uint16 SCTPInitChunk::getNoOutStreams() const
{
    return noOutStreams_var;
}

void SCTPInitChunk::setNoOutStreams(uint16 noOutStreams)
{
    this->noOutStreams_var = noOutStreams;
}

uint16 SCTPInitChunk::getNoInStreams() const
{
    return noInStreams_var;
}

void SCTPInitChunk::setNoInStreams(uint16 noInStreams)
{
    this->noInStreams_var = noInStreams;
}

uint32 SCTPInitChunk::getInitTSN() const
{
    return initTSN_var;
}

void SCTPInitChunk::setInitTSN(uint32 initTSN)
{
    this->initTSN_var = initTSN;
}

bool SCTPInitChunk::getForwardTsn() const
{
    return forwardTsn_var;
}

void SCTPInitChunk::setForwardTsn(bool forwardTsn)
{
    this->forwardTsn_var = forwardTsn;
}

void SCTPInitChunk::setAddressesArraySize(unsigned int size)
{
    IPvXAddress *addresses_var2 = (size==0) ? NULL : new IPvXAddress[size];
    unsigned int sz = addresses_arraysize < size ? addresses_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        addresses_var2[i] = this->addresses_var[i];
    addresses_arraysize = size;
    delete [] this->addresses_var;
    this->addresses_var = addresses_var2;
}

unsigned int SCTPInitChunk::getAddressesArraySize() const
{
    return addresses_arraysize;
}

IPvXAddress& SCTPInitChunk::getAddresses(unsigned int k)
{
    if (k>=addresses_arraysize) throw cRuntimeError("Array of size %d indexed by %d", addresses_arraysize, k);
    return addresses_var[k];
}

void SCTPInitChunk::setAddresses(unsigned int k, const IPvXAddress& addresses)
{
    if (k>=addresses_arraysize) throw cRuntimeError("Array of size %d indexed by %d", addresses_arraysize, k);
    this->addresses_var[k] = addresses;
}

void SCTPInitChunk::setUnrecognizedParametersArraySize(unsigned int size)
{
    uint8 *unrecognizedParameters_var2 = (size==0) ? NULL : new uint8[size];
    unsigned int sz = unrecognizedParameters_arraysize < size ? unrecognizedParameters_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        unrecognizedParameters_var2[i] = this->unrecognizedParameters_var[i];
    for (unsigned int i=sz; i<size; i++)
        unrecognizedParameters_var2[i] = 0;
    unrecognizedParameters_arraysize = size;
    delete [] this->unrecognizedParameters_var;
    this->unrecognizedParameters_var = unrecognizedParameters_var2;
}

unsigned int SCTPInitChunk::getUnrecognizedParametersArraySize() const
{
    return unrecognizedParameters_arraysize;
}

uint8 SCTPInitChunk::getUnrecognizedParameters(unsigned int k) const
{
    if (k>=unrecognizedParameters_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unrecognizedParameters_arraysize, k);
    return unrecognizedParameters_var[k];
}

void SCTPInitChunk::setUnrecognizedParameters(unsigned int k, uint8 unrecognizedParameters)
{
    if (k>=unrecognizedParameters_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unrecognizedParameters_arraysize, k);
    this->unrecognizedParameters_var[k] = unrecognizedParameters;
}

uint32 SCTPInitChunk::getMsg_rwnd() const
{
    return msg_rwnd_var;
}

void SCTPInitChunk::setMsg_rwnd(uint32 msg_rwnd)
{
    this->msg_rwnd_var = msg_rwnd;
}

void SCTPInitChunk::setChunkTypesArraySize(unsigned int size)
{
    uint16 *chunkTypes_var2 = (size==0) ? NULL : new uint16[size];
    unsigned int sz = chunkTypes_arraysize < size ? chunkTypes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        chunkTypes_var2[i] = this->chunkTypes_var[i];
    for (unsigned int i=sz; i<size; i++)
        chunkTypes_var2[i] = 0;
    chunkTypes_arraysize = size;
    delete [] this->chunkTypes_var;
    this->chunkTypes_var = chunkTypes_var2;
}

unsigned int SCTPInitChunk::getChunkTypesArraySize() const
{
    return chunkTypes_arraysize;
}

uint16 SCTPInitChunk::getChunkTypes(unsigned int k) const
{
    if (k>=chunkTypes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", chunkTypes_arraysize, k);
    return chunkTypes_var[k];
}

void SCTPInitChunk::setChunkTypes(unsigned int k, uint16 chunkTypes)
{
    if (k>=chunkTypes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", chunkTypes_arraysize, k);
    this->chunkTypes_var[k] = chunkTypes;
}

void SCTPInitChunk::setSepChunksArraySize(unsigned int size)
{
    uint16 *sepChunks_var2 = (size==0) ? NULL : new uint16[size];
    unsigned int sz = sepChunks_arraysize < size ? sepChunks_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        sepChunks_var2[i] = this->sepChunks_var[i];
    for (unsigned int i=sz; i<size; i++)
        sepChunks_var2[i] = 0;
    sepChunks_arraysize = size;
    delete [] this->sepChunks_var;
    this->sepChunks_var = sepChunks_var2;
}

unsigned int SCTPInitChunk::getSepChunksArraySize() const
{
    return sepChunks_arraysize;
}

uint16 SCTPInitChunk::getSepChunks(unsigned int k) const
{
    if (k>=sepChunks_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sepChunks_arraysize, k);
    return sepChunks_var[k];
}

void SCTPInitChunk::setSepChunks(unsigned int k, uint16 sepChunks)
{
    if (k>=sepChunks_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sepChunks_arraysize, k);
    this->sepChunks_var[k] = sepChunks;
}

void SCTPInitChunk::setHmacTypesArraySize(unsigned int size)
{
    uint16 *hmacTypes_var2 = (size==0) ? NULL : new uint16[size];
    unsigned int sz = hmacTypes_arraysize < size ? hmacTypes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        hmacTypes_var2[i] = this->hmacTypes_var[i];
    for (unsigned int i=sz; i<size; i++)
        hmacTypes_var2[i] = 0;
    hmacTypes_arraysize = size;
    delete [] this->hmacTypes_var;
    this->hmacTypes_var = hmacTypes_var2;
}

unsigned int SCTPInitChunk::getHmacTypesArraySize() const
{
    return hmacTypes_arraysize;
}

uint16 SCTPInitChunk::getHmacTypes(unsigned int k) const
{
    if (k>=hmacTypes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", hmacTypes_arraysize, k);
    return hmacTypes_var[k];
}

void SCTPInitChunk::setHmacTypes(unsigned int k, uint16 hmacTypes)
{
    if (k>=hmacTypes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", hmacTypes_arraysize, k);
    this->hmacTypes_var[k] = hmacTypes;
}

void SCTPInitChunk::setRandomArraySize(unsigned int size)
{
    uint8 *random_var2 = (size==0) ? NULL : new uint8[size];
    unsigned int sz = random_arraysize < size ? random_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        random_var2[i] = this->random_var[i];
    for (unsigned int i=sz; i<size; i++)
        random_var2[i] = 0;
    random_arraysize = size;
    delete [] this->random_var;
    this->random_var = random_var2;
}

unsigned int SCTPInitChunk::getRandomArraySize() const
{
    return random_arraysize;
}

uint8 SCTPInitChunk::getRandom(unsigned int k) const
{
    if (k>=random_arraysize) throw cRuntimeError("Array of size %d indexed by %d", random_arraysize, k);
    return random_var[k];
}

void SCTPInitChunk::setRandom(unsigned int k, uint8 random)
{
    if (k>=random_arraysize) throw cRuntimeError("Array of size %d indexed by %d", random_arraysize, k);
    this->random_var[k] = random;
}

class SCTPInitChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPInitChunkDescriptor();
    virtual ~SCTPInitChunkDescriptor();

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

Register_ClassDescriptor(SCTPInitChunkDescriptor);

SCTPInitChunkDescriptor::SCTPInitChunkDescriptor() : cClassDescriptor("SCTPInitChunk", "SCTPChunk")
{
}

SCTPInitChunkDescriptor::~SCTPInitChunkDescriptor()
{
}

bool SCTPInitChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPInitChunk *>(obj)!=NULL;
}

const char *SCTPInitChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPInitChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 13+basedesc->getFieldCount(object) : 13;
}

unsigned int SCTPInitChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<13) ? fieldTypeFlags[field] : 0;
}

const char *SCTPInitChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "initTag",
        "a_rwnd",
        "noOutStreams",
        "noInStreams",
        "initTSN",
        "forwardTsn",
        "addresses",
        "unrecognizedParameters",
        "msg_rwnd",
        "chunkTypes",
        "sepChunks",
        "hmacTypes",
        "random",
    };
    return (field>=0 && field<13) ? fieldNames[field] : NULL;
}

int SCTPInitChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "initTag")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "a_rwnd")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "noOutStreams")==0) return base+2;
    if (fieldName[0]=='n' && strcmp(fieldName, "noInStreams")==0) return base+3;
    if (fieldName[0]=='i' && strcmp(fieldName, "initTSN")==0) return base+4;
    if (fieldName[0]=='f' && strcmp(fieldName, "forwardTsn")==0) return base+5;
    if (fieldName[0]=='a' && strcmp(fieldName, "addresses")==0) return base+6;
    if (fieldName[0]=='u' && strcmp(fieldName, "unrecognizedParameters")==0) return base+7;
    if (fieldName[0]=='m' && strcmp(fieldName, "msg_rwnd")==0) return base+8;
    if (fieldName[0]=='c' && strcmp(fieldName, "chunkTypes")==0) return base+9;
    if (fieldName[0]=='s' && strcmp(fieldName, "sepChunks")==0) return base+10;
    if (fieldName[0]=='h' && strcmp(fieldName, "hmacTypes")==0) return base+11;
    if (fieldName[0]=='r' && strcmp(fieldName, "random")==0) return base+12;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPInitChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "uint32",
        "uint16",
        "uint16",
        "uint32",
        "bool",
        "IPvXAddress",
        "uint8",
        "uint32",
        "uint16",
        "uint16",
        "uint16",
        "uint8",
    };
    return (field>=0 && field<13) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPInitChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPInitChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInitChunk *pp = (SCTPInitChunk *)object; (void)pp;
    switch (field) {
        case 6: return pp->getAddressesArraySize();
        case 7: return pp->getUnrecognizedParametersArraySize();
        case 9: return pp->getChunkTypesArraySize();
        case 10: return pp->getSepChunksArraySize();
        case 11: return pp->getHmacTypesArraySize();
        case 12: return pp->getRandomArraySize();
        default: return 0;
    }
}

std::string SCTPInitChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInitChunk *pp = (SCTPInitChunk *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getInitTag());
        case 1: return ulong2string(pp->getA_rwnd());
        case 2: return ulong2string(pp->getNoOutStreams());
        case 3: return ulong2string(pp->getNoInStreams());
        case 4: return ulong2string(pp->getInitTSN());
        case 5: return bool2string(pp->getForwardTsn());
        case 6: {std::stringstream out; out << pp->getAddresses(i); return out.str();}
        case 7: return ulong2string(pp->getUnrecognizedParameters(i));
        case 8: return ulong2string(pp->getMsg_rwnd());
        case 9: return ulong2string(pp->getChunkTypes(i));
        case 10: return ulong2string(pp->getSepChunks(i));
        case 11: return ulong2string(pp->getHmacTypes(i));
        case 12: return ulong2string(pp->getRandom(i));
        default: return "";
    }
}

bool SCTPInitChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInitChunk *pp = (SCTPInitChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setInitTag(string2ulong(value)); return true;
        case 1: pp->setA_rwnd(string2ulong(value)); return true;
        case 2: pp->setNoOutStreams(string2ulong(value)); return true;
        case 3: pp->setNoInStreams(string2ulong(value)); return true;
        case 4: pp->setInitTSN(string2ulong(value)); return true;
        case 5: pp->setForwardTsn(string2bool(value)); return true;
        case 7: pp->setUnrecognizedParameters(i,string2ulong(value)); return true;
        case 8: pp->setMsg_rwnd(string2ulong(value)); return true;
        case 9: pp->setChunkTypes(i,string2ulong(value)); return true;
        case 10: pp->setSepChunks(i,string2ulong(value)); return true;
        case 11: pp->setHmacTypes(i,string2ulong(value)); return true;
        case 12: pp->setRandom(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPInitChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 6: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *SCTPInitChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInitChunk *pp = (SCTPInitChunk *)object; (void)pp;
    switch (field) {
        case 6: return (void *)(&pp->getAddresses(i)); break;
        default: return NULL;
    }
}

Register_Class(SCTPInitAckChunk);

SCTPInitAckChunk::SCTPInitAckChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->initTag_var = 0;
    this->a_rwnd_var = 0;
    this->noOutStreams_var = 0;
    this->noInStreams_var = 0;
    this->initTSN_var = 0;
    this->forwardTsn_var = 0;
    addresses_arraysize = 0;
    this->addresses_var = 0;
    cookie_arraysize = 0;
    this->cookie_var = 0;
    unrecognizedParameters_arraysize = 0;
    this->unrecognizedParameters_var = 0;
    this->msg_rwnd_var = 0;
    random_arraysize = 0;
    this->random_var = 0;
    chunkTypes_arraysize = 0;
    this->chunkTypes_var = 0;
    sepChunks_arraysize = 0;
    this->sepChunks_var = 0;
    hmacTypes_arraysize = 0;
    this->hmacTypes_var = 0;
}

SCTPInitAckChunk::SCTPInitAckChunk(const SCTPInitAckChunk& other) : ::SCTPChunk(other)
{
    addresses_arraysize = 0;
    this->addresses_var = 0;
    cookie_arraysize = 0;
    this->cookie_var = 0;
    unrecognizedParameters_arraysize = 0;
    this->unrecognizedParameters_var = 0;
    random_arraysize = 0;
    this->random_var = 0;
    chunkTypes_arraysize = 0;
    this->chunkTypes_var = 0;
    sepChunks_arraysize = 0;
    this->sepChunks_var = 0;
    hmacTypes_arraysize = 0;
    this->hmacTypes_var = 0;
    copy(other);
}

SCTPInitAckChunk::~SCTPInitAckChunk()
{
    delete [] addresses_var;
    delete [] cookie_var;
    delete [] unrecognizedParameters_var;
    delete [] random_var;
    delete [] chunkTypes_var;
    delete [] sepChunks_var;
    delete [] hmacTypes_var;
}

SCTPInitAckChunk& SCTPInitAckChunk::operator=(const SCTPInitAckChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPInitAckChunk::copy(const SCTPInitAckChunk& other)
{
    this->initTag_var = other.initTag_var;
    this->a_rwnd_var = other.a_rwnd_var;
    this->noOutStreams_var = other.noOutStreams_var;
    this->noInStreams_var = other.noInStreams_var;
    this->initTSN_var = other.initTSN_var;
    this->forwardTsn_var = other.forwardTsn_var;
    delete [] this->addresses_var;
    this->addresses_var = (other.addresses_arraysize==0) ? NULL : new IPvXAddress[other.addresses_arraysize];
    addresses_arraysize = other.addresses_arraysize;
    for (unsigned int i=0; i<addresses_arraysize; i++)
        this->addresses_var[i] = other.addresses_var[i];
    delete [] this->cookie_var;
    this->cookie_var = (other.cookie_arraysize==0) ? NULL : new char[other.cookie_arraysize];
    cookie_arraysize = other.cookie_arraysize;
    for (unsigned int i=0; i<cookie_arraysize; i++)
        this->cookie_var[i] = other.cookie_var[i];
    delete [] this->unrecognizedParameters_var;
    this->unrecognizedParameters_var = (other.unrecognizedParameters_arraysize==0) ? NULL : new uint8[other.unrecognizedParameters_arraysize];
    unrecognizedParameters_arraysize = other.unrecognizedParameters_arraysize;
    for (unsigned int i=0; i<unrecognizedParameters_arraysize; i++)
        this->unrecognizedParameters_var[i] = other.unrecognizedParameters_var[i];
    this->stateCookie_var = other.stateCookie_var;
    this->msg_rwnd_var = other.msg_rwnd_var;
    delete [] this->random_var;
    this->random_var = (other.random_arraysize==0) ? NULL : new uint8[other.random_arraysize];
    random_arraysize = other.random_arraysize;
    for (unsigned int i=0; i<random_arraysize; i++)
        this->random_var[i] = other.random_var[i];
    delete [] this->chunkTypes_var;
    this->chunkTypes_var = (other.chunkTypes_arraysize==0) ? NULL : new uint16[other.chunkTypes_arraysize];
    chunkTypes_arraysize = other.chunkTypes_arraysize;
    for (unsigned int i=0; i<chunkTypes_arraysize; i++)
        this->chunkTypes_var[i] = other.chunkTypes_var[i];
    delete [] this->sepChunks_var;
    this->sepChunks_var = (other.sepChunks_arraysize==0) ? NULL : new uint16[other.sepChunks_arraysize];
    sepChunks_arraysize = other.sepChunks_arraysize;
    for (unsigned int i=0; i<sepChunks_arraysize; i++)
        this->sepChunks_var[i] = other.sepChunks_var[i];
    delete [] this->hmacTypes_var;
    this->hmacTypes_var = (other.hmacTypes_arraysize==0) ? NULL : new uint16[other.hmacTypes_arraysize];
    hmacTypes_arraysize = other.hmacTypes_arraysize;
    for (unsigned int i=0; i<hmacTypes_arraysize; i++)
        this->hmacTypes_var[i] = other.hmacTypes_var[i];
}

void SCTPInitAckChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->initTag_var);
    doPacking(b,this->a_rwnd_var);
    doPacking(b,this->noOutStreams_var);
    doPacking(b,this->noInStreams_var);
    doPacking(b,this->initTSN_var);
    doPacking(b,this->forwardTsn_var);
    b->pack(addresses_arraysize);
    doPacking(b,this->addresses_var,addresses_arraysize);
    b->pack(cookie_arraysize);
    doPacking(b,this->cookie_var,cookie_arraysize);
    b->pack(unrecognizedParameters_arraysize);
    doPacking(b,this->unrecognizedParameters_var,unrecognizedParameters_arraysize);
    doPacking(b,this->stateCookie_var);
    doPacking(b,this->msg_rwnd_var);
    b->pack(random_arraysize);
    doPacking(b,this->random_var,random_arraysize);
    b->pack(chunkTypes_arraysize);
    doPacking(b,this->chunkTypes_var,chunkTypes_arraysize);
    b->pack(sepChunks_arraysize);
    doPacking(b,this->sepChunks_var,sepChunks_arraysize);
    b->pack(hmacTypes_arraysize);
    doPacking(b,this->hmacTypes_var,hmacTypes_arraysize);
}

void SCTPInitAckChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->initTag_var);
    doUnpacking(b,this->a_rwnd_var);
    doUnpacking(b,this->noOutStreams_var);
    doUnpacking(b,this->noInStreams_var);
    doUnpacking(b,this->initTSN_var);
    doUnpacking(b,this->forwardTsn_var);
    delete [] this->addresses_var;
    b->unpack(addresses_arraysize);
    if (addresses_arraysize==0) {
        this->addresses_var = 0;
    } else {
        this->addresses_var = new IPvXAddress[addresses_arraysize];
        doUnpacking(b,this->addresses_var,addresses_arraysize);
    }
    delete [] this->cookie_var;
    b->unpack(cookie_arraysize);
    if (cookie_arraysize==0) {
        this->cookie_var = 0;
    } else {
        this->cookie_var = new char[cookie_arraysize];
        doUnpacking(b,this->cookie_var,cookie_arraysize);
    }
    delete [] this->unrecognizedParameters_var;
    b->unpack(unrecognizedParameters_arraysize);
    if (unrecognizedParameters_arraysize==0) {
        this->unrecognizedParameters_var = 0;
    } else {
        this->unrecognizedParameters_var = new uint8[unrecognizedParameters_arraysize];
        doUnpacking(b,this->unrecognizedParameters_var,unrecognizedParameters_arraysize);
    }
    doUnpacking(b,this->stateCookie_var);
    doUnpacking(b,this->msg_rwnd_var);
    delete [] this->random_var;
    b->unpack(random_arraysize);
    if (random_arraysize==0) {
        this->random_var = 0;
    } else {
        this->random_var = new uint8[random_arraysize];
        doUnpacking(b,this->random_var,random_arraysize);
    }
    delete [] this->chunkTypes_var;
    b->unpack(chunkTypes_arraysize);
    if (chunkTypes_arraysize==0) {
        this->chunkTypes_var = 0;
    } else {
        this->chunkTypes_var = new uint16[chunkTypes_arraysize];
        doUnpacking(b,this->chunkTypes_var,chunkTypes_arraysize);
    }
    delete [] this->sepChunks_var;
    b->unpack(sepChunks_arraysize);
    if (sepChunks_arraysize==0) {
        this->sepChunks_var = 0;
    } else {
        this->sepChunks_var = new uint16[sepChunks_arraysize];
        doUnpacking(b,this->sepChunks_var,sepChunks_arraysize);
    }
    delete [] this->hmacTypes_var;
    b->unpack(hmacTypes_arraysize);
    if (hmacTypes_arraysize==0) {
        this->hmacTypes_var = 0;
    } else {
        this->hmacTypes_var = new uint16[hmacTypes_arraysize];
        doUnpacking(b,this->hmacTypes_var,hmacTypes_arraysize);
    }
}

uint32 SCTPInitAckChunk::getInitTag() const
{
    return initTag_var;
}

void SCTPInitAckChunk::setInitTag(uint32 initTag)
{
    this->initTag_var = initTag;
}

uint32 SCTPInitAckChunk::getA_rwnd() const
{
    return a_rwnd_var;
}

void SCTPInitAckChunk::setA_rwnd(uint32 a_rwnd)
{
    this->a_rwnd_var = a_rwnd;
}

uint16 SCTPInitAckChunk::getNoOutStreams() const
{
    return noOutStreams_var;
}

void SCTPInitAckChunk::setNoOutStreams(uint16 noOutStreams)
{
    this->noOutStreams_var = noOutStreams;
}

uint16 SCTPInitAckChunk::getNoInStreams() const
{
    return noInStreams_var;
}

void SCTPInitAckChunk::setNoInStreams(uint16 noInStreams)
{
    this->noInStreams_var = noInStreams;
}

uint32 SCTPInitAckChunk::getInitTSN() const
{
    return initTSN_var;
}

void SCTPInitAckChunk::setInitTSN(uint32 initTSN)
{
    this->initTSN_var = initTSN;
}

bool SCTPInitAckChunk::getForwardTsn() const
{
    return forwardTsn_var;
}

void SCTPInitAckChunk::setForwardTsn(bool forwardTsn)
{
    this->forwardTsn_var = forwardTsn;
}

void SCTPInitAckChunk::setAddressesArraySize(unsigned int size)
{
    IPvXAddress *addresses_var2 = (size==0) ? NULL : new IPvXAddress[size];
    unsigned int sz = addresses_arraysize < size ? addresses_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        addresses_var2[i] = this->addresses_var[i];
    addresses_arraysize = size;
    delete [] this->addresses_var;
    this->addresses_var = addresses_var2;
}

unsigned int SCTPInitAckChunk::getAddressesArraySize() const
{
    return addresses_arraysize;
}

IPvXAddress& SCTPInitAckChunk::getAddresses(unsigned int k)
{
    if (k>=addresses_arraysize) throw cRuntimeError("Array of size %d indexed by %d", addresses_arraysize, k);
    return addresses_var[k];
}

void SCTPInitAckChunk::setAddresses(unsigned int k, const IPvXAddress& addresses)
{
    if (k>=addresses_arraysize) throw cRuntimeError("Array of size %d indexed by %d", addresses_arraysize, k);
    this->addresses_var[k] = addresses;
}

void SCTPInitAckChunk::setCookieArraySize(unsigned int size)
{
    char *cookie_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = cookie_arraysize < size ? cookie_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        cookie_var2[i] = this->cookie_var[i];
    for (unsigned int i=sz; i<size; i++)
        cookie_var2[i] = 0;
    cookie_arraysize = size;
    delete [] this->cookie_var;
    this->cookie_var = cookie_var2;
}

unsigned int SCTPInitAckChunk::getCookieArraySize() const
{
    return cookie_arraysize;
}

char SCTPInitAckChunk::getCookie(unsigned int k) const
{
    if (k>=cookie_arraysize) throw cRuntimeError("Array of size %d indexed by %d", cookie_arraysize, k);
    return cookie_var[k];
}

void SCTPInitAckChunk::setCookie(unsigned int k, char cookie)
{
    if (k>=cookie_arraysize) throw cRuntimeError("Array of size %d indexed by %d", cookie_arraysize, k);
    this->cookie_var[k] = cookie;
}

void SCTPInitAckChunk::setUnrecognizedParametersArraySize(unsigned int size)
{
    uint8 *unrecognizedParameters_var2 = (size==0) ? NULL : new uint8[size];
    unsigned int sz = unrecognizedParameters_arraysize < size ? unrecognizedParameters_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        unrecognizedParameters_var2[i] = this->unrecognizedParameters_var[i];
    for (unsigned int i=sz; i<size; i++)
        unrecognizedParameters_var2[i] = 0;
    unrecognizedParameters_arraysize = size;
    delete [] this->unrecognizedParameters_var;
    this->unrecognizedParameters_var = unrecognizedParameters_var2;
}

unsigned int SCTPInitAckChunk::getUnrecognizedParametersArraySize() const
{
    return unrecognizedParameters_arraysize;
}

uint8 SCTPInitAckChunk::getUnrecognizedParameters(unsigned int k) const
{
    if (k>=unrecognizedParameters_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unrecognizedParameters_arraysize, k);
    return unrecognizedParameters_var[k];
}

void SCTPInitAckChunk::setUnrecognizedParameters(unsigned int k, uint8 unrecognizedParameters)
{
    if (k>=unrecognizedParameters_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unrecognizedParameters_arraysize, k);
    this->unrecognizedParameters_var[k] = unrecognizedParameters;
}

cPacketPtr& SCTPInitAckChunk::getStateCookie()
{
    return stateCookie_var;
}

void SCTPInitAckChunk::setStateCookie(const cPacketPtr& stateCookie)
{
    this->stateCookie_var = stateCookie;
}

uint32 SCTPInitAckChunk::getMsg_rwnd() const
{
    return msg_rwnd_var;
}

void SCTPInitAckChunk::setMsg_rwnd(uint32 msg_rwnd)
{
    this->msg_rwnd_var = msg_rwnd;
}

void SCTPInitAckChunk::setRandomArraySize(unsigned int size)
{
    uint8 *random_var2 = (size==0) ? NULL : new uint8[size];
    unsigned int sz = random_arraysize < size ? random_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        random_var2[i] = this->random_var[i];
    for (unsigned int i=sz; i<size; i++)
        random_var2[i] = 0;
    random_arraysize = size;
    delete [] this->random_var;
    this->random_var = random_var2;
}

unsigned int SCTPInitAckChunk::getRandomArraySize() const
{
    return random_arraysize;
}

uint8 SCTPInitAckChunk::getRandom(unsigned int k) const
{
    if (k>=random_arraysize) throw cRuntimeError("Array of size %d indexed by %d", random_arraysize, k);
    return random_var[k];
}

void SCTPInitAckChunk::setRandom(unsigned int k, uint8 random)
{
    if (k>=random_arraysize) throw cRuntimeError("Array of size %d indexed by %d", random_arraysize, k);
    this->random_var[k] = random;
}

void SCTPInitAckChunk::setChunkTypesArraySize(unsigned int size)
{
    uint16 *chunkTypes_var2 = (size==0) ? NULL : new uint16[size];
    unsigned int sz = chunkTypes_arraysize < size ? chunkTypes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        chunkTypes_var2[i] = this->chunkTypes_var[i];
    for (unsigned int i=sz; i<size; i++)
        chunkTypes_var2[i] = 0;
    chunkTypes_arraysize = size;
    delete [] this->chunkTypes_var;
    this->chunkTypes_var = chunkTypes_var2;
}

unsigned int SCTPInitAckChunk::getChunkTypesArraySize() const
{
    return chunkTypes_arraysize;
}

uint16 SCTPInitAckChunk::getChunkTypes(unsigned int k) const
{
    if (k>=chunkTypes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", chunkTypes_arraysize, k);
    return chunkTypes_var[k];
}

void SCTPInitAckChunk::setChunkTypes(unsigned int k, uint16 chunkTypes)
{
    if (k>=chunkTypes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", chunkTypes_arraysize, k);
    this->chunkTypes_var[k] = chunkTypes;
}

void SCTPInitAckChunk::setSepChunksArraySize(unsigned int size)
{
    uint16 *sepChunks_var2 = (size==0) ? NULL : new uint16[size];
    unsigned int sz = sepChunks_arraysize < size ? sepChunks_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        sepChunks_var2[i] = this->sepChunks_var[i];
    for (unsigned int i=sz; i<size; i++)
        sepChunks_var2[i] = 0;
    sepChunks_arraysize = size;
    delete [] this->sepChunks_var;
    this->sepChunks_var = sepChunks_var2;
}

unsigned int SCTPInitAckChunk::getSepChunksArraySize() const
{
    return sepChunks_arraysize;
}

uint16 SCTPInitAckChunk::getSepChunks(unsigned int k) const
{
    if (k>=sepChunks_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sepChunks_arraysize, k);
    return sepChunks_var[k];
}

void SCTPInitAckChunk::setSepChunks(unsigned int k, uint16 sepChunks)
{
    if (k>=sepChunks_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sepChunks_arraysize, k);
    this->sepChunks_var[k] = sepChunks;
}

void SCTPInitAckChunk::setHmacTypesArraySize(unsigned int size)
{
    uint16 *hmacTypes_var2 = (size==0) ? NULL : new uint16[size];
    unsigned int sz = hmacTypes_arraysize < size ? hmacTypes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        hmacTypes_var2[i] = this->hmacTypes_var[i];
    for (unsigned int i=sz; i<size; i++)
        hmacTypes_var2[i] = 0;
    hmacTypes_arraysize = size;
    delete [] this->hmacTypes_var;
    this->hmacTypes_var = hmacTypes_var2;
}

unsigned int SCTPInitAckChunk::getHmacTypesArraySize() const
{
    return hmacTypes_arraysize;
}

uint16 SCTPInitAckChunk::getHmacTypes(unsigned int k) const
{
    if (k>=hmacTypes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", hmacTypes_arraysize, k);
    return hmacTypes_var[k];
}

void SCTPInitAckChunk::setHmacTypes(unsigned int k, uint16 hmacTypes)
{
    if (k>=hmacTypes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", hmacTypes_arraysize, k);
    this->hmacTypes_var[k] = hmacTypes;
}

class SCTPInitAckChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPInitAckChunkDescriptor();
    virtual ~SCTPInitAckChunkDescriptor();

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

Register_ClassDescriptor(SCTPInitAckChunkDescriptor);

SCTPInitAckChunkDescriptor::SCTPInitAckChunkDescriptor() : cClassDescriptor("SCTPInitAckChunk", "SCTPChunk")
{
}

SCTPInitAckChunkDescriptor::~SCTPInitAckChunkDescriptor()
{
}

bool SCTPInitAckChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPInitAckChunk *>(obj)!=NULL;
}

const char *SCTPInitAckChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPInitAckChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 15+basedesc->getFieldCount(object) : 15;
}

unsigned int SCTPInitAckChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<15) ? fieldTypeFlags[field] : 0;
}

const char *SCTPInitAckChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "initTag",
        "a_rwnd",
        "noOutStreams",
        "noInStreams",
        "initTSN",
        "forwardTsn",
        "addresses",
        "cookie",
        "unrecognizedParameters",
        "stateCookie",
        "msg_rwnd",
        "random",
        "chunkTypes",
        "sepChunks",
        "hmacTypes",
    };
    return (field>=0 && field<15) ? fieldNames[field] : NULL;
}

int SCTPInitAckChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "initTag")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "a_rwnd")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "noOutStreams")==0) return base+2;
    if (fieldName[0]=='n' && strcmp(fieldName, "noInStreams")==0) return base+3;
    if (fieldName[0]=='i' && strcmp(fieldName, "initTSN")==0) return base+4;
    if (fieldName[0]=='f' && strcmp(fieldName, "forwardTsn")==0) return base+5;
    if (fieldName[0]=='a' && strcmp(fieldName, "addresses")==0) return base+6;
    if (fieldName[0]=='c' && strcmp(fieldName, "cookie")==0) return base+7;
    if (fieldName[0]=='u' && strcmp(fieldName, "unrecognizedParameters")==0) return base+8;
    if (fieldName[0]=='s' && strcmp(fieldName, "stateCookie")==0) return base+9;
    if (fieldName[0]=='m' && strcmp(fieldName, "msg_rwnd")==0) return base+10;
    if (fieldName[0]=='r' && strcmp(fieldName, "random")==0) return base+11;
    if (fieldName[0]=='c' && strcmp(fieldName, "chunkTypes")==0) return base+12;
    if (fieldName[0]=='s' && strcmp(fieldName, "sepChunks")==0) return base+13;
    if (fieldName[0]=='h' && strcmp(fieldName, "hmacTypes")==0) return base+14;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPInitAckChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "uint32",
        "uint16",
        "uint16",
        "uint32",
        "bool",
        "IPvXAddress",
        "char",
        "uint8",
        "cPacketPtr",
        "uint32",
        "uint8",
        "uint16",
        "uint16",
        "uint16",
    };
    return (field>=0 && field<15) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPInitAckChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPInitAckChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInitAckChunk *pp = (SCTPInitAckChunk *)object; (void)pp;
    switch (field) {
        case 6: return pp->getAddressesArraySize();
        case 7: return pp->getCookieArraySize();
        case 8: return pp->getUnrecognizedParametersArraySize();
        case 11: return pp->getRandomArraySize();
        case 12: return pp->getChunkTypesArraySize();
        case 13: return pp->getSepChunksArraySize();
        case 14: return pp->getHmacTypesArraySize();
        default: return 0;
    }
}

std::string SCTPInitAckChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInitAckChunk *pp = (SCTPInitAckChunk *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getInitTag());
        case 1: return ulong2string(pp->getA_rwnd());
        case 2: return ulong2string(pp->getNoOutStreams());
        case 3: return ulong2string(pp->getNoInStreams());
        case 4: return ulong2string(pp->getInitTSN());
        case 5: return bool2string(pp->getForwardTsn());
        case 6: {std::stringstream out; out << pp->getAddresses(i); return out.str();}
        case 7: return long2string(pp->getCookie(i));
        case 8: return ulong2string(pp->getUnrecognizedParameters(i));
        case 9: {std::stringstream out; out << pp->getStateCookie(); return out.str();}
        case 10: return ulong2string(pp->getMsg_rwnd());
        case 11: return ulong2string(pp->getRandom(i));
        case 12: return ulong2string(pp->getChunkTypes(i));
        case 13: return ulong2string(pp->getSepChunks(i));
        case 14: return ulong2string(pp->getHmacTypes(i));
        default: return "";
    }
}

bool SCTPInitAckChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInitAckChunk *pp = (SCTPInitAckChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setInitTag(string2ulong(value)); return true;
        case 1: pp->setA_rwnd(string2ulong(value)); return true;
        case 2: pp->setNoOutStreams(string2ulong(value)); return true;
        case 3: pp->setNoInStreams(string2ulong(value)); return true;
        case 4: pp->setInitTSN(string2ulong(value)); return true;
        case 5: pp->setForwardTsn(string2bool(value)); return true;
        case 7: pp->setCookie(i,string2long(value)); return true;
        case 8: pp->setUnrecognizedParameters(i,string2ulong(value)); return true;
        case 10: pp->setMsg_rwnd(string2ulong(value)); return true;
        case 11: pp->setRandom(i,string2ulong(value)); return true;
        case 12: pp->setChunkTypes(i,string2ulong(value)); return true;
        case 13: pp->setSepChunks(i,string2ulong(value)); return true;
        case 14: pp->setHmacTypes(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPInitAckChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 6: return opp_typename(typeid(IPvXAddress));
        case 9: return opp_typename(typeid(cPacketPtr));
        default: return NULL;
    };
}

void *SCTPInitAckChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPInitAckChunk *pp = (SCTPInitAckChunk *)object; (void)pp;
    switch (field) {
        case 6: return (void *)(&pp->getAddresses(i)); break;
        case 9: return (void *)(&pp->getStateCookie()); break;
        default: return NULL;
    }
}

Register_Class(SCTPCookieEchoChunk);

SCTPCookieEchoChunk::SCTPCookieEchoChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    cookie_arraysize = 0;
    this->cookie_var = 0;
    unrecognizedParameters_arraysize = 0;
    this->unrecognizedParameters_var = 0;
}

SCTPCookieEchoChunk::SCTPCookieEchoChunk(const SCTPCookieEchoChunk& other) : ::SCTPChunk(other)
{
    cookie_arraysize = 0;
    this->cookie_var = 0;
    unrecognizedParameters_arraysize = 0;
    this->unrecognizedParameters_var = 0;
    copy(other);
}

SCTPCookieEchoChunk::~SCTPCookieEchoChunk()
{
    delete [] cookie_var;
    delete [] unrecognizedParameters_var;
}

SCTPCookieEchoChunk& SCTPCookieEchoChunk::operator=(const SCTPCookieEchoChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPCookieEchoChunk::copy(const SCTPCookieEchoChunk& other)
{
    delete [] this->cookie_var;
    this->cookie_var = (other.cookie_arraysize==0) ? NULL : new char[other.cookie_arraysize];
    cookie_arraysize = other.cookie_arraysize;
    for (unsigned int i=0; i<cookie_arraysize; i++)
        this->cookie_var[i] = other.cookie_var[i];
    this->stateCookie_var = other.stateCookie_var;
    delete [] this->unrecognizedParameters_var;
    this->unrecognizedParameters_var = (other.unrecognizedParameters_arraysize==0) ? NULL : new uint8[other.unrecognizedParameters_arraysize];
    unrecognizedParameters_arraysize = other.unrecognizedParameters_arraysize;
    for (unsigned int i=0; i<unrecognizedParameters_arraysize; i++)
        this->unrecognizedParameters_var[i] = other.unrecognizedParameters_var[i];
}

void SCTPCookieEchoChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    b->pack(cookie_arraysize);
    doPacking(b,this->cookie_var,cookie_arraysize);
    doPacking(b,this->stateCookie_var);
    b->pack(unrecognizedParameters_arraysize);
    doPacking(b,this->unrecognizedParameters_var,unrecognizedParameters_arraysize);
}

void SCTPCookieEchoChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    delete [] this->cookie_var;
    b->unpack(cookie_arraysize);
    if (cookie_arraysize==0) {
        this->cookie_var = 0;
    } else {
        this->cookie_var = new char[cookie_arraysize];
        doUnpacking(b,this->cookie_var,cookie_arraysize);
    }
    doUnpacking(b,this->stateCookie_var);
    delete [] this->unrecognizedParameters_var;
    b->unpack(unrecognizedParameters_arraysize);
    if (unrecognizedParameters_arraysize==0) {
        this->unrecognizedParameters_var = 0;
    } else {
        this->unrecognizedParameters_var = new uint8[unrecognizedParameters_arraysize];
        doUnpacking(b,this->unrecognizedParameters_var,unrecognizedParameters_arraysize);
    }
}

void SCTPCookieEchoChunk::setCookieArraySize(unsigned int size)
{
    char *cookie_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = cookie_arraysize < size ? cookie_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        cookie_var2[i] = this->cookie_var[i];
    for (unsigned int i=sz; i<size; i++)
        cookie_var2[i] = 0;
    cookie_arraysize = size;
    delete [] this->cookie_var;
    this->cookie_var = cookie_var2;
}

unsigned int SCTPCookieEchoChunk::getCookieArraySize() const
{
    return cookie_arraysize;
}

char SCTPCookieEchoChunk::getCookie(unsigned int k) const
{
    if (k>=cookie_arraysize) throw cRuntimeError("Array of size %d indexed by %d", cookie_arraysize, k);
    return cookie_var[k];
}

void SCTPCookieEchoChunk::setCookie(unsigned int k, char cookie)
{
    if (k>=cookie_arraysize) throw cRuntimeError("Array of size %d indexed by %d", cookie_arraysize, k);
    this->cookie_var[k] = cookie;
}

cPacketPtr& SCTPCookieEchoChunk::getStateCookie()
{
    return stateCookie_var;
}

void SCTPCookieEchoChunk::setStateCookie(const cPacketPtr& stateCookie)
{
    this->stateCookie_var = stateCookie;
}

void SCTPCookieEchoChunk::setUnrecognizedParametersArraySize(unsigned int size)
{
    uint8 *unrecognizedParameters_var2 = (size==0) ? NULL : new uint8[size];
    unsigned int sz = unrecognizedParameters_arraysize < size ? unrecognizedParameters_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        unrecognizedParameters_var2[i] = this->unrecognizedParameters_var[i];
    for (unsigned int i=sz; i<size; i++)
        unrecognizedParameters_var2[i] = 0;
    unrecognizedParameters_arraysize = size;
    delete [] this->unrecognizedParameters_var;
    this->unrecognizedParameters_var = unrecognizedParameters_var2;
}

unsigned int SCTPCookieEchoChunk::getUnrecognizedParametersArraySize() const
{
    return unrecognizedParameters_arraysize;
}

uint8 SCTPCookieEchoChunk::getUnrecognizedParameters(unsigned int k) const
{
    if (k>=unrecognizedParameters_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unrecognizedParameters_arraysize, k);
    return unrecognizedParameters_var[k];
}

void SCTPCookieEchoChunk::setUnrecognizedParameters(unsigned int k, uint8 unrecognizedParameters)
{
    if (k>=unrecognizedParameters_arraysize) throw cRuntimeError("Array of size %d indexed by %d", unrecognizedParameters_arraysize, k);
    this->unrecognizedParameters_var[k] = unrecognizedParameters;
}

class SCTPCookieEchoChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPCookieEchoChunkDescriptor();
    virtual ~SCTPCookieEchoChunkDescriptor();

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

Register_ClassDescriptor(SCTPCookieEchoChunkDescriptor);

SCTPCookieEchoChunkDescriptor::SCTPCookieEchoChunkDescriptor() : cClassDescriptor("SCTPCookieEchoChunk", "SCTPChunk")
{
}

SCTPCookieEchoChunkDescriptor::~SCTPCookieEchoChunkDescriptor()
{
}

bool SCTPCookieEchoChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPCookieEchoChunk *>(obj)!=NULL;
}

const char *SCTPCookieEchoChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPCookieEchoChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SCTPCookieEchoChunkDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *SCTPCookieEchoChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "cookie",
        "stateCookie",
        "unrecognizedParameters",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int SCTPCookieEchoChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "cookie")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "stateCookie")==0) return base+1;
    if (fieldName[0]=='u' && strcmp(fieldName, "unrecognizedParameters")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPCookieEchoChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "char",
        "cPacketPtr",
        "uint8",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPCookieEchoChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPCookieEchoChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookieEchoChunk *pp = (SCTPCookieEchoChunk *)object; (void)pp;
    switch (field) {
        case 0: return pp->getCookieArraySize();
        case 2: return pp->getUnrecognizedParametersArraySize();
        default: return 0;
    }
}

std::string SCTPCookieEchoChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookieEchoChunk *pp = (SCTPCookieEchoChunk *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCookie(i));
        case 1: {std::stringstream out; out << pp->getStateCookie(); return out.str();}
        case 2: return ulong2string(pp->getUnrecognizedParameters(i));
        default: return "";
    }
}

bool SCTPCookieEchoChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookieEchoChunk *pp = (SCTPCookieEchoChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setCookie(i,string2long(value)); return true;
        case 2: pp->setUnrecognizedParameters(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPCookieEchoChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(cPacketPtr));
        default: return NULL;
    };
}

void *SCTPCookieEchoChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookieEchoChunk *pp = (SCTPCookieEchoChunk *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getStateCookie()); break;
        default: return NULL;
    }
}

Register_Class(SCTPCookie);

SCTPCookie::SCTPCookie(const char *name, int kind) : ::cPacket(name,kind)
{
    this->creationTime_var = 0;
    this->localTag_var = 0;
    this->peerTag_var = 0;
    localTieTag_arraysize = 0;
    this->localTieTag_var = 0;
    peerTieTag_arraysize = 0;
    this->peerTieTag_var = 0;
}

SCTPCookie::SCTPCookie(const SCTPCookie& other) : ::cPacket(other)
{
    localTieTag_arraysize = 0;
    this->localTieTag_var = 0;
    peerTieTag_arraysize = 0;
    this->peerTieTag_var = 0;
    copy(other);
}

SCTPCookie::~SCTPCookie()
{
    delete [] localTieTag_var;
    delete [] peerTieTag_var;
}

SCTPCookie& SCTPCookie::operator=(const SCTPCookie& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SCTPCookie::copy(const SCTPCookie& other)
{
    this->creationTime_var = other.creationTime_var;
    this->localTag_var = other.localTag_var;
    this->peerTag_var = other.peerTag_var;
    delete [] this->localTieTag_var;
    this->localTieTag_var = (other.localTieTag_arraysize==0) ? NULL : new uint8[other.localTieTag_arraysize];
    localTieTag_arraysize = other.localTieTag_arraysize;
    for (unsigned int i=0; i<localTieTag_arraysize; i++)
        this->localTieTag_var[i] = other.localTieTag_var[i];
    delete [] this->peerTieTag_var;
    this->peerTieTag_var = (other.peerTieTag_arraysize==0) ? NULL : new uint8[other.peerTieTag_arraysize];
    peerTieTag_arraysize = other.peerTieTag_arraysize;
    for (unsigned int i=0; i<peerTieTag_arraysize; i++)
        this->peerTieTag_var[i] = other.peerTieTag_var[i];
}

void SCTPCookie::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->creationTime_var);
    doPacking(b,this->localTag_var);
    doPacking(b,this->peerTag_var);
    b->pack(localTieTag_arraysize);
    doPacking(b,this->localTieTag_var,localTieTag_arraysize);
    b->pack(peerTieTag_arraysize);
    doPacking(b,this->peerTieTag_var,peerTieTag_arraysize);
}

void SCTPCookie::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->creationTime_var);
    doUnpacking(b,this->localTag_var);
    doUnpacking(b,this->peerTag_var);
    delete [] this->localTieTag_var;
    b->unpack(localTieTag_arraysize);
    if (localTieTag_arraysize==0) {
        this->localTieTag_var = 0;
    } else {
        this->localTieTag_var = new uint8[localTieTag_arraysize];
        doUnpacking(b,this->localTieTag_var,localTieTag_arraysize);
    }
    delete [] this->peerTieTag_var;
    b->unpack(peerTieTag_arraysize);
    if (peerTieTag_arraysize==0) {
        this->peerTieTag_var = 0;
    } else {
        this->peerTieTag_var = new uint8[peerTieTag_arraysize];
        doUnpacking(b,this->peerTieTag_var,peerTieTag_arraysize);
    }
}

simtime_t SCTPCookie::getCreationTime() const
{
    return creationTime_var;
}

void SCTPCookie::setCreationTime(simtime_t creationTime)
{
    this->creationTime_var = creationTime;
}

uint32 SCTPCookie::getLocalTag() const
{
    return localTag_var;
}

void SCTPCookie::setLocalTag(uint32 localTag)
{
    this->localTag_var = localTag;
}

uint32 SCTPCookie::getPeerTag() const
{
    return peerTag_var;
}

void SCTPCookie::setPeerTag(uint32 peerTag)
{
    this->peerTag_var = peerTag;
}

void SCTPCookie::setLocalTieTagArraySize(unsigned int size)
{
    uint8 *localTieTag_var2 = (size==0) ? NULL : new uint8[size];
    unsigned int sz = localTieTag_arraysize < size ? localTieTag_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        localTieTag_var2[i] = this->localTieTag_var[i];
    for (unsigned int i=sz; i<size; i++)
        localTieTag_var2[i] = 0;
    localTieTag_arraysize = size;
    delete [] this->localTieTag_var;
    this->localTieTag_var = localTieTag_var2;
}

unsigned int SCTPCookie::getLocalTieTagArraySize() const
{
    return localTieTag_arraysize;
}

uint8 SCTPCookie::getLocalTieTag(unsigned int k) const
{
    if (k>=localTieTag_arraysize) throw cRuntimeError("Array of size %d indexed by %d", localTieTag_arraysize, k);
    return localTieTag_var[k];
}

void SCTPCookie::setLocalTieTag(unsigned int k, uint8 localTieTag)
{
    if (k>=localTieTag_arraysize) throw cRuntimeError("Array of size %d indexed by %d", localTieTag_arraysize, k);
    this->localTieTag_var[k] = localTieTag;
}

void SCTPCookie::setPeerTieTagArraySize(unsigned int size)
{
    uint8 *peerTieTag_var2 = (size==0) ? NULL : new uint8[size];
    unsigned int sz = peerTieTag_arraysize < size ? peerTieTag_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        peerTieTag_var2[i] = this->peerTieTag_var[i];
    for (unsigned int i=sz; i<size; i++)
        peerTieTag_var2[i] = 0;
    peerTieTag_arraysize = size;
    delete [] this->peerTieTag_var;
    this->peerTieTag_var = peerTieTag_var2;
}

unsigned int SCTPCookie::getPeerTieTagArraySize() const
{
    return peerTieTag_arraysize;
}

uint8 SCTPCookie::getPeerTieTag(unsigned int k) const
{
    if (k>=peerTieTag_arraysize) throw cRuntimeError("Array of size %d indexed by %d", peerTieTag_arraysize, k);
    return peerTieTag_var[k];
}

void SCTPCookie::setPeerTieTag(unsigned int k, uint8 peerTieTag)
{
    if (k>=peerTieTag_arraysize) throw cRuntimeError("Array of size %d indexed by %d", peerTieTag_arraysize, k);
    this->peerTieTag_var[k] = peerTieTag;
}

class SCTPCookieDescriptor : public cClassDescriptor
{
  public:
    SCTPCookieDescriptor();
    virtual ~SCTPCookieDescriptor();

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

Register_ClassDescriptor(SCTPCookieDescriptor);

SCTPCookieDescriptor::SCTPCookieDescriptor() : cClassDescriptor("SCTPCookie", "cPacket")
{
}

SCTPCookieDescriptor::~SCTPCookieDescriptor()
{
}

bool SCTPCookieDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPCookie *>(obj)!=NULL;
}

const char *SCTPCookieDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPCookieDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int SCTPCookieDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *SCTPCookieDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "creationTime",
        "localTag",
        "peerTag",
        "localTieTag",
        "peerTieTag",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int SCTPCookieDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "creationTime")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "localTag")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "peerTag")==0) return base+2;
    if (fieldName[0]=='l' && strcmp(fieldName, "localTieTag")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "peerTieTag")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPCookieDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "simtime_t",
        "uint32",
        "uint32",
        "uint8",
        "uint8",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPCookieDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPCookieDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookie *pp = (SCTPCookie *)object; (void)pp;
    switch (field) {
        case 3: return pp->getLocalTieTagArraySize();
        case 4: return pp->getPeerTieTagArraySize();
        default: return 0;
    }
}

std::string SCTPCookieDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookie *pp = (SCTPCookie *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getCreationTime());
        case 1: return ulong2string(pp->getLocalTag());
        case 2: return ulong2string(pp->getPeerTag());
        case 3: return ulong2string(pp->getLocalTieTag(i));
        case 4: return ulong2string(pp->getPeerTieTag(i));
        default: return "";
    }
}

bool SCTPCookieDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookie *pp = (SCTPCookie *)object; (void)pp;
    switch (field) {
        case 0: pp->setCreationTime(string2double(value)); return true;
        case 1: pp->setLocalTag(string2ulong(value)); return true;
        case 2: pp->setPeerTag(string2ulong(value)); return true;
        case 3: pp->setLocalTieTag(i,string2ulong(value)); return true;
        case 4: pp->setPeerTieTag(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPCookieDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPCookieDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookie *pp = (SCTPCookie *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPCookieAckChunk);

SCTPCookieAckChunk::SCTPCookieAckChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
}

SCTPCookieAckChunk::SCTPCookieAckChunk(const SCTPCookieAckChunk& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPCookieAckChunk::~SCTPCookieAckChunk()
{
}

SCTPCookieAckChunk& SCTPCookieAckChunk::operator=(const SCTPCookieAckChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPCookieAckChunk::copy(const SCTPCookieAckChunk& other)
{
}

void SCTPCookieAckChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
}

void SCTPCookieAckChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
}

class SCTPCookieAckChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPCookieAckChunkDescriptor();
    virtual ~SCTPCookieAckChunkDescriptor();

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

Register_ClassDescriptor(SCTPCookieAckChunkDescriptor);

SCTPCookieAckChunkDescriptor::SCTPCookieAckChunkDescriptor() : cClassDescriptor("SCTPCookieAckChunk", "SCTPChunk")
{
}

SCTPCookieAckChunkDescriptor::~SCTPCookieAckChunkDescriptor()
{
}

bool SCTPCookieAckChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPCookieAckChunk *>(obj)!=NULL;
}

const char *SCTPCookieAckChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPCookieAckChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int SCTPCookieAckChunkDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *SCTPCookieAckChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int SCTPCookieAckChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPCookieAckChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *SCTPCookieAckChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPCookieAckChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookieAckChunk *pp = (SCTPCookieAckChunk *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPCookieAckChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookieAckChunk *pp = (SCTPCookieAckChunk *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool SCTPCookieAckChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookieAckChunk *pp = (SCTPCookieAckChunk *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SCTPCookieAckChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *SCTPCookieAckChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPCookieAckChunk *pp = (SCTPCookieAckChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPDataMsg);

SCTPDataMsg::SCTPDataMsg(const char *name, int kind) : ::cPacket(name,kind)
{
    this->eBit_var = 0;
    this->bBit_var = 0;
    this->enqueuingTime_var = 0;
    this->expiryTime_var = 0;
    this->ppid_var = 0;
    this->msgNum_var = 0;
    this->sid_var = 0;
    this->ordered_var = 0;
    this->booksize_var = 0;
    this->rtx_var = 0;
    this->fragment_var = 0;
    this->prMethod_var = 0;
    this->priority_var = 0;
    this->strReset_var = 0;
    this->sackNow_var = 0;
}

SCTPDataMsg::SCTPDataMsg(const SCTPDataMsg& other) : ::cPacket(other)
{
    copy(other);
}

SCTPDataMsg::~SCTPDataMsg()
{
}

SCTPDataMsg& SCTPDataMsg::operator=(const SCTPDataMsg& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SCTPDataMsg::copy(const SCTPDataMsg& other)
{
    this->eBit_var = other.eBit_var;
    this->bBit_var = other.bBit_var;
    this->enqueuingTime_var = other.enqueuingTime_var;
    this->expiryTime_var = other.expiryTime_var;
    this->ppid_var = other.ppid_var;
    this->initialDestination_var = other.initialDestination_var;
    this->msgNum_var = other.msgNum_var;
    this->sid_var = other.sid_var;
    this->ordered_var = other.ordered_var;
    this->booksize_var = other.booksize_var;
    this->rtx_var = other.rtx_var;
    this->fragment_var = other.fragment_var;
    this->prMethod_var = other.prMethod_var;
    this->priority_var = other.priority_var;
    this->strReset_var = other.strReset_var;
    this->sackNow_var = other.sackNow_var;
}

void SCTPDataMsg::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->eBit_var);
    doPacking(b,this->bBit_var);
    doPacking(b,this->enqueuingTime_var);
    doPacking(b,this->expiryTime_var);
    doPacking(b,this->ppid_var);
    doPacking(b,this->initialDestination_var);
    doPacking(b,this->msgNum_var);
    doPacking(b,this->sid_var);
    doPacking(b,this->ordered_var);
    doPacking(b,this->booksize_var);
    doPacking(b,this->rtx_var);
    doPacking(b,this->fragment_var);
    doPacking(b,this->prMethod_var);
    doPacking(b,this->priority_var);
    doPacking(b,this->strReset_var);
    doPacking(b,this->sackNow_var);
}

void SCTPDataMsg::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->eBit_var);
    doUnpacking(b,this->bBit_var);
    doUnpacking(b,this->enqueuingTime_var);
    doUnpacking(b,this->expiryTime_var);
    doUnpacking(b,this->ppid_var);
    doUnpacking(b,this->initialDestination_var);
    doUnpacking(b,this->msgNum_var);
    doUnpacking(b,this->sid_var);
    doUnpacking(b,this->ordered_var);
    doUnpacking(b,this->booksize_var);
    doUnpacking(b,this->rtx_var);
    doUnpacking(b,this->fragment_var);
    doUnpacking(b,this->prMethod_var);
    doUnpacking(b,this->priority_var);
    doUnpacking(b,this->strReset_var);
    doUnpacking(b,this->sackNow_var);
}

bool SCTPDataMsg::getEBit() const
{
    return eBit_var;
}

void SCTPDataMsg::setEBit(bool eBit)
{
    this->eBit_var = eBit;
}

bool SCTPDataMsg::getBBit() const
{
    return bBit_var;
}

void SCTPDataMsg::setBBit(bool bBit)
{
    this->bBit_var = bBit;
}

simtime_t SCTPDataMsg::getEnqueuingTime() const
{
    return enqueuingTime_var;
}

void SCTPDataMsg::setEnqueuingTime(simtime_t enqueuingTime)
{
    this->enqueuingTime_var = enqueuingTime;
}

simtime_t SCTPDataMsg::getExpiryTime() const
{
    return expiryTime_var;
}

void SCTPDataMsg::setExpiryTime(simtime_t expiryTime)
{
    this->expiryTime_var = expiryTime;
}

uint32 SCTPDataMsg::getPpid() const
{
    return ppid_var;
}

void SCTPDataMsg::setPpid(uint32 ppid)
{
    this->ppid_var = ppid;
}

IPvXAddress& SCTPDataMsg::getInitialDestination()
{
    return initialDestination_var;
}

void SCTPDataMsg::setInitialDestination(const IPvXAddress& initialDestination)
{
    this->initialDestination_var = initialDestination;
}

uint32 SCTPDataMsg::getMsgNum() const
{
    return msgNum_var;
}

void SCTPDataMsg::setMsgNum(uint32 msgNum)
{
    this->msgNum_var = msgNum;
}

uint16 SCTPDataMsg::getSid() const
{
    return sid_var;
}

void SCTPDataMsg::setSid(uint16 sid)
{
    this->sid_var = sid;
}

bool SCTPDataMsg::getOrdered() const
{
    return ordered_var;
}

void SCTPDataMsg::setOrdered(bool ordered)
{
    this->ordered_var = ordered;
}

uint32 SCTPDataMsg::getBooksize() const
{
    return booksize_var;
}

void SCTPDataMsg::setBooksize(uint32 booksize)
{
    this->booksize_var = booksize;
}

uint32 SCTPDataMsg::getRtx() const
{
    return rtx_var;
}

void SCTPDataMsg::setRtx(uint32 rtx)
{
    this->rtx_var = rtx;
}

bool SCTPDataMsg::getFragment() const
{
    return fragment_var;
}

void SCTPDataMsg::setFragment(bool fragment)
{
    this->fragment_var = fragment;
}

uint32 SCTPDataMsg::getPrMethod() const
{
    return prMethod_var;
}

void SCTPDataMsg::setPrMethod(uint32 prMethod)
{
    this->prMethod_var = prMethod;
}

uint32 SCTPDataMsg::getPriority() const
{
    return priority_var;
}

void SCTPDataMsg::setPriority(uint32 priority)
{
    this->priority_var = priority;
}

bool SCTPDataMsg::getStrReset() const
{
    return strReset_var;
}

void SCTPDataMsg::setStrReset(bool strReset)
{
    this->strReset_var = strReset;
}

bool SCTPDataMsg::getSackNow() const
{
    return sackNow_var;
}

void SCTPDataMsg::setSackNow(bool sackNow)
{
    this->sackNow_var = sackNow;
}

class SCTPDataMsgDescriptor : public cClassDescriptor
{
  public:
    SCTPDataMsgDescriptor();
    virtual ~SCTPDataMsgDescriptor();

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

Register_ClassDescriptor(SCTPDataMsgDescriptor);

SCTPDataMsgDescriptor::SCTPDataMsgDescriptor() : cClassDescriptor("SCTPDataMsg", "cPacket")
{
}

SCTPDataMsgDescriptor::~SCTPDataMsgDescriptor()
{
}

bool SCTPDataMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPDataMsg *>(obj)!=NULL;
}

const char *SCTPDataMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPDataMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 16+basedesc->getFieldCount(object) : 16;
}

unsigned int SCTPDataMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<16) ? fieldTypeFlags[field] : 0;
}

const char *SCTPDataMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "eBit",
        "bBit",
        "enqueuingTime",
        "expiryTime",
        "ppid",
        "initialDestination",
        "msgNum",
        "sid",
        "ordered",
        "booksize",
        "rtx",
        "fragment",
        "prMethod",
        "priority",
        "strReset",
        "sackNow",
    };
    return (field>=0 && field<16) ? fieldNames[field] : NULL;
}

int SCTPDataMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "eBit")==0) return base+0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bBit")==0) return base+1;
    if (fieldName[0]=='e' && strcmp(fieldName, "enqueuingTime")==0) return base+2;
    if (fieldName[0]=='e' && strcmp(fieldName, "expiryTime")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "ppid")==0) return base+4;
    if (fieldName[0]=='i' && strcmp(fieldName, "initialDestination")==0) return base+5;
    if (fieldName[0]=='m' && strcmp(fieldName, "msgNum")==0) return base+6;
    if (fieldName[0]=='s' && strcmp(fieldName, "sid")==0) return base+7;
    if (fieldName[0]=='o' && strcmp(fieldName, "ordered")==0) return base+8;
    if (fieldName[0]=='b' && strcmp(fieldName, "booksize")==0) return base+9;
    if (fieldName[0]=='r' && strcmp(fieldName, "rtx")==0) return base+10;
    if (fieldName[0]=='f' && strcmp(fieldName, "fragment")==0) return base+11;
    if (fieldName[0]=='p' && strcmp(fieldName, "prMethod")==0) return base+12;
    if (fieldName[0]=='p' && strcmp(fieldName, "priority")==0) return base+13;
    if (fieldName[0]=='s' && strcmp(fieldName, "strReset")==0) return base+14;
    if (fieldName[0]=='s' && strcmp(fieldName, "sackNow")==0) return base+15;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPDataMsgDescriptor::getFieldTypeString(void *object, int field) const
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
        "simtime_t",
        "simtime_t",
        "uint32",
        "IPvXAddress",
        "uint32",
        "uint16",
        "bool",
        "uint32",
        "uint32",
        "bool",
        "uint32",
        "uint32",
        "bool",
        "bool",
    };
    return (field>=0 && field<16) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPDataMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPDataMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDataMsg *pp = (SCTPDataMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPDataMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDataMsg *pp = (SCTPDataMsg *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getEBit());
        case 1: return bool2string(pp->getBBit());
        case 2: return double2string(pp->getEnqueuingTime());
        case 3: return double2string(pp->getExpiryTime());
        case 4: return ulong2string(pp->getPpid());
        case 5: {std::stringstream out; out << pp->getInitialDestination(); return out.str();}
        case 6: return ulong2string(pp->getMsgNum());
        case 7: return ulong2string(pp->getSid());
        case 8: return bool2string(pp->getOrdered());
        case 9: return ulong2string(pp->getBooksize());
        case 10: return ulong2string(pp->getRtx());
        case 11: return bool2string(pp->getFragment());
        case 12: return ulong2string(pp->getPrMethod());
        case 13: return ulong2string(pp->getPriority());
        case 14: return bool2string(pp->getStrReset());
        case 15: return bool2string(pp->getSackNow());
        default: return "";
    }
}

bool SCTPDataMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDataMsg *pp = (SCTPDataMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setEBit(string2bool(value)); return true;
        case 1: pp->setBBit(string2bool(value)); return true;
        case 2: pp->setEnqueuingTime(string2double(value)); return true;
        case 3: pp->setExpiryTime(string2double(value)); return true;
        case 4: pp->setPpid(string2ulong(value)); return true;
        case 6: pp->setMsgNum(string2ulong(value)); return true;
        case 7: pp->setSid(string2ulong(value)); return true;
        case 8: pp->setOrdered(string2bool(value)); return true;
        case 9: pp->setBooksize(string2ulong(value)); return true;
        case 10: pp->setRtx(string2ulong(value)); return true;
        case 11: pp->setFragment(string2bool(value)); return true;
        case 12: pp->setPrMethod(string2ulong(value)); return true;
        case 13: pp->setPriority(string2ulong(value)); return true;
        case 14: pp->setStrReset(string2bool(value)); return true;
        case 15: pp->setSackNow(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPDataMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *SCTPDataMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDataMsg *pp = (SCTPDataMsg *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getInitialDestination()); break;
        default: return NULL;
    }
}

Register_Class(SCTPDataChunk);

SCTPDataChunk::SCTPDataChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->eBit_var = 0;
    this->bBit_var = 0;
    this->uBit_var = 0;
    this->iBit_var = 0;
    this->tsn_var = 0;
    this->sid_var = 0;
    this->ssn_var = 0;
    this->ppid_var = 0;
    this->enqueuingTime_var = 0;
    this->firstSendTime_var = 0;
}

SCTPDataChunk::SCTPDataChunk(const SCTPDataChunk& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPDataChunk::~SCTPDataChunk()
{
}

SCTPDataChunk& SCTPDataChunk::operator=(const SCTPDataChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPDataChunk::copy(const SCTPDataChunk& other)
{
    this->eBit_var = other.eBit_var;
    this->bBit_var = other.bBit_var;
    this->uBit_var = other.uBit_var;
    this->iBit_var = other.iBit_var;
    this->tsn_var = other.tsn_var;
    this->sid_var = other.sid_var;
    this->ssn_var = other.ssn_var;
    this->ppid_var = other.ppid_var;
    this->enqueuingTime_var = other.enqueuingTime_var;
    this->firstSendTime_var = other.firstSendTime_var;
}

void SCTPDataChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->eBit_var);
    doPacking(b,this->bBit_var);
    doPacking(b,this->uBit_var);
    doPacking(b,this->iBit_var);
    doPacking(b,this->tsn_var);
    doPacking(b,this->sid_var);
    doPacking(b,this->ssn_var);
    doPacking(b,this->ppid_var);
    doPacking(b,this->enqueuingTime_var);
    doPacking(b,this->firstSendTime_var);
}

void SCTPDataChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->eBit_var);
    doUnpacking(b,this->bBit_var);
    doUnpacking(b,this->uBit_var);
    doUnpacking(b,this->iBit_var);
    doUnpacking(b,this->tsn_var);
    doUnpacking(b,this->sid_var);
    doUnpacking(b,this->ssn_var);
    doUnpacking(b,this->ppid_var);
    doUnpacking(b,this->enqueuingTime_var);
    doUnpacking(b,this->firstSendTime_var);
}

bool SCTPDataChunk::getEBit() const
{
    return eBit_var;
}

void SCTPDataChunk::setEBit(bool eBit)
{
    this->eBit_var = eBit;
}

bool SCTPDataChunk::getBBit() const
{
    return bBit_var;
}

void SCTPDataChunk::setBBit(bool bBit)
{
    this->bBit_var = bBit;
}

bool SCTPDataChunk::getUBit() const
{
    return uBit_var;
}

void SCTPDataChunk::setUBit(bool uBit)
{
    this->uBit_var = uBit;
}

bool SCTPDataChunk::getIBit() const
{
    return iBit_var;
}

void SCTPDataChunk::setIBit(bool iBit)
{
    this->iBit_var = iBit;
}

uint32 SCTPDataChunk::getTsn() const
{
    return tsn_var;
}

void SCTPDataChunk::setTsn(uint32 tsn)
{
    this->tsn_var = tsn;
}

uint16 SCTPDataChunk::getSid() const
{
    return sid_var;
}

void SCTPDataChunk::setSid(uint16 sid)
{
    this->sid_var = sid;
}

uint16 SCTPDataChunk::getSsn() const
{
    return ssn_var;
}

void SCTPDataChunk::setSsn(uint16 ssn)
{
    this->ssn_var = ssn;
}

uint32 SCTPDataChunk::getPpid() const
{
    return ppid_var;
}

void SCTPDataChunk::setPpid(uint32 ppid)
{
    this->ppid_var = ppid;
}

simtime_t SCTPDataChunk::getEnqueuingTime() const
{
    return enqueuingTime_var;
}

void SCTPDataChunk::setEnqueuingTime(simtime_t enqueuingTime)
{
    this->enqueuingTime_var = enqueuingTime;
}

simtime_t SCTPDataChunk::getFirstSendTime() const
{
    return firstSendTime_var;
}

void SCTPDataChunk::setFirstSendTime(simtime_t firstSendTime)
{
    this->firstSendTime_var = firstSendTime;
}

class SCTPDataChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPDataChunkDescriptor();
    virtual ~SCTPDataChunkDescriptor();

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

Register_ClassDescriptor(SCTPDataChunkDescriptor);

SCTPDataChunkDescriptor::SCTPDataChunkDescriptor() : cClassDescriptor("SCTPDataChunk", "SCTPChunk")
{
}

SCTPDataChunkDescriptor::~SCTPDataChunkDescriptor()
{
}

bool SCTPDataChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPDataChunk *>(obj)!=NULL;
}

const char *SCTPDataChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPDataChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 10+basedesc->getFieldCount(object) : 10;
}

unsigned int SCTPDataChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<10) ? fieldTypeFlags[field] : 0;
}

const char *SCTPDataChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "eBit",
        "bBit",
        "uBit",
        "iBit",
        "tsn",
        "sid",
        "ssn",
        "ppid",
        "enqueuingTime",
        "firstSendTime",
    };
    return (field>=0 && field<10) ? fieldNames[field] : NULL;
}

int SCTPDataChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "eBit")==0) return base+0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bBit")==0) return base+1;
    if (fieldName[0]=='u' && strcmp(fieldName, "uBit")==0) return base+2;
    if (fieldName[0]=='i' && strcmp(fieldName, "iBit")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "tsn")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "sid")==0) return base+5;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssn")==0) return base+6;
    if (fieldName[0]=='p' && strcmp(fieldName, "ppid")==0) return base+7;
    if (fieldName[0]=='e' && strcmp(fieldName, "enqueuingTime")==0) return base+8;
    if (fieldName[0]=='f' && strcmp(fieldName, "firstSendTime")==0) return base+9;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPDataChunkDescriptor::getFieldTypeString(void *object, int field) const
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
        "uint32",
        "uint16",
        "uint16",
        "uint32",
        "simtime_t",
        "simtime_t",
    };
    return (field>=0 && field<10) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPDataChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPDataChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDataChunk *pp = (SCTPDataChunk *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPDataChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDataChunk *pp = (SCTPDataChunk *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getEBit());
        case 1: return bool2string(pp->getBBit());
        case 2: return bool2string(pp->getUBit());
        case 3: return bool2string(pp->getIBit());
        case 4: return ulong2string(pp->getTsn());
        case 5: return ulong2string(pp->getSid());
        case 6: return ulong2string(pp->getSsn());
        case 7: return ulong2string(pp->getPpid());
        case 8: return double2string(pp->getEnqueuingTime());
        case 9: return double2string(pp->getFirstSendTime());
        default: return "";
    }
}

bool SCTPDataChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDataChunk *pp = (SCTPDataChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setEBit(string2bool(value)); return true;
        case 1: pp->setBBit(string2bool(value)); return true;
        case 2: pp->setUBit(string2bool(value)); return true;
        case 3: pp->setIBit(string2bool(value)); return true;
        case 4: pp->setTsn(string2ulong(value)); return true;
        case 5: pp->setSid(string2ulong(value)); return true;
        case 6: pp->setSsn(string2ulong(value)); return true;
        case 7: pp->setPpid(string2ulong(value)); return true;
        case 8: pp->setEnqueuingTime(string2double(value)); return true;
        case 9: pp->setFirstSendTime(string2double(value)); return true;
        default: return false;
    }
}

const char *SCTPDataChunkDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPDataChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDataChunk *pp = (SCTPDataChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPForwardTsnChunk);

SCTPForwardTsnChunk::SCTPForwardTsnChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->newCumTsn_var = 0;
    sid_arraysize = 0;
    this->sid_var = 0;
    ssn_arraysize = 0;
    this->ssn_var = 0;
}

SCTPForwardTsnChunk::SCTPForwardTsnChunk(const SCTPForwardTsnChunk& other) : ::SCTPChunk(other)
{
    sid_arraysize = 0;
    this->sid_var = 0;
    ssn_arraysize = 0;
    this->ssn_var = 0;
    copy(other);
}

SCTPForwardTsnChunk::~SCTPForwardTsnChunk()
{
    delete [] sid_var;
    delete [] ssn_var;
}

SCTPForwardTsnChunk& SCTPForwardTsnChunk::operator=(const SCTPForwardTsnChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPForwardTsnChunk::copy(const SCTPForwardTsnChunk& other)
{
    this->newCumTsn_var = other.newCumTsn_var;
    delete [] this->sid_var;
    this->sid_var = (other.sid_arraysize==0) ? NULL : new uint16[other.sid_arraysize];
    sid_arraysize = other.sid_arraysize;
    for (unsigned int i=0; i<sid_arraysize; i++)
        this->sid_var[i] = other.sid_var[i];
    delete [] this->ssn_var;
    this->ssn_var = (other.ssn_arraysize==0) ? NULL : new short[other.ssn_arraysize];
    ssn_arraysize = other.ssn_arraysize;
    for (unsigned int i=0; i<ssn_arraysize; i++)
        this->ssn_var[i] = other.ssn_var[i];
}

void SCTPForwardTsnChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->newCumTsn_var);
    b->pack(sid_arraysize);
    doPacking(b,this->sid_var,sid_arraysize);
    b->pack(ssn_arraysize);
    doPacking(b,this->ssn_var,ssn_arraysize);
}

void SCTPForwardTsnChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->newCumTsn_var);
    delete [] this->sid_var;
    b->unpack(sid_arraysize);
    if (sid_arraysize==0) {
        this->sid_var = 0;
    } else {
        this->sid_var = new uint16[sid_arraysize];
        doUnpacking(b,this->sid_var,sid_arraysize);
    }
    delete [] this->ssn_var;
    b->unpack(ssn_arraysize);
    if (ssn_arraysize==0) {
        this->ssn_var = 0;
    } else {
        this->ssn_var = new short[ssn_arraysize];
        doUnpacking(b,this->ssn_var,ssn_arraysize);
    }
}

uint32 SCTPForwardTsnChunk::getNewCumTsn() const
{
    return newCumTsn_var;
}

void SCTPForwardTsnChunk::setNewCumTsn(uint32 newCumTsn)
{
    this->newCumTsn_var = newCumTsn;
}

void SCTPForwardTsnChunk::setSidArraySize(unsigned int size)
{
    uint16 *sid_var2 = (size==0) ? NULL : new uint16[size];
    unsigned int sz = sid_arraysize < size ? sid_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        sid_var2[i] = this->sid_var[i];
    for (unsigned int i=sz; i<size; i++)
        sid_var2[i] = 0;
    sid_arraysize = size;
    delete [] this->sid_var;
    this->sid_var = sid_var2;
}

unsigned int SCTPForwardTsnChunk::getSidArraySize() const
{
    return sid_arraysize;
}

uint16 SCTPForwardTsnChunk::getSid(unsigned int k) const
{
    if (k>=sid_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sid_arraysize, k);
    return sid_var[k];
}

void SCTPForwardTsnChunk::setSid(unsigned int k, uint16 sid)
{
    if (k>=sid_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sid_arraysize, k);
    this->sid_var[k] = sid;
}

void SCTPForwardTsnChunk::setSsnArraySize(unsigned int size)
{
    short *ssn_var2 = (size==0) ? NULL : new short[size];
    unsigned int sz = ssn_arraysize < size ? ssn_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        ssn_var2[i] = this->ssn_var[i];
    for (unsigned int i=sz; i<size; i++)
        ssn_var2[i] = 0;
    ssn_arraysize = size;
    delete [] this->ssn_var;
    this->ssn_var = ssn_var2;
}

unsigned int SCTPForwardTsnChunk::getSsnArraySize() const
{
    return ssn_arraysize;
}

short SCTPForwardTsnChunk::getSsn(unsigned int k) const
{
    if (k>=ssn_arraysize) throw cRuntimeError("Array of size %d indexed by %d", ssn_arraysize, k);
    return ssn_var[k];
}

void SCTPForwardTsnChunk::setSsn(unsigned int k, short ssn)
{
    if (k>=ssn_arraysize) throw cRuntimeError("Array of size %d indexed by %d", ssn_arraysize, k);
    this->ssn_var[k] = ssn;
}

class SCTPForwardTsnChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPForwardTsnChunkDescriptor();
    virtual ~SCTPForwardTsnChunkDescriptor();

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

Register_ClassDescriptor(SCTPForwardTsnChunkDescriptor);

SCTPForwardTsnChunkDescriptor::SCTPForwardTsnChunkDescriptor() : cClassDescriptor("SCTPForwardTsnChunk", "SCTPChunk")
{
}

SCTPForwardTsnChunkDescriptor::~SCTPForwardTsnChunkDescriptor()
{
}

bool SCTPForwardTsnChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPForwardTsnChunk *>(obj)!=NULL;
}

const char *SCTPForwardTsnChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPForwardTsnChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SCTPForwardTsnChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *SCTPForwardTsnChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "newCumTsn",
        "sid",
        "ssn",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int SCTPForwardTsnChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "newCumTsn")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sid")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssn")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPForwardTsnChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "uint16",
        "short",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPForwardTsnChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPForwardTsnChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPForwardTsnChunk *pp = (SCTPForwardTsnChunk *)object; (void)pp;
    switch (field) {
        case 1: return pp->getSidArraySize();
        case 2: return pp->getSsnArraySize();
        default: return 0;
    }
}

std::string SCTPForwardTsnChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPForwardTsnChunk *pp = (SCTPForwardTsnChunk *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getNewCumTsn());
        case 1: return ulong2string(pp->getSid(i));
        case 2: return long2string(pp->getSsn(i));
        default: return "";
    }
}

bool SCTPForwardTsnChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPForwardTsnChunk *pp = (SCTPForwardTsnChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setNewCumTsn(string2ulong(value)); return true;
        case 1: pp->setSid(i,string2ulong(value)); return true;
        case 2: pp->setSsn(i,string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPForwardTsnChunkDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPForwardTsnChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPForwardTsnChunk *pp = (SCTPForwardTsnChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPSackChunk);

SCTPSackChunk::SCTPSackChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->cumTsnAck_var = 0;
    this->a_rwnd_var = 0;
    this->numGaps_var = 0;
    this->numNrGaps_var = 0;
    this->numDupTsns_var = 0;
    this->isNrSack_var = 0;
    gapStart_arraysize = 0;
    this->gapStart_var = 0;
    gapStop_arraysize = 0;
    this->gapStop_var = 0;
    dupTsns_arraysize = 0;
    this->dupTsns_var = 0;
    this->sackSeqNum_var = 0;
    nrGapStart_arraysize = 0;
    this->nrGapStart_var = 0;
    nrGapStop_arraysize = 0;
    this->nrGapStop_var = 0;
    this->msg_rwnd_var = 0;
    this->dacPacketsRcvd_var = 0;
    this->nrSubtractRGaps_var = false;
}

SCTPSackChunk::SCTPSackChunk(const SCTPSackChunk& other) : ::SCTPChunk(other)
{
    gapStart_arraysize = 0;
    this->gapStart_var = 0;
    gapStop_arraysize = 0;
    this->gapStop_var = 0;
    dupTsns_arraysize = 0;
    this->dupTsns_var = 0;
    nrGapStart_arraysize = 0;
    this->nrGapStart_var = 0;
    nrGapStop_arraysize = 0;
    this->nrGapStop_var = 0;
    copy(other);
}

SCTPSackChunk::~SCTPSackChunk()
{
    delete [] gapStart_var;
    delete [] gapStop_var;
    delete [] dupTsns_var;
    delete [] nrGapStart_var;
    delete [] nrGapStop_var;
}

SCTPSackChunk& SCTPSackChunk::operator=(const SCTPSackChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPSackChunk::copy(const SCTPSackChunk& other)
{
    this->cumTsnAck_var = other.cumTsnAck_var;
    this->a_rwnd_var = other.a_rwnd_var;
    this->numGaps_var = other.numGaps_var;
    this->numNrGaps_var = other.numNrGaps_var;
    this->numDupTsns_var = other.numDupTsns_var;
    this->isNrSack_var = other.isNrSack_var;
    delete [] this->gapStart_var;
    this->gapStart_var = (other.gapStart_arraysize==0) ? NULL : new uint32[other.gapStart_arraysize];
    gapStart_arraysize = other.gapStart_arraysize;
    for (unsigned int i=0; i<gapStart_arraysize; i++)
        this->gapStart_var[i] = other.gapStart_var[i];
    delete [] this->gapStop_var;
    this->gapStop_var = (other.gapStop_arraysize==0) ? NULL : new uint32[other.gapStop_arraysize];
    gapStop_arraysize = other.gapStop_arraysize;
    for (unsigned int i=0; i<gapStop_arraysize; i++)
        this->gapStop_var[i] = other.gapStop_var[i];
    delete [] this->dupTsns_var;
    this->dupTsns_var = (other.dupTsns_arraysize==0) ? NULL : new uint32[other.dupTsns_arraysize];
    dupTsns_arraysize = other.dupTsns_arraysize;
    for (unsigned int i=0; i<dupTsns_arraysize; i++)
        this->dupTsns_var[i] = other.dupTsns_var[i];
    this->sackSeqNum_var = other.sackSeqNum_var;
    delete [] this->nrGapStart_var;
    this->nrGapStart_var = (other.nrGapStart_arraysize==0) ? NULL : new uint32[other.nrGapStart_arraysize];
    nrGapStart_arraysize = other.nrGapStart_arraysize;
    for (unsigned int i=0; i<nrGapStart_arraysize; i++)
        this->nrGapStart_var[i] = other.nrGapStart_var[i];
    delete [] this->nrGapStop_var;
    this->nrGapStop_var = (other.nrGapStop_arraysize==0) ? NULL : new uint32[other.nrGapStop_arraysize];
    nrGapStop_arraysize = other.nrGapStop_arraysize;
    for (unsigned int i=0; i<nrGapStop_arraysize; i++)
        this->nrGapStop_var[i] = other.nrGapStop_var[i];
    this->msg_rwnd_var = other.msg_rwnd_var;
    this->dacPacketsRcvd_var = other.dacPacketsRcvd_var;
    this->nrSubtractRGaps_var = other.nrSubtractRGaps_var;
}

void SCTPSackChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->cumTsnAck_var);
    doPacking(b,this->a_rwnd_var);
    doPacking(b,this->numGaps_var);
    doPacking(b,this->numNrGaps_var);
    doPacking(b,this->numDupTsns_var);
    doPacking(b,this->isNrSack_var);
    b->pack(gapStart_arraysize);
    doPacking(b,this->gapStart_var,gapStart_arraysize);
    b->pack(gapStop_arraysize);
    doPacking(b,this->gapStop_var,gapStop_arraysize);
    b->pack(dupTsns_arraysize);
    doPacking(b,this->dupTsns_var,dupTsns_arraysize);
    doPacking(b,this->sackSeqNum_var);
    b->pack(nrGapStart_arraysize);
    doPacking(b,this->nrGapStart_var,nrGapStart_arraysize);
    b->pack(nrGapStop_arraysize);
    doPacking(b,this->nrGapStop_var,nrGapStop_arraysize);
    doPacking(b,this->msg_rwnd_var);
    doPacking(b,this->dacPacketsRcvd_var);
    doPacking(b,this->nrSubtractRGaps_var);
}

void SCTPSackChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->cumTsnAck_var);
    doUnpacking(b,this->a_rwnd_var);
    doUnpacking(b,this->numGaps_var);
    doUnpacking(b,this->numNrGaps_var);
    doUnpacking(b,this->numDupTsns_var);
    doUnpacking(b,this->isNrSack_var);
    delete [] this->gapStart_var;
    b->unpack(gapStart_arraysize);
    if (gapStart_arraysize==0) {
        this->gapStart_var = 0;
    } else {
        this->gapStart_var = new uint32[gapStart_arraysize];
        doUnpacking(b,this->gapStart_var,gapStart_arraysize);
    }
    delete [] this->gapStop_var;
    b->unpack(gapStop_arraysize);
    if (gapStop_arraysize==0) {
        this->gapStop_var = 0;
    } else {
        this->gapStop_var = new uint32[gapStop_arraysize];
        doUnpacking(b,this->gapStop_var,gapStop_arraysize);
    }
    delete [] this->dupTsns_var;
    b->unpack(dupTsns_arraysize);
    if (dupTsns_arraysize==0) {
        this->dupTsns_var = 0;
    } else {
        this->dupTsns_var = new uint32[dupTsns_arraysize];
        doUnpacking(b,this->dupTsns_var,dupTsns_arraysize);
    }
    doUnpacking(b,this->sackSeqNum_var);
    delete [] this->nrGapStart_var;
    b->unpack(nrGapStart_arraysize);
    if (nrGapStart_arraysize==0) {
        this->nrGapStart_var = 0;
    } else {
        this->nrGapStart_var = new uint32[nrGapStart_arraysize];
        doUnpacking(b,this->nrGapStart_var,nrGapStart_arraysize);
    }
    delete [] this->nrGapStop_var;
    b->unpack(nrGapStop_arraysize);
    if (nrGapStop_arraysize==0) {
        this->nrGapStop_var = 0;
    } else {
        this->nrGapStop_var = new uint32[nrGapStop_arraysize];
        doUnpacking(b,this->nrGapStop_var,nrGapStop_arraysize);
    }
    doUnpacking(b,this->msg_rwnd_var);
    doUnpacking(b,this->dacPacketsRcvd_var);
    doUnpacking(b,this->nrSubtractRGaps_var);
}

uint32 SCTPSackChunk::getCumTsnAck() const
{
    return cumTsnAck_var;
}

void SCTPSackChunk::setCumTsnAck(uint32 cumTsnAck)
{
    this->cumTsnAck_var = cumTsnAck;
}

uint32 SCTPSackChunk::getA_rwnd() const
{
    return a_rwnd_var;
}

void SCTPSackChunk::setA_rwnd(uint32 a_rwnd)
{
    this->a_rwnd_var = a_rwnd;
}

uint16 SCTPSackChunk::getNumGaps() const
{
    return numGaps_var;
}

void SCTPSackChunk::setNumGaps(uint16 numGaps)
{
    this->numGaps_var = numGaps;
}

uint16 SCTPSackChunk::getNumNrGaps() const
{
    return numNrGaps_var;
}

void SCTPSackChunk::setNumNrGaps(uint16 numNrGaps)
{
    this->numNrGaps_var = numNrGaps;
}

uint16 SCTPSackChunk::getNumDupTsns() const
{
    return numDupTsns_var;
}

void SCTPSackChunk::setNumDupTsns(uint16 numDupTsns)
{
    this->numDupTsns_var = numDupTsns;
}

bool SCTPSackChunk::getIsNrSack() const
{
    return isNrSack_var;
}

void SCTPSackChunk::setIsNrSack(bool isNrSack)
{
    this->isNrSack_var = isNrSack;
}

void SCTPSackChunk::setGapStartArraySize(unsigned int size)
{
    uint32 *gapStart_var2 = (size==0) ? NULL : new uint32[size];
    unsigned int sz = gapStart_arraysize < size ? gapStart_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        gapStart_var2[i] = this->gapStart_var[i];
    for (unsigned int i=sz; i<size; i++)
        gapStart_var2[i] = 0;
    gapStart_arraysize = size;
    delete [] this->gapStart_var;
    this->gapStart_var = gapStart_var2;
}

unsigned int SCTPSackChunk::getGapStartArraySize() const
{
    return gapStart_arraysize;
}

uint32 SCTPSackChunk::getGapStart(unsigned int k) const
{
    if (k>=gapStart_arraysize) throw cRuntimeError("Array of size %d indexed by %d", gapStart_arraysize, k);
    return gapStart_var[k];
}

void SCTPSackChunk::setGapStart(unsigned int k, uint32 gapStart)
{
    if (k>=gapStart_arraysize) throw cRuntimeError("Array of size %d indexed by %d", gapStart_arraysize, k);
    this->gapStart_var[k] = gapStart;
}

void SCTPSackChunk::setGapStopArraySize(unsigned int size)
{
    uint32 *gapStop_var2 = (size==0) ? NULL : new uint32[size];
    unsigned int sz = gapStop_arraysize < size ? gapStop_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        gapStop_var2[i] = this->gapStop_var[i];
    for (unsigned int i=sz; i<size; i++)
        gapStop_var2[i] = 0;
    gapStop_arraysize = size;
    delete [] this->gapStop_var;
    this->gapStop_var = gapStop_var2;
}

unsigned int SCTPSackChunk::getGapStopArraySize() const
{
    return gapStop_arraysize;
}

uint32 SCTPSackChunk::getGapStop(unsigned int k) const
{
    if (k>=gapStop_arraysize) throw cRuntimeError("Array of size %d indexed by %d", gapStop_arraysize, k);
    return gapStop_var[k];
}

void SCTPSackChunk::setGapStop(unsigned int k, uint32 gapStop)
{
    if (k>=gapStop_arraysize) throw cRuntimeError("Array of size %d indexed by %d", gapStop_arraysize, k);
    this->gapStop_var[k] = gapStop;
}

void SCTPSackChunk::setDupTsnsArraySize(unsigned int size)
{
    uint32 *dupTsns_var2 = (size==0) ? NULL : new uint32[size];
    unsigned int sz = dupTsns_arraysize < size ? dupTsns_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        dupTsns_var2[i] = this->dupTsns_var[i];
    for (unsigned int i=sz; i<size; i++)
        dupTsns_var2[i] = 0;
    dupTsns_arraysize = size;
    delete [] this->dupTsns_var;
    this->dupTsns_var = dupTsns_var2;
}

unsigned int SCTPSackChunk::getDupTsnsArraySize() const
{
    return dupTsns_arraysize;
}

uint32 SCTPSackChunk::getDupTsns(unsigned int k) const
{
    if (k>=dupTsns_arraysize) throw cRuntimeError("Array of size %d indexed by %d", dupTsns_arraysize, k);
    return dupTsns_var[k];
}

void SCTPSackChunk::setDupTsns(unsigned int k, uint32 dupTsns)
{
    if (k>=dupTsns_arraysize) throw cRuntimeError("Array of size %d indexed by %d", dupTsns_arraysize, k);
    this->dupTsns_var[k] = dupTsns;
}

uint32 SCTPSackChunk::getSackSeqNum() const
{
    return sackSeqNum_var;
}

void SCTPSackChunk::setSackSeqNum(uint32 sackSeqNum)
{
    this->sackSeqNum_var = sackSeqNum;
}

void SCTPSackChunk::setNrGapStartArraySize(unsigned int size)
{
    uint32 *nrGapStart_var2 = (size==0) ? NULL : new uint32[size];
    unsigned int sz = nrGapStart_arraysize < size ? nrGapStart_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        nrGapStart_var2[i] = this->nrGapStart_var[i];
    for (unsigned int i=sz; i<size; i++)
        nrGapStart_var2[i] = 0;
    nrGapStart_arraysize = size;
    delete [] this->nrGapStart_var;
    this->nrGapStart_var = nrGapStart_var2;
}

unsigned int SCTPSackChunk::getNrGapStartArraySize() const
{
    return nrGapStart_arraysize;
}

uint32 SCTPSackChunk::getNrGapStart(unsigned int k) const
{
    if (k>=nrGapStart_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nrGapStart_arraysize, k);
    return nrGapStart_var[k];
}

void SCTPSackChunk::setNrGapStart(unsigned int k, uint32 nrGapStart)
{
    if (k>=nrGapStart_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nrGapStart_arraysize, k);
    this->nrGapStart_var[k] = nrGapStart;
}

void SCTPSackChunk::setNrGapStopArraySize(unsigned int size)
{
    uint32 *nrGapStop_var2 = (size==0) ? NULL : new uint32[size];
    unsigned int sz = nrGapStop_arraysize < size ? nrGapStop_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        nrGapStop_var2[i] = this->nrGapStop_var[i];
    for (unsigned int i=sz; i<size; i++)
        nrGapStop_var2[i] = 0;
    nrGapStop_arraysize = size;
    delete [] this->nrGapStop_var;
    this->nrGapStop_var = nrGapStop_var2;
}

unsigned int SCTPSackChunk::getNrGapStopArraySize() const
{
    return nrGapStop_arraysize;
}

uint32 SCTPSackChunk::getNrGapStop(unsigned int k) const
{
    if (k>=nrGapStop_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nrGapStop_arraysize, k);
    return nrGapStop_var[k];
}

void SCTPSackChunk::setNrGapStop(unsigned int k, uint32 nrGapStop)
{
    if (k>=nrGapStop_arraysize) throw cRuntimeError("Array of size %d indexed by %d", nrGapStop_arraysize, k);
    this->nrGapStop_var[k] = nrGapStop;
}

uint32 SCTPSackChunk::getMsg_rwnd() const
{
    return msg_rwnd_var;
}

void SCTPSackChunk::setMsg_rwnd(uint32 msg_rwnd)
{
    this->msg_rwnd_var = msg_rwnd;
}

uint8 SCTPSackChunk::getDacPacketsRcvd() const
{
    return dacPacketsRcvd_var;
}

void SCTPSackChunk::setDacPacketsRcvd(uint8 dacPacketsRcvd)
{
    this->dacPacketsRcvd_var = dacPacketsRcvd;
}

bool SCTPSackChunk::getNrSubtractRGaps() const
{
    return nrSubtractRGaps_var;
}

void SCTPSackChunk::setNrSubtractRGaps(bool nrSubtractRGaps)
{
    this->nrSubtractRGaps_var = nrSubtractRGaps;
}

class SCTPSackChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPSackChunkDescriptor();
    virtual ~SCTPSackChunkDescriptor();

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

Register_ClassDescriptor(SCTPSackChunkDescriptor);

SCTPSackChunkDescriptor::SCTPSackChunkDescriptor() : cClassDescriptor("SCTPSackChunk", "SCTPChunk")
{
}

SCTPSackChunkDescriptor::~SCTPSackChunkDescriptor()
{
}

bool SCTPSackChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPSackChunk *>(obj)!=NULL;
}

const char *SCTPSackChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPSackChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 15+basedesc->getFieldCount(object) : 15;
}

unsigned int SCTPSackChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<15) ? fieldTypeFlags[field] : 0;
}

const char *SCTPSackChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "cumTsnAck",
        "a_rwnd",
        "numGaps",
        "numNrGaps",
        "numDupTsns",
        "isNrSack",
        "gapStart",
        "gapStop",
        "dupTsns",
        "sackSeqNum",
        "nrGapStart",
        "nrGapStop",
        "msg_rwnd",
        "dacPacketsRcvd",
        "nrSubtractRGaps",
    };
    return (field>=0 && field<15) ? fieldNames[field] : NULL;
}

int SCTPSackChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "cumTsnAck")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "a_rwnd")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "numGaps")==0) return base+2;
    if (fieldName[0]=='n' && strcmp(fieldName, "numNrGaps")==0) return base+3;
    if (fieldName[0]=='n' && strcmp(fieldName, "numDupTsns")==0) return base+4;
    if (fieldName[0]=='i' && strcmp(fieldName, "isNrSack")==0) return base+5;
    if (fieldName[0]=='g' && strcmp(fieldName, "gapStart")==0) return base+6;
    if (fieldName[0]=='g' && strcmp(fieldName, "gapStop")==0) return base+7;
    if (fieldName[0]=='d' && strcmp(fieldName, "dupTsns")==0) return base+8;
    if (fieldName[0]=='s' && strcmp(fieldName, "sackSeqNum")==0) return base+9;
    if (fieldName[0]=='n' && strcmp(fieldName, "nrGapStart")==0) return base+10;
    if (fieldName[0]=='n' && strcmp(fieldName, "nrGapStop")==0) return base+11;
    if (fieldName[0]=='m' && strcmp(fieldName, "msg_rwnd")==0) return base+12;
    if (fieldName[0]=='d' && strcmp(fieldName, "dacPacketsRcvd")==0) return base+13;
    if (fieldName[0]=='n' && strcmp(fieldName, "nrSubtractRGaps")==0) return base+14;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPSackChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "uint32",
        "uint16",
        "uint16",
        "uint16",
        "bool",
        "uint32",
        "uint32",
        "uint32",
        "uint32",
        "uint32",
        "uint32",
        "uint32",
        "uint8",
        "bool",
    };
    return (field>=0 && field<15) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPSackChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPSackChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSackChunk *pp = (SCTPSackChunk *)object; (void)pp;
    switch (field) {
        case 6: return pp->getGapStartArraySize();
        case 7: return pp->getGapStopArraySize();
        case 8: return pp->getDupTsnsArraySize();
        case 10: return pp->getNrGapStartArraySize();
        case 11: return pp->getNrGapStopArraySize();
        default: return 0;
    }
}

std::string SCTPSackChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSackChunk *pp = (SCTPSackChunk *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getCumTsnAck());
        case 1: return ulong2string(pp->getA_rwnd());
        case 2: return ulong2string(pp->getNumGaps());
        case 3: return ulong2string(pp->getNumNrGaps());
        case 4: return ulong2string(pp->getNumDupTsns());
        case 5: return bool2string(pp->getIsNrSack());
        case 6: return ulong2string(pp->getGapStart(i));
        case 7: return ulong2string(pp->getGapStop(i));
        case 8: return ulong2string(pp->getDupTsns(i));
        case 9: return ulong2string(pp->getSackSeqNum());
        case 10: return ulong2string(pp->getNrGapStart(i));
        case 11: return ulong2string(pp->getNrGapStop(i));
        case 12: return ulong2string(pp->getMsg_rwnd());
        case 13: return ulong2string(pp->getDacPacketsRcvd());
        case 14: return bool2string(pp->getNrSubtractRGaps());
        default: return "";
    }
}

bool SCTPSackChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSackChunk *pp = (SCTPSackChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setCumTsnAck(string2ulong(value)); return true;
        case 1: pp->setA_rwnd(string2ulong(value)); return true;
        case 2: pp->setNumGaps(string2ulong(value)); return true;
        case 3: pp->setNumNrGaps(string2ulong(value)); return true;
        case 4: pp->setNumDupTsns(string2ulong(value)); return true;
        case 5: pp->setIsNrSack(string2bool(value)); return true;
        case 6: pp->setGapStart(i,string2ulong(value)); return true;
        case 7: pp->setGapStop(i,string2ulong(value)); return true;
        case 8: pp->setDupTsns(i,string2ulong(value)); return true;
        case 9: pp->setSackSeqNum(string2ulong(value)); return true;
        case 10: pp->setNrGapStart(i,string2ulong(value)); return true;
        case 11: pp->setNrGapStop(i,string2ulong(value)); return true;
        case 12: pp->setMsg_rwnd(string2ulong(value)); return true;
        case 13: pp->setDacPacketsRcvd(string2ulong(value)); return true;
        case 14: pp->setNrSubtractRGaps(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPSackChunkDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPSackChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSackChunk *pp = (SCTPSackChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPAbortChunk);

SCTPAbortChunk::SCTPAbortChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->T_Bit_var = 0;
}

SCTPAbortChunk::SCTPAbortChunk(const SCTPAbortChunk& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPAbortChunk::~SCTPAbortChunk()
{
}

SCTPAbortChunk& SCTPAbortChunk::operator=(const SCTPAbortChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPAbortChunk::copy(const SCTPAbortChunk& other)
{
    this->T_Bit_var = other.T_Bit_var;
}

void SCTPAbortChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->T_Bit_var);
}

void SCTPAbortChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->T_Bit_var);
}

bool SCTPAbortChunk::getT_Bit() const
{
    return T_Bit_var;
}

void SCTPAbortChunk::setT_Bit(bool T_Bit)
{
    this->T_Bit_var = T_Bit;
}

class SCTPAbortChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPAbortChunkDescriptor();
    virtual ~SCTPAbortChunkDescriptor();

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

Register_ClassDescriptor(SCTPAbortChunkDescriptor);

SCTPAbortChunkDescriptor::SCTPAbortChunkDescriptor() : cClassDescriptor("SCTPAbortChunk", "SCTPChunk")
{
}

SCTPAbortChunkDescriptor::~SCTPAbortChunkDescriptor()
{
}

bool SCTPAbortChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPAbortChunk *>(obj)!=NULL;
}

const char *SCTPAbortChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPAbortChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPAbortChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPAbortChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "T_Bit",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPAbortChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='T' && strcmp(fieldName, "T_Bit")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPAbortChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPAbortChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPAbortChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAbortChunk *pp = (SCTPAbortChunk *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPAbortChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAbortChunk *pp = (SCTPAbortChunk *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getT_Bit());
        default: return "";
    }
}

bool SCTPAbortChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAbortChunk *pp = (SCTPAbortChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setT_Bit(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPAbortChunkDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPAbortChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAbortChunk *pp = (SCTPAbortChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPHeartbeatChunk);

SCTPHeartbeatChunk::SCTPHeartbeatChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->timeField_var = 0;
    info_arraysize = 0;
    this->info_var = 0;
}

SCTPHeartbeatChunk::SCTPHeartbeatChunk(const SCTPHeartbeatChunk& other) : ::SCTPChunk(other)
{
    info_arraysize = 0;
    this->info_var = 0;
    copy(other);
}

SCTPHeartbeatChunk::~SCTPHeartbeatChunk()
{
    delete [] info_var;
}

SCTPHeartbeatChunk& SCTPHeartbeatChunk::operator=(const SCTPHeartbeatChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPHeartbeatChunk::copy(const SCTPHeartbeatChunk& other)
{
    this->remoteAddr_var = other.remoteAddr_var;
    this->timeField_var = other.timeField_var;
    delete [] this->info_var;
    this->info_var = (other.info_arraysize==0) ? NULL : new char[other.info_arraysize];
    info_arraysize = other.info_arraysize;
    for (unsigned int i=0; i<info_arraysize; i++)
        this->info_var[i] = other.info_var[i];
}

void SCTPHeartbeatChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->timeField_var);
    b->pack(info_arraysize);
    doPacking(b,this->info_var,info_arraysize);
}

void SCTPHeartbeatChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->timeField_var);
    delete [] this->info_var;
    b->unpack(info_arraysize);
    if (info_arraysize==0) {
        this->info_var = 0;
    } else {
        this->info_var = new char[info_arraysize];
        doUnpacking(b,this->info_var,info_arraysize);
    }
}

IPvXAddress& SCTPHeartbeatChunk::getRemoteAddr()
{
    return remoteAddr_var;
}

void SCTPHeartbeatChunk::setRemoteAddr(const IPvXAddress& remoteAddr)
{
    this->remoteAddr_var = remoteAddr;
}

simtime_t SCTPHeartbeatChunk::getTimeField() const
{
    return timeField_var;
}

void SCTPHeartbeatChunk::setTimeField(simtime_t timeField)
{
    this->timeField_var = timeField;
}

void SCTPHeartbeatChunk::setInfoArraySize(unsigned int size)
{
    char *info_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = info_arraysize < size ? info_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        info_var2[i] = this->info_var[i];
    for (unsigned int i=sz; i<size; i++)
        info_var2[i] = 0;
    info_arraysize = size;
    delete [] this->info_var;
    this->info_var = info_var2;
}

unsigned int SCTPHeartbeatChunk::getInfoArraySize() const
{
    return info_arraysize;
}

char SCTPHeartbeatChunk::getInfo(unsigned int k) const
{
    if (k>=info_arraysize) throw cRuntimeError("Array of size %d indexed by %d", info_arraysize, k);
    return info_var[k];
}

void SCTPHeartbeatChunk::setInfo(unsigned int k, char info)
{
    if (k>=info_arraysize) throw cRuntimeError("Array of size %d indexed by %d", info_arraysize, k);
    this->info_var[k] = info;
}

class SCTPHeartbeatChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPHeartbeatChunkDescriptor();
    virtual ~SCTPHeartbeatChunkDescriptor();

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

Register_ClassDescriptor(SCTPHeartbeatChunkDescriptor);

SCTPHeartbeatChunkDescriptor::SCTPHeartbeatChunkDescriptor() : cClassDescriptor("SCTPHeartbeatChunk", "SCTPChunk")
{
}

SCTPHeartbeatChunkDescriptor::~SCTPHeartbeatChunkDescriptor()
{
}

bool SCTPHeartbeatChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPHeartbeatChunk *>(obj)!=NULL;
}

const char *SCTPHeartbeatChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPHeartbeatChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SCTPHeartbeatChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *SCTPHeartbeatChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "remoteAddr",
        "timeField",
        "info",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int SCTPHeartbeatChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddr")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "timeField")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "info")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPHeartbeatChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
        "simtime_t",
        "char",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPHeartbeatChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPHeartbeatChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPHeartbeatChunk *pp = (SCTPHeartbeatChunk *)object; (void)pp;
    switch (field) {
        case 2: return pp->getInfoArraySize();
        default: return 0;
    }
}

std::string SCTPHeartbeatChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPHeartbeatChunk *pp = (SCTPHeartbeatChunk *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteAddr(); return out.str();}
        case 1: return double2string(pp->getTimeField());
        case 2: return long2string(pp->getInfo(i));
        default: return "";
    }
}

bool SCTPHeartbeatChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPHeartbeatChunk *pp = (SCTPHeartbeatChunk *)object; (void)pp;
    switch (field) {
        case 1: pp->setTimeField(string2double(value)); return true;
        case 2: pp->setInfo(i,string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPHeartbeatChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *SCTPHeartbeatChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPHeartbeatChunk *pp = (SCTPHeartbeatChunk *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(SCTPHeartbeatAckChunk);

SCTPHeartbeatAckChunk::SCTPHeartbeatAckChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->timeField_var = 0;
    info_arraysize = 0;
    this->info_var = 0;
}

SCTPHeartbeatAckChunk::SCTPHeartbeatAckChunk(const SCTPHeartbeatAckChunk& other) : ::SCTPChunk(other)
{
    info_arraysize = 0;
    this->info_var = 0;
    copy(other);
}

SCTPHeartbeatAckChunk::~SCTPHeartbeatAckChunk()
{
    delete [] info_var;
}

SCTPHeartbeatAckChunk& SCTPHeartbeatAckChunk::operator=(const SCTPHeartbeatAckChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPHeartbeatAckChunk::copy(const SCTPHeartbeatAckChunk& other)
{
    this->remoteAddr_var = other.remoteAddr_var;
    this->timeField_var = other.timeField_var;
    delete [] this->info_var;
    this->info_var = (other.info_arraysize==0) ? NULL : new char[other.info_arraysize];
    info_arraysize = other.info_arraysize;
    for (unsigned int i=0; i<info_arraysize; i++)
        this->info_var[i] = other.info_var[i];
}

void SCTPHeartbeatAckChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->remoteAddr_var);
    doPacking(b,this->timeField_var);
    b->pack(info_arraysize);
    doPacking(b,this->info_var,info_arraysize);
}

void SCTPHeartbeatAckChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->remoteAddr_var);
    doUnpacking(b,this->timeField_var);
    delete [] this->info_var;
    b->unpack(info_arraysize);
    if (info_arraysize==0) {
        this->info_var = 0;
    } else {
        this->info_var = new char[info_arraysize];
        doUnpacking(b,this->info_var,info_arraysize);
    }
}

IPvXAddress& SCTPHeartbeatAckChunk::getRemoteAddr()
{
    return remoteAddr_var;
}

void SCTPHeartbeatAckChunk::setRemoteAddr(const IPvXAddress& remoteAddr)
{
    this->remoteAddr_var = remoteAddr;
}

simtime_t SCTPHeartbeatAckChunk::getTimeField() const
{
    return timeField_var;
}

void SCTPHeartbeatAckChunk::setTimeField(simtime_t timeField)
{
    this->timeField_var = timeField;
}

void SCTPHeartbeatAckChunk::setInfoArraySize(unsigned int size)
{
    char *info_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = info_arraysize < size ? info_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        info_var2[i] = this->info_var[i];
    for (unsigned int i=sz; i<size; i++)
        info_var2[i] = 0;
    info_arraysize = size;
    delete [] this->info_var;
    this->info_var = info_var2;
}

unsigned int SCTPHeartbeatAckChunk::getInfoArraySize() const
{
    return info_arraysize;
}

char SCTPHeartbeatAckChunk::getInfo(unsigned int k) const
{
    if (k>=info_arraysize) throw cRuntimeError("Array of size %d indexed by %d", info_arraysize, k);
    return info_var[k];
}

void SCTPHeartbeatAckChunk::setInfo(unsigned int k, char info)
{
    if (k>=info_arraysize) throw cRuntimeError("Array of size %d indexed by %d", info_arraysize, k);
    this->info_var[k] = info;
}

class SCTPHeartbeatAckChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPHeartbeatAckChunkDescriptor();
    virtual ~SCTPHeartbeatAckChunkDescriptor();

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

Register_ClassDescriptor(SCTPHeartbeatAckChunkDescriptor);

SCTPHeartbeatAckChunkDescriptor::SCTPHeartbeatAckChunkDescriptor() : cClassDescriptor("SCTPHeartbeatAckChunk", "SCTPChunk")
{
}

SCTPHeartbeatAckChunkDescriptor::~SCTPHeartbeatAckChunkDescriptor()
{
}

bool SCTPHeartbeatAckChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPHeartbeatAckChunk *>(obj)!=NULL;
}

const char *SCTPHeartbeatAckChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPHeartbeatAckChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SCTPHeartbeatAckChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *SCTPHeartbeatAckChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "remoteAddr",
        "timeField",
        "info",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int SCTPHeartbeatAckChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "remoteAddr")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "timeField")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "info")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPHeartbeatAckChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
        "simtime_t",
        "char",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPHeartbeatAckChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPHeartbeatAckChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPHeartbeatAckChunk *pp = (SCTPHeartbeatAckChunk *)object; (void)pp;
    switch (field) {
        case 2: return pp->getInfoArraySize();
        default: return 0;
    }
}

std::string SCTPHeartbeatAckChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPHeartbeatAckChunk *pp = (SCTPHeartbeatAckChunk *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRemoteAddr(); return out.str();}
        case 1: return double2string(pp->getTimeField());
        case 2: return long2string(pp->getInfo(i));
        default: return "";
    }
}

bool SCTPHeartbeatAckChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPHeartbeatAckChunk *pp = (SCTPHeartbeatAckChunk *)object; (void)pp;
    switch (field) {
        case 1: pp->setTimeField(string2double(value)); return true;
        case 2: pp->setInfo(i,string2long(value)); return true;
        default: return false;
    }
}

const char *SCTPHeartbeatAckChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *SCTPHeartbeatAckChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPHeartbeatAckChunk *pp = (SCTPHeartbeatAckChunk *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRemoteAddr()); break;
        default: return NULL;
    }
}

Register_Class(SCTPShutdownChunk);

SCTPShutdownChunk::SCTPShutdownChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->cumTsnAck_var = 0;
}

SCTPShutdownChunk::SCTPShutdownChunk(const SCTPShutdownChunk& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPShutdownChunk::~SCTPShutdownChunk()
{
}

SCTPShutdownChunk& SCTPShutdownChunk::operator=(const SCTPShutdownChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPShutdownChunk::copy(const SCTPShutdownChunk& other)
{
    this->cumTsnAck_var = other.cumTsnAck_var;
}

void SCTPShutdownChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->cumTsnAck_var);
}

void SCTPShutdownChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->cumTsnAck_var);
}

uint32 SCTPShutdownChunk::getCumTsnAck() const
{
    return cumTsnAck_var;
}

void SCTPShutdownChunk::setCumTsnAck(uint32 cumTsnAck)
{
    this->cumTsnAck_var = cumTsnAck;
}

class SCTPShutdownChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPShutdownChunkDescriptor();
    virtual ~SCTPShutdownChunkDescriptor();

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

Register_ClassDescriptor(SCTPShutdownChunkDescriptor);

SCTPShutdownChunkDescriptor::SCTPShutdownChunkDescriptor() : cClassDescriptor("SCTPShutdownChunk", "SCTPChunk")
{
}

SCTPShutdownChunkDescriptor::~SCTPShutdownChunkDescriptor()
{
}

bool SCTPShutdownChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPShutdownChunk *>(obj)!=NULL;
}

const char *SCTPShutdownChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPShutdownChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPShutdownChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPShutdownChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "cumTsnAck",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPShutdownChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "cumTsnAck")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPShutdownChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPShutdownChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPShutdownChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownChunk *pp = (SCTPShutdownChunk *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPShutdownChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownChunk *pp = (SCTPShutdownChunk *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getCumTsnAck());
        default: return "";
    }
}

bool SCTPShutdownChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownChunk *pp = (SCTPShutdownChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setCumTsnAck(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPShutdownChunkDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPShutdownChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownChunk *pp = (SCTPShutdownChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPShutdownAckChunk);

SCTPShutdownAckChunk::SCTPShutdownAckChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
}

SCTPShutdownAckChunk::SCTPShutdownAckChunk(const SCTPShutdownAckChunk& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPShutdownAckChunk::~SCTPShutdownAckChunk()
{
}

SCTPShutdownAckChunk& SCTPShutdownAckChunk::operator=(const SCTPShutdownAckChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPShutdownAckChunk::copy(const SCTPShutdownAckChunk& other)
{
}

void SCTPShutdownAckChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
}

void SCTPShutdownAckChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
}

class SCTPShutdownAckChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPShutdownAckChunkDescriptor();
    virtual ~SCTPShutdownAckChunkDescriptor();

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

Register_ClassDescriptor(SCTPShutdownAckChunkDescriptor);

SCTPShutdownAckChunkDescriptor::SCTPShutdownAckChunkDescriptor() : cClassDescriptor("SCTPShutdownAckChunk", "SCTPChunk")
{
}

SCTPShutdownAckChunkDescriptor::~SCTPShutdownAckChunkDescriptor()
{
}

bool SCTPShutdownAckChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPShutdownAckChunk *>(obj)!=NULL;
}

const char *SCTPShutdownAckChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPShutdownAckChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int SCTPShutdownAckChunkDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *SCTPShutdownAckChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int SCTPShutdownAckChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPShutdownAckChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *SCTPShutdownAckChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPShutdownAckChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownAckChunk *pp = (SCTPShutdownAckChunk *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPShutdownAckChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownAckChunk *pp = (SCTPShutdownAckChunk *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool SCTPShutdownAckChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownAckChunk *pp = (SCTPShutdownAckChunk *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SCTPShutdownAckChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *SCTPShutdownAckChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownAckChunk *pp = (SCTPShutdownAckChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPShutdownCompleteChunk);

SCTPShutdownCompleteChunk::SCTPShutdownCompleteChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->TBit_var = 0;
}

SCTPShutdownCompleteChunk::SCTPShutdownCompleteChunk(const SCTPShutdownCompleteChunk& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPShutdownCompleteChunk::~SCTPShutdownCompleteChunk()
{
}

SCTPShutdownCompleteChunk& SCTPShutdownCompleteChunk::operator=(const SCTPShutdownCompleteChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPShutdownCompleteChunk::copy(const SCTPShutdownCompleteChunk& other)
{
    this->TBit_var = other.TBit_var;
}

void SCTPShutdownCompleteChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->TBit_var);
}

void SCTPShutdownCompleteChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->TBit_var);
}

bool SCTPShutdownCompleteChunk::getTBit() const
{
    return TBit_var;
}

void SCTPShutdownCompleteChunk::setTBit(bool TBit)
{
    this->TBit_var = TBit;
}

class SCTPShutdownCompleteChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPShutdownCompleteChunkDescriptor();
    virtual ~SCTPShutdownCompleteChunkDescriptor();

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

Register_ClassDescriptor(SCTPShutdownCompleteChunkDescriptor);

SCTPShutdownCompleteChunkDescriptor::SCTPShutdownCompleteChunkDescriptor() : cClassDescriptor("SCTPShutdownCompleteChunk", "SCTPChunk")
{
}

SCTPShutdownCompleteChunkDescriptor::~SCTPShutdownCompleteChunkDescriptor()
{
}

bool SCTPShutdownCompleteChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPShutdownCompleteChunk *>(obj)!=NULL;
}

const char *SCTPShutdownCompleteChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPShutdownCompleteChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPShutdownCompleteChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPShutdownCompleteChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "TBit",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPShutdownCompleteChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='T' && strcmp(fieldName, "TBit")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPShutdownCompleteChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPShutdownCompleteChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPShutdownCompleteChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownCompleteChunk *pp = (SCTPShutdownCompleteChunk *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPShutdownCompleteChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownCompleteChunk *pp = (SCTPShutdownCompleteChunk *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getTBit());
        default: return "";
    }
}

bool SCTPShutdownCompleteChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownCompleteChunk *pp = (SCTPShutdownCompleteChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setTBit(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPShutdownCompleteChunkDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPShutdownCompleteChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPShutdownCompleteChunk *pp = (SCTPShutdownCompleteChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

SCTPErrorChunk_Base::SCTPErrorChunk_Base(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->TBit_var = 0;
    this->MBit_var = 0;
}

SCTPErrorChunk_Base::SCTPErrorChunk_Base(const SCTPErrorChunk_Base& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPErrorChunk_Base::~SCTPErrorChunk_Base()
{
}

SCTPErrorChunk_Base& SCTPErrorChunk_Base::operator=(const SCTPErrorChunk_Base& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPErrorChunk_Base::copy(const SCTPErrorChunk_Base& other)
{
    this->TBit_var = other.TBit_var;
    this->MBit_var = other.MBit_var;
}

void SCTPErrorChunk_Base::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->TBit_var);
    doPacking(b,this->MBit_var);
    // field parameters is abstract -- please do packing in customized class
}

void SCTPErrorChunk_Base::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->TBit_var);
    doUnpacking(b,this->MBit_var);
    // field parameters is abstract -- please do unpacking in customized class
}

bool SCTPErrorChunk_Base::getTBit() const
{
    return TBit_var;
}

void SCTPErrorChunk_Base::setTBit(bool TBit)
{
    this->TBit_var = TBit;
}

bool SCTPErrorChunk_Base::getMBit() const
{
    return MBit_var;
}

void SCTPErrorChunk_Base::setMBit(bool MBit)
{
    this->MBit_var = MBit;
}

class SCTPErrorChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPErrorChunkDescriptor();
    virtual ~SCTPErrorChunkDescriptor();

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

Register_ClassDescriptor(SCTPErrorChunkDescriptor);

SCTPErrorChunkDescriptor::SCTPErrorChunkDescriptor() : cClassDescriptor("SCTPErrorChunk", "SCTPChunk")
{
}

SCTPErrorChunkDescriptor::~SCTPErrorChunkDescriptor()
{
}

bool SCTPErrorChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPErrorChunk_Base *>(obj)!=NULL;
}

const char *SCTPErrorChunkDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPErrorChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SCTPErrorChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *SCTPErrorChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "TBit",
        "MBit",
        "parameters",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int SCTPErrorChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='T' && strcmp(fieldName, "TBit")==0) return base+0;
    if (fieldName[0]=='M' && strcmp(fieldName, "MBit")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "parameters")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPErrorChunkDescriptor::getFieldTypeString(void *object, int field) const
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
        "cPacketPtr",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPErrorChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPErrorChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorChunk_Base *pp = (SCTPErrorChunk_Base *)object; (void)pp;
    switch (field) {
        case 2: return pp->getParametersArraySize();
        default: return 0;
    }
}

std::string SCTPErrorChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorChunk_Base *pp = (SCTPErrorChunk_Base *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getTBit());
        case 1: return bool2string(pp->getMBit());
        case 2: {std::stringstream out; out << pp->getParameters(i); return out.str();}
        default: return "";
    }
}

bool SCTPErrorChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorChunk_Base *pp = (SCTPErrorChunk_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setTBit(string2bool(value)); return true;
        case 1: pp->setMBit(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPErrorChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(cPacketPtr));
        default: return NULL;
    };
}

void *SCTPErrorChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorChunk_Base *pp = (SCTPErrorChunk_Base *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getParameters(i)); break;
        default: return NULL;
    }
}

Register_Class(SCTPParameter);

SCTPParameter::SCTPParameter(const char *name, int kind) : ::cPacket(name,kind)
{
    this->parameterType_var = 0;
}

SCTPParameter::SCTPParameter(const SCTPParameter& other) : ::cPacket(other)
{
    copy(other);
}

SCTPParameter::~SCTPParameter()
{
}

SCTPParameter& SCTPParameter::operator=(const SCTPParameter& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SCTPParameter::copy(const SCTPParameter& other)
{
    this->parameterType_var = other.parameterType_var;
}

void SCTPParameter::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->parameterType_var);
}

void SCTPParameter::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->parameterType_var);
}

uint16 SCTPParameter::getParameterType() const
{
    return parameterType_var;
}

void SCTPParameter::setParameterType(uint16 parameterType)
{
    this->parameterType_var = parameterType;
}

class SCTPParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPParameterDescriptor();
    virtual ~SCTPParameterDescriptor();

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

Register_ClassDescriptor(SCTPParameterDescriptor);

SCTPParameterDescriptor::SCTPParameterDescriptor() : cClassDescriptor("SCTPParameter", "cPacket")
{
}

SCTPParameterDescriptor::~SCTPParameterDescriptor()
{
}

bool SCTPParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPParameter *>(obj)!=NULL;
}

const char *SCTPParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPParameterDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "parameterType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "parameterType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPParameter *pp = (SCTPParameter *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPParameter *pp = (SCTPParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getParameterType());
        default: return "";
    }
}

bool SCTPParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPParameter *pp = (SCTPParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setParameterType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPParameterDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPParameter *pp = (SCTPParameter *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPPacketDropChunk);

SCTPPacketDropChunk::SCTPPacketDropChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->cFlag_var = 0;
    this->tFlag_var = 0;
    this->bFlag_var = 0;
    this->mFlag_var = 0;
    this->maxRwnd_var = 0;
    this->queuedData_var = 0;
    this->truncLength_var = 0;
}

SCTPPacketDropChunk::SCTPPacketDropChunk(const SCTPPacketDropChunk& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPPacketDropChunk::~SCTPPacketDropChunk()
{
}

SCTPPacketDropChunk& SCTPPacketDropChunk::operator=(const SCTPPacketDropChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPPacketDropChunk::copy(const SCTPPacketDropChunk& other)
{
    this->cFlag_var = other.cFlag_var;
    this->tFlag_var = other.tFlag_var;
    this->bFlag_var = other.bFlag_var;
    this->mFlag_var = other.mFlag_var;
    this->maxRwnd_var = other.maxRwnd_var;
    this->queuedData_var = other.queuedData_var;
    this->truncLength_var = other.truncLength_var;
}

void SCTPPacketDropChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->cFlag_var);
    doPacking(b,this->tFlag_var);
    doPacking(b,this->bFlag_var);
    doPacking(b,this->mFlag_var);
    doPacking(b,this->maxRwnd_var);
    doPacking(b,this->queuedData_var);
    doPacking(b,this->truncLength_var);
}

void SCTPPacketDropChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->cFlag_var);
    doUnpacking(b,this->tFlag_var);
    doUnpacking(b,this->bFlag_var);
    doUnpacking(b,this->mFlag_var);
    doUnpacking(b,this->maxRwnd_var);
    doUnpacking(b,this->queuedData_var);
    doUnpacking(b,this->truncLength_var);
}

bool SCTPPacketDropChunk::getCFlag() const
{
    return cFlag_var;
}

void SCTPPacketDropChunk::setCFlag(bool cFlag)
{
    this->cFlag_var = cFlag;
}

bool SCTPPacketDropChunk::getTFlag() const
{
    return tFlag_var;
}

void SCTPPacketDropChunk::setTFlag(bool tFlag)
{
    this->tFlag_var = tFlag;
}

bool SCTPPacketDropChunk::getBFlag() const
{
    return bFlag_var;
}

void SCTPPacketDropChunk::setBFlag(bool bFlag)
{
    this->bFlag_var = bFlag;
}

bool SCTPPacketDropChunk::getMFlag() const
{
    return mFlag_var;
}

void SCTPPacketDropChunk::setMFlag(bool mFlag)
{
    this->mFlag_var = mFlag;
}

uint32 SCTPPacketDropChunk::getMaxRwnd() const
{
    return maxRwnd_var;
}

void SCTPPacketDropChunk::setMaxRwnd(uint32 maxRwnd)
{
    this->maxRwnd_var = maxRwnd;
}

uint32 SCTPPacketDropChunk::getQueuedData() const
{
    return queuedData_var;
}

void SCTPPacketDropChunk::setQueuedData(uint32 queuedData)
{
    this->queuedData_var = queuedData;
}

uint16 SCTPPacketDropChunk::getTruncLength() const
{
    return truncLength_var;
}

void SCTPPacketDropChunk::setTruncLength(uint16 truncLength)
{
    this->truncLength_var = truncLength;
}

class SCTPPacketDropChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPPacketDropChunkDescriptor();
    virtual ~SCTPPacketDropChunkDescriptor();

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

Register_ClassDescriptor(SCTPPacketDropChunkDescriptor);

SCTPPacketDropChunkDescriptor::SCTPPacketDropChunkDescriptor() : cClassDescriptor("SCTPPacketDropChunk", "SCTPChunk")
{
}

SCTPPacketDropChunkDescriptor::~SCTPPacketDropChunkDescriptor()
{
}

bool SCTPPacketDropChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPPacketDropChunk *>(obj)!=NULL;
}

const char *SCTPPacketDropChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPPacketDropChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int SCTPPacketDropChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPPacketDropChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "cFlag",
        "tFlag",
        "bFlag",
        "mFlag",
        "maxRwnd",
        "queuedData",
        "truncLength",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int SCTPPacketDropChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "cFlag")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "tFlag")==0) return base+1;
    if (fieldName[0]=='b' && strcmp(fieldName, "bFlag")==0) return base+2;
    if (fieldName[0]=='m' && strcmp(fieldName, "mFlag")==0) return base+3;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxRwnd")==0) return base+4;
    if (fieldName[0]=='q' && strcmp(fieldName, "queuedData")==0) return base+5;
    if (fieldName[0]=='t' && strcmp(fieldName, "truncLength")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPPacketDropChunkDescriptor::getFieldTypeString(void *object, int field) const
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
        "uint32",
        "uint32",
        "uint16",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPPacketDropChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPPacketDropChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPacketDropChunk *pp = (SCTPPacketDropChunk *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPPacketDropChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPacketDropChunk *pp = (SCTPPacketDropChunk *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getCFlag());
        case 1: return bool2string(pp->getTFlag());
        case 2: return bool2string(pp->getBFlag());
        case 3: return bool2string(pp->getMFlag());
        case 4: return ulong2string(pp->getMaxRwnd());
        case 5: return ulong2string(pp->getQueuedData());
        case 6: return ulong2string(pp->getTruncLength());
        default: return "";
    }
}

bool SCTPPacketDropChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPacketDropChunk *pp = (SCTPPacketDropChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setCFlag(string2bool(value)); return true;
        case 1: pp->setTFlag(string2bool(value)); return true;
        case 2: pp->setBFlag(string2bool(value)); return true;
        case 3: pp->setMFlag(string2bool(value)); return true;
        case 4: pp->setMaxRwnd(string2ulong(value)); return true;
        case 5: pp->setQueuedData(string2ulong(value)); return true;
        case 6: pp->setTruncLength(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPPacketDropChunkDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPPacketDropChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPPacketDropChunk *pp = (SCTPPacketDropChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

SCTPStreamResetChunk_Base::SCTPStreamResetChunk_Base(const char *name, int kind) : ::SCTPChunk(name,kind)
{
}

SCTPStreamResetChunk_Base::SCTPStreamResetChunk_Base(const SCTPStreamResetChunk_Base& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPStreamResetChunk_Base::~SCTPStreamResetChunk_Base()
{
}

SCTPStreamResetChunk_Base& SCTPStreamResetChunk_Base::operator=(const SCTPStreamResetChunk_Base& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPStreamResetChunk_Base::copy(const SCTPStreamResetChunk_Base& other)
{
}

void SCTPStreamResetChunk_Base::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    // field parameters is abstract -- please do packing in customized class
}

void SCTPStreamResetChunk_Base::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    // field parameters is abstract -- please do unpacking in customized class
}

class SCTPStreamResetChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPStreamResetChunkDescriptor();
    virtual ~SCTPStreamResetChunkDescriptor();

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

Register_ClassDescriptor(SCTPStreamResetChunkDescriptor);

SCTPStreamResetChunkDescriptor::SCTPStreamResetChunkDescriptor() : cClassDescriptor("SCTPStreamResetChunk", "SCTPChunk")
{
}

SCTPStreamResetChunkDescriptor::~SCTPStreamResetChunkDescriptor()
{
}

bool SCTPStreamResetChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPStreamResetChunk_Base *>(obj)!=NULL;
}

const char *SCTPStreamResetChunkDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPStreamResetChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPStreamResetChunkDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *SCTPStreamResetChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "parameters",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPStreamResetChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "parameters")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPStreamResetChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "cPacketPtr",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPStreamResetChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPStreamResetChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStreamResetChunk_Base *pp = (SCTPStreamResetChunk_Base *)object; (void)pp;
    switch (field) {
        case 0: return pp->getParametersArraySize();
        default: return 0;
    }
}

std::string SCTPStreamResetChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStreamResetChunk_Base *pp = (SCTPStreamResetChunk_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getParameters(i); return out.str();}
        default: return "";
    }
}

bool SCTPStreamResetChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStreamResetChunk_Base *pp = (SCTPStreamResetChunk_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *SCTPStreamResetChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(cPacketPtr));
        default: return NULL;
    };
}

void *SCTPStreamResetChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStreamResetChunk_Base *pp = (SCTPStreamResetChunk_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getParameters(i)); break;
        default: return NULL;
    }
}

Register_Class(SCTPOutgoingSSNResetRequestParameter);

SCTPOutgoingSSNResetRequestParameter::SCTPOutgoingSSNResetRequestParameter(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    this->srReqSn_var = 0;
    this->srResSn_var = 0;
    this->lastTsn_var = 0;
    streamNumbers_arraysize = 0;
    this->streamNumbers_var = 0;
}

SCTPOutgoingSSNResetRequestParameter::SCTPOutgoingSSNResetRequestParameter(const SCTPOutgoingSSNResetRequestParameter& other) : ::SCTPParameter(other)
{
    streamNumbers_arraysize = 0;
    this->streamNumbers_var = 0;
    copy(other);
}

SCTPOutgoingSSNResetRequestParameter::~SCTPOutgoingSSNResetRequestParameter()
{
    delete [] streamNumbers_var;
}

SCTPOutgoingSSNResetRequestParameter& SCTPOutgoingSSNResetRequestParameter::operator=(const SCTPOutgoingSSNResetRequestParameter& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPOutgoingSSNResetRequestParameter::copy(const SCTPOutgoingSSNResetRequestParameter& other)
{
    this->srReqSn_var = other.srReqSn_var;
    this->srResSn_var = other.srResSn_var;
    this->lastTsn_var = other.lastTsn_var;
    delete [] this->streamNumbers_var;
    this->streamNumbers_var = (other.streamNumbers_arraysize==0) ? NULL : new uint16[other.streamNumbers_arraysize];
    streamNumbers_arraysize = other.streamNumbers_arraysize;
    for (unsigned int i=0; i<streamNumbers_arraysize; i++)
        this->streamNumbers_var[i] = other.streamNumbers_var[i];
}

void SCTPOutgoingSSNResetRequestParameter::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    doPacking(b,this->srReqSn_var);
    doPacking(b,this->srResSn_var);
    doPacking(b,this->lastTsn_var);
    b->pack(streamNumbers_arraysize);
    doPacking(b,this->streamNumbers_var,streamNumbers_arraysize);
}

void SCTPOutgoingSSNResetRequestParameter::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    doUnpacking(b,this->srReqSn_var);
    doUnpacking(b,this->srResSn_var);
    doUnpacking(b,this->lastTsn_var);
    delete [] this->streamNumbers_var;
    b->unpack(streamNumbers_arraysize);
    if (streamNumbers_arraysize==0) {
        this->streamNumbers_var = 0;
    } else {
        this->streamNumbers_var = new uint16[streamNumbers_arraysize];
        doUnpacking(b,this->streamNumbers_var,streamNumbers_arraysize);
    }
}

uint32 SCTPOutgoingSSNResetRequestParameter::getSrReqSn() const
{
    return srReqSn_var;
}

void SCTPOutgoingSSNResetRequestParameter::setSrReqSn(uint32 srReqSn)
{
    this->srReqSn_var = srReqSn;
}

uint32 SCTPOutgoingSSNResetRequestParameter::getSrResSn() const
{
    return srResSn_var;
}

void SCTPOutgoingSSNResetRequestParameter::setSrResSn(uint32 srResSn)
{
    this->srResSn_var = srResSn;
}

uint32 SCTPOutgoingSSNResetRequestParameter::getLastTsn() const
{
    return lastTsn_var;
}

void SCTPOutgoingSSNResetRequestParameter::setLastTsn(uint32 lastTsn)
{
    this->lastTsn_var = lastTsn;
}

void SCTPOutgoingSSNResetRequestParameter::setStreamNumbersArraySize(unsigned int size)
{
    uint16 *streamNumbers_var2 = (size==0) ? NULL : new uint16[size];
    unsigned int sz = streamNumbers_arraysize < size ? streamNumbers_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        streamNumbers_var2[i] = this->streamNumbers_var[i];
    for (unsigned int i=sz; i<size; i++)
        streamNumbers_var2[i] = 0;
    streamNumbers_arraysize = size;
    delete [] this->streamNumbers_var;
    this->streamNumbers_var = streamNumbers_var2;
}

unsigned int SCTPOutgoingSSNResetRequestParameter::getStreamNumbersArraySize() const
{
    return streamNumbers_arraysize;
}

uint16 SCTPOutgoingSSNResetRequestParameter::getStreamNumbers(unsigned int k) const
{
    if (k>=streamNumbers_arraysize) throw cRuntimeError("Array of size %d indexed by %d", streamNumbers_arraysize, k);
    return streamNumbers_var[k];
}

void SCTPOutgoingSSNResetRequestParameter::setStreamNumbers(unsigned int k, uint16 streamNumbers)
{
    if (k>=streamNumbers_arraysize) throw cRuntimeError("Array of size %d indexed by %d", streamNumbers_arraysize, k);
    this->streamNumbers_var[k] = streamNumbers;
}

class SCTPOutgoingSSNResetRequestParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPOutgoingSSNResetRequestParameterDescriptor();
    virtual ~SCTPOutgoingSSNResetRequestParameterDescriptor();

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

Register_ClassDescriptor(SCTPOutgoingSSNResetRequestParameterDescriptor);

SCTPOutgoingSSNResetRequestParameterDescriptor::SCTPOutgoingSSNResetRequestParameterDescriptor() : cClassDescriptor("SCTPOutgoingSSNResetRequestParameter", "SCTPParameter")
{
}

SCTPOutgoingSSNResetRequestParameterDescriptor::~SCTPOutgoingSSNResetRequestParameterDescriptor()
{
}

bool SCTPOutgoingSSNResetRequestParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPOutgoingSSNResetRequestParameter *>(obj)!=NULL;
}

const char *SCTPOutgoingSSNResetRequestParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPOutgoingSSNResetRequestParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SCTPOutgoingSSNResetRequestParameterDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *SCTPOutgoingSSNResetRequestParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srReqSn",
        "srResSn",
        "lastTsn",
        "streamNumbers",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SCTPOutgoingSSNResetRequestParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srReqSn")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srResSn")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastTsn")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "streamNumbers")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPOutgoingSSNResetRequestParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "uint32",
        "uint32",
        "uint16",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPOutgoingSSNResetRequestParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPOutgoingSSNResetRequestParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOutgoingSSNResetRequestParameter *pp = (SCTPOutgoingSSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        case 3: return pp->getStreamNumbersArraySize();
        default: return 0;
    }
}

std::string SCTPOutgoingSSNResetRequestParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOutgoingSSNResetRequestParameter *pp = (SCTPOutgoingSSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSrReqSn());
        case 1: return ulong2string(pp->getSrResSn());
        case 2: return ulong2string(pp->getLastTsn());
        case 3: return ulong2string(pp->getStreamNumbers(i));
        default: return "";
    }
}

bool SCTPOutgoingSSNResetRequestParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOutgoingSSNResetRequestParameter *pp = (SCTPOutgoingSSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setSrReqSn(string2ulong(value)); return true;
        case 1: pp->setSrResSn(string2ulong(value)); return true;
        case 2: pp->setLastTsn(string2ulong(value)); return true;
        case 3: pp->setStreamNumbers(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPOutgoingSSNResetRequestParameterDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPOutgoingSSNResetRequestParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPOutgoingSSNResetRequestParameter *pp = (SCTPOutgoingSSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPIncomingSSNResetRequestParameter);

SCTPIncomingSSNResetRequestParameter::SCTPIncomingSSNResetRequestParameter(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    this->srReqSn_var = 0;
    streamNumbers_arraysize = 0;
    this->streamNumbers_var = 0;
}

SCTPIncomingSSNResetRequestParameter::SCTPIncomingSSNResetRequestParameter(const SCTPIncomingSSNResetRequestParameter& other) : ::SCTPParameter(other)
{
    streamNumbers_arraysize = 0;
    this->streamNumbers_var = 0;
    copy(other);
}

SCTPIncomingSSNResetRequestParameter::~SCTPIncomingSSNResetRequestParameter()
{
    delete [] streamNumbers_var;
}

SCTPIncomingSSNResetRequestParameter& SCTPIncomingSSNResetRequestParameter::operator=(const SCTPIncomingSSNResetRequestParameter& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPIncomingSSNResetRequestParameter::copy(const SCTPIncomingSSNResetRequestParameter& other)
{
    this->srReqSn_var = other.srReqSn_var;
    delete [] this->streamNumbers_var;
    this->streamNumbers_var = (other.streamNumbers_arraysize==0) ? NULL : new uint16[other.streamNumbers_arraysize];
    streamNumbers_arraysize = other.streamNumbers_arraysize;
    for (unsigned int i=0; i<streamNumbers_arraysize; i++)
        this->streamNumbers_var[i] = other.streamNumbers_var[i];
}

void SCTPIncomingSSNResetRequestParameter::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    doPacking(b,this->srReqSn_var);
    b->pack(streamNumbers_arraysize);
    doPacking(b,this->streamNumbers_var,streamNumbers_arraysize);
}

void SCTPIncomingSSNResetRequestParameter::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    doUnpacking(b,this->srReqSn_var);
    delete [] this->streamNumbers_var;
    b->unpack(streamNumbers_arraysize);
    if (streamNumbers_arraysize==0) {
        this->streamNumbers_var = 0;
    } else {
        this->streamNumbers_var = new uint16[streamNumbers_arraysize];
        doUnpacking(b,this->streamNumbers_var,streamNumbers_arraysize);
    }
}

uint32 SCTPIncomingSSNResetRequestParameter::getSrReqSn() const
{
    return srReqSn_var;
}

void SCTPIncomingSSNResetRequestParameter::setSrReqSn(uint32 srReqSn)
{
    this->srReqSn_var = srReqSn;
}

void SCTPIncomingSSNResetRequestParameter::setStreamNumbersArraySize(unsigned int size)
{
    uint16 *streamNumbers_var2 = (size==0) ? NULL : new uint16[size];
    unsigned int sz = streamNumbers_arraysize < size ? streamNumbers_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        streamNumbers_var2[i] = this->streamNumbers_var[i];
    for (unsigned int i=sz; i<size; i++)
        streamNumbers_var2[i] = 0;
    streamNumbers_arraysize = size;
    delete [] this->streamNumbers_var;
    this->streamNumbers_var = streamNumbers_var2;
}

unsigned int SCTPIncomingSSNResetRequestParameter::getStreamNumbersArraySize() const
{
    return streamNumbers_arraysize;
}

uint16 SCTPIncomingSSNResetRequestParameter::getStreamNumbers(unsigned int k) const
{
    if (k>=streamNumbers_arraysize) throw cRuntimeError("Array of size %d indexed by %d", streamNumbers_arraysize, k);
    return streamNumbers_var[k];
}

void SCTPIncomingSSNResetRequestParameter::setStreamNumbers(unsigned int k, uint16 streamNumbers)
{
    if (k>=streamNumbers_arraysize) throw cRuntimeError("Array of size %d indexed by %d", streamNumbers_arraysize, k);
    this->streamNumbers_var[k] = streamNumbers;
}

class SCTPIncomingSSNResetRequestParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPIncomingSSNResetRequestParameterDescriptor();
    virtual ~SCTPIncomingSSNResetRequestParameterDescriptor();

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

Register_ClassDescriptor(SCTPIncomingSSNResetRequestParameterDescriptor);

SCTPIncomingSSNResetRequestParameterDescriptor::SCTPIncomingSSNResetRequestParameterDescriptor() : cClassDescriptor("SCTPIncomingSSNResetRequestParameter", "SCTPParameter")
{
}

SCTPIncomingSSNResetRequestParameterDescriptor::~SCTPIncomingSSNResetRequestParameterDescriptor()
{
}

bool SCTPIncomingSSNResetRequestParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPIncomingSSNResetRequestParameter *>(obj)!=NULL;
}

const char *SCTPIncomingSSNResetRequestParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPIncomingSSNResetRequestParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SCTPIncomingSSNResetRequestParameterDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPIncomingSSNResetRequestParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srReqSn",
        "streamNumbers",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int SCTPIncomingSSNResetRequestParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srReqSn")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "streamNumbers")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPIncomingSSNResetRequestParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "uint16",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPIncomingSSNResetRequestParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPIncomingSSNResetRequestParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPIncomingSSNResetRequestParameter *pp = (SCTPIncomingSSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        case 1: return pp->getStreamNumbersArraySize();
        default: return 0;
    }
}

std::string SCTPIncomingSSNResetRequestParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPIncomingSSNResetRequestParameter *pp = (SCTPIncomingSSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSrReqSn());
        case 1: return ulong2string(pp->getStreamNumbers(i));
        default: return "";
    }
}

bool SCTPIncomingSSNResetRequestParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPIncomingSSNResetRequestParameter *pp = (SCTPIncomingSSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setSrReqSn(string2ulong(value)); return true;
        case 1: pp->setStreamNumbers(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPIncomingSSNResetRequestParameterDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPIncomingSSNResetRequestParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPIncomingSSNResetRequestParameter *pp = (SCTPIncomingSSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPSSNTSNResetRequestParameter);

SCTPSSNTSNResetRequestParameter::SCTPSSNTSNResetRequestParameter(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    this->srReqSn_var = 0;
}

SCTPSSNTSNResetRequestParameter::SCTPSSNTSNResetRequestParameter(const SCTPSSNTSNResetRequestParameter& other) : ::SCTPParameter(other)
{
    copy(other);
}

SCTPSSNTSNResetRequestParameter::~SCTPSSNTSNResetRequestParameter()
{
}

SCTPSSNTSNResetRequestParameter& SCTPSSNTSNResetRequestParameter::operator=(const SCTPSSNTSNResetRequestParameter& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPSSNTSNResetRequestParameter::copy(const SCTPSSNTSNResetRequestParameter& other)
{
    this->srReqSn_var = other.srReqSn_var;
}

void SCTPSSNTSNResetRequestParameter::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    doPacking(b,this->srReqSn_var);
}

void SCTPSSNTSNResetRequestParameter::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    doUnpacking(b,this->srReqSn_var);
}

uint32 SCTPSSNTSNResetRequestParameter::getSrReqSn() const
{
    return srReqSn_var;
}

void SCTPSSNTSNResetRequestParameter::setSrReqSn(uint32 srReqSn)
{
    this->srReqSn_var = srReqSn;
}

class SCTPSSNTSNResetRequestParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPSSNTSNResetRequestParameterDescriptor();
    virtual ~SCTPSSNTSNResetRequestParameterDescriptor();

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

Register_ClassDescriptor(SCTPSSNTSNResetRequestParameterDescriptor);

SCTPSSNTSNResetRequestParameterDescriptor::SCTPSSNTSNResetRequestParameterDescriptor() : cClassDescriptor("SCTPSSNTSNResetRequestParameter", "SCTPParameter")
{
}

SCTPSSNTSNResetRequestParameterDescriptor::~SCTPSSNTSNResetRequestParameterDescriptor()
{
}

bool SCTPSSNTSNResetRequestParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPSSNTSNResetRequestParameter *>(obj)!=NULL;
}

const char *SCTPSSNTSNResetRequestParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPSSNTSNResetRequestParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPSSNTSNResetRequestParameterDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPSSNTSNResetRequestParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srReqSn",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPSSNTSNResetRequestParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srReqSn")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPSSNTSNResetRequestParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPSSNTSNResetRequestParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPSSNTSNResetRequestParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSSNTSNResetRequestParameter *pp = (SCTPSSNTSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPSSNTSNResetRequestParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSSNTSNResetRequestParameter *pp = (SCTPSSNTSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSrReqSn());
        default: return "";
    }
}

bool SCTPSSNTSNResetRequestParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSSNTSNResetRequestParameter *pp = (SCTPSSNTSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setSrReqSn(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPSSNTSNResetRequestParameterDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPSSNTSNResetRequestParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSSNTSNResetRequestParameter *pp = (SCTPSSNTSNResetRequestParameter *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPStreamResetResponseParameter);

SCTPStreamResetResponseParameter::SCTPStreamResetResponseParameter(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    this->srResSn_var = 0;
    this->result_var = 0;
    this->sendersNextTsn_var = 0;
    this->receiversNextTsn_var = 0;
}

SCTPStreamResetResponseParameter::SCTPStreamResetResponseParameter(const SCTPStreamResetResponseParameter& other) : ::SCTPParameter(other)
{
    copy(other);
}

SCTPStreamResetResponseParameter::~SCTPStreamResetResponseParameter()
{
}

SCTPStreamResetResponseParameter& SCTPStreamResetResponseParameter::operator=(const SCTPStreamResetResponseParameter& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPStreamResetResponseParameter::copy(const SCTPStreamResetResponseParameter& other)
{
    this->srResSn_var = other.srResSn_var;
    this->result_var = other.result_var;
    this->sendersNextTsn_var = other.sendersNextTsn_var;
    this->receiversNextTsn_var = other.receiversNextTsn_var;
}

void SCTPStreamResetResponseParameter::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    doPacking(b,this->srResSn_var);
    doPacking(b,this->result_var);
    doPacking(b,this->sendersNextTsn_var);
    doPacking(b,this->receiversNextTsn_var);
}

void SCTPStreamResetResponseParameter::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    doUnpacking(b,this->srResSn_var);
    doUnpacking(b,this->result_var);
    doUnpacking(b,this->sendersNextTsn_var);
    doUnpacking(b,this->receiversNextTsn_var);
}

uint32 SCTPStreamResetResponseParameter::getSrResSn() const
{
    return srResSn_var;
}

void SCTPStreamResetResponseParameter::setSrResSn(uint32 srResSn)
{
    this->srResSn_var = srResSn;
}

uint32 SCTPStreamResetResponseParameter::getResult() const
{
    return result_var;
}

void SCTPStreamResetResponseParameter::setResult(uint32 result)
{
    this->result_var = result;
}

uint32 SCTPStreamResetResponseParameter::getSendersNextTsn() const
{
    return sendersNextTsn_var;
}

void SCTPStreamResetResponseParameter::setSendersNextTsn(uint32 sendersNextTsn)
{
    this->sendersNextTsn_var = sendersNextTsn;
}

uint32 SCTPStreamResetResponseParameter::getReceiversNextTsn() const
{
    return receiversNextTsn_var;
}

void SCTPStreamResetResponseParameter::setReceiversNextTsn(uint32 receiversNextTsn)
{
    this->receiversNextTsn_var = receiversNextTsn;
}

class SCTPStreamResetResponseParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPStreamResetResponseParameterDescriptor();
    virtual ~SCTPStreamResetResponseParameterDescriptor();

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

Register_ClassDescriptor(SCTPStreamResetResponseParameterDescriptor);

SCTPStreamResetResponseParameterDescriptor::SCTPStreamResetResponseParameterDescriptor() : cClassDescriptor("SCTPStreamResetResponseParameter", "SCTPParameter")
{
}

SCTPStreamResetResponseParameterDescriptor::~SCTPStreamResetResponseParameterDescriptor()
{
}

bool SCTPStreamResetResponseParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPStreamResetResponseParameter *>(obj)!=NULL;
}

const char *SCTPStreamResetResponseParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPStreamResetResponseParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SCTPStreamResetResponseParameterDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPStreamResetResponseParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srResSn",
        "result",
        "sendersNextTsn",
        "receiversNextTsn",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SCTPStreamResetResponseParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srResSn")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "result")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sendersNextTsn")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "receiversNextTsn")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPStreamResetResponseParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "uint32",
        "uint32",
        "uint32",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPStreamResetResponseParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPStreamResetResponseParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStreamResetResponseParameter *pp = (SCTPStreamResetResponseParameter *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPStreamResetResponseParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStreamResetResponseParameter *pp = (SCTPStreamResetResponseParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSrResSn());
        case 1: return ulong2string(pp->getResult());
        case 2: return ulong2string(pp->getSendersNextTsn());
        case 3: return ulong2string(pp->getReceiversNextTsn());
        default: return "";
    }
}

bool SCTPStreamResetResponseParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStreamResetResponseParameter *pp = (SCTPStreamResetResponseParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setSrResSn(string2ulong(value)); return true;
        case 1: pp->setResult(string2ulong(value)); return true;
        case 2: pp->setSendersNextTsn(string2ulong(value)); return true;
        case 3: pp->setReceiversNextTsn(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPStreamResetResponseParameterDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPStreamResetResponseParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPStreamResetResponseParameter *pp = (SCTPStreamResetResponseParameter *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPResetTimer);

SCTPResetTimer::SCTPResetTimer(const char *name, int kind) : ::cPacket(name,kind)
{
    this->inSN_var = 0;
    this->inAcked_var = 0;
    this->outSN_var = 0;
    this->outAcked_var = 0;
}

SCTPResetTimer::SCTPResetTimer(const SCTPResetTimer& other) : ::cPacket(other)
{
    copy(other);
}

SCTPResetTimer::~SCTPResetTimer()
{
}

SCTPResetTimer& SCTPResetTimer::operator=(const SCTPResetTimer& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SCTPResetTimer::copy(const SCTPResetTimer& other)
{
    this->inSN_var = other.inSN_var;
    this->inAcked_var = other.inAcked_var;
    this->outSN_var = other.outSN_var;
    this->outAcked_var = other.outAcked_var;
}

void SCTPResetTimer::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->inSN_var);
    doPacking(b,this->inAcked_var);
    doPacking(b,this->outSN_var);
    doPacking(b,this->outAcked_var);
}

void SCTPResetTimer::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->inSN_var);
    doUnpacking(b,this->inAcked_var);
    doUnpacking(b,this->outSN_var);
    doUnpacking(b,this->outAcked_var);
}

uint32 SCTPResetTimer::getInSN() const
{
    return inSN_var;
}

void SCTPResetTimer::setInSN(uint32 inSN)
{
    this->inSN_var = inSN;
}

bool SCTPResetTimer::getInAcked() const
{
    return inAcked_var;
}

void SCTPResetTimer::setInAcked(bool inAcked)
{
    this->inAcked_var = inAcked;
}

uint32 SCTPResetTimer::getOutSN() const
{
    return outSN_var;
}

void SCTPResetTimer::setOutSN(uint32 outSN)
{
    this->outSN_var = outSN;
}

bool SCTPResetTimer::getOutAcked() const
{
    return outAcked_var;
}

void SCTPResetTimer::setOutAcked(bool outAcked)
{
    this->outAcked_var = outAcked;
}

class SCTPResetTimerDescriptor : public cClassDescriptor
{
  public:
    SCTPResetTimerDescriptor();
    virtual ~SCTPResetTimerDescriptor();

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

Register_ClassDescriptor(SCTPResetTimerDescriptor);

SCTPResetTimerDescriptor::SCTPResetTimerDescriptor() : cClassDescriptor("SCTPResetTimer", "cPacket")
{
}

SCTPResetTimerDescriptor::~SCTPResetTimerDescriptor()
{
}

bool SCTPResetTimerDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPResetTimer *>(obj)!=NULL;
}

const char *SCTPResetTimerDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPResetTimerDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SCTPResetTimerDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPResetTimerDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "inSN",
        "inAcked",
        "outSN",
        "outAcked",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SCTPResetTimerDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "inSN")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "inAcked")==0) return base+1;
    if (fieldName[0]=='o' && strcmp(fieldName, "outSN")==0) return base+2;
    if (fieldName[0]=='o' && strcmp(fieldName, "outAcked")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPResetTimerDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "bool",
        "uint32",
        "bool",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPResetTimerDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPResetTimerDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetTimer *pp = (SCTPResetTimer *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPResetTimerDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetTimer *pp = (SCTPResetTimer *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getInSN());
        case 1: return bool2string(pp->getInAcked());
        case 2: return ulong2string(pp->getOutSN());
        case 3: return bool2string(pp->getOutAcked());
        default: return "";
    }
}

bool SCTPResetTimerDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetTimer *pp = (SCTPResetTimer *)object; (void)pp;
    switch (field) {
        case 0: pp->setInSN(string2ulong(value)); return true;
        case 1: pp->setInAcked(string2bool(value)); return true;
        case 2: pp->setOutSN(string2ulong(value)); return true;
        case 3: pp->setOutAcked(string2bool(value)); return true;
        default: return false;
    }
}

const char *SCTPResetTimerDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPResetTimerDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPResetTimer *pp = (SCTPResetTimer *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPAuthenticationChunk);

SCTPAuthenticationChunk::SCTPAuthenticationChunk(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->sharedKey_var = 0;
    this->hMacIdentifier_var = 0;
    this->hMacOk_var = 0;
    HMAC_arraysize = 0;
    this->HMAC_var = 0;
}

SCTPAuthenticationChunk::SCTPAuthenticationChunk(const SCTPAuthenticationChunk& other) : ::SCTPChunk(other)
{
    HMAC_arraysize = 0;
    this->HMAC_var = 0;
    copy(other);
}

SCTPAuthenticationChunk::~SCTPAuthenticationChunk()
{
    delete [] HMAC_var;
}

SCTPAuthenticationChunk& SCTPAuthenticationChunk::operator=(const SCTPAuthenticationChunk& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPAuthenticationChunk::copy(const SCTPAuthenticationChunk& other)
{
    this->sharedKey_var = other.sharedKey_var;
    this->hMacIdentifier_var = other.hMacIdentifier_var;
    this->hMacOk_var = other.hMacOk_var;
    delete [] this->HMAC_var;
    this->HMAC_var = (other.HMAC_arraysize==0) ? NULL : new uint32[other.HMAC_arraysize];
    HMAC_arraysize = other.HMAC_arraysize;
    for (unsigned int i=0; i<HMAC_arraysize; i++)
        this->HMAC_var[i] = other.HMAC_var[i];
}

void SCTPAuthenticationChunk::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->sharedKey_var);
    doPacking(b,this->hMacIdentifier_var);
    doPacking(b,this->hMacOk_var);
    b->pack(HMAC_arraysize);
    doPacking(b,this->HMAC_var,HMAC_arraysize);
}

void SCTPAuthenticationChunk::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->sharedKey_var);
    doUnpacking(b,this->hMacIdentifier_var);
    doUnpacking(b,this->hMacOk_var);
    delete [] this->HMAC_var;
    b->unpack(HMAC_arraysize);
    if (HMAC_arraysize==0) {
        this->HMAC_var = 0;
    } else {
        this->HMAC_var = new uint32[HMAC_arraysize];
        doUnpacking(b,this->HMAC_var,HMAC_arraysize);
    }
}

uint16 SCTPAuthenticationChunk::getSharedKey() const
{
    return sharedKey_var;
}

void SCTPAuthenticationChunk::setSharedKey(uint16 sharedKey)
{
    this->sharedKey_var = sharedKey;
}

uint16 SCTPAuthenticationChunk::getHMacIdentifier() const
{
    return hMacIdentifier_var;
}

void SCTPAuthenticationChunk::setHMacIdentifier(uint16 hMacIdentifier)
{
    this->hMacIdentifier_var = hMacIdentifier;
}

bool SCTPAuthenticationChunk::getHMacOk() const
{
    return hMacOk_var;
}

void SCTPAuthenticationChunk::setHMacOk(bool hMacOk)
{
    this->hMacOk_var = hMacOk;
}

void SCTPAuthenticationChunk::setHMACArraySize(unsigned int size)
{
    uint32 *HMAC_var2 = (size==0) ? NULL : new uint32[size];
    unsigned int sz = HMAC_arraysize < size ? HMAC_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        HMAC_var2[i] = this->HMAC_var[i];
    for (unsigned int i=sz; i<size; i++)
        HMAC_var2[i] = 0;
    HMAC_arraysize = size;
    delete [] this->HMAC_var;
    this->HMAC_var = HMAC_var2;
}

unsigned int SCTPAuthenticationChunk::getHMACArraySize() const
{
    return HMAC_arraysize;
}

uint32 SCTPAuthenticationChunk::getHMAC(unsigned int k) const
{
    if (k>=HMAC_arraysize) throw cRuntimeError("Array of size %d indexed by %d", HMAC_arraysize, k);
    return HMAC_var[k];
}

void SCTPAuthenticationChunk::setHMAC(unsigned int k, uint32 HMAC)
{
    if (k>=HMAC_arraysize) throw cRuntimeError("Array of size %d indexed by %d", HMAC_arraysize, k);
    this->HMAC_var[k] = HMAC;
}

class SCTPAuthenticationChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPAuthenticationChunkDescriptor();
    virtual ~SCTPAuthenticationChunkDescriptor();

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

Register_ClassDescriptor(SCTPAuthenticationChunkDescriptor);

SCTPAuthenticationChunkDescriptor::SCTPAuthenticationChunkDescriptor() : cClassDescriptor("SCTPAuthenticationChunk", "SCTPChunk")
{
}

SCTPAuthenticationChunkDescriptor::~SCTPAuthenticationChunkDescriptor()
{
}

bool SCTPAuthenticationChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPAuthenticationChunk *>(obj)!=NULL;
}

const char *SCTPAuthenticationChunkDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPAuthenticationChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SCTPAuthenticationChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *SCTPAuthenticationChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sharedKey",
        "hMacIdentifier",
        "hMacOk",
        "HMAC",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SCTPAuthenticationChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sharedKey")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "hMacIdentifier")==0) return base+1;
    if (fieldName[0]=='h' && strcmp(fieldName, "hMacOk")==0) return base+2;
    if (fieldName[0]=='H' && strcmp(fieldName, "HMAC")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPAuthenticationChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16",
        "uint16",
        "bool",
        "uint32",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPAuthenticationChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPAuthenticationChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAuthenticationChunk *pp = (SCTPAuthenticationChunk *)object; (void)pp;
    switch (field) {
        case 3: return pp->getHMACArraySize();
        default: return 0;
    }
}

std::string SCTPAuthenticationChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAuthenticationChunk *pp = (SCTPAuthenticationChunk *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSharedKey());
        case 1: return ulong2string(pp->getHMacIdentifier());
        case 2: return bool2string(pp->getHMacOk());
        case 3: return ulong2string(pp->getHMAC(i));
        default: return "";
    }
}

bool SCTPAuthenticationChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAuthenticationChunk *pp = (SCTPAuthenticationChunk *)object; (void)pp;
    switch (field) {
        case 0: pp->setSharedKey(string2ulong(value)); return true;
        case 1: pp->setHMacIdentifier(string2ulong(value)); return true;
        case 2: pp->setHMacOk(string2bool(value)); return true;
        case 3: pp->setHMAC(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPAuthenticationChunkDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPAuthenticationChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAuthenticationChunk *pp = (SCTPAuthenticationChunk *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

SCTPAsconfChunk_Base::SCTPAsconfChunk_Base(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->serialNumber_var = 0;
    this->peerVTag_var = 0;
}

SCTPAsconfChunk_Base::SCTPAsconfChunk_Base(const SCTPAsconfChunk_Base& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPAsconfChunk_Base::~SCTPAsconfChunk_Base()
{
}

SCTPAsconfChunk_Base& SCTPAsconfChunk_Base::operator=(const SCTPAsconfChunk_Base& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPAsconfChunk_Base::copy(const SCTPAsconfChunk_Base& other)
{
    this->serialNumber_var = other.serialNumber_var;
    this->addressParam_var = other.addressParam_var;
    this->peerVTag_var = other.peerVTag_var;
}

void SCTPAsconfChunk_Base::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->serialNumber_var);
    doPacking(b,this->addressParam_var);
    doPacking(b,this->peerVTag_var);
    // field asconfParams is abstract -- please do packing in customized class
}

void SCTPAsconfChunk_Base::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->serialNumber_var);
    doUnpacking(b,this->addressParam_var);
    doUnpacking(b,this->peerVTag_var);
    // field asconfParams is abstract -- please do unpacking in customized class
}

uint32 SCTPAsconfChunk_Base::getSerialNumber() const
{
    return serialNumber_var;
}

void SCTPAsconfChunk_Base::setSerialNumber(uint32 serialNumber)
{
    this->serialNumber_var = serialNumber;
}

IPvXAddress& SCTPAsconfChunk_Base::getAddressParam()
{
    return addressParam_var;
}

void SCTPAsconfChunk_Base::setAddressParam(const IPvXAddress& addressParam)
{
    this->addressParam_var = addressParam;
}

uint32 SCTPAsconfChunk_Base::getPeerVTag() const
{
    return peerVTag_var;
}

void SCTPAsconfChunk_Base::setPeerVTag(uint32 peerVTag)
{
    this->peerVTag_var = peerVTag;
}

class SCTPAsconfChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPAsconfChunkDescriptor();
    virtual ~SCTPAsconfChunkDescriptor();

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

Register_ClassDescriptor(SCTPAsconfChunkDescriptor);

SCTPAsconfChunkDescriptor::SCTPAsconfChunkDescriptor() : cClassDescriptor("SCTPAsconfChunk", "SCTPChunk")
{
}

SCTPAsconfChunkDescriptor::~SCTPAsconfChunkDescriptor()
{
}

bool SCTPAsconfChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPAsconfChunk_Base *>(obj)!=NULL;
}

const char *SCTPAsconfChunkDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPAsconfChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int SCTPAsconfChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *SCTPAsconfChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "serialNumber",
        "addressParam",
        "peerVTag",
        "asconfParams",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int SCTPAsconfChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "serialNumber")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addressParam")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "peerVTag")==0) return base+2;
    if (fieldName[0]=='a' && strcmp(fieldName, "asconfParams")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPAsconfChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "IPvXAddress",
        "uint32",
        "cPacketPtr",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPAsconfChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPAsconfChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAsconfChunk_Base *pp = (SCTPAsconfChunk_Base *)object; (void)pp;
    switch (field) {
        case 3: return pp->getAsconfParamsArraySize();
        default: return 0;
    }
}

std::string SCTPAsconfChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAsconfChunk_Base *pp = (SCTPAsconfChunk_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSerialNumber());
        case 1: {std::stringstream out; out << pp->getAddressParam(); return out.str();}
        case 2: return ulong2string(pp->getPeerVTag());
        case 3: {std::stringstream out; out << pp->getAsconfParams(i); return out.str();}
        default: return "";
    }
}

bool SCTPAsconfChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAsconfChunk_Base *pp = (SCTPAsconfChunk_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSerialNumber(string2ulong(value)); return true;
        case 2: pp->setPeerVTag(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPAsconfChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPvXAddress));
        case 3: return opp_typename(typeid(cPacketPtr));
        default: return NULL;
    };
}

void *SCTPAsconfChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAsconfChunk_Base *pp = (SCTPAsconfChunk_Base *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getAddressParam()); break;
        case 3: return (void *)(&pp->getAsconfParams(i)); break;
        default: return NULL;
    }
}

SCTPAsconfAckChunk_Base::SCTPAsconfAckChunk_Base(const char *name, int kind) : ::SCTPChunk(name,kind)
{
    this->serialNumber_var = 0;
}

SCTPAsconfAckChunk_Base::SCTPAsconfAckChunk_Base(const SCTPAsconfAckChunk_Base& other) : ::SCTPChunk(other)
{
    copy(other);
}

SCTPAsconfAckChunk_Base::~SCTPAsconfAckChunk_Base()
{
}

SCTPAsconfAckChunk_Base& SCTPAsconfAckChunk_Base::operator=(const SCTPAsconfAckChunk_Base& other)
{
    if (this==&other) return *this;
    ::SCTPChunk::operator=(other);
    copy(other);
    return *this;
}

void SCTPAsconfAckChunk_Base::copy(const SCTPAsconfAckChunk_Base& other)
{
    this->serialNumber_var = other.serialNumber_var;
}

void SCTPAsconfAckChunk_Base::parsimPack(cCommBuffer *b)
{
    ::SCTPChunk::parsimPack(b);
    doPacking(b,this->serialNumber_var);
    // field asconfResponse is abstract -- please do packing in customized class
}

void SCTPAsconfAckChunk_Base::parsimUnpack(cCommBuffer *b)
{
    ::SCTPChunk::parsimUnpack(b);
    doUnpacking(b,this->serialNumber_var);
    // field asconfResponse is abstract -- please do unpacking in customized class
}

uint32 SCTPAsconfAckChunk_Base::getSerialNumber() const
{
    return serialNumber_var;
}

void SCTPAsconfAckChunk_Base::setSerialNumber(uint32 serialNumber)
{
    this->serialNumber_var = serialNumber;
}

class SCTPAsconfAckChunkDescriptor : public cClassDescriptor
{
  public:
    SCTPAsconfAckChunkDescriptor();
    virtual ~SCTPAsconfAckChunkDescriptor();

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

Register_ClassDescriptor(SCTPAsconfAckChunkDescriptor);

SCTPAsconfAckChunkDescriptor::SCTPAsconfAckChunkDescriptor() : cClassDescriptor("SCTPAsconfAckChunk", "SCTPChunk")
{
}

SCTPAsconfAckChunkDescriptor::~SCTPAsconfAckChunkDescriptor()
{
}

bool SCTPAsconfAckChunkDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPAsconfAckChunk_Base *>(obj)!=NULL;
}

const char *SCTPAsconfAckChunkDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPAsconfAckChunkDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SCTPAsconfAckChunkDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPAsconfAckChunkDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "serialNumber",
        "asconfResponse",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int SCTPAsconfAckChunkDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "serialNumber")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "asconfResponse")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPAsconfAckChunkDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "cPacketPtr",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPAsconfAckChunkDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPAsconfAckChunkDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAsconfAckChunk_Base *pp = (SCTPAsconfAckChunk_Base *)object; (void)pp;
    switch (field) {
        case 1: return pp->getAsconfResponseArraySize();
        default: return 0;
    }
}

std::string SCTPAsconfAckChunkDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAsconfAckChunk_Base *pp = (SCTPAsconfAckChunk_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSerialNumber());
        case 1: {std::stringstream out; out << pp->getAsconfResponse(i); return out.str();}
        default: return "";
    }
}

bool SCTPAsconfAckChunkDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAsconfAckChunk_Base *pp = (SCTPAsconfAckChunk_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSerialNumber(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPAsconfAckChunkDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(cPacketPtr));
        default: return NULL;
    };
}

void *SCTPAsconfAckChunkDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAsconfAckChunk_Base *pp = (SCTPAsconfAckChunk_Base *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getAsconfResponse(i)); break;
        default: return NULL;
    }
}

Register_Class(SCTPAddIPParameter);

SCTPAddIPParameter::SCTPAddIPParameter(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    this->requestCorrelationId_var = 0;
}

SCTPAddIPParameter::SCTPAddIPParameter(const SCTPAddIPParameter& other) : ::SCTPParameter(other)
{
    copy(other);
}

SCTPAddIPParameter::~SCTPAddIPParameter()
{
}

SCTPAddIPParameter& SCTPAddIPParameter::operator=(const SCTPAddIPParameter& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPAddIPParameter::copy(const SCTPAddIPParameter& other)
{
    this->requestCorrelationId_var = other.requestCorrelationId_var;
    this->addressParam_var = other.addressParam_var;
}

void SCTPAddIPParameter::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    doPacking(b,this->requestCorrelationId_var);
    doPacking(b,this->addressParam_var);
}

void SCTPAddIPParameter::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    doUnpacking(b,this->requestCorrelationId_var);
    doUnpacking(b,this->addressParam_var);
}

uint32 SCTPAddIPParameter::getRequestCorrelationId() const
{
    return requestCorrelationId_var;
}

void SCTPAddIPParameter::setRequestCorrelationId(uint32 requestCorrelationId)
{
    this->requestCorrelationId_var = requestCorrelationId;
}

IPvXAddress& SCTPAddIPParameter::getAddressParam()
{
    return addressParam_var;
}

void SCTPAddIPParameter::setAddressParam(const IPvXAddress& addressParam)
{
    this->addressParam_var = addressParam;
}

class SCTPAddIPParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPAddIPParameterDescriptor();
    virtual ~SCTPAddIPParameterDescriptor();

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

Register_ClassDescriptor(SCTPAddIPParameterDescriptor);

SCTPAddIPParameterDescriptor::SCTPAddIPParameterDescriptor() : cClassDescriptor("SCTPAddIPParameter", "SCTPParameter")
{
}

SCTPAddIPParameterDescriptor::~SCTPAddIPParameterDescriptor()
{
}

bool SCTPAddIPParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPAddIPParameter *>(obj)!=NULL;
}

const char *SCTPAddIPParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPAddIPParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SCTPAddIPParameterDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPAddIPParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "requestCorrelationId",
        "addressParam",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int SCTPAddIPParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "requestCorrelationId")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addressParam")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPAddIPParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "IPvXAddress",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPAddIPParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPAddIPParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAddIPParameter *pp = (SCTPAddIPParameter *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPAddIPParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAddIPParameter *pp = (SCTPAddIPParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getRequestCorrelationId());
        case 1: {std::stringstream out; out << pp->getAddressParam(); return out.str();}
        default: return "";
    }
}

bool SCTPAddIPParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAddIPParameter *pp = (SCTPAddIPParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setRequestCorrelationId(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPAddIPParameterDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *SCTPAddIPParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPAddIPParameter *pp = (SCTPAddIPParameter *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getAddressParam()); break;
        default: return NULL;
    }
}

Register_Class(SCTPDeleteIPParameter);

SCTPDeleteIPParameter::SCTPDeleteIPParameter(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    this->requestCorrelationId_var = 0;
}

SCTPDeleteIPParameter::SCTPDeleteIPParameter(const SCTPDeleteIPParameter& other) : ::SCTPParameter(other)
{
    copy(other);
}

SCTPDeleteIPParameter::~SCTPDeleteIPParameter()
{
}

SCTPDeleteIPParameter& SCTPDeleteIPParameter::operator=(const SCTPDeleteIPParameter& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPDeleteIPParameter::copy(const SCTPDeleteIPParameter& other)
{
    this->requestCorrelationId_var = other.requestCorrelationId_var;
    this->addressParam_var = other.addressParam_var;
}

void SCTPDeleteIPParameter::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    doPacking(b,this->requestCorrelationId_var);
    doPacking(b,this->addressParam_var);
}

void SCTPDeleteIPParameter::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    doUnpacking(b,this->requestCorrelationId_var);
    doUnpacking(b,this->addressParam_var);
}

uint32 SCTPDeleteIPParameter::getRequestCorrelationId() const
{
    return requestCorrelationId_var;
}

void SCTPDeleteIPParameter::setRequestCorrelationId(uint32 requestCorrelationId)
{
    this->requestCorrelationId_var = requestCorrelationId;
}

IPvXAddress& SCTPDeleteIPParameter::getAddressParam()
{
    return addressParam_var;
}

void SCTPDeleteIPParameter::setAddressParam(const IPvXAddress& addressParam)
{
    this->addressParam_var = addressParam;
}

class SCTPDeleteIPParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPDeleteIPParameterDescriptor();
    virtual ~SCTPDeleteIPParameterDescriptor();

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

Register_ClassDescriptor(SCTPDeleteIPParameterDescriptor);

SCTPDeleteIPParameterDescriptor::SCTPDeleteIPParameterDescriptor() : cClassDescriptor("SCTPDeleteIPParameter", "SCTPParameter")
{
}

SCTPDeleteIPParameterDescriptor::~SCTPDeleteIPParameterDescriptor()
{
}

bool SCTPDeleteIPParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPDeleteIPParameter *>(obj)!=NULL;
}

const char *SCTPDeleteIPParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPDeleteIPParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SCTPDeleteIPParameterDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPDeleteIPParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "requestCorrelationId",
        "addressParam",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int SCTPDeleteIPParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "requestCorrelationId")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addressParam")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPDeleteIPParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "IPvXAddress",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPDeleteIPParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPDeleteIPParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDeleteIPParameter *pp = (SCTPDeleteIPParameter *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPDeleteIPParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDeleteIPParameter *pp = (SCTPDeleteIPParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getRequestCorrelationId());
        case 1: {std::stringstream out; out << pp->getAddressParam(); return out.str();}
        default: return "";
    }
}

bool SCTPDeleteIPParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDeleteIPParameter *pp = (SCTPDeleteIPParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setRequestCorrelationId(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPDeleteIPParameterDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *SCTPDeleteIPParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPDeleteIPParameter *pp = (SCTPDeleteIPParameter *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getAddressParam()); break;
        default: return NULL;
    }
}

Register_Class(SCTPSetPrimaryIPParameter);

SCTPSetPrimaryIPParameter::SCTPSetPrimaryIPParameter(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    this->requestCorrelationId_var = 0;
}

SCTPSetPrimaryIPParameter::SCTPSetPrimaryIPParameter(const SCTPSetPrimaryIPParameter& other) : ::SCTPParameter(other)
{
    copy(other);
}

SCTPSetPrimaryIPParameter::~SCTPSetPrimaryIPParameter()
{
}

SCTPSetPrimaryIPParameter& SCTPSetPrimaryIPParameter::operator=(const SCTPSetPrimaryIPParameter& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPSetPrimaryIPParameter::copy(const SCTPSetPrimaryIPParameter& other)
{
    this->requestCorrelationId_var = other.requestCorrelationId_var;
    this->addressParam_var = other.addressParam_var;
}

void SCTPSetPrimaryIPParameter::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    doPacking(b,this->requestCorrelationId_var);
    doPacking(b,this->addressParam_var);
}

void SCTPSetPrimaryIPParameter::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    doUnpacking(b,this->requestCorrelationId_var);
    doUnpacking(b,this->addressParam_var);
}

uint32 SCTPSetPrimaryIPParameter::getRequestCorrelationId() const
{
    return requestCorrelationId_var;
}

void SCTPSetPrimaryIPParameter::setRequestCorrelationId(uint32 requestCorrelationId)
{
    this->requestCorrelationId_var = requestCorrelationId;
}

IPvXAddress& SCTPSetPrimaryIPParameter::getAddressParam()
{
    return addressParam_var;
}

void SCTPSetPrimaryIPParameter::setAddressParam(const IPvXAddress& addressParam)
{
    this->addressParam_var = addressParam;
}

class SCTPSetPrimaryIPParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPSetPrimaryIPParameterDescriptor();
    virtual ~SCTPSetPrimaryIPParameterDescriptor();

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

Register_ClassDescriptor(SCTPSetPrimaryIPParameterDescriptor);

SCTPSetPrimaryIPParameterDescriptor::SCTPSetPrimaryIPParameterDescriptor() : cClassDescriptor("SCTPSetPrimaryIPParameter", "SCTPParameter")
{
}

SCTPSetPrimaryIPParameterDescriptor::~SCTPSetPrimaryIPParameterDescriptor()
{
}

bool SCTPSetPrimaryIPParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPSetPrimaryIPParameter *>(obj)!=NULL;
}

const char *SCTPSetPrimaryIPParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPSetPrimaryIPParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SCTPSetPrimaryIPParameterDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPSetPrimaryIPParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "requestCorrelationId",
        "addressParam",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int SCTPSetPrimaryIPParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "requestCorrelationId")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addressParam")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPSetPrimaryIPParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "IPvXAddress",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPSetPrimaryIPParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPSetPrimaryIPParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSetPrimaryIPParameter *pp = (SCTPSetPrimaryIPParameter *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPSetPrimaryIPParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSetPrimaryIPParameter *pp = (SCTPSetPrimaryIPParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getRequestCorrelationId());
        case 1: {std::stringstream out; out << pp->getAddressParam(); return out.str();}
        default: return "";
    }
}

bool SCTPSetPrimaryIPParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSetPrimaryIPParameter *pp = (SCTPSetPrimaryIPParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setRequestCorrelationId(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPSetPrimaryIPParameterDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *SCTPSetPrimaryIPParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSetPrimaryIPParameter *pp = (SCTPSetPrimaryIPParameter *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getAddressParam()); break;
        default: return NULL;
    }
}

Register_Class(SCTPSupportedExtensionsParameter);

SCTPSupportedExtensionsParameter::SCTPSupportedExtensionsParameter(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    chunkTypes_arraysize = 0;
    this->chunkTypes_var = 0;
}

SCTPSupportedExtensionsParameter::SCTPSupportedExtensionsParameter(const SCTPSupportedExtensionsParameter& other) : ::SCTPParameter(other)
{
    chunkTypes_arraysize = 0;
    this->chunkTypes_var = 0;
    copy(other);
}

SCTPSupportedExtensionsParameter::~SCTPSupportedExtensionsParameter()
{
    delete [] chunkTypes_var;
}

SCTPSupportedExtensionsParameter& SCTPSupportedExtensionsParameter::operator=(const SCTPSupportedExtensionsParameter& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPSupportedExtensionsParameter::copy(const SCTPSupportedExtensionsParameter& other)
{
    delete [] this->chunkTypes_var;
    this->chunkTypes_var = (other.chunkTypes_arraysize==0) ? NULL : new uint16[other.chunkTypes_arraysize];
    chunkTypes_arraysize = other.chunkTypes_arraysize;
    for (unsigned int i=0; i<chunkTypes_arraysize; i++)
        this->chunkTypes_var[i] = other.chunkTypes_var[i];
}

void SCTPSupportedExtensionsParameter::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    b->pack(chunkTypes_arraysize);
    doPacking(b,this->chunkTypes_var,chunkTypes_arraysize);
}

void SCTPSupportedExtensionsParameter::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    delete [] this->chunkTypes_var;
    b->unpack(chunkTypes_arraysize);
    if (chunkTypes_arraysize==0) {
        this->chunkTypes_var = 0;
    } else {
        this->chunkTypes_var = new uint16[chunkTypes_arraysize];
        doUnpacking(b,this->chunkTypes_var,chunkTypes_arraysize);
    }
}

void SCTPSupportedExtensionsParameter::setChunkTypesArraySize(unsigned int size)
{
    uint16 *chunkTypes_var2 = (size==0) ? NULL : new uint16[size];
    unsigned int sz = chunkTypes_arraysize < size ? chunkTypes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        chunkTypes_var2[i] = this->chunkTypes_var[i];
    for (unsigned int i=sz; i<size; i++)
        chunkTypes_var2[i] = 0;
    chunkTypes_arraysize = size;
    delete [] this->chunkTypes_var;
    this->chunkTypes_var = chunkTypes_var2;
}

unsigned int SCTPSupportedExtensionsParameter::getChunkTypesArraySize() const
{
    return chunkTypes_arraysize;
}

uint16 SCTPSupportedExtensionsParameter::getChunkTypes(unsigned int k) const
{
    if (k>=chunkTypes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", chunkTypes_arraysize, k);
    return chunkTypes_var[k];
}

void SCTPSupportedExtensionsParameter::setChunkTypes(unsigned int k, uint16 chunkTypes)
{
    if (k>=chunkTypes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", chunkTypes_arraysize, k);
    this->chunkTypes_var[k] = chunkTypes;
}

class SCTPSupportedExtensionsParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPSupportedExtensionsParameterDescriptor();
    virtual ~SCTPSupportedExtensionsParameterDescriptor();

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

Register_ClassDescriptor(SCTPSupportedExtensionsParameterDescriptor);

SCTPSupportedExtensionsParameterDescriptor::SCTPSupportedExtensionsParameterDescriptor() : cClassDescriptor("SCTPSupportedExtensionsParameter", "SCTPParameter")
{
}

SCTPSupportedExtensionsParameterDescriptor::~SCTPSupportedExtensionsParameterDescriptor()
{
}

bool SCTPSupportedExtensionsParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPSupportedExtensionsParameter *>(obj)!=NULL;
}

const char *SCTPSupportedExtensionsParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPSupportedExtensionsParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPSupportedExtensionsParameterDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *SCTPSupportedExtensionsParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "chunkTypes",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPSupportedExtensionsParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "chunkTypes")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPSupportedExtensionsParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPSupportedExtensionsParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPSupportedExtensionsParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSupportedExtensionsParameter *pp = (SCTPSupportedExtensionsParameter *)object; (void)pp;
    switch (field) {
        case 0: return pp->getChunkTypesArraySize();
        default: return 0;
    }
}

std::string SCTPSupportedExtensionsParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSupportedExtensionsParameter *pp = (SCTPSupportedExtensionsParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getChunkTypes(i));
        default: return "";
    }
}

bool SCTPSupportedExtensionsParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSupportedExtensionsParameter *pp = (SCTPSupportedExtensionsParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setChunkTypes(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPSupportedExtensionsParameterDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPSupportedExtensionsParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSupportedExtensionsParameter *pp = (SCTPSupportedExtensionsParameter *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPErrorCauseParameter);

SCTPErrorCauseParameter::SCTPErrorCauseParameter(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    this->responseCorrelationId_var = 0;
    this->errorCauseType_var = 0;
}

SCTPErrorCauseParameter::SCTPErrorCauseParameter(const SCTPErrorCauseParameter& other) : ::SCTPParameter(other)
{
    copy(other);
}

SCTPErrorCauseParameter::~SCTPErrorCauseParameter()
{
}

SCTPErrorCauseParameter& SCTPErrorCauseParameter::operator=(const SCTPErrorCauseParameter& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPErrorCauseParameter::copy(const SCTPErrorCauseParameter& other)
{
    this->responseCorrelationId_var = other.responseCorrelationId_var;
    this->errorCauseType_var = other.errorCauseType_var;
}

void SCTPErrorCauseParameter::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    doPacking(b,this->responseCorrelationId_var);
    doPacking(b,this->errorCauseType_var);
}

void SCTPErrorCauseParameter::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    doUnpacking(b,this->responseCorrelationId_var);
    doUnpacking(b,this->errorCauseType_var);
}

uint32 SCTPErrorCauseParameter::getResponseCorrelationId() const
{
    return responseCorrelationId_var;
}

void SCTPErrorCauseParameter::setResponseCorrelationId(uint32 responseCorrelationId)
{
    this->responseCorrelationId_var = responseCorrelationId;
}

uint32 SCTPErrorCauseParameter::getErrorCauseType() const
{
    return errorCauseType_var;
}

void SCTPErrorCauseParameter::setErrorCauseType(uint32 errorCauseType)
{
    this->errorCauseType_var = errorCauseType;
}

class SCTPErrorCauseParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPErrorCauseParameterDescriptor();
    virtual ~SCTPErrorCauseParameterDescriptor();

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

Register_ClassDescriptor(SCTPErrorCauseParameterDescriptor);

SCTPErrorCauseParameterDescriptor::SCTPErrorCauseParameterDescriptor() : cClassDescriptor("SCTPErrorCauseParameter", "SCTPParameter")
{
}

SCTPErrorCauseParameterDescriptor::~SCTPErrorCauseParameterDescriptor()
{
}

bool SCTPErrorCauseParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPErrorCauseParameter *>(obj)!=NULL;
}

const char *SCTPErrorCauseParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPErrorCauseParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SCTPErrorCauseParameterDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *SCTPErrorCauseParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "responseCorrelationId",
        "errorCauseType",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int SCTPErrorCauseParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "responseCorrelationId")==0) return base+0;
    if (fieldName[0]=='e' && strcmp(fieldName, "errorCauseType")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPErrorCauseParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "uint32",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPErrorCauseParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPErrorCauseParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorCauseParameter *pp = (SCTPErrorCauseParameter *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPErrorCauseParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorCauseParameter *pp = (SCTPErrorCauseParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getResponseCorrelationId());
        case 1: return ulong2string(pp->getErrorCauseType());
        default: return "";
    }
}

bool SCTPErrorCauseParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorCauseParameter *pp = (SCTPErrorCauseParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setResponseCorrelationId(string2ulong(value)); return true;
        case 1: pp->setErrorCauseType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPErrorCauseParameterDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPErrorCauseParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPErrorCauseParameter *pp = (SCTPErrorCauseParameter *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPSimpleErrorCauseParameter);

SCTPSimpleErrorCauseParameter::SCTPSimpleErrorCauseParameter(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    this->value_var = 0;
}

SCTPSimpleErrorCauseParameter::SCTPSimpleErrorCauseParameter(const SCTPSimpleErrorCauseParameter& other) : ::SCTPParameter(other)
{
    copy(other);
}

SCTPSimpleErrorCauseParameter::~SCTPSimpleErrorCauseParameter()
{
}

SCTPSimpleErrorCauseParameter& SCTPSimpleErrorCauseParameter::operator=(const SCTPSimpleErrorCauseParameter& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPSimpleErrorCauseParameter::copy(const SCTPSimpleErrorCauseParameter& other)
{
    this->value_var = other.value_var;
}

void SCTPSimpleErrorCauseParameter::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    doPacking(b,this->value_var);
}

void SCTPSimpleErrorCauseParameter::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    doUnpacking(b,this->value_var);
}

uint16 SCTPSimpleErrorCauseParameter::getValue() const
{
    return value_var;
}

void SCTPSimpleErrorCauseParameter::setValue(uint16 value)
{
    this->value_var = value;
}

class SCTPSimpleErrorCauseParameterDescriptor : public cClassDescriptor
{
  public:
    SCTPSimpleErrorCauseParameterDescriptor();
    virtual ~SCTPSimpleErrorCauseParameterDescriptor();

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

Register_ClassDescriptor(SCTPSimpleErrorCauseParameterDescriptor);

SCTPSimpleErrorCauseParameterDescriptor::SCTPSimpleErrorCauseParameterDescriptor() : cClassDescriptor("SCTPSimpleErrorCauseParameter", "SCTPParameter")
{
}

SCTPSimpleErrorCauseParameterDescriptor::~SCTPSimpleErrorCauseParameterDescriptor()
{
}

bool SCTPSimpleErrorCauseParameterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPSimpleErrorCauseParameter *>(obj)!=NULL;
}

const char *SCTPSimpleErrorCauseParameterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPSimpleErrorCauseParameterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPSimpleErrorCauseParameterDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPSimpleErrorCauseParameterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "value",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPSimpleErrorCauseParameterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "value")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPSimpleErrorCauseParameterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPSimpleErrorCauseParameterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPSimpleErrorCauseParameterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSimpleErrorCauseParameter *pp = (SCTPSimpleErrorCauseParameter *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPSimpleErrorCauseParameterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSimpleErrorCauseParameter *pp = (SCTPSimpleErrorCauseParameter *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getValue());
        default: return "";
    }
}

bool SCTPSimpleErrorCauseParameterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSimpleErrorCauseParameter *pp = (SCTPSimpleErrorCauseParameter *)object; (void)pp;
    switch (field) {
        case 0: pp->setValue(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPSimpleErrorCauseParameterDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPSimpleErrorCauseParameterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSimpleErrorCauseParameter *pp = (SCTPSimpleErrorCauseParameter *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(SCTPSuccessIndication);

SCTPSuccessIndication::SCTPSuccessIndication(const char *name, int kind) : ::SCTPParameter(name,kind)
{
    this->responseCorrelationId_var = 0;
}

SCTPSuccessIndication::SCTPSuccessIndication(const SCTPSuccessIndication& other) : ::SCTPParameter(other)
{
    copy(other);
}

SCTPSuccessIndication::~SCTPSuccessIndication()
{
}

SCTPSuccessIndication& SCTPSuccessIndication::operator=(const SCTPSuccessIndication& other)
{
    if (this==&other) return *this;
    ::SCTPParameter::operator=(other);
    copy(other);
    return *this;
}

void SCTPSuccessIndication::copy(const SCTPSuccessIndication& other)
{
    this->responseCorrelationId_var = other.responseCorrelationId_var;
}

void SCTPSuccessIndication::parsimPack(cCommBuffer *b)
{
    ::SCTPParameter::parsimPack(b);
    doPacking(b,this->responseCorrelationId_var);
}

void SCTPSuccessIndication::parsimUnpack(cCommBuffer *b)
{
    ::SCTPParameter::parsimUnpack(b);
    doUnpacking(b,this->responseCorrelationId_var);
}

uint32 SCTPSuccessIndication::getResponseCorrelationId() const
{
    return responseCorrelationId_var;
}

void SCTPSuccessIndication::setResponseCorrelationId(uint32 responseCorrelationId)
{
    this->responseCorrelationId_var = responseCorrelationId;
}

class SCTPSuccessIndicationDescriptor : public cClassDescriptor
{
  public:
    SCTPSuccessIndicationDescriptor();
    virtual ~SCTPSuccessIndicationDescriptor();

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

Register_ClassDescriptor(SCTPSuccessIndicationDescriptor);

SCTPSuccessIndicationDescriptor::SCTPSuccessIndicationDescriptor() : cClassDescriptor("SCTPSuccessIndication", "SCTPParameter")
{
}

SCTPSuccessIndicationDescriptor::~SCTPSuccessIndicationDescriptor()
{
}

bool SCTPSuccessIndicationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SCTPSuccessIndication *>(obj)!=NULL;
}

const char *SCTPSuccessIndicationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SCTPSuccessIndicationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int SCTPSuccessIndicationDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SCTPSuccessIndicationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "responseCorrelationId",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int SCTPSuccessIndicationDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "responseCorrelationId")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SCTPSuccessIndicationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *SCTPSuccessIndicationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SCTPSuccessIndicationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSuccessIndication *pp = (SCTPSuccessIndication *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SCTPSuccessIndicationDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSuccessIndication *pp = (SCTPSuccessIndication *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getResponseCorrelationId());
        default: return "";
    }
}

bool SCTPSuccessIndicationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSuccessIndication *pp = (SCTPSuccessIndication *)object; (void)pp;
    switch (field) {
        case 0: pp->setResponseCorrelationId(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SCTPSuccessIndicationDescriptor::getFieldStructName(void *object, int field) const
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

void *SCTPSuccessIndicationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SCTPSuccessIndication *pp = (SCTPSuccessIndication *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(NatMessage);

NatMessage::NatMessage(const char *name, int kind) : ::cPacket(name,kind)
{
    this->multi_var = 0;
    this->peer1_var = 0;
    peer1Addresses_arraysize = 0;
    this->peer1Addresses_var = 0;
    this->portPeer1_var = 0;
    this->peer2_var = 0;
    peer2Addresses_arraysize = 0;
    this->peer2Addresses_var = 0;
    this->portPeer2_var = 0;
}

NatMessage::NatMessage(const NatMessage& other) : ::cPacket(other)
{
    peer1Addresses_arraysize = 0;
    this->peer1Addresses_var = 0;
    peer2Addresses_arraysize = 0;
    this->peer2Addresses_var = 0;
    copy(other);
}

NatMessage::~NatMessage()
{
    delete [] peer1Addresses_var;
    delete [] peer2Addresses_var;
}

NatMessage& NatMessage::operator=(const NatMessage& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void NatMessage::copy(const NatMessage& other)
{
    this->multi_var = other.multi_var;
    this->peer1_var = other.peer1_var;
    delete [] this->peer1Addresses_var;
    this->peer1Addresses_var = (other.peer1Addresses_arraysize==0) ? NULL : new IPvXAddress[other.peer1Addresses_arraysize];
    peer1Addresses_arraysize = other.peer1Addresses_arraysize;
    for (unsigned int i=0; i<peer1Addresses_arraysize; i++)
        this->peer1Addresses_var[i] = other.peer1Addresses_var[i];
    this->portPeer1_var = other.portPeer1_var;
    this->peer2_var = other.peer2_var;
    delete [] this->peer2Addresses_var;
    this->peer2Addresses_var = (other.peer2Addresses_arraysize==0) ? NULL : new IPvXAddress[other.peer2Addresses_arraysize];
    peer2Addresses_arraysize = other.peer2Addresses_arraysize;
    for (unsigned int i=0; i<peer2Addresses_arraysize; i++)
        this->peer2Addresses_var[i] = other.peer2Addresses_var[i];
    this->portPeer2_var = other.portPeer2_var;
}

void NatMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->multi_var);
    doPacking(b,this->peer1_var);
    b->pack(peer1Addresses_arraysize);
    doPacking(b,this->peer1Addresses_var,peer1Addresses_arraysize);
    doPacking(b,this->portPeer1_var);
    doPacking(b,this->peer2_var);
    b->pack(peer2Addresses_arraysize);
    doPacking(b,this->peer2Addresses_var,peer2Addresses_arraysize);
    doPacking(b,this->portPeer2_var);
}

void NatMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->multi_var);
    doUnpacking(b,this->peer1_var);
    delete [] this->peer1Addresses_var;
    b->unpack(peer1Addresses_arraysize);
    if (peer1Addresses_arraysize==0) {
        this->peer1Addresses_var = 0;
    } else {
        this->peer1Addresses_var = new IPvXAddress[peer1Addresses_arraysize];
        doUnpacking(b,this->peer1Addresses_var,peer1Addresses_arraysize);
    }
    doUnpacking(b,this->portPeer1_var);
    doUnpacking(b,this->peer2_var);
    delete [] this->peer2Addresses_var;
    b->unpack(peer2Addresses_arraysize);
    if (peer2Addresses_arraysize==0) {
        this->peer2Addresses_var = 0;
    } else {
        this->peer2Addresses_var = new IPvXAddress[peer2Addresses_arraysize];
        doUnpacking(b,this->peer2Addresses_var,peer2Addresses_arraysize);
    }
    doUnpacking(b,this->portPeer2_var);
}

bool NatMessage::getMulti() const
{
    return multi_var;
}

void NatMessage::setMulti(bool multi)
{
    this->multi_var = multi;
}

uint16 NatMessage::getPeer1() const
{
    return peer1_var;
}

void NatMessage::setPeer1(uint16 peer1)
{
    this->peer1_var = peer1;
}

void NatMessage::setPeer1AddressesArraySize(unsigned int size)
{
    IPvXAddress *peer1Addresses_var2 = (size==0) ? NULL : new IPvXAddress[size];
    unsigned int sz = peer1Addresses_arraysize < size ? peer1Addresses_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        peer1Addresses_var2[i] = this->peer1Addresses_var[i];
    peer1Addresses_arraysize = size;
    delete [] this->peer1Addresses_var;
    this->peer1Addresses_var = peer1Addresses_var2;
}

unsigned int NatMessage::getPeer1AddressesArraySize() const
{
    return peer1Addresses_arraysize;
}

IPvXAddress& NatMessage::getPeer1Addresses(unsigned int k)
{
    if (k>=peer1Addresses_arraysize) throw cRuntimeError("Array of size %d indexed by %d", peer1Addresses_arraysize, k);
    return peer1Addresses_var[k];
}

void NatMessage::setPeer1Addresses(unsigned int k, const IPvXAddress& peer1Addresses)
{
    if (k>=peer1Addresses_arraysize) throw cRuntimeError("Array of size %d indexed by %d", peer1Addresses_arraysize, k);
    this->peer1Addresses_var[k] = peer1Addresses;
}

uint32 NatMessage::getPortPeer1() const
{
    return portPeer1_var;
}

void NatMessage::setPortPeer1(uint32 portPeer1)
{
    this->portPeer1_var = portPeer1;
}

uint16 NatMessage::getPeer2() const
{
    return peer2_var;
}

void NatMessage::setPeer2(uint16 peer2)
{
    this->peer2_var = peer2;
}

void NatMessage::setPeer2AddressesArraySize(unsigned int size)
{
    IPvXAddress *peer2Addresses_var2 = (size==0) ? NULL : new IPvXAddress[size];
    unsigned int sz = peer2Addresses_arraysize < size ? peer2Addresses_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        peer2Addresses_var2[i] = this->peer2Addresses_var[i];
    peer2Addresses_arraysize = size;
    delete [] this->peer2Addresses_var;
    this->peer2Addresses_var = peer2Addresses_var2;
}

unsigned int NatMessage::getPeer2AddressesArraySize() const
{
    return peer2Addresses_arraysize;
}

IPvXAddress& NatMessage::getPeer2Addresses(unsigned int k)
{
    if (k>=peer2Addresses_arraysize) throw cRuntimeError("Array of size %d indexed by %d", peer2Addresses_arraysize, k);
    return peer2Addresses_var[k];
}

void NatMessage::setPeer2Addresses(unsigned int k, const IPvXAddress& peer2Addresses)
{
    if (k>=peer2Addresses_arraysize) throw cRuntimeError("Array of size %d indexed by %d", peer2Addresses_arraysize, k);
    this->peer2Addresses_var[k] = peer2Addresses;
}

uint32 NatMessage::getPortPeer2() const
{
    return portPeer2_var;
}

void NatMessage::setPortPeer2(uint32 portPeer2)
{
    this->portPeer2_var = portPeer2;
}

class NatMessageDescriptor : public cClassDescriptor
{
  public:
    NatMessageDescriptor();
    virtual ~NatMessageDescriptor();

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

Register_ClassDescriptor(NatMessageDescriptor);

NatMessageDescriptor::NatMessageDescriptor() : cClassDescriptor("NatMessage", "cPacket")
{
}

NatMessageDescriptor::~NatMessageDescriptor()
{
}

bool NatMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<NatMessage *>(obj)!=NULL;
}

const char *NatMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int NatMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int NatMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *NatMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "multi",
        "peer1",
        "peer1Addresses",
        "portPeer1",
        "peer2",
        "peer2Addresses",
        "portPeer2",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int NatMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "multi")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "peer1")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "peer1Addresses")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "portPeer1")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "peer2")==0) return base+4;
    if (fieldName[0]=='p' && strcmp(fieldName, "peer2Addresses")==0) return base+5;
    if (fieldName[0]=='p' && strcmp(fieldName, "portPeer2")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *NatMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "uint16",
        "IPvXAddress",
        "uint32",
        "uint16",
        "IPvXAddress",
        "uint32",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *NatMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int NatMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    NatMessage *pp = (NatMessage *)object; (void)pp;
    switch (field) {
        case 2: return pp->getPeer1AddressesArraySize();
        case 5: return pp->getPeer2AddressesArraySize();
        default: return 0;
    }
}

std::string NatMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    NatMessage *pp = (NatMessage *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getMulti());
        case 1: return ulong2string(pp->getPeer1());
        case 2: {std::stringstream out; out << pp->getPeer1Addresses(i); return out.str();}
        case 3: return ulong2string(pp->getPortPeer1());
        case 4: return ulong2string(pp->getPeer2());
        case 5: {std::stringstream out; out << pp->getPeer2Addresses(i); return out.str();}
        case 6: return ulong2string(pp->getPortPeer2());
        default: return "";
    }
}

bool NatMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    NatMessage *pp = (NatMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setMulti(string2bool(value)); return true;
        case 1: pp->setPeer1(string2ulong(value)); return true;
        case 3: pp->setPortPeer1(string2ulong(value)); return true;
        case 4: pp->setPeer2(string2ulong(value)); return true;
        case 6: pp->setPortPeer2(string2ulong(value)); return true;
        default: return false;
    }
}

const char *NatMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(IPvXAddress));
        case 5: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *NatMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    NatMessage *pp = (NatMessage *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getPeer1Addresses(i)); break;
        case 5: return (void *)(&pp->getPeer2Addresses(i)); break;
        default: return NULL;
    }
}


