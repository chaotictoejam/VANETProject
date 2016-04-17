//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/manetrouting/dymo_fau/DYMO_RM.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DYMO_RM_m.h"

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

Register_Class(DYMO_RM);

DYMO_RM::DYMO_RM(const char *name, int kind) : ::DYMO_PacketBBMessage(name,kind)
{
}

DYMO_RM::DYMO_RM(const DYMO_RM& other) : ::DYMO_PacketBBMessage(other)
{
    copy(other);
}

DYMO_RM::~DYMO_RM()
{
}

DYMO_RM& DYMO_RM::operator=(const DYMO_RM& other)
{
    if (this==&other) return *this;
    ::DYMO_PacketBBMessage::operator=(other);
    copy(other);
    return *this;
}

void DYMO_RM::copy(const DYMO_RM& other)
{
    this->targetNode_var = other.targetNode_var;
    this->origNode_var = other.origNode_var;
    this->additionalNodes_var = other.additionalNodes_var;
}

void DYMO_RM::parsimPack(cCommBuffer *b)
{
    ::DYMO_PacketBBMessage::parsimPack(b);
    doPacking(b,this->targetNode_var);
    doPacking(b,this->origNode_var);
    doPacking(b,this->additionalNodes_var);
}

void DYMO_RM::parsimUnpack(cCommBuffer *b)
{
    ::DYMO_PacketBBMessage::parsimUnpack(b);
    doUnpacking(b,this->targetNode_var);
    doUnpacking(b,this->origNode_var);
    doUnpacking(b,this->additionalNodes_var);
}

DYMO_AddressBlock& DYMO_RM::getTargetNode()
{
    return targetNode_var;
}

void DYMO_RM::setTargetNode(const DYMO_AddressBlock& targetNode)
{
    this->targetNode_var = targetNode;
}

DYMO_AddressBlock& DYMO_RM::getOrigNode()
{
    return origNode_var;
}

void DYMO_RM::setOrigNode(const DYMO_AddressBlock& origNode)
{
    this->origNode_var = origNode;
}

VectorOfDYMOAddressBlocks& DYMO_RM::getAdditionalNodes()
{
    return additionalNodes_var;
}

void DYMO_RM::setAdditionalNodes(const VectorOfDYMOAddressBlocks& additionalNodes)
{
    this->additionalNodes_var = additionalNodes;
}

class DYMO_RMDescriptor : public cClassDescriptor
{
  public:
    DYMO_RMDescriptor();
    virtual ~DYMO_RMDescriptor();

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

Register_ClassDescriptor(DYMO_RMDescriptor);

DYMO_RMDescriptor::DYMO_RMDescriptor() : cClassDescriptor("DYMO_RM", "DYMO_PacketBBMessage")
{
}

DYMO_RMDescriptor::~DYMO_RMDescriptor()
{
}

bool DYMO_RMDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<DYMO_RM *>(obj)!=NULL;
}

const char *DYMO_RMDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int DYMO_RMDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int DYMO_RMDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *DYMO_RMDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "targetNode",
        "origNode",
        "additionalNodes",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int DYMO_RMDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetNode")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "origNode")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "additionalNodes")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *DYMO_RMDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "DYMO_AddressBlock",
        "DYMO_AddressBlock",
        "VectorOfDYMOAddressBlocks",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *DYMO_RMDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int DYMO_RMDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_RM *pp = (DYMO_RM *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string DYMO_RMDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_RM *pp = (DYMO_RM *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getTargetNode(); return out.str();}
        case 1: {std::stringstream out; out << pp->getOrigNode(); return out.str();}
        case 2: {std::stringstream out; out << pp->getAdditionalNodes(); return out.str();}
        default: return "";
    }
}

bool DYMO_RMDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_RM *pp = (DYMO_RM *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *DYMO_RMDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(DYMO_AddressBlock));
        case 1: return opp_typename(typeid(DYMO_AddressBlock));
        case 2: return opp_typename(typeid(VectorOfDYMOAddressBlocks));
        default: return NULL;
    };
}

void *DYMO_RMDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    DYMO_RM *pp = (DYMO_RM *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getTargetNode()); break;
        case 1: return (void *)(&pp->getOrigNode()); break;
        case 2: return (void *)(&pp->getAdditionalNodes()); break;
        default: return NULL;
    }
}


