//
// Generated file, do not edit! Created by nedtool 4.6 from routing/extras/batman/BatmanMsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "BatmanMsg_m.h"

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
namespace inetmanet {

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

vis_data::vis_data()
{
    type = 0;
    data = 0;
}

void doPacking(cCommBuffer *b, vis_data& a)
{
    doPacking(b,a.type);
    doPacking(b,a.data);
    doPacking(b,a.ip);
}

void doUnpacking(cCommBuffer *b, vis_data& a)
{
    doUnpacking(b,a.type);
    doUnpacking(b,a.data);
    doUnpacking(b,a.ip);
}

class vis_dataDescriptor : public cClassDescriptor
{
  public:
    vis_dataDescriptor();
    virtual ~vis_dataDescriptor();

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

Register_ClassDescriptor(vis_dataDescriptor);

vis_dataDescriptor::vis_dataDescriptor() : cClassDescriptor("inet::inetmanet::vis_data", "")
{
}

vis_dataDescriptor::~vis_dataDescriptor()
{
}

bool vis_dataDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<vis_data *>(obj)!=NULL;
}

const char *vis_dataDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int vis_dataDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int vis_dataDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *vis_dataDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "data",
        "ip",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int vis_dataDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "data")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "ip")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *vis_dataDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
        "uint8_t",
        "L3Address",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *vis_dataDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int vis_dataDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    vis_data *pp = (vis_data *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string vis_dataDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    vis_data *pp = (vis_data *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->type);
        case 1: return ulong2string(pp->data);
        case 2: {std::stringstream out; out << pp->ip; return out.str();}
        default: return "";
    }
}

bool vis_dataDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    vis_data *pp = (vis_data *)object; (void)pp;
    switch (field) {
        case 0: pp->type = string2ulong(value); return true;
        case 1: pp->data = string2ulong(value); return true;
        default: return false;
    }
}

const char *vis_dataDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *vis_dataDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    vis_data *pp = (vis_data *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->ip); break;
        default: return NULL;
    }
}

HnaElement::HnaElement()
{
    netmask = 0;
}

void doPacking(cCommBuffer *b, HnaElement& a)
{
    doPacking(b,a.addr);
    doPacking(b,a.netmask);
}

void doUnpacking(cCommBuffer *b, HnaElement& a)
{
    doUnpacking(b,a.addr);
    doUnpacking(b,a.netmask);
}

class HnaElementDescriptor : public cClassDescriptor
{
  public:
    HnaElementDescriptor();
    virtual ~HnaElementDescriptor();

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

Register_ClassDescriptor(HnaElementDescriptor);

HnaElementDescriptor::HnaElementDescriptor() : cClassDescriptor("inet::inetmanet::HnaElement", "")
{
}

HnaElementDescriptor::~HnaElementDescriptor()
{
}

bool HnaElementDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HnaElement *>(obj)!=NULL;
}

const char *HnaElementDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HnaElementDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HnaElementDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *HnaElementDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "addr",
        "netmask",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int HnaElementDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addr")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "netmask")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HnaElementDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "L3Address",
        "uint8_t",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *HnaElementDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HnaElementDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HnaElement *pp = (HnaElement *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HnaElementDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HnaElement *pp = (HnaElement *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->addr; return out.str();}
        case 1: return ulong2string(pp->netmask);
        default: return "";
    }
}

bool HnaElementDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HnaElement *pp = (HnaElement *)object; (void)pp;
    switch (field) {
        case 1: pp->netmask = string2ulong(value); return true;
        default: return false;
    }
}

const char *HnaElementDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *HnaElementDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HnaElement *pp = (HnaElement *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->addr); break;
        default: return NULL;
    }
}

Register_Class(BatmanPacket);

BatmanPacket::BatmanPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->setByteLength(BatPacketSize);

    this->version_var = 0;
    this->flags_var = 0;
    this->ttl_var = 0;
    this->gatewayFlags_var = 0;
    this->seqNumber_var = 0;
    this->gatewayPort_var = 0;
    this->tq_var = 0;
    this->hops_var = 0;
    hnaMsg_arraysize = 0;
    this->hnaMsg_var = 0;
}

BatmanPacket::BatmanPacket(const BatmanPacket& other) : ::cPacket(other)
{
    hnaMsg_arraysize = 0;
    this->hnaMsg_var = 0;
    copy(other);
}

BatmanPacket::~BatmanPacket()
{
    delete [] hnaMsg_var;
}

BatmanPacket& BatmanPacket::operator=(const BatmanPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void BatmanPacket::copy(const BatmanPacket& other)
{
    this->version_var = other.version_var;
    this->flags_var = other.flags_var;
    this->ttl_var = other.ttl_var;
    this->gatewayFlags_var = other.gatewayFlags_var;
    this->seqNumber_var = other.seqNumber_var;
    this->gatewayPort_var = other.gatewayPort_var;
    this->orig_var = other.orig_var;
    this->prevSender_var = other.prevSender_var;
    this->tq_var = other.tq_var;
    this->hops_var = other.hops_var;
    delete [] this->hnaMsg_var;
    this->hnaMsg_var = (other.hnaMsg_arraysize==0) ? NULL : new HnaElement[other.hnaMsg_arraysize];
    hnaMsg_arraysize = other.hnaMsg_arraysize;
    for (unsigned int i=0; i<hnaMsg_arraysize; i++)
        this->hnaMsg_var[i] = other.hnaMsg_var[i];
}

void BatmanPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->version_var);
    doPacking(b,this->flags_var);
    doPacking(b,this->ttl_var);
    doPacking(b,this->gatewayFlags_var);
    doPacking(b,this->seqNumber_var);
    doPacking(b,this->gatewayPort_var);
    doPacking(b,this->orig_var);
    doPacking(b,this->prevSender_var);
    doPacking(b,this->tq_var);
    doPacking(b,this->hops_var);
    b->pack(hnaMsg_arraysize);
    doPacking(b,this->hnaMsg_var,hnaMsg_arraysize);
}

void BatmanPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->version_var);
    doUnpacking(b,this->flags_var);
    doUnpacking(b,this->ttl_var);
    doUnpacking(b,this->gatewayFlags_var);
    doUnpacking(b,this->seqNumber_var);
    doUnpacking(b,this->gatewayPort_var);
    doUnpacking(b,this->orig_var);
    doUnpacking(b,this->prevSender_var);
    doUnpacking(b,this->tq_var);
    doUnpacking(b,this->hops_var);
    delete [] this->hnaMsg_var;
    b->unpack(hnaMsg_arraysize);
    if (hnaMsg_arraysize==0) {
        this->hnaMsg_var = 0;
    } else {
        this->hnaMsg_var = new HnaElement[hnaMsg_arraysize];
        doUnpacking(b,this->hnaMsg_var,hnaMsg_arraysize);
    }
}

uint8_t BatmanPacket::getVersion() const
{
    return version_var;
}

void BatmanPacket::setVersion(uint8_t version)
{
    this->version_var = version;
}

uint8_t BatmanPacket::getFlags() const
{
    return flags_var;
}

void BatmanPacket::setFlags(uint8_t flags)
{
    this->flags_var = flags;
}

uint8_t BatmanPacket::getTtl() const
{
    return ttl_var;
}

void BatmanPacket::setTtl(uint8_t ttl)
{
    this->ttl_var = ttl;
}

uint8_t BatmanPacket::getGatewayFlags() const
{
    return gatewayFlags_var;
}

void BatmanPacket::setGatewayFlags(uint8_t gatewayFlags)
{
    this->gatewayFlags_var = gatewayFlags;
}

unsigned short BatmanPacket::getSeqNumber() const
{
    return seqNumber_var;
}

void BatmanPacket::setSeqNumber(unsigned short seqNumber)
{
    this->seqNumber_var = seqNumber;
}

unsigned short BatmanPacket::getGatewayPort() const
{
    return gatewayPort_var;
}

void BatmanPacket::setGatewayPort(unsigned short gatewayPort)
{
    this->gatewayPort_var = gatewayPort;
}

L3Address& BatmanPacket::getOrig()
{
    return orig_var;
}

void BatmanPacket::setOrig(const L3Address& orig)
{
    this->orig_var = orig;
}

L3Address& BatmanPacket::getPrevSender()
{
    return prevSender_var;
}

void BatmanPacket::setPrevSender(const L3Address& prevSender)
{
    this->prevSender_var = prevSender;
}

uint8_t BatmanPacket::getTq() const
{
    return tq_var;
}

void BatmanPacket::setTq(uint8_t tq)
{
    this->tq_var = tq;
}

uint8_t BatmanPacket::getHops() const
{
    return hops_var;
}

void BatmanPacket::setHops(uint8_t hops)
{
    this->hops_var = hops;
}

void BatmanPacket::setHnaMsgArraySize(unsigned int size)
{
    HnaElement *hnaMsg_var2 = (size==0) ? NULL : new HnaElement[size];
    unsigned int sz = hnaMsg_arraysize < size ? hnaMsg_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        hnaMsg_var2[i] = this->hnaMsg_var[i];
    hnaMsg_arraysize = size;
    delete [] this->hnaMsg_var;
    this->hnaMsg_var = hnaMsg_var2;
}

unsigned int BatmanPacket::getHnaMsgArraySize() const
{
    return hnaMsg_arraysize;
}

HnaElement& BatmanPacket::getHnaMsg(unsigned int k)
{
    if (k>=hnaMsg_arraysize) throw cRuntimeError("Array of size %d indexed by %d", hnaMsg_arraysize, k);
    return hnaMsg_var[k];
}

void BatmanPacket::setHnaMsg(unsigned int k, const HnaElement& hnaMsg)
{
    if (k>=hnaMsg_arraysize) throw cRuntimeError("Array of size %d indexed by %d", hnaMsg_arraysize, k);
    this->hnaMsg_var[k] = hnaMsg;
}

class BatmanPacketDescriptor : public cClassDescriptor
{
  public:
    BatmanPacketDescriptor();
    virtual ~BatmanPacketDescriptor();

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

Register_ClassDescriptor(BatmanPacketDescriptor);

BatmanPacketDescriptor::BatmanPacketDescriptor() : cClassDescriptor("inet::inetmanet::BatmanPacket", "cPacket")
{
}

BatmanPacketDescriptor::~BatmanPacketDescriptor()
{
}

bool BatmanPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<BatmanPacket *>(obj)!=NULL;
}

const char *BatmanPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int BatmanPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 11+basedesc->getFieldCount(object) : 11;
}

unsigned int BatmanPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<11) ? fieldTypeFlags[field] : 0;
}

const char *BatmanPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "version",
        "flags",
        "ttl",
        "gatewayFlags",
        "seqNumber",
        "gatewayPort",
        "orig",
        "prevSender",
        "tq",
        "hops",
        "hnaMsg",
    };
    return (field>=0 && field<11) ? fieldNames[field] : NULL;
}

int BatmanPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "version")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "flags")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "ttl")==0) return base+2;
    if (fieldName[0]=='g' && strcmp(fieldName, "gatewayFlags")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNumber")==0) return base+4;
    if (fieldName[0]=='g' && strcmp(fieldName, "gatewayPort")==0) return base+5;
    if (fieldName[0]=='o' && strcmp(fieldName, "orig")==0) return base+6;
    if (fieldName[0]=='p' && strcmp(fieldName, "prevSender")==0) return base+7;
    if (fieldName[0]=='t' && strcmp(fieldName, "tq")==0) return base+8;
    if (fieldName[0]=='h' && strcmp(fieldName, "hops")==0) return base+9;
    if (fieldName[0]=='h' && strcmp(fieldName, "hnaMsg")==0) return base+10;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *BatmanPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
        "uint8_t",
        "uint8_t",
        "uint8_t",
        "unsigned short",
        "unsigned short",
        "L3Address",
        "L3Address",
        "uint8_t",
        "uint8_t",
        "HnaElement",
    };
    return (field>=0 && field<11) ? fieldTypeStrings[field] : NULL;
}

const char *BatmanPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int BatmanPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    BatmanPacket *pp = (BatmanPacket *)object; (void)pp;
    switch (field) {
        case 10: return pp->getHnaMsgArraySize();
        default: return 0;
    }
}

std::string BatmanPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    BatmanPacket *pp = (BatmanPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getVersion());
        case 1: return ulong2string(pp->getFlags());
        case 2: return ulong2string(pp->getTtl());
        case 3: return ulong2string(pp->getGatewayFlags());
        case 4: return ulong2string(pp->getSeqNumber());
        case 5: return ulong2string(pp->getGatewayPort());
        case 6: {std::stringstream out; out << pp->getOrig(); return out.str();}
        case 7: {std::stringstream out; out << pp->getPrevSender(); return out.str();}
        case 8: return ulong2string(pp->getTq());
        case 9: return ulong2string(pp->getHops());
        case 10: {std::stringstream out; out << pp->getHnaMsg(i); return out.str();}
        default: return "";
    }
}

bool BatmanPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    BatmanPacket *pp = (BatmanPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setVersion(string2ulong(value)); return true;
        case 1: pp->setFlags(string2ulong(value)); return true;
        case 2: pp->setTtl(string2ulong(value)); return true;
        case 3: pp->setGatewayFlags(string2ulong(value)); return true;
        case 4: pp->setSeqNumber(string2ulong(value)); return true;
        case 5: pp->setGatewayPort(string2ulong(value)); return true;
        case 8: pp->setTq(string2ulong(value)); return true;
        case 9: pp->setHops(string2ulong(value)); return true;
        default: return false;
    }
}

const char *BatmanPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 6: return opp_typename(typeid(L3Address));
        case 7: return opp_typename(typeid(L3Address));
        case 10: return opp_typename(typeid(HnaElement));
        default: return NULL;
    };
}

void *BatmanPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    BatmanPacket *pp = (BatmanPacket *)object; (void)pp;
    switch (field) {
        case 6: return (void *)(&pp->getOrig()); break;
        case 7: return (void *)(&pp->getPrevSender()); break;
        case 10: return (void *)(&pp->getHnaMsg(i)); break;
        default: return NULL;
    }
}

Register_Class(visPacket);

visPacket::visPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->version_var = 0;
    this->gwClass_var = 0;
    this->tqMax_var = 0;
    visData_arraysize = 0;
    this->visData_var = 0;
}

visPacket::visPacket(const visPacket& other) : ::cPacket(other)
{
    visData_arraysize = 0;
    this->visData_var = 0;
    copy(other);
}

visPacket::~visPacket()
{
    delete [] visData_var;
}

visPacket& visPacket::operator=(const visPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void visPacket::copy(const visPacket& other)
{
    this->senderIp_var = other.senderIp_var;
    this->version_var = other.version_var;
    this->gwClass_var = other.gwClass_var;
    this->tqMax_var = other.tqMax_var;
    delete [] this->visData_var;
    this->visData_var = (other.visData_arraysize==0) ? NULL : new vis_data[other.visData_arraysize];
    visData_arraysize = other.visData_arraysize;
    for (unsigned int i=0; i<visData_arraysize; i++)
        this->visData_var[i] = other.visData_var[i];
}

void visPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->senderIp_var);
    doPacking(b,this->version_var);
    doPacking(b,this->gwClass_var);
    doPacking(b,this->tqMax_var);
    b->pack(visData_arraysize);
    doPacking(b,this->visData_var,visData_arraysize);
}

void visPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->senderIp_var);
    doUnpacking(b,this->version_var);
    doUnpacking(b,this->gwClass_var);
    doUnpacking(b,this->tqMax_var);
    delete [] this->visData_var;
    b->unpack(visData_arraysize);
    if (visData_arraysize==0) {
        this->visData_var = 0;
    } else {
        this->visData_var = new vis_data[visData_arraysize];
        doUnpacking(b,this->visData_var,visData_arraysize);
    }
}

L3Address& visPacket::getSenderIp()
{
    return senderIp_var;
}

void visPacket::setSenderIp(const L3Address& senderIp)
{
    this->senderIp_var = senderIp;
}

unsigned char visPacket::getVersion() const
{
    return version_var;
}

void visPacket::setVersion(unsigned char version)
{
    this->version_var = version;
}

unsigned char visPacket::getGwClass() const
{
    return gwClass_var;
}

void visPacket::setGwClass(unsigned char gwClass)
{
    this->gwClass_var = gwClass;
}

unsigned char visPacket::getTqMax() const
{
    return tqMax_var;
}

void visPacket::setTqMax(unsigned char tqMax)
{
    this->tqMax_var = tqMax;
}

void visPacket::setVisDataArraySize(unsigned int size)
{
    vis_data *visData_var2 = (size==0) ? NULL : new vis_data[size];
    unsigned int sz = visData_arraysize < size ? visData_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        visData_var2[i] = this->visData_var[i];
    visData_arraysize = size;
    delete [] this->visData_var;
    this->visData_var = visData_var2;
}

unsigned int visPacket::getVisDataArraySize() const
{
    return visData_arraysize;
}

vis_data& visPacket::getVisData(unsigned int k)
{
    if (k>=visData_arraysize) throw cRuntimeError("Array of size %d indexed by %d", visData_arraysize, k);
    return visData_var[k];
}

void visPacket::setVisData(unsigned int k, const vis_data& visData)
{
    if (k>=visData_arraysize) throw cRuntimeError("Array of size %d indexed by %d", visData_arraysize, k);
    this->visData_var[k] = visData;
}

class visPacketDescriptor : public cClassDescriptor
{
  public:
    visPacketDescriptor();
    virtual ~visPacketDescriptor();

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

Register_ClassDescriptor(visPacketDescriptor);

visPacketDescriptor::visPacketDescriptor() : cClassDescriptor("inet::inetmanet::visPacket", "cPacket")
{
}

visPacketDescriptor::~visPacketDescriptor()
{
}

bool visPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<visPacket *>(obj)!=NULL;
}

const char *visPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int visPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int visPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *visPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "senderIp",
        "version",
        "gwClass",
        "tqMax",
        "visData",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int visPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderIp")==0) return base+0;
    if (fieldName[0]=='v' && strcmp(fieldName, "version")==0) return base+1;
    if (fieldName[0]=='g' && strcmp(fieldName, "gwClass")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "tqMax")==0) return base+3;
    if (fieldName[0]=='v' && strcmp(fieldName, "visData")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *visPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "L3Address",
        "unsigned char",
        "unsigned char",
        "unsigned char",
        "vis_data",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *visPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int visPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    visPacket *pp = (visPacket *)object; (void)pp;
    switch (field) {
        case 4: return pp->getVisDataArraySize();
        default: return 0;
    }
}

std::string visPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    visPacket *pp = (visPacket *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSenderIp(); return out.str();}
        case 1: return ulong2string(pp->getVersion());
        case 2: return ulong2string(pp->getGwClass());
        case 3: return ulong2string(pp->getTqMax());
        case 4: {std::stringstream out; out << pp->getVisData(i); return out.str();}
        default: return "";
    }
}

bool visPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    visPacket *pp = (visPacket *)object; (void)pp;
    switch (field) {
        case 1: pp->setVersion(string2ulong(value)); return true;
        case 2: pp->setGwClass(string2ulong(value)); return true;
        case 3: pp->setTqMax(string2ulong(value)); return true;
        default: return false;
    }
}

const char *visPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(L3Address));
        case 4: return opp_typename(typeid(vis_data));
        default: return NULL;
    };
}

void *visPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    visPacket *pp = (visPacket *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSenderIp()); break;
        case 4: return (void *)(&pp->getVisData(i)); break;
        default: return NULL;
    }
}

} // namespace inetmanet
} // namespace inet

