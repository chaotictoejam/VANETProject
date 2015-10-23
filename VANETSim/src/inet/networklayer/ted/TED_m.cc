//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/ted/TED.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "TED_m.h"

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

TELinkStateInfo::TELinkStateInfo()
{
    metric = 0;
    MaxBandwidth = 0;
    for (unsigned int i=0; i<8; i++)
        UnResvBandwidth[i] = 0;
    timestamp = 0;
    sourceId = 0;
    messageId = 0;
    state = 0;
}

void doPacking(cCommBuffer *b, TELinkStateInfo& a)
{
    doPacking(b,a.advrouter);
    doPacking(b,a.linkid);
    doPacking(b,a.local);
    doPacking(b,a.remote);
    doPacking(b,a.metric);
    doPacking(b,a.MaxBandwidth);
    doPacking(b,a.UnResvBandwidth,8);
    doPacking(b,a.timestamp);
    doPacking(b,a.sourceId);
    doPacking(b,a.messageId);
    doPacking(b,a.state);
}

void doUnpacking(cCommBuffer *b, TELinkStateInfo& a)
{
    doUnpacking(b,a.advrouter);
    doUnpacking(b,a.linkid);
    doUnpacking(b,a.local);
    doUnpacking(b,a.remote);
    doUnpacking(b,a.metric);
    doUnpacking(b,a.MaxBandwidth);
    doUnpacking(b,a.UnResvBandwidth,8);
    doUnpacking(b,a.timestamp);
    doUnpacking(b,a.sourceId);
    doUnpacking(b,a.messageId);
    doUnpacking(b,a.state);
}

class TELinkStateInfoDescriptor : public cClassDescriptor
{
  public:
    TELinkStateInfoDescriptor();
    virtual ~TELinkStateInfoDescriptor();

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

Register_ClassDescriptor(TELinkStateInfoDescriptor);

TELinkStateInfoDescriptor::TELinkStateInfoDescriptor() : cClassDescriptor("inet::TELinkStateInfo", "")
{
}

TELinkStateInfoDescriptor::~TELinkStateInfoDescriptor()
{
}

bool TELinkStateInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TELinkStateInfo *>(obj)!=NULL;
}

const char *TELinkStateInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TELinkStateInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 11+basedesc->getFieldCount(object) : 11;
}

unsigned int TELinkStateInfoDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<11) ? fieldTypeFlags[field] : 0;
}

const char *TELinkStateInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "advrouter",
        "linkid",
        "local",
        "remote",
        "metric",
        "MaxBandwidth",
        "UnResvBandwidth",
        "timestamp",
        "sourceId",
        "messageId",
        "state",
    };
    return (field>=0 && field<11) ? fieldNames[field] : NULL;
}

int TELinkStateInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "advrouter")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "linkid")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "local")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "remote")==0) return base+3;
    if (fieldName[0]=='m' && strcmp(fieldName, "metric")==0) return base+4;
    if (fieldName[0]=='M' && strcmp(fieldName, "MaxBandwidth")==0) return base+5;
    if (fieldName[0]=='U' && strcmp(fieldName, "UnResvBandwidth")==0) return base+6;
    if (fieldName[0]=='t' && strcmp(fieldName, "timestamp")==0) return base+7;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceId")==0) return base+8;
    if (fieldName[0]=='m' && strcmp(fieldName, "messageId")==0) return base+9;
    if (fieldName[0]=='s' && strcmp(fieldName, "state")==0) return base+10;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TELinkStateInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "IPv4Address",
        "IPv4Address",
        "IPv4Address",
        "double",
        "double",
        "double",
        "simtime_t",
        "unsigned int",
        "unsigned int",
        "bool",
    };
    return (field>=0 && field<11) ? fieldTypeStrings[field] : NULL;
}

const char *TELinkStateInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TELinkStateInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TELinkStateInfo *pp = (TELinkStateInfo *)object; (void)pp;
    switch (field) {
        case 6: return 8;
        default: return 0;
    }
}

std::string TELinkStateInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TELinkStateInfo *pp = (TELinkStateInfo *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->advrouter; return out.str();}
        case 1: {std::stringstream out; out << pp->linkid; return out.str();}
        case 2: {std::stringstream out; out << pp->local; return out.str();}
        case 3: {std::stringstream out; out << pp->remote; return out.str();}
        case 4: return double2string(pp->metric);
        case 5: return double2string(pp->MaxBandwidth);
        case 6: if (i>=8) return "";
                return double2string(pp->UnResvBandwidth[i]);
        case 7: return double2string(pp->timestamp);
        case 8: return ulong2string(pp->sourceId);
        case 9: return ulong2string(pp->messageId);
        case 10: return bool2string(pp->state);
        default: return "";
    }
}

bool TELinkStateInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TELinkStateInfo *pp = (TELinkStateInfo *)object; (void)pp;
    switch (field) {
        case 4: pp->metric = string2double(value); return true;
        case 5: pp->MaxBandwidth = string2double(value); return true;
        case 6: if (i>=8) return false;
                pp->UnResvBandwidth[i] = string2double(value); return true;
        case 7: pp->timestamp = string2double(value); return true;
        case 8: pp->sourceId = string2ulong(value); return true;
        case 9: pp->messageId = string2ulong(value); return true;
        case 10: pp->state = string2bool(value); return true;
        default: return false;
    }
}

const char *TELinkStateInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        case 1: return opp_typename(typeid(IPv4Address));
        case 2: return opp_typename(typeid(IPv4Address));
        case 3: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *TELinkStateInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TELinkStateInfo *pp = (TELinkStateInfo *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->advrouter); break;
        case 1: return (void *)(&pp->linkid); break;
        case 2: return (void *)(&pp->local); break;
        case 3: return (void *)(&pp->remote); break;
        default: return NULL;
    }
}

Register_Class(TEDChangeInfo);

TEDChangeInfo::TEDChangeInfo() : ::cObject()
{
    tedLinkIndices_arraysize = 0;
    this->tedLinkIndices_var = 0;
}

TEDChangeInfo::TEDChangeInfo(const TEDChangeInfo& other) : ::cObject(other)
{
    tedLinkIndices_arraysize = 0;
    this->tedLinkIndices_var = 0;
    copy(other);
}

TEDChangeInfo::~TEDChangeInfo()
{
    delete [] tedLinkIndices_var;
}

TEDChangeInfo& TEDChangeInfo::operator=(const TEDChangeInfo& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void TEDChangeInfo::copy(const TEDChangeInfo& other)
{
    delete [] this->tedLinkIndices_var;
    this->tedLinkIndices_var = (other.tedLinkIndices_arraysize==0) ? NULL : new int[other.tedLinkIndices_arraysize];
    tedLinkIndices_arraysize = other.tedLinkIndices_arraysize;
    for (unsigned int i=0; i<tedLinkIndices_arraysize; i++)
        this->tedLinkIndices_var[i] = other.tedLinkIndices_var[i];
}

void TEDChangeInfo::parsimPack(cCommBuffer *b)
{
    b->pack(tedLinkIndices_arraysize);
    doPacking(b,this->tedLinkIndices_var,tedLinkIndices_arraysize);
}

void TEDChangeInfo::parsimUnpack(cCommBuffer *b)
{
    delete [] this->tedLinkIndices_var;
    b->unpack(tedLinkIndices_arraysize);
    if (tedLinkIndices_arraysize==0) {
        this->tedLinkIndices_var = 0;
    } else {
        this->tedLinkIndices_var = new int[tedLinkIndices_arraysize];
        doUnpacking(b,this->tedLinkIndices_var,tedLinkIndices_arraysize);
    }
}

void TEDChangeInfo::setTedLinkIndicesArraySize(unsigned int size)
{
    int *tedLinkIndices_var2 = (size==0) ? NULL : new int[size];
    unsigned int sz = tedLinkIndices_arraysize < size ? tedLinkIndices_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        tedLinkIndices_var2[i] = this->tedLinkIndices_var[i];
    for (unsigned int i=sz; i<size; i++)
        tedLinkIndices_var2[i] = 0;
    tedLinkIndices_arraysize = size;
    delete [] this->tedLinkIndices_var;
    this->tedLinkIndices_var = tedLinkIndices_var2;
}

unsigned int TEDChangeInfo::getTedLinkIndicesArraySize() const
{
    return tedLinkIndices_arraysize;
}

int TEDChangeInfo::getTedLinkIndices(unsigned int k) const
{
    if (k>=tedLinkIndices_arraysize) throw cRuntimeError("Array of size %d indexed by %d", tedLinkIndices_arraysize, k);
    return tedLinkIndices_var[k];
}

void TEDChangeInfo::setTedLinkIndices(unsigned int k, int tedLinkIndices)
{
    if (k>=tedLinkIndices_arraysize) throw cRuntimeError("Array of size %d indexed by %d", tedLinkIndices_arraysize, k);
    this->tedLinkIndices_var[k] = tedLinkIndices;
}

class TEDChangeInfoDescriptor : public cClassDescriptor
{
  public:
    TEDChangeInfoDescriptor();
    virtual ~TEDChangeInfoDescriptor();

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

Register_ClassDescriptor(TEDChangeInfoDescriptor);

TEDChangeInfoDescriptor::TEDChangeInfoDescriptor() : cClassDescriptor("inet::TEDChangeInfo", "cObject")
{
}

TEDChangeInfoDescriptor::~TEDChangeInfoDescriptor()
{
}

bool TEDChangeInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TEDChangeInfo *>(obj)!=NULL;
}

const char *TEDChangeInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TEDChangeInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int TEDChangeInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TEDChangeInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "tedLinkIndices",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int TEDChangeInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "tedLinkIndices")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TEDChangeInfoDescriptor::getFieldTypeString(void *object, int field) const
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

const char *TEDChangeInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TEDChangeInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TEDChangeInfo *pp = (TEDChangeInfo *)object; (void)pp;
    switch (field) {
        case 0: return pp->getTedLinkIndicesArraySize();
        default: return 0;
    }
}

std::string TEDChangeInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TEDChangeInfo *pp = (TEDChangeInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getTedLinkIndices(i));
        default: return "";
    }
}

bool TEDChangeInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TEDChangeInfo *pp = (TEDChangeInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setTedLinkIndices(i,string2long(value)); return true;
        default: return false;
    }
}

const char *TEDChangeInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *TEDChangeInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TEDChangeInfo *pp = (TEDChangeInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace inet

