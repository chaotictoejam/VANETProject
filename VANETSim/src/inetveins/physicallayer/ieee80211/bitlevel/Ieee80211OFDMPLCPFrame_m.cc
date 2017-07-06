//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/physicallayer/ieee80211/bitlevel/Ieee80211OFDMPLCPFrame.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee80211OFDMPLCPFrame_m.h"

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

Ieee80211OFDMPLCPFrame::Ieee80211OFDMPLCPFrame() : ::inetveins::physicallayer::Ieee80211PLCPFrame()
{
    this->setType(OFDM);

    this->rate_var = 0;
    this->length_var = 0;
}

Ieee80211OFDMPLCPFrame::Ieee80211OFDMPLCPFrame(const Ieee80211OFDMPLCPFrame& other) : ::inetveins::physicallayer::Ieee80211PLCPFrame(other)
{
    copy(other);
}

Ieee80211OFDMPLCPFrame::~Ieee80211OFDMPLCPFrame()
{
}

Ieee80211OFDMPLCPFrame& Ieee80211OFDMPLCPFrame::operator=(const Ieee80211OFDMPLCPFrame& other)
{
    if (this==&other) return *this;
    ::inetveins::physicallayer::Ieee80211PLCPFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee80211OFDMPLCPFrame::copy(const Ieee80211OFDMPLCPFrame& other)
{
    this->rate_var = other.rate_var;
    this->length_var = other.length_var;
}

void Ieee80211OFDMPLCPFrame::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::inetveins::physicallayer::Ieee80211PLCPFrame&)*this);
    doPacking(b,this->rate_var);
    doPacking(b,this->length_var);
}

void Ieee80211OFDMPLCPFrame::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::inetveins::physicallayer::Ieee80211PLCPFrame&)*this);
    doUnpacking(b,this->rate_var);
    doUnpacking(b,this->length_var);
}

int Ieee80211OFDMPLCPFrame::getRate() const
{
    return rate_var;
}

void Ieee80211OFDMPLCPFrame::setRate(int rate)
{
    this->rate_var = rate;
}

int Ieee80211OFDMPLCPFrame::getLength() const
{
    return length_var;
}

void Ieee80211OFDMPLCPFrame::setLength(int length)
{
    this->length_var = length;
}

class Ieee80211OFDMPLCPFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee80211OFDMPLCPFrameDescriptor();
    virtual ~Ieee80211OFDMPLCPFrameDescriptor();

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

Register_ClassDescriptor(Ieee80211OFDMPLCPFrameDescriptor);

Ieee80211OFDMPLCPFrameDescriptor::Ieee80211OFDMPLCPFrameDescriptor() : cClassDescriptor("inetveins::physicallayer::Ieee80211OFDMPLCPFrame", "inetveins::physicallayer::Ieee80211PLCPFrame")
{
}

Ieee80211OFDMPLCPFrameDescriptor::~Ieee80211OFDMPLCPFrameDescriptor()
{
}

bool Ieee80211OFDMPLCPFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee80211OFDMPLCPFrame *>(obj)!=NULL;
}

const char *Ieee80211OFDMPLCPFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee80211OFDMPLCPFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee80211OFDMPLCPFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee80211OFDMPLCPFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "rate",
        "length",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int Ieee80211OFDMPLCPFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "rate")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee80211OFDMPLCPFrameDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee80211OFDMPLCPFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee80211OFDMPLCPFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211OFDMPLCPFrame *pp = (Ieee80211OFDMPLCPFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee80211OFDMPLCPFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211OFDMPLCPFrame *pp = (Ieee80211OFDMPLCPFrame *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getRate());
        case 1: return long2string(pp->getLength());
        default: return "";
    }
}

bool Ieee80211OFDMPLCPFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211OFDMPLCPFrame *pp = (Ieee80211OFDMPLCPFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setRate(string2long(value)); return true;
        case 1: pp->setLength(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee80211OFDMPLCPFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee80211OFDMPLCPFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee80211OFDMPLCPFrame *pp = (Ieee80211OFDMPLCPFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

} // namespace physicallayer
} // namespace inetveins

