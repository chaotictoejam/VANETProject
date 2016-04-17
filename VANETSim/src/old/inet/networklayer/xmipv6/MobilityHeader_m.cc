//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/xmipv6/MobilityHeader.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "MobilityHeader_m.h"

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
    cEnum *e = cEnum::find("MobilityHeaderType");
    if (!e) enums.getInstance()->add(e = new cEnum("MobilityHeaderType"));
    e->insert(BINDING_REFRESH_REQUEST, "BINDING_REFRESH_REQUEST");
    e->insert(HOME_TEST_INIT, "HOME_TEST_INIT");
    e->insert(CARE_OF_TEST_INIT, "CARE_OF_TEST_INIT");
    e->insert(HOME_TEST, "HOME_TEST");
    e->insert(CARE_OF_TEST, "CARE_OF_TEST");
    e->insert(BINDING_UPDATE, "BINDING_UPDATE");
    e->insert(BINDING_ACKNOWLEDGEMENT, "BINDING_ACKNOWLEDGEMENT");
    e->insert(BINDING_ERROR, "BINDING_ERROR");
);

Register_Class(MobilityHeader);

MobilityHeader::MobilityHeader(const char *name, int kind) : ::cPacket(name,kind)
{
    this->mobilityHeaderType_var = 0;
}

MobilityHeader::MobilityHeader(const MobilityHeader& other) : ::cPacket(other)
{
    copy(other);
}

MobilityHeader::~MobilityHeader()
{
}

MobilityHeader& MobilityHeader::operator=(const MobilityHeader& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void MobilityHeader::copy(const MobilityHeader& other)
{
    this->mobilityHeaderType_var = other.mobilityHeaderType_var;
}

void MobilityHeader::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->mobilityHeaderType_var);
}

void MobilityHeader::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->mobilityHeaderType_var);
}

int MobilityHeader::getMobilityHeaderType() const
{
    return mobilityHeaderType_var;
}

void MobilityHeader::setMobilityHeaderType(int mobilityHeaderType)
{
    this->mobilityHeaderType_var = mobilityHeaderType;
}

class MobilityHeaderDescriptor : public cClassDescriptor
{
  public:
    MobilityHeaderDescriptor();
    virtual ~MobilityHeaderDescriptor();

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

Register_ClassDescriptor(MobilityHeaderDescriptor);

MobilityHeaderDescriptor::MobilityHeaderDescriptor() : cClassDescriptor("MobilityHeader", "cPacket")
{
}

MobilityHeaderDescriptor::~MobilityHeaderDescriptor()
{
}

bool MobilityHeaderDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MobilityHeader *>(obj)!=NULL;
}

const char *MobilityHeaderDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MobilityHeaderDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int MobilityHeaderDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *MobilityHeaderDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "mobilityHeaderType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int MobilityHeaderDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "mobilityHeaderType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MobilityHeaderDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *MobilityHeaderDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "MobilityHeaderType";
            return NULL;
        default: return NULL;
    }
}

int MobilityHeaderDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MobilityHeader *pp = (MobilityHeader *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MobilityHeaderDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MobilityHeader *pp = (MobilityHeader *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getMobilityHeaderType());
        default: return "";
    }
}

bool MobilityHeaderDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MobilityHeader *pp = (MobilityHeader *)object; (void)pp;
    switch (field) {
        case 0: pp->setMobilityHeaderType(string2long(value)); return true;
        default: return false;
    }
}

const char *MobilityHeaderDescriptor::getFieldStructName(void *object, int field) const
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

void *MobilityHeaderDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MobilityHeader *pp = (MobilityHeader *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(BindingUpdate);

BindingUpdate::BindingUpdate(const char *name, int kind) : ::MobilityHeader(name,kind)
{
    this->lifetime_var = 0;
    this->sequence_var = 0;
    this->ackFlag_var = 0;
    this->homeRegistrationFlag_var = 0;
    this->linkLocalAddressCompatibilityFlag_var = 0;
    this->keyManagementFlag_var = false;
    this->bindingAuthorizationData_var = 0;
}

BindingUpdate::BindingUpdate(const BindingUpdate& other) : ::MobilityHeader(other)
{
    copy(other);
}

BindingUpdate::~BindingUpdate()
{
}

BindingUpdate& BindingUpdate::operator=(const BindingUpdate& other)
{
    if (this==&other) return *this;
    ::MobilityHeader::operator=(other);
    copy(other);
    return *this;
}

void BindingUpdate::copy(const BindingUpdate& other)
{
    this->lifetime_var = other.lifetime_var;
    this->sequence_var = other.sequence_var;
    this->ackFlag_var = other.ackFlag_var;
    this->homeRegistrationFlag_var = other.homeRegistrationFlag_var;
    this->linkLocalAddressCompatibilityFlag_var = other.linkLocalAddressCompatibilityFlag_var;
    this->keyManagementFlag_var = other.keyManagementFlag_var;
    this->homeAddressMN_var = other.homeAddressMN_var;
    this->bindingAuthorizationData_var = other.bindingAuthorizationData_var;
}

void BindingUpdate::parsimPack(cCommBuffer *b)
{
    ::MobilityHeader::parsimPack(b);
    doPacking(b,this->lifetime_var);
    doPacking(b,this->sequence_var);
    doPacking(b,this->ackFlag_var);
    doPacking(b,this->homeRegistrationFlag_var);
    doPacking(b,this->linkLocalAddressCompatibilityFlag_var);
    doPacking(b,this->keyManagementFlag_var);
    doPacking(b,this->homeAddressMN_var);
    doPacking(b,this->bindingAuthorizationData_var);
}

void BindingUpdate::parsimUnpack(cCommBuffer *b)
{
    ::MobilityHeader::parsimUnpack(b);
    doUnpacking(b,this->lifetime_var);
    doUnpacking(b,this->sequence_var);
    doUnpacking(b,this->ackFlag_var);
    doUnpacking(b,this->homeRegistrationFlag_var);
    doUnpacking(b,this->linkLocalAddressCompatibilityFlag_var);
    doUnpacking(b,this->keyManagementFlag_var);
    doUnpacking(b,this->homeAddressMN_var);
    doUnpacking(b,this->bindingAuthorizationData_var);
}

unsigned int BindingUpdate::getLifetime() const
{
    return lifetime_var;
}

void BindingUpdate::setLifetime(unsigned int lifetime)
{
    this->lifetime_var = lifetime;
}

unsigned int BindingUpdate::getSequence() const
{
    return sequence_var;
}

void BindingUpdate::setSequence(unsigned int sequence)
{
    this->sequence_var = sequence;
}

bool BindingUpdate::getAckFlag() const
{
    return ackFlag_var;
}

void BindingUpdate::setAckFlag(bool ackFlag)
{
    this->ackFlag_var = ackFlag;
}

bool BindingUpdate::getHomeRegistrationFlag() const
{
    return homeRegistrationFlag_var;
}

void BindingUpdate::setHomeRegistrationFlag(bool homeRegistrationFlag)
{
    this->homeRegistrationFlag_var = homeRegistrationFlag;
}

bool BindingUpdate::getLinkLocalAddressCompatibilityFlag() const
{
    return linkLocalAddressCompatibilityFlag_var;
}

void BindingUpdate::setLinkLocalAddressCompatibilityFlag(bool linkLocalAddressCompatibilityFlag)
{
    this->linkLocalAddressCompatibilityFlag_var = linkLocalAddressCompatibilityFlag;
}

bool BindingUpdate::getKeyManagementFlag() const
{
    return keyManagementFlag_var;
}

void BindingUpdate::setKeyManagementFlag(bool keyManagementFlag)
{
    this->keyManagementFlag_var = keyManagementFlag;
}

IPv6Address& BindingUpdate::getHomeAddressMN()
{
    return homeAddressMN_var;
}

void BindingUpdate::setHomeAddressMN(const IPv6Address& homeAddressMN)
{
    this->homeAddressMN_var = homeAddressMN;
}

int BindingUpdate::getBindingAuthorizationData() const
{
    return bindingAuthorizationData_var;
}

void BindingUpdate::setBindingAuthorizationData(int bindingAuthorizationData)
{
    this->bindingAuthorizationData_var = bindingAuthorizationData;
}

class BindingUpdateDescriptor : public cClassDescriptor
{
  public:
    BindingUpdateDescriptor();
    virtual ~BindingUpdateDescriptor();

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

Register_ClassDescriptor(BindingUpdateDescriptor);

BindingUpdateDescriptor::BindingUpdateDescriptor() : cClassDescriptor("BindingUpdate", "MobilityHeader")
{
}

BindingUpdateDescriptor::~BindingUpdateDescriptor()
{
}

bool BindingUpdateDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BindingUpdate *>(obj)!=NULL;
}

const char *BindingUpdateDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BindingUpdateDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int BindingUpdateDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<8) ? fieldTypeFlags[field] : 0;
}

const char *BindingUpdateDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "lifetime",
        "sequence",
        "ackFlag",
        "homeRegistrationFlag",
        "linkLocalAddressCompatibilityFlag",
        "keyManagementFlag",
        "homeAddressMN",
        "bindingAuthorizationData",
    };
    return (field>=0 && field<8) ? fieldNames[field] : NULL;
}

int BindingUpdateDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "lifetime")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequence")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "ackFlag")==0) return base+2;
    if (fieldName[0]=='h' && strcmp(fieldName, "homeRegistrationFlag")==0) return base+3;
    if (fieldName[0]=='l' && strcmp(fieldName, "linkLocalAddressCompatibilityFlag")==0) return base+4;
    if (fieldName[0]=='k' && strcmp(fieldName, "keyManagementFlag")==0) return base+5;
    if (fieldName[0]=='h' && strcmp(fieldName, "homeAddressMN")==0) return base+6;
    if (fieldName[0]=='b' && strcmp(fieldName, "bindingAuthorizationData")==0) return base+7;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BindingUpdateDescriptor::getFieldTypeString(void *object, int field) const
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
        "bool",
        "bool",
        "bool",
        "bool",
        "IPv6Address",
        "int",
    };
    return (field>=0 && field<8) ? fieldTypeStrings[field] : NULL;
}

const char *BindingUpdateDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BindingUpdateDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BindingUpdate *pp = (BindingUpdate *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BindingUpdateDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BindingUpdate *pp = (BindingUpdate *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getLifetime());
        case 1: return ulong2string(pp->getSequence());
        case 2: return bool2string(pp->getAckFlag());
        case 3: return bool2string(pp->getHomeRegistrationFlag());
        case 4: return bool2string(pp->getLinkLocalAddressCompatibilityFlag());
        case 5: return bool2string(pp->getKeyManagementFlag());
        case 6: {std::stringstream out; out << pp->getHomeAddressMN(); return out.str();}
        case 7: return long2string(pp->getBindingAuthorizationData());
        default: return "";
    }
}

bool BindingUpdateDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BindingUpdate *pp = (BindingUpdate *)object; (void)pp;
    switch (field) {
        case 0: pp->setLifetime(string2ulong(value)); return true;
        case 1: pp->setSequence(string2ulong(value)); return true;
        case 2: pp->setAckFlag(string2bool(value)); return true;
        case 3: pp->setHomeRegistrationFlag(string2bool(value)); return true;
        case 4: pp->setLinkLocalAddressCompatibilityFlag(string2bool(value)); return true;
        case 5: pp->setKeyManagementFlag(string2bool(value)); return true;
        case 7: pp->setBindingAuthorizationData(string2long(value)); return true;
        default: return false;
    }
}

const char *BindingUpdateDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 6: return opp_typename(typeid(IPv6Address));
        default: return NULL;
    };
}

void *BindingUpdateDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BindingUpdate *pp = (BindingUpdate *)object; (void)pp;
    switch (field) {
        case 6: return (void *)(&pp->getHomeAddressMN()); break;
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("BAStatus");
    if (!e) enums.getInstance()->add(e = new cEnum("BAStatus"));
    e->insert(BINDING_UPDATE_ACCEPTED, "BINDING_UPDATE_ACCEPTED");
    e->insert(BU_ACCEPT_BUT_DISCOVER_PREFIX, "BU_ACCEPT_BUT_DISCOVER_PREFIX");
    e->insert(REASON_UNSPECIFIED, "REASON_UNSPECIFIED");
    e->insert(ADMINISTRATIVELY_PROHIBITED, "ADMINISTRATIVELY_PROHIBITED");
    e->insert(INSUFFICIENT_RESOURCES, "INSUFFICIENT_RESOURCES");
    e->insert(HOME_REGISTRATION_NOT_SUPPORTED, "HOME_REGISTRATION_NOT_SUPPORTED");
    e->insert(NOT_HOME_SUBNET, "NOT_HOME_SUBNET");
    e->insert(NOT_HA_FOR_THIS_MN, "NOT_HA_FOR_THIS_MN");
    e->insert(DAD_FAILED, "DAD_FAILED");
    e->insert(SEQUENCE_NUMBER_OUT_OF_WINDOW, "SEQUENCE_NUMBER_OUT_OF_WINDOW");
    e->insert(EXPIRED_HOME_NONCE_INDEX, "EXPIRED_HOME_NONCE_INDEX");
    e->insert(EXPIRED_CARE_OF_NONCE_INDEX, "EXPIRED_CARE_OF_NONCE_INDEX");
    e->insert(EXPIRED_NONCES, "EXPIRED_NONCES");
    e->insert(REGISTRATION_TYPE_CHANGE_DISALLOWED, "REGISTRATION_TYPE_CHANGE_DISALLOWED");
);

Register_Class(BindingAcknowledgement);

BindingAcknowledgement::BindingAcknowledgement(const char *name, int kind) : ::MobilityHeader(name,kind)
{
    this->status_var = 0;
    this->sequenceNumber_var = 0;
    this->lifetime_var = 0;
    this->keyManagementFlag_var = false;
    this->bindingAuthorizationData_var = 0;
}

BindingAcknowledgement::BindingAcknowledgement(const BindingAcknowledgement& other) : ::MobilityHeader(other)
{
    copy(other);
}

BindingAcknowledgement::~BindingAcknowledgement()
{
}

BindingAcknowledgement& BindingAcknowledgement::operator=(const BindingAcknowledgement& other)
{
    if (this==&other) return *this;
    ::MobilityHeader::operator=(other);
    copy(other);
    return *this;
}

void BindingAcknowledgement::copy(const BindingAcknowledgement& other)
{
    this->status_var = other.status_var;
    this->sequenceNumber_var = other.sequenceNumber_var;
    this->lifetime_var = other.lifetime_var;
    this->keyManagementFlag_var = other.keyManagementFlag_var;
    this->bindingAuthorizationData_var = other.bindingAuthorizationData_var;
}

void BindingAcknowledgement::parsimPack(cCommBuffer *b)
{
    ::MobilityHeader::parsimPack(b);
    doPacking(b,this->status_var);
    doPacking(b,this->sequenceNumber_var);
    doPacking(b,this->lifetime_var);
    doPacking(b,this->keyManagementFlag_var);
    doPacking(b,this->bindingAuthorizationData_var);
}

void BindingAcknowledgement::parsimUnpack(cCommBuffer *b)
{
    ::MobilityHeader::parsimUnpack(b);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->sequenceNumber_var);
    doUnpacking(b,this->lifetime_var);
    doUnpacking(b,this->keyManagementFlag_var);
    doUnpacking(b,this->bindingAuthorizationData_var);
}

int BindingAcknowledgement::getStatus() const
{
    return status_var;
}

void BindingAcknowledgement::setStatus(int status)
{
    this->status_var = status;
}

unsigned int BindingAcknowledgement::getSequenceNumber() const
{
    return sequenceNumber_var;
}

void BindingAcknowledgement::setSequenceNumber(unsigned int sequenceNumber)
{
    this->sequenceNumber_var = sequenceNumber;
}

unsigned int BindingAcknowledgement::getLifetime() const
{
    return lifetime_var;
}

void BindingAcknowledgement::setLifetime(unsigned int lifetime)
{
    this->lifetime_var = lifetime;
}

bool BindingAcknowledgement::getKeyManagementFlag() const
{
    return keyManagementFlag_var;
}

void BindingAcknowledgement::setKeyManagementFlag(bool keyManagementFlag)
{
    this->keyManagementFlag_var = keyManagementFlag;
}

int BindingAcknowledgement::getBindingAuthorizationData() const
{
    return bindingAuthorizationData_var;
}

void BindingAcknowledgement::setBindingAuthorizationData(int bindingAuthorizationData)
{
    this->bindingAuthorizationData_var = bindingAuthorizationData;
}

class BindingAcknowledgementDescriptor : public cClassDescriptor
{
  public:
    BindingAcknowledgementDescriptor();
    virtual ~BindingAcknowledgementDescriptor();

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

Register_ClassDescriptor(BindingAcknowledgementDescriptor);

BindingAcknowledgementDescriptor::BindingAcknowledgementDescriptor() : cClassDescriptor("BindingAcknowledgement", "MobilityHeader")
{
}

BindingAcknowledgementDescriptor::~BindingAcknowledgementDescriptor()
{
}

bool BindingAcknowledgementDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BindingAcknowledgement *>(obj)!=NULL;
}

const char *BindingAcknowledgementDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BindingAcknowledgementDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int BindingAcknowledgementDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *BindingAcknowledgementDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "status",
        "sequenceNumber",
        "lifetime",
        "keyManagementFlag",
        "bindingAuthorizationData",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int BindingAcknowledgementDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "status")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequenceNumber")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "lifetime")==0) return base+2;
    if (fieldName[0]=='k' && strcmp(fieldName, "keyManagementFlag")==0) return base+3;
    if (fieldName[0]=='b' && strcmp(fieldName, "bindingAuthorizationData")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BindingAcknowledgementDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "unsigned int",
        "unsigned int",
        "bool",
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *BindingAcknowledgementDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "BAStatus";
            return NULL;
        default: return NULL;
    }
}

int BindingAcknowledgementDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BindingAcknowledgement *pp = (BindingAcknowledgement *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BindingAcknowledgementDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BindingAcknowledgement *pp = (BindingAcknowledgement *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getStatus());
        case 1: return ulong2string(pp->getSequenceNumber());
        case 2: return ulong2string(pp->getLifetime());
        case 3: return bool2string(pp->getKeyManagementFlag());
        case 4: return long2string(pp->getBindingAuthorizationData());
        default: return "";
    }
}

bool BindingAcknowledgementDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BindingAcknowledgement *pp = (BindingAcknowledgement *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus(string2long(value)); return true;
        case 1: pp->setSequenceNumber(string2ulong(value)); return true;
        case 2: pp->setLifetime(string2ulong(value)); return true;
        case 3: pp->setKeyManagementFlag(string2bool(value)); return true;
        case 4: pp->setBindingAuthorizationData(string2long(value)); return true;
        default: return false;
    }
}

const char *BindingAcknowledgementDescriptor::getFieldStructName(void *object, int field) const
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

void *BindingAcknowledgementDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BindingAcknowledgement *pp = (BindingAcknowledgement *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("BEStatus");
    if (!e) enums.getInstance()->add(e = new cEnum("BEStatus"));
    e->insert(UNKNOWN_BINDING_FOR_HOME_ADDRESS_DEST_OPTION, "UNKNOWN_BINDING_FOR_HOME_ADDRESS_DEST_OPTION");
    e->insert(UNKNOWN_MH_TYPE, "UNKNOWN_MH_TYPE");
);

Register_Class(BindingError);

BindingError::BindingError(const char *name, int kind) : ::MobilityHeader(name,kind)
{
    this->status_var = 0;
}

BindingError::BindingError(const BindingError& other) : ::MobilityHeader(other)
{
    copy(other);
}

BindingError::~BindingError()
{
}

BindingError& BindingError::operator=(const BindingError& other)
{
    if (this==&other) return *this;
    ::MobilityHeader::operator=(other);
    copy(other);
    return *this;
}

void BindingError::copy(const BindingError& other)
{
    this->status_var = other.status_var;
    this->homeAddress_var = other.homeAddress_var;
}

void BindingError::parsimPack(cCommBuffer *b)
{
    ::MobilityHeader::parsimPack(b);
    doPacking(b,this->status_var);
    doPacking(b,this->homeAddress_var);
}

void BindingError::parsimUnpack(cCommBuffer *b)
{
    ::MobilityHeader::parsimUnpack(b);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->homeAddress_var);
}

int BindingError::getStatus() const
{
    return status_var;
}

void BindingError::setStatus(int status)
{
    this->status_var = status;
}

IPv6Address& BindingError::getHomeAddress()
{
    return homeAddress_var;
}

void BindingError::setHomeAddress(const IPv6Address& homeAddress)
{
    this->homeAddress_var = homeAddress;
}

class BindingErrorDescriptor : public cClassDescriptor
{
  public:
    BindingErrorDescriptor();
    virtual ~BindingErrorDescriptor();

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

Register_ClassDescriptor(BindingErrorDescriptor);

BindingErrorDescriptor::BindingErrorDescriptor() : cClassDescriptor("BindingError", "MobilityHeader")
{
}

BindingErrorDescriptor::~BindingErrorDescriptor()
{
}

bool BindingErrorDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BindingError *>(obj)!=NULL;
}

const char *BindingErrorDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BindingErrorDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int BindingErrorDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *BindingErrorDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "status",
        "homeAddress",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int BindingErrorDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "status")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "homeAddress")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BindingErrorDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "IPv6Address",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *BindingErrorDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "BEStatus";
            return NULL;
        default: return NULL;
    }
}

int BindingErrorDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BindingError *pp = (BindingError *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BindingErrorDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BindingError *pp = (BindingError *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getStatus());
        case 1: {std::stringstream out; out << pp->getHomeAddress(); return out.str();}
        default: return "";
    }
}

bool BindingErrorDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BindingError *pp = (BindingError *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus(string2long(value)); return true;
        default: return false;
    }
}

const char *BindingErrorDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv6Address));
        default: return NULL;
    };
}

void *BindingErrorDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BindingError *pp = (BindingError *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getHomeAddress()); break;
        default: return NULL;
    }
}

Register_Class(HomeTestInit);

HomeTestInit::HomeTestInit(const char *name, int kind) : ::MobilityHeader(name,kind)
{
    this->homeInitCookie_var = 0;
}

HomeTestInit::HomeTestInit(const HomeTestInit& other) : ::MobilityHeader(other)
{
    copy(other);
}

HomeTestInit::~HomeTestInit()
{
}

HomeTestInit& HomeTestInit::operator=(const HomeTestInit& other)
{
    if (this==&other) return *this;
    ::MobilityHeader::operator=(other);
    copy(other);
    return *this;
}

void HomeTestInit::copy(const HomeTestInit& other)
{
    this->homeInitCookie_var = other.homeInitCookie_var;
}

void HomeTestInit::parsimPack(cCommBuffer *b)
{
    ::MobilityHeader::parsimPack(b);
    doPacking(b,this->homeInitCookie_var);
}

void HomeTestInit::parsimUnpack(cCommBuffer *b)
{
    ::MobilityHeader::parsimUnpack(b);
    doUnpacking(b,this->homeInitCookie_var);
}

unsigned int HomeTestInit::getHomeInitCookie() const
{
    return homeInitCookie_var;
}

void HomeTestInit::setHomeInitCookie(unsigned int homeInitCookie)
{
    this->homeInitCookie_var = homeInitCookie;
}

class HomeTestInitDescriptor : public cClassDescriptor
{
  public:
    HomeTestInitDescriptor();
    virtual ~HomeTestInitDescriptor();

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

Register_ClassDescriptor(HomeTestInitDescriptor);

HomeTestInitDescriptor::HomeTestInitDescriptor() : cClassDescriptor("HomeTestInit", "MobilityHeader")
{
}

HomeTestInitDescriptor::~HomeTestInitDescriptor()
{
}

bool HomeTestInitDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HomeTestInit *>(obj)!=NULL;
}

const char *HomeTestInitDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HomeTestInitDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HomeTestInitDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *HomeTestInitDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "homeInitCookie",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HomeTestInitDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "homeInitCookie")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HomeTestInitDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *HomeTestInitDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HomeTestInitDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HomeTestInit *pp = (HomeTestInit *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HomeTestInitDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HomeTestInit *pp = (HomeTestInit *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getHomeInitCookie());
        default: return "";
    }
}

bool HomeTestInitDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HomeTestInit *pp = (HomeTestInit *)object; (void)pp;
    switch (field) {
        case 0: pp->setHomeInitCookie(string2ulong(value)); return true;
        default: return false;
    }
}

const char *HomeTestInitDescriptor::getFieldStructName(void *object, int field) const
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

void *HomeTestInitDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HomeTestInit *pp = (HomeTestInit *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HomeTest);

HomeTest::HomeTest(const char *name, int kind) : ::MobilityHeader(name,kind)
{
    this->homeInitCookie_var = 0;
    this->homeKeyGenToken_var = 0;
}

HomeTest::HomeTest(const HomeTest& other) : ::MobilityHeader(other)
{
    copy(other);
}

HomeTest::~HomeTest()
{
}

HomeTest& HomeTest::operator=(const HomeTest& other)
{
    if (this==&other) return *this;
    ::MobilityHeader::operator=(other);
    copy(other);
    return *this;
}

void HomeTest::copy(const HomeTest& other)
{
    this->homeInitCookie_var = other.homeInitCookie_var;
    this->homeKeyGenToken_var = other.homeKeyGenToken_var;
}

void HomeTest::parsimPack(cCommBuffer *b)
{
    ::MobilityHeader::parsimPack(b);
    doPacking(b,this->homeInitCookie_var);
    doPacking(b,this->homeKeyGenToken_var);
}

void HomeTest::parsimUnpack(cCommBuffer *b)
{
    ::MobilityHeader::parsimUnpack(b);
    doUnpacking(b,this->homeInitCookie_var);
    doUnpacking(b,this->homeKeyGenToken_var);
}

unsigned int HomeTest::getHomeInitCookie() const
{
    return homeInitCookie_var;
}

void HomeTest::setHomeInitCookie(unsigned int homeInitCookie)
{
    this->homeInitCookie_var = homeInitCookie;
}

unsigned int HomeTest::getHomeKeyGenToken() const
{
    return homeKeyGenToken_var;
}

void HomeTest::setHomeKeyGenToken(unsigned int homeKeyGenToken)
{
    this->homeKeyGenToken_var = homeKeyGenToken;
}

class HomeTestDescriptor : public cClassDescriptor
{
  public:
    HomeTestDescriptor();
    virtual ~HomeTestDescriptor();

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

Register_ClassDescriptor(HomeTestDescriptor);

HomeTestDescriptor::HomeTestDescriptor() : cClassDescriptor("HomeTest", "MobilityHeader")
{
}

HomeTestDescriptor::~HomeTestDescriptor()
{
}

bool HomeTestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HomeTest *>(obj)!=NULL;
}

const char *HomeTestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HomeTestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HomeTestDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *HomeTestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "homeInitCookie",
        "homeKeyGenToken",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int HomeTestDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "homeInitCookie")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "homeKeyGenToken")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HomeTestDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *HomeTestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HomeTestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HomeTest *pp = (HomeTest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HomeTestDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HomeTest *pp = (HomeTest *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getHomeInitCookie());
        case 1: return ulong2string(pp->getHomeKeyGenToken());
        default: return "";
    }
}

bool HomeTestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HomeTest *pp = (HomeTest *)object; (void)pp;
    switch (field) {
        case 0: pp->setHomeInitCookie(string2ulong(value)); return true;
        case 1: pp->setHomeKeyGenToken(string2ulong(value)); return true;
        default: return false;
    }
}

const char *HomeTestDescriptor::getFieldStructName(void *object, int field) const
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

void *HomeTestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HomeTest *pp = (HomeTest *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(CareOfTestInit);

CareOfTestInit::CareOfTestInit(const char *name, int kind) : ::MobilityHeader(name,kind)
{
    this->careOfInitCookie_var = 0;
}

CareOfTestInit::CareOfTestInit(const CareOfTestInit& other) : ::MobilityHeader(other)
{
    copy(other);
}

CareOfTestInit::~CareOfTestInit()
{
}

CareOfTestInit& CareOfTestInit::operator=(const CareOfTestInit& other)
{
    if (this==&other) return *this;
    ::MobilityHeader::operator=(other);
    copy(other);
    return *this;
}

void CareOfTestInit::copy(const CareOfTestInit& other)
{
    this->careOfInitCookie_var = other.careOfInitCookie_var;
}

void CareOfTestInit::parsimPack(cCommBuffer *b)
{
    ::MobilityHeader::parsimPack(b);
    doPacking(b,this->careOfInitCookie_var);
}

void CareOfTestInit::parsimUnpack(cCommBuffer *b)
{
    ::MobilityHeader::parsimUnpack(b);
    doUnpacking(b,this->careOfInitCookie_var);
}

unsigned int CareOfTestInit::getCareOfInitCookie() const
{
    return careOfInitCookie_var;
}

void CareOfTestInit::setCareOfInitCookie(unsigned int careOfInitCookie)
{
    this->careOfInitCookie_var = careOfInitCookie;
}

class CareOfTestInitDescriptor : public cClassDescriptor
{
  public:
    CareOfTestInitDescriptor();
    virtual ~CareOfTestInitDescriptor();

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

Register_ClassDescriptor(CareOfTestInitDescriptor);

CareOfTestInitDescriptor::CareOfTestInitDescriptor() : cClassDescriptor("CareOfTestInit", "MobilityHeader")
{
}

CareOfTestInitDescriptor::~CareOfTestInitDescriptor()
{
}

bool CareOfTestInitDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CareOfTestInit *>(obj)!=NULL;
}

const char *CareOfTestInitDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CareOfTestInitDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int CareOfTestInitDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *CareOfTestInitDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "careOfInitCookie",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int CareOfTestInitDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "careOfInitCookie")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *CareOfTestInitDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *CareOfTestInitDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CareOfTestInitDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CareOfTestInit *pp = (CareOfTestInit *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string CareOfTestInitDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    CareOfTestInit *pp = (CareOfTestInit *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getCareOfInitCookie());
        default: return "";
    }
}

bool CareOfTestInitDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CareOfTestInit *pp = (CareOfTestInit *)object; (void)pp;
    switch (field) {
        case 0: pp->setCareOfInitCookie(string2ulong(value)); return true;
        default: return false;
    }
}

const char *CareOfTestInitDescriptor::getFieldStructName(void *object, int field) const
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

void *CareOfTestInitDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CareOfTestInit *pp = (CareOfTestInit *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(CareOfTest);

CareOfTest::CareOfTest(const char *name, int kind) : ::MobilityHeader(name,kind)
{
    this->careOfInitCookie_var = 0;
    this->careOfKeyGenToken_var = 0;
}

CareOfTest::CareOfTest(const CareOfTest& other) : ::MobilityHeader(other)
{
    copy(other);
}

CareOfTest::~CareOfTest()
{
}

CareOfTest& CareOfTest::operator=(const CareOfTest& other)
{
    if (this==&other) return *this;
    ::MobilityHeader::operator=(other);
    copy(other);
    return *this;
}

void CareOfTest::copy(const CareOfTest& other)
{
    this->careOfInitCookie_var = other.careOfInitCookie_var;
    this->careOfKeyGenToken_var = other.careOfKeyGenToken_var;
}

void CareOfTest::parsimPack(cCommBuffer *b)
{
    ::MobilityHeader::parsimPack(b);
    doPacking(b,this->careOfInitCookie_var);
    doPacking(b,this->careOfKeyGenToken_var);
}

void CareOfTest::parsimUnpack(cCommBuffer *b)
{
    ::MobilityHeader::parsimUnpack(b);
    doUnpacking(b,this->careOfInitCookie_var);
    doUnpacking(b,this->careOfKeyGenToken_var);
}

unsigned int CareOfTest::getCareOfInitCookie() const
{
    return careOfInitCookie_var;
}

void CareOfTest::setCareOfInitCookie(unsigned int careOfInitCookie)
{
    this->careOfInitCookie_var = careOfInitCookie;
}

unsigned int CareOfTest::getCareOfKeyGenToken() const
{
    return careOfKeyGenToken_var;
}

void CareOfTest::setCareOfKeyGenToken(unsigned int careOfKeyGenToken)
{
    this->careOfKeyGenToken_var = careOfKeyGenToken;
}

class CareOfTestDescriptor : public cClassDescriptor
{
  public:
    CareOfTestDescriptor();
    virtual ~CareOfTestDescriptor();

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

Register_ClassDescriptor(CareOfTestDescriptor);

CareOfTestDescriptor::CareOfTestDescriptor() : cClassDescriptor("CareOfTest", "MobilityHeader")
{
}

CareOfTestDescriptor::~CareOfTestDescriptor()
{
}

bool CareOfTestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CareOfTest *>(obj)!=NULL;
}

const char *CareOfTestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CareOfTestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int CareOfTestDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *CareOfTestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "careOfInitCookie",
        "careOfKeyGenToken",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int CareOfTestDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "careOfInitCookie")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "careOfKeyGenToken")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *CareOfTestDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *CareOfTestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CareOfTestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CareOfTest *pp = (CareOfTest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string CareOfTestDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    CareOfTest *pp = (CareOfTest *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getCareOfInitCookie());
        case 1: return ulong2string(pp->getCareOfKeyGenToken());
        default: return "";
    }
}

bool CareOfTestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CareOfTest *pp = (CareOfTest *)object; (void)pp;
    switch (field) {
        case 0: pp->setCareOfInitCookie(string2ulong(value)); return true;
        case 1: pp->setCareOfKeyGenToken(string2ulong(value)); return true;
        default: return false;
    }
}

const char *CareOfTestDescriptor::getFieldStructName(void *object, int field) const
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

void *CareOfTestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CareOfTest *pp = (CareOfTest *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(BindingRefreshRequest);

BindingRefreshRequest::BindingRefreshRequest(const char *name, int kind) : ::MobilityHeader(name,kind)
{
}

BindingRefreshRequest::BindingRefreshRequest(const BindingRefreshRequest& other) : ::MobilityHeader(other)
{
    copy(other);
}

BindingRefreshRequest::~BindingRefreshRequest()
{
}

BindingRefreshRequest& BindingRefreshRequest::operator=(const BindingRefreshRequest& other)
{
    if (this==&other) return *this;
    ::MobilityHeader::operator=(other);
    copy(other);
    return *this;
}

void BindingRefreshRequest::copy(const BindingRefreshRequest& other)
{
}

void BindingRefreshRequest::parsimPack(cCommBuffer *b)
{
    ::MobilityHeader::parsimPack(b);
}

void BindingRefreshRequest::parsimUnpack(cCommBuffer *b)
{
    ::MobilityHeader::parsimUnpack(b);
}

class BindingRefreshRequestDescriptor : public cClassDescriptor
{
  public:
    BindingRefreshRequestDescriptor();
    virtual ~BindingRefreshRequestDescriptor();

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

Register_ClassDescriptor(BindingRefreshRequestDescriptor);

BindingRefreshRequestDescriptor::BindingRefreshRequestDescriptor() : cClassDescriptor("BindingRefreshRequest", "MobilityHeader")
{
}

BindingRefreshRequestDescriptor::~BindingRefreshRequestDescriptor()
{
}

bool BindingRefreshRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BindingRefreshRequest *>(obj)!=NULL;
}

const char *BindingRefreshRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BindingRefreshRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int BindingRefreshRequestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *BindingRefreshRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int BindingRefreshRequestDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BindingRefreshRequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *BindingRefreshRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BindingRefreshRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BindingRefreshRequest *pp = (BindingRefreshRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string BindingRefreshRequestDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BindingRefreshRequest *pp = (BindingRefreshRequest *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool BindingRefreshRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BindingRefreshRequest *pp = (BindingRefreshRequest *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *BindingRefreshRequestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *BindingRefreshRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BindingRefreshRequest *pp = (BindingRefreshRequest *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

HomeAddressOption_Base::HomeAddressOption_Base() : ::IPv6DestinationOptionsHeader()
{
}

HomeAddressOption_Base::HomeAddressOption_Base(const HomeAddressOption_Base& other) : ::IPv6DestinationOptionsHeader(other)
{
    copy(other);
}

HomeAddressOption_Base::~HomeAddressOption_Base()
{
}

HomeAddressOption_Base& HomeAddressOption_Base::operator=(const HomeAddressOption_Base& other)
{
    if (this==&other) return *this;
    ::IPv6DestinationOptionsHeader::operator=(other);
    copy(other);
    return *this;
}

void HomeAddressOption_Base::copy(const HomeAddressOption_Base& other)
{
    this->homeAddress_var = other.homeAddress_var;
}

void HomeAddressOption_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::IPv6DestinationOptionsHeader&)*this);
    doPacking(b,this->homeAddress_var);
}

void HomeAddressOption_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::IPv6DestinationOptionsHeader&)*this);
    doUnpacking(b,this->homeAddress_var);
}

IPv6Address& HomeAddressOption_Base::getHomeAddress()
{
    return homeAddress_var;
}

void HomeAddressOption_Base::setHomeAddress(const IPv6Address& homeAddress)
{
    this->homeAddress_var = homeAddress;
}

class HomeAddressOptionDescriptor : public cClassDescriptor
{
  public:
    HomeAddressOptionDescriptor();
    virtual ~HomeAddressOptionDescriptor();

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

Register_ClassDescriptor(HomeAddressOptionDescriptor);

HomeAddressOptionDescriptor::HomeAddressOptionDescriptor() : cClassDescriptor("HomeAddressOption", "IPv6DestinationOptionsHeader")
{
}

HomeAddressOptionDescriptor::~HomeAddressOptionDescriptor()
{
}

bool HomeAddressOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HomeAddressOption_Base *>(obj)!=NULL;
}

const char *HomeAddressOptionDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HomeAddressOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HomeAddressOptionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *HomeAddressOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "homeAddress",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HomeAddressOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "homeAddress")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HomeAddressOptionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv6Address",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *HomeAddressOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HomeAddressOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HomeAddressOption_Base *pp = (HomeAddressOption_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HomeAddressOptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HomeAddressOption_Base *pp = (HomeAddressOption_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getHomeAddress(); return out.str();}
        default: return "";
    }
}

bool HomeAddressOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HomeAddressOption_Base *pp = (HomeAddressOption_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *HomeAddressOptionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv6Address));
        default: return NULL;
    };
}

void *HomeAddressOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HomeAddressOption_Base *pp = (HomeAddressOption_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getHomeAddress()); break;
        default: return NULL;
    }
}


