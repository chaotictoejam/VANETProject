//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/rsvp_te/RSVPResvMsg.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RSVPResvMsg_m.h"

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

RSVPResvMsg_Base::RSVPResvMsg_Base(const char *name, int kind) : ::RSVPPacket(name,kind)
{
    this->rsvpKind_var = RESV_MESSAGE;
}

RSVPResvMsg_Base::RSVPResvMsg_Base(const RSVPResvMsg_Base& other) : ::RSVPPacket(other)
{
    copy(other);
}

RSVPResvMsg_Base::~RSVPResvMsg_Base()
{
}

RSVPResvMsg_Base& RSVPResvMsg_Base::operator=(const RSVPResvMsg_Base& other)
{
    if (this==&other) return *this;
    ::RSVPPacket::operator=(other);
    copy(other);
    return *this;
}

void RSVPResvMsg_Base::copy(const RSVPResvMsg_Base& other)
{
    this->hop_var = other.hop_var;
    this->flowDescriptor_var = other.flowDescriptor_var;
    this->rsvpKind_var = other.rsvpKind_var;
}

void RSVPResvMsg_Base::parsimPack(cCommBuffer *b)
{
    ::RSVPPacket::parsimPack(b);
    doPacking(b,this->hop_var);
    doPacking(b,this->flowDescriptor_var);
    doPacking(b,this->rsvpKind_var);
}

void RSVPResvMsg_Base::parsimUnpack(cCommBuffer *b)
{
    ::RSVPPacket::parsimUnpack(b);
    doUnpacking(b,this->hop_var);
    doUnpacking(b,this->flowDescriptor_var);
    doUnpacking(b,this->rsvpKind_var);
}

RsvpHopObj_t& RSVPResvMsg_Base::getHop()
{
    return hop_var;
}

void RSVPResvMsg_Base::setHop(const RsvpHopObj_t& hop)
{
    this->hop_var = hop;
}

FlowDescriptorVector& RSVPResvMsg_Base::getFlowDescriptor()
{
    return flowDescriptor_var;
}

void RSVPResvMsg_Base::setFlowDescriptor(const FlowDescriptorVector& flowDescriptor)
{
    this->flowDescriptor_var = flowDescriptor;
}

int RSVPResvMsg_Base::getRsvpKind() const
{
    return rsvpKind_var;
}

void RSVPResvMsg_Base::setRsvpKind(int rsvpKind)
{
    this->rsvpKind_var = rsvpKind;
}

class RSVPResvMsgDescriptor : public cClassDescriptor
{
  public:
    RSVPResvMsgDescriptor();
    virtual ~RSVPResvMsgDescriptor();

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

Register_ClassDescriptor(RSVPResvMsgDescriptor);

RSVPResvMsgDescriptor::RSVPResvMsgDescriptor() : cClassDescriptor("RSVPResvMsg", "RSVPPacket")
{
}

RSVPResvMsgDescriptor::~RSVPResvMsgDescriptor()
{
}

bool RSVPResvMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPResvMsg_Base *>(obj)!=NULL;
}

const char *RSVPResvMsgDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPResvMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int RSVPResvMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *RSVPResvMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "hop",
        "flowDescriptor",
        "rsvpKind",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int RSVPResvMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "hop")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "flowDescriptor")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "rsvpKind")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RSVPResvMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "RsvpHopObj_t",
        "FlowDescriptorVector",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *RSVPResvMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPResvMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvMsg_Base *pp = (RSVPResvMsg_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RSVPResvMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvMsg_Base *pp = (RSVPResvMsg_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getHop(); return out.str();}
        case 1: {std::stringstream out; out << pp->getFlowDescriptor(); return out.str();}
        case 2: return long2string(pp->getRsvpKind());
        default: return "";
    }
}

bool RSVPResvMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvMsg_Base *pp = (RSVPResvMsg_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setRsvpKind(string2long(value)); return true;
        default: return false;
    }
}

const char *RSVPResvMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(RsvpHopObj_t));
        case 1: return opp_typename(typeid(FlowDescriptorVector));
        default: return NULL;
    };
}

void *RSVPResvMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvMsg_Base *pp = (RSVPResvMsg_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getHop()); break;
        case 1: return (void *)(&pp->getFlowDescriptor()); break;
        default: return NULL;
    }
}

RSVPResvTear_Base::RSVPResvTear_Base(const char *name, int kind) : ::RSVPPacket(name,kind)
{
    this->rsvpKind_var = RTEAR_MESSAGE;
}

RSVPResvTear_Base::RSVPResvTear_Base(const RSVPResvTear_Base& other) : ::RSVPPacket(other)
{
    copy(other);
}

RSVPResvTear_Base::~RSVPResvTear_Base()
{
}

RSVPResvTear_Base& RSVPResvTear_Base::operator=(const RSVPResvTear_Base& other)
{
    if (this==&other) return *this;
    ::RSVPPacket::operator=(other);
    copy(other);
    return *this;
}

void RSVPResvTear_Base::copy(const RSVPResvTear_Base& other)
{
    this->hop_var = other.hop_var;
    this->flowDescriptor_var = other.flowDescriptor_var;
    this->rsvpKind_var = other.rsvpKind_var;
}

void RSVPResvTear_Base::parsimPack(cCommBuffer *b)
{
    ::RSVPPacket::parsimPack(b);
    doPacking(b,this->hop_var);
    doPacking(b,this->flowDescriptor_var);
    doPacking(b,this->rsvpKind_var);
}

void RSVPResvTear_Base::parsimUnpack(cCommBuffer *b)
{
    ::RSVPPacket::parsimUnpack(b);
    doUnpacking(b,this->hop_var);
    doUnpacking(b,this->flowDescriptor_var);
    doUnpacking(b,this->rsvpKind_var);
}

RsvpHopObj_t& RSVPResvTear_Base::getHop()
{
    return hop_var;
}

void RSVPResvTear_Base::setHop(const RsvpHopObj_t& hop)
{
    this->hop_var = hop;
}

FlowDescriptorVector& RSVPResvTear_Base::getFlowDescriptor()
{
    return flowDescriptor_var;
}

void RSVPResvTear_Base::setFlowDescriptor(const FlowDescriptorVector& flowDescriptor)
{
    this->flowDescriptor_var = flowDescriptor;
}

int RSVPResvTear_Base::getRsvpKind() const
{
    return rsvpKind_var;
}

void RSVPResvTear_Base::setRsvpKind(int rsvpKind)
{
    this->rsvpKind_var = rsvpKind;
}

class RSVPResvTearDescriptor : public cClassDescriptor
{
  public:
    RSVPResvTearDescriptor();
    virtual ~RSVPResvTearDescriptor();

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

Register_ClassDescriptor(RSVPResvTearDescriptor);

RSVPResvTearDescriptor::RSVPResvTearDescriptor() : cClassDescriptor("RSVPResvTear", "RSVPPacket")
{
}

RSVPResvTearDescriptor::~RSVPResvTearDescriptor()
{
}

bool RSVPResvTearDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPResvTear_Base *>(obj)!=NULL;
}

const char *RSVPResvTearDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPResvTearDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int RSVPResvTearDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *RSVPResvTearDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "hop",
        "flowDescriptor",
        "rsvpKind",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int RSVPResvTearDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "hop")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "flowDescriptor")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "rsvpKind")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RSVPResvTearDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "RsvpHopObj_t",
        "FlowDescriptorVector",
        "int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *RSVPResvTearDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPResvTearDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvTear_Base *pp = (RSVPResvTear_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RSVPResvTearDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvTear_Base *pp = (RSVPResvTear_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getHop(); return out.str();}
        case 1: {std::stringstream out; out << pp->getFlowDescriptor(); return out.str();}
        case 2: return long2string(pp->getRsvpKind());
        default: return "";
    }
}

bool RSVPResvTearDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvTear_Base *pp = (RSVPResvTear_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setRsvpKind(string2long(value)); return true;
        default: return false;
    }
}

const char *RSVPResvTearDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(RsvpHopObj_t));
        case 1: return opp_typename(typeid(FlowDescriptorVector));
        default: return NULL;
    };
}

void *RSVPResvTearDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvTear_Base *pp = (RSVPResvTear_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getHop()); break;
        case 1: return (void *)(&pp->getFlowDescriptor()); break;
        default: return NULL;
    }
}

RSVPResvError_Base::RSVPResvError_Base(const char *name, int kind) : ::RSVPPacket(name,kind)
{
    this->errorCode_var = 0;
    this->rsvpKind_var = RERROR_MESSAGE;
}

RSVPResvError_Base::RSVPResvError_Base(const RSVPResvError_Base& other) : ::RSVPPacket(other)
{
    copy(other);
}

RSVPResvError_Base::~RSVPResvError_Base()
{
}

RSVPResvError_Base& RSVPResvError_Base::operator=(const RSVPResvError_Base& other)
{
    if (this==&other) return *this;
    ::RSVPPacket::operator=(other);
    copy(other);
    return *this;
}

void RSVPResvError_Base::copy(const RSVPResvError_Base& other)
{
    this->hop_var = other.hop_var;
    this->errorNode_var = other.errorNode_var;
    this->errorCode_var = other.errorCode_var;
    this->rsvpKind_var = other.rsvpKind_var;
}

void RSVPResvError_Base::parsimPack(cCommBuffer *b)
{
    ::RSVPPacket::parsimPack(b);
    doPacking(b,this->hop_var);
    doPacking(b,this->errorNode_var);
    doPacking(b,this->errorCode_var);
    doPacking(b,this->rsvpKind_var);
}

void RSVPResvError_Base::parsimUnpack(cCommBuffer *b)
{
    ::RSVPPacket::parsimUnpack(b);
    doUnpacking(b,this->hop_var);
    doUnpacking(b,this->errorNode_var);
    doUnpacking(b,this->errorCode_var);
    doUnpacking(b,this->rsvpKind_var);
}

RsvpHopObj_t& RSVPResvError_Base::getHop()
{
    return hop_var;
}

void RSVPResvError_Base::setHop(const RsvpHopObj_t& hop)
{
    this->hop_var = hop;
}

IPv4Address& RSVPResvError_Base::getErrorNode()
{
    return errorNode_var;
}

void RSVPResvError_Base::setErrorNode(const IPv4Address& errorNode)
{
    this->errorNode_var = errorNode;
}

int RSVPResvError_Base::getErrorCode() const
{
    return errorCode_var;
}

void RSVPResvError_Base::setErrorCode(int errorCode)
{
    this->errorCode_var = errorCode;
}

int RSVPResvError_Base::getRsvpKind() const
{
    return rsvpKind_var;
}

void RSVPResvError_Base::setRsvpKind(int rsvpKind)
{
    this->rsvpKind_var = rsvpKind;
}

class RSVPResvErrorDescriptor : public cClassDescriptor
{
  public:
    RSVPResvErrorDescriptor();
    virtual ~RSVPResvErrorDescriptor();

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

Register_ClassDescriptor(RSVPResvErrorDescriptor);

RSVPResvErrorDescriptor::RSVPResvErrorDescriptor() : cClassDescriptor("RSVPResvError", "RSVPPacket")
{
}

RSVPResvErrorDescriptor::~RSVPResvErrorDescriptor()
{
}

bool RSVPResvErrorDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RSVPResvError_Base *>(obj)!=NULL;
}

const char *RSVPResvErrorDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RSVPResvErrorDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int RSVPResvErrorDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RSVPResvErrorDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "hop",
        "errorNode",
        "errorCode",
        "rsvpKind",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int RSVPResvErrorDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "hop")==0) return base+0;
    if (fieldName[0]=='e' && strcmp(fieldName, "errorNode")==0) return base+1;
    if (fieldName[0]=='e' && strcmp(fieldName, "errorCode")==0) return base+2;
    if (fieldName[0]=='r' && strcmp(fieldName, "rsvpKind")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RSVPResvErrorDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "RsvpHopObj_t",
        "IPv4Address",
        "int",
        "int",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *RSVPResvErrorDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RSVPResvErrorDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvError_Base *pp = (RSVPResvError_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RSVPResvErrorDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvError_Base *pp = (RSVPResvError_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getHop(); return out.str();}
        case 1: {std::stringstream out; out << pp->getErrorNode(); return out.str();}
        case 2: return long2string(pp->getErrorCode());
        case 3: return long2string(pp->getRsvpKind());
        default: return "";
    }
}

bool RSVPResvErrorDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvError_Base *pp = (RSVPResvError_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setErrorCode(string2long(value)); return true;
        case 3: pp->setRsvpKind(string2long(value)); return true;
        default: return false;
    }
}

const char *RSVPResvErrorDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(RsvpHopObj_t));
        case 1: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *RSVPResvErrorDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RSVPResvError_Base *pp = (RSVPResvError_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getHop()); break;
        case 1: return (void *)(&pp->getErrorNode()); break;
        default: return NULL;
    }
}


