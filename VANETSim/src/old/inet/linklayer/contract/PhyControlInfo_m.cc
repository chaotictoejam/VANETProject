//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/contract/PhyControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "PhyControlInfo_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("PhyCommandCode");
    if (!e) enums.getInstance()->add(e = new cEnum("PhyCommandCode"));
    e->insert(PHY_C_CONFIGURERADIO, "PHY_C_CONFIGURERADIO");
    e->insert(PHY_C_CHANGETRANSMITTERPOWER, "PHY_C_CHANGETRANSMITTERPOWER");
);

Register_Class(PhyControlInfo);

PhyControlInfo::PhyControlInfo() : ::cObject()
{
    this->channelNumber_var = -1;
    this->bitrate_var = -1;
    this->adaptiveSensitivity_var = false;
    this->transmitterPower_var = -1;
}

PhyControlInfo::PhyControlInfo(const PhyControlInfo& other) : ::cObject(other)
{
    copy(other);
}

PhyControlInfo::~PhyControlInfo()
{
}

PhyControlInfo& PhyControlInfo::operator=(const PhyControlInfo& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void PhyControlInfo::copy(const PhyControlInfo& other)
{
    this->channelNumber_var = other.channelNumber_var;
    this->bitrate_var = other.bitrate_var;
    this->adaptiveSensitivity_var = other.adaptiveSensitivity_var;
    this->transmitterPower_var = other.transmitterPower_var;
}

void PhyControlInfo::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->channelNumber_var);
    doPacking(b,this->bitrate_var);
    doPacking(b,this->adaptiveSensitivity_var);
    doPacking(b,this->transmitterPower_var);
}

void PhyControlInfo::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->channelNumber_var);
    doUnpacking(b,this->bitrate_var);
    doUnpacking(b,this->adaptiveSensitivity_var);
    doUnpacking(b,this->transmitterPower_var);
}

int PhyControlInfo::getChannelNumber() const
{
    return channelNumber_var;
}

void PhyControlInfo::setChannelNumber(int channelNumber)
{
    this->channelNumber_var = channelNumber;
}

double PhyControlInfo::getBitrate() const
{
    return bitrate_var;
}

void PhyControlInfo::setBitrate(double bitrate)
{
    this->bitrate_var = bitrate;
}

bool PhyControlInfo::getAdaptiveSensitivity() const
{
    return adaptiveSensitivity_var;
}

void PhyControlInfo::setAdaptiveSensitivity(bool adaptiveSensitivity)
{
    this->adaptiveSensitivity_var = adaptiveSensitivity;
}

double PhyControlInfo::getTransmitterPower() const
{
    return transmitterPower_var;
}

void PhyControlInfo::setTransmitterPower(double transmitterPower)
{
    this->transmitterPower_var = transmitterPower;
}

class PhyControlInfoDescriptor : public cClassDescriptor
{
  public:
    PhyControlInfoDescriptor();
    virtual ~PhyControlInfoDescriptor();

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

Register_ClassDescriptor(PhyControlInfoDescriptor);

PhyControlInfoDescriptor::PhyControlInfoDescriptor() : cClassDescriptor("PhyControlInfo", "cObject")
{
}

PhyControlInfoDescriptor::~PhyControlInfoDescriptor()
{
}

bool PhyControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PhyControlInfo *>(obj)!=NULL;
}

const char *PhyControlInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PhyControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int PhyControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *PhyControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "channelNumber",
        "bitrate",
        "adaptiveSensitivity",
        "transmitterPower",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int PhyControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "channelNumber")==0) return base+0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bitrate")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "adaptiveSensitivity")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "transmitterPower")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PhyControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "double",
        "bool",
        "double",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *PhyControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PhyControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PhyControlInfo *pp = (PhyControlInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PhyControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PhyControlInfo *pp = (PhyControlInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getChannelNumber());
        case 1: return double2string(pp->getBitrate());
        case 2: return bool2string(pp->getAdaptiveSensitivity());
        case 3: return double2string(pp->getTransmitterPower());
        default: return "";
    }
}

bool PhyControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PhyControlInfo *pp = (PhyControlInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setChannelNumber(string2long(value)); return true;
        case 1: pp->setBitrate(string2double(value)); return true;
        case 2: pp->setAdaptiveSensitivity(string2bool(value)); return true;
        case 3: pp->setTransmitterPower(string2double(value)); return true;
        default: return false;
    }
}

const char *PhyControlInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *PhyControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PhyControlInfo *pp = (PhyControlInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("PhyIndication");
    if (!e) enums.getInstance()->add(e = new cEnum("PhyIndication"));
    e->insert(FRAMEOK, "FRAMEOK");
    e->insert(BITERROR, "BITERROR");
    e->insert(COLLISION, "COLLISION");
);


