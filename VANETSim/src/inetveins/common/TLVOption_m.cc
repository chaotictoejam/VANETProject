//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/common/TLVOption.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "TLVOption_m.h"

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

Register_Class(TLVOptionBase);

TLVOptionBase::TLVOptionBase() : ::cObject()
{
    this->type_var = -1;
    this->length_var = 0;
}

TLVOptionBase::TLVOptionBase(const TLVOptionBase& other) : ::cObject(other)
{
    copy(other);
}

TLVOptionBase::~TLVOptionBase()
{
}

TLVOptionBase& TLVOptionBase::operator=(const TLVOptionBase& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void TLVOptionBase::copy(const TLVOptionBase& other)
{
    this->type_var = other.type_var;
    this->length_var = other.length_var;
}

void TLVOptionBase::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->type_var);
    doPacking(b,this->length_var);
}

void TLVOptionBase::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->length_var);
}

short TLVOptionBase::getType() const
{
    return type_var;
}

void TLVOptionBase::setType(short type)
{
    this->type_var = type;
}

short TLVOptionBase::getLength() const
{
    return length_var;
}

void TLVOptionBase::setLength(short length)
{
    this->length_var = length;
}

class TLVOptionBaseDescriptor : public cClassDescriptor
{
  public:
    TLVOptionBaseDescriptor();
    virtual ~TLVOptionBaseDescriptor();

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

Register_ClassDescriptor(TLVOptionBaseDescriptor);

TLVOptionBaseDescriptor::TLVOptionBaseDescriptor() : cClassDescriptor("inetveins::TLVOptionBase", "cObject")
{
}

TLVOptionBaseDescriptor::~TLVOptionBaseDescriptor()
{
}

bool TLVOptionBaseDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TLVOptionBase *>(obj)!=NULL;
}

const char *TLVOptionBaseDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TLVOptionBaseDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TLVOptionBaseDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TLVOptionBaseDescriptor::getFieldName(void *object, int field) const
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

int TLVOptionBaseDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TLVOptionBaseDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "short",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *TLVOptionBaseDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TLVOptionBaseDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptionBase *pp = (TLVOptionBase *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TLVOptionBaseDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptionBase *pp = (TLVOptionBase *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: return long2string(pp->getLength());
        default: return "";
    }
}

bool TLVOptionBaseDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptionBase *pp = (TLVOptionBase *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setLength(string2long(value)); return true;
        default: return false;
    }
}

const char *TLVOptionBaseDescriptor::getFieldStructName(void *object, int field) const
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

void *TLVOptionBaseDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptionBase *pp = (TLVOptionBase *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TLVOptionRaw);

TLVOptionRaw::TLVOptionRaw() : ::inetveins::TLVOptionBase()
{
    bytes_arraysize = 0;
    this->bytes_var = 0;
}

TLVOptionRaw::TLVOptionRaw(const TLVOptionRaw& other) : ::inetveins::TLVOptionBase(other)
{
    bytes_arraysize = 0;
    this->bytes_var = 0;
    copy(other);
}

TLVOptionRaw::~TLVOptionRaw()
{
    delete [] bytes_var;
}

TLVOptionRaw& TLVOptionRaw::operator=(const TLVOptionRaw& other)
{
    if (this==&other) return *this;
    ::inetveins::TLVOptionBase::operator=(other);
    copy(other);
    return *this;
}

void TLVOptionRaw::copy(const TLVOptionRaw& other)
{
    delete [] this->bytes_var;
    this->bytes_var = (other.bytes_arraysize==0) ? NULL : new char[other.bytes_arraysize];
    bytes_arraysize = other.bytes_arraysize;
    for (unsigned int i=0; i<bytes_arraysize; i++)
        this->bytes_var[i] = other.bytes_var[i];
}

void TLVOptionRaw::parsimPack(cCommBuffer *b)
{
    ::inetveins::TLVOptionBase::parsimPack(b);
    b->pack(bytes_arraysize);
    doPacking(b,this->bytes_var,bytes_arraysize);
}

void TLVOptionRaw::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::TLVOptionBase::parsimUnpack(b);
    delete [] this->bytes_var;
    b->unpack(bytes_arraysize);
    if (bytes_arraysize==0) {
        this->bytes_var = 0;
    } else {
        this->bytes_var = new char[bytes_arraysize];
        doUnpacking(b,this->bytes_var,bytes_arraysize);
    }
}

void TLVOptionRaw::setBytesArraySize(unsigned int size)
{
    char *bytes_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = bytes_arraysize < size ? bytes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        bytes_var2[i] = this->bytes_var[i];
    for (unsigned int i=sz; i<size; i++)
        bytes_var2[i] = 0;
    bytes_arraysize = size;
    delete [] this->bytes_var;
    this->bytes_var = bytes_var2;
}

unsigned int TLVOptionRaw::getBytesArraySize() const
{
    return bytes_arraysize;
}

char TLVOptionRaw::getBytes(unsigned int k) const
{
    if (k>=bytes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", bytes_arraysize, k);
    return bytes_var[k];
}

void TLVOptionRaw::setBytes(unsigned int k, char bytes)
{
    if (k>=bytes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", bytes_arraysize, k);
    this->bytes_var[k] = bytes;
}

class TLVOptionRawDescriptor : public cClassDescriptor
{
  public:
    TLVOptionRawDescriptor();
    virtual ~TLVOptionRawDescriptor();

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

Register_ClassDescriptor(TLVOptionRawDescriptor);

TLVOptionRawDescriptor::TLVOptionRawDescriptor() : cClassDescriptor("inetveins::TLVOptionRaw", "inetveins::TLVOptionBase")
{
}

TLVOptionRawDescriptor::~TLVOptionRawDescriptor()
{
}

bool TLVOptionRawDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TLVOptionRaw *>(obj)!=NULL;
}

const char *TLVOptionRawDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TLVOptionRawDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int TLVOptionRawDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TLVOptionRawDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "bytes",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int TLVOptionRawDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bytes")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TLVOptionRawDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "char",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *TLVOptionRawDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TLVOptionRawDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptionRaw *pp = (TLVOptionRaw *)object; (void)pp;
    switch (field) {
        case 0: return pp->getBytesArraySize();
        default: return 0;
    }
}

std::string TLVOptionRawDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptionRaw *pp = (TLVOptionRaw *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getBytes(i));
        default: return "";
    }
}

bool TLVOptionRawDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptionRaw *pp = (TLVOptionRaw *)object; (void)pp;
    switch (field) {
        case 0: pp->setBytes(i,string2long(value)); return true;
        default: return false;
    }
}

const char *TLVOptionRawDescriptor::getFieldStructName(void *object, int field) const
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

void *TLVOptionRawDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptionRaw *pp = (TLVOptionRaw *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

TLVOptions_Base::TLVOptions_Base() : ::cObject()
{
}

TLVOptions_Base::TLVOptions_Base(const TLVOptions_Base& other) : ::cObject(other)
{
    copy(other);
}

TLVOptions_Base::~TLVOptions_Base()
{
}

TLVOptions_Base& TLVOptions_Base::operator=(const TLVOptions_Base& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void TLVOptions_Base::copy(const TLVOptions_Base& other)
{
}

void TLVOptions_Base::parsimPack(cCommBuffer *b)
{
    // field tlvOption is abstract -- please do packing in customized class
}

void TLVOptions_Base::parsimUnpack(cCommBuffer *b)
{
    // field tlvOption is abstract -- please do unpacking in customized class
}

class TLVOptionsDescriptor : public cClassDescriptor
{
  public:
    TLVOptionsDescriptor();
    virtual ~TLVOptionsDescriptor();

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

Register_ClassDescriptor(TLVOptionsDescriptor);

TLVOptionsDescriptor::TLVOptionsDescriptor() : cClassDescriptor("inetveins::TLVOptions", "cObject")
{
}

TLVOptionsDescriptor::~TLVOptionsDescriptor()
{
}

bool TLVOptionsDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TLVOptions_Base *>(obj)!=NULL;
}

const char *TLVOptionsDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TLVOptionsDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int TLVOptionsDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *TLVOptionsDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "tlvOption",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int TLVOptionsDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "tlvOption")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TLVOptionsDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "TLVOptionBase",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *TLVOptionsDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TLVOptionsDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptions_Base *pp = (TLVOptions_Base *)object; (void)pp;
    switch (field) {
        case 0: return pp->getTlvOptionArraySize();
        default: return 0;
    }
}

std::string TLVOptionsDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptions_Base *pp = (TLVOptions_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getTlvOption(i); return out.str();}
        default: return "";
    }
}

bool TLVOptionsDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptions_Base *pp = (TLVOptions_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TLVOptionsDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(TLVOptionBase));
        default: return NULL;
    };
}

void *TLVOptionsDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TLVOptions_Base *pp = (TLVOptions_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getTlvOption(i)); break;
        default: return NULL;
    }
}

} // namespace inetveins

