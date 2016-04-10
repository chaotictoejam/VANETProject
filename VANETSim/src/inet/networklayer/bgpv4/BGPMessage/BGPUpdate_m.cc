//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/bgpv4/BGPMessage/BGPUpdate.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "BGPUpdate_m.h"

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

BGPUpdateWithdrawnRoutes::BGPUpdateWithdrawnRoutes()
{
    length = 0;
}

void doPacking(cCommBuffer *b, BGPUpdateWithdrawnRoutes& a)
{
    doPacking(b,a.length);
    doPacking(b,a.prefix);
}

void doUnpacking(cCommBuffer *b, BGPUpdateWithdrawnRoutes& a)
{
    doUnpacking(b,a.length);
    doUnpacking(b,a.prefix);
}

class BGPUpdateWithdrawnRoutesDescriptor : public cClassDescriptor
{
  public:
    BGPUpdateWithdrawnRoutesDescriptor();
    virtual ~BGPUpdateWithdrawnRoutesDescriptor();

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

Register_ClassDescriptor(BGPUpdateWithdrawnRoutesDescriptor);

BGPUpdateWithdrawnRoutesDescriptor::BGPUpdateWithdrawnRoutesDescriptor() : cClassDescriptor("BGPUpdateWithdrawnRoutes", "")
{
}

BGPUpdateWithdrawnRoutesDescriptor::~BGPUpdateWithdrawnRoutesDescriptor()
{
}

bool BGPUpdateWithdrawnRoutesDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdateWithdrawnRoutes *>(obj)!=NULL;
}

const char *BGPUpdateWithdrawnRoutesDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdateWithdrawnRoutesDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int BGPUpdateWithdrawnRoutesDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BGPUpdateWithdrawnRoutesDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "length",
        "prefix",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int BGPUpdateWithdrawnRoutesDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefix")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdateWithdrawnRoutesDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
        "IPv4Address",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *BGPUpdateWithdrawnRoutesDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPUpdateWithdrawnRoutesDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateWithdrawnRoutes *pp = (BGPUpdateWithdrawnRoutes *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPUpdateWithdrawnRoutesDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateWithdrawnRoutes *pp = (BGPUpdateWithdrawnRoutes *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->length);
        case 1: {std::stringstream out; out << pp->prefix; return out.str();}
        default: return "";
    }
}

bool BGPUpdateWithdrawnRoutesDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateWithdrawnRoutes *pp = (BGPUpdateWithdrawnRoutes *)object; (void)pp;
    switch (field) {
        case 0: pp->length = string2ulong(value); return true;
        default: return false;
    }
}

const char *BGPUpdateWithdrawnRoutesDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *BGPUpdateWithdrawnRoutesDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateWithdrawnRoutes *pp = (BGPUpdateWithdrawnRoutes *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->prefix); break;
        default: return NULL;
    }
}

BGPUpdateNLRI::BGPUpdateNLRI()
{
    length = 0;
}

void doPacking(cCommBuffer *b, BGPUpdateNLRI& a)
{
    doPacking(b,a.length);
    doPacking(b,a.prefix);
}

void doUnpacking(cCommBuffer *b, BGPUpdateNLRI& a)
{
    doUnpacking(b,a.length);
    doUnpacking(b,a.prefix);
}

class BGPUpdateNLRIDescriptor : public cClassDescriptor
{
  public:
    BGPUpdateNLRIDescriptor();
    virtual ~BGPUpdateNLRIDescriptor();

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

Register_ClassDescriptor(BGPUpdateNLRIDescriptor);

BGPUpdateNLRIDescriptor::BGPUpdateNLRIDescriptor() : cClassDescriptor("BGPUpdateNLRI", "")
{
}

BGPUpdateNLRIDescriptor::~BGPUpdateNLRIDescriptor()
{
}

bool BGPUpdateNLRIDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdateNLRI *>(obj)!=NULL;
}

const char *BGPUpdateNLRIDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdateNLRIDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int BGPUpdateNLRIDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BGPUpdateNLRIDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "length",
        "prefix",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int BGPUpdateNLRIDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefix")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdateNLRIDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
        "IPv4Address",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *BGPUpdateNLRIDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPUpdateNLRIDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateNLRI *pp = (BGPUpdateNLRI *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPUpdateNLRIDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateNLRI *pp = (BGPUpdateNLRI *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->length);
        case 1: {std::stringstream out; out << pp->prefix; return out.str();}
        default: return "";
    }
}

bool BGPUpdateNLRIDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateNLRI *pp = (BGPUpdateNLRI *)object; (void)pp;
    switch (field) {
        case 0: pp->length = string2ulong(value); return true;
        default: return false;
    }
}

const char *BGPUpdateNLRIDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *BGPUpdateNLRIDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateNLRI *pp = (BGPUpdateNLRI *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->prefix); break;
        default: return NULL;
    }
}

Register_Class(BGPUpdatePathAttributeList);

BGPUpdatePathAttributeList::BGPUpdatePathAttributeList() : ::cObject()
{
    asPath_arraysize = 0;
    this->asPath_var = 0;
    localPref_arraysize = 0;
    this->localPref_var = 0;
    atomicAggregate_arraysize = 0;
    this->atomicAggregate_var = 0;
}

BGPUpdatePathAttributeList::BGPUpdatePathAttributeList(const BGPUpdatePathAttributeList& other) : ::cObject(other)
{
    asPath_arraysize = 0;
    this->asPath_var = 0;
    localPref_arraysize = 0;
    this->localPref_var = 0;
    atomicAggregate_arraysize = 0;
    this->atomicAggregate_var = 0;
    copy(other);
}

BGPUpdatePathAttributeList::~BGPUpdatePathAttributeList()
{
    delete [] asPath_var;
    delete [] localPref_var;
    delete [] atomicAggregate_var;
}

BGPUpdatePathAttributeList& BGPUpdatePathAttributeList::operator=(const BGPUpdatePathAttributeList& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void BGPUpdatePathAttributeList::copy(const BGPUpdatePathAttributeList& other)
{
    this->origin_var = other.origin_var;
    delete [] this->asPath_var;
    this->asPath_var = (other.asPath_arraysize==0) ? NULL : new BGPUpdatePathAttributesASPath[other.asPath_arraysize];
    asPath_arraysize = other.asPath_arraysize;
    for (unsigned int i=0; i<asPath_arraysize; i++)
        this->asPath_var[i] = other.asPath_var[i];
    this->nextHop_var = other.nextHop_var;
    delete [] this->localPref_var;
    this->localPref_var = (other.localPref_arraysize==0) ? NULL : new BGPUpdatePathAttributesLocalPref[other.localPref_arraysize];
    localPref_arraysize = other.localPref_arraysize;
    for (unsigned int i=0; i<localPref_arraysize; i++)
        this->localPref_var[i] = other.localPref_var[i];
    delete [] this->atomicAggregate_var;
    this->atomicAggregate_var = (other.atomicAggregate_arraysize==0) ? NULL : new BGPUpdatePathAttributesAtomicAggregate[other.atomicAggregate_arraysize];
    atomicAggregate_arraysize = other.atomicAggregate_arraysize;
    for (unsigned int i=0; i<atomicAggregate_arraysize; i++)
        this->atomicAggregate_var[i] = other.atomicAggregate_var[i];
}

void BGPUpdatePathAttributeList::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->origin_var);
    b->pack(asPath_arraysize);
    doPacking(b,this->asPath_var,asPath_arraysize);
    doPacking(b,this->nextHop_var);
    b->pack(localPref_arraysize);
    doPacking(b,this->localPref_var,localPref_arraysize);
    b->pack(atomicAggregate_arraysize);
    doPacking(b,this->atomicAggregate_var,atomicAggregate_arraysize);
}

void BGPUpdatePathAttributeList::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->origin_var);
    delete [] this->asPath_var;
    b->unpack(asPath_arraysize);
    if (asPath_arraysize==0) {
        this->asPath_var = 0;
    } else {
        this->asPath_var = new BGPUpdatePathAttributesASPath[asPath_arraysize];
        doUnpacking(b,this->asPath_var,asPath_arraysize);
    }
    doUnpacking(b,this->nextHop_var);
    delete [] this->localPref_var;
    b->unpack(localPref_arraysize);
    if (localPref_arraysize==0) {
        this->localPref_var = 0;
    } else {
        this->localPref_var = new BGPUpdatePathAttributesLocalPref[localPref_arraysize];
        doUnpacking(b,this->localPref_var,localPref_arraysize);
    }
    delete [] this->atomicAggregate_var;
    b->unpack(atomicAggregate_arraysize);
    if (atomicAggregate_arraysize==0) {
        this->atomicAggregate_var = 0;
    } else {
        this->atomicAggregate_var = new BGPUpdatePathAttributesAtomicAggregate[atomicAggregate_arraysize];
        doUnpacking(b,this->atomicAggregate_var,atomicAggregate_arraysize);
    }
}

BGPUpdatePathAttributesOrigin& BGPUpdatePathAttributeList::getOrigin()
{
    return origin_var;
}

void BGPUpdatePathAttributeList::setOrigin(const BGPUpdatePathAttributesOrigin& origin)
{
    this->origin_var = origin;
}

void BGPUpdatePathAttributeList::setAsPathArraySize(unsigned int size)
{
    BGPUpdatePathAttributesASPath *asPath_var2 = (size==0) ? NULL : new BGPUpdatePathAttributesASPath[size];
    unsigned int sz = asPath_arraysize < size ? asPath_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        asPath_var2[i] = this->asPath_var[i];
    asPath_arraysize = size;
    delete [] this->asPath_var;
    this->asPath_var = asPath_var2;
}

unsigned int BGPUpdatePathAttributeList::getAsPathArraySize() const
{
    return asPath_arraysize;
}

BGPUpdatePathAttributesASPath& BGPUpdatePathAttributeList::getAsPath(unsigned int k)
{
    if (k>=asPath_arraysize) throw cRuntimeError("Array of size %d indexed by %d", asPath_arraysize, k);
    return asPath_var[k];
}

void BGPUpdatePathAttributeList::setAsPath(unsigned int k, const BGPUpdatePathAttributesASPath& asPath)
{
    if (k>=asPath_arraysize) throw cRuntimeError("Array of size %d indexed by %d", asPath_arraysize, k);
    this->asPath_var[k] = asPath;
}

BGPUpdatePathAttributesNextHop& BGPUpdatePathAttributeList::getNextHop()
{
    return nextHop_var;
}

void BGPUpdatePathAttributeList::setNextHop(const BGPUpdatePathAttributesNextHop& nextHop)
{
    this->nextHop_var = nextHop;
}

void BGPUpdatePathAttributeList::setLocalPrefArraySize(unsigned int size)
{
    BGPUpdatePathAttributesLocalPref *localPref_var2 = (size==0) ? NULL : new BGPUpdatePathAttributesLocalPref[size];
    unsigned int sz = localPref_arraysize < size ? localPref_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        localPref_var2[i] = this->localPref_var[i];
    localPref_arraysize = size;
    delete [] this->localPref_var;
    this->localPref_var = localPref_var2;
}

unsigned int BGPUpdatePathAttributeList::getLocalPrefArraySize() const
{
    return localPref_arraysize;
}

BGPUpdatePathAttributesLocalPref& BGPUpdatePathAttributeList::getLocalPref(unsigned int k)
{
    if (k>=localPref_arraysize) throw cRuntimeError("Array of size %d indexed by %d", localPref_arraysize, k);
    return localPref_var[k];
}

void BGPUpdatePathAttributeList::setLocalPref(unsigned int k, const BGPUpdatePathAttributesLocalPref& localPref)
{
    if (k>=localPref_arraysize) throw cRuntimeError("Array of size %d indexed by %d", localPref_arraysize, k);
    this->localPref_var[k] = localPref;
}

void BGPUpdatePathAttributeList::setAtomicAggregateArraySize(unsigned int size)
{
    BGPUpdatePathAttributesAtomicAggregate *atomicAggregate_var2 = (size==0) ? NULL : new BGPUpdatePathAttributesAtomicAggregate[size];
    unsigned int sz = atomicAggregate_arraysize < size ? atomicAggregate_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        atomicAggregate_var2[i] = this->atomicAggregate_var[i];
    atomicAggregate_arraysize = size;
    delete [] this->atomicAggregate_var;
    this->atomicAggregate_var = atomicAggregate_var2;
}

unsigned int BGPUpdatePathAttributeList::getAtomicAggregateArraySize() const
{
    return atomicAggregate_arraysize;
}

BGPUpdatePathAttributesAtomicAggregate& BGPUpdatePathAttributeList::getAtomicAggregate(unsigned int k)
{
    if (k>=atomicAggregate_arraysize) throw cRuntimeError("Array of size %d indexed by %d", atomicAggregate_arraysize, k);
    return atomicAggregate_var[k];
}

void BGPUpdatePathAttributeList::setAtomicAggregate(unsigned int k, const BGPUpdatePathAttributesAtomicAggregate& atomicAggregate)
{
    if (k>=atomicAggregate_arraysize) throw cRuntimeError("Array of size %d indexed by %d", atomicAggregate_arraysize, k);
    this->atomicAggregate_var[k] = atomicAggregate;
}

class BGPUpdatePathAttributeListDescriptor : public cClassDescriptor
{
  public:
    BGPUpdatePathAttributeListDescriptor();
    virtual ~BGPUpdatePathAttributeListDescriptor();

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

Register_ClassDescriptor(BGPUpdatePathAttributeListDescriptor);

BGPUpdatePathAttributeListDescriptor::BGPUpdatePathAttributeListDescriptor() : cClassDescriptor("BGPUpdatePathAttributeList", "cObject")
{
}

BGPUpdatePathAttributeListDescriptor::~BGPUpdatePathAttributeListDescriptor()
{
}

bool BGPUpdatePathAttributeListDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdatePathAttributeList *>(obj)!=NULL;
}

const char *BGPUpdatePathAttributeListDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdatePathAttributeListDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int BGPUpdatePathAttributeListDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *BGPUpdatePathAttributeListDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "origin",
        "asPath",
        "nextHop",
        "localPref",
        "atomicAggregate",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int BGPUpdatePathAttributeListDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origin")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "asPath")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextHop")==0) return base+2;
    if (fieldName[0]=='l' && strcmp(fieldName, "localPref")==0) return base+3;
    if (fieldName[0]=='a' && strcmp(fieldName, "atomicAggregate")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdatePathAttributeListDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "BGPUpdatePathAttributesOrigin",
        "BGPUpdatePathAttributesASPath",
        "BGPUpdatePathAttributesNextHop",
        "BGPUpdatePathAttributesLocalPref",
        "BGPUpdatePathAttributesAtomicAggregate",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *BGPUpdatePathAttributeListDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPUpdatePathAttributeListDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributeList *pp = (BGPUpdatePathAttributeList *)object; (void)pp;
    switch (field) {
        case 1: return pp->getAsPathArraySize();
        case 3: return pp->getLocalPrefArraySize();
        case 4: return pp->getAtomicAggregateArraySize();
        default: return 0;
    }
}

std::string BGPUpdatePathAttributeListDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributeList *pp = (BGPUpdatePathAttributeList *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOrigin(); return out.str();}
        case 1: {std::stringstream out; out << pp->getAsPath(i); return out.str();}
        case 2: {std::stringstream out; out << pp->getNextHop(); return out.str();}
        case 3: {std::stringstream out; out << pp->getLocalPref(i); return out.str();}
        case 4: {std::stringstream out; out << pp->getAtomicAggregate(i); return out.str();}
        default: return "";
    }
}

bool BGPUpdatePathAttributeListDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributeList *pp = (BGPUpdatePathAttributeList *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *BGPUpdatePathAttributeListDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(BGPUpdatePathAttributesOrigin));
        case 1: return opp_typename(typeid(BGPUpdatePathAttributesASPath));
        case 2: return opp_typename(typeid(BGPUpdatePathAttributesNextHop));
        case 3: return opp_typename(typeid(BGPUpdatePathAttributesLocalPref));
        case 4: return opp_typename(typeid(BGPUpdatePathAttributesAtomicAggregate));
        default: return NULL;
    };
}

void *BGPUpdatePathAttributeListDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributeList *pp = (BGPUpdatePathAttributeList *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOrigin()); break;
        case 1: return (void *)(&pp->getAsPath(i)); break;
        case 2: return (void *)(&pp->getNextHop()); break;
        case 3: return (void *)(&pp->getLocalPref(i)); break;
        case 4: return (void *)(&pp->getAtomicAggregate(i)); break;
        default: return NULL;
    }
}

BGPUpdateMessage_Base::BGPUpdateMessage_Base(const char *name, int kind) : ::BGPHeader(name,kind)
{
    this->setType(BGP_UPDATE);
    this->setByteLength(BGP_HEADER_OCTETS + BGP_EMPTY_UPDATE_OCTETS);

    withdrawnRoutes_arraysize = 0;
    this->withdrawnRoutes_var = 0;
    pathAttributeList_arraysize = 0;
    this->pathAttributeList_var = 0;
}

BGPUpdateMessage_Base::BGPUpdateMessage_Base(const BGPUpdateMessage_Base& other) : ::BGPHeader(other)
{
    withdrawnRoutes_arraysize = 0;
    this->withdrawnRoutes_var = 0;
    pathAttributeList_arraysize = 0;
    this->pathAttributeList_var = 0;
    copy(other);
}

BGPUpdateMessage_Base::~BGPUpdateMessage_Base()
{
    delete [] withdrawnRoutes_var;
    delete [] pathAttributeList_var;
}

BGPUpdateMessage_Base& BGPUpdateMessage_Base::operator=(const BGPUpdateMessage_Base& other)
{
    if (this==&other) return *this;
    ::BGPHeader::operator=(other);
    copy(other);
    return *this;
}

void BGPUpdateMessage_Base::copy(const BGPUpdateMessage_Base& other)
{
    delete [] this->withdrawnRoutes_var;
    this->withdrawnRoutes_var = (other.withdrawnRoutes_arraysize==0) ? NULL : new BGPUpdateWithdrawnRoutes[other.withdrawnRoutes_arraysize];
    withdrawnRoutes_arraysize = other.withdrawnRoutes_arraysize;
    for (unsigned int i=0; i<withdrawnRoutes_arraysize; i++)
        this->withdrawnRoutes_var[i] = other.withdrawnRoutes_var[i];
    delete [] this->pathAttributeList_var;
    this->pathAttributeList_var = (other.pathAttributeList_arraysize==0) ? NULL : new BGPUpdatePathAttributeList[other.pathAttributeList_arraysize];
    pathAttributeList_arraysize = other.pathAttributeList_arraysize;
    for (unsigned int i=0; i<pathAttributeList_arraysize; i++)
        this->pathAttributeList_var[i] = other.pathAttributeList_var[i];
    this->NLRI_var = other.NLRI_var;
}

void BGPUpdateMessage_Base::parsimPack(cCommBuffer *b)
{
    ::BGPHeader::parsimPack(b);
    b->pack(withdrawnRoutes_arraysize);
    doPacking(b,this->withdrawnRoutes_var,withdrawnRoutes_arraysize);
    b->pack(pathAttributeList_arraysize);
    doPacking(b,this->pathAttributeList_var,pathAttributeList_arraysize);
    doPacking(b,this->NLRI_var);
}

void BGPUpdateMessage_Base::parsimUnpack(cCommBuffer *b)
{
    ::BGPHeader::parsimUnpack(b);
    delete [] this->withdrawnRoutes_var;
    b->unpack(withdrawnRoutes_arraysize);
    if (withdrawnRoutes_arraysize==0) {
        this->withdrawnRoutes_var = 0;
    } else {
        this->withdrawnRoutes_var = new BGPUpdateWithdrawnRoutes[withdrawnRoutes_arraysize];
        doUnpacking(b,this->withdrawnRoutes_var,withdrawnRoutes_arraysize);
    }
    delete [] this->pathAttributeList_var;
    b->unpack(pathAttributeList_arraysize);
    if (pathAttributeList_arraysize==0) {
        this->pathAttributeList_var = 0;
    } else {
        this->pathAttributeList_var = new BGPUpdatePathAttributeList[pathAttributeList_arraysize];
        doUnpacking(b,this->pathAttributeList_var,pathAttributeList_arraysize);
    }
    doUnpacking(b,this->NLRI_var);
}

void BGPUpdateMessage_Base::setWithdrawnRoutesArraySize(unsigned int size)
{
    BGPUpdateWithdrawnRoutes *withdrawnRoutes_var2 = (size==0) ? NULL : new BGPUpdateWithdrawnRoutes[size];
    unsigned int sz = withdrawnRoutes_arraysize < size ? withdrawnRoutes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        withdrawnRoutes_var2[i] = this->withdrawnRoutes_var[i];
    withdrawnRoutes_arraysize = size;
    delete [] this->withdrawnRoutes_var;
    this->withdrawnRoutes_var = withdrawnRoutes_var2;
}

unsigned int BGPUpdateMessage_Base::getWithdrawnRoutesArraySize() const
{
    return withdrawnRoutes_arraysize;
}

BGPUpdateWithdrawnRoutes& BGPUpdateMessage_Base::getWithdrawnRoutes(unsigned int k)
{
    if (k>=withdrawnRoutes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", withdrawnRoutes_arraysize, k);
    return withdrawnRoutes_var[k];
}

void BGPUpdateMessage_Base::setWithdrawnRoutes(unsigned int k, const BGPUpdateWithdrawnRoutes& withdrawnRoutes)
{
    if (k>=withdrawnRoutes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", withdrawnRoutes_arraysize, k);
    this->withdrawnRoutes_var[k] = withdrawnRoutes;
}

void BGPUpdateMessage_Base::setPathAttributeListArraySize(unsigned int size)
{
    BGPUpdatePathAttributeList *pathAttributeList_var2 = (size==0) ? NULL : new BGPUpdatePathAttributeList[size];
    unsigned int sz = pathAttributeList_arraysize < size ? pathAttributeList_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        pathAttributeList_var2[i] = this->pathAttributeList_var[i];
    pathAttributeList_arraysize = size;
    delete [] this->pathAttributeList_var;
    this->pathAttributeList_var = pathAttributeList_var2;
}

unsigned int BGPUpdateMessage_Base::getPathAttributeListArraySize() const
{
    return pathAttributeList_arraysize;
}

BGPUpdatePathAttributeList& BGPUpdateMessage_Base::getPathAttributeList(unsigned int k)
{
    if (k>=pathAttributeList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", pathAttributeList_arraysize, k);
    return pathAttributeList_var[k];
}

void BGPUpdateMessage_Base::setPathAttributeList(unsigned int k, const BGPUpdatePathAttributeList& pathAttributeList)
{
    if (k>=pathAttributeList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", pathAttributeList_arraysize, k);
    this->pathAttributeList_var[k] = pathAttributeList;
}

BGPUpdateNLRI& BGPUpdateMessage_Base::getNLRI()
{
    return NLRI_var;
}

void BGPUpdateMessage_Base::setNLRI(const BGPUpdateNLRI& NLRI)
{
    this->NLRI_var = NLRI;
}

class BGPUpdateMessageDescriptor : public cClassDescriptor
{
  public:
    BGPUpdateMessageDescriptor();
    virtual ~BGPUpdateMessageDescriptor();

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

Register_ClassDescriptor(BGPUpdateMessageDescriptor);

BGPUpdateMessageDescriptor::BGPUpdateMessageDescriptor() : cClassDescriptor("BGPUpdateMessage", "BGPHeader")
{
}

BGPUpdateMessageDescriptor::~BGPUpdateMessageDescriptor()
{
}

bool BGPUpdateMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdateMessage_Base *>(obj)!=NULL;
}

const char *BGPUpdateMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdateMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int BGPUpdateMessageDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISCOBJECT,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *BGPUpdateMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "withdrawnRoutes",
        "pathAttributeList",
        "NLRI",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int BGPUpdateMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='w' && strcmp(fieldName, "withdrawnRoutes")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pathAttributeList")==0) return base+1;
    if (fieldName[0]=='N' && strcmp(fieldName, "NLRI")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdateMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "BGPUpdateWithdrawnRoutes",
        "BGPUpdatePathAttributeList",
        "BGPUpdateNLRI",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *BGPUpdateMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPUpdateMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateMessage_Base *pp = (BGPUpdateMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: return pp->getWithdrawnRoutesArraySize();
        case 1: return pp->getPathAttributeListArraySize();
        default: return 0;
    }
}

std::string BGPUpdateMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateMessage_Base *pp = (BGPUpdateMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getWithdrawnRoutes(i); return out.str();}
        case 1: {std::stringstream out; out << pp->getPathAttributeList(i); return out.str();}
        case 2: {std::stringstream out; out << pp->getNLRI(); return out.str();}
        default: return "";
    }
}

bool BGPUpdateMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateMessage_Base *pp = (BGPUpdateMessage_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *BGPUpdateMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(BGPUpdateWithdrawnRoutes));
        case 1: return opp_typename(typeid(BGPUpdatePathAttributeList));
        case 2: return opp_typename(typeid(BGPUpdateNLRI));
        default: return NULL;
    };
}

void *BGPUpdateMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateMessage_Base *pp = (BGPUpdateMessage_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getWithdrawnRoutes(i)); break;
        case 1: return (void *)static_cast<cObject *>(&pp->getPathAttributeList(i)); break;
        case 2: return (void *)(&pp->getNLRI()); break;
        default: return NULL;
    }
}


