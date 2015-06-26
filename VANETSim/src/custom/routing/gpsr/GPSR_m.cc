//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/routing/gpsr/GPSR.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "GPSR_m.h"

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

Register_Class(GPSRBeacon);

GPSRBeacon::GPSRBeacon(const char *name, int kind) : ::cPacket(name,kind)
{
}

GPSRBeacon::GPSRBeacon(const GPSRBeacon& other) : ::cPacket(other)
{
    copy(other);
}

GPSRBeacon::~GPSRBeacon()
{
}

GPSRBeacon& GPSRBeacon::operator=(const GPSRBeacon& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void GPSRBeacon::copy(const GPSRBeacon& other)
{
    this->address_var = other.address_var;
    this->position_var = other.position_var;
}

void GPSRBeacon::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->address_var);
    doPacking(b,this->position_var);
}

void GPSRBeacon::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->position_var);
}

IPvXAddress& GPSRBeacon::getAddress()
{
    return address_var;
}

void GPSRBeacon::setAddress(const IPvXAddress& address)
{
    this->address_var = address;
}

Coord& GPSRBeacon::getPosition()
{
    return position_var;
}

void GPSRBeacon::setPosition(const Coord& position)
{
    this->position_var = position;
}

class GPSRBeaconDescriptor : public cClassDescriptor
{
  public:
    GPSRBeaconDescriptor();
    virtual ~GPSRBeaconDescriptor();

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

Register_ClassDescriptor(GPSRBeaconDescriptor);

GPSRBeaconDescriptor::GPSRBeaconDescriptor() : cClassDescriptor("GPSRBeacon", "cPacket")
{
}

GPSRBeaconDescriptor::~GPSRBeaconDescriptor()
{
}

bool GPSRBeaconDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GPSRBeacon *>(obj)!=NULL;
}

const char *GPSRBeaconDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GPSRBeaconDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int GPSRBeaconDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *GPSRBeaconDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "address",
        "position",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int GPSRBeaconDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "address")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GPSRBeaconDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPvXAddress",
        "Coord",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *GPSRBeaconDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GPSRBeaconDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GPSRBeacon *pp = (GPSRBeacon *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GPSRBeaconDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GPSRBeacon *pp = (GPSRBeacon *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->getPosition(); return out.str();}
        default: return "";
    }
}

bool GPSRBeaconDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GPSRBeacon *pp = (GPSRBeacon *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GPSRBeaconDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPvXAddress));
        case 1: return opp_typename(typeid(Coord));
        default: return NULL;
    };
}

void *GPSRBeaconDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GPSRBeacon *pp = (GPSRBeacon *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress()); break;
        case 1: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}

Register_Class(GPSRPacket);

GPSRPacket::GPSRPacket(const char *name, int kind) : ::cPacket(name,kind)
{
}

GPSRPacket::GPSRPacket(const GPSRPacket& other) : ::cPacket(other)
{
    copy(other);
}

GPSRPacket::~GPSRPacket()
{
}

GPSRPacket& GPSRPacket::operator=(const GPSRPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void GPSRPacket::copy(const GPSRPacket& other)
{
    this->routingMode_var = other.routingMode_var;
    this->destinationPosition_var = other.destinationPosition_var;
    this->perimeterRoutingStartPosition_var = other.perimeterRoutingStartPosition_var;
    this->perimeterRoutingForwardPosition_var = other.perimeterRoutingForwardPosition_var;
    this->currentFaceFirstSenderAddress_var = other.currentFaceFirstSenderAddress_var;
    this->currentFaceFirstReceiverAddress_var = other.currentFaceFirstReceiverAddress_var;
    this->senderAddress_var = other.senderAddress_var;
}

void GPSRPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->routingMode_var);
    doPacking(b,this->destinationPosition_var);
    doPacking(b,this->perimeterRoutingStartPosition_var);
    doPacking(b,this->perimeterRoutingForwardPosition_var);
    doPacking(b,this->currentFaceFirstSenderAddress_var);
    doPacking(b,this->currentFaceFirstReceiverAddress_var);
    doPacking(b,this->senderAddress_var);
}

void GPSRPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->routingMode_var);
    doUnpacking(b,this->destinationPosition_var);
    doUnpacking(b,this->perimeterRoutingStartPosition_var);
    doUnpacking(b,this->perimeterRoutingForwardPosition_var);
    doUnpacking(b,this->currentFaceFirstSenderAddress_var);
    doUnpacking(b,this->currentFaceFirstReceiverAddress_var);
    doUnpacking(b,this->senderAddress_var);
}

GPSRForwardingMode& GPSRPacket::getRoutingMode()
{
    return routingMode_var;
}

void GPSRPacket::setRoutingMode(const GPSRForwardingMode& routingMode)
{
    this->routingMode_var = routingMode;
}

Coord& GPSRPacket::getDestinationPosition()
{
    return destinationPosition_var;
}

void GPSRPacket::setDestinationPosition(const Coord& destinationPosition)
{
    this->destinationPosition_var = destinationPosition;
}

Coord& GPSRPacket::getPerimeterRoutingStartPosition()
{
    return perimeterRoutingStartPosition_var;
}

void GPSRPacket::setPerimeterRoutingStartPosition(const Coord& perimeterRoutingStartPosition)
{
    this->perimeterRoutingStartPosition_var = perimeterRoutingStartPosition;
}

Coord& GPSRPacket::getPerimeterRoutingForwardPosition()
{
    return perimeterRoutingForwardPosition_var;
}

void GPSRPacket::setPerimeterRoutingForwardPosition(const Coord& perimeterRoutingForwardPosition)
{
    this->perimeterRoutingForwardPosition_var = perimeterRoutingForwardPosition;
}

IPvXAddress& GPSRPacket::getCurrentFaceFirstSenderAddress()
{
    return currentFaceFirstSenderAddress_var;
}

void GPSRPacket::setCurrentFaceFirstSenderAddress(const IPvXAddress& currentFaceFirstSenderAddress)
{
    this->currentFaceFirstSenderAddress_var = currentFaceFirstSenderAddress;
}

IPvXAddress& GPSRPacket::getCurrentFaceFirstReceiverAddress()
{
    return currentFaceFirstReceiverAddress_var;
}

void GPSRPacket::setCurrentFaceFirstReceiverAddress(const IPvXAddress& currentFaceFirstReceiverAddress)
{
    this->currentFaceFirstReceiverAddress_var = currentFaceFirstReceiverAddress;
}

IPvXAddress& GPSRPacket::getSenderAddress()
{
    return senderAddress_var;
}

void GPSRPacket::setSenderAddress(const IPvXAddress& senderAddress)
{
    this->senderAddress_var = senderAddress;
}

class GPSRPacketDescriptor : public cClassDescriptor
{
  public:
    GPSRPacketDescriptor();
    virtual ~GPSRPacketDescriptor();

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

Register_ClassDescriptor(GPSRPacketDescriptor);

GPSRPacketDescriptor::GPSRPacketDescriptor() : cClassDescriptor("GPSRPacket", "cPacket")
{
}

GPSRPacketDescriptor::~GPSRPacketDescriptor()
{
}

bool GPSRPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<GPSRPacket *>(obj)!=NULL;
}

const char *GPSRPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int GPSRPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int GPSRPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *GPSRPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "routingMode",
        "destinationPosition",
        "perimeterRoutingStartPosition",
        "perimeterRoutingForwardPosition",
        "currentFaceFirstSenderAddress",
        "currentFaceFirstReceiverAddress",
        "senderAddress",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int GPSRPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "routingMode")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationPosition")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "perimeterRoutingStartPosition")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "perimeterRoutingForwardPosition")==0) return base+3;
    if (fieldName[0]=='c' && strcmp(fieldName, "currentFaceFirstSenderAddress")==0) return base+4;
    if (fieldName[0]=='c' && strcmp(fieldName, "currentFaceFirstReceiverAddress")==0) return base+5;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderAddress")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *GPSRPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "GPSRForwardingMode",
        "Coord",
        "Coord",
        "Coord",
        "IPvXAddress",
        "IPvXAddress",
        "IPvXAddress",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *GPSRPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int GPSRPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    GPSRPacket *pp = (GPSRPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string GPSRPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    GPSRPacket *pp = (GPSRPacket *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRoutingMode(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestinationPosition(); return out.str();}
        case 2: {std::stringstream out; out << pp->getPerimeterRoutingStartPosition(); return out.str();}
        case 3: {std::stringstream out; out << pp->getPerimeterRoutingForwardPosition(); return out.str();}
        case 4: {std::stringstream out; out << pp->getCurrentFaceFirstSenderAddress(); return out.str();}
        case 5: {std::stringstream out; out << pp->getCurrentFaceFirstReceiverAddress(); return out.str();}
        case 6: {std::stringstream out; out << pp->getSenderAddress(); return out.str();}
        default: return "";
    }
}

bool GPSRPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    GPSRPacket *pp = (GPSRPacket *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *GPSRPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(GPSRForwardingMode));
        case 1: return opp_typename(typeid(Coord));
        case 2: return opp_typename(typeid(Coord));
        case 3: return opp_typename(typeid(Coord));
        case 4: return opp_typename(typeid(IPvXAddress));
        case 5: return opp_typename(typeid(IPvXAddress));
        case 6: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *GPSRPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    GPSRPacket *pp = (GPSRPacket *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getRoutingMode()); break;
        case 1: return (void *)(&pp->getDestinationPosition()); break;
        case 2: return (void *)(&pp->getPerimeterRoutingStartPosition()); break;
        case 3: return (void *)(&pp->getPerimeterRoutingForwardPosition()); break;
        case 4: return (void *)(&pp->getCurrentFaceFirstSenderAddress()); break;
        case 5: return (void *)(&pp->getCurrentFaceFirstReceiverAddress()); break;
        case 6: return (void *)(&pp->getSenderAddress()); break;
        default: return NULL;
    }
}


