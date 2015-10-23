//
// Generated file, do not edit! Created by nedtool 4.6 from routing/extras/saors/base/SAORS_BEACON.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SAORS_BEACON_m.h"

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
namespace inetmanet {

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

Register_Class(SAORS_BEACON);

SAORS_BEACON::SAORS_BEACON(const char *name, int kind) : ::inet::inetmanet::DYMO_RM(name,kind)
{
    this->betw_var = 0;
}

SAORS_BEACON::SAORS_BEACON(const SAORS_BEACON& other) : ::inet::inetmanet::DYMO_RM(other)
{
    copy(other);
}

SAORS_BEACON::~SAORS_BEACON()
{
}

SAORS_BEACON& SAORS_BEACON::operator=(const SAORS_BEACON& other)
{
    if (this==&other) return *this;
    ::inet::inetmanet::DYMO_RM::operator=(other);
    copy(other);
    return *this;
}

void SAORS_BEACON::copy(const SAORS_BEACON& other)
{
    this->betw_var = other.betw_var;
    this->BeaconEntries_var = other.BeaconEntries_var;
}

void SAORS_BEACON::parsimPack(cCommBuffer *b)
{
    ::inet::inetmanet::DYMO_RM::parsimPack(b);
    doPacking(b,this->betw_var);
    doPacking(b,this->BeaconEntries_var);
}

void SAORS_BEACON::parsimUnpack(cCommBuffer *b)
{
    ::inet::inetmanet::DYMO_RM::parsimUnpack(b);
    doUnpacking(b,this->betw_var);
    doUnpacking(b,this->BeaconEntries_var);
}

double SAORS_BEACON::getBetw() const
{
    return betw_var;
}

void SAORS_BEACON::setBetw(double betw)
{
    this->betw_var = betw;
}

VectorOfSAORSBeaconBlocks& SAORS_BEACON::getBeaconEntries()
{
    return BeaconEntries_var;
}

void SAORS_BEACON::setBeaconEntries(const VectorOfSAORSBeaconBlocks& BeaconEntries)
{
    this->BeaconEntries_var = BeaconEntries;
}

class SAORS_BEACONDescriptor : public cClassDescriptor
{
  public:
    SAORS_BEACONDescriptor();
    virtual ~SAORS_BEACONDescriptor();

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

Register_ClassDescriptor(SAORS_BEACONDescriptor);

SAORS_BEACONDescriptor::SAORS_BEACONDescriptor() : cClassDescriptor("inet::inetmanet::SAORS_BEACON", "inet::inetmanet::DYMO_RM")
{
}

SAORS_BEACONDescriptor::~SAORS_BEACONDescriptor()
{
}

bool SAORS_BEACONDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SAORS_BEACON *>(obj)!=NULL;
}

const char *SAORS_BEACONDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SAORS_BEACONDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SAORS_BEACONDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SAORS_BEACONDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "betw",
        "BeaconEntries",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int SAORS_BEACONDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "betw")==0) return base+0;
    if (fieldName[0]=='B' && strcmp(fieldName, "BeaconEntries")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SAORS_BEACONDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "VectorOfSAORSBeaconBlocks",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *SAORS_BEACONDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SAORS_BEACONDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_BEACON *pp = (SAORS_BEACON *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SAORS_BEACONDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_BEACON *pp = (SAORS_BEACON *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getBetw());
        case 1: {std::stringstream out; out << pp->getBeaconEntries(); return out.str();}
        default: return "";
    }
}

bool SAORS_BEACONDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_BEACON *pp = (SAORS_BEACON *)object; (void)pp;
    switch (field) {
        case 0: pp->setBetw(string2double(value)); return true;
        default: return false;
    }
}

const char *SAORS_BEACONDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(VectorOfSAORSBeaconBlocks));
        default: return NULL;
    };
}

void *SAORS_BEACONDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SAORS_BEACON *pp = (SAORS_BEACON *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getBeaconEntries()); break;
        default: return NULL;
    }
}

} // namespace inetmanet
} // namespace inet

