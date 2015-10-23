//
// Generated file, do not edit! Created by nedtool 4.6 from physicallayer/ieee80211/bitlevel/Ieee80211PLCPFrame.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee80211PLCPFrame_m.h"

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
namespace physicallayer {

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
    cEnum *e = cEnum::find("inet::physicallayer::Ieee80211PLCPType");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::physicallayer::Ieee80211PLCPType"));
    e->insert(OFDM, "OFDM");
    e->insert(DSSS, "DSSS");
    e->insert(Infrared, "Infrared");
    e->insert(FHSS, "FHSS");
    e->insert(HRDSSS, "HRDSSS");
    e->insert(ERP, "ERP");
    e->insert(HT, "HT");
);

Register_Class(Ieee80211PLCPFrame);

Ieee80211PLCPFrame::Ieee80211PLCPFrame(const char *name, int kind) : ::cPacket(name,kind)
{
    this->type_var = 0;
}

Ieee80211PLCPFrame::Ieee80211PLCPFrame(const Ieee80211PLCPFrame& other) : ::cPacket(other)
{
    copy(other);
}

Ieee80211PLCPFrame::~Ieee80211PLCPFrame()
{
}

Ieee80211PLCPFrame& Ieee80211PLCPFrame::operator=(const Ieee80211PLCPFrame& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211PLCPFrame::copy(const Ieee80211PLCPFrame& other)
{
    this->type_var = other.type_var;
}

void Ieee80211PLCPFrame::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->type_var);
}

void Ieee80211PLCPFrame::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
}

short Ieee80211PLCPFrame::getType() const
{
    return type_var;
}

void Ieee80211PLCPFrame::setType(short type)
{
    this->type_var = type;
}

class Ieee80211PLCPFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211PLCPFrameDescriptor();
    virtual ~Ieee80211PLCPFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211PLCPFrameDescriptor);

Ieee80211PLCPFrameDescriptor::Ieee80211PLCPFrameDescriptor() : cClassDescriptor("inet::physicallayer::Ieee80211PLCPFrame", "cPacket")
{
}

Ieee80211PLCPFrameDescriptor::~Ieee80211PLCPFrameDescriptor()
{
}

bool Ieee80211PLCPFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211PLCPFrame *>(obj)!=NULL;
}

const char *Ieee80211PLCPFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211PLCPFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee80211PLCPFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211PLCPFrameDescriptor::getFieldName(void *object, int field) const
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

int Ieee80211PLCPFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211PLCPFrameDescriptor::getFieldTypeString(void *object, int field) const
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

const char *Ieee80211PLCPFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "inet::physicallayer::Ieee80211PLCPType";
            return NULL;
        default: return NULL;
    }
}

int Ieee80211PLCPFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PLCPFrame *pp = (Ieee80211PLCPFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211PLCPFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PLCPFrame *pp = (Ieee80211PLCPFrame *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        default: return "";
    }
}

bool Ieee80211PLCPFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PLCPFrame *pp = (Ieee80211PLCPFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211PLCPFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211PLCPFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211PLCPFrame *pp = (Ieee80211PLCPFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace physicallayer
} // namespace inet

