//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/contract/IPv4ControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IPv4ControlInfo_m.h"

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

IPv4ControlInfo_Base::IPv4ControlInfo_Base() : ::cObject()
{
    this->interfaceId_var = -1;
    this->multicastLoop_var = 0;
    this->protocol_var = 0;
    this->typeOfService_var = 0;
    this->timeToLive_var = 0;
    this->dontFragment_var = 0;
    this->moreFragments_var = 0;
}

IPv4ControlInfo_Base::IPv4ControlInfo_Base(const IPv4ControlInfo_Base& other) : ::cObject(other)
{
    copy(other);
}

IPv4ControlInfo_Base::~IPv4ControlInfo_Base()
{
}

IPv4ControlInfo_Base& IPv4ControlInfo_Base::operator=(const IPv4ControlInfo_Base& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void IPv4ControlInfo_Base::copy(const IPv4ControlInfo_Base& other)
{
    this->destAddr_var = other.destAddr_var;
    this->srcAddr_var = other.srcAddr_var;
    this->interfaceId_var = other.interfaceId_var;
    this->multicastLoop_var = other.multicastLoop_var;
    this->protocol_var = other.protocol_var;
    this->typeOfService_var = other.typeOfService_var;
    this->timeToLive_var = other.timeToLive_var;
    this->dontFragment_var = other.dontFragment_var;
    this->nextHopAddr_var = other.nextHopAddr_var;
    this->moreFragments_var = other.moreFragments_var;
    this->macSrc_var = other.macSrc_var;
    this->macDest_var = other.macDest_var;
}

void IPv4ControlInfo_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->destAddr_var);
    doPacking(b,this->srcAddr_var);
    doPacking(b,this->interfaceId_var);
    doPacking(b,this->multicastLoop_var);
    doPacking(b,this->protocol_var);
    doPacking(b,this->typeOfService_var);
    // field diffServCodePoint is abstract -- please do packing in customized class
    // field explicitCongestionNotification is abstract -- please do packing in customized class
    doPacking(b,this->timeToLive_var);
    doPacking(b,this->dontFragment_var);
    doPacking(b,this->nextHopAddr_var);
    doPacking(b,this->moreFragments_var);
    doPacking(b,this->macSrc_var);
    doPacking(b,this->macDest_var);
}

void IPv4ControlInfo_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->destAddr_var);
    doUnpacking(b,this->srcAddr_var);
    doUnpacking(b,this->interfaceId_var);
    doUnpacking(b,this->multicastLoop_var);
    doUnpacking(b,this->protocol_var);
    doUnpacking(b,this->typeOfService_var);
    // field diffServCodePoint is abstract -- please do unpacking in customized class
    // field explicitCongestionNotification is abstract -- please do unpacking in customized class
    doUnpacking(b,this->timeToLive_var);
    doUnpacking(b,this->dontFragment_var);
    doUnpacking(b,this->nextHopAddr_var);
    doUnpacking(b,this->moreFragments_var);
    doUnpacking(b,this->macSrc_var);
    doUnpacking(b,this->macDest_var);
}

IPv4Address& IPv4ControlInfo_Base::getDestAddr()
{
    return destAddr_var;
}

void IPv4ControlInfo_Base::setDestAddr(const IPv4Address& destAddr)
{
    this->destAddr_var = destAddr;
}

IPv4Address& IPv4ControlInfo_Base::getSrcAddr()
{
    return srcAddr_var;
}

void IPv4ControlInfo_Base::setSrcAddr(const IPv4Address& srcAddr)
{
    this->srcAddr_var = srcAddr;
}

int IPv4ControlInfo_Base::getInterfaceId() const
{
    return interfaceId_var;
}

void IPv4ControlInfo_Base::setInterfaceId(int interfaceId)
{
    this->interfaceId_var = interfaceId;
}

bool IPv4ControlInfo_Base::getMulticastLoop() const
{
    return multicastLoop_var;
}

void IPv4ControlInfo_Base::setMulticastLoop(bool multicastLoop)
{
    this->multicastLoop_var = multicastLoop;
}

short IPv4ControlInfo_Base::getProtocol() const
{
    return protocol_var;
}

void IPv4ControlInfo_Base::setProtocol(short protocol)
{
    this->protocol_var = protocol;
}

unsigned char IPv4ControlInfo_Base::getTypeOfService() const
{
    return typeOfService_var;
}

void IPv4ControlInfo_Base::setTypeOfService(unsigned char typeOfService)
{
    this->typeOfService_var = typeOfService;
}

short IPv4ControlInfo_Base::getTimeToLive() const
{
    return timeToLive_var;
}

void IPv4ControlInfo_Base::setTimeToLive(short timeToLive)
{
    this->timeToLive_var = timeToLive;
}

bool IPv4ControlInfo_Base::getDontFragment() const
{
    return dontFragment_var;
}

void IPv4ControlInfo_Base::setDontFragment(bool dontFragment)
{
    this->dontFragment_var = dontFragment;
}

IPv4Address& IPv4ControlInfo_Base::getNextHopAddr()
{
    return nextHopAddr_var;
}

void IPv4ControlInfo_Base::setNextHopAddr(const IPv4Address& nextHopAddr)
{
    this->nextHopAddr_var = nextHopAddr;
}

bool IPv4ControlInfo_Base::getMoreFragments() const
{
    return moreFragments_var;
}

void IPv4ControlInfo_Base::setMoreFragments(bool moreFragments)
{
    this->moreFragments_var = moreFragments;
}

MACAddress& IPv4ControlInfo_Base::getMacSrc()
{
    return macSrc_var;
}

void IPv4ControlInfo_Base::setMacSrc(const MACAddress& macSrc)
{
    this->macSrc_var = macSrc;
}

MACAddress& IPv4ControlInfo_Base::getMacDest()
{
    return macDest_var;
}

void IPv4ControlInfo_Base::setMacDest(const MACAddress& macDest)
{
    this->macDest_var = macDest;
}

class IPv4ControlInfoDescriptor : public cClassDescriptor
{
  public:
    IPv4ControlInfoDescriptor();
    virtual ~IPv4ControlInfoDescriptor();

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

Register_ClassDescriptor(IPv4ControlInfoDescriptor);

IPv4ControlInfoDescriptor::IPv4ControlInfoDescriptor() : cClassDescriptor("IPv4ControlInfo", "cObject")
{
}

IPv4ControlInfoDescriptor::~IPv4ControlInfoDescriptor()
{
}

bool IPv4ControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4ControlInfo_Base *>(obj)!=NULL;
}

const char *IPv4ControlInfoDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4ControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 14+basedesc->getFieldCount(object) : 14;
}

unsigned int IPv4ControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<14) ? fieldTypeFlags[field] : 0;
}

const char *IPv4ControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "destAddr",
        "srcAddr",
        "interfaceId",
        "multicastLoop",
        "protocol",
        "typeOfService",
        "diffServCodePoint",
        "explicitCongestionNotification",
        "timeToLive",
        "dontFragment",
        "nextHopAddr",
        "moreFragments",
        "macSrc",
        "macDest",
    };
    return (field>=0 && field<14) ? fieldNames[field] : NULL;
}

int IPv4ControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddr")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+2;
    if (fieldName[0]=='m' && strcmp(fieldName, "multicastLoop")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "protocol")==0) return base+4;
    if (fieldName[0]=='t' && strcmp(fieldName, "typeOfService")==0) return base+5;
    if (fieldName[0]=='d' && strcmp(fieldName, "diffServCodePoint")==0) return base+6;
    if (fieldName[0]=='e' && strcmp(fieldName, "explicitCongestionNotification")==0) return base+7;
    if (fieldName[0]=='t' && strcmp(fieldName, "timeToLive")==0) return base+8;
    if (fieldName[0]=='d' && strcmp(fieldName, "dontFragment")==0) return base+9;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextHopAddr")==0) return base+10;
    if (fieldName[0]=='m' && strcmp(fieldName, "moreFragments")==0) return base+11;
    if (fieldName[0]=='m' && strcmp(fieldName, "macSrc")==0) return base+12;
    if (fieldName[0]=='m' && strcmp(fieldName, "macDest")==0) return base+13;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4ControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "IPv4Address",
        "int",
        "bool",
        "short",
        "unsigned char",
        "int",
        "int",
        "short",
        "bool",
        "IPv4Address",
        "bool",
        "MACAddress",
        "MACAddress",
    };
    return (field>=0 && field<14) ? fieldTypeStrings[field] : NULL;
}

const char *IPv4ControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 4:
            if (!strcmp(propertyname,"enum")) return "IPProtocolId";
            return NULL;
        default: return NULL;
    }
}

int IPv4ControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4ControlInfo_Base *pp = (IPv4ControlInfo_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv4ControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4ControlInfo_Base *pp = (IPv4ControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSrcAddr(); return out.str();}
        case 2: return long2string(pp->getInterfaceId());
        case 3: return bool2string(pp->getMulticastLoop());
        case 4: return long2string(pp->getProtocol());
        case 5: return ulong2string(pp->getTypeOfService());
        case 6: return long2string(pp->getDiffServCodePoint());
        case 7: return long2string(pp->getExplicitCongestionNotification());
        case 8: return long2string(pp->getTimeToLive());
        case 9: return bool2string(pp->getDontFragment());
        case 10: {std::stringstream out; out << pp->getNextHopAddr(); return out.str();}
        case 11: return bool2string(pp->getMoreFragments());
        case 12: {std::stringstream out; out << pp->getMacSrc(); return out.str();}
        case 13: {std::stringstream out; out << pp->getMacDest(); return out.str();}
        default: return "";
    }
}

bool IPv4ControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4ControlInfo_Base *pp = (IPv4ControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setInterfaceId(string2long(value)); return true;
        case 3: pp->setMulticastLoop(string2bool(value)); return true;
        case 4: pp->setProtocol(string2long(value)); return true;
        case 5: pp->setTypeOfService(string2ulong(value)); return true;
        case 6: pp->setDiffServCodePoint(string2long(value)); return true;
        case 7: pp->setExplicitCongestionNotification(string2long(value)); return true;
        case 8: pp->setTimeToLive(string2long(value)); return true;
        case 9: pp->setDontFragment(string2bool(value)); return true;
        case 11: pp->setMoreFragments(string2bool(value)); return true;
        default: return false;
    }
}

const char *IPv4ControlInfoDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        case 1: return opp_typename(typeid(IPv4Address));
        case 10: return opp_typename(typeid(IPv4Address));
        case 12: return opp_typename(typeid(MACAddress));
        case 13: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *IPv4ControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4ControlInfo_Base *pp = (IPv4ControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestAddr()); break;
        case 1: return (void *)(&pp->getSrcAddr()); break;
        case 10: return (void *)(&pp->getNextHopAddr()); break;
        case 12: return (void *)(&pp->getMacSrc()); break;
        case 13: return (void *)(&pp->getMacDest()); break;
        default: return NULL;
    }
}

Register_Class(IPv4RoutingDecision);

IPv4RoutingDecision::IPv4RoutingDecision() : ::cObject()
{
    this->interfaceId_var = -1;
}

IPv4RoutingDecision::IPv4RoutingDecision(const IPv4RoutingDecision& other) : ::cObject(other)
{
    copy(other);
}

IPv4RoutingDecision::~IPv4RoutingDecision()
{
}

IPv4RoutingDecision& IPv4RoutingDecision::operator=(const IPv4RoutingDecision& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void IPv4RoutingDecision::copy(const IPv4RoutingDecision& other)
{
    this->interfaceId_var = other.interfaceId_var;
    this->nextHopAddr_var = other.nextHopAddr_var;
}

void IPv4RoutingDecision::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->interfaceId_var);
    doPacking(b,this->nextHopAddr_var);
}

void IPv4RoutingDecision::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->interfaceId_var);
    doUnpacking(b,this->nextHopAddr_var);
}

int IPv4RoutingDecision::getInterfaceId() const
{
    return interfaceId_var;
}

void IPv4RoutingDecision::setInterfaceId(int interfaceId)
{
    this->interfaceId_var = interfaceId;
}

IPv4Address& IPv4RoutingDecision::getNextHopAddr()
{
    return nextHopAddr_var;
}

void IPv4RoutingDecision::setNextHopAddr(const IPv4Address& nextHopAddr)
{
    this->nextHopAddr_var = nextHopAddr;
}

class IPv4RoutingDecisionDescriptor : public cClassDescriptor
{
  public:
    IPv4RoutingDecisionDescriptor();
    virtual ~IPv4RoutingDecisionDescriptor();

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

Register_ClassDescriptor(IPv4RoutingDecisionDescriptor);

IPv4RoutingDecisionDescriptor::IPv4RoutingDecisionDescriptor() : cClassDescriptor("IPv4RoutingDecision", "cObject")
{
}

IPv4RoutingDecisionDescriptor::~IPv4RoutingDecisionDescriptor()
{
}

bool IPv4RoutingDecisionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IPv4RoutingDecision *>(obj)!=NULL;
}

const char *IPv4RoutingDecisionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IPv4RoutingDecisionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int IPv4RoutingDecisionDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *IPv4RoutingDecisionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "interfaceId",
        "nextHopAddr",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int IPv4RoutingDecisionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextHopAddr")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IPv4RoutingDecisionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "IPv4Address",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *IPv4RoutingDecisionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IPv4RoutingDecisionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IPv4RoutingDecision *pp = (IPv4RoutingDecision *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IPv4RoutingDecisionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4RoutingDecision *pp = (IPv4RoutingDecision *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getInterfaceId());
        case 1: {std::stringstream out; out << pp->getNextHopAddr(); return out.str();}
        default: return "";
    }
}

bool IPv4RoutingDecisionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IPv4RoutingDecision *pp = (IPv4RoutingDecision *)object; (void)pp;
    switch (field) {
        case 0: pp->setInterfaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *IPv4RoutingDecisionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *IPv4RoutingDecisionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IPv4RoutingDecision *pp = (IPv4RoutingDecision *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getNextHopAddr()); break;
        default: return NULL;
    }
}


