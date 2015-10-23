//
// Generated file, do not edit! Created by nedtool 4.6 from routing/pim/PIMPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "PIMPacket_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::PIMPacketType");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::PIMPacketType"));
    e->insert(Hello, "Hello");
    e->insert(Register, "Register");
    e->insert(RegisterStop, "RegisterStop");
    e->insert(JoinPrune, "JoinPrune");
    e->insert(Bootstrap, "Bootstrap");
    e->insert(Assert, "Assert");
    e->insert(Graft, "Graft");
    e->insert(GraftAck, "GraftAck");
    e->insert(CandidateRPAdvertisement, "CandidateRPAdvertisement");
    e->insert(StateRefresh, "StateRefresh");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::PIMHelloOptionType");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::PIMHelloOptionType"));
    e->insert(Holdtime, "Holdtime");
    e->insert(LANPruneDelay, "LANPruneDelay");
    e->insert(DRPriority, "DRPriority");
    e->insert(GenerationID, "GenerationID");
    e->insert(StateRefreshCapable, "StateRefreshCapable");
    e->insert(AddressList, "AddressList");
);

Register_Class(HelloOption);

HelloOption::HelloOption() : ::cObject()
{
    this->type_var = 0;
}

HelloOption::HelloOption(const HelloOption& other) : ::cObject(other)
{
    copy(other);
}

HelloOption::~HelloOption()
{
}

HelloOption& HelloOption::operator=(const HelloOption& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void HelloOption::copy(const HelloOption& other)
{
    this->type_var = other.type_var;
}

void HelloOption::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->type_var);
}

void HelloOption::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->type_var);
}

short HelloOption::getType() const
{
    return type_var;
}

void HelloOption::setType(short type)
{
    this->type_var = type;
}

class HelloOptionDescriptor : public cClassDescriptor
{
  public:
    HelloOptionDescriptor();
    virtual ~HelloOptionDescriptor();

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

Register_ClassDescriptor(HelloOptionDescriptor);

HelloOptionDescriptor::HelloOptionDescriptor() : cClassDescriptor("inet::HelloOption", "cObject")
{
}

HelloOptionDescriptor::~HelloOptionDescriptor()
{
}

bool HelloOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HelloOption *>(obj)!=NULL;
}

const char *HelloOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HelloOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HelloOptionDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HelloOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HelloOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HelloOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *HelloOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::PIMHelloOptionType";
            return NULL;
        default: return NULL;
    }
}

int HelloOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HelloOption *pp = (HelloOption *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HelloOptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HelloOption *pp = (HelloOption *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        default: return "";
    }
}

bool HelloOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HelloOption *pp = (HelloOption *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *HelloOptionDescriptor::getFieldStructName(void *object, int field) const
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

void *HelloOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HelloOption *pp = (HelloOption *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HoldtimeOption);

HoldtimeOption::HoldtimeOption() : ::inet::HelloOption()
{
    this->setType(Holdtime);

    this->holdTime_var = 0;
}

HoldtimeOption::HoldtimeOption(const HoldtimeOption& other) : ::inet::HelloOption(other)
{
    copy(other);
}

HoldtimeOption::~HoldtimeOption()
{
}

HoldtimeOption& HoldtimeOption::operator=(const HoldtimeOption& other)
{
    if (this==&other) return *this;
    ::inet::HelloOption::operator=(other);
    copy(other);
    return *this;
}

void HoldtimeOption::copy(const HoldtimeOption& other)
{
    this->holdTime_var = other.holdTime_var;
}

void HoldtimeOption::parsimPack(cCommBuffer *b)
{
    ::inet::HelloOption::parsimPack(b);
    doPacking(b,this->holdTime_var);
}

void HoldtimeOption::parsimUnpack(cCommBuffer *b)
{
    ::inet::HelloOption::parsimUnpack(b);
    doUnpacking(b,this->holdTime_var);
}

uint16_t HoldtimeOption::getHoldTime() const
{
    return holdTime_var;
}

void HoldtimeOption::setHoldTime(uint16_t holdTime)
{
    this->holdTime_var = holdTime;
}

class HoldtimeOptionDescriptor : public cClassDescriptor
{
  public:
    HoldtimeOptionDescriptor();
    virtual ~HoldtimeOptionDescriptor();

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

Register_ClassDescriptor(HoldtimeOptionDescriptor);

HoldtimeOptionDescriptor::HoldtimeOptionDescriptor() : cClassDescriptor("inet::HoldtimeOption", "inet::HelloOption")
{
}

HoldtimeOptionDescriptor::~HoldtimeOptionDescriptor()
{
}

bool HoldtimeOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HoldtimeOption *>(obj)!=NULL;
}

const char *HoldtimeOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HoldtimeOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HoldtimeOptionDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HoldtimeOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "holdTime",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HoldtimeOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "holdTime")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HoldtimeOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16_t",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *HoldtimeOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HoldtimeOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HoldtimeOption *pp = (HoldtimeOption *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HoldtimeOptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HoldtimeOption *pp = (HoldtimeOption *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getHoldTime());
        default: return "";
    }
}

bool HoldtimeOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HoldtimeOption *pp = (HoldtimeOption *)object; (void)pp;
    switch (field) {
        case 0: pp->setHoldTime(string2ulong(value)); return true;
        default: return false;
    }
}

const char *HoldtimeOptionDescriptor::getFieldStructName(void *object, int field) const
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

void *HoldtimeOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HoldtimeOption *pp = (HoldtimeOption *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(LANPruneDelayOption);

LANPruneDelayOption::LANPruneDelayOption() : ::inet::HelloOption()
{
    this->setType(LANPruneDelay);

    this->propagationDelay_var = 0;
    this->overrideInterval_var = 0;
}

LANPruneDelayOption::LANPruneDelayOption(const LANPruneDelayOption& other) : ::inet::HelloOption(other)
{
    copy(other);
}

LANPruneDelayOption::~LANPruneDelayOption()
{
}

LANPruneDelayOption& LANPruneDelayOption::operator=(const LANPruneDelayOption& other)
{
    if (this==&other) return *this;
    ::inet::HelloOption::operator=(other);
    copy(other);
    return *this;
}

void LANPruneDelayOption::copy(const LANPruneDelayOption& other)
{
    this->propagationDelay_var = other.propagationDelay_var;
    this->overrideInterval_var = other.overrideInterval_var;
}

void LANPruneDelayOption::parsimPack(cCommBuffer *b)
{
    ::inet::HelloOption::parsimPack(b);
    doPacking(b,this->propagationDelay_var);
    doPacking(b,this->overrideInterval_var);
}

void LANPruneDelayOption::parsimUnpack(cCommBuffer *b)
{
    ::inet::HelloOption::parsimUnpack(b);
    doUnpacking(b,this->propagationDelay_var);
    doUnpacking(b,this->overrideInterval_var);
}

uint16_t LANPruneDelayOption::getPropagationDelay() const
{
    return propagationDelay_var;
}

void LANPruneDelayOption::setPropagationDelay(uint16_t propagationDelay)
{
    this->propagationDelay_var = propagationDelay;
}

uint16_t LANPruneDelayOption::getOverrideInterval() const
{
    return overrideInterval_var;
}

void LANPruneDelayOption::setOverrideInterval(uint16_t overrideInterval)
{
    this->overrideInterval_var = overrideInterval;
}

class LANPruneDelayOptionDescriptor : public cClassDescriptor
{
  public:
    LANPruneDelayOptionDescriptor();
    virtual ~LANPruneDelayOptionDescriptor();

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

Register_ClassDescriptor(LANPruneDelayOptionDescriptor);

LANPruneDelayOptionDescriptor::LANPruneDelayOptionDescriptor() : cClassDescriptor("inet::LANPruneDelayOption", "inet::HelloOption")
{
}

LANPruneDelayOptionDescriptor::~LANPruneDelayOptionDescriptor()
{
}

bool LANPruneDelayOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LANPruneDelayOption *>(obj)!=NULL;
}

const char *LANPruneDelayOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LANPruneDelayOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int LANPruneDelayOptionDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *LANPruneDelayOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "propagationDelay",
        "overrideInterval",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int LANPruneDelayOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "propagationDelay")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "overrideInterval")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LANPruneDelayOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16_t",
        "uint16_t",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *LANPruneDelayOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LANPruneDelayOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LANPruneDelayOption *pp = (LANPruneDelayOption *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LANPruneDelayOptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LANPruneDelayOption *pp = (LANPruneDelayOption *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPropagationDelay());
        case 1: return ulong2string(pp->getOverrideInterval());
        default: return "";
    }
}

bool LANPruneDelayOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LANPruneDelayOption *pp = (LANPruneDelayOption *)object; (void)pp;
    switch (field) {
        case 0: pp->setPropagationDelay(string2ulong(value)); return true;
        case 1: pp->setOverrideInterval(string2ulong(value)); return true;
        default: return false;
    }
}

const char *LANPruneDelayOptionDescriptor::getFieldStructName(void *object, int field) const
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

void *LANPruneDelayOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LANPruneDelayOption *pp = (LANPruneDelayOption *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(DRPriorityOption);

DRPriorityOption::DRPriorityOption() : ::inet::HelloOption()
{
    this->setType(DRPriority);

    this->priority_var = 0;
}

DRPriorityOption::DRPriorityOption(const DRPriorityOption& other) : ::inet::HelloOption(other)
{
    copy(other);
}

DRPriorityOption::~DRPriorityOption()
{
}

DRPriorityOption& DRPriorityOption::operator=(const DRPriorityOption& other)
{
    if (this==&other) return *this;
    ::inet::HelloOption::operator=(other);
    copy(other);
    return *this;
}

void DRPriorityOption::copy(const DRPriorityOption& other)
{
    this->priority_var = other.priority_var;
}

void DRPriorityOption::parsimPack(cCommBuffer *b)
{
    ::inet::HelloOption::parsimPack(b);
    doPacking(b,this->priority_var);
}

void DRPriorityOption::parsimUnpack(cCommBuffer *b)
{
    ::inet::HelloOption::parsimUnpack(b);
    doUnpacking(b,this->priority_var);
}

uint32_t DRPriorityOption::getPriority() const
{
    return priority_var;
}

void DRPriorityOption::setPriority(uint32_t priority)
{
    this->priority_var = priority;
}

class DRPriorityOptionDescriptor : public cClassDescriptor
{
  public:
    DRPriorityOptionDescriptor();
    virtual ~DRPriorityOptionDescriptor();

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

Register_ClassDescriptor(DRPriorityOptionDescriptor);

DRPriorityOptionDescriptor::DRPriorityOptionDescriptor() : cClassDescriptor("inet::DRPriorityOption", "inet::HelloOption")
{
}

DRPriorityOptionDescriptor::~DRPriorityOptionDescriptor()
{
}

bool DRPriorityOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DRPriorityOption *>(obj)!=NULL;
}

const char *DRPriorityOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DRPriorityOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int DRPriorityOptionDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DRPriorityOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "priority",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int DRPriorityOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "priority")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DRPriorityOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32_t",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *DRPriorityOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DRPriorityOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DRPriorityOption *pp = (DRPriorityOption *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DRPriorityOptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DRPriorityOption *pp = (DRPriorityOption *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPriority());
        default: return "";
    }
}

bool DRPriorityOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DRPriorityOption *pp = (DRPriorityOption *)object; (void)pp;
    switch (field) {
        case 0: pp->setPriority(string2ulong(value)); return true;
        default: return false;
    }
}

const char *DRPriorityOptionDescriptor::getFieldStructName(void *object, int field) const
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

void *DRPriorityOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DRPriorityOption *pp = (DRPriorityOption *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(GenerationIDOption);

GenerationIDOption::GenerationIDOption() : ::inet::HelloOption()
{
    this->setType(GenerationID);

    this->generationID_var = 0;
}

GenerationIDOption::GenerationIDOption(const GenerationIDOption& other) : ::inet::HelloOption(other)
{
    copy(other);
}

GenerationIDOption::~GenerationIDOption()
{
}

GenerationIDOption& GenerationIDOption::operator=(const GenerationIDOption& other)
{
    if (this==&other) return *this;
    ::inet::HelloOption::operator=(other);
    copy(other);
    return *this;
}

void GenerationIDOption::copy(const GenerationIDOption& other)
{
    this->generationID_var = other.generationID_var;
}

void GenerationIDOption::parsimPack(cCommBuffer *b)
{
    ::inet::HelloOption::parsimPack(b);
    doPacking(b,this->generationID_var);
}

void GenerationIDOption::parsimUnpack(cCommBuffer *b)
{
    ::inet::HelloOption::parsimUnpack(b);
    doUnpacking(b,this->generationID_var);
}

uint32_t GenerationIDOption::getGenerationID() const
{
    return generationID_var;
}

void GenerationIDOption::setGenerationID(uint32_t generationID)
{
    this->generationID_var = generationID;
}

class GenerationIDOptionDescriptor : public cClassDescriptor
{
  public:
    GenerationIDOptionDescriptor();
    virtual ~GenerationIDOptionDescriptor();

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

Register_ClassDescriptor(GenerationIDOptionDescriptor);

GenerationIDOptionDescriptor::GenerationIDOptionDescriptor() : cClassDescriptor("inet::GenerationIDOption", "inet::HelloOption")
{
}

GenerationIDOptionDescriptor::~GenerationIDOptionDescriptor()
{
}

bool GenerationIDOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GenerationIDOption *>(obj)!=NULL;
}

const char *GenerationIDOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GenerationIDOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int GenerationIDOptionDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *GenerationIDOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "generationID",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int GenerationIDOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "generationID")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GenerationIDOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32_t",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *GenerationIDOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GenerationIDOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GenerationIDOption *pp = (GenerationIDOption *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GenerationIDOptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GenerationIDOption *pp = (GenerationIDOption *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getGenerationID());
        default: return "";
    }
}

bool GenerationIDOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GenerationIDOption *pp = (GenerationIDOption *)object; (void)pp;
    switch (field) {
        case 0: pp->setGenerationID(string2ulong(value)); return true;
        default: return false;
    }
}

const char *GenerationIDOptionDescriptor::getFieldStructName(void *object, int field) const
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

void *GenerationIDOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GenerationIDOption *pp = (GenerationIDOption *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

EncodedAddress::EncodedAddress()
{
    S = 0;
    W = 0;
    R = 0;
}

void doPacking(cCommBuffer *b, EncodedAddress& a)
{
    doPacking(b,a.IPaddress);
    doPacking(b,a.S);
    doPacking(b,a.W);
    doPacking(b,a.R);
}

void doUnpacking(cCommBuffer *b, EncodedAddress& a)
{
    doUnpacking(b,a.IPaddress);
    doUnpacking(b,a.S);
    doUnpacking(b,a.W);
    doUnpacking(b,a.R);
}

class EncodedAddressDescriptor : public cClassDescriptor
{
  public:
    EncodedAddressDescriptor();
    virtual ~EncodedAddressDescriptor();

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

Register_ClassDescriptor(EncodedAddressDescriptor);

EncodedAddressDescriptor::EncodedAddressDescriptor() : cClassDescriptor("inet::EncodedAddress", "")
{
}

EncodedAddressDescriptor::~EncodedAddressDescriptor()
{
}

bool EncodedAddressDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<EncodedAddress *>(obj)!=NULL;
}

const char *EncodedAddressDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int EncodedAddressDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int EncodedAddressDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *EncodedAddressDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "IPaddress",
        "S",
        "W",
        "R",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int EncodedAddressDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='I' && strcmp(fieldName, "IPaddress")==0) return base+0;
    if (fieldName[0]=='S' && strcmp(fieldName, "S")==0) return base+1;
    if (fieldName[0]=='W' && strcmp(fieldName, "W")==0) return base+2;
    if (fieldName[0]=='R' && strcmp(fieldName, "R")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *EncodedAddressDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "bool",
        "bool",
        "bool",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *EncodedAddressDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int EncodedAddressDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    EncodedAddress *pp = (EncodedAddress *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string EncodedAddressDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    EncodedAddress *pp = (EncodedAddress *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->IPaddress; return out.str();}
        case 1: return bool2string(pp->S);
        case 2: return bool2string(pp->W);
        case 3: return bool2string(pp->R);
        default: return "";
    }
}

bool EncodedAddressDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    EncodedAddress *pp = (EncodedAddress *)object; (void)pp;
    switch (field) {
        case 1: pp->S = string2bool(value); return true;
        case 2: pp->W = string2bool(value); return true;
        case 3: pp->R = string2bool(value); return true;
        default: return false;
    }
}

const char *EncodedAddressDescriptor::getFieldStructName(void *object, int field) const
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

void *EncodedAddressDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    EncodedAddress *pp = (EncodedAddress *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->IPaddress); break;
        default: return NULL;
    }
}

Register_Class(JoinPruneGroup);

JoinPruneGroup::JoinPruneGroup() : ::cObject()
{
    joinedSourceAddress_arraysize = 0;
    this->joinedSourceAddress_var = 0;
    prunedSourceAddress_arraysize = 0;
    this->prunedSourceAddress_var = 0;
}

JoinPruneGroup::JoinPruneGroup(const JoinPruneGroup& other) : ::cObject(other)
{
    joinedSourceAddress_arraysize = 0;
    this->joinedSourceAddress_var = 0;
    prunedSourceAddress_arraysize = 0;
    this->prunedSourceAddress_var = 0;
    copy(other);
}

JoinPruneGroup::~JoinPruneGroup()
{
    delete [] joinedSourceAddress_var;
    delete [] prunedSourceAddress_var;
}

JoinPruneGroup& JoinPruneGroup::operator=(const JoinPruneGroup& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void JoinPruneGroup::copy(const JoinPruneGroup& other)
{
    this->groupAddress_var = other.groupAddress_var;
    delete [] this->joinedSourceAddress_var;
    this->joinedSourceAddress_var = (other.joinedSourceAddress_arraysize==0) ? NULL : new EncodedAddress[other.joinedSourceAddress_arraysize];
    joinedSourceAddress_arraysize = other.joinedSourceAddress_arraysize;
    for (unsigned int i=0; i<joinedSourceAddress_arraysize; i++)
        this->joinedSourceAddress_var[i] = other.joinedSourceAddress_var[i];
    delete [] this->prunedSourceAddress_var;
    this->prunedSourceAddress_var = (other.prunedSourceAddress_arraysize==0) ? NULL : new EncodedAddress[other.prunedSourceAddress_arraysize];
    prunedSourceAddress_arraysize = other.prunedSourceAddress_arraysize;
    for (unsigned int i=0; i<prunedSourceAddress_arraysize; i++)
        this->prunedSourceAddress_var[i] = other.prunedSourceAddress_var[i];
}

void JoinPruneGroup::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->groupAddress_var);
    b->pack(joinedSourceAddress_arraysize);
    doPacking(b,this->joinedSourceAddress_var,joinedSourceAddress_arraysize);
    b->pack(prunedSourceAddress_arraysize);
    doPacking(b,this->prunedSourceAddress_var,prunedSourceAddress_arraysize);
}

void JoinPruneGroup::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->groupAddress_var);
    delete [] this->joinedSourceAddress_var;
    b->unpack(joinedSourceAddress_arraysize);
    if (joinedSourceAddress_arraysize==0) {
        this->joinedSourceAddress_var = 0;
    } else {
        this->joinedSourceAddress_var = new EncodedAddress[joinedSourceAddress_arraysize];
        doUnpacking(b,this->joinedSourceAddress_var,joinedSourceAddress_arraysize);
    }
    delete [] this->prunedSourceAddress_var;
    b->unpack(prunedSourceAddress_arraysize);
    if (prunedSourceAddress_arraysize==0) {
        this->prunedSourceAddress_var = 0;
    } else {
        this->prunedSourceAddress_var = new EncodedAddress[prunedSourceAddress_arraysize];
        doUnpacking(b,this->prunedSourceAddress_var,prunedSourceAddress_arraysize);
    }
}

IPv4Address& JoinPruneGroup::getGroupAddress()
{
    return groupAddress_var;
}

void JoinPruneGroup::setGroupAddress(const IPv4Address& groupAddress)
{
    this->groupAddress_var = groupAddress;
}

void JoinPruneGroup::setJoinedSourceAddressArraySize(unsigned int size)
{
    EncodedAddress *joinedSourceAddress_var2 = (size==0) ? NULL : new EncodedAddress[size];
    unsigned int sz = joinedSourceAddress_arraysize < size ? joinedSourceAddress_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        joinedSourceAddress_var2[i] = this->joinedSourceAddress_var[i];
    joinedSourceAddress_arraysize = size;
    delete [] this->joinedSourceAddress_var;
    this->joinedSourceAddress_var = joinedSourceAddress_var2;
}

unsigned int JoinPruneGroup::getJoinedSourceAddressArraySize() const
{
    return joinedSourceAddress_arraysize;
}

EncodedAddress& JoinPruneGroup::getJoinedSourceAddress(unsigned int k)
{
    if (k>=joinedSourceAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", joinedSourceAddress_arraysize, k);
    return joinedSourceAddress_var[k];
}

void JoinPruneGroup::setJoinedSourceAddress(unsigned int k, const EncodedAddress& joinedSourceAddress)
{
    if (k>=joinedSourceAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", joinedSourceAddress_arraysize, k);
    this->joinedSourceAddress_var[k] = joinedSourceAddress;
}

void JoinPruneGroup::setPrunedSourceAddressArraySize(unsigned int size)
{
    EncodedAddress *prunedSourceAddress_var2 = (size==0) ? NULL : new EncodedAddress[size];
    unsigned int sz = prunedSourceAddress_arraysize < size ? prunedSourceAddress_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        prunedSourceAddress_var2[i] = this->prunedSourceAddress_var[i];
    prunedSourceAddress_arraysize = size;
    delete [] this->prunedSourceAddress_var;
    this->prunedSourceAddress_var = prunedSourceAddress_var2;
}

unsigned int JoinPruneGroup::getPrunedSourceAddressArraySize() const
{
    return prunedSourceAddress_arraysize;
}

EncodedAddress& JoinPruneGroup::getPrunedSourceAddress(unsigned int k)
{
    if (k>=prunedSourceAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", prunedSourceAddress_arraysize, k);
    return prunedSourceAddress_var[k];
}

void JoinPruneGroup::setPrunedSourceAddress(unsigned int k, const EncodedAddress& prunedSourceAddress)
{
    if (k>=prunedSourceAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", prunedSourceAddress_arraysize, k);
    this->prunedSourceAddress_var[k] = prunedSourceAddress;
}

class JoinPruneGroupDescriptor : public cClassDescriptor
{
  public:
    JoinPruneGroupDescriptor();
    virtual ~JoinPruneGroupDescriptor();

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

Register_ClassDescriptor(JoinPruneGroupDescriptor);

JoinPruneGroupDescriptor::JoinPruneGroupDescriptor() : cClassDescriptor("inet::JoinPruneGroup", "cObject")
{
}

JoinPruneGroupDescriptor::~JoinPruneGroupDescriptor()
{
}

bool JoinPruneGroupDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<JoinPruneGroup *>(obj)!=NULL;
}

const char *JoinPruneGroupDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int JoinPruneGroupDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int JoinPruneGroupDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *JoinPruneGroupDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "groupAddress",
        "joinedSourceAddress",
        "prunedSourceAddress",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int JoinPruneGroupDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupAddress")==0) return base+0;
    if (fieldName[0]=='j' && strcmp(fieldName, "joinedSourceAddress")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "prunedSourceAddress")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *JoinPruneGroupDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "EncodedAddress",
        "EncodedAddress",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *JoinPruneGroupDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int JoinPruneGroupDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    JoinPruneGroup *pp = (JoinPruneGroup *)object; (void)pp;
    switch (field) {
        case 1: return pp->getJoinedSourceAddressArraySize();
        case 2: return pp->getPrunedSourceAddressArraySize();
        default: return 0;
    }
}

std::string JoinPruneGroupDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    JoinPruneGroup *pp = (JoinPruneGroup *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getGroupAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->getJoinedSourceAddress(i); return out.str();}
        case 2: {std::stringstream out; out << pp->getPrunedSourceAddress(i); return out.str();}
        default: return "";
    }
}

bool JoinPruneGroupDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    JoinPruneGroup *pp = (JoinPruneGroup *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *JoinPruneGroupDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        case 1: return opp_typename(typeid(EncodedAddress));
        case 2: return opp_typename(typeid(EncodedAddress));
        default: return NULL;
    };
}

void *JoinPruneGroupDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    JoinPruneGroup *pp = (JoinPruneGroup *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getGroupAddress()); break;
        case 1: return (void *)(&pp->getJoinedSourceAddress(i)); break;
        case 2: return (void *)(&pp->getPrunedSourceAddress(i)); break;
        default: return NULL;
    }
}

Register_Class(PIMPacket);

PIMPacket::PIMPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->version_var = 2;
    this->type_var = 0;
}

PIMPacket::PIMPacket(const PIMPacket& other) : ::cPacket(other)
{
    copy(other);
}

PIMPacket::~PIMPacket()
{
}

PIMPacket& PIMPacket::operator=(const PIMPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void PIMPacket::copy(const PIMPacket& other)
{
    this->version_var = other.version_var;
    this->type_var = other.type_var;
}

void PIMPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->version_var);
    doPacking(b,this->type_var);
}

void PIMPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->version_var);
    doUnpacking(b,this->type_var);
}

short PIMPacket::getVersion() const
{
    return version_var;
}

void PIMPacket::setVersion(short version)
{
    this->version_var = version;
}

short PIMPacket::getType() const
{
    return type_var;
}

void PIMPacket::setType(short type)
{
    this->type_var = type;
}

class PIMPacketDescriptor : public cClassDescriptor
{
  public:
    PIMPacketDescriptor();
    virtual ~PIMPacketDescriptor();

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

Register_ClassDescriptor(PIMPacketDescriptor);

PIMPacketDescriptor::PIMPacketDescriptor() : cClassDescriptor("inet::PIMPacket", "cPacket")
{
}

PIMPacketDescriptor::~PIMPacketDescriptor()
{
}

bool PIMPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PIMPacket *>(obj)!=NULL;
}

const char *PIMPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PIMPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PIMPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PIMPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "version",
        "type",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PIMPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "version")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PIMPacketDescriptor::getFieldTypeString(void *object, int field) const
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

const char *PIMPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "inet::PIMPacketType";
            return NULL;
        default: return NULL;
    }
}

int PIMPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PIMPacket *pp = (PIMPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PIMPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PIMPacket *pp = (PIMPacket *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getVersion());
        case 1: return long2string(pp->getType());
        default: return "";
    }
}

bool PIMPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PIMPacket *pp = (PIMPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setVersion(string2long(value)); return true;
        case 1: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *PIMPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *PIMPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PIMPacket *pp = (PIMPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

PIMHello_Base::PIMHello_Base(const char *name, int kind) : ::inet::PIMPacket(name,kind)
{
    this->setType(Hello);

}

PIMHello_Base::PIMHello_Base(const PIMHello_Base& other) : ::inet::PIMPacket(other)
{
    copy(other);
}

PIMHello_Base::~PIMHello_Base()
{
}

PIMHello_Base& PIMHello_Base::operator=(const PIMHello_Base& other)
{
    if (this==&other) return *this;
    ::inet::PIMPacket::operator=(other);
    copy(other);
    return *this;
}

void PIMHello_Base::copy(const PIMHello_Base& other)
{
}

void PIMHello_Base::parsimPack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimPack(b);
    // field options is abstract -- please do packing in customized class
}

void PIMHello_Base::parsimUnpack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimUnpack(b);
    // field options is abstract -- please do unpacking in customized class
}

class PIMHelloDescriptor : public cClassDescriptor
{
  public:
    PIMHelloDescriptor();
    virtual ~PIMHelloDescriptor();

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

Register_ClassDescriptor(PIMHelloDescriptor);

PIMHelloDescriptor::PIMHelloDescriptor() : cClassDescriptor("inet::PIMHello", "inet::PIMPacket")
{
}

PIMHelloDescriptor::~PIMHelloDescriptor()
{
}

bool PIMHelloDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PIMHello_Base *>(obj)!=NULL;
}

const char *PIMHelloDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PIMHelloDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PIMHelloDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PIMHelloDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "options",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PIMHelloDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "options")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PIMHelloDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "HelloOptionPtr",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PIMHelloDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PIMHelloDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PIMHello_Base *pp = (PIMHello_Base *)object; (void)pp;
    switch (field) {
        case 0: return pp->getOptionsArraySize();
        default: return 0;
    }
}

std::string PIMHelloDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PIMHello_Base *pp = (PIMHello_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getOptions(i); return out.str();}
        default: return "";
    }
}

bool PIMHelloDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PIMHello_Base *pp = (PIMHello_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *PIMHelloDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(HelloOptionPtr));
        default: return NULL;
    };
}

void *PIMHelloDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PIMHello_Base *pp = (PIMHello_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getOptions(i)); break;
        default: return NULL;
    }
}

Register_Class(PIMJoinPrune);

PIMJoinPrune::PIMJoinPrune(const char *name, int kind) : ::inet::PIMPacket(name,kind)
{
    this->type_var = JoinPrune;
    this->holdTime_var = 0;
    joinPruneGroups_arraysize = 0;
    this->joinPruneGroups_var = 0;
}

PIMJoinPrune::PIMJoinPrune(const PIMJoinPrune& other) : ::inet::PIMPacket(other)
{
    joinPruneGroups_arraysize = 0;
    this->joinPruneGroups_var = 0;
    copy(other);
}

PIMJoinPrune::~PIMJoinPrune()
{
    delete [] joinPruneGroups_var;
}

PIMJoinPrune& PIMJoinPrune::operator=(const PIMJoinPrune& other)
{
    if (this==&other) return *this;
    ::inet::PIMPacket::operator=(other);
    copy(other);
    return *this;
}

void PIMJoinPrune::copy(const PIMJoinPrune& other)
{
    this->type_var = other.type_var;
    this->upstreamNeighborAddress_var = other.upstreamNeighborAddress_var;
    this->holdTime_var = other.holdTime_var;
    delete [] this->joinPruneGroups_var;
    this->joinPruneGroups_var = (other.joinPruneGroups_arraysize==0) ? NULL : new JoinPruneGroup[other.joinPruneGroups_arraysize];
    joinPruneGroups_arraysize = other.joinPruneGroups_arraysize;
    for (unsigned int i=0; i<joinPruneGroups_arraysize; i++)
        this->joinPruneGroups_var[i] = other.joinPruneGroups_var[i];
}

void PIMJoinPrune::parsimPack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->upstreamNeighborAddress_var);
    doPacking(b,this->holdTime_var);
    b->pack(joinPruneGroups_arraysize);
    doPacking(b,this->joinPruneGroups_var,joinPruneGroups_arraysize);
}

void PIMJoinPrune::parsimUnpack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->upstreamNeighborAddress_var);
    doUnpacking(b,this->holdTime_var);
    delete [] this->joinPruneGroups_var;
    b->unpack(joinPruneGroups_arraysize);
    if (joinPruneGroups_arraysize==0) {
        this->joinPruneGroups_var = 0;
    } else {
        this->joinPruneGroups_var = new JoinPruneGroup[joinPruneGroups_arraysize];
        doUnpacking(b,this->joinPruneGroups_var,joinPruneGroups_arraysize);
    }
}

short PIMJoinPrune::getType() const
{
    return type_var;
}

void PIMJoinPrune::setType(short type)
{
    this->type_var = type;
}

IPv4Address& PIMJoinPrune::getUpstreamNeighborAddress()
{
    return upstreamNeighborAddress_var;
}

void PIMJoinPrune::setUpstreamNeighborAddress(const IPv4Address& upstreamNeighborAddress)
{
    this->upstreamNeighborAddress_var = upstreamNeighborAddress;
}

int PIMJoinPrune::getHoldTime() const
{
    return holdTime_var;
}

void PIMJoinPrune::setHoldTime(int holdTime)
{
    this->holdTime_var = holdTime;
}

void PIMJoinPrune::setJoinPruneGroupsArraySize(unsigned int size)
{
    JoinPruneGroup *joinPruneGroups_var2 = (size==0) ? NULL : new JoinPruneGroup[size];
    unsigned int sz = joinPruneGroups_arraysize < size ? joinPruneGroups_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        joinPruneGroups_var2[i] = this->joinPruneGroups_var[i];
    joinPruneGroups_arraysize = size;
    delete [] this->joinPruneGroups_var;
    this->joinPruneGroups_var = joinPruneGroups_var2;
}

unsigned int PIMJoinPrune::getJoinPruneGroupsArraySize() const
{
    return joinPruneGroups_arraysize;
}

JoinPruneGroup& PIMJoinPrune::getJoinPruneGroups(unsigned int k)
{
    if (k>=joinPruneGroups_arraysize) throw cRuntimeError("Array of size %d indexed by %d", joinPruneGroups_arraysize, k);
    return joinPruneGroups_var[k];
}

void PIMJoinPrune::setJoinPruneGroups(unsigned int k, const JoinPruneGroup& joinPruneGroups)
{
    if (k>=joinPruneGroups_arraysize) throw cRuntimeError("Array of size %d indexed by %d", joinPruneGroups_arraysize, k);
    this->joinPruneGroups_var[k] = joinPruneGroups;
}

class PIMJoinPruneDescriptor : public cClassDescriptor
{
  public:
    PIMJoinPruneDescriptor();
    virtual ~PIMJoinPruneDescriptor();

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

Register_ClassDescriptor(PIMJoinPruneDescriptor);

PIMJoinPruneDescriptor::PIMJoinPruneDescriptor() : cClassDescriptor("inet::PIMJoinPrune", "inet::PIMPacket")
{
}

PIMJoinPruneDescriptor::~PIMJoinPruneDescriptor()
{
}

bool PIMJoinPruneDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PIMJoinPrune *>(obj)!=NULL;
}

const char *PIMJoinPruneDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PIMJoinPruneDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PIMJoinPruneDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *PIMJoinPruneDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "upstreamNeighborAddress",
        "holdTime",
        "joinPruneGroups",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int PIMJoinPruneDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='u' && strcmp(fieldName, "upstreamNeighborAddress")==0) return base+1;
    if (fieldName[0]=='h' && strcmp(fieldName, "holdTime")==0) return base+2;
    if (fieldName[0]=='j' && strcmp(fieldName, "joinPruneGroups")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PIMJoinPruneDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "IPv4Address",
        "int",
        "JoinPruneGroup",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *PIMJoinPruneDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::PIMPacketType";
            return NULL;
        default: return NULL;
    }
}

int PIMJoinPruneDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PIMJoinPrune *pp = (PIMJoinPrune *)object; (void)pp;
    switch (field) {
        case 3: return pp->getJoinPruneGroupsArraySize();
        default: return 0;
    }
}

std::string PIMJoinPruneDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PIMJoinPrune *pp = (PIMJoinPrune *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: {std::stringstream out; out << pp->getUpstreamNeighborAddress(); return out.str();}
        case 2: return long2string(pp->getHoldTime());
        case 3: {std::stringstream out; out << pp->getJoinPruneGroups(i); return out.str();}
        default: return "";
    }
}

bool PIMJoinPruneDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PIMJoinPrune *pp = (PIMJoinPrune *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 2: pp->setHoldTime(string2long(value)); return true;
        default: return false;
    }
}

const char *PIMJoinPruneDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv4Address));
        case 3: return opp_typename(typeid(JoinPruneGroup));
        default: return NULL;
    };
}

void *PIMJoinPruneDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PIMJoinPrune *pp = (PIMJoinPrune *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getUpstreamNeighborAddress()); break;
        case 3: return (void *)static_cast<cObject *>(&pp->getJoinPruneGroups(i)); break;
        default: return NULL;
    }
}

Register_Class(PIMAssert);

PIMAssert::PIMAssert(const char *name, int kind) : ::inet::PIMPacket(name,kind)
{
    this->type_var = Assert;
    this->R_var = 0;
    this->metric_var = 0;
    this->metricPreference_var = 0;
}

PIMAssert::PIMAssert(const PIMAssert& other) : ::inet::PIMPacket(other)
{
    copy(other);
}

PIMAssert::~PIMAssert()
{
}

PIMAssert& PIMAssert::operator=(const PIMAssert& other)
{
    if (this==&other) return *this;
    ::inet::PIMPacket::operator=(other);
    copy(other);
    return *this;
}

void PIMAssert::copy(const PIMAssert& other)
{
    this->type_var = other.type_var;
    this->groupAddress_var = other.groupAddress_var;
    this->sourceAddress_var = other.sourceAddress_var;
    this->R_var = other.R_var;
    this->metric_var = other.metric_var;
    this->metricPreference_var = other.metricPreference_var;
}

void PIMAssert::parsimPack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->groupAddress_var);
    doPacking(b,this->sourceAddress_var);
    doPacking(b,this->R_var);
    doPacking(b,this->metric_var);
    doPacking(b,this->metricPreference_var);
}

void PIMAssert::parsimUnpack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->groupAddress_var);
    doUnpacking(b,this->sourceAddress_var);
    doUnpacking(b,this->R_var);
    doUnpacking(b,this->metric_var);
    doUnpacking(b,this->metricPreference_var);
}

short PIMAssert::getType() const
{
    return type_var;
}

void PIMAssert::setType(short type)
{
    this->type_var = type;
}

IPv4Address& PIMAssert::getGroupAddress()
{
    return groupAddress_var;
}

void PIMAssert::setGroupAddress(const IPv4Address& groupAddress)
{
    this->groupAddress_var = groupAddress;
}

IPv4Address& PIMAssert::getSourceAddress()
{
    return sourceAddress_var;
}

void PIMAssert::setSourceAddress(const IPv4Address& sourceAddress)
{
    this->sourceAddress_var = sourceAddress;
}

bool PIMAssert::getR() const
{
    return R_var;
}

void PIMAssert::setR(bool R)
{
    this->R_var = R;
}

int PIMAssert::getMetric() const
{
    return metric_var;
}

void PIMAssert::setMetric(int metric)
{
    this->metric_var = metric;
}

int PIMAssert::getMetricPreference() const
{
    return metricPreference_var;
}

void PIMAssert::setMetricPreference(int metricPreference)
{
    this->metricPreference_var = metricPreference;
}

class PIMAssertDescriptor : public cClassDescriptor
{
  public:
    PIMAssertDescriptor();
    virtual ~PIMAssertDescriptor();

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

Register_ClassDescriptor(PIMAssertDescriptor);

PIMAssertDescriptor::PIMAssertDescriptor() : cClassDescriptor("inet::PIMAssert", "inet::PIMPacket")
{
}

PIMAssertDescriptor::~PIMAssertDescriptor()
{
}

bool PIMAssertDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PIMAssert *>(obj)!=NULL;
}

const char *PIMAssertDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PIMAssertDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int PIMAssertDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *PIMAssertDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "groupAddress",
        "sourceAddress",
        "R",
        "metric",
        "metricPreference",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int PIMAssertDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupAddress")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceAddress")==0) return base+2;
    if (fieldName[0]=='R' && strcmp(fieldName, "R")==0) return base+3;
    if (fieldName[0]=='m' && strcmp(fieldName, "metric")==0) return base+4;
    if (fieldName[0]=='m' && strcmp(fieldName, "metricPreference")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PIMAssertDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "IPv4Address",
        "IPv4Address",
        "bool",
        "int",
        "int",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *PIMAssertDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::PIMPacketType";
            return NULL;
        default: return NULL;
    }
}

int PIMAssertDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PIMAssert *pp = (PIMAssert *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PIMAssertDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PIMAssert *pp = (PIMAssert *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: {std::stringstream out; out << pp->getGroupAddress(); return out.str();}
        case 2: {std::stringstream out; out << pp->getSourceAddress(); return out.str();}
        case 3: return bool2string(pp->getR());
        case 4: return long2string(pp->getMetric());
        case 5: return long2string(pp->getMetricPreference());
        default: return "";
    }
}

bool PIMAssertDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PIMAssert *pp = (PIMAssert *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 3: pp->setR(string2bool(value)); return true;
        case 4: pp->setMetric(string2long(value)); return true;
        case 5: pp->setMetricPreference(string2long(value)); return true;
        default: return false;
    }
}

const char *PIMAssertDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv4Address));
        case 2: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *PIMAssertDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PIMAssert *pp = (PIMAssert *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getGroupAddress()); break;
        case 2: return (void *)(&pp->getSourceAddress()); break;
        default: return NULL;
    }
}

Register_Class(PIMGraft);

PIMGraft::PIMGraft(const char *name, int kind) : ::inet::PIMJoinPrune(name,kind)
{
    this->type_var = Graft;
    this->holdTime_var = 0;
}

PIMGraft::PIMGraft(const PIMGraft& other) : ::inet::PIMJoinPrune(other)
{
    copy(other);
}

PIMGraft::~PIMGraft()
{
}

PIMGraft& PIMGraft::operator=(const PIMGraft& other)
{
    if (this==&other) return *this;
    ::inet::PIMJoinPrune::operator=(other);
    copy(other);
    return *this;
}

void PIMGraft::copy(const PIMGraft& other)
{
    this->type_var = other.type_var;
    this->holdTime_var = other.holdTime_var;
}

void PIMGraft::parsimPack(cCommBuffer *b)
{
    ::inet::PIMJoinPrune::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->holdTime_var);
}

void PIMGraft::parsimUnpack(cCommBuffer *b)
{
    ::inet::PIMJoinPrune::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->holdTime_var);
}

short PIMGraft::getType() const
{
    return type_var;
}

void PIMGraft::setType(short type)
{
    this->type_var = type;
}

int PIMGraft::getHoldTime() const
{
    return holdTime_var;
}

void PIMGraft::setHoldTime(int holdTime)
{
    this->holdTime_var = holdTime;
}

class PIMGraftDescriptor : public cClassDescriptor
{
  public:
    PIMGraftDescriptor();
    virtual ~PIMGraftDescriptor();

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

Register_ClassDescriptor(PIMGraftDescriptor);

PIMGraftDescriptor::PIMGraftDescriptor() : cClassDescriptor("inet::PIMGraft", "inet::PIMJoinPrune")
{
}

PIMGraftDescriptor::~PIMGraftDescriptor()
{
}

bool PIMGraftDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PIMGraft *>(obj)!=NULL;
}

const char *PIMGraftDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PIMGraftDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int PIMGraftDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PIMGraftDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "holdTime",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int PIMGraftDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "holdTime")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PIMGraftDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *PIMGraftDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::PIMPacketType";
            return NULL;
        default: return NULL;
    }
}

int PIMGraftDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PIMGraft *pp = (PIMGraft *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PIMGraftDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PIMGraft *pp = (PIMGraft *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: return long2string(pp->getHoldTime());
        default: return "";
    }
}

bool PIMGraftDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PIMGraft *pp = (PIMGraft *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setHoldTime(string2long(value)); return true;
        default: return false;
    }
}

const char *PIMGraftDescriptor::getFieldStructName(void *object, int field) const
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

void *PIMGraftDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PIMGraft *pp = (PIMGraft *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PIMGraftAck);

PIMGraftAck::PIMGraftAck(const char *name, int kind) : ::inet::PIMGraft(name,kind)
{
    this->type_var = GraftAck;
}

PIMGraftAck::PIMGraftAck(const PIMGraftAck& other) : ::inet::PIMGraft(other)
{
    copy(other);
}

PIMGraftAck::~PIMGraftAck()
{
}

PIMGraftAck& PIMGraftAck::operator=(const PIMGraftAck& other)
{
    if (this==&other) return *this;
    ::inet::PIMGraft::operator=(other);
    copy(other);
    return *this;
}

void PIMGraftAck::copy(const PIMGraftAck& other)
{
    this->type_var = other.type_var;
}

void PIMGraftAck::parsimPack(cCommBuffer *b)
{
    ::inet::PIMGraft::parsimPack(b);
    doPacking(b,this->type_var);
}

void PIMGraftAck::parsimUnpack(cCommBuffer *b)
{
    ::inet::PIMGraft::parsimUnpack(b);
    doUnpacking(b,this->type_var);
}

short PIMGraftAck::getType() const
{
    return type_var;
}

void PIMGraftAck::setType(short type)
{
    this->type_var = type;
}

class PIMGraftAckDescriptor : public cClassDescriptor
{
  public:
    PIMGraftAckDescriptor();
    virtual ~PIMGraftAckDescriptor();

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

Register_ClassDescriptor(PIMGraftAckDescriptor);

PIMGraftAckDescriptor::PIMGraftAckDescriptor() : cClassDescriptor("inet::PIMGraftAck", "inet::PIMGraft")
{
}

PIMGraftAckDescriptor::~PIMGraftAckDescriptor()
{
}

bool PIMGraftAckDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PIMGraftAck *>(obj)!=NULL;
}

const char *PIMGraftAckDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PIMGraftAckDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int PIMGraftAckDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PIMGraftAckDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int PIMGraftAckDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PIMGraftAckDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *PIMGraftAckDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::PIMPacketType";
            return NULL;
        default: return NULL;
    }
}

int PIMGraftAckDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PIMGraftAck *pp = (PIMGraftAck *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PIMGraftAckDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PIMGraftAck *pp = (PIMGraftAck *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        default: return "";
    }
}

bool PIMGraftAckDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PIMGraftAck *pp = (PIMGraftAck *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *PIMGraftAckDescriptor::getFieldStructName(void *object, int field) const
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

void *PIMGraftAckDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PIMGraftAck *pp = (PIMGraftAck *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PIMStateRefresh);

PIMStateRefresh::PIMStateRefresh(const char *name, int kind) : ::inet::PIMPacket(name,kind)
{
    this->type_var = StateRefresh;
    this->metric_var = 0;
    this->metricPreference_var = 0;
    this->maskLen_var = 0;
    this->ttl_var = 0;
    this->P_var = 0;
    this->interval_var = 0;
}

PIMStateRefresh::PIMStateRefresh(const PIMStateRefresh& other) : ::inet::PIMPacket(other)
{
    copy(other);
}

PIMStateRefresh::~PIMStateRefresh()
{
}

PIMStateRefresh& PIMStateRefresh::operator=(const PIMStateRefresh& other)
{
    if (this==&other) return *this;
    ::inet::PIMPacket::operator=(other);
    copy(other);
    return *this;
}

void PIMStateRefresh::copy(const PIMStateRefresh& other)
{
    this->type_var = other.type_var;
    this->groupAddress_var = other.groupAddress_var;
    this->sourceAddress_var = other.sourceAddress_var;
    this->originatorAddress_var = other.originatorAddress_var;
    this->metric_var = other.metric_var;
    this->metricPreference_var = other.metricPreference_var;
    this->maskLen_var = other.maskLen_var;
    this->ttl_var = other.ttl_var;
    this->P_var = other.P_var;
    this->interval_var = other.interval_var;
}

void PIMStateRefresh::parsimPack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->groupAddress_var);
    doPacking(b,this->sourceAddress_var);
    doPacking(b,this->originatorAddress_var);
    doPacking(b,this->metric_var);
    doPacking(b,this->metricPreference_var);
    doPacking(b,this->maskLen_var);
    doPacking(b,this->ttl_var);
    doPacking(b,this->P_var);
    doPacking(b,this->interval_var);
}

void PIMStateRefresh::parsimUnpack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->groupAddress_var);
    doUnpacking(b,this->sourceAddress_var);
    doUnpacking(b,this->originatorAddress_var);
    doUnpacking(b,this->metric_var);
    doUnpacking(b,this->metricPreference_var);
    doUnpacking(b,this->maskLen_var);
    doUnpacking(b,this->ttl_var);
    doUnpacking(b,this->P_var);
    doUnpacking(b,this->interval_var);
}

short PIMStateRefresh::getType() const
{
    return type_var;
}

void PIMStateRefresh::setType(short type)
{
    this->type_var = type;
}

IPv4Address& PIMStateRefresh::getGroupAddress()
{
    return groupAddress_var;
}

void PIMStateRefresh::setGroupAddress(const IPv4Address& groupAddress)
{
    this->groupAddress_var = groupAddress;
}

IPv4Address& PIMStateRefresh::getSourceAddress()
{
    return sourceAddress_var;
}

void PIMStateRefresh::setSourceAddress(const IPv4Address& sourceAddress)
{
    this->sourceAddress_var = sourceAddress;
}

IPv4Address& PIMStateRefresh::getOriginatorAddress()
{
    return originatorAddress_var;
}

void PIMStateRefresh::setOriginatorAddress(const IPv4Address& originatorAddress)
{
    this->originatorAddress_var = originatorAddress;
}

int PIMStateRefresh::getMetric() const
{
    return metric_var;
}

void PIMStateRefresh::setMetric(int metric)
{
    this->metric_var = metric;
}

int PIMStateRefresh::getMetricPreference() const
{
    return metricPreference_var;
}

void PIMStateRefresh::setMetricPreference(int metricPreference)
{
    this->metricPreference_var = metricPreference;
}

short PIMStateRefresh::getMaskLen() const
{
    return maskLen_var;
}

void PIMStateRefresh::setMaskLen(short maskLen)
{
    this->maskLen_var = maskLen;
}

short PIMStateRefresh::getTtl() const
{
    return ttl_var;
}

void PIMStateRefresh::setTtl(short ttl)
{
    this->ttl_var = ttl;
}

bool PIMStateRefresh::getP() const
{
    return P_var;
}

void PIMStateRefresh::setP(bool P)
{
    this->P_var = P;
}

int PIMStateRefresh::getInterval() const
{
    return interval_var;
}

void PIMStateRefresh::setInterval(int interval)
{
    this->interval_var = interval;
}

class PIMStateRefreshDescriptor : public cClassDescriptor
{
  public:
    PIMStateRefreshDescriptor();
    virtual ~PIMStateRefreshDescriptor();

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

Register_ClassDescriptor(PIMStateRefreshDescriptor);

PIMStateRefreshDescriptor::PIMStateRefreshDescriptor() : cClassDescriptor("inet::PIMStateRefresh", "inet::PIMPacket")
{
}

PIMStateRefreshDescriptor::~PIMStateRefreshDescriptor()
{
}

bool PIMStateRefreshDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PIMStateRefresh *>(obj)!=NULL;
}

const char *PIMStateRefreshDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PIMStateRefreshDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 10+basedesc->getFieldCount(object) : 10;
}

unsigned int PIMStateRefreshDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<10) ? fieldTypeFlags[field] : 0;
}

const char *PIMStateRefreshDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "groupAddress",
        "sourceAddress",
        "originatorAddress",
        "metric",
        "metricPreference",
        "maskLen",
        "ttl",
        "P",
        "interval",
    };
    return (field>=0 && field<10) ? fieldNames[field] : NULL;
}

int PIMStateRefreshDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupAddress")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceAddress")==0) return base+2;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorAddress")==0) return base+3;
    if (fieldName[0]=='m' && strcmp(fieldName, "metric")==0) return base+4;
    if (fieldName[0]=='m' && strcmp(fieldName, "metricPreference")==0) return base+5;
    if (fieldName[0]=='m' && strcmp(fieldName, "maskLen")==0) return base+6;
    if (fieldName[0]=='t' && strcmp(fieldName, "ttl")==0) return base+7;
    if (fieldName[0]=='P' && strcmp(fieldName, "P")==0) return base+8;
    if (fieldName[0]=='i' && strcmp(fieldName, "interval")==0) return base+9;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PIMStateRefreshDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "IPv4Address",
        "IPv4Address",
        "IPv4Address",
        "int",
        "int",
        "short",
        "short",
        "bool",
        "int",
    };
    return (field>=0 && field<10) ? fieldTypeStrings[field] : NULL;
}

const char *PIMStateRefreshDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::PIMPacketType";
            return NULL;
        default: return NULL;
    }
}

int PIMStateRefreshDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PIMStateRefresh *pp = (PIMStateRefresh *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PIMStateRefreshDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PIMStateRefresh *pp = (PIMStateRefresh *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: {std::stringstream out; out << pp->getGroupAddress(); return out.str();}
        case 2: {std::stringstream out; out << pp->getSourceAddress(); return out.str();}
        case 3: {std::stringstream out; out << pp->getOriginatorAddress(); return out.str();}
        case 4: return long2string(pp->getMetric());
        case 5: return long2string(pp->getMetricPreference());
        case 6: return long2string(pp->getMaskLen());
        case 7: return long2string(pp->getTtl());
        case 8: return bool2string(pp->getP());
        case 9: return long2string(pp->getInterval());
        default: return "";
    }
}

bool PIMStateRefreshDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PIMStateRefresh *pp = (PIMStateRefresh *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 4: pp->setMetric(string2long(value)); return true;
        case 5: pp->setMetricPreference(string2long(value)); return true;
        case 6: pp->setMaskLen(string2long(value)); return true;
        case 7: pp->setTtl(string2long(value)); return true;
        case 8: pp->setP(string2bool(value)); return true;
        case 9: pp->setInterval(string2long(value)); return true;
        default: return false;
    }
}

const char *PIMStateRefreshDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv4Address));
        case 2: return opp_typename(typeid(IPv4Address));
        case 3: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *PIMStateRefreshDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PIMStateRefresh *pp = (PIMStateRefresh *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getGroupAddress()); break;
        case 2: return (void *)(&pp->getSourceAddress()); break;
        case 3: return (void *)(&pp->getOriginatorAddress()); break;
        default: return NULL;
    }
}

Register_Class(PIMRegister);

PIMRegister::PIMRegister(const char *name, int kind) : ::inet::PIMPacket(name,kind)
{
    this->type_var = Register;
    this->B_var = 0;
    this->N_var = 0;
}

PIMRegister::PIMRegister(const PIMRegister& other) : ::inet::PIMPacket(other)
{
    copy(other);
}

PIMRegister::~PIMRegister()
{
}

PIMRegister& PIMRegister::operator=(const PIMRegister& other)
{
    if (this==&other) return *this;
    ::inet::PIMPacket::operator=(other);
    copy(other);
    return *this;
}

void PIMRegister::copy(const PIMRegister& other)
{
    this->type_var = other.type_var;
    this->B_var = other.B_var;
    this->N_var = other.N_var;
}

void PIMRegister::parsimPack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->B_var);
    doPacking(b,this->N_var);
}

void PIMRegister::parsimUnpack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->B_var);
    doUnpacking(b,this->N_var);
}

short PIMRegister::getType() const
{
    return type_var;
}

void PIMRegister::setType(short type)
{
    this->type_var = type;
}

bool PIMRegister::getB() const
{
    return B_var;
}

void PIMRegister::setB(bool B)
{
    this->B_var = B;
}

bool PIMRegister::getN() const
{
    return N_var;
}

void PIMRegister::setN(bool N)
{
    this->N_var = N;
}

class PIMRegisterDescriptor : public cClassDescriptor
{
  public:
    PIMRegisterDescriptor();
    virtual ~PIMRegisterDescriptor();

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

Register_ClassDescriptor(PIMRegisterDescriptor);

PIMRegisterDescriptor::PIMRegisterDescriptor() : cClassDescriptor("inet::PIMRegister", "inet::PIMPacket")
{
}

PIMRegisterDescriptor::~PIMRegisterDescriptor()
{
}

bool PIMRegisterDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PIMRegister *>(obj)!=NULL;
}

const char *PIMRegisterDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PIMRegisterDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int PIMRegisterDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PIMRegisterDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "B",
        "N",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int PIMRegisterDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='B' && strcmp(fieldName, "B")==0) return base+1;
    if (fieldName[0]=='N' && strcmp(fieldName, "N")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PIMRegisterDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "bool",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *PIMRegisterDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::PIMPacketType";
            return NULL;
        default: return NULL;
    }
}

int PIMRegisterDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PIMRegister *pp = (PIMRegister *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PIMRegisterDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PIMRegister *pp = (PIMRegister *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: return bool2string(pp->getB());
        case 2: return bool2string(pp->getN());
        default: return "";
    }
}

bool PIMRegisterDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PIMRegister *pp = (PIMRegister *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setB(string2bool(value)); return true;
        case 2: pp->setN(string2bool(value)); return true;
        default: return false;
    }
}

const char *PIMRegisterDescriptor::getFieldStructName(void *object, int field) const
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

void *PIMRegisterDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PIMRegister *pp = (PIMRegister *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(PIMRegisterStop);

PIMRegisterStop::PIMRegisterStop(const char *name, int kind) : ::inet::PIMPacket(name,kind)
{
    this->type_var = RegisterStop;
}

PIMRegisterStop::PIMRegisterStop(const PIMRegisterStop& other) : ::inet::PIMPacket(other)
{
    copy(other);
}

PIMRegisterStop::~PIMRegisterStop()
{
}

PIMRegisterStop& PIMRegisterStop::operator=(const PIMRegisterStop& other)
{
    if (this==&other) return *this;
    ::inet::PIMPacket::operator=(other);
    copy(other);
    return *this;
}

void PIMRegisterStop::copy(const PIMRegisterStop& other)
{
    this->type_var = other.type_var;
    this->groupAddress_var = other.groupAddress_var;
    this->sourceAddress_var = other.sourceAddress_var;
}

void PIMRegisterStop::parsimPack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->groupAddress_var);
    doPacking(b,this->sourceAddress_var);
}

void PIMRegisterStop::parsimUnpack(cCommBuffer *b)
{
    ::inet::PIMPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->groupAddress_var);
    doUnpacking(b,this->sourceAddress_var);
}

short PIMRegisterStop::getType() const
{
    return type_var;
}

void PIMRegisterStop::setType(short type)
{
    this->type_var = type;
}

IPv4Address& PIMRegisterStop::getGroupAddress()
{
    return groupAddress_var;
}

void PIMRegisterStop::setGroupAddress(const IPv4Address& groupAddress)
{
    this->groupAddress_var = groupAddress;
}

IPv4Address& PIMRegisterStop::getSourceAddress()
{
    return sourceAddress_var;
}

void PIMRegisterStop::setSourceAddress(const IPv4Address& sourceAddress)
{
    this->sourceAddress_var = sourceAddress;
}

class PIMRegisterStopDescriptor : public cClassDescriptor
{
  public:
    PIMRegisterStopDescriptor();
    virtual ~PIMRegisterStopDescriptor();

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

Register_ClassDescriptor(PIMRegisterStopDescriptor);

PIMRegisterStopDescriptor::PIMRegisterStopDescriptor() : cClassDescriptor("inet::PIMRegisterStop", "inet::PIMPacket")
{
}

PIMRegisterStopDescriptor::~PIMRegisterStopDescriptor()
{
}

bool PIMRegisterStopDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PIMRegisterStop *>(obj)!=NULL;
}

const char *PIMRegisterStopDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PIMRegisterStopDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int PIMRegisterStopDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *PIMRegisterStopDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "groupAddress",
        "sourceAddress",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int PIMRegisterStopDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='g' && strcmp(fieldName, "groupAddress")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceAddress")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PIMRegisterStopDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "IPv4Address",
        "IPv4Address",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *PIMRegisterStopDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::PIMPacketType";
            return NULL;
        default: return NULL;
    }
}

int PIMRegisterStopDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PIMRegisterStop *pp = (PIMRegisterStop *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PIMRegisterStopDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PIMRegisterStop *pp = (PIMRegisterStop *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: {std::stringstream out; out << pp->getGroupAddress(); return out.str();}
        case 2: {std::stringstream out; out << pp->getSourceAddress(); return out.str();}
        default: return "";
    }
}

bool PIMRegisterStopDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PIMRegisterStop *pp = (PIMRegisterStop *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *PIMRegisterStopDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv4Address));
        case 2: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *PIMRegisterStopDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PIMRegisterStop *pp = (PIMRegisterStop *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getGroupAddress()); break;
        case 2: return (void *)(&pp->getSourceAddress()); break;
        default: return NULL;
    }
}

} // namespace inet

