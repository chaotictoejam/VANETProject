//
// Generated file, do not edit! Created by nedtool 4.6 from routing/bgpv4/BGPMessage/BGPUpdatePathAttributes.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "BGPUpdatePathAttributes_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::bgp::BGPUpdateAttributeTypeCode");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::bgp::BGPUpdateAttributeTypeCode"));
    e->insert(ORIGIN, "ORIGIN");
    e->insert(AS_PATH, "AS_PATH");
    e->insert(NEXT_HOP, "NEXT_HOP");
    e->insert(LOCAL_PREF, "LOCAL_PREF");
    e->insert(ATOMIC_AGGREGATE, "ATOMIC_AGGREGATE");
);

BGPUpdateAttributeFlags::BGPUpdateAttributeFlags()
{
    optionalBit = 0;
    transitiveBit = 0;
    partialBit = 0;
    estendedLengthBit = 0;
}

void doPacking(cCommBuffer *b, BGPUpdateAttributeFlags& a)
{
    doPacking(b,a.optionalBit);
    doPacking(b,a.transitiveBit);
    doPacking(b,a.partialBit);
    doPacking(b,a.estendedLengthBit);
}

void doUnpacking(cCommBuffer *b, BGPUpdateAttributeFlags& a)
{
    doUnpacking(b,a.optionalBit);
    doUnpacking(b,a.transitiveBit);
    doUnpacking(b,a.partialBit);
    doUnpacking(b,a.estendedLengthBit);
}

class BGPUpdateAttributeFlagsDescriptor : public cClassDescriptor
{
  public:
    BGPUpdateAttributeFlagsDescriptor();
    virtual ~BGPUpdateAttributeFlagsDescriptor();

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

Register_ClassDescriptor(BGPUpdateAttributeFlagsDescriptor);

BGPUpdateAttributeFlagsDescriptor::BGPUpdateAttributeFlagsDescriptor() : cClassDescriptor("inet::bgp::BGPUpdateAttributeFlags", "")
{
}

BGPUpdateAttributeFlagsDescriptor::~BGPUpdateAttributeFlagsDescriptor()
{
}

bool BGPUpdateAttributeFlagsDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdateAttributeFlags *>(obj)!=NULL;
}

const char *BGPUpdateAttributeFlagsDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdateAttributeFlagsDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int BGPUpdateAttributeFlagsDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BGPUpdateAttributeFlagsDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "optionalBit",
        "transitiveBit",
        "partialBit",
        "estendedLengthBit",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int BGPUpdateAttributeFlagsDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "optionalBit")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "transitiveBit")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "partialBit")==0) return base+2;
    if (fieldName[0]=='e' && strcmp(fieldName, "estendedLengthBit")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdateAttributeFlagsDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *BGPUpdateAttributeFlagsDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPUpdateAttributeFlagsDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateAttributeFlags *pp = (BGPUpdateAttributeFlags *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPUpdateAttributeFlagsDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateAttributeFlags *pp = (BGPUpdateAttributeFlags *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->optionalBit);
        case 1: return bool2string(pp->transitiveBit);
        case 2: return bool2string(pp->partialBit);
        case 3: return bool2string(pp->estendedLengthBit);
        default: return "";
    }
}

bool BGPUpdateAttributeFlagsDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateAttributeFlags *pp = (BGPUpdateAttributeFlags *)object; (void)pp;
    switch (field) {
        case 0: pp->optionalBit = string2bool(value); return true;
        case 1: pp->transitiveBit = string2bool(value); return true;
        case 2: pp->partialBit = string2bool(value); return true;
        case 3: pp->estendedLengthBit = string2bool(value); return true;
        default: return false;
    }
}

const char *BGPUpdateAttributeFlagsDescriptor::getFieldStructName(void *object, int field) const
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

void *BGPUpdateAttributeFlagsDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateAttributeFlags *pp = (BGPUpdateAttributeFlags *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

BGPUpdateAttributeType::BGPUpdateAttributeType()
{
    typeCode = 0;
}

void doPacking(cCommBuffer *b, BGPUpdateAttributeType& a)
{
    doPacking(b,a.flags);
    doPacking(b,a.typeCode);
}

void doUnpacking(cCommBuffer *b, BGPUpdateAttributeType& a)
{
    doUnpacking(b,a.flags);
    doUnpacking(b,a.typeCode);
}

class BGPUpdateAttributeTypeDescriptor : public cClassDescriptor
{
  public:
    BGPUpdateAttributeTypeDescriptor();
    virtual ~BGPUpdateAttributeTypeDescriptor();

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

Register_ClassDescriptor(BGPUpdateAttributeTypeDescriptor);

BGPUpdateAttributeTypeDescriptor::BGPUpdateAttributeTypeDescriptor() : cClassDescriptor("inet::bgp::BGPUpdateAttributeType", "")
{
}

BGPUpdateAttributeTypeDescriptor::~BGPUpdateAttributeTypeDescriptor()
{
}

bool BGPUpdateAttributeTypeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdateAttributeType *>(obj)!=NULL;
}

const char *BGPUpdateAttributeTypeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdateAttributeTypeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int BGPUpdateAttributeTypeDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *BGPUpdateAttributeTypeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "flags",
        "typeCode",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int BGPUpdateAttributeTypeDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "flags")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "typeCode")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdateAttributeTypeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "BGPUpdateAttributeFlags",
        "unsigned char",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *BGPUpdateAttributeTypeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "inet::bgp::BGPUpdateAttributeTypeCode";
            return NULL;
        default: return NULL;
    }
}

int BGPUpdateAttributeTypeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateAttributeType *pp = (BGPUpdateAttributeType *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPUpdateAttributeTypeDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateAttributeType *pp = (BGPUpdateAttributeType *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->flags; return out.str();}
        case 1: return ulong2string(pp->typeCode);
        default: return "";
    }
}

bool BGPUpdateAttributeTypeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateAttributeType *pp = (BGPUpdateAttributeType *)object; (void)pp;
    switch (field) {
        case 1: pp->typeCode = string2ulong(value); return true;
        default: return false;
    }
}

const char *BGPUpdateAttributeTypeDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(BGPUpdateAttributeFlags));
        default: return NULL;
    };
}

void *BGPUpdateAttributeTypeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdateAttributeType *pp = (BGPUpdateAttributeType *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->flags); break;
        default: return NULL;
    }
}

Register_Class(BGPUpdatePathAttributes);

BGPUpdatePathAttributes::BGPUpdatePathAttributes() : ::cObject()
{
    this->length_var = 0;
}

BGPUpdatePathAttributes::BGPUpdatePathAttributes(const BGPUpdatePathAttributes& other) : ::cObject(other)
{
    copy(other);
}

BGPUpdatePathAttributes::~BGPUpdatePathAttributes()
{
}

BGPUpdatePathAttributes& BGPUpdatePathAttributes::operator=(const BGPUpdatePathAttributes& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void BGPUpdatePathAttributes::copy(const BGPUpdatePathAttributes& other)
{
    this->type_var = other.type_var;
    this->length_var = other.length_var;
}

void BGPUpdatePathAttributes::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->type_var);
    doPacking(b,this->length_var);
}

void BGPUpdatePathAttributes::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->length_var);
}

BGPUpdateAttributeType& BGPUpdatePathAttributes::getType()
{
    return type_var;
}

void BGPUpdatePathAttributes::setType(const BGPUpdateAttributeType& type)
{
    this->type_var = type;
}

unsigned short BGPUpdatePathAttributes::getLength() const
{
    return length_var;
}

void BGPUpdatePathAttributes::setLength(unsigned short length)
{
    this->length_var = length;
}

class BGPUpdatePathAttributesDescriptor : public cClassDescriptor
{
  public:
    BGPUpdatePathAttributesDescriptor();
    virtual ~BGPUpdatePathAttributesDescriptor();

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

Register_ClassDescriptor(BGPUpdatePathAttributesDescriptor);

BGPUpdatePathAttributesDescriptor::BGPUpdatePathAttributesDescriptor() : cClassDescriptor("inet::bgp::BGPUpdatePathAttributes", "cObject")
{
}

BGPUpdatePathAttributesDescriptor::~BGPUpdatePathAttributesDescriptor()
{
}

bool BGPUpdatePathAttributesDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdatePathAttributes *>(obj)!=NULL;
}

const char *BGPUpdatePathAttributesDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdatePathAttributesDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int BGPUpdatePathAttributesDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *BGPUpdatePathAttributesDescriptor::getFieldName(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int BGPUpdatePathAttributesDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdatePathAttributesDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "BGPUpdateAttributeType",
        "unsigned short",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *BGPUpdatePathAttributesDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPUpdatePathAttributesDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributes *pp = (BGPUpdatePathAttributes *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPUpdatePathAttributesDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributes *pp = (BGPUpdatePathAttributes *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getType(); return out.str();}
        case 1: return ulong2string(pp->getLength());
        default: return "";
    }
}

bool BGPUpdatePathAttributesDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributes *pp = (BGPUpdatePathAttributes *)object; (void)pp;
    switch (field) {
        case 1: pp->setLength(string2ulong(value)); return true;
        default: return false;
    }
}

const char *BGPUpdatePathAttributesDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(BGPUpdateAttributeType));
        default: return NULL;
    };
}

void *BGPUpdatePathAttributesDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributes *pp = (BGPUpdatePathAttributes *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getType()); break;
        default: return NULL;
    }
}

Register_Class(BGPUpdatePathAttributesOrigin);

BGPUpdatePathAttributesOrigin::BGPUpdatePathAttributesOrigin() : ::inet::bgp::BGPUpdatePathAttributes()
{
    this->value_var = 0;
}

BGPUpdatePathAttributesOrigin::BGPUpdatePathAttributesOrigin(const BGPUpdatePathAttributesOrigin& other) : ::inet::bgp::BGPUpdatePathAttributes(other)
{
    copy(other);
}

BGPUpdatePathAttributesOrigin::~BGPUpdatePathAttributesOrigin()
{
}

BGPUpdatePathAttributesOrigin& BGPUpdatePathAttributesOrigin::operator=(const BGPUpdatePathAttributesOrigin& other)
{
    if (this==&other) return *this;
    ::inet::bgp::BGPUpdatePathAttributes::operator=(other);
    copy(other);
    return *this;
}

void BGPUpdatePathAttributesOrigin::copy(const BGPUpdatePathAttributesOrigin& other)
{
    this->value_var = other.value_var;
}

void BGPUpdatePathAttributesOrigin::parsimPack(cCommBuffer *b)
{
    ::inet::bgp::BGPUpdatePathAttributes::parsimPack(b);
    doPacking(b,this->value_var);
}

void BGPUpdatePathAttributesOrigin::parsimUnpack(cCommBuffer *b)
{
    ::inet::bgp::BGPUpdatePathAttributes::parsimUnpack(b);
    doUnpacking(b,this->value_var);
}

int BGPUpdatePathAttributesOrigin::getValue() const
{
    return value_var;
}

void BGPUpdatePathAttributesOrigin::setValue(int value)
{
    this->value_var = value;
}

class BGPUpdatePathAttributesOriginDescriptor : public cClassDescriptor
{
  public:
    BGPUpdatePathAttributesOriginDescriptor();
    virtual ~BGPUpdatePathAttributesOriginDescriptor();

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

Register_ClassDescriptor(BGPUpdatePathAttributesOriginDescriptor);

BGPUpdatePathAttributesOriginDescriptor::BGPUpdatePathAttributesOriginDescriptor() : cClassDescriptor("inet::bgp::BGPUpdatePathAttributesOrigin", "inet::bgp::BGPUpdatePathAttributes")
{
}

BGPUpdatePathAttributesOriginDescriptor::~BGPUpdatePathAttributesOriginDescriptor()
{
}

bool BGPUpdatePathAttributesOriginDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdatePathAttributesOrigin *>(obj)!=NULL;
}

const char *BGPUpdatePathAttributesOriginDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdatePathAttributesOriginDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int BGPUpdatePathAttributesOriginDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BGPUpdatePathAttributesOriginDescriptor::getFieldName(void *object, int field) const
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

int BGPUpdatePathAttributesOriginDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "value")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdatePathAttributesOriginDescriptor::getFieldTypeString(void *object, int field) const
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

const char *BGPUpdatePathAttributesOriginDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::bgp::BGPSessionType";
            return NULL;
        default: return NULL;
    }
}

int BGPUpdatePathAttributesOriginDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesOrigin *pp = (BGPUpdatePathAttributesOrigin *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPUpdatePathAttributesOriginDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesOrigin *pp = (BGPUpdatePathAttributesOrigin *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getValue());
        default: return "";
    }
}

bool BGPUpdatePathAttributesOriginDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesOrigin *pp = (BGPUpdatePathAttributesOrigin *)object; (void)pp;
    switch (field) {
        case 0: pp->setValue(string2long(value)); return true;
        default: return false;
    }
}

const char *BGPUpdatePathAttributesOriginDescriptor::getFieldStructName(void *object, int field) const
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

void *BGPUpdatePathAttributesOriginDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesOrigin *pp = (BGPUpdatePathAttributesOrigin *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(BGPUpdatePathAttributesASPath);

BGPUpdatePathAttributesASPath::BGPUpdatePathAttributesASPath() : ::inet::bgp::BGPUpdatePathAttributes()
{
    value_arraysize = 0;
    this->value_var = 0;
}

BGPUpdatePathAttributesASPath::BGPUpdatePathAttributesASPath(const BGPUpdatePathAttributesASPath& other) : ::inet::bgp::BGPUpdatePathAttributes(other)
{
    value_arraysize = 0;
    this->value_var = 0;
    copy(other);
}

BGPUpdatePathAttributesASPath::~BGPUpdatePathAttributesASPath()
{
    delete [] value_var;
}

BGPUpdatePathAttributesASPath& BGPUpdatePathAttributesASPath::operator=(const BGPUpdatePathAttributesASPath& other)
{
    if (this==&other) return *this;
    ::inet::bgp::BGPUpdatePathAttributes::operator=(other);
    copy(other);
    return *this;
}

void BGPUpdatePathAttributesASPath::copy(const BGPUpdatePathAttributesASPath& other)
{
    delete [] this->value_var;
    this->value_var = (other.value_arraysize==0) ? NULL : new BGPASPathSegment[other.value_arraysize];
    value_arraysize = other.value_arraysize;
    for (unsigned int i=0; i<value_arraysize; i++)
        this->value_var[i] = other.value_var[i];
}

void BGPUpdatePathAttributesASPath::parsimPack(cCommBuffer *b)
{
    ::inet::bgp::BGPUpdatePathAttributes::parsimPack(b);
    b->pack(value_arraysize);
    doPacking(b,this->value_var,value_arraysize);
}

void BGPUpdatePathAttributesASPath::parsimUnpack(cCommBuffer *b)
{
    ::inet::bgp::BGPUpdatePathAttributes::parsimUnpack(b);
    delete [] this->value_var;
    b->unpack(value_arraysize);
    if (value_arraysize==0) {
        this->value_var = 0;
    } else {
        this->value_var = new BGPASPathSegment[value_arraysize];
        doUnpacking(b,this->value_var,value_arraysize);
    }
}

void BGPUpdatePathAttributesASPath::setValueArraySize(unsigned int size)
{
    BGPASPathSegment *value_var2 = (size==0) ? NULL : new BGPASPathSegment[size];
    unsigned int sz = value_arraysize < size ? value_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        value_var2[i] = this->value_var[i];
    value_arraysize = size;
    delete [] this->value_var;
    this->value_var = value_var2;
}

unsigned int BGPUpdatePathAttributesASPath::getValueArraySize() const
{
    return value_arraysize;
}

BGPASPathSegment& BGPUpdatePathAttributesASPath::getValue(unsigned int k)
{
    if (k>=value_arraysize) throw cRuntimeError("Array of size %d indexed by %d", value_arraysize, k);
    return value_var[k];
}

void BGPUpdatePathAttributesASPath::setValue(unsigned int k, const BGPASPathSegment& value)
{
    if (k>=value_arraysize) throw cRuntimeError("Array of size %d indexed by %d", value_arraysize, k);
    this->value_var[k] = value;
}

class BGPUpdatePathAttributesASPathDescriptor : public cClassDescriptor
{
  public:
    BGPUpdatePathAttributesASPathDescriptor();
    virtual ~BGPUpdatePathAttributesASPathDescriptor();

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

Register_ClassDescriptor(BGPUpdatePathAttributesASPathDescriptor);

BGPUpdatePathAttributesASPathDescriptor::BGPUpdatePathAttributesASPathDescriptor() : cClassDescriptor("inet::bgp::BGPUpdatePathAttributesASPath", "inet::bgp::BGPUpdatePathAttributes")
{
}

BGPUpdatePathAttributesASPathDescriptor::~BGPUpdatePathAttributesASPathDescriptor()
{
}

bool BGPUpdatePathAttributesASPathDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdatePathAttributesASPath *>(obj)!=NULL;
}

const char *BGPUpdatePathAttributesASPathDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdatePathAttributesASPathDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int BGPUpdatePathAttributesASPathDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BGPUpdatePathAttributesASPathDescriptor::getFieldName(void *object, int field) const
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

int BGPUpdatePathAttributesASPathDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "value")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdatePathAttributesASPathDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "BGPASPathSegment",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *BGPUpdatePathAttributesASPathDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPUpdatePathAttributesASPathDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesASPath *pp = (BGPUpdatePathAttributesASPath *)object; (void)pp;
    switch (field) {
        case 0: return pp->getValueArraySize();
        default: return 0;
    }
}

std::string BGPUpdatePathAttributesASPathDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesASPath *pp = (BGPUpdatePathAttributesASPath *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getValue(i); return out.str();}
        default: return "";
    }
}

bool BGPUpdatePathAttributesASPathDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesASPath *pp = (BGPUpdatePathAttributesASPath *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *BGPUpdatePathAttributesASPathDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(BGPASPathSegment));
        default: return NULL;
    };
}

void *BGPUpdatePathAttributesASPathDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesASPath *pp = (BGPUpdatePathAttributesASPath *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getValue(i)); break;
        default: return NULL;
    }
}

Register_Class(BGPUpdatePathAttributesNextHop);

BGPUpdatePathAttributesNextHop::BGPUpdatePathAttributesNextHop() : ::inet::bgp::BGPUpdatePathAttributes()
{
}

BGPUpdatePathAttributesNextHop::BGPUpdatePathAttributesNextHop(const BGPUpdatePathAttributesNextHop& other) : ::inet::bgp::BGPUpdatePathAttributes(other)
{
    copy(other);
}

BGPUpdatePathAttributesNextHop::~BGPUpdatePathAttributesNextHop()
{
}

BGPUpdatePathAttributesNextHop& BGPUpdatePathAttributesNextHop::operator=(const BGPUpdatePathAttributesNextHop& other)
{
    if (this==&other) return *this;
    ::inet::bgp::BGPUpdatePathAttributes::operator=(other);
    copy(other);
    return *this;
}

void BGPUpdatePathAttributesNextHop::copy(const BGPUpdatePathAttributesNextHop& other)
{
    this->value_var = other.value_var;
}

void BGPUpdatePathAttributesNextHop::parsimPack(cCommBuffer *b)
{
    ::inet::bgp::BGPUpdatePathAttributes::parsimPack(b);
    doPacking(b,this->value_var);
}

void BGPUpdatePathAttributesNextHop::parsimUnpack(cCommBuffer *b)
{
    ::inet::bgp::BGPUpdatePathAttributes::parsimUnpack(b);
    doUnpacking(b,this->value_var);
}

IPv4Address& BGPUpdatePathAttributesNextHop::getValue()
{
    return value_var;
}

void BGPUpdatePathAttributesNextHop::setValue(const IPv4Address& value)
{
    this->value_var = value;
}

class BGPUpdatePathAttributesNextHopDescriptor : public cClassDescriptor
{
  public:
    BGPUpdatePathAttributesNextHopDescriptor();
    virtual ~BGPUpdatePathAttributesNextHopDescriptor();

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

Register_ClassDescriptor(BGPUpdatePathAttributesNextHopDescriptor);

BGPUpdatePathAttributesNextHopDescriptor::BGPUpdatePathAttributesNextHopDescriptor() : cClassDescriptor("inet::bgp::BGPUpdatePathAttributesNextHop", "inet::bgp::BGPUpdatePathAttributes")
{
}

BGPUpdatePathAttributesNextHopDescriptor::~BGPUpdatePathAttributesNextHopDescriptor()
{
}

bool BGPUpdatePathAttributesNextHopDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdatePathAttributesNextHop *>(obj)!=NULL;
}

const char *BGPUpdatePathAttributesNextHopDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdatePathAttributesNextHopDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int BGPUpdatePathAttributesNextHopDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *BGPUpdatePathAttributesNextHopDescriptor::getFieldName(void *object, int field) const
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

int BGPUpdatePathAttributesNextHopDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "value")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdatePathAttributesNextHopDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *BGPUpdatePathAttributesNextHopDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPUpdatePathAttributesNextHopDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesNextHop *pp = (BGPUpdatePathAttributesNextHop *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPUpdatePathAttributesNextHopDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesNextHop *pp = (BGPUpdatePathAttributesNextHop *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getValue(); return out.str();}
        default: return "";
    }
}

bool BGPUpdatePathAttributesNextHopDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesNextHop *pp = (BGPUpdatePathAttributesNextHop *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *BGPUpdatePathAttributesNextHopDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *BGPUpdatePathAttributesNextHopDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesNextHop *pp = (BGPUpdatePathAttributesNextHop *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getValue()); break;
        default: return NULL;
    }
}

Register_Class(BGPUpdatePathAttributesLocalPref);

BGPUpdatePathAttributesLocalPref::BGPUpdatePathAttributesLocalPref() : ::inet::bgp::BGPUpdatePathAttributes()
{
    this->value_var = 0;
}

BGPUpdatePathAttributesLocalPref::BGPUpdatePathAttributesLocalPref(const BGPUpdatePathAttributesLocalPref& other) : ::inet::bgp::BGPUpdatePathAttributes(other)
{
    copy(other);
}

BGPUpdatePathAttributesLocalPref::~BGPUpdatePathAttributesLocalPref()
{
}

BGPUpdatePathAttributesLocalPref& BGPUpdatePathAttributesLocalPref::operator=(const BGPUpdatePathAttributesLocalPref& other)
{
    if (this==&other) return *this;
    ::inet::bgp::BGPUpdatePathAttributes::operator=(other);
    copy(other);
    return *this;
}

void BGPUpdatePathAttributesLocalPref::copy(const BGPUpdatePathAttributesLocalPref& other)
{
    this->value_var = other.value_var;
}

void BGPUpdatePathAttributesLocalPref::parsimPack(cCommBuffer *b)
{
    ::inet::bgp::BGPUpdatePathAttributes::parsimPack(b);
    doPacking(b,this->value_var);
}

void BGPUpdatePathAttributesLocalPref::parsimUnpack(cCommBuffer *b)
{
    ::inet::bgp::BGPUpdatePathAttributes::parsimUnpack(b);
    doUnpacking(b,this->value_var);
}

unsigned int BGPUpdatePathAttributesLocalPref::getValue() const
{
    return value_var;
}

void BGPUpdatePathAttributesLocalPref::setValue(unsigned int value)
{
    this->value_var = value;
}

class BGPUpdatePathAttributesLocalPrefDescriptor : public cClassDescriptor
{
  public:
    BGPUpdatePathAttributesLocalPrefDescriptor();
    virtual ~BGPUpdatePathAttributesLocalPrefDescriptor();

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

Register_ClassDescriptor(BGPUpdatePathAttributesLocalPrefDescriptor);

BGPUpdatePathAttributesLocalPrefDescriptor::BGPUpdatePathAttributesLocalPrefDescriptor() : cClassDescriptor("inet::bgp::BGPUpdatePathAttributesLocalPref", "inet::bgp::BGPUpdatePathAttributes")
{
}

BGPUpdatePathAttributesLocalPrefDescriptor::~BGPUpdatePathAttributesLocalPrefDescriptor()
{
}

bool BGPUpdatePathAttributesLocalPrefDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdatePathAttributesLocalPref *>(obj)!=NULL;
}

const char *BGPUpdatePathAttributesLocalPrefDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdatePathAttributesLocalPrefDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int BGPUpdatePathAttributesLocalPrefDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BGPUpdatePathAttributesLocalPrefDescriptor::getFieldName(void *object, int field) const
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

int BGPUpdatePathAttributesLocalPrefDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "value")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdatePathAttributesLocalPrefDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *BGPUpdatePathAttributesLocalPrefDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPUpdatePathAttributesLocalPrefDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesLocalPref *pp = (BGPUpdatePathAttributesLocalPref *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPUpdatePathAttributesLocalPrefDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesLocalPref *pp = (BGPUpdatePathAttributesLocalPref *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getValue());
        default: return "";
    }
}

bool BGPUpdatePathAttributesLocalPrefDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesLocalPref *pp = (BGPUpdatePathAttributesLocalPref *)object; (void)pp;
    switch (field) {
        case 0: pp->setValue(string2ulong(value)); return true;
        default: return false;
    }
}

const char *BGPUpdatePathAttributesLocalPrefDescriptor::getFieldStructName(void *object, int field) const
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

void *BGPUpdatePathAttributesLocalPrefDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesLocalPref *pp = (BGPUpdatePathAttributesLocalPref *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::bgp::BGPUpdateAtomicAggregateValues");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::bgp::BGPUpdateAtomicAggregateValues"));
    e->insert(NO_SPECIFIC_ROUTE, "NO_SPECIFIC_ROUTE");
    e->insert(SPECIFIC_ROUTE, "SPECIFIC_ROUTE");
);

Register_Class(BGPUpdatePathAttributesAtomicAggregate);

BGPUpdatePathAttributesAtomicAggregate::BGPUpdatePathAttributesAtomicAggregate() : ::inet::bgp::BGPUpdatePathAttributes()
{
    this->value_var = 0;
}

BGPUpdatePathAttributesAtomicAggregate::BGPUpdatePathAttributesAtomicAggregate(const BGPUpdatePathAttributesAtomicAggregate& other) : ::inet::bgp::BGPUpdatePathAttributes(other)
{
    copy(other);
}

BGPUpdatePathAttributesAtomicAggregate::~BGPUpdatePathAttributesAtomicAggregate()
{
}

BGPUpdatePathAttributesAtomicAggregate& BGPUpdatePathAttributesAtomicAggregate::operator=(const BGPUpdatePathAttributesAtomicAggregate& other)
{
    if (this==&other) return *this;
    ::inet::bgp::BGPUpdatePathAttributes::operator=(other);
    copy(other);
    return *this;
}

void BGPUpdatePathAttributesAtomicAggregate::copy(const BGPUpdatePathAttributesAtomicAggregate& other)
{
    this->value_var = other.value_var;
}

void BGPUpdatePathAttributesAtomicAggregate::parsimPack(cCommBuffer *b)
{
    ::inet::bgp::BGPUpdatePathAttributes::parsimPack(b);
    doPacking(b,this->value_var);
}

void BGPUpdatePathAttributesAtomicAggregate::parsimUnpack(cCommBuffer *b)
{
    ::inet::bgp::BGPUpdatePathAttributes::parsimUnpack(b);
    doUnpacking(b,this->value_var);
}

int BGPUpdatePathAttributesAtomicAggregate::getValue() const
{
    return value_var;
}

void BGPUpdatePathAttributesAtomicAggregate::setValue(int value)
{
    this->value_var = value;
}

class BGPUpdatePathAttributesAtomicAggregateDescriptor : public cClassDescriptor
{
  public:
    BGPUpdatePathAttributesAtomicAggregateDescriptor();
    virtual ~BGPUpdatePathAttributesAtomicAggregateDescriptor();

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

Register_ClassDescriptor(BGPUpdatePathAttributesAtomicAggregateDescriptor);

BGPUpdatePathAttributesAtomicAggregateDescriptor::BGPUpdatePathAttributesAtomicAggregateDescriptor() : cClassDescriptor("inet::bgp::BGPUpdatePathAttributesAtomicAggregate", "inet::bgp::BGPUpdatePathAttributes")
{
}

BGPUpdatePathAttributesAtomicAggregateDescriptor::~BGPUpdatePathAttributesAtomicAggregateDescriptor()
{
}

bool BGPUpdatePathAttributesAtomicAggregateDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPUpdatePathAttributesAtomicAggregate *>(obj)!=NULL;
}

const char *BGPUpdatePathAttributesAtomicAggregateDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPUpdatePathAttributesAtomicAggregateDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int BGPUpdatePathAttributesAtomicAggregateDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BGPUpdatePathAttributesAtomicAggregateDescriptor::getFieldName(void *object, int field) const
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

int BGPUpdatePathAttributesAtomicAggregateDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "value")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPUpdatePathAttributesAtomicAggregateDescriptor::getFieldTypeString(void *object, int field) const
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

const char *BGPUpdatePathAttributesAtomicAggregateDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::bgp::BGPUpdateAtomicAggregateValues";
            return NULL;
        default: return NULL;
    }
}

int BGPUpdatePathAttributesAtomicAggregateDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesAtomicAggregate *pp = (BGPUpdatePathAttributesAtomicAggregate *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPUpdatePathAttributesAtomicAggregateDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesAtomicAggregate *pp = (BGPUpdatePathAttributesAtomicAggregate *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getValue());
        default: return "";
    }
}

bool BGPUpdatePathAttributesAtomicAggregateDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesAtomicAggregate *pp = (BGPUpdatePathAttributesAtomicAggregate *)object; (void)pp;
    switch (field) {
        case 0: pp->setValue(string2long(value)); return true;
        default: return false;
    }
}

const char *BGPUpdatePathAttributesAtomicAggregateDescriptor::getFieldStructName(void *object, int field) const
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

void *BGPUpdatePathAttributesAtomicAggregateDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPUpdatePathAttributesAtomicAggregate *pp = (BGPUpdatePathAttributesAtomicAggregate *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace bgp
} // namespace inet

