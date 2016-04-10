//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/radio/IdealAirFrame.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "IdealAirFrame_m.h"

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

Register_Class(IdealAirFrame);

IdealAirFrame::IdealAirFrame(const char *name, int kind) : ::cPacket(name,kind)
{
    this->transmissionDuration_var = 0;
    this->transmissionRange_var = 0;
}

IdealAirFrame::IdealAirFrame(const IdealAirFrame& other) : ::cPacket(other)
{
    copy(other);
}

IdealAirFrame::~IdealAirFrame()
{
}

IdealAirFrame& IdealAirFrame::operator=(const IdealAirFrame& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void IdealAirFrame::copy(const IdealAirFrame& other)
{
    this->transmissionDuration_var = other.transmissionDuration_var;
    this->transmissionStartPosition_var = other.transmissionStartPosition_var;
    this->transmissionRange_var = other.transmissionRange_var;
}

void IdealAirFrame::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->transmissionDuration_var);
    doPacking(b,this->transmissionStartPosition_var);
    doPacking(b,this->transmissionRange_var);
}

void IdealAirFrame::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->transmissionDuration_var);
    doUnpacking(b,this->transmissionStartPosition_var);
    doUnpacking(b,this->transmissionRange_var);
}

simtime_t IdealAirFrame::getTransmissionDuration() const
{
    return transmissionDuration_var;
}

void IdealAirFrame::setTransmissionDuration(simtime_t transmissionDuration)
{
    this->transmissionDuration_var = transmissionDuration;
}

Coord& IdealAirFrame::getTransmissionStartPosition()
{
    return transmissionStartPosition_var;
}

void IdealAirFrame::setTransmissionStartPosition(const Coord& transmissionStartPosition)
{
    this->transmissionStartPosition_var = transmissionStartPosition;
}

double IdealAirFrame::getTransmissionRange() const
{
    return transmissionRange_var;
}

void IdealAirFrame::setTransmissionRange(double transmissionRange)
{
    this->transmissionRange_var = transmissionRange;
}

class IdealAirFrameDescriptor : public cClassDescriptor
{
  public:
    IdealAirFrameDescriptor();
    virtual ~IdealAirFrameDescriptor();

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

Register_ClassDescriptor(IdealAirFrameDescriptor);

IdealAirFrameDescriptor::IdealAirFrameDescriptor() : cClassDescriptor("IdealAirFrame", "cPacket")
{
}

IdealAirFrameDescriptor::~IdealAirFrameDescriptor()
{
}

bool IdealAirFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<IdealAirFrame *>(obj)!=NULL;
}

const char *IdealAirFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int IdealAirFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int IdealAirFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *IdealAirFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "transmissionDuration",
        "transmissionStartPosition",
        "transmissionRange",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int IdealAirFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "transmissionDuration")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "transmissionStartPosition")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "transmissionRange")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *IdealAirFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "simtime_t",
        "Coord",
        "double",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *IdealAirFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int IdealAirFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    IdealAirFrame *pp = (IdealAirFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string IdealAirFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    IdealAirFrame *pp = (IdealAirFrame *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getTransmissionDuration());
        case 1: {std::stringstream out; out << pp->getTransmissionStartPosition(); return out.str();}
        case 2: return double2string(pp->getTransmissionRange());
        default: return "";
    }
}

bool IdealAirFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    IdealAirFrame *pp = (IdealAirFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setTransmissionDuration(string2double(value)); return true;
        case 2: pp->setTransmissionRange(string2double(value)); return true;
        default: return false;
    }
}

const char *IdealAirFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(Coord));
        default: return NULL;
    };
}

void *IdealAirFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    IdealAirFrame *pp = (IdealAirFrame *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getTransmissionStartPosition()); break;
        default: return NULL;
    }
}


