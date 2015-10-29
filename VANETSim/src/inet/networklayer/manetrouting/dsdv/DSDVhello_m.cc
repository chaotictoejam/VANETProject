//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/manetrouting/dsdv/DSDVhello.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DSDVhello_m.h"

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

Register_Class(DSDV_HelloMessage);

DSDV_HelloMessage::DSDV_HelloMessage(const char *name, int kind) : ::cPacket(name,kind)
{
    this->sequencenumber_var = 0;
    this->hopdistance_var = 0;
}

DSDV_HelloMessage::DSDV_HelloMessage(const DSDV_HelloMessage& other) : ::cPacket(other)
{
    copy(other);
}

DSDV_HelloMessage::~DSDV_HelloMessage()
{
}

DSDV_HelloMessage& DSDV_HelloMessage::operator=(const DSDV_HelloMessage& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void DSDV_HelloMessage::copy(const DSDV_HelloMessage& other)
{
    this->srcIPAddress_var = other.srcIPAddress_var;
    this->sequencenumber_var = other.sequencenumber_var;
    this->nextIPAddress_var = other.nextIPAddress_var;
    this->hopdistance_var = other.hopdistance_var;
}

void DSDV_HelloMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->srcIPAddress_var);
    doPacking(b,this->sequencenumber_var);
    doPacking(b,this->nextIPAddress_var);
    doPacking(b,this->hopdistance_var);
}

void DSDV_HelloMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcIPAddress_var);
    doUnpacking(b,this->sequencenumber_var);
    doUnpacking(b,this->nextIPAddress_var);
    doUnpacking(b,this->hopdistance_var);
}

IPv4Address& DSDV_HelloMessage::getSrcIPAddress()
{
    return srcIPAddress_var;
}

void DSDV_HelloMessage::setSrcIPAddress(const IPv4Address& srcIPAddress)
{
    this->srcIPAddress_var = srcIPAddress;
}

unsigned int DSDV_HelloMessage::getSequencenumber() const
{
    return sequencenumber_var;
}

void DSDV_HelloMessage::setSequencenumber(unsigned int sequencenumber)
{
    this->sequencenumber_var = sequencenumber;
}

IPv4Address& DSDV_HelloMessage::getNextIPAddress()
{
    return nextIPAddress_var;
}

void DSDV_HelloMessage::setNextIPAddress(const IPv4Address& nextIPAddress)
{
    this->nextIPAddress_var = nextIPAddress;
}

int DSDV_HelloMessage::getHopdistance() const
{
    return hopdistance_var;
}

void DSDV_HelloMessage::setHopdistance(int hopdistance)
{
    this->hopdistance_var = hopdistance;
}

class DSDV_HelloMessageDescriptor : public cClassDescriptor
{
  public:
    DSDV_HelloMessageDescriptor();
    virtual ~DSDV_HelloMessageDescriptor();

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

Register_ClassDescriptor(DSDV_HelloMessageDescriptor);

DSDV_HelloMessageDescriptor::DSDV_HelloMessageDescriptor() : cClassDescriptor("DSDV_HelloMessage", "cPacket")
{
}

DSDV_HelloMessageDescriptor::~DSDV_HelloMessageDescriptor()
{
}

bool DSDV_HelloMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DSDV_HelloMessage *>(obj)!=NULL;
}

const char *DSDV_HelloMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DSDV_HelloMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int DSDV_HelloMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *DSDV_HelloMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcIPAddress",
        "sequencenumber",
        "nextIPAddress",
        "hopdistance",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int DSDV_HelloMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcIPAddress")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequencenumber")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextIPAddress")==0) return base+2;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopdistance")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DSDV_HelloMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "unsigned int",
        "IPv4Address",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *DSDV_HelloMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DSDV_HelloMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DSDV_HelloMessage *pp = (DSDV_HelloMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DSDV_HelloMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DSDV_HelloMessage *pp = (DSDV_HelloMessage *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrcIPAddress(); return out.str();}
        case 1: return ulong2string(pp->getSequencenumber());
        case 2: {std::stringstream out; out << pp->getNextIPAddress(); return out.str();}
        case 3: return long2string(pp->getHopdistance());
        default: return "";
    }
}

bool DSDV_HelloMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DSDV_HelloMessage *pp = (DSDV_HelloMessage *)object; (void)pp;
    switch (field) {
        case 1: pp->setSequencenumber(string2ulong(value)); return true;
        case 3: pp->setHopdistance(string2long(value)); return true;
        default: return false;
    }
}

const char *DSDV_HelloMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        case 2: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *DSDV_HelloMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DSDV_HelloMessage *pp = (DSDV_HelloMessage *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrcIPAddress()); break;
        case 2: return (void *)(&pp->getNextIPAddress()); break;
        default: return NULL;
    }
}


