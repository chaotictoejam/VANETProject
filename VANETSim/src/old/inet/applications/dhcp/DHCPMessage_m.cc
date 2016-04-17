//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/dhcp/DHCPMessage.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DHCPMessage_m.h"

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
    cEnum *e = cEnum::find("DHCPOpcode");
    if (!e) enums.getInstance()->add(e = new cEnum("DHCPOpcode"));
    e->insert(BOOTREQUEST, "BOOTREQUEST");
    e->insert(BOOTREPLY, "BOOTREPLY");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("DHCPMessageType");
    if (!e) enums.getInstance()->add(e = new cEnum("DHCPMessageType"));
    e->insert(DHCPDISCOVER, "DHCPDISCOVER");
    e->insert(DHCPOFFER, "DHCPOFFER");
    e->insert(DHCPREQUEST, "DHCPREQUEST");
    e->insert(DHCPDECLINE, "DHCPDECLINE");
    e->insert(DHCPACK, "DHCPACK");
    e->insert(DHCPNAK, "DHCPNAK");
    e->insert(DHCPRELEASE, "DHCPRELEASE");
    e->insert(DHCPINFORM, "DHCPINFORM");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("DHCPOptionCode");
    if (!e) enums.getInstance()->add(e = new cEnum("DHCPOptionCode"));
    e->insert(DHCP_MSG_TYPE, "DHCP_MSG_TYPE");
    e->insert(CLIENT_ID, "CLIENT_ID");
    e->insert(HOSTNAME, "HOSTNAME");
    e->insert(REQUESTED_IP, "REQUESTED_IP");
    e->insert(PARAM_LIST, "PARAM_LIST");
    e->insert(SUBNET_MASK, "SUBNET_MASK");
    e->insert(ROUTER, "ROUTER");
    e->insert(DNS, "DNS");
    e->insert(NTP_SRV, "NTP_SRV");
    e->insert(RENEWAL_TIME, "RENEWAL_TIME");
    e->insert(REBIND_TIME, "REBIND_TIME");
    e->insert(LEASE_TIME, "LEASE_TIME");
    e->insert(SERVER_ID, "SERVER_ID");
);

Register_Class(DHCPOptions);

DHCPOptions::DHCPOptions() : ::cObject()
{
    this->messageType_var = 0;
    this->hostName_var = 0;
    parameterRequestList_arraysize = 0;
    this->parameterRequestList_var = 0;
    router_arraysize = 0;
    this->router_var = 0;
    dns_arraysize = 0;
    this->dns_var = 0;
    ntp_arraysize = 0;
    this->ntp_var = 0;
    this->renewalTime_var = 0;
    this->rebindingTime_var = 0;
    this->leaseTime_var = 0;
}

DHCPOptions::DHCPOptions(const DHCPOptions& other) : ::cObject(other)
{
    parameterRequestList_arraysize = 0;
    this->parameterRequestList_var = 0;
    router_arraysize = 0;
    this->router_var = 0;
    dns_arraysize = 0;
    this->dns_var = 0;
    ntp_arraysize = 0;
    this->ntp_var = 0;
    copy(other);
}

DHCPOptions::~DHCPOptions()
{
    delete [] parameterRequestList_var;
    delete [] router_var;
    delete [] dns_var;
    delete [] ntp_var;
}

DHCPOptions& DHCPOptions::operator=(const DHCPOptions& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void DHCPOptions::copy(const DHCPOptions& other)
{
    this->messageType_var = other.messageType_var;
    this->hostName_var = other.hostName_var;
    delete [] this->parameterRequestList_var;
    this->parameterRequestList_var = (other.parameterRequestList_arraysize==0) ? NULL : new int[other.parameterRequestList_arraysize];
    parameterRequestList_arraysize = other.parameterRequestList_arraysize;
    for (unsigned int i=0; i<parameterRequestList_arraysize; i++)
        this->parameterRequestList_var[i] = other.parameterRequestList_var[i];
    this->clientIdentifier_var = other.clientIdentifier_var;
    this->requestedIp_var = other.requestedIp_var;
    this->subnetMask_var = other.subnetMask_var;
    delete [] this->router_var;
    this->router_var = (other.router_arraysize==0) ? NULL : new IPv4Address[other.router_arraysize];
    router_arraysize = other.router_arraysize;
    for (unsigned int i=0; i<router_arraysize; i++)
        this->router_var[i] = other.router_var[i];
    delete [] this->dns_var;
    this->dns_var = (other.dns_arraysize==0) ? NULL : new IPv4Address[other.dns_arraysize];
    dns_arraysize = other.dns_arraysize;
    for (unsigned int i=0; i<dns_arraysize; i++)
        this->dns_var[i] = other.dns_var[i];
    delete [] this->ntp_var;
    this->ntp_var = (other.ntp_arraysize==0) ? NULL : new IPv4Address[other.ntp_arraysize];
    ntp_arraysize = other.ntp_arraysize;
    for (unsigned int i=0; i<ntp_arraysize; i++)
        this->ntp_var[i] = other.ntp_var[i];
    this->serverIdentifier_var = other.serverIdentifier_var;
    this->renewalTime_var = other.renewalTime_var;
    this->rebindingTime_var = other.rebindingTime_var;
    this->leaseTime_var = other.leaseTime_var;
}

void DHCPOptions::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->messageType_var);
    doPacking(b,this->hostName_var);
    b->pack(parameterRequestList_arraysize);
    doPacking(b,this->parameterRequestList_var,parameterRequestList_arraysize);
    doPacking(b,this->clientIdentifier_var);
    doPacking(b,this->requestedIp_var);
    doPacking(b,this->subnetMask_var);
    b->pack(router_arraysize);
    doPacking(b,this->router_var,router_arraysize);
    b->pack(dns_arraysize);
    doPacking(b,this->dns_var,dns_arraysize);
    b->pack(ntp_arraysize);
    doPacking(b,this->ntp_var,ntp_arraysize);
    doPacking(b,this->serverIdentifier_var);
    doPacking(b,this->renewalTime_var);
    doPacking(b,this->rebindingTime_var);
    doPacking(b,this->leaseTime_var);
}

void DHCPOptions::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->messageType_var);
    doUnpacking(b,this->hostName_var);
    delete [] this->parameterRequestList_var;
    b->unpack(parameterRequestList_arraysize);
    if (parameterRequestList_arraysize==0) {
        this->parameterRequestList_var = 0;
    } else {
        this->parameterRequestList_var = new int[parameterRequestList_arraysize];
        doUnpacking(b,this->parameterRequestList_var,parameterRequestList_arraysize);
    }
    doUnpacking(b,this->clientIdentifier_var);
    doUnpacking(b,this->requestedIp_var);
    doUnpacking(b,this->subnetMask_var);
    delete [] this->router_var;
    b->unpack(router_arraysize);
    if (router_arraysize==0) {
        this->router_var = 0;
    } else {
        this->router_var = new IPv4Address[router_arraysize];
        doUnpacking(b,this->router_var,router_arraysize);
    }
    delete [] this->dns_var;
    b->unpack(dns_arraysize);
    if (dns_arraysize==0) {
        this->dns_var = 0;
    } else {
        this->dns_var = new IPv4Address[dns_arraysize];
        doUnpacking(b,this->dns_var,dns_arraysize);
    }
    delete [] this->ntp_var;
    b->unpack(ntp_arraysize);
    if (ntp_arraysize==0) {
        this->ntp_var = 0;
    } else {
        this->ntp_var = new IPv4Address[ntp_arraysize];
        doUnpacking(b,this->ntp_var,ntp_arraysize);
    }
    doUnpacking(b,this->serverIdentifier_var);
    doUnpacking(b,this->renewalTime_var);
    doUnpacking(b,this->rebindingTime_var);
    doUnpacking(b,this->leaseTime_var);
}

int DHCPOptions::getMessageType() const
{
    return messageType_var;
}

void DHCPOptions::setMessageType(int messageType)
{
    this->messageType_var = messageType;
}

const char * DHCPOptions::getHostName() const
{
    return hostName_var.c_str();
}

void DHCPOptions::setHostName(const char * hostName)
{
    this->hostName_var = hostName;
}

void DHCPOptions::setParameterRequestListArraySize(unsigned int size)
{
    int *parameterRequestList_var2 = (size==0) ? NULL : new int[size];
    unsigned int sz = parameterRequestList_arraysize < size ? parameterRequestList_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        parameterRequestList_var2[i] = this->parameterRequestList_var[i];
    for (unsigned int i=sz; i<size; i++)
        parameterRequestList_var2[i] = 0;
    parameterRequestList_arraysize = size;
    delete [] this->parameterRequestList_var;
    this->parameterRequestList_var = parameterRequestList_var2;
}

unsigned int DHCPOptions::getParameterRequestListArraySize() const
{
    return parameterRequestList_arraysize;
}

int DHCPOptions::getParameterRequestList(unsigned int k) const
{
    if (k>=parameterRequestList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", parameterRequestList_arraysize, k);
    return parameterRequestList_var[k];
}

void DHCPOptions::setParameterRequestList(unsigned int k, int parameterRequestList)
{
    if (k>=parameterRequestList_arraysize) throw cRuntimeError("Array of size %d indexed by %d", parameterRequestList_arraysize, k);
    this->parameterRequestList_var[k] = parameterRequestList;
}

MACAddress& DHCPOptions::getClientIdentifier()
{
    return clientIdentifier_var;
}

void DHCPOptions::setClientIdentifier(const MACAddress& clientIdentifier)
{
    this->clientIdentifier_var = clientIdentifier;
}

IPv4Address& DHCPOptions::getRequestedIp()
{
    return requestedIp_var;
}

void DHCPOptions::setRequestedIp(const IPv4Address& requestedIp)
{
    this->requestedIp_var = requestedIp;
}

IPv4Address& DHCPOptions::getSubnetMask()
{
    return subnetMask_var;
}

void DHCPOptions::setSubnetMask(const IPv4Address& subnetMask)
{
    this->subnetMask_var = subnetMask;
}

void DHCPOptions::setRouterArraySize(unsigned int size)
{
    IPv4Address *router_var2 = (size==0) ? NULL : new IPv4Address[size];
    unsigned int sz = router_arraysize < size ? router_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        router_var2[i] = this->router_var[i];
    router_arraysize = size;
    delete [] this->router_var;
    this->router_var = router_var2;
}

unsigned int DHCPOptions::getRouterArraySize() const
{
    return router_arraysize;
}

IPv4Address& DHCPOptions::getRouter(unsigned int k)
{
    if (k>=router_arraysize) throw cRuntimeError("Array of size %d indexed by %d", router_arraysize, k);
    return router_var[k];
}

void DHCPOptions::setRouter(unsigned int k, const IPv4Address& router)
{
    if (k>=router_arraysize) throw cRuntimeError("Array of size %d indexed by %d", router_arraysize, k);
    this->router_var[k] = router;
}

void DHCPOptions::setDnsArraySize(unsigned int size)
{
    IPv4Address *dns_var2 = (size==0) ? NULL : new IPv4Address[size];
    unsigned int sz = dns_arraysize < size ? dns_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        dns_var2[i] = this->dns_var[i];
    dns_arraysize = size;
    delete [] this->dns_var;
    this->dns_var = dns_var2;
}

unsigned int DHCPOptions::getDnsArraySize() const
{
    return dns_arraysize;
}

IPv4Address& DHCPOptions::getDns(unsigned int k)
{
    if (k>=dns_arraysize) throw cRuntimeError("Array of size %d indexed by %d", dns_arraysize, k);
    return dns_var[k];
}

void DHCPOptions::setDns(unsigned int k, const IPv4Address& dns)
{
    if (k>=dns_arraysize) throw cRuntimeError("Array of size %d indexed by %d", dns_arraysize, k);
    this->dns_var[k] = dns;
}

void DHCPOptions::setNtpArraySize(unsigned int size)
{
    IPv4Address *ntp_var2 = (size==0) ? NULL : new IPv4Address[size];
    unsigned int sz = ntp_arraysize < size ? ntp_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        ntp_var2[i] = this->ntp_var[i];
    ntp_arraysize = size;
    delete [] this->ntp_var;
    this->ntp_var = ntp_var2;
}

unsigned int DHCPOptions::getNtpArraySize() const
{
    return ntp_arraysize;
}

IPv4Address& DHCPOptions::getNtp(unsigned int k)
{
    if (k>=ntp_arraysize) throw cRuntimeError("Array of size %d indexed by %d", ntp_arraysize, k);
    return ntp_var[k];
}

void DHCPOptions::setNtp(unsigned int k, const IPv4Address& ntp)
{
    if (k>=ntp_arraysize) throw cRuntimeError("Array of size %d indexed by %d", ntp_arraysize, k);
    this->ntp_var[k] = ntp;
}

IPv4Address& DHCPOptions::getServerIdentifier()
{
    return serverIdentifier_var;
}

void DHCPOptions::setServerIdentifier(const IPv4Address& serverIdentifier)
{
    this->serverIdentifier_var = serverIdentifier;
}

simtime_t DHCPOptions::getRenewalTime() const
{
    return renewalTime_var;
}

void DHCPOptions::setRenewalTime(simtime_t renewalTime)
{
    this->renewalTime_var = renewalTime;
}

simtime_t DHCPOptions::getRebindingTime() const
{
    return rebindingTime_var;
}

void DHCPOptions::setRebindingTime(simtime_t rebindingTime)
{
    this->rebindingTime_var = rebindingTime;
}

simtime_t DHCPOptions::getLeaseTime() const
{
    return leaseTime_var;
}

void DHCPOptions::setLeaseTime(simtime_t leaseTime)
{
    this->leaseTime_var = leaseTime;
}

class DHCPOptionsDescriptor : public cClassDescriptor
{
  public:
    DHCPOptionsDescriptor();
    virtual ~DHCPOptionsDescriptor();

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

Register_ClassDescriptor(DHCPOptionsDescriptor);

DHCPOptionsDescriptor::DHCPOptionsDescriptor() : cClassDescriptor("DHCPOptions", "cObject")
{
}

DHCPOptionsDescriptor::~DHCPOptionsDescriptor()
{
}

bool DHCPOptionsDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHCPOptions *>(obj)!=NULL;
}

const char *DHCPOptionsDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHCPOptionsDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 13+basedesc->getFieldCount(object) : 13;
}

unsigned int DHCPOptionsDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<13) ? fieldTypeFlags[field] : 0;
}

const char *DHCPOptionsDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "messageType",
        "hostName",
        "parameterRequestList",
        "clientIdentifier",
        "requestedIp",
        "subnetMask",
        "router",
        "dns",
        "ntp",
        "serverIdentifier",
        "renewalTime",
        "rebindingTime",
        "leaseTime",
    };
    return (field>=0 && field<13) ? fieldNames[field] : NULL;
}

int DHCPOptionsDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "messageType")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "hostName")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "parameterRequestList")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "clientIdentifier")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "requestedIp")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "subnetMask")==0) return base+5;
    if (fieldName[0]=='r' && strcmp(fieldName, "router")==0) return base+6;
    if (fieldName[0]=='d' && strcmp(fieldName, "dns")==0) return base+7;
    if (fieldName[0]=='n' && strcmp(fieldName, "ntp")==0) return base+8;
    if (fieldName[0]=='s' && strcmp(fieldName, "serverIdentifier")==0) return base+9;
    if (fieldName[0]=='r' && strcmp(fieldName, "renewalTime")==0) return base+10;
    if (fieldName[0]=='r' && strcmp(fieldName, "rebindingTime")==0) return base+11;
    if (fieldName[0]=='l' && strcmp(fieldName, "leaseTime")==0) return base+12;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DHCPOptionsDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "string",
        "int",
        "MACAddress",
        "IPv4Address",
        "IPv4Address",
        "IPv4Address",
        "IPv4Address",
        "IPv4Address",
        "IPv4Address",
        "simtime_t",
        "simtime_t",
        "simtime_t",
    };
    return (field>=0 && field<13) ? fieldTypeStrings[field] : NULL;
}

const char *DHCPOptionsDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "DHCPMessageType";
            return NULL;
        default: return NULL;
    }
}

int DHCPOptionsDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHCPOptions *pp = (DHCPOptions *)object; (void)pp;
    switch (field) {
        case 2: return pp->getParameterRequestListArraySize();
        case 6: return pp->getRouterArraySize();
        case 7: return pp->getDnsArraySize();
        case 8: return pp->getNtpArraySize();
        default: return 0;
    }
}

std::string DHCPOptionsDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DHCPOptions *pp = (DHCPOptions *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getMessageType());
        case 1: return oppstring2string(pp->getHostName());
        case 2: return long2string(pp->getParameterRequestList(i));
        case 3: {std::stringstream out; out << pp->getClientIdentifier(); return out.str();}
        case 4: {std::stringstream out; out << pp->getRequestedIp(); return out.str();}
        case 5: {std::stringstream out; out << pp->getSubnetMask(); return out.str();}
        case 6: {std::stringstream out; out << pp->getRouter(i); return out.str();}
        case 7: {std::stringstream out; out << pp->getDns(i); return out.str();}
        case 8: {std::stringstream out; out << pp->getNtp(i); return out.str();}
        case 9: {std::stringstream out; out << pp->getServerIdentifier(); return out.str();}
        case 10: return double2string(pp->getRenewalTime());
        case 11: return double2string(pp->getRebindingTime());
        case 12: return double2string(pp->getLeaseTime());
        default: return "";
    }
}

bool DHCPOptionsDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHCPOptions *pp = (DHCPOptions *)object; (void)pp;
    switch (field) {
        case 0: pp->setMessageType(string2long(value)); return true;
        case 1: pp->setHostName((value)); return true;
        case 2: pp->setParameterRequestList(i,string2long(value)); return true;
        case 10: pp->setRenewalTime(string2double(value)); return true;
        case 11: pp->setRebindingTime(string2double(value)); return true;
        case 12: pp->setLeaseTime(string2double(value)); return true;
        default: return false;
    }
}

const char *DHCPOptionsDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return opp_typename(typeid(MACAddress));
        case 4: return opp_typename(typeid(IPv4Address));
        case 5: return opp_typename(typeid(IPv4Address));
        case 6: return opp_typename(typeid(IPv4Address));
        case 7: return opp_typename(typeid(IPv4Address));
        case 8: return opp_typename(typeid(IPv4Address));
        case 9: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *DHCPOptionsDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHCPOptions *pp = (DHCPOptions *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getClientIdentifier()); break;
        case 4: return (void *)(&pp->getRequestedIp()); break;
        case 5: return (void *)(&pp->getSubnetMask()); break;
        case 6: return (void *)(&pp->getRouter(i)); break;
        case 7: return (void *)(&pp->getDns(i)); break;
        case 8: return (void *)(&pp->getNtp(i)); break;
        case 9: return (void *)(&pp->getServerIdentifier()); break;
        default: return NULL;
    }
}

Register_Class(DHCPMessage);

DHCPMessage::DHCPMessage(const char *name, int kind) : ::cPacket(name,kind)
{
    this->op_var = 0;
    this->htype_var = 0;
    this->hlen_var = 0;
    this->hops_var = 0;
    this->xid_var = 0;
    this->secs_var = 0;
    this->broadcast_var = 0;
    this->sname_var = 0;
    this->file_var = 0;
}

DHCPMessage::DHCPMessage(const DHCPMessage& other) : ::cPacket(other)
{
    copy(other);
}

DHCPMessage::~DHCPMessage()
{
}

DHCPMessage& DHCPMessage::operator=(const DHCPMessage& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void DHCPMessage::copy(const DHCPMessage& other)
{
    this->op_var = other.op_var;
    this->htype_var = other.htype_var;
    this->hlen_var = other.hlen_var;
    this->hops_var = other.hops_var;
    this->xid_var = other.xid_var;
    this->secs_var = other.secs_var;
    this->broadcast_var = other.broadcast_var;
    this->ciaddr_var = other.ciaddr_var;
    this->yiaddr_var = other.yiaddr_var;
    this->giaddr_var = other.giaddr_var;
    this->chaddr_var = other.chaddr_var;
    this->sname_var = other.sname_var;
    this->file_var = other.file_var;
    this->options_var = other.options_var;
}

void DHCPMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->op_var);
    doPacking(b,this->htype_var);
    doPacking(b,this->hlen_var);
    doPacking(b,this->hops_var);
    doPacking(b,this->xid_var);
    doPacking(b,this->secs_var);
    doPacking(b,this->broadcast_var);
    doPacking(b,this->ciaddr_var);
    doPacking(b,this->yiaddr_var);
    doPacking(b,this->giaddr_var);
    doPacking(b,this->chaddr_var);
    doPacking(b,this->sname_var);
    doPacking(b,this->file_var);
    doPacking(b,this->options_var);
}

void DHCPMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->op_var);
    doUnpacking(b,this->htype_var);
    doUnpacking(b,this->hlen_var);
    doUnpacking(b,this->hops_var);
    doUnpacking(b,this->xid_var);
    doUnpacking(b,this->secs_var);
    doUnpacking(b,this->broadcast_var);
    doUnpacking(b,this->ciaddr_var);
    doUnpacking(b,this->yiaddr_var);
    doUnpacking(b,this->giaddr_var);
    doUnpacking(b,this->chaddr_var);
    doUnpacking(b,this->sname_var);
    doUnpacking(b,this->file_var);
    doUnpacking(b,this->options_var);
}

int DHCPMessage::getOp() const
{
    return op_var;
}

void DHCPMessage::setOp(int op)
{
    this->op_var = op;
}

int DHCPMessage::getHtype() const
{
    return htype_var;
}

void DHCPMessage::setHtype(int htype)
{
    this->htype_var = htype;
}

int DHCPMessage::getHlen() const
{
    return hlen_var;
}

void DHCPMessage::setHlen(int hlen)
{
    this->hlen_var = hlen;
}

int DHCPMessage::getHops() const
{
    return hops_var;
}

void DHCPMessage::setHops(int hops)
{
    this->hops_var = hops;
}

unsigned int DHCPMessage::getXid() const
{
    return xid_var;
}

void DHCPMessage::setXid(unsigned int xid)
{
    this->xid_var = xid;
}

int DHCPMessage::getSecs() const
{
    return secs_var;
}

void DHCPMessage::setSecs(int secs)
{
    this->secs_var = secs;
}

bool DHCPMessage::getBroadcast() const
{
    return broadcast_var;
}

void DHCPMessage::setBroadcast(bool broadcast)
{
    this->broadcast_var = broadcast;
}

IPv4Address& DHCPMessage::getCiaddr()
{
    return ciaddr_var;
}

void DHCPMessage::setCiaddr(const IPv4Address& ciaddr)
{
    this->ciaddr_var = ciaddr;
}

IPv4Address& DHCPMessage::getYiaddr()
{
    return yiaddr_var;
}

void DHCPMessage::setYiaddr(const IPv4Address& yiaddr)
{
    this->yiaddr_var = yiaddr;
}

IPv4Address& DHCPMessage::getGiaddr()
{
    return giaddr_var;
}

void DHCPMessage::setGiaddr(const IPv4Address& giaddr)
{
    this->giaddr_var = giaddr;
}

MACAddress& DHCPMessage::getChaddr()
{
    return chaddr_var;
}

void DHCPMessage::setChaddr(const MACAddress& chaddr)
{
    this->chaddr_var = chaddr;
}

const char * DHCPMessage::getSname() const
{
    return sname_var.c_str();
}

void DHCPMessage::setSname(const char * sname)
{
    this->sname_var = sname;
}

const char * DHCPMessage::getFile() const
{
    return file_var.c_str();
}

void DHCPMessage::setFile(const char * file)
{
    this->file_var = file;
}

DHCPOptions& DHCPMessage::getOptions()
{
    return options_var;
}

void DHCPMessage::setOptions(const DHCPOptions& options)
{
    this->options_var = options;
}

class DHCPMessageDescriptor : public cClassDescriptor
{
  public:
    DHCPMessageDescriptor();
    virtual ~DHCPMessageDescriptor();

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

Register_ClassDescriptor(DHCPMessageDescriptor);

DHCPMessageDescriptor::DHCPMessageDescriptor() : cClassDescriptor("DHCPMessage", "cPacket")
{
}

DHCPMessageDescriptor::~DHCPMessageDescriptor()
{
}

bool DHCPMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DHCPMessage *>(obj)!=NULL;
}

const char *DHCPMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DHCPMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 14+basedesc->getFieldCount(object) : 14;
}

unsigned int DHCPMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<14) ? fieldTypeFlags[field] : 0;
}

const char *DHCPMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "op",
        "htype",
        "hlen",
        "hops",
        "xid",
        "secs",
        "broadcast",
        "ciaddr",
        "yiaddr",
        "giaddr",
        "chaddr",
        "sname",
        "file",
        "options",
    };
    return (field>=0 && field<14) ? fieldNames[field] : NULL;
}

int DHCPMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='o' && strcmp(fieldName, "op")==0) return base+0;
    if (fieldName[0]=='h' && strcmp(fieldName, "htype")==0) return base+1;
    if (fieldName[0]=='h' && strcmp(fieldName, "hlen")==0) return base+2;
    if (fieldName[0]=='h' && strcmp(fieldName, "hops")==0) return base+3;
    if (fieldName[0]=='x' && strcmp(fieldName, "xid")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "secs")==0) return base+5;
    if (fieldName[0]=='b' && strcmp(fieldName, "broadcast")==0) return base+6;
    if (fieldName[0]=='c' && strcmp(fieldName, "ciaddr")==0) return base+7;
    if (fieldName[0]=='y' && strcmp(fieldName, "yiaddr")==0) return base+8;
    if (fieldName[0]=='g' && strcmp(fieldName, "giaddr")==0) return base+9;
    if (fieldName[0]=='c' && strcmp(fieldName, "chaddr")==0) return base+10;
    if (fieldName[0]=='s' && strcmp(fieldName, "sname")==0) return base+11;
    if (fieldName[0]=='f' && strcmp(fieldName, "file")==0) return base+12;
    if (fieldName[0]=='o' && strcmp(fieldName, "options")==0) return base+13;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DHCPMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
        "int",
        "int",
        "unsigned int",
        "int",
        "bool",
        "IPv4Address",
        "IPv4Address",
        "IPv4Address",
        "MACAddress",
        "string",
        "string",
        "DHCPOptions",
    };
    return (field>=0 && field<14) ? fieldTypeStrings[field] : NULL;
}

const char *DHCPMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "DHCPOpcode";
            return NULL;
        default: return NULL;
    }
}

int DHCPMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DHCPMessage *pp = (DHCPMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DHCPMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DHCPMessage *pp = (DHCPMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getOp());
        case 1: return long2string(pp->getHtype());
        case 2: return long2string(pp->getHlen());
        case 3: return long2string(pp->getHops());
        case 4: return ulong2string(pp->getXid());
        case 5: return long2string(pp->getSecs());
        case 6: return bool2string(pp->getBroadcast());
        case 7: {std::stringstream out; out << pp->getCiaddr(); return out.str();}
        case 8: {std::stringstream out; out << pp->getYiaddr(); return out.str();}
        case 9: {std::stringstream out; out << pp->getGiaddr(); return out.str();}
        case 10: {std::stringstream out; out << pp->getChaddr(); return out.str();}
        case 11: return oppstring2string(pp->getSname());
        case 12: return oppstring2string(pp->getFile());
        case 13: {std::stringstream out; out << pp->getOptions(); return out.str();}
        default: return "";
    }
}

bool DHCPMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DHCPMessage *pp = (DHCPMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setOp(string2long(value)); return true;
        case 1: pp->setHtype(string2long(value)); return true;
        case 2: pp->setHlen(string2long(value)); return true;
        case 3: pp->setHops(string2long(value)); return true;
        case 4: pp->setXid(string2ulong(value)); return true;
        case 5: pp->setSecs(string2long(value)); return true;
        case 6: pp->setBroadcast(string2bool(value)); return true;
        case 11: pp->setSname((value)); return true;
        case 12: pp->setFile((value)); return true;
        default: return false;
    }
}

const char *DHCPMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 7: return opp_typename(typeid(IPv4Address));
        case 8: return opp_typename(typeid(IPv4Address));
        case 9: return opp_typename(typeid(IPv4Address));
        case 10: return opp_typename(typeid(MACAddress));
        case 13: return opp_typename(typeid(DHCPOptions));
        default: return NULL;
    };
}

void *DHCPMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DHCPMessage *pp = (DHCPMessage *)object; (void)pp;
    switch (field) {
        case 7: return (void *)(&pp->getCiaddr()); break;
        case 8: return (void *)(&pp->getYiaddr()); break;
        case 9: return (void *)(&pp->getGiaddr()); break;
        case 10: return (void *)(&pp->getChaddr()); break;
        case 13: return (void *)static_cast<cObject *>(&pp->getOptions()); break;
        default: return NULL;
    }
}


