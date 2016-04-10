//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/bgpv4/BGPMessage/BGPOpen.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "BGPOpen_m.h"

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

BGPParameterValues::BGPParameterValues()
{
    authCode = 0;
    authenticationData = 0;
}

void doPacking(cCommBuffer *b, BGPParameterValues& a)
{
    doPacking(b,a.authCode);
    doPacking(b,a.authenticationData);
}

void doUnpacking(cCommBuffer *b, BGPParameterValues& a)
{
    doUnpacking(b,a.authCode);
    doUnpacking(b,a.authenticationData);
}

class BGPParameterValuesDescriptor : public cClassDescriptor
{
  public:
    BGPParameterValuesDescriptor();
    virtual ~BGPParameterValuesDescriptor();

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

Register_ClassDescriptor(BGPParameterValuesDescriptor);

BGPParameterValuesDescriptor::BGPParameterValuesDescriptor() : cClassDescriptor("BGPParameterValues", "")
{
}

BGPParameterValuesDescriptor::~BGPParameterValuesDescriptor()
{
}

bool BGPParameterValuesDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPParameterValues *>(obj)!=NULL;
}

const char *BGPParameterValuesDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPParameterValuesDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int BGPParameterValuesDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BGPParameterValuesDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "authCode",
        "authenticationData",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int BGPParameterValuesDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "authCode")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "authenticationData")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPParameterValuesDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "long",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *BGPParameterValuesDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPParameterValuesDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPParameterValues *pp = (BGPParameterValues *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPParameterValuesDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPParameterValues *pp = (BGPParameterValues *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->authCode);
        case 1: return long2string(pp->authenticationData);
        default: return "";
    }
}

bool BGPParameterValuesDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPParameterValues *pp = (BGPParameterValues *)object; (void)pp;
    switch (field) {
        case 0: pp->authCode = string2long(value); return true;
        case 1: pp->authenticationData = string2long(value); return true;
        default: return false;
    }
}

const char *BGPParameterValuesDescriptor::getFieldStructName(void *object, int field) const
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

void *BGPParameterValuesDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPParameterValues *pp = (BGPParameterValues *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

BGPOptionalParameters::BGPOptionalParameters()
{
    parameterType = 0;
    parameterLength = 0;
}

void doPacking(cCommBuffer *b, BGPOptionalParameters& a)
{
    doPacking(b,a.parameterType);
    doPacking(b,a.parameterLength);
    doPacking(b,a.parameterValues);
}

void doUnpacking(cCommBuffer *b, BGPOptionalParameters& a)
{
    doUnpacking(b,a.parameterType);
    doUnpacking(b,a.parameterLength);
    doUnpacking(b,a.parameterValues);
}

class BGPOptionalParametersDescriptor : public cClassDescriptor
{
  public:
    BGPOptionalParametersDescriptor();
    virtual ~BGPOptionalParametersDescriptor();

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

Register_ClassDescriptor(BGPOptionalParametersDescriptor);

BGPOptionalParametersDescriptor::BGPOptionalParametersDescriptor() : cClassDescriptor("BGPOptionalParameters", "")
{
}

BGPOptionalParametersDescriptor::~BGPOptionalParametersDescriptor()
{
}

bool BGPOptionalParametersDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPOptionalParameters *>(obj)!=NULL;
}

const char *BGPOptionalParametersDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPOptionalParametersDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int BGPOptionalParametersDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *BGPOptionalParametersDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "parameterType",
        "parameterLength",
        "parameterValues",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int BGPOptionalParametersDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "parameterType")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "parameterLength")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "parameterValues")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPOptionalParametersDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "unsigned short",
        "BGPParameterValues",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *BGPOptionalParametersDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPOptionalParametersDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPOptionalParameters *pp = (BGPOptionalParameters *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BGPOptionalParametersDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPOptionalParameters *pp = (BGPOptionalParameters *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->parameterType);
        case 1: return ulong2string(pp->parameterLength);
        case 2: {std::stringstream out; out << pp->parameterValues; return out.str();}
        default: return "";
    }
}

bool BGPOptionalParametersDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPOptionalParameters *pp = (BGPOptionalParameters *)object; (void)pp;
    switch (field) {
        case 0: pp->parameterType = string2long(value); return true;
        case 1: pp->parameterLength = string2ulong(value); return true;
        default: return false;
    }
}

const char *BGPOptionalParametersDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(BGPParameterValues));
        default: return NULL;
    };
}

void *BGPOptionalParametersDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPOptionalParameters *pp = (BGPOptionalParameters *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->parameterValues); break;
        default: return NULL;
    }
}

Register_Class(BGPOpenMessage);

BGPOpenMessage::BGPOpenMessage(const char *name, int kind) : ::BGPHeader(name,kind)
{
    this->setType(BGP_OPEN);
    this->setByteLength(BGP_HEADER_OCTETS + BGP_OPEN_OCTETS);

    this->version_var = 4;
    this->myAS_var = 0;
    this->holdTime_var = 0;
    optionalParameters_arraysize = 0;
    this->optionalParameters_var = 0;
}

BGPOpenMessage::BGPOpenMessage(const BGPOpenMessage& other) : ::BGPHeader(other)
{
    optionalParameters_arraysize = 0;
    this->optionalParameters_var = 0;
    copy(other);
}

BGPOpenMessage::~BGPOpenMessage()
{
    delete [] optionalParameters_var;
}

BGPOpenMessage& BGPOpenMessage::operator=(const BGPOpenMessage& other)
{
    if (this==&other) return *this;
    ::BGPHeader::operator=(other);
    copy(other);
    return *this;
}

void BGPOpenMessage::copy(const BGPOpenMessage& other)
{
    this->version_var = other.version_var;
    this->myAS_var = other.myAS_var;
    this->holdTime_var = other.holdTime_var;
    this->BGPIdentifier_var = other.BGPIdentifier_var;
    delete [] this->optionalParameters_var;
    this->optionalParameters_var = (other.optionalParameters_arraysize==0) ? NULL : new BGPOptionalParameters[other.optionalParameters_arraysize];
    optionalParameters_arraysize = other.optionalParameters_arraysize;
    for (unsigned int i=0; i<optionalParameters_arraysize; i++)
        this->optionalParameters_var[i] = other.optionalParameters_var[i];
}

void BGPOpenMessage::parsimPack(cCommBuffer *b)
{
    ::BGPHeader::parsimPack(b);
    doPacking(b,this->version_var);
    doPacking(b,this->myAS_var);
    doPacking(b,this->holdTime_var);
    doPacking(b,this->BGPIdentifier_var);
    b->pack(optionalParameters_arraysize);
    doPacking(b,this->optionalParameters_var,optionalParameters_arraysize);
}

void BGPOpenMessage::parsimUnpack(cCommBuffer *b)
{
    ::BGPHeader::parsimUnpack(b);
    doUnpacking(b,this->version_var);
    doUnpacking(b,this->myAS_var);
    doUnpacking(b,this->holdTime_var);
    doUnpacking(b,this->BGPIdentifier_var);
    delete [] this->optionalParameters_var;
    b->unpack(optionalParameters_arraysize);
    if (optionalParameters_arraysize==0) {
        this->optionalParameters_var = 0;
    } else {
        this->optionalParameters_var = new BGPOptionalParameters[optionalParameters_arraysize];
        doUnpacking(b,this->optionalParameters_var,optionalParameters_arraysize);
    }
}

char BGPOpenMessage::version() const
{
    return version_var;
}

void BGPOpenMessage::setVersion(char version)
{
    this->version_var = version;
}

unsigned short BGPOpenMessage::myAS() const
{
    return myAS_var;
}

void BGPOpenMessage::setMyAS(unsigned short myAS)
{
    this->myAS_var = myAS;
}

simtime_t BGPOpenMessage::holdTime() const
{
    return holdTime_var;
}

void BGPOpenMessage::setHoldTime(simtime_t holdTime)
{
    this->holdTime_var = holdTime;
}

IPv4Address& BGPOpenMessage::BGPIdentifier()
{
    return BGPIdentifier_var;
}

void BGPOpenMessage::setBGPIdentifier(const IPv4Address& BGPIdentifier)
{
    this->BGPIdentifier_var = BGPIdentifier;
}

void BGPOpenMessage::setOptionalParametersArraySize(unsigned int size)
{
    BGPOptionalParameters *optionalParameters_var2 = (size==0) ? NULL : new BGPOptionalParameters[size];
    unsigned int sz = optionalParameters_arraysize < size ? optionalParameters_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        optionalParameters_var2[i] = this->optionalParameters_var[i];
    optionalParameters_arraysize = size;
    delete [] this->optionalParameters_var;
    this->optionalParameters_var = optionalParameters_var2;
}

unsigned int BGPOpenMessage::optionalParametersArraySize() const
{
    return optionalParameters_arraysize;
}

BGPOptionalParameters& BGPOpenMessage::optionalParameters(unsigned int k)
{
    if (k>=optionalParameters_arraysize) throw cRuntimeError("Array of size %d indexed by %d", optionalParameters_arraysize, k);
    return optionalParameters_var[k];
}

void BGPOpenMessage::setOptionalParameters(unsigned int k, const BGPOptionalParameters& optionalParameters)
{
    if (k>=optionalParameters_arraysize) throw cRuntimeError("Array of size %d indexed by %d", optionalParameters_arraysize, k);
    this->optionalParameters_var[k] = optionalParameters;
}

class BGPOpenMessageDescriptor : public cClassDescriptor
{
  public:
    BGPOpenMessageDescriptor();
    virtual ~BGPOpenMessageDescriptor();

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

Register_ClassDescriptor(BGPOpenMessageDescriptor);

BGPOpenMessageDescriptor::BGPOpenMessageDescriptor() : cClassDescriptor("BGPOpenMessage", "BGPHeader")
{
}

BGPOpenMessageDescriptor::~BGPOpenMessageDescriptor()
{
}

bool BGPOpenMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BGPOpenMessage *>(obj)!=NULL;
}

const char *BGPOpenMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BGPOpenMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int BGPOpenMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *BGPOpenMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "version",
        "myAS",
        "holdTime",
        "BGPIdentifier",
        "optionalParameters",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int BGPOpenMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "version")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "myAS")==0) return base+1;
    if (fieldName[0]=='h' && strcmp(fieldName, "holdTime")==0) return base+2;
    if (fieldName[0]=='B' && strcmp(fieldName, "BGPIdentifier")==0) return base+3;
    if (fieldName[0]=='o' && strcmp(fieldName, "optionalParameters")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BGPOpenMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "char",
        "unsigned short",
        "simtime_t",
        "IPv4Address",
        "BGPOptionalParameters",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *BGPOpenMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BGPOpenMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BGPOpenMessage *pp = (BGPOpenMessage *)object; (void)pp;
    switch (field) {
        case 4: return pp->optionalParametersArraySize();
        default: return 0;
    }
}

std::string BGPOpenMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BGPOpenMessage *pp = (BGPOpenMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->version());
        case 1: return ulong2string(pp->myAS());
        case 2: return double2string(pp->holdTime());
        case 3: {std::stringstream out; out << pp->BGPIdentifier(); return out.str();}
        case 4: {std::stringstream out; out << pp->optionalParameters(i); return out.str();}
        default: return "";
    }
}

bool BGPOpenMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BGPOpenMessage *pp = (BGPOpenMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setVersion(string2long(value)); return true;
        case 1: pp->setMyAS(string2ulong(value)); return true;
        case 2: pp->setHoldTime(string2double(value)); return true;
        default: return false;
    }
}

const char *BGPOpenMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return opp_typename(typeid(IPv4Address));
        case 4: return opp_typename(typeid(BGPOptionalParameters));
        default: return NULL;
    };
}

void *BGPOpenMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BGPOpenMessage *pp = (BGPOpenMessage *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->BGPIdentifier()); break;
        case 4: return (void *)(&pp->optionalParameters(i)); break;
        default: return NULL;
    }
}


