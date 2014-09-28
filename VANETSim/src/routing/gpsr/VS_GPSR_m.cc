//
// Generated file, do not edit! Created by opp_msgc 4.4 from src/routing/gpsr/VS_GPSR.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "VS_GPSR_m.h"

USING_NAMESPACE

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(VS_GPSRBeacon);

VS_GPSRBeacon::VS_GPSRBeacon(const char *name, int kind) : cPacket(name,kind)
{
}

VS_GPSRBeacon::VS_GPSRBeacon(const VS_GPSRBeacon& other) : cPacket(other)
{
    copy(other);
}

VS_GPSRBeacon::~VS_GPSRBeacon()
{
}

VS_GPSRBeacon& VS_GPSRBeacon::operator=(const VS_GPSRBeacon& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void VS_GPSRBeacon::copy(const VS_GPSRBeacon& other)
{
    this->address_var = other.address_var;
    this->position_var = other.position_var;
}

void VS_GPSRBeacon::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->address_var);
    doPacking(b,this->position_var);
}

void VS_GPSRBeacon::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->address_var);
    doUnpacking(b,this->position_var);
}

IPvXAddress& VS_GPSRBeacon::getAddress()
{
    return address_var;
}

void VS_GPSRBeacon::setAddress(const IPvXAddress& address)
{
    this->address_var = address;
}

Coord& VS_GPSRBeacon::getPosition()
{
    return position_var;
}

void VS_GPSRBeacon::setPosition(const Coord& position)
{
    this->position_var = position;
}

class VS_GPSRBeaconDescriptor : public cClassDescriptor
{
  public:
    VS_GPSRBeaconDescriptor();
    virtual ~VS_GPSRBeaconDescriptor();

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

Register_ClassDescriptor(VS_GPSRBeaconDescriptor);

VS_GPSRBeaconDescriptor::VS_GPSRBeaconDescriptor() : cClassDescriptor("VS_GPSRBeacon", "cPacket")
{
}

VS_GPSRBeaconDescriptor::~VS_GPSRBeaconDescriptor()
{
}

bool VS_GPSRBeaconDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<VS_GPSRBeacon *>(obj)!=NULL;
}

const char *VS_GPSRBeaconDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int VS_GPSRBeaconDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int VS_GPSRBeaconDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *VS_GPSRBeaconDescriptor::getFieldName(void *object, int field) const
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

int VS_GPSRBeaconDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "address")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *VS_GPSRBeaconDescriptor::getFieldTypeString(void *object, int field) const
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

const char *VS_GPSRBeaconDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int VS_GPSRBeaconDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    VS_GPSRBeacon *pp = (VS_GPSRBeacon *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string VS_GPSRBeaconDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    VS_GPSRBeacon *pp = (VS_GPSRBeacon *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getAddress(); return out.str();}
        case 1: {std::stringstream out; out << pp->getPosition(); return out.str();}
        default: return "";
    }
}

bool VS_GPSRBeaconDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    VS_GPSRBeacon *pp = (VS_GPSRBeacon *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *VS_GPSRBeaconDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "IPvXAddress",
        "Coord",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *VS_GPSRBeaconDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    VS_GPSRBeacon *pp = (VS_GPSRBeacon *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getAddress()); break;
        case 1: return (void *)(&pp->getPosition()); break;
        default: return NULL;
    }
}

Register_Class(VS_GPSRPacket);

VS_GPSRPacket::VS_GPSRPacket(const char *name, int kind) : cPacket(name,kind)
{
}

VS_GPSRPacket::VS_GPSRPacket(const VS_GPSRPacket& other) : cPacket(other)
{
    copy(other);
}

VS_GPSRPacket::~VS_GPSRPacket()
{
}

VS_GPSRPacket& VS_GPSRPacket::operator=(const VS_GPSRPacket& other)
{
    if (this==&other) return *this;
    cPacket::operator=(other);
    copy(other);
    return *this;
}

void VS_GPSRPacket::copy(const VS_GPSRPacket& other)
{
    this->routingMode_var = other.routingMode_var;
    this->destinationPosition_var = other.destinationPosition_var;
    this->perimeterRoutingStartPosition_var = other.perimeterRoutingStartPosition_var;
    this->perimeterRoutingForwardPosition_var = other.perimeterRoutingForwardPosition_var;
    this->currentFaceFirstSenderAddress_var = other.currentFaceFirstSenderAddress_var;
    this->currentFaceFirstReceiverAddress_var = other.currentFaceFirstReceiverAddress_var;
    this->senderAddress_var = other.senderAddress_var;
}

void VS_GPSRPacket::parsimPack(cCommBuffer *b)
{
    cPacket::parsimPack(b);
    doPacking(b,this->routingMode_var);
    doPacking(b,this->destinationPosition_var);
    doPacking(b,this->perimeterRoutingStartPosition_var);
    doPacking(b,this->perimeterRoutingForwardPosition_var);
    doPacking(b,this->currentFaceFirstSenderAddress_var);
    doPacking(b,this->currentFaceFirstReceiverAddress_var);
    doPacking(b,this->senderAddress_var);
}

void VS_GPSRPacket::parsimUnpack(cCommBuffer *b)
{
    cPacket::parsimUnpack(b);
    doUnpacking(b,this->routingMode_var);
    doUnpacking(b,this->destinationPosition_var);
    doUnpacking(b,this->perimeterRoutingStartPosition_var);
    doUnpacking(b,this->perimeterRoutingForwardPosition_var);
    doUnpacking(b,this->currentFaceFirstSenderAddress_var);
    doUnpacking(b,this->currentFaceFirstReceiverAddress_var);
    doUnpacking(b,this->senderAddress_var);
}

VS_GPSRForwardingMode& VS_GPSRPacket::getRoutingMode()
{
    return routingMode_var;
}

void VS_GPSRPacket::setRoutingMode(const VS_GPSRForwardingMode& routingMode)
{
    this->routingMode_var = routingMode;
}

Coord& VS_GPSRPacket::getDestinationPosition()
{
    return destinationPosition_var;
}

void VS_GPSRPacket::setDestinationPosition(const Coord& destinationPosition)
{
    this->destinationPosition_var = destinationPosition;
}

Coord& VS_GPSRPacket::getPerimeterRoutingStartPosition()
{
    return perimeterRoutingStartPosition_var;
}

void VS_GPSRPacket::setPerimeterRoutingStartPosition(const Coord& perimeterRoutingStartPosition)
{
    this->perimeterRoutingStartPosition_var = perimeterRoutingStartPosition;
}

Coord& VS_GPSRPacket::getPerimeterRoutingForwardPosition()
{
    return perimeterRoutingForwardPosition_var;
}

void VS_GPSRPacket::setPerimeterRoutingForwardPosition(const Coord& perimeterRoutingForwardPosition)
{
    this->perimeterRoutingForwardPosition_var = perimeterRoutingForwardPosition;
}

IPvXAddress& VS_GPSRPacket::getCurrentFaceFirstSenderAddress()
{
    return currentFaceFirstSenderAddress_var;
}

void VS_GPSRPacket::setCurrentFaceFirstSenderAddress(const IPvXAddress& currentFaceFirstSenderAddress)
{
    this->currentFaceFirstSenderAddress_var = currentFaceFirstSenderAddress;
}

IPvXAddress& VS_GPSRPacket::getCurrentFaceFirstReceiverAddress()
{
    return currentFaceFirstReceiverAddress_var;
}

void VS_GPSRPacket::setCurrentFaceFirstReceiverAddress(const IPvXAddress& currentFaceFirstReceiverAddress)
{
    this->currentFaceFirstReceiverAddress_var = currentFaceFirstReceiverAddress;
}

IPvXAddress& VS_GPSRPacket::getSenderAddress()
{
    return senderAddress_var;
}

void VS_GPSRPacket::setSenderAddress(const IPvXAddress& senderAddress)
{
    this->senderAddress_var = senderAddress;
}

class VS_GPSRPacketDescriptor : public cClassDescriptor
{
  public:
    VS_GPSRPacketDescriptor();
    virtual ~VS_GPSRPacketDescriptor();

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

Register_ClassDescriptor(VS_GPSRPacketDescriptor);

VS_GPSRPacketDescriptor::VS_GPSRPacketDescriptor() : cClassDescriptor("VS_GPSRPacket", "cPacket")
{
}

VS_GPSRPacketDescriptor::~VS_GPSRPacketDescriptor()
{
}

bool VS_GPSRPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<VS_GPSRPacket *>(obj)!=NULL;
}

const char *VS_GPSRPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int VS_GPSRPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int VS_GPSRPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *VS_GPSRPacketDescriptor::getFieldName(void *object, int field) const
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

int VS_GPSRPacketDescriptor::findField(void *object, const char *fieldName) const
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

const char *VS_GPSRPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "VS_GPSRForwardingMode",
        "Coord",
        "Coord",
        "Coord",
        "IPvXAddress",
        "IPvXAddress",
        "IPvXAddress",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *VS_GPSRPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int VS_GPSRPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    VS_GPSRPacket *pp = (VS_GPSRPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string VS_GPSRPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    VS_GPSRPacket *pp = (VS_GPSRPacket *)object; (void)pp;
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

bool VS_GPSRPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    VS_GPSRPacket *pp = (VS_GPSRPacket *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *VS_GPSRPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        "VS_GPSRForwardingMode",
        "Coord",
        "Coord",
        "Coord",
        "IPvXAddress",
        "IPvXAddress",
        "IPvXAddress",
    };
    return (field>=0 && field<7) ? fieldStructNames[field] : NULL;
}

void *VS_GPSRPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    VS_GPSRPacket *pp = (VS_GPSRPacket *)object; (void)pp;
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


