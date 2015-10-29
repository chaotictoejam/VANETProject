//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/rsvp_te/RSVPPathMsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RSVPPathMsg_m.h"

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

RSVPPathMsg_Base::RSVPPathMsg_Base(const char *name, int kind) : ::RSVPPacket(name,kind)
{
    this->color_var = 0;
    this->rsvpKind_var = PATH_MESSAGE;
}

RSVPPathMsg_Base::RSVPPathMsg_Base(const RSVPPathMsg_Base& other) : ::RSVPPacket(other)
{
    copy(other);
}

RSVPPathMsg_Base::~RSVPPathMsg_Base()
{
}

RSVPPathMsg_Base& RSVPPathMsg_Base::operator=(const RSVPPathMsg_Base& other)
{
    if (this==&other) return *this;
    ::RSVPPacket::operator=(other);
    copy(other);
    return *this;
}

void RSVPPathMsg_Base::copy(const RSVPPathMsg_Base& other)
{
    this->hop_var = other.hop_var;
    this->label_request_var = other.label_request_var;
    this->sender_descriptor_var = other.sender_descriptor_var;
    this->ERO_var = other.ERO_var;
    this->color_var = other.color_var;
    this->rsvpKind_var = other.rsvpKind_var;
}

void RSVPPathMsg_Base::parsimPack(cCommBuffer *b)
{
    ::RSVPPacket::parsimPack(b);
    doPacking(b,this->hop_var);
    doPacking(b,this->label_request_var);
    doPacking(b,this->sender_descriptor_var);
    doPacking(b,this->ERO_var);
    doPacking(b,this->color_var);
    doPacking(b,this->rsvpKind_var);
}

void RSVPPathMsg_Base::parsimUnpack(cCommBuffer *b)
{
    ::RSVPPacket::parsimUnpack(b);
    doUnpacking(b,this->hop_var);
    doUnpacking(b,this->label_request_var);
    doUnpacking(b,this->sender_descriptor_var);
    doUnpacking(b,this->ERO_var);
    doUnpacking(b,this->color_var);
    doUnpacking(b,this->rsvpKind_var);
}

RsvpHopObj_t& RSVPPathMsg_Base::getHop()
{
    return hop_var;
}

void RSVPPathMsg_Base::setHop(const RsvpHopObj_t& hop)
{
    this->hop_var = hop;
}

LabelRequestObj_t& RSVPPathMsg_Base::getLabel_request()
{
    return label_request_var;
}

void RSVPPathMsg_Base::setLabel_request(const LabelRequestObj_t& label_request)
{
    this->label_request_var = label_request;
}

SenderDescriptor_t& RSVPPathMsg_Base::getSender_descriptor()
{
    return sender_descriptor_var;
}

void RSVPPathMsg_Base::setSender_descriptor(const SenderDescriptor_t& sender_descriptor)
{
    this->sender_descriptor_var = sender_descriptor;
}

EroVector& RSVPPathMsg_Base::getERO()
{
    return ERO_var;
}

void RSVPPathMsg_Base::setERO(const EroVector& ERO)
{
    this->ERO_var = ERO;
}

int RSVPPathMsg_Base::getColor() const
{
    return color_var;
}

void RSVPPathMsg_Base::setColor(int color)
{
    this->color_var = color;
}

int RSVPPathMsg_Base::getRsvpKind() const
{
    return rsvpKind_var;
}

void RSVPPathMsg_Base::setRsvpKind(int rsvpKind)
{
    this->rsvpKind_var = rsvpKind;
}

class RSVPPathMsgDescriptor : public cClassDescriptor
{
  public:
    RSVPPathMsgDescriptor();
    virtual ~RSVPPathMsgDescriptor();

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

Register_ClassDescriptor(RSVPPathMsgDescriptor);

RSVPPathMsgDescriptor::RSVPPathMsgDescriptor() : cClassDescriptor("RSVPPathMsg", "RSVPPacket")
{
}

RSVPPathMsgDescriptor::~RSVPPathMsgDescriptor()
{
}

bool RSVPPathMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPPathMsg_Base *>(obj)!=NULL;
}

const char *RSVPPathMsgDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPPathMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int RSVPPathMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *RSVPPathMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "hop",
        "label_request",
        "sender_descriptor",
        "ERO",
        "color",
        "rsvpKind",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int RSVPPathMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "hop")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "label_request")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sender_descriptor")==0) return base+2;
    if (fieldName[0]=='E' && strcmp(fieldName, "ERO")==0) return base+3;
    if (fieldName[0]=='c' && strcmp(fieldName, "color")==0) return base+4;
    if (fieldName[0]=='r' && strcmp(fieldName, "rsvpKind")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RSVPPathMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "RsvpHopObj_t",
        "LabelRequestObj_t",
        "SenderDescriptor_t",
        "EroVector",
        "int",
        "int",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *RSVPPathMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPPathMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathMsg_Base *pp = (RSVPPathMsg_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RSVPPathMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathMsg_Base *pp = (RSVPPathMsg_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getHop(); return out.str();}
        case 1: {std::stringstream out; out << pp->getLabel_request(); return out.str();}
        case 2: {std::stringstream out; out << pp->getSender_descriptor(); return out.str();}
        case 3: {std::stringstream out; out << pp->getERO(); return out.str();}
        case 4: return long2string(pp->getColor());
        case 5: return long2string(pp->getRsvpKind());
        default: return "";
    }
}

bool RSVPPathMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathMsg_Base *pp = (RSVPPathMsg_Base *)object; (void)pp;
    switch (field) {
        case 4: pp->setColor(string2long(value)); return true;
        case 5: pp->setRsvpKind(string2long(value)); return true;
        default: return false;
    }
}

const char *RSVPPathMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(RsvpHopObj_t));
        case 1: return opp_typename(typeid(LabelRequestObj_t));
        case 2: return opp_typename(typeid(SenderDescriptor_t));
        case 3: return opp_typename(typeid(EroVector));
        default: return NULL;
    };
}

void *RSVPPathMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathMsg_Base *pp = (RSVPPathMsg_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getHop()); break;
        case 1: return (void *)(&pp->getLabel_request()); break;
        case 2: return (void *)(&pp->getSender_descriptor()); break;
        case 3: return (void *)(&pp->getERO()); break;
        default: return NULL;
    }
}

RSVPPathTear_Base::RSVPPathTear_Base(const char *name, int kind) : ::RSVPPacket(name,kind)
{
    this->force_var = 0;
    this->rsvpKind_var = PTEAR_MESSAGE;
}

RSVPPathTear_Base::RSVPPathTear_Base(const RSVPPathTear_Base& other) : ::RSVPPacket(other)
{
    copy(other);
}

RSVPPathTear_Base::~RSVPPathTear_Base()
{
}

RSVPPathTear_Base& RSVPPathTear_Base::operator=(const RSVPPathTear_Base& other)
{
    if (this==&other) return *this;
    ::RSVPPacket::operator=(other);
    copy(other);
    return *this;
}

void RSVPPathTear_Base::copy(const RSVPPathTear_Base& other)
{
    this->hop_var = other.hop_var;
    this->senderTemplate_var = other.senderTemplate_var;
    this->force_var = other.force_var;
    this->rsvpKind_var = other.rsvpKind_var;
}

void RSVPPathTear_Base::parsimPack(cCommBuffer *b)
{
    ::RSVPPacket::parsimPack(b);
    doPacking(b,this->hop_var);
    doPacking(b,this->senderTemplate_var);
    doPacking(b,this->force_var);
    doPacking(b,this->rsvpKind_var);
}

void RSVPPathTear_Base::parsimUnpack(cCommBuffer *b)
{
    ::RSVPPacket::parsimUnpack(b);
    doUnpacking(b,this->hop_var);
    doUnpacking(b,this->senderTemplate_var);
    doUnpacking(b,this->force_var);
    doUnpacking(b,this->rsvpKind_var);
}

RsvpHopObj_t& RSVPPathTear_Base::getHop()
{
    return hop_var;
}

void RSVPPathTear_Base::setHop(const RsvpHopObj_t& hop)
{
    this->hop_var = hop;
}

SenderTemplateObj_t& RSVPPathTear_Base::getSenderTemplate()
{
    return senderTemplate_var;
}

void RSVPPathTear_Base::setSenderTemplate(const SenderTemplateObj_t& senderTemplate)
{
    this->senderTemplate_var = senderTemplate;
}

bool RSVPPathTear_Base::getForce() const
{
    return force_var;
}

void RSVPPathTear_Base::setForce(bool force)
{
    this->force_var = force;
}

int RSVPPathTear_Base::getRsvpKind() const
{
    return rsvpKind_var;
}

void RSVPPathTear_Base::setRsvpKind(int rsvpKind)
{
    this->rsvpKind_var = rsvpKind;
}

class RSVPPathTearDescriptor : public cClassDescriptor
{
  public:
    RSVPPathTearDescriptor();
    virtual ~RSVPPathTearDescriptor();

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

Register_ClassDescriptor(RSVPPathTearDescriptor);

RSVPPathTearDescriptor::RSVPPathTearDescriptor() : cClassDescriptor("RSVPPathTear", "RSVPPacket")
{
}

RSVPPathTearDescriptor::~RSVPPathTearDescriptor()
{
}

bool RSVPPathTearDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPPathTear_Base *>(obj)!=NULL;
}

const char *RSVPPathTearDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPPathTearDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int RSVPPathTearDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *RSVPPathTearDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "hop",
        "senderTemplate",
        "force",
        "rsvpKind",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int RSVPPathTearDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "hop")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderTemplate")==0) return base+1;
    if (fieldName[0]=='f' && strcmp(fieldName, "force")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "rsvpKind")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RSVPPathTearDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "RsvpHopObj_t",
        "SenderTemplateObj_t",
        "bool",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *RSVPPathTearDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPPathTearDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathTear_Base *pp = (RSVPPathTear_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RSVPPathTearDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathTear_Base *pp = (RSVPPathTear_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getHop(); return out.str();}
        case 1: {std::stringstream out; out << pp->getSenderTemplate(); return out.str();}
        case 2: return bool2string(pp->getForce());
        case 3: return long2string(pp->getRsvpKind());
        default: return "";
    }
}

bool RSVPPathTearDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathTear_Base *pp = (RSVPPathTear_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setForce(string2bool(value)); return true;
        case 3: pp->setRsvpKind(string2long(value)); return true;
        default: return false;
    }
}

const char *RSVPPathTearDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(RsvpHopObj_t));
        case 1: return opp_typename(typeid(SenderTemplateObj_t));
        default: return NULL;
    };
}

void *RSVPPathTearDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathTear_Base *pp = (RSVPPathTear_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getHop()); break;
        case 1: return (void *)(&pp->getSenderTemplate()); break;
        default: return NULL;
    }
}

RSVPPathError_Base::RSVPPathError_Base(const char *name, int kind) : ::RSVPPacket(name,kind)
{
    this->errorCode_var = 0;
    this->rsvpKind_var = PERROR_MESSAGE;
}

RSVPPathError_Base::RSVPPathError_Base(const RSVPPathError_Base& other) : ::RSVPPacket(other)
{
    copy(other);
}

RSVPPathError_Base::~RSVPPathError_Base()
{
}

RSVPPathError_Base& RSVPPathError_Base::operator=(const RSVPPathError_Base& other)
{
    if (this==&other) return *this;
    ::RSVPPacket::operator=(other);
    copy(other);
    return *this;
}

void RSVPPathError_Base::copy(const RSVPPathError_Base& other)
{
    this->errorNode_var = other.errorNode_var;
    this->errorCode_var = other.errorCode_var;
    this->sender_descriptor_var = other.sender_descriptor_var;
    this->rsvpKind_var = other.rsvpKind_var;
}

void RSVPPathError_Base::parsimPack(cCommBuffer *b)
{
    ::RSVPPacket::parsimPack(b);
    doPacking(b,this->errorNode_var);
    doPacking(b,this->errorCode_var);
    doPacking(b,this->sender_descriptor_var);
    doPacking(b,this->rsvpKind_var);
}

void RSVPPathError_Base::parsimUnpack(cCommBuffer *b)
{
    ::RSVPPacket::parsimUnpack(b);
    doUnpacking(b,this->errorNode_var);
    doUnpacking(b,this->errorCode_var);
    doUnpacking(b,this->sender_descriptor_var);
    doUnpacking(b,this->rsvpKind_var);
}

IPv4Address& RSVPPathError_Base::getErrorNode()
{
    return errorNode_var;
}

void RSVPPathError_Base::setErrorNode(const IPv4Address& errorNode)
{
    this->errorNode_var = errorNode;
}

int RSVPPathError_Base::getErrorCode() const
{
    return errorCode_var;
}

void RSVPPathError_Base::setErrorCode(int errorCode)
{
    this->errorCode_var = errorCode;
}

SenderDescriptor_t& RSVPPathError_Base::getSender_descriptor()
{
    return sender_descriptor_var;
}

void RSVPPathError_Base::setSender_descriptor(const SenderDescriptor_t& sender_descriptor)
{
    this->sender_descriptor_var = sender_descriptor;
}

int RSVPPathError_Base::getRsvpKind() const
{
    return rsvpKind_var;
}

void RSVPPathError_Base::setRsvpKind(int rsvpKind)
{
    this->rsvpKind_var = rsvpKind;
}

class RSVPPathErrorDescriptor : public cClassDescriptor
{
  public:
    RSVPPathErrorDescriptor();
    virtual ~RSVPPathErrorDescriptor();

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

Register_ClassDescriptor(RSVPPathErrorDescriptor);

RSVPPathErrorDescriptor::RSVPPathErrorDescriptor() : cClassDescriptor("RSVPPathError", "RSVPPacket")
{
}

RSVPPathErrorDescriptor::~RSVPPathErrorDescriptor()
{
}

bool RSVPPathErrorDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPPathError_Base *>(obj)!=NULL;
}

const char *RSVPPathErrorDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPPathErrorDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int RSVPPathErrorDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *RSVPPathErrorDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "errorNode",
        "errorCode",
        "sender_descriptor",
        "rsvpKind",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int RSVPPathErrorDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "errorNode")==0) return base+0;
    if (fieldName[0]=='e' && strcmp(fieldName, "errorCode")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sender_descriptor")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "rsvpKind")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RSVPPathErrorDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "int",
        "SenderDescriptor_t",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *RSVPPathErrorDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPPathErrorDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathError_Base *pp = (RSVPPathError_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RSVPPathErrorDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathError_Base *pp = (RSVPPathError_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getErrorNode(); return out.str();}
        case 1: return long2string(pp->getErrorCode());
        case 2: {std::stringstream out; out << pp->getSender_descriptor(); return out.str();}
        case 3: return long2string(pp->getRsvpKind());
        default: return "";
    }
}

bool RSVPPathErrorDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathError_Base *pp = (RSVPPathError_Base *)object; (void)pp;
    switch (field) {
        case 1: pp->setErrorCode(string2long(value)); return true;
        case 3: pp->setRsvpKind(string2long(value)); return true;
        default: return false;
    }
}

const char *RSVPPathErrorDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        case 2: return opp_typename(typeid(SenderDescriptor_t));
        default: return NULL;
    };
}

void *RSVPPathErrorDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPPathError_Base *pp = (RSVPPathError_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getErrorNode()); break;
        case 2: return (void *)(&pp->getSender_descriptor()); break;
        default: return NULL;
    }
}


