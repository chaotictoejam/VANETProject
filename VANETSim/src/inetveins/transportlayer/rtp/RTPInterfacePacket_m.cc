//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/transportlayer/rtp/RTPInterfacePacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RTPInterfacePacket_m.h"

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



namespace inetveins {
namespace rtp {

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
    cEnum *e = cEnum::find("inetveins::rtp::RTP_IFP_TYPE");
    if (!e) enums.getInstance()->add(e = new cEnum("inetveins::rtp::RTP_IFP_TYPE"));
    e->insert(RTP_IFP_ENTER_SESSION, "RTP_IFP_ENTER_SESSION");
    e->insert(RTP_IFP_SESSION_ENTERED, "RTP_IFP_SESSION_ENTERED");
    e->insert(RTP_IFP_CREATE_SENDER_MODULE, "RTP_IFP_CREATE_SENDER_MODULE");
    e->insert(RTP_IFP_SENDER_MODULE_CREATED, "RTP_IFP_SENDER_MODULE_CREATED");
    e->insert(RTP_IFP_DELETE_SENDER_MODULE, "RTP_IFP_DELETE_SENDER_MODULE");
    e->insert(RTP_IFP_SENDER_MODULE_DELETED, "RTP_IFP_SENDER_MODULE_DELETED");
    e->insert(RTP_IFP_SENDER_CONTROL, "RTP_IFP_SENDER_CONTROL");
    e->insert(RTP_IFP_SENDER_STATUS, "RTP_IFP_SENDER_STATUS");
    e->insert(RTP_IFP_LEAVE_SESSION, "RTP_IFP_LEAVE_SESSION");
    e->insert(RTP_IFP_SESSION_LEFT, "RTP_IFP_SESSION_LEFT");
);

Register_Class(RTPControlMsg);

RTPControlMsg::RTPControlMsg(const char *name, int kind) : ::cMessage(name,kind)
{
}

RTPControlMsg::RTPControlMsg(const RTPControlMsg& other) : ::cMessage(other)
{
    copy(other);
}

RTPControlMsg::~RTPControlMsg()
{
}

RTPControlMsg& RTPControlMsg::operator=(const RTPControlMsg& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void RTPControlMsg::copy(const RTPControlMsg& other)
{
}

void RTPControlMsg::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
}

void RTPControlMsg::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
}

class RTPControlMsgDescriptor : public cClassDescriptor
{
  public:
    RTPControlMsgDescriptor();
    virtual ~RTPControlMsgDescriptor();

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

Register_ClassDescriptor(RTPControlMsgDescriptor);

RTPControlMsgDescriptor::RTPControlMsgDescriptor() : cClassDescriptor("inetveins::rtp::RTPControlMsg", "cMessage")
{
}

RTPControlMsgDescriptor::~RTPControlMsgDescriptor()
{
}

bool RTPControlMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPControlMsg *>(obj)!=NULL;
}

const char *RTPControlMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPControlMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RTPControlMsgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RTPControlMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RTPControlMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPControlMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RTPControlMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPControlMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPControlMsg *pp = (RTPControlMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPControlMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPControlMsg *pp = (RTPControlMsg *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RTPControlMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPControlMsg *pp = (RTPControlMsg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RTPControlMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RTPControlMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPControlMsg *pp = (RTPControlMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPControlInfo);

RTPControlInfo::RTPControlInfo() : ::cObject()
{
    this->type_var = 0;
}

RTPControlInfo::RTPControlInfo(const RTPControlInfo& other) : ::cObject(other)
{
    copy(other);
}

RTPControlInfo::~RTPControlInfo()
{
}

RTPControlInfo& RTPControlInfo::operator=(const RTPControlInfo& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void RTPControlInfo::copy(const RTPControlInfo& other)
{
    this->type_var = other.type_var;
}

void RTPControlInfo::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->type_var);
}

void RTPControlInfo::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->type_var);
}

short RTPControlInfo::getType() const
{
    return type_var;
}

void RTPControlInfo::setType(short type)
{
    this->type_var = type;
}

class RTPControlInfoDescriptor : public cClassDescriptor
{
  public:
    RTPControlInfoDescriptor();
    virtual ~RTPControlInfoDescriptor();

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

Register_ClassDescriptor(RTPControlInfoDescriptor);

RTPControlInfoDescriptor::RTPControlInfoDescriptor() : cClassDescriptor("inetveins::rtp::RTPControlInfo", "cObject")
{
}

RTPControlInfoDescriptor::~RTPControlInfoDescriptor()
{
}

bool RTPControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPControlInfo *>(obj)!=NULL;
}

const char *RTPControlInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RTPControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RTPControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RTPControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *RTPControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inetveins::rtp::RTP_IFP_TYPE";
            return NULL;
        default: return NULL;
    }
}

int RTPControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPControlInfo *pp = (RTPControlInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPControlInfo *pp = (RTPControlInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        default: return "";
    }
}

bool RTPControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPControlInfo *pp = (RTPControlInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *RTPControlInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *RTPControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPControlInfo *pp = (RTPControlInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPSessionControlInfo);

RTPSessionControlInfo::RTPSessionControlInfo() : ::inetveins::rtp::RTPControlInfo()
{
    this->ssrc_var = 0;
}

RTPSessionControlInfo::RTPSessionControlInfo(const RTPSessionControlInfo& other) : ::inetveins::rtp::RTPControlInfo(other)
{
    copy(other);
}

RTPSessionControlInfo::~RTPSessionControlInfo()
{
}

RTPSessionControlInfo& RTPSessionControlInfo::operator=(const RTPSessionControlInfo& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPSessionControlInfo::copy(const RTPSessionControlInfo& other)
{
    this->ssrc_var = other.ssrc_var;
}

void RTPSessionControlInfo::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPControlInfo::parsimPack(b);
    doPacking(b,this->ssrc_var);
}

void RTPSessionControlInfo::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPControlInfo::parsimUnpack(b);
    doUnpacking(b,this->ssrc_var);
}

uint32 RTPSessionControlInfo::getSsrc() const
{
    return ssrc_var;
}

void RTPSessionControlInfo::setSsrc(uint32 ssrc)
{
    this->ssrc_var = ssrc;
}

class RTPSessionControlInfoDescriptor : public cClassDescriptor
{
  public:
    RTPSessionControlInfoDescriptor();
    virtual ~RTPSessionControlInfoDescriptor();

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

Register_ClassDescriptor(RTPSessionControlInfoDescriptor);

RTPSessionControlInfoDescriptor::RTPSessionControlInfoDescriptor() : cClassDescriptor("inetveins::rtp::RTPSessionControlInfo", "inetveins::rtp::RTPControlInfo")
{
}

RTPSessionControlInfoDescriptor::~RTPSessionControlInfoDescriptor()
{
}

bool RTPSessionControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPSessionControlInfo *>(obj)!=NULL;
}

const char *RTPSessionControlInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPSessionControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RTPSessionControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RTPSessionControlInfoDescriptor::getFieldName(void *object, int field) const
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

int RTPSessionControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "ssrc")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPSessionControlInfoDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RTPSessionControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPSessionControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPSessionControlInfo *pp = (RTPSessionControlInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPSessionControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPSessionControlInfo *pp = (RTPSessionControlInfo *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSsrc());
        default: return "";
    }
}

bool RTPSessionControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPSessionControlInfo *pp = (RTPSessionControlInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setSsrc(string2ulong(value)); return true;
        default: return false;
    }
}

const char *RTPSessionControlInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *RTPSessionControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPSessionControlInfo *pp = (RTPSessionControlInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPCIEnterSession);

RTPCIEnterSession::RTPCIEnterSession() : ::inetveins::rtp::RTPControlInfo()
{
    this->setType(RTP_IFP_ENTER_SESSION);

    this->commonName_var = 0;
    this->profileName_var = 0;
    this->bandwidth_var = 0;
    this->port_var = 0;
}

RTPCIEnterSession::RTPCIEnterSession(const RTPCIEnterSession& other) : ::inetveins::rtp::RTPControlInfo(other)
{
    copy(other);
}

RTPCIEnterSession::~RTPCIEnterSession()
{
}

RTPCIEnterSession& RTPCIEnterSession::operator=(const RTPCIEnterSession& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPCIEnterSession::copy(const RTPCIEnterSession& other)
{
    this->commonName_var = other.commonName_var;
    this->profileName_var = other.profileName_var;
    this->bandwidth_var = other.bandwidth_var;
    this->destinationAddress_var = other.destinationAddress_var;
    this->port_var = other.port_var;
}

void RTPCIEnterSession::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPControlInfo::parsimPack(b);
    doPacking(b,this->commonName_var);
    doPacking(b,this->profileName_var);
    doPacking(b,this->bandwidth_var);
    doPacking(b,this->destinationAddress_var);
    doPacking(b,this->port_var);
}

void RTPCIEnterSession::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPControlInfo::parsimUnpack(b);
    doUnpacking(b,this->commonName_var);
    doUnpacking(b,this->profileName_var);
    doUnpacking(b,this->bandwidth_var);
    doUnpacking(b,this->destinationAddress_var);
    doUnpacking(b,this->port_var);
}

const char * RTPCIEnterSession::getCommonName() const
{
    return commonName_var.c_str();
}

void RTPCIEnterSession::setCommonName(const char * commonName)
{
    this->commonName_var = commonName;
}

const char * RTPCIEnterSession::getProfileName() const
{
    return profileName_var.c_str();
}

void RTPCIEnterSession::setProfileName(const char * profileName)
{
    this->profileName_var = profileName;
}

int RTPCIEnterSession::getBandwidth() const
{
    return bandwidth_var;
}

void RTPCIEnterSession::setBandwidth(int bandwidth)
{
    this->bandwidth_var = bandwidth;
}

IPv4Address& RTPCIEnterSession::getDestinationAddress()
{
    return destinationAddress_var;
}

void RTPCIEnterSession::setDestinationAddress(const IPv4Address& destinationAddress)
{
    this->destinationAddress_var = destinationAddress;
}

int RTPCIEnterSession::getPort() const
{
    return port_var;
}

void RTPCIEnterSession::setPort(int port)
{
    this->port_var = port;
}

class RTPCIEnterSessionDescriptor : public cClassDescriptor
{
  public:
    RTPCIEnterSessionDescriptor();
    virtual ~RTPCIEnterSessionDescriptor();

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

Register_ClassDescriptor(RTPCIEnterSessionDescriptor);

RTPCIEnterSessionDescriptor::RTPCIEnterSessionDescriptor() : cClassDescriptor("inetveins::rtp::RTPCIEnterSession", "inetveins::rtp::RTPControlInfo")
{
}

RTPCIEnterSessionDescriptor::~RTPCIEnterSessionDescriptor()
{
}

bool RTPCIEnterSessionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPCIEnterSession *>(obj)!=NULL;
}

const char *RTPCIEnterSessionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPCIEnterSessionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int RTPCIEnterSessionDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *RTPCIEnterSessionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "commonName",
        "profileName",
        "bandwidth",
        "destinationAddress",
        "port",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int RTPCIEnterSessionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "commonName")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "profileName")==0) return base+1;
    if (fieldName[0]=='b' && strcmp(fieldName, "bandwidth")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationAddress")==0) return base+3;
    if (fieldName[0]=='p' && strcmp(fieldName, "port")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPCIEnterSessionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "string",
        "int",
        "IPv4Address",
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *RTPCIEnterSessionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPCIEnterSessionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPCIEnterSession *pp = (RTPCIEnterSession *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPCIEnterSessionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCIEnterSession *pp = (RTPCIEnterSession *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->getCommonName());
        case 1: return oppstring2string(pp->getProfileName());
        case 2: return long2string(pp->getBandwidth());
        case 3: {std::stringstream out; out << pp->getDestinationAddress(); return out.str();}
        case 4: return long2string(pp->getPort());
        default: return "";
    }
}

bool RTPCIEnterSessionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPCIEnterSession *pp = (RTPCIEnterSession *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommonName((value)); return true;
        case 1: pp->setProfileName((value)); return true;
        case 2: pp->setBandwidth(string2long(value)); return true;
        case 4: pp->setPort(string2long(value)); return true;
        default: return false;
    }
}

const char *RTPCIEnterSessionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *RTPCIEnterSessionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCIEnterSession *pp = (RTPCIEnterSession *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getDestinationAddress()); break;
        default: return NULL;
    }
}

Register_Class(RTPCISessionEntered);

RTPCISessionEntered::RTPCISessionEntered() : ::inetveins::rtp::RTPSessionControlInfo()
{
    this->setType(RTP_IFP_SESSION_ENTERED);
}

RTPCISessionEntered::RTPCISessionEntered(const RTPCISessionEntered& other) : ::inetveins::rtp::RTPSessionControlInfo(other)
{
    copy(other);
}

RTPCISessionEntered::~RTPCISessionEntered()
{
}

RTPCISessionEntered& RTPCISessionEntered::operator=(const RTPCISessionEntered& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPSessionControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPCISessionEntered::copy(const RTPCISessionEntered& other)
{
}

void RTPCISessionEntered::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimPack(b);
}

void RTPCISessionEntered::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimUnpack(b);
}

class RTPCISessionEnteredDescriptor : public cClassDescriptor
{
  public:
    RTPCISessionEnteredDescriptor();
    virtual ~RTPCISessionEnteredDescriptor();

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

Register_ClassDescriptor(RTPCISessionEnteredDescriptor);

RTPCISessionEnteredDescriptor::RTPCISessionEnteredDescriptor() : cClassDescriptor("inetveins::rtp::RTPCISessionEntered", "inetveins::rtp::RTPSessionControlInfo")
{
}

RTPCISessionEnteredDescriptor::~RTPCISessionEnteredDescriptor()
{
}

bool RTPCISessionEnteredDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPCISessionEntered *>(obj)!=NULL;
}

const char *RTPCISessionEnteredDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPCISessionEnteredDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RTPCISessionEnteredDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RTPCISessionEnteredDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RTPCISessionEnteredDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPCISessionEnteredDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RTPCISessionEnteredDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPCISessionEnteredDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISessionEntered *pp = (RTPCISessionEntered *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPCISessionEnteredDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISessionEntered *pp = (RTPCISessionEntered *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RTPCISessionEnteredDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISessionEntered *pp = (RTPCISessionEntered *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RTPCISessionEnteredDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RTPCISessionEnteredDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISessionEntered *pp = (RTPCISessionEntered *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPCISenderControl);

RTPCISenderControl::RTPCISenderControl() : ::inetveins::rtp::RTPSessionControlInfo()
{
    this->setType(RTP_IFP_SENDER_CONTROL);

    this->command_var = 0;
    this->commandParameter1_var = 0;
    this->commandParameter2_var = 0;
}

RTPCISenderControl::RTPCISenderControl(const RTPCISenderControl& other) : ::inetveins::rtp::RTPSessionControlInfo(other)
{
    copy(other);
}

RTPCISenderControl::~RTPCISenderControl()
{
}

RTPCISenderControl& RTPCISenderControl::operator=(const RTPCISenderControl& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPSessionControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPCISenderControl::copy(const RTPCISenderControl& other)
{
    this->command_var = other.command_var;
    this->commandParameter1_var = other.commandParameter1_var;
    this->commandParameter2_var = other.commandParameter2_var;
}

void RTPCISenderControl::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimPack(b);
    doPacking(b,this->command_var);
    doPacking(b,this->commandParameter1_var);
    doPacking(b,this->commandParameter2_var);
}

void RTPCISenderControl::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimUnpack(b);
    doUnpacking(b,this->command_var);
    doUnpacking(b,this->commandParameter1_var);
    doUnpacking(b,this->commandParameter2_var);
}

short RTPCISenderControl::getCommand() const
{
    return command_var;
}

void RTPCISenderControl::setCommand(short command)
{
    this->command_var = command;
}

float RTPCISenderControl::getCommandParameter1() const
{
    return commandParameter1_var;
}

void RTPCISenderControl::setCommandParameter1(float commandParameter1)
{
    this->commandParameter1_var = commandParameter1;
}

float RTPCISenderControl::getCommandParameter2() const
{
    return commandParameter2_var;
}

void RTPCISenderControl::setCommandParameter2(float commandParameter2)
{
    this->commandParameter2_var = commandParameter2;
}

class RTPCISenderControlDescriptor : public cClassDescriptor
{
  public:
    RTPCISenderControlDescriptor();
    virtual ~RTPCISenderControlDescriptor();

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

Register_ClassDescriptor(RTPCISenderControlDescriptor);

RTPCISenderControlDescriptor::RTPCISenderControlDescriptor() : cClassDescriptor("inetveins::rtp::RTPCISenderControl", "inetveins::rtp::RTPSessionControlInfo")
{
}

RTPCISenderControlDescriptor::~RTPCISenderControlDescriptor()
{
}

bool RTPCISenderControlDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPCISenderControl *>(obj)!=NULL;
}

const char *RTPCISenderControlDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPCISenderControlDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int RTPCISenderControlDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *RTPCISenderControlDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "command",
        "commandParameter1",
        "commandParameter2",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int RTPCISenderControlDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "commandParameter1")==0) return base+1;
    if (fieldName[0]=='c' && strcmp(fieldName, "commandParameter2")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPCISenderControlDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "float",
        "float",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *RTPCISenderControlDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inetveins::rtp::RTPSenderControlMessageCommands";
            return NULL;
        default: return NULL;
    }
}

int RTPCISenderControlDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderControl *pp = (RTPCISenderControl *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPCISenderControlDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderControl *pp = (RTPCISenderControl *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCommand());
        case 1: return double2string(pp->getCommandParameter1());
        case 2: return double2string(pp->getCommandParameter2());
        default: return "";
    }
}

bool RTPCISenderControlDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderControl *pp = (RTPCISenderControl *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2long(value)); return true;
        case 1: pp->setCommandParameter1(string2double(value)); return true;
        case 2: pp->setCommandParameter2(string2double(value)); return true;
        default: return false;
    }
}

const char *RTPCISenderControlDescriptor::getFieldStructName(void *object, int field) const
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

void *RTPCISenderControlDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderControl *pp = (RTPCISenderControl *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPCISenderStatus);

RTPCISenderStatus::RTPCISenderStatus() : ::inetveins::rtp::RTPSessionControlInfo()
{
    this->setType(RTP_IFP_SENDER_STATUS);

    this->status_var = 0;
    this->timeStamp_var = 0;
}

RTPCISenderStatus::RTPCISenderStatus(const RTPCISenderStatus& other) : ::inetveins::rtp::RTPSessionControlInfo(other)
{
    copy(other);
}

RTPCISenderStatus::~RTPCISenderStatus()
{
}

RTPCISenderStatus& RTPCISenderStatus::operator=(const RTPCISenderStatus& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPSessionControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPCISenderStatus::copy(const RTPCISenderStatus& other)
{
    this->status_var = other.status_var;
    this->timeStamp_var = other.timeStamp_var;
}

void RTPCISenderStatus::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimPack(b);
    doPacking(b,this->status_var);
    doPacking(b,this->timeStamp_var);
}

void RTPCISenderStatus::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimUnpack(b);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->timeStamp_var);
}

short RTPCISenderStatus::getStatus() const
{
    return status_var;
}

void RTPCISenderStatus::setStatus(short status)
{
    this->status_var = status;
}

uint32 RTPCISenderStatus::getTimeStamp() const
{
    return timeStamp_var;
}

void RTPCISenderStatus::setTimeStamp(uint32 timeStamp)
{
    this->timeStamp_var = timeStamp;
}

class RTPCISenderStatusDescriptor : public cClassDescriptor
{
  public:
    RTPCISenderStatusDescriptor();
    virtual ~RTPCISenderStatusDescriptor();

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

Register_ClassDescriptor(RTPCISenderStatusDescriptor);

RTPCISenderStatusDescriptor::RTPCISenderStatusDescriptor() : cClassDescriptor("inetveins::rtp::RTPCISenderStatus", "inetveins::rtp::RTPSessionControlInfo")
{
}

RTPCISenderStatusDescriptor::~RTPCISenderStatusDescriptor()
{
}

bool RTPCISenderStatusDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPCISenderStatus *>(obj)!=NULL;
}

const char *RTPCISenderStatusDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPCISenderStatusDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RTPCISenderStatusDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RTPCISenderStatusDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "status",
        "timeStamp",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RTPCISenderStatusDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "status")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "timeStamp")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPCISenderStatusDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "uint32",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *RTPCISenderStatusDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inetveins::rtp::RTPSenderStatus";
            return NULL;
        default: return NULL;
    }
}

int RTPCISenderStatusDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderStatus *pp = (RTPCISenderStatus *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPCISenderStatusDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderStatus *pp = (RTPCISenderStatus *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getStatus());
        case 1: return ulong2string(pp->getTimeStamp());
        default: return "";
    }
}

bool RTPCISenderStatusDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderStatus *pp = (RTPCISenderStatus *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus(string2long(value)); return true;
        case 1: pp->setTimeStamp(string2ulong(value)); return true;
        default: return false;
    }
}

const char *RTPCISenderStatusDescriptor::getFieldStructName(void *object, int field) const
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

void *RTPCISenderStatusDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderStatus *pp = (RTPCISenderStatus *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPCILeaveSession);

RTPCILeaveSession::RTPCILeaveSession() : ::inetveins::rtp::RTPControlInfo()
{
    this->setType(RTP_IFP_LEAVE_SESSION);
}

RTPCILeaveSession::RTPCILeaveSession(const RTPCILeaveSession& other) : ::inetveins::rtp::RTPControlInfo(other)
{
    copy(other);
}

RTPCILeaveSession::~RTPCILeaveSession()
{
}

RTPCILeaveSession& RTPCILeaveSession::operator=(const RTPCILeaveSession& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPCILeaveSession::copy(const RTPCILeaveSession& other)
{
}

void RTPCILeaveSession::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPControlInfo::parsimPack(b);
}

void RTPCILeaveSession::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPControlInfo::parsimUnpack(b);
}

class RTPCILeaveSessionDescriptor : public cClassDescriptor
{
  public:
    RTPCILeaveSessionDescriptor();
    virtual ~RTPCILeaveSessionDescriptor();

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

Register_ClassDescriptor(RTPCILeaveSessionDescriptor);

RTPCILeaveSessionDescriptor::RTPCILeaveSessionDescriptor() : cClassDescriptor("inetveins::rtp::RTPCILeaveSession", "inetveins::rtp::RTPControlInfo")
{
}

RTPCILeaveSessionDescriptor::~RTPCILeaveSessionDescriptor()
{
}

bool RTPCILeaveSessionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPCILeaveSession *>(obj)!=NULL;
}

const char *RTPCILeaveSessionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPCILeaveSessionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RTPCILeaveSessionDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RTPCILeaveSessionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RTPCILeaveSessionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPCILeaveSessionDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RTPCILeaveSessionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPCILeaveSessionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPCILeaveSession *pp = (RTPCILeaveSession *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPCILeaveSessionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCILeaveSession *pp = (RTPCILeaveSession *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RTPCILeaveSessionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPCILeaveSession *pp = (RTPCILeaveSession *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RTPCILeaveSessionDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RTPCILeaveSessionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCILeaveSession *pp = (RTPCILeaveSession *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPCISessionLeft);

RTPCISessionLeft::RTPCISessionLeft() : ::inetveins::rtp::RTPControlInfo()
{
    this->setType(RTP_IFP_SESSION_LEFT);
}

RTPCISessionLeft::RTPCISessionLeft(const RTPCISessionLeft& other) : ::inetveins::rtp::RTPControlInfo(other)
{
    copy(other);
}

RTPCISessionLeft::~RTPCISessionLeft()
{
}

RTPCISessionLeft& RTPCISessionLeft::operator=(const RTPCISessionLeft& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPCISessionLeft::copy(const RTPCISessionLeft& other)
{
}

void RTPCISessionLeft::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPControlInfo::parsimPack(b);
}

void RTPCISessionLeft::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPControlInfo::parsimUnpack(b);
}

class RTPCISessionLeftDescriptor : public cClassDescriptor
{
  public:
    RTPCISessionLeftDescriptor();
    virtual ~RTPCISessionLeftDescriptor();

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

Register_ClassDescriptor(RTPCISessionLeftDescriptor);

RTPCISessionLeftDescriptor::RTPCISessionLeftDescriptor() : cClassDescriptor("inetveins::rtp::RTPCISessionLeft", "inetveins::rtp::RTPControlInfo")
{
}

RTPCISessionLeftDescriptor::~RTPCISessionLeftDescriptor()
{
}

bool RTPCISessionLeftDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPCISessionLeft *>(obj)!=NULL;
}

const char *RTPCISessionLeftDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPCISessionLeftDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RTPCISessionLeftDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RTPCISessionLeftDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RTPCISessionLeftDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPCISessionLeftDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RTPCISessionLeftDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPCISessionLeftDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISessionLeft *pp = (RTPCISessionLeft *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPCISessionLeftDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISessionLeft *pp = (RTPCISessionLeft *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RTPCISessionLeftDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISessionLeft *pp = (RTPCISessionLeft *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RTPCISessionLeftDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RTPCISessionLeftDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISessionLeft *pp = (RTPCISessionLeft *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPCICreateSenderModule);

RTPCICreateSenderModule::RTPCICreateSenderModule() : ::inetveins::rtp::RTPSessionControlInfo()
{
    this->setType(RTP_IFP_CREATE_SENDER_MODULE);

    this->payloadType_var = 0;
    this->fileName_var = 0;
}

RTPCICreateSenderModule::RTPCICreateSenderModule(const RTPCICreateSenderModule& other) : ::inetveins::rtp::RTPSessionControlInfo(other)
{
    copy(other);
}

RTPCICreateSenderModule::~RTPCICreateSenderModule()
{
}

RTPCICreateSenderModule& RTPCICreateSenderModule::operator=(const RTPCICreateSenderModule& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPSessionControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPCICreateSenderModule::copy(const RTPCICreateSenderModule& other)
{
    this->payloadType_var = other.payloadType_var;
    this->fileName_var = other.fileName_var;
}

void RTPCICreateSenderModule::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimPack(b);
    doPacking(b,this->payloadType_var);
    doPacking(b,this->fileName_var);
}

void RTPCICreateSenderModule::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimUnpack(b);
    doUnpacking(b,this->payloadType_var);
    doUnpacking(b,this->fileName_var);
}

int RTPCICreateSenderModule::getPayloadType() const
{
    return payloadType_var;
}

void RTPCICreateSenderModule::setPayloadType(int payloadType)
{
    this->payloadType_var = payloadType;
}

const char * RTPCICreateSenderModule::getFileName() const
{
    return fileName_var.c_str();
}

void RTPCICreateSenderModule::setFileName(const char * fileName)
{
    this->fileName_var = fileName;
}

class RTPCICreateSenderModuleDescriptor : public cClassDescriptor
{
  public:
    RTPCICreateSenderModuleDescriptor();
    virtual ~RTPCICreateSenderModuleDescriptor();

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

Register_ClassDescriptor(RTPCICreateSenderModuleDescriptor);

RTPCICreateSenderModuleDescriptor::RTPCICreateSenderModuleDescriptor() : cClassDescriptor("inetveins::rtp::RTPCICreateSenderModule", "inetveins::rtp::RTPSessionControlInfo")
{
}

RTPCICreateSenderModuleDescriptor::~RTPCICreateSenderModuleDescriptor()
{
}

bool RTPCICreateSenderModuleDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPCICreateSenderModule *>(obj)!=NULL;
}

const char *RTPCICreateSenderModuleDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPCICreateSenderModuleDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RTPCICreateSenderModuleDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RTPCICreateSenderModuleDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "payloadType",
        "fileName",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RTPCICreateSenderModuleDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "payloadType")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "fileName")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPCICreateSenderModuleDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *RTPCICreateSenderModuleDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPCICreateSenderModuleDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPCICreateSenderModule *pp = (RTPCICreateSenderModule *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPCICreateSenderModuleDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCICreateSenderModule *pp = (RTPCICreateSenderModule *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPayloadType());
        case 1: return oppstring2string(pp->getFileName());
        default: return "";
    }
}

bool RTPCICreateSenderModuleDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPCICreateSenderModule *pp = (RTPCICreateSenderModule *)object; (void)pp;
    switch (field) {
        case 0: pp->setPayloadType(string2long(value)); return true;
        case 1: pp->setFileName((value)); return true;
        default: return false;
    }
}

const char *RTPCICreateSenderModuleDescriptor::getFieldStructName(void *object, int field) const
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

void *RTPCICreateSenderModuleDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCICreateSenderModule *pp = (RTPCICreateSenderModule *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPCISenderModuleCreated);

RTPCISenderModuleCreated::RTPCISenderModuleCreated() : ::inetveins::rtp::RTPSessionControlInfo()
{
    this->setType(RTP_IFP_SENDER_MODULE_CREATED);
}

RTPCISenderModuleCreated::RTPCISenderModuleCreated(const RTPCISenderModuleCreated& other) : ::inetveins::rtp::RTPSessionControlInfo(other)
{
    copy(other);
}

RTPCISenderModuleCreated::~RTPCISenderModuleCreated()
{
}

RTPCISenderModuleCreated& RTPCISenderModuleCreated::operator=(const RTPCISenderModuleCreated& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPSessionControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPCISenderModuleCreated::copy(const RTPCISenderModuleCreated& other)
{
}

void RTPCISenderModuleCreated::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimPack(b);
}

void RTPCISenderModuleCreated::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimUnpack(b);
}

class RTPCISenderModuleCreatedDescriptor : public cClassDescriptor
{
  public:
    RTPCISenderModuleCreatedDescriptor();
    virtual ~RTPCISenderModuleCreatedDescriptor();

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

Register_ClassDescriptor(RTPCISenderModuleCreatedDescriptor);

RTPCISenderModuleCreatedDescriptor::RTPCISenderModuleCreatedDescriptor() : cClassDescriptor("inetveins::rtp::RTPCISenderModuleCreated", "inetveins::rtp::RTPSessionControlInfo")
{
}

RTPCISenderModuleCreatedDescriptor::~RTPCISenderModuleCreatedDescriptor()
{
}

bool RTPCISenderModuleCreatedDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPCISenderModuleCreated *>(obj)!=NULL;
}

const char *RTPCISenderModuleCreatedDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPCISenderModuleCreatedDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RTPCISenderModuleCreatedDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RTPCISenderModuleCreatedDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RTPCISenderModuleCreatedDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPCISenderModuleCreatedDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RTPCISenderModuleCreatedDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPCISenderModuleCreatedDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderModuleCreated *pp = (RTPCISenderModuleCreated *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPCISenderModuleCreatedDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderModuleCreated *pp = (RTPCISenderModuleCreated *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RTPCISenderModuleCreatedDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderModuleCreated *pp = (RTPCISenderModuleCreated *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RTPCISenderModuleCreatedDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RTPCISenderModuleCreatedDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderModuleCreated *pp = (RTPCISenderModuleCreated *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPCIDeleteSenderModule);

RTPCIDeleteSenderModule::RTPCIDeleteSenderModule() : ::inetveins::rtp::RTPSessionControlInfo()
{
    this->setType(RTP_IFP_DELETE_SENDER_MODULE);
}

RTPCIDeleteSenderModule::RTPCIDeleteSenderModule(const RTPCIDeleteSenderModule& other) : ::inetveins::rtp::RTPSessionControlInfo(other)
{
    copy(other);
}

RTPCIDeleteSenderModule::~RTPCIDeleteSenderModule()
{
}

RTPCIDeleteSenderModule& RTPCIDeleteSenderModule::operator=(const RTPCIDeleteSenderModule& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPSessionControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPCIDeleteSenderModule::copy(const RTPCIDeleteSenderModule& other)
{
}

void RTPCIDeleteSenderModule::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimPack(b);
}

void RTPCIDeleteSenderModule::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimUnpack(b);
}

class RTPCIDeleteSenderModuleDescriptor : public cClassDescriptor
{
  public:
    RTPCIDeleteSenderModuleDescriptor();
    virtual ~RTPCIDeleteSenderModuleDescriptor();

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

Register_ClassDescriptor(RTPCIDeleteSenderModuleDescriptor);

RTPCIDeleteSenderModuleDescriptor::RTPCIDeleteSenderModuleDescriptor() : cClassDescriptor("inetveins::rtp::RTPCIDeleteSenderModule", "inetveins::rtp::RTPSessionControlInfo")
{
}

RTPCIDeleteSenderModuleDescriptor::~RTPCIDeleteSenderModuleDescriptor()
{
}

bool RTPCIDeleteSenderModuleDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPCIDeleteSenderModule *>(obj)!=NULL;
}

const char *RTPCIDeleteSenderModuleDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPCIDeleteSenderModuleDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RTPCIDeleteSenderModuleDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RTPCIDeleteSenderModuleDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RTPCIDeleteSenderModuleDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPCIDeleteSenderModuleDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RTPCIDeleteSenderModuleDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPCIDeleteSenderModuleDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPCIDeleteSenderModule *pp = (RTPCIDeleteSenderModule *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPCIDeleteSenderModuleDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCIDeleteSenderModule *pp = (RTPCIDeleteSenderModule *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RTPCIDeleteSenderModuleDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPCIDeleteSenderModule *pp = (RTPCIDeleteSenderModule *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RTPCIDeleteSenderModuleDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RTPCIDeleteSenderModuleDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCIDeleteSenderModule *pp = (RTPCIDeleteSenderModule *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(RTPCISenderModuleDeleted);

RTPCISenderModuleDeleted::RTPCISenderModuleDeleted() : ::inetveins::rtp::RTPSessionControlInfo()
{
    this->setType(RTP_IFP_SENDER_MODULE_DELETED);
}

RTPCISenderModuleDeleted::RTPCISenderModuleDeleted(const RTPCISenderModuleDeleted& other) : ::inetveins::rtp::RTPSessionControlInfo(other)
{
    copy(other);
}

RTPCISenderModuleDeleted::~RTPCISenderModuleDeleted()
{
}

RTPCISenderModuleDeleted& RTPCISenderModuleDeleted::operator=(const RTPCISenderModuleDeleted& other)
{
    if (this==&other) return *this;
    ::inetveins::rtp::RTPSessionControlInfo::operator=(other);
    copy(other);
    return *this;
}

void RTPCISenderModuleDeleted::copy(const RTPCISenderModuleDeleted& other)
{
}

void RTPCISenderModuleDeleted::parsimPack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimPack(b);
}

void RTPCISenderModuleDeleted::parsimUnpack(cCommBuffer *b)
{
    ::inetveins::rtp::RTPSessionControlInfo::parsimUnpack(b);
}

class RTPCISenderModuleDeletedDescriptor : public cClassDescriptor
{
  public:
    RTPCISenderModuleDeletedDescriptor();
    virtual ~RTPCISenderModuleDeletedDescriptor();

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

Register_ClassDescriptor(RTPCISenderModuleDeletedDescriptor);

RTPCISenderModuleDeletedDescriptor::RTPCISenderModuleDeletedDescriptor() : cClassDescriptor("inetveins::rtp::RTPCISenderModuleDeleted", "inetveins::rtp::RTPSessionControlInfo")
{
}

RTPCISenderModuleDeletedDescriptor::~RTPCISenderModuleDeletedDescriptor()
{
}

bool RTPCISenderModuleDeletedDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RTPCISenderModuleDeleted *>(obj)!=NULL;
}

const char *RTPCISenderModuleDeletedDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RTPCISenderModuleDeletedDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int RTPCISenderModuleDeletedDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *RTPCISenderModuleDeletedDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int RTPCISenderModuleDeletedDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RTPCISenderModuleDeletedDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *RTPCISenderModuleDeletedDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RTPCISenderModuleDeletedDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderModuleDeleted *pp = (RTPCISenderModuleDeleted *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RTPCISenderModuleDeletedDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderModuleDeleted *pp = (RTPCISenderModuleDeleted *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool RTPCISenderModuleDeletedDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderModuleDeleted *pp = (RTPCISenderModuleDeleted *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RTPCISenderModuleDeletedDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *RTPCISenderModuleDeletedDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RTPCISenderModuleDeleted *pp = (RTPCISenderModuleDeleted *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace rtp
} // namespace inetveins

