//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/manetrouting/dymo_fau/DYMO_Packet.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DYMO_Packet_m.h"

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

Register_Class(DYMO_Packet);

DYMO_Packet::DYMO_Packet(const char *name, int kind) : ::cPacket(name,kind)
{
    this->nextHopAddress_var = 0;
    this->destAddress_var = 0;
    this->srcAddress_var = 0;
    this->creationTime_var = 0;
}

DYMO_Packet::DYMO_Packet(const DYMO_Packet& other) : ::cPacket(other)
{
    copy(other);
}

DYMO_Packet::~DYMO_Packet()
{
}

DYMO_Packet& DYMO_Packet::operator=(const DYMO_Packet& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void DYMO_Packet::copy(const DYMO_Packet& other)
{
    this->nextHopAddress_var = other.nextHopAddress_var;
    this->destAddress_var = other.destAddress_var;
    this->srcAddress_var = other.srcAddress_var;
    this->creationTime_var = other.creationTime_var;
}

void DYMO_Packet::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->nextHopAddress_var);
    doPacking(b,this->destAddress_var);
    doPacking(b,this->srcAddress_var);
    doPacking(b,this->creationTime_var);
}

void DYMO_Packet::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->nextHopAddress_var);
    doUnpacking(b,this->destAddress_var);
    doUnpacking(b,this->srcAddress_var);
    doUnpacking(b,this->creationTime_var);
}

unsigned int DYMO_Packet::getNextHopAddress() const
{
    return nextHopAddress_var;
}

void DYMO_Packet::setNextHopAddress(unsigned int nextHopAddress)
{
    this->nextHopAddress_var = nextHopAddress;
}

unsigned int DYMO_Packet::getDestAddress() const
{
    return destAddress_var;
}

void DYMO_Packet::setDestAddress(unsigned int destAddress)
{
    this->destAddress_var = destAddress;
}

unsigned int DYMO_Packet::getSrcAddress() const
{
    return srcAddress_var;
}

void DYMO_Packet::setSrcAddress(unsigned int srcAddress)
{
    this->srcAddress_var = srcAddress;
}

simtime_t DYMO_Packet::getCreationTime() const
{
    return creationTime_var;
}

void DYMO_Packet::setCreationTime(simtime_t creationTime)
{
    this->creationTime_var = creationTime;
}

class DYMO_PacketDescriptor : public cClassDescriptor
{
  public:
    DYMO_PacketDescriptor();
    virtual ~DYMO_PacketDescriptor();

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

Register_ClassDescriptor(DYMO_PacketDescriptor);

DYMO_PacketDescriptor::DYMO_PacketDescriptor() : cClassDescriptor("DYMO_Packet", "cPacket")
{
}

DYMO_PacketDescriptor::~DYMO_PacketDescriptor()
{
}

bool DYMO_PacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DYMO_Packet *>(obj)!=NULL;
}

const char *DYMO_PacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DYMO_PacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int DYMO_PacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *DYMO_PacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nextHopAddress",
        "destAddress",
        "srcAddress",
        "creationTime",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int DYMO_PacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextHopAddress")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddress")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddress")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "creationTime")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DYMO_PacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "simtime_t",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *DYMO_PacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DYMO_PacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_Packet *pp = (DYMO_Packet *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DYMO_PacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_Packet *pp = (DYMO_Packet *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getNextHopAddress());
        case 1: return ulong2string(pp->getDestAddress());
        case 2: return ulong2string(pp->getSrcAddress());
        case 3: return double2string(pp->getCreationTime());
        default: return "";
    }
}

bool DYMO_PacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_Packet *pp = (DYMO_Packet *)object; (void)pp;
    switch (field) {
        case 0: pp->setNextHopAddress(string2ulong(value)); return true;
        case 1: pp->setDestAddress(string2ulong(value)); return true;
        case 2: pp->setSrcAddress(string2ulong(value)); return true;
        case 3: pp->setCreationTime(string2double(value)); return true;
        default: return false;
    }
}

const char *DYMO_PacketDescriptor::getFieldStructName(void *object, int field) const
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

void *DYMO_PacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_Packet *pp = (DYMO_Packet *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


