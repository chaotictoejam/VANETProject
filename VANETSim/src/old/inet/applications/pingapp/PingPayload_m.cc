//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/pingapp/PingPayload.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "PingPayload_m.h"

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

Register_Class(PingPayload);

PingPayload::PingPayload(const char *name, int kind) : ::cPacket(name,kind)
{
    this->originatorId_var = 0;
    this->seqNo_var = 0;
    data_arraysize = 0;
    this->data_var = 0;
}

PingPayload::PingPayload(const PingPayload& other) : ::cPacket(other)
{
    data_arraysize = 0;
    this->data_var = 0;
    copy(other);
}

PingPayload::~PingPayload()
{
    delete [] data_var;
}

PingPayload& PingPayload::operator=(const PingPayload& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void PingPayload::copy(const PingPayload& other)
{
    this->originatorId_var = other.originatorId_var;
    this->seqNo_var = other.seqNo_var;
    delete [] this->data_var;
    this->data_var = (other.data_arraysize==0) ? NULL : new unsigned char[other.data_arraysize];
    data_arraysize = other.data_arraysize;
    for (unsigned int i=0; i<data_arraysize; i++)
        this->data_var[i] = other.data_var[i];
}

void PingPayload::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->originatorId_var);
    doPacking(b,this->seqNo_var);
    b->pack(data_arraysize);
    doPacking(b,this->data_var,data_arraysize);
}

void PingPayload::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->originatorId_var);
    doUnpacking(b,this->seqNo_var);
    delete [] this->data_var;
    b->unpack(data_arraysize);
    if (data_arraysize==0) {
        this->data_var = 0;
    } else {
        this->data_var = new unsigned char[data_arraysize];
        doUnpacking(b,this->data_var,data_arraysize);
    }
}

long PingPayload::getOriginatorId() const
{
    return originatorId_var;
}

void PingPayload::setOriginatorId(long originatorId)
{
    this->originatorId_var = originatorId;
}

long PingPayload::getSeqNo() const
{
    return seqNo_var;
}

void PingPayload::setSeqNo(long seqNo)
{
    this->seqNo_var = seqNo;
}

void PingPayload::setDataArraySize(unsigned int size)
{
    unsigned char *data_var2 = (size==0) ? NULL : new unsigned char[size];
    unsigned int sz = data_arraysize < size ? data_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        data_var2[i] = this->data_var[i];
    for (unsigned int i=sz; i<size; i++)
        data_var2[i] = 0;
    data_arraysize = size;
    delete [] this->data_var;
    this->data_var = data_var2;
}

unsigned int PingPayload::getDataArraySize() const
{
    return data_arraysize;
}

unsigned char PingPayload::getData(unsigned int k) const
{
    if (k>=data_arraysize) throw cRuntimeError("Array of size %d indexed by %d", data_arraysize, k);
    return data_var[k];
}

void PingPayload::setData(unsigned int k, unsigned char data)
{
    if (k>=data_arraysize) throw cRuntimeError("Array of size %d indexed by %d", data_arraysize, k);
    this->data_var[k] = data;
}

class PingPayloadDescriptor : public cClassDescriptor
{
  public:
    PingPayloadDescriptor();
    virtual ~PingPayloadDescriptor();

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

Register_ClassDescriptor(PingPayloadDescriptor);

PingPayloadDescriptor::PingPayloadDescriptor() : cClassDescriptor("PingPayload", "cPacket")
{
}

PingPayloadDescriptor::~PingPayloadDescriptor()
{
}

bool PingPayloadDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PingPayload *>(obj)!=NULL;
}

const char *PingPayloadDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PingPayloadDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int PingPayloadDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *PingPayloadDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "originatorId",
        "seqNo",
        "data",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int PingPayloadDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorId")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNo")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "data")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PingPayloadDescriptor::getFieldTypeString(void *object, int field) const
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
        "unsigned char",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *PingPayloadDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PingPayloadDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PingPayload *pp = (PingPayload *)object; (void)pp;
    switch (field) {
        case 2: return pp->getDataArraySize();
        default: return 0;
    }
}

std::string PingPayloadDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PingPayload *pp = (PingPayload *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getOriginatorId());
        case 1: return long2string(pp->getSeqNo());
        case 2: return ulong2string(pp->getData(i));
        default: return "";
    }
}

bool PingPayloadDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PingPayload *pp = (PingPayload *)object; (void)pp;
    switch (field) {
        case 0: pp->setOriginatorId(string2long(value)); return true;
        case 1: pp->setSeqNo(string2long(value)); return true;
        case 2: pp->setData(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *PingPayloadDescriptor::getFieldStructName(void *object, int field) const
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

void *PingPayloadDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PingPayload *pp = (PingPayload *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


