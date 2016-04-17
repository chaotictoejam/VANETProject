//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/idealwireless/IdealWirelessFrame.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IdealWirelessFrame_m.h"

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

Register_Class(IdealWirelessFrame);

IdealWirelessFrame::IdealWirelessFrame(const char *name, int kind) : ::cPacket(name,kind)
{
    this->srcModuleId_var = 0;
}

IdealWirelessFrame::IdealWirelessFrame(const IdealWirelessFrame& other) : ::cPacket(other)
{
    copy(other);
}

IdealWirelessFrame::~IdealWirelessFrame()
{
}

IdealWirelessFrame& IdealWirelessFrame::operator=(const IdealWirelessFrame& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void IdealWirelessFrame::copy(const IdealWirelessFrame& other)
{
    this->src_var = other.src_var;
    this->dest_var = other.dest_var;
    this->srcModuleId_var = other.srcModuleId_var;
}

void IdealWirelessFrame::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->src_var);
    doPacking(b,this->dest_var);
    doPacking(b,this->srcModuleId_var);
}

void IdealWirelessFrame::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->dest_var);
    doUnpacking(b,this->srcModuleId_var);
}

MACAddress& IdealWirelessFrame::getSrc()
{
    return src_var;
}

void IdealWirelessFrame::setSrc(const MACAddress& src)
{
    this->src_var = src;
}

MACAddress& IdealWirelessFrame::getDest()
{
    return dest_var;
}

void IdealWirelessFrame::setDest(const MACAddress& dest)
{
    this->dest_var = dest;
}

int IdealWirelessFrame::getSrcModuleId() const
{
    return srcModuleId_var;
}

void IdealWirelessFrame::setSrcModuleId(int srcModuleId)
{
    this->srcModuleId_var = srcModuleId;
}

class IdealWirelessFrameDescriptor : public cClassDescriptor
{
  public:
    IdealWirelessFrameDescriptor();
    virtual ~IdealWirelessFrameDescriptor();

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

Register_ClassDescriptor(IdealWirelessFrameDescriptor);

IdealWirelessFrameDescriptor::IdealWirelessFrameDescriptor() : cClassDescriptor("IdealWirelessFrame", "cPacket")
{
}

IdealWirelessFrameDescriptor::~IdealWirelessFrameDescriptor()
{
}

bool IdealWirelessFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IdealWirelessFrame *>(obj)!=NULL;
}

const char *IdealWirelessFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IdealWirelessFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int IdealWirelessFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *IdealWirelessFrameDescriptor::getFieldName(void *object, int field) const
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
        "srcModuleId",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int IdealWirelessFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcModuleId")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IdealWirelessFrameDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *IdealWirelessFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IdealWirelessFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IdealWirelessFrame *pp = (IdealWirelessFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IdealWirelessFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IdealWirelessFrame *pp = (IdealWirelessFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDest(); return out.str();}
        case 2: return long2string(pp->getSrcModuleId());
        default: return "";
    }
}

bool IdealWirelessFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IdealWirelessFrame *pp = (IdealWirelessFrame *)object; (void)pp;
    switch (field) {
        case 2: pp->setSrcModuleId(string2long(value)); return true;
        default: return false;
    }
}

const char *IdealWirelessFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *IdealWirelessFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IdealWirelessFrame *pp = (IdealWirelessFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        case 1: return (void *)(&pp->getDest()); break;
        default: return NULL;
    }
}


