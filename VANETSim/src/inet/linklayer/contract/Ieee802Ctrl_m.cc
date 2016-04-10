//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/contract/Ieee802Ctrl.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee802Ctrl_m.h"

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
    cEnum *e = cEnum::find("Ieee802MessageKind");
    if (!e) enums.getInstance()->add(e = new cEnum("Ieee802MessageKind"));
    e->insert(IEEE802CTRL_DATA, "IEEE802CTRL_DATA");
    e->insert(IEEE802CTRL_REGISTER_DSAP, "IEEE802CTRL_REGISTER_DSAP");
    e->insert(IEEE802CTRL_DEREGISTER_DSAP, "IEEE802CTRL_DEREGISTER_DSAP");
    e->insert(IEEE802CTRL_SENDPAUSE, "IEEE802CTRL_SENDPAUSE");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("SAPCode");
    if (!e) enums.getInstance()->add(e = new cEnum("SAPCode"));
    e->insert(SAP_IBM_SNA, "SAP_IBM_SNA");
    e->insert(SAP_IP, "SAP_IP");
    e->insert(SAP_3COM, "SAP_3COM");
    e->insert(SAP_SNAP, "SAP_SNAP");
    e->insert(SAP_BANYAN, "SAP_BANYAN");
    e->insert(SAP_NOVELL_IPX, "SAP_NOVELL_IPX");
    e->insert(SAP_LAN_MANAGER, "SAP_LAN_MANAGER");
    e->insert(SAP_CLNS, "SAP_CLNS");
    e->insert(SAP_STP, "SAP_STP");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("EtherType");
    if (!e) enums.getInstance()->add(e = new cEnum("EtherType"));
    e->insert(ETHERTYPE_IPv4, "ETHERTYPE_IPv4");
    e->insert(ETHERTYPE_ARP, "ETHERTYPE_ARP");
    e->insert(ETHERTYPE_TRILL, "ETHERTYPE_TRILL");
    e->insert(ETHERTYPE_L2_ISIS, "ETHERTYPE_L2_ISIS");
    e->insert(ETHERTYPE_RARP, "ETHERTYPE_RARP");
    e->insert(ETHERTYPE_IPv6, "ETHERTYPE_IPv6");
    e->insert(ETHERTYPE_MPLS_UNICAST, "ETHERTYPE_MPLS_UNICAST");
    e->insert(ETHERTYPE_MPLS_MULTICAST, "ETHERTYPE_MPLS_MULTICAST");
);

Register_Class(Ieee802Ctrl);

Ieee802Ctrl::Ieee802Ctrl() : ::cObject()
{
    this->etherType_var = 0;
    this->interfaceId_var = 0;
    this->switchPort_var = -1;
    this->ssap_var = 0;
    this->dsap_var = 0;
    this->pauseUnits_var = 0;
}

Ieee802Ctrl::Ieee802Ctrl(const Ieee802Ctrl& other) : ::cObject(other)
{
    copy(other);
}

Ieee802Ctrl::~Ieee802Ctrl()
{
}

Ieee802Ctrl& Ieee802Ctrl::operator=(const Ieee802Ctrl& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void Ieee802Ctrl::copy(const Ieee802Ctrl& other)
{
    this->src_var = other.src_var;
    this->dest_var = other.dest_var;
    this->etherType_var = other.etherType_var;
    this->interfaceId_var = other.interfaceId_var;
    this->switchPort_var = other.switchPort_var;
    this->ssap_var = other.ssap_var;
    this->dsap_var = other.dsap_var;
    this->pauseUnits_var = other.pauseUnits_var;
}

void Ieee802Ctrl::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->src_var);
    doPacking(b,this->dest_var);
    doPacking(b,this->etherType_var);
    doPacking(b,this->interfaceId_var);
    doPacking(b,this->switchPort_var);
    doPacking(b,this->ssap_var);
    doPacking(b,this->dsap_var);
    doPacking(b,this->pauseUnits_var);
}

void Ieee802Ctrl::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->dest_var);
    doUnpacking(b,this->etherType_var);
    doUnpacking(b,this->interfaceId_var);
    doUnpacking(b,this->switchPort_var);
    doUnpacking(b,this->ssap_var);
    doUnpacking(b,this->dsap_var);
    doUnpacking(b,this->pauseUnits_var);
}

MACAddress& Ieee802Ctrl::getSrc()
{
    return src_var;
}

void Ieee802Ctrl::setSrc(const MACAddress& src)
{
    this->src_var = src;
}

MACAddress& Ieee802Ctrl::getDest()
{
    return dest_var;
}

void Ieee802Ctrl::setDest(const MACAddress& dest)
{
    this->dest_var = dest;
}

int Ieee802Ctrl::getEtherType() const
{
    return etherType_var;
}

void Ieee802Ctrl::setEtherType(int etherType)
{
    this->etherType_var = etherType;
}

int Ieee802Ctrl::getInterfaceId() const
{
    return interfaceId_var;
}

void Ieee802Ctrl::setInterfaceId(int interfaceId)
{
    this->interfaceId_var = interfaceId;
}

int Ieee802Ctrl::getSwitchPort() const
{
    return switchPort_var;
}

void Ieee802Ctrl::setSwitchPort(int switchPort)
{
    this->switchPort_var = switchPort;
}

int Ieee802Ctrl::getSsap() const
{
    return ssap_var;
}

void Ieee802Ctrl::setSsap(int ssap)
{
    this->ssap_var = ssap;
}

int Ieee802Ctrl::getDsap() const
{
    return dsap_var;
}

void Ieee802Ctrl::setDsap(int dsap)
{
    this->dsap_var = dsap;
}

int Ieee802Ctrl::getPauseUnits() const
{
    return pauseUnits_var;
}

void Ieee802Ctrl::setPauseUnits(int pauseUnits)
{
    this->pauseUnits_var = pauseUnits;
}

class Ieee802CtrlDescriptor : public cClassDescriptor
{
  public:
    Ieee802CtrlDescriptor();
    virtual ~Ieee802CtrlDescriptor();

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

Register_ClassDescriptor(Ieee802CtrlDescriptor);

Ieee802CtrlDescriptor::Ieee802CtrlDescriptor() : cClassDescriptor("Ieee802Ctrl", "cObject")
{
}

Ieee802CtrlDescriptor::~Ieee802CtrlDescriptor()
{
}

bool Ieee802CtrlDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802Ctrl *>(obj)!=NULL;
}

const char *Ieee802CtrlDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802CtrlDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int Ieee802CtrlDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<8) ? fieldTypeFlags[field] : 0;
}

const char *Ieee802CtrlDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "src",
        "dest",
        "etherType",
        "interfaceId",
        "switchPort",
        "ssap",
        "dsap",
        "pauseUnits",
    };
    return (field>=0 && field<8) ? fieldNames[field] : NULL;
}

int Ieee802CtrlDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest")==0) return base+1;
    if (fieldName[0]=='e' && strcmp(fieldName, "etherType")==0) return base+2;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "switchPort")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssap")==0) return base+5;
    if (fieldName[0]=='d' && strcmp(fieldName, "dsap")==0) return base+6;
    if (fieldName[0]=='p' && strcmp(fieldName, "pauseUnits")==0) return base+7;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802CtrlDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "MACAddress",
        "int",
        "int",
        "int",
        "int",
        "int",
        "int",
    };
    return (field>=0 && field<8) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802CtrlDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "EtherType";
            return NULL;
        default: return NULL;
    }
}

int Ieee802CtrlDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802Ctrl *pp = (Ieee802Ctrl *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802CtrlDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802Ctrl *pp = (Ieee802Ctrl *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDest(); return out.str();}
        case 2: return long2string(pp->getEtherType());
        case 3: return long2string(pp->getInterfaceId());
        case 4: return long2string(pp->getSwitchPort());
        case 5: return long2string(pp->getSsap());
        case 6: return long2string(pp->getDsap());
        case 7: return long2string(pp->getPauseUnits());
        default: return "";
    }
}

bool Ieee802CtrlDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802Ctrl *pp = (Ieee802Ctrl *)object; (void)pp;
    switch (field) {
        case 2: pp->setEtherType(string2long(value)); return true;
        case 3: pp->setInterfaceId(string2long(value)); return true;
        case 4: pp->setSwitchPort(string2long(value)); return true;
        case 5: pp->setSsap(string2long(value)); return true;
        case 6: pp->setDsap(string2long(value)); return true;
        case 7: pp->setPauseUnits(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee802CtrlDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(MACAddress));
        case 1: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *Ieee802CtrlDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802Ctrl *pp = (Ieee802Ctrl *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        case 1: return (void *)(&pp->getDest()); break;
        default: return NULL;
    }
}


