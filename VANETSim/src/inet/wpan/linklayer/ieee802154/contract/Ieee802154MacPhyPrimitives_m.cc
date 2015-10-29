//
// Generated file, do not edit! Created by nedtool 4.6 from wpan/linklayer/ieee802154/contract/Ieee802154MacPhyPrimitives.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee802154MacPhyPrimitives_m.h"

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

Register_Class(Ieee802154MacPhyPrimitives);

Ieee802154MacPhyPrimitives::Ieee802154MacPhyPrimitives(const char *name, int kind) : ::cMessage(name,kind)
{
    this->status_var = 0;
    this->attribute_var = 0;
    this->bitRate_var = 0;
    this->additional_var = -1;
    this->energyLevel_var = 0;
    this->channelNumber_var = 0;
}

Ieee802154MacPhyPrimitives::Ieee802154MacPhyPrimitives(const Ieee802154MacPhyPrimitives& other) : ::cMessage(other)
{
    copy(other);
}

Ieee802154MacPhyPrimitives::~Ieee802154MacPhyPrimitives()
{
}

Ieee802154MacPhyPrimitives& Ieee802154MacPhyPrimitives::operator=(const Ieee802154MacPhyPrimitives& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154MacPhyPrimitives::copy(const Ieee802154MacPhyPrimitives& other)
{
    this->status_var = other.status_var;
    this->attribute_var = other.attribute_var;
    this->bitRate_var = other.bitRate_var;
    this->additional_var = other.additional_var;
    this->energyLevel_var = other.energyLevel_var;
    this->channelNumber_var = other.channelNumber_var;
}

void Ieee802154MacPhyPrimitives::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->status_var);
    doPacking(b,this->attribute_var);
    doPacking(b,this->bitRate_var);
    doPacking(b,this->additional_var);
    doPacking(b,this->energyLevel_var);
    doPacking(b,this->channelNumber_var);
}

void Ieee802154MacPhyPrimitives::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->attribute_var);
    doUnpacking(b,this->bitRate_var);
    doUnpacking(b,this->additional_var);
    doUnpacking(b,this->energyLevel_var);
    doUnpacking(b,this->channelNumber_var);
}

short Ieee802154MacPhyPrimitives::getStatus() const
{
    return status_var;
}

void Ieee802154MacPhyPrimitives::setStatus(short status)
{
    this->status_var = status;
}

short Ieee802154MacPhyPrimitives::getAttribute() const
{
    return attribute_var;
}

void Ieee802154MacPhyPrimitives::setAttribute(short attribute)
{
    this->attribute_var = attribute;
}

double Ieee802154MacPhyPrimitives::getBitRate() const
{
    return bitRate_var;
}

void Ieee802154MacPhyPrimitives::setBitRate(double bitRate)
{
    this->bitRate_var = bitRate;
}

short Ieee802154MacPhyPrimitives::getAdditional() const
{
    return additional_var;
}

void Ieee802154MacPhyPrimitives::setAdditional(short additional)
{
    this->additional_var = additional;
}

unsigned char Ieee802154MacPhyPrimitives::getEnergyLevel() const
{
    return energyLevel_var;
}

void Ieee802154MacPhyPrimitives::setEnergyLevel(unsigned char energyLevel)
{
    this->energyLevel_var = energyLevel;
}

int Ieee802154MacPhyPrimitives::getChannelNumber() const
{
    return channelNumber_var;
}

void Ieee802154MacPhyPrimitives::setChannelNumber(int channelNumber)
{
    this->channelNumber_var = channelNumber;
}

class Ieee802154MacPhyPrimitivesDescriptor : public cClassDescriptor
{
  public:
    Ieee802154MacPhyPrimitivesDescriptor();
    virtual ~Ieee802154MacPhyPrimitivesDescriptor();

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

Register_ClassDescriptor(Ieee802154MacPhyPrimitivesDescriptor);

Ieee802154MacPhyPrimitivesDescriptor::Ieee802154MacPhyPrimitivesDescriptor() : cClassDescriptor("Ieee802154MacPhyPrimitives", "cMessage")
{
}

Ieee802154MacPhyPrimitivesDescriptor::~Ieee802154MacPhyPrimitivesDescriptor()
{
}

bool Ieee802154MacPhyPrimitivesDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154MacPhyPrimitives *>(obj)!=NULL;
}

const char *Ieee802154MacPhyPrimitivesDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154MacPhyPrimitivesDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int Ieee802154MacPhyPrimitivesDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *Ieee802154MacPhyPrimitivesDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "status",
        "attribute",
        "bitRate",
        "additional",
        "energyLevel",
        "channelNumber",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int Ieee802154MacPhyPrimitivesDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "status")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "attribute")==0) return base+1;
    if (fieldName[0]=='b' && strcmp(fieldName, "bitRate")==0) return base+2;
    if (fieldName[0]=='a' && strcmp(fieldName, "additional")==0) return base+3;
    if (fieldName[0]=='e' && strcmp(fieldName, "energyLevel")==0) return base+4;
    if (fieldName[0]=='c' && strcmp(fieldName, "channelNumber")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154MacPhyPrimitivesDescriptor::getFieldTypeString(void *object, int field) const
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
        "double",
        "short",
        "unsigned char",
        "int",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154MacPhyPrimitivesDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "PHYenum";
            return NULL;
        case 1:
            if (!strcmp(propertyname,"enum")) return "PHYPIBenum";
            return NULL;
        default: return NULL;
    }
}

int Ieee802154MacPhyPrimitivesDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154MacPhyPrimitives *pp = (Ieee802154MacPhyPrimitives *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154MacPhyPrimitivesDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154MacPhyPrimitives *pp = (Ieee802154MacPhyPrimitives *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getStatus());
        case 1: return long2string(pp->getAttribute());
        case 2: return double2string(pp->getBitRate());
        case 3: return long2string(pp->getAdditional());
        case 4: return ulong2string(pp->getEnergyLevel());
        case 5: return long2string(pp->getChannelNumber());
        default: return "";
    }
}

bool Ieee802154MacPhyPrimitivesDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154MacPhyPrimitives *pp = (Ieee802154MacPhyPrimitives *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus(string2long(value)); return true;
        case 1: pp->setAttribute(string2long(value)); return true;
        case 2: pp->setBitRate(string2double(value)); return true;
        case 3: pp->setAdditional(string2long(value)); return true;
        case 4: pp->setEnergyLevel(string2ulong(value)); return true;
        case 5: pp->setChannelNumber(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee802154MacPhyPrimitivesDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee802154MacPhyPrimitivesDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154MacPhyPrimitives *pp = (Ieee802154MacPhyPrimitives *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


