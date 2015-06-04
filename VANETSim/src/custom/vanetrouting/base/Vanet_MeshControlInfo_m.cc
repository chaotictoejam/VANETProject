//
// Generated file, do not edit! Created by nedtool 4.6 from custom/vanetrouting/base/Vanet_MeshControlInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Vanet_MeshControlInfo_m.h"

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

MeshControlInfo::MeshControlInfo() : ::Ieee802Ctrl()
{
    this->inputId_var = 0;
    this->previousFix_var = 0;
    this->maxHopCollaborative_var = 0;
    this->collaborativeFeedback_var = 0;
}

MeshControlInfo::MeshControlInfo(const MeshControlInfo& other) : ::Ieee802Ctrl(other)
{
    copy(other);
}

MeshControlInfo::~MeshControlInfo()
{
}

MeshControlInfo& MeshControlInfo::operator=(const MeshControlInfo& other)
{
    if (this==&other) return *this;
    ::Ieee802Ctrl::operator=(other);
    copy(other);
    return *this;
}

void MeshControlInfo::copy(const MeshControlInfo& other)
{
    this->inputId_var = other.inputId_var;
    this->previousFix_var = other.previousFix_var;
    this->maxHopCollaborative_var = other.maxHopCollaborative_var;
    this->collaborativeFeedback_var = other.collaborativeFeedback_var;
}

void MeshControlInfo::parsimPack(cCommBuffer *b)
{
    doPacking(b,(::Ieee802Ctrl&)*this);
    doPacking(b,this->inputId_var);
    doPacking(b,this->previousFix_var);
    doPacking(b,this->maxHopCollaborative_var);
    doPacking(b,this->collaborativeFeedback_var);
}

void MeshControlInfo::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,(::Ieee802Ctrl&)*this);
    doUnpacking(b,this->inputId_var);
    doUnpacking(b,this->previousFix_var);
    doUnpacking(b,this->maxHopCollaborative_var);
    doUnpacking(b,this->collaborativeFeedback_var);
}

int MeshControlInfo::getInputId() const
{
    return inputId_var;
}

void MeshControlInfo::setInputId(int inputId)
{
    this->inputId_var = inputId;
}

bool MeshControlInfo::getPreviousFix() const
{
    return previousFix_var;
}

void MeshControlInfo::setPreviousFix(bool previousFix)
{
    this->previousFix_var = previousFix;
}

int MeshControlInfo::getMaxHopCollaborative() const
{
    return maxHopCollaborative_var;
}

void MeshControlInfo::setMaxHopCollaborative(int maxHopCollaborative)
{
    this->maxHopCollaborative_var = maxHopCollaborative;
}

bool MeshControlInfo::getCollaborativeFeedback() const
{
    return collaborativeFeedback_var;
}

void MeshControlInfo::setCollaborativeFeedback(bool collaborativeFeedback)
{
    this->collaborativeFeedback_var = collaborativeFeedback;
}

class MeshControlInfoDescriptor : public cClassDescriptor
{
  public:
    MeshControlInfoDescriptor();
    virtual ~MeshControlInfoDescriptor();

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

Register_ClassDescriptor(MeshControlInfoDescriptor);

MeshControlInfoDescriptor::MeshControlInfoDescriptor() : cClassDescriptor("MeshControlInfo", "Ieee802Ctrl")
{
}

MeshControlInfoDescriptor::~MeshControlInfoDescriptor()
{
}

bool MeshControlInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MeshControlInfo *>(obj)!=NULL;
}

const char *MeshControlInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MeshControlInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int MeshControlInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *MeshControlInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "inputId",
        "previousFix",
        "maxHopCollaborative",
        "collaborativeFeedback",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int MeshControlInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "inputId")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "previousFix")==0) return base+1;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxHopCollaborative")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "collaborativeFeedback")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MeshControlInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "bool",
        "int",
        "bool",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *MeshControlInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MeshControlInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MeshControlInfo *pp = (MeshControlInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MeshControlInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MeshControlInfo *pp = (MeshControlInfo *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getInputId());
        case 1: return bool2string(pp->getPreviousFix());
        case 2: return long2string(pp->getMaxHopCollaborative());
        case 3: return bool2string(pp->getCollaborativeFeedback());
        default: return "";
    }
}

bool MeshControlInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MeshControlInfo *pp = (MeshControlInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setInputId(string2long(value)); return true;
        case 1: pp->setPreviousFix(string2bool(value)); return true;
        case 2: pp->setMaxHopCollaborative(string2long(value)); return true;
        case 3: pp->setCollaborativeFeedback(string2bool(value)); return true;
        default: return false;
    }
}

const char *MeshControlInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *MeshControlInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MeshControlInfo *pp = (MeshControlInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


