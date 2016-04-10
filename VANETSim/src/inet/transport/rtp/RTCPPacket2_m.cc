//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transport/rtp/RTCPPacket2.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTCPPacket2_m.h"

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

RTCPReceiverReportPacket_Base::RTCPReceiverReportPacket_Base(const char *name, int kind) : ::RTCPPacket(name,kind)
{
    this->setPacketType(RTCP_PT_RR);

    this->ssrc_var = 0;
    take(&(this->receptionReports_var));
}

RTCPReceiverReportPacket_Base::RTCPReceiverReportPacket_Base(const RTCPReceiverReportPacket_Base& other) : ::RTCPPacket(other)
{
    take(&(this->receptionReports_var));
    copy(other);
}

RTCPReceiverReportPacket_Base::~RTCPReceiverReportPacket_Base()
{
    drop(&(this->receptionReports_var));
}

RTCPReceiverReportPacket_Base& RTCPReceiverReportPacket_Base::operator=(const RTCPReceiverReportPacket_Base& other)
{
    if (this==&other) return *this;
    ::RTCPPacket::operator=(other);
    copy(other);
    return *this;
}

void RTCPReceiverReportPacket_Base::copy(const RTCPReceiverReportPacket_Base& other)
{
    this->ssrc_var = other.ssrc_var;
    this->receptionReports_var = other.receptionReports_var;
    this->receptionReports_var.setName(other.receptionReports_var.getName());
}

void RTCPReceiverReportPacket_Base::parsimPack(cCommBuffer *b)
{
    ::RTCPPacket::parsimPack(b);
    doPacking(b,this->ssrc_var);
    doPacking(b,this->receptionReports_var);
}

void RTCPReceiverReportPacket_Base::parsimUnpack(cCommBuffer *b)
{
    ::RTCPPacket::parsimUnpack(b);
    doUnpacking(b,this->ssrc_var);
    doUnpacking(b,this->receptionReports_var);
}

uint32 RTCPReceiverReportPacket_Base::getSsrc() const
{
    return ssrc_var;
}

void RTCPReceiverReportPacket_Base::setSsrc(uint32 ssrc)
{
    this->ssrc_var = ssrc;
}

cArray& RTCPReceiverReportPacket_Base::getReceptionReports()
{
    return receptionReports_var;
}

void RTCPReceiverReportPacket_Base::setReceptionReports(const cArray& receptionReports)
{
    this->receptionReports_var = receptionReports;
}

class RTCPReceiverReportPacketDescriptor : public cClassDescriptor
{
  public:
    RTCPReceiverReportPacketDescriptor();
    virtual ~RTCPReceiverReportPacketDescriptor();

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

Register_ClassDescriptor(RTCPReceiverReportPacketDescriptor);

RTCPReceiverReportPacketDescriptor::RTCPReceiverReportPacketDescriptor() : cClassDescriptor("RTCPReceiverReportPacket", "RTCPPacket")
{
}

RTCPReceiverReportPacketDescriptor::~RTCPReceiverReportPacketDescriptor()
{
}

bool RTCPReceiverReportPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTCPReceiverReportPacket_Base *>(obj)!=NULL;
}

const char *RTCPReceiverReportPacketDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTCPReceiverReportPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RTCPReceiverReportPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND | FD_ISCOBJECT | FD_ISCOWNEDOBJECT,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *RTCPReceiverReportPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ssrc",
        "receptionReports",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RTCPReceiverReportPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssrc")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "receptionReports")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTCPReceiverReportPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
        "cArray",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *RTCPReceiverReportPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTCPReceiverReportPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTCPReceiverReportPacket_Base *pp = (RTCPReceiverReportPacket_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTCPReceiverReportPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTCPReceiverReportPacket_Base *pp = (RTCPReceiverReportPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSsrc());
        case 1: {std::stringstream out; out << pp->getReceptionReports(); return out.str();}
        default: return "";
    }
}

bool RTCPReceiverReportPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTCPReceiverReportPacket_Base *pp = (RTCPReceiverReportPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSsrc(string2ulong(value)); return true;
        default: return false;
    }
}

const char *RTCPReceiverReportPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(cArray));
        default: return NULL;
    };
}

void *RTCPReceiverReportPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTCPReceiverReportPacket_Base *pp = (RTCPReceiverReportPacket_Base *)object; (void)pp;
    switch (field) {
        case 1: return (void *)static_cast<cObject *>(&pp->getReceptionReports()); break;
        default: return NULL;
    }
}

RTCPSDESPacket_Base::RTCPSDESPacket_Base(const char *name, int kind) : ::RTCPPacket(name,kind)
{
    this->setPacketType(RTCP_PT_SDES);

    take(&(this->sdesChunks_var));
}

RTCPSDESPacket_Base::RTCPSDESPacket_Base(const RTCPSDESPacket_Base& other) : ::RTCPPacket(other)
{
    take(&(this->sdesChunks_var));
    copy(other);
}

RTCPSDESPacket_Base::~RTCPSDESPacket_Base()
{
    drop(&(this->sdesChunks_var));
}

RTCPSDESPacket_Base& RTCPSDESPacket_Base::operator=(const RTCPSDESPacket_Base& other)
{
    if (this==&other) return *this;
    ::RTCPPacket::operator=(other);
    copy(other);
    return *this;
}

void RTCPSDESPacket_Base::copy(const RTCPSDESPacket_Base& other)
{
    this->sdesChunks_var = other.sdesChunks_var;
    this->sdesChunks_var.setName(other.sdesChunks_var.getName());
}

void RTCPSDESPacket_Base::parsimPack(cCommBuffer *b)
{
    ::RTCPPacket::parsimPack(b);
    doPacking(b,this->sdesChunks_var);
}

void RTCPSDESPacket_Base::parsimUnpack(cCommBuffer *b)
{
    ::RTCPPacket::parsimUnpack(b);
    doUnpacking(b,this->sdesChunks_var);
}

cArray& RTCPSDESPacket_Base::getSdesChunks()
{
    return sdesChunks_var;
}

void RTCPSDESPacket_Base::setSdesChunks(const cArray& sdesChunks)
{
    this->sdesChunks_var = sdesChunks;
}

class RTCPSDESPacketDescriptor : public cClassDescriptor
{
  public:
    RTCPSDESPacketDescriptor();
    virtual ~RTCPSDESPacketDescriptor();

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

Register_ClassDescriptor(RTCPSDESPacketDescriptor);

RTCPSDESPacketDescriptor::RTCPSDESPacketDescriptor() : cClassDescriptor("RTCPSDESPacket", "RTCPPacket")
{
}

RTCPSDESPacketDescriptor::~RTCPSDESPacketDescriptor()
{
}

bool RTCPSDESPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTCPSDESPacket_Base *>(obj)!=NULL;
}

const char *RTCPSDESPacketDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTCPSDESPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RTCPSDESPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RTCPSDESPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sdesChunks",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RTCPSDESPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sdesChunks")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTCPSDESPacketDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RTCPSDESPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTCPSDESPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTCPSDESPacket_Base *pp = (RTCPSDESPacket_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTCPSDESPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTCPSDESPacket_Base *pp = (RTCPSDESPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSdesChunks(); return out.str();}
        default: return "";
    }
}

bool RTCPSDESPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTCPSDESPacket_Base *pp = (RTCPSDESPacket_Base *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RTCPSDESPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *RTCPSDESPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTCPSDESPacket_Base *pp = (RTCPSDESPacket_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getSdesChunks()); break;
        default: return NULL;
    }
}

RTCPByePacket_Base::RTCPByePacket_Base(const char *name, int kind) : ::RTCPPacket(name,kind)
{
    this->setPacketType(RTCP_PT_BYE);
    this->setCount(1);

    this->ssrc_var = 0;
}

RTCPByePacket_Base::RTCPByePacket_Base(const RTCPByePacket_Base& other) : ::RTCPPacket(other)
{
    copy(other);
}

RTCPByePacket_Base::~RTCPByePacket_Base()
{
}

RTCPByePacket_Base& RTCPByePacket_Base::operator=(const RTCPByePacket_Base& other)
{
    if (this==&other) return *this;
    ::RTCPPacket::operator=(other);
    copy(other);
    return *this;
}

void RTCPByePacket_Base::copy(const RTCPByePacket_Base& other)
{
    this->ssrc_var = other.ssrc_var;
}

void RTCPByePacket_Base::parsimPack(cCommBuffer *b)
{
    ::RTCPPacket::parsimPack(b);
    doPacking(b,this->ssrc_var);
}

void RTCPByePacket_Base::parsimUnpack(cCommBuffer *b)
{
    ::RTCPPacket::parsimUnpack(b);
    doUnpacking(b,this->ssrc_var);
}

uint32 RTCPByePacket_Base::getSsrc() const
{
    return ssrc_var;
}

void RTCPByePacket_Base::setSsrc(uint32 ssrc)
{
    this->ssrc_var = ssrc;
}

class RTCPByePacketDescriptor : public cClassDescriptor
{
  public:
    RTCPByePacketDescriptor();
    virtual ~RTCPByePacketDescriptor();

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

Register_ClassDescriptor(RTCPByePacketDescriptor);

RTCPByePacketDescriptor::RTCPByePacketDescriptor() : cClassDescriptor("RTCPByePacket", "RTCPPacket")
{
}

RTCPByePacketDescriptor::~RTCPByePacketDescriptor()
{
}

bool RTCPByePacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTCPByePacket_Base *>(obj)!=NULL;
}

const char *RTCPByePacketDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTCPByePacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RTCPByePacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RTCPByePacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "ssrc",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RTCPByePacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssrc")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTCPByePacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *RTCPByePacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTCPByePacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTCPByePacket_Base *pp = (RTCPByePacket_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTCPByePacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTCPByePacket_Base *pp = (RTCPByePacket_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSsrc());
        default: return "";
    }
}

bool RTCPByePacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTCPByePacket_Base *pp = (RTCPByePacket_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSsrc(string2ulong(value)); return true;
        default: return false;
    }
}

const char *RTCPByePacketDescriptor::getFieldStructName(void *object, int field) const
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

void *RTCPByePacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTCPByePacket_Base *pp = (RTCPByePacket_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


