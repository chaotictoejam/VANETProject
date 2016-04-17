//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/ieee8021d/common/Ieee8021dBPDU.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee8021dBPDU_m.h"

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

Register_Class(BPDU);

BPDU::BPDU(const char *name, int kind) : ::cPacket(name,kind)
{
    this->setByteLength(35);

    this->protocolIdentifier_var = 0;
    this->protocolVersionIdentifier_var = 0;
    this->bpduType_var = 0;
    this->tcaFlag_var = 0;
    this->tcFlag_var = 0;
    this->rootPriority_var = 0;
    this->rootPathCost_var = 0;
    this->bridgePriority_var = 0;
    this->portNum_var = 0;
    this->portPriority_var = 0;
    this->messageAge_var = 0;
    this->maxAge_var = 0;
    this->helloTime_var = 0;
    this->forwardDelay_var = 0;
}

BPDU::BPDU(const BPDU& other) : ::cPacket(other)
{
    copy(other);
}

BPDU::~BPDU()
{
}

BPDU& BPDU::operator=(const BPDU& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void BPDU::copy(const BPDU& other)
{
    this->protocolIdentifier_var = other.protocolIdentifier_var;
    this->protocolVersionIdentifier_var = other.protocolVersionIdentifier_var;
    this->bpduType_var = other.bpduType_var;
    this->tcaFlag_var = other.tcaFlag_var;
    this->tcFlag_var = other.tcFlag_var;
    this->rootAddress_var = other.rootAddress_var;
    this->rootPriority_var = other.rootPriority_var;
    this->rootPathCost_var = other.rootPathCost_var;
    this->bridgeAddress_var = other.bridgeAddress_var;
    this->bridgePriority_var = other.bridgePriority_var;
    this->portNum_var = other.portNum_var;
    this->portPriority_var = other.portPriority_var;
    this->messageAge_var = other.messageAge_var;
    this->maxAge_var = other.maxAge_var;
    this->helloTime_var = other.helloTime_var;
    this->forwardDelay_var = other.forwardDelay_var;
}

void BPDU::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->protocolIdentifier_var);
    doPacking(b,this->protocolVersionIdentifier_var);
    doPacking(b,this->bpduType_var);
    doPacking(b,this->tcaFlag_var);
    doPacking(b,this->tcFlag_var);
    doPacking(b,this->rootAddress_var);
    doPacking(b,this->rootPriority_var);
    doPacking(b,this->rootPathCost_var);
    doPacking(b,this->bridgeAddress_var);
    doPacking(b,this->bridgePriority_var);
    doPacking(b,this->portNum_var);
    doPacking(b,this->portPriority_var);
    doPacking(b,this->messageAge_var);
    doPacking(b,this->maxAge_var);
    doPacking(b,this->helloTime_var);
    doPacking(b,this->forwardDelay_var);
}

void BPDU::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->protocolIdentifier_var);
    doUnpacking(b,this->protocolVersionIdentifier_var);
    doUnpacking(b,this->bpduType_var);
    doUnpacking(b,this->tcaFlag_var);
    doUnpacking(b,this->tcFlag_var);
    doUnpacking(b,this->rootAddress_var);
    doUnpacking(b,this->rootPriority_var);
    doUnpacking(b,this->rootPathCost_var);
    doUnpacking(b,this->bridgeAddress_var);
    doUnpacking(b,this->bridgePriority_var);
    doUnpacking(b,this->portNum_var);
    doUnpacking(b,this->portPriority_var);
    doUnpacking(b,this->messageAge_var);
    doUnpacking(b,this->maxAge_var);
    doUnpacking(b,this->helloTime_var);
    doUnpacking(b,this->forwardDelay_var);
}

unsigned int BPDU::getProtocolIdentifier() const
{
    return protocolIdentifier_var;
}

void BPDU::setProtocolIdentifier(unsigned int protocolIdentifier)
{
    this->protocolIdentifier_var = protocolIdentifier;
}

unsigned int BPDU::getProtocolVersionIdentifier() const
{
    return protocolVersionIdentifier_var;
}

void BPDU::setProtocolVersionIdentifier(unsigned int protocolVersionIdentifier)
{
    this->protocolVersionIdentifier_var = protocolVersionIdentifier;
}

unsigned int BPDU::getBpduType() const
{
    return bpduType_var;
}

void BPDU::setBpduType(unsigned int bpduType)
{
    this->bpduType_var = bpduType;
}

bool BPDU::getTcaFlag() const
{
    return tcaFlag_var;
}

void BPDU::setTcaFlag(bool tcaFlag)
{
    this->tcaFlag_var = tcaFlag;
}

bool BPDU::getTcFlag() const
{
    return tcFlag_var;
}

void BPDU::setTcFlag(bool tcFlag)
{
    this->tcFlag_var = tcFlag;
}

MACAddress& BPDU::getRootAddress()
{
    return rootAddress_var;
}

void BPDU::setRootAddress(const MACAddress& rootAddress)
{
    this->rootAddress_var = rootAddress;
}

unsigned int BPDU::getRootPriority() const
{
    return rootPriority_var;
}

void BPDU::setRootPriority(unsigned int rootPriority)
{
    this->rootPriority_var = rootPriority;
}

unsigned int BPDU::getRootPathCost() const
{
    return rootPathCost_var;
}

void BPDU::setRootPathCost(unsigned int rootPathCost)
{
    this->rootPathCost_var = rootPathCost;
}

MACAddress& BPDU::getBridgeAddress()
{
    return bridgeAddress_var;
}

void BPDU::setBridgeAddress(const MACAddress& bridgeAddress)
{
    this->bridgeAddress_var = bridgeAddress;
}

unsigned int BPDU::getBridgePriority() const
{
    return bridgePriority_var;
}

void BPDU::setBridgePriority(unsigned int bridgePriority)
{
    this->bridgePriority_var = bridgePriority;
}

unsigned int BPDU::getPortNum() const
{
    return portNum_var;
}

void BPDU::setPortNum(unsigned int portNum)
{
    this->portNum_var = portNum;
}

unsigned int BPDU::getPortPriority() const
{
    return portPriority_var;
}

void BPDU::setPortPriority(unsigned int portPriority)
{
    this->portPriority_var = portPriority;
}

simtime_t BPDU::getMessageAge() const
{
    return messageAge_var;
}

void BPDU::setMessageAge(simtime_t messageAge)
{
    this->messageAge_var = messageAge;
}

simtime_t BPDU::getMaxAge() const
{
    return maxAge_var;
}

void BPDU::setMaxAge(simtime_t maxAge)
{
    this->maxAge_var = maxAge;
}

simtime_t BPDU::getHelloTime() const
{
    return helloTime_var;
}

void BPDU::setHelloTime(simtime_t helloTime)
{
    this->helloTime_var = helloTime;
}

simtime_t BPDU::getForwardDelay() const
{
    return forwardDelay_var;
}

void BPDU::setForwardDelay(simtime_t forwardDelay)
{
    this->forwardDelay_var = forwardDelay;
}

class BPDUDescriptor : public cClassDescriptor
{
  public:
    BPDUDescriptor();
    virtual ~BPDUDescriptor();

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

Register_ClassDescriptor(BPDUDescriptor);

BPDUDescriptor::BPDUDescriptor() : cClassDescriptor("inet::BPDU", "cPacket")
{
}

BPDUDescriptor::~BPDUDescriptor()
{
}

bool BPDUDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BPDU *>(obj)!=NULL;
}

const char *BPDUDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BPDUDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 16+basedesc->getFieldCount(object) : 16;
}

unsigned int BPDUDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<16) ? fieldTypeFlags[field] : 0;
}

const char *BPDUDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "protocolIdentifier",
        "protocolVersionIdentifier",
        "bpduType",
        "tcaFlag",
        "tcFlag",
        "rootAddress",
        "rootPriority",
        "rootPathCost",
        "bridgeAddress",
        "bridgePriority",
        "portNum",
        "portPriority",
        "messageAge",
        "maxAge",
        "helloTime",
        "forwardDelay",
    };
    return (field>=0 && field<16) ? fieldNames[field] : NULL;
}

int BPDUDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "protocolIdentifier")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "protocolVersionIdentifier")==0) return base+1;
    if (fieldName[0]=='b' && strcmp(fieldName, "bpduType")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "tcaFlag")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "tcFlag")==0) return base+4;
    if (fieldName[0]=='r' && strcmp(fieldName, "rootAddress")==0) return base+5;
    if (fieldName[0]=='r' && strcmp(fieldName, "rootPriority")==0) return base+6;
    if (fieldName[0]=='r' && strcmp(fieldName, "rootPathCost")==0) return base+7;
    if (fieldName[0]=='b' && strcmp(fieldName, "bridgeAddress")==0) return base+8;
    if (fieldName[0]=='b' && strcmp(fieldName, "bridgePriority")==0) return base+9;
    if (fieldName[0]=='p' && strcmp(fieldName, "portNum")==0) return base+10;
    if (fieldName[0]=='p' && strcmp(fieldName, "portPriority")==0) return base+11;
    if (fieldName[0]=='m' && strcmp(fieldName, "messageAge")==0) return base+12;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxAge")==0) return base+13;
    if (fieldName[0]=='h' && strcmp(fieldName, "helloTime")==0) return base+14;
    if (fieldName[0]=='f' && strcmp(fieldName, "forwardDelay")==0) return base+15;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BPDUDescriptor::getFieldTypeString(void *object, int field) const
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
        "bool",
        "bool",
        "MACAddress",
        "unsigned int",
        "unsigned int",
        "MACAddress",
        "unsigned int",
        "unsigned int",
        "unsigned int",
        "simtime_t",
        "simtime_t",
        "simtime_t",
        "simtime_t",
    };
    return (field>=0 && field<16) ? fieldTypeStrings[field] : NULL;
}

const char *BPDUDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BPDUDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BPDU *pp = (BPDU *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BPDUDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BPDU *pp = (BPDU *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getProtocolIdentifier());
        case 1: return ulong2string(pp->getProtocolVersionIdentifier());
        case 2: return ulong2string(pp->getBpduType());
        case 3: return bool2string(pp->getTcaFlag());
        case 4: return bool2string(pp->getTcFlag());
        case 5: {std::stringstream out; out << pp->getRootAddress(); return out.str();}
        case 6: return ulong2string(pp->getRootPriority());
        case 7: return ulong2string(pp->getRootPathCost());
        case 8: {std::stringstream out; out << pp->getBridgeAddress(); return out.str();}
        case 9: return ulong2string(pp->getBridgePriority());
        case 10: return ulong2string(pp->getPortNum());
        case 11: return ulong2string(pp->getPortPriority());
        case 12: return double2string(pp->getMessageAge());
        case 13: return double2string(pp->getMaxAge());
        case 14: return double2string(pp->getHelloTime());
        case 15: return double2string(pp->getForwardDelay());
        default: return "";
    }
}

bool BPDUDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BPDU *pp = (BPDU *)object; (void)pp;
    switch (field) {
        case 0: pp->setProtocolIdentifier(string2ulong(value)); return true;
        case 1: pp->setProtocolVersionIdentifier(string2ulong(value)); return true;
        case 2: pp->setBpduType(string2ulong(value)); return true;
        case 3: pp->setTcaFlag(string2bool(value)); return true;
        case 4: pp->setTcFlag(string2bool(value)); return true;
        case 6: pp->setRootPriority(string2ulong(value)); return true;
        case 7: pp->setRootPathCost(string2ulong(value)); return true;
        case 9: pp->setBridgePriority(string2ulong(value)); return true;
        case 10: pp->setPortNum(string2ulong(value)); return true;
        case 11: pp->setPortPriority(string2ulong(value)); return true;
        case 12: pp->setMessageAge(string2double(value)); return true;
        case 13: pp->setMaxAge(string2double(value)); return true;
        case 14: pp->setHelloTime(string2double(value)); return true;
        case 15: pp->setForwardDelay(string2double(value)); return true;
        default: return false;
    }
}

const char *BPDUDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return opp_typename(typeid(MACAddress));
        case 8: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *BPDUDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BPDU *pp = (BPDU *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getRootAddress()); break;
        case 8: return (void *)(&pp->getBridgeAddress()); break;
        default: return NULL;
    }
}

} // namespace inet

