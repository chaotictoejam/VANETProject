//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transport/rtp/RTCPPacket1.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTCPPacket1_m.h"

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
    cEnum *e = cEnum::find("RTCPPacketType");
    if (!e) enums.getInstance()->add(e = new cEnum("RTCPPacketType"));
    e->insert(RTCP_PT_UNDEF, "RTCP_PT_UNDEF");
    e->insert(RTCP_PT_SR, "RTCP_PT_SR");
    e->insert(RTCP_PT_RR, "RTCP_PT_RR");
    e->insert(RTCP_PT_SDES, "RTCP_PT_SDES");
    e->insert(RTCP_PT_BYE, "RTCP_PT_BYE");
);

RTCPPacket_Base::RTCPPacket_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->setByteLength(4);

    this->version_var = 2;
    this->padding_var = 0;
    this->count_var = 0;
    this->packetType_var = RTCP_PT_UNDEF;
}

RTCPPacket_Base::RTCPPacket_Base(const RTCPPacket_Base& other) : ::cPacket(other)
{
    copy(other);
}

RTCPPacket_Base::~RTCPPacket_Base()
{
}

RTCPPacket_Base& RTCPPacket_Base::operator=(const RTCPPacket_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void RTCPPacket_Base::copy(const RTCPPacket_Base& other)
{
    this->version_var = other.version_var;
    this->padding_var = other.padding_var;
    this->count_var = other.count_var;
    this->packetType_var = other.packetType_var;
}

void RTCPPacket_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->version_var);
    doPacking(b,this->padding_var);
    doPacking(b,this->count_var);
    doPacking(b,this->packetType_var);
    // field rtcpLength is abstract -- please do packing in customized class
}

void RTCPPacket_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->version_var);
    doUnpacking(b,this->padding_var);
    doUnpacking(b,this->count_var);
    doUnpacking(b,this->packetType_var);
    // field rtcpLength is abstract -- please do unpacking in customized class
}

int8 RTCPPacket_Base::getVersion() const
{
    return version_var;
}

void RTCPPacket_Base::setVersion(int8 version)
{
    this->version_var = version;
}

bool RTCPPacket_Base::getPadding() const
{
    return padding_var;
}

void RTCPPacket_Base::setPadding(bool padding)
{
    this->padding_var = padding;
}

short RTCPPacket_Base::getCount() const
{
    return count_var;
}

void RTCPPacket_Base::setCount(short count)
{
    this->count_var = count;
}

short RTCPPacket_Base::getPacketType() const
{
    return packetType_var;
}

void RTCPPacket_Base::setPacketType(short packetType)
{
    this->packetType_var = packetType;
}

class RTCPPacketDescriptor : public cClassDescriptor
{
  public:
    RTCPPacketDescriptor();
    virtual ~RTCPPacketDescriptor();

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

Register_ClassDescriptor(RTCPPacketDescriptor);

RTCPPacketDescriptor::RTCPPacketDescriptor() : cClassDescriptor("RTCPPacket", "cPacket")
{
}

RTCPPacketDescriptor::~RTCPPacketDescriptor()
{
}

bool RTCPPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTCPPacket_Base *>(obj)!=NULL;
}

const char *RTCPPacketDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTCPPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int RTCPPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RTCPPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "version",
        "padding",
        "count",
        "packetType",
        "rtcpLength",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int RTCPPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='v' && strcmp(fieldName, "version")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "padding")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "count")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "rtcpLength")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTCPPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int8",
        "bool",
        "short",
        "short",
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *RTCPPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3:
            if (!strcmp(propertyname,"enum")) return "RTCPPacketType";
            return NULL;
        default: return NULL;
    }
}

int RTCPPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTCPPacket_Base *pp = (RTCPPacket_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTCPPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTCPPacket_Base *pp = (RTCPPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getVersion());
        case 1: return bool2string(pp->getPadding());
        case 2: return long2string(pp->getCount());
        case 3: return long2string(pp->getPacketType());
        case 4: return long2string(pp->getRtcpLength());
        default: return "";
    }
}

bool RTCPPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTCPPacket_Base *pp = (RTCPPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setVersion(string2long(value)); return true;
        case 1: pp->setPadding(string2bool(value)); return true;
        case 2: pp->setCount(string2long(value)); return true;
        case 3: pp->setPacketType(string2long(value)); return true;
        case 4: pp->setRtcpLength(string2long(value)); return true;
        default: return false;
    }
}

const char *RTCPPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *RTCPPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTCPPacket_Base *pp = (RTCPPacket_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

RTCPCompoundPacket_Base::RTCPCompoundPacket_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->setByteLength(0);

    take(&(this->rtcpPackets_var));
}

RTCPCompoundPacket_Base::RTCPCompoundPacket_Base(const RTCPCompoundPacket_Base& other) : ::cPacket(other)
{
    take(&(this->rtcpPackets_var));
    copy(other);
}

RTCPCompoundPacket_Base::~RTCPCompoundPacket_Base()
{
    drop(&(this->rtcpPackets_var));
}

RTCPCompoundPacket_Base& RTCPCompoundPacket_Base::operator=(const RTCPCompoundPacket_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void RTCPCompoundPacket_Base::copy(const RTCPCompoundPacket_Base& other)
{
    this->rtcpPackets_var = other.rtcpPackets_var;
    this->rtcpPackets_var.setName(other.rtcpPackets_var.getName());
}

void RTCPCompoundPacket_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->rtcpPackets_var);
}

void RTCPCompoundPacket_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->rtcpPackets_var);
}

cArray& RTCPCompoundPacket_Base::getRtcpPackets()
{
    return rtcpPackets_var;
}

void RTCPCompoundPacket_Base::setRtcpPackets(const cArray& rtcpPackets)
{
    this->rtcpPackets_var = rtcpPackets;
}

class RTCPCompoundPacketDescriptor : public cClassDescriptor
{
  public:
    RTCPCompoundPacketDescriptor();
    virtual ~RTCPCompoundPacketDescriptor();

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

Register_ClassDescriptor(RTCPCompoundPacketDescriptor);

RTCPCompoundPacketDescriptor::RTCPCompoundPacketDescriptor() : cClassDescriptor("RTCPCompoundPacket", "cPacket")
{
}

RTCPCompoundPacketDescriptor::~RTCPCompoundPacketDescriptor()
{
}

bool RTCPCompoundPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTCPCompoundPacket_Base *>(obj)!=NULL;
}

const char *RTCPCompoundPacketDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTCPCompoundPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RTCPCompoundPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND | FD_ISCOBJECT | FD_ISCOWNEDOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *RTCPCompoundPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "rtcpPackets",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RTCPCompoundPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "rtcpPackets")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTCPCompoundPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "cArray",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *RTCPCompoundPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTCPCompoundPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTCPCompoundPacket_Base *pp = (RTCPCompoundPacket_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTCPCompoundPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTCPCompoundPacket_Base *pp = (RTCPCompoundPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getRtcpPackets(); return out.str();}
        default: return "";
    }
}

bool RTCPCompoundPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTCPCompoundPacket_Base *pp = (RTCPCompoundPacket_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RTCPCompoundPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(cArray));
        default: return NULL;
    };
}

void *RTCPCompoundPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTCPCompoundPacket_Base *pp = (RTCPCompoundPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getRtcpPackets()); break;
        default: return NULL;
    }
}


