//
// Generated file, do not edit! Created by nedtool 4.6 from linklayer/common/SimpleLinkLayerControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "SimpleLinkLayerControlInfo_m.h"

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

SimpleLinkLayerControlInfo_Base::SimpleLinkLayerControlInfo_Base() : ::cObject()
{
    this->interfaceId_var = 0;
}

SimpleLinkLayerControlInfo_Base::SimpleLinkLayerControlInfo_Base(const SimpleLinkLayerControlInfo_Base& other) : ::cObject(other)
{
    copy(other);
}

SimpleLinkLayerControlInfo_Base::~SimpleLinkLayerControlInfo_Base()
{
}

SimpleLinkLayerControlInfo_Base& SimpleLinkLayerControlInfo_Base::operator=(const SimpleLinkLayerControlInfo_Base& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void SimpleLinkLayerControlInfo_Base::copy(const SimpleLinkLayerControlInfo_Base& other)
{
    this->src_var = other.src_var;
    this->dest_var = other.dest_var;
    this->interfaceId_var = other.interfaceId_var;
}

void SimpleLinkLayerControlInfo_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->src_var);
    doPacking(b,this->dest_var);
    doPacking(b,this->interfaceId_var);
}

void SimpleLinkLayerControlInfo_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->dest_var);
    doUnpacking(b,this->interfaceId_var);
}

MACAddress& SimpleLinkLayerControlInfo_Base::getSrc()
{
    return src_var;
}

void SimpleLinkLayerControlInfo_Base::setSrc(const MACAddress& src)
{
    this->src_var = src;
}

MACAddress& SimpleLinkLayerControlInfo_Base::getDest()
{
    return dest_var;
}

void SimpleLinkLayerControlInfo_Base::setDest(const MACAddress& dest)
{
    this->dest_var = dest;
}

int SimpleLinkLayerControlInfo_Base::getInterfaceId() const
{
    return interfaceId_var;
}

void SimpleLinkLayerControlInfo_Base::setInterfaceId(int interfaceId)
{
    this->interfaceId_var = interfaceId;
}

class SimpleLinkLayerControlInfoDescriptor : public cClassDescriptor
{
  public:
    SimpleLinkLayerControlInfoDescriptor();
    virtual ~SimpleLinkLayerControlInfoDescriptor();

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

Register_ClassDescriptor(SimpleLinkLayerControlInfoDescriptor);

SimpleLinkLayerControlInfoDescriptor::SimpleLinkLayerControlInfoDescriptor() : cClassDescriptor("inet::SimpleLinkLayerControlInfo", "cObject")
{
}

SimpleLinkLayerControlInfoDescriptor::~SimpleLinkLayerControlInfoDescriptor()
{
}

bool SimpleLinkLayerControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SimpleLinkLayerControlInfo_Base *>(obj)!=NULL;
}

const char *SimpleLinkLayerControlInfoDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SimpleLinkLayerControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int SimpleLinkLayerControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SimpleLinkLayerControlInfoDescriptor::getFieldName(void *object, int field) const
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
        "interfaceId",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int SimpleLinkLayerControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "interfaceId")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SimpleLinkLayerControlInfoDescriptor::getFieldTypeString(void *object, int field) const
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

const char *SimpleLinkLayerControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SimpleLinkLayerControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SimpleLinkLayerControlInfo_Base *pp = (SimpleLinkLayerControlInfo_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SimpleLinkLayerControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SimpleLinkLayerControlInfo_Base *pp = (SimpleLinkLayerControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDest(); return out.str();}
        case 2: return long2string(pp->getInterfaceId());
        default: return "";
    }
}

bool SimpleLinkLayerControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SimpleLinkLayerControlInfo_Base *pp = (SimpleLinkLayerControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 2: pp->setInterfaceId(string2long(value)); return true;
        default: return false;
    }
}

const char *SimpleLinkLayerControlInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *SimpleLinkLayerControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SimpleLinkLayerControlInfo_Base *pp = (SimpleLinkLayerControlInfo_Base *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        case 1: return (void *)(&pp->getDest()); break;
        default: return NULL;
    }
}

} // namespace inet

