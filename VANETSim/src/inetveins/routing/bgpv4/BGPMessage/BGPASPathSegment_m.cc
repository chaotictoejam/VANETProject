//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/routing/bgpv4/BGPMessage/BGPASPathSegment.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "BGPASPathSegment_m.h"

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



namespace inetveins {
namespace bgp {

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

Register_Class(BGPASPathSegment);

BGPASPathSegment::BGPASPathSegment() : ::cObject()
{
    this->type_var = 0;
    this->length_var = 0;
    asValue_arraysize = 0;
    this->asValue_var = 0;
}

BGPASPathSegment::BGPASPathSegment(const BGPASPathSegment& other) : ::cObject(other)
{
    asValue_arraysize = 0;
    this->asValue_var = 0;
    copy(other);
}

BGPASPathSegment::~BGPASPathSegment()
{
    delete [] asValue_var;
}

BGPASPathSegment& BGPASPathSegment::operator=(const BGPASPathSegment& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void BGPASPathSegment::copy(const BGPASPathSegment& other)
{
    this->type_var = other.type_var;
    this->length_var = other.length_var;
    delete [] this->asValue_var;
    this->asValue_var = (other.asValue_arraysize==0) ? NULL : new unsigned short[other.asValue_arraysize];
    asValue_arraysize = other.asValue_arraysize;
    for (unsigned int i=0; i<asValue_arraysize; i++)
        this->asValue_var[i] = other.asValue_var[i];
}

void BGPASPathSegment::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->type_var);
    doPacking(b,this->length_var);
    b->pack(asValue_arraysize);
    doPacking(b,this->asValue_var,asValue_arraysize);
}

void BGPASPathSegment::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->length_var);
    delete [] this->asValue_var;
    b->unpack(asValue_arraysize);
    if (asValue_arraysize==0) {
        this->asValue_var = 0;
    } else {
        this->asValue_var = new unsigned short[asValue_arraysize];
        doUnpacking(b,this->asValue_var,asValue_arraysize);
    }
}

unsigned char BGPASPathSegment::getType() const
{
    return type_var;
}

void BGPASPathSegment::setType(unsigned char type)
{
    this->type_var = type;
}

unsigned char BGPASPathSegment::getLength() const
{
    return length_var;
}

void BGPASPathSegment::setLength(unsigned char length)
{
    this->length_var = length;
}

void BGPASPathSegment::setAsValueArraySize(unsigned int size)
{
    unsigned short *asValue_var2 = (size==0) ? NULL : new unsigned short[size];
    unsigned int sz = asValue_arraysize < size ? asValue_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        asValue_var2[i] = this->asValue_var[i];
    for (unsigned int i=sz; i<size; i++)
        asValue_var2[i] = 0;
    asValue_arraysize = size;
    delete [] this->asValue_var;
    this->asValue_var = asValue_var2;
}

unsigned int BGPASPathSegment::getAsValueArraySize() const
{
    return asValue_arraysize;
}

unsigned short BGPASPathSegment::getAsValue(unsigned int k) const
{
    if (k>=asValue_arraysize) throw cRuntimeError("Array of size %d indexed by %d", asValue_arraysize, k);
    return asValue_var[k];
}

void BGPASPathSegment::setAsValue(unsigned int k, unsigned short asValue)
{
    if (k>=asValue_arraysize) throw cRuntimeError("Array of size %d indexed by %d", asValue_arraysize, k);
    this->asValue_var[k] = asValue;
}

class BGPASPathSegmentDescriptor : public cClassDescriptor
{
  public:
    BGPASPathSegmentDescriptor();
    virtual ~BGPASPathSegmentDescriptor();

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

Register_ClassDescriptor(BGPASPathSegmentDescriptor);

BGPASPathSegmentDescriptor::BGPASPathSegmentDescriptor() : cClassDescriptor("inetveins::bgp::BGPASPathSegment", "cObject")
{
}

BGPASPathSegmentDescriptor::~BGPASPathSegmentDescriptor()
{
}

bool BGPASPathSegmentDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPASPathSegment *>(obj)!=NULL;
}

const char *BGPASPathSegmentDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPASPathSegmentDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int BGPASPathSegmentDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BGPASPathSegmentDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "length",
        "asValue",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int BGPASPathSegmentDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "asValue")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPASPathSegmentDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
        "unsigned char",
        "unsigned short",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *BGPASPathSegmentDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inetveins::bgp::BGPPathSegmentType";
            return NULL;
        default: return NULL;
    }
}

int BGPASPathSegmentDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPASPathSegment *pp = (BGPASPathSegment *)object; (void)pp;
    switch (field) {
        case 2: return pp->getAsValueArraySize();
        default: return 0;
    }
}

std::string BGPASPathSegmentDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPASPathSegment *pp = (BGPASPathSegment *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getType());
        case 1: return ulong2string(pp->getLength());
        case 2: return ulong2string(pp->getAsValue(i));
        default: return "";
    }
}

bool BGPASPathSegmentDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPASPathSegment *pp = (BGPASPathSegment *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2ulong(value)); return true;
        case 1: pp->setLength(string2ulong(value)); return true;
        case 2: pp->setAsValue(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *BGPASPathSegmentDescriptor::getFieldStructName(void *object, int field) const
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

void *BGPASPathSegmentDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPASPathSegment *pp = (BGPASPathSegment *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace bgp
} // namespace inetveins

