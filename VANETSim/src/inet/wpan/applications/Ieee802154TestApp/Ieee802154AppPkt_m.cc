//
// Generated file, do not edit! Created by nedtool 4.6 from wpan/applications/Ieee802154TestApp/Ieee802154AppPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee802154AppPkt_m.h"

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

Register_Class(Ieee802154AppPkt);

Ieee802154AppPkt::Ieee802154AppPkt(const char *name, int kind) : ::cPacket(name,kind)
{
    this->sourceName_var = 0;
    this->destName_var = 0;
    this->creationTime_var = 0;
}

Ieee802154AppPkt::Ieee802154AppPkt(const Ieee802154AppPkt& other) : ::cPacket(other)
{
    copy(other);
}

Ieee802154AppPkt::~Ieee802154AppPkt()
{
}

Ieee802154AppPkt& Ieee802154AppPkt::operator=(const Ieee802154AppPkt& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154AppPkt::copy(const Ieee802154AppPkt& other)
{
    this->sourceName_var = other.sourceName_var;
    this->destName_var = other.destName_var;
    this->creationTime_var = other.creationTime_var;
}

void Ieee802154AppPkt::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->sourceName_var);
    doPacking(b,this->destName_var);
    doPacking(b,this->creationTime_var);
}

void Ieee802154AppPkt::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->sourceName_var);
    doUnpacking(b,this->destName_var);
    doUnpacking(b,this->creationTime_var);
}

const char * Ieee802154AppPkt::getSourceName() const
{
    return sourceName_var.c_str();
}

void Ieee802154AppPkt::setSourceName(const char * sourceName)
{
    this->sourceName_var = sourceName;
}

const char * Ieee802154AppPkt::getDestName() const
{
    return destName_var.c_str();
}

void Ieee802154AppPkt::setDestName(const char * destName)
{
    this->destName_var = destName;
}

simtime_t Ieee802154AppPkt::getCreationTime() const
{
    return creationTime_var;
}

void Ieee802154AppPkt::setCreationTime(simtime_t creationTime)
{
    this->creationTime_var = creationTime;
}

class Ieee802154AppPktDescriptor : public cClassDescriptor
{
  public:
    Ieee802154AppPktDescriptor();
    virtual ~Ieee802154AppPktDescriptor();

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

Register_ClassDescriptor(Ieee802154AppPktDescriptor);

Ieee802154AppPktDescriptor::Ieee802154AppPktDescriptor() : cClassDescriptor("Ieee802154AppPkt", "cPacket")
{
}

Ieee802154AppPktDescriptor::~Ieee802154AppPktDescriptor()
{
}

bool Ieee802154AppPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154AppPkt *>(obj)!=NULL;
}

const char *Ieee802154AppPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154AppPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int Ieee802154AppPktDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee802154AppPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sourceName",
        "destName",
        "creationTime",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int Ieee802154AppPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sourceName")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destName")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "creationTime")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154AppPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "string",
        "simtime_t",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154AppPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154AppPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AppPkt *pp = (Ieee802154AppPkt *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154AppPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AppPkt *pp = (Ieee802154AppPkt *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getSourceName());
        case 1: return oppstring2string(pp->getDestName());
        case 2: return double2string(pp->getCreationTime());
        default: return "";
    }
}

bool Ieee802154AppPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AppPkt *pp = (Ieee802154AppPkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setSourceName((value)); return true;
        case 1: pp->setDestName((value)); return true;
        case 2: pp->setCreationTime(string2double(value)); return true;
        default: return false;
    }
}

const char *Ieee802154AppPktDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee802154AppPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AppPkt *pp = (Ieee802154AppPkt *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


