//
// Generated file, do not edit! Created by opp_msgc 4.4 from messages/ProbabilisticBroadcastPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ProbabilisticBroadcastPkt_m.h"

USING_NAMESPACE

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(ProbabilisticBroadcastPkt);

ProbabilisticBroadcastPkt::ProbabilisticBroadcastPkt(const char *name, int kind) : NetwPkt(name,kind)
{
    this->id_var = 0;
    this->appTtl_var = 0;
    this->nbHops_var = 0;
}

ProbabilisticBroadcastPkt::ProbabilisticBroadcastPkt(const ProbabilisticBroadcastPkt& other) : NetwPkt(other)
{
    copy(other);
}

ProbabilisticBroadcastPkt::~ProbabilisticBroadcastPkt()
{
}

ProbabilisticBroadcastPkt& ProbabilisticBroadcastPkt::operator=(const ProbabilisticBroadcastPkt& other)
{
    if (this==&other) return *this;
    NetwPkt::operator=(other);
    copy(other);
    return *this;
}

void ProbabilisticBroadcastPkt::copy(const ProbabilisticBroadcastPkt& other)
{
    this->id_var = other.id_var;
    this->appTtl_var = other.appTtl_var;
    this->initialSrcAddr_var = other.initialSrcAddr_var;
    this->finalDestAddr_var = other.finalDestAddr_var;
    this->nbHops_var = other.nbHops_var;
}

void ProbabilisticBroadcastPkt::parsimPack(cCommBuffer *b)
{
    NetwPkt::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->appTtl_var);
    doPacking(b,this->initialSrcAddr_var);
    doPacking(b,this->finalDestAddr_var);
    doPacking(b,this->nbHops_var);
}

void ProbabilisticBroadcastPkt::parsimUnpack(cCommBuffer *b)
{
    NetwPkt::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->appTtl_var);
    doUnpacking(b,this->initialSrcAddr_var);
    doUnpacking(b,this->finalDestAddr_var);
    doUnpacking(b,this->nbHops_var);
}

long ProbabilisticBroadcastPkt::getId() const
{
    return id_var;
}

void ProbabilisticBroadcastPkt::setId(long id)
{
    this->id_var = id;
}

simtime_t ProbabilisticBroadcastPkt::getAppTtl() const
{
    return appTtl_var;
}

void ProbabilisticBroadcastPkt::setAppTtl(simtime_t appTtl)
{
    this->appTtl_var = appTtl;
}

LAddress::L3Type& ProbabilisticBroadcastPkt::getInitialSrcAddr()
{
    return initialSrcAddr_var;
}

void ProbabilisticBroadcastPkt::setInitialSrcAddr(const LAddress::L3Type& initialSrcAddr)
{
    this->initialSrcAddr_var = initialSrcAddr;
}

LAddress::L3Type& ProbabilisticBroadcastPkt::getFinalDestAddr()
{
    return finalDestAddr_var;
}

void ProbabilisticBroadcastPkt::setFinalDestAddr(const LAddress::L3Type& finalDestAddr)
{
    this->finalDestAddr_var = finalDestAddr;
}

int ProbabilisticBroadcastPkt::getNbHops() const
{
    return nbHops_var;
}

void ProbabilisticBroadcastPkt::setNbHops(int nbHops)
{
    this->nbHops_var = nbHops;
}

class ProbabilisticBroadcastPktDescriptor : public cClassDescriptor
{
  public:
    ProbabilisticBroadcastPktDescriptor();
    virtual ~ProbabilisticBroadcastPktDescriptor();

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

Register_ClassDescriptor(ProbabilisticBroadcastPktDescriptor);

ProbabilisticBroadcastPktDescriptor::ProbabilisticBroadcastPktDescriptor() : cClassDescriptor("ProbabilisticBroadcastPkt", "NetwPkt")
{
}

ProbabilisticBroadcastPktDescriptor::~ProbabilisticBroadcastPktDescriptor()
{
}

bool ProbabilisticBroadcastPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ProbabilisticBroadcastPkt *>(obj)!=NULL;
}

const char *ProbabilisticBroadcastPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ProbabilisticBroadcastPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int ProbabilisticBroadcastPktDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *ProbabilisticBroadcastPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "id",
        "appTtl",
        "initialSrcAddr",
        "finalDestAddr",
        "nbHops",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int ProbabilisticBroadcastPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "appTtl")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "initialSrcAddr")==0) return base+2;
    if (fieldName[0]=='f' && strcmp(fieldName, "finalDestAddr")==0) return base+3;
    if (fieldName[0]=='n' && strcmp(fieldName, "nbHops")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ProbabilisticBroadcastPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "long",
        "simtime_t",
        "LAddress::L3Type",
        "LAddress::L3Type",
        "int",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *ProbabilisticBroadcastPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ProbabilisticBroadcastPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ProbabilisticBroadcastPkt *pp = (ProbabilisticBroadcastPkt *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ProbabilisticBroadcastPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ProbabilisticBroadcastPkt *pp = (ProbabilisticBroadcastPkt *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getId());
        case 1: return double2string(pp->getAppTtl());
        case 2: {std::stringstream out; out << pp->getInitialSrcAddr(); return out.str();}
        case 3: {std::stringstream out; out << pp->getFinalDestAddr(); return out.str();}
        case 4: return long2string(pp->getNbHops());
        default: return "";
    }
}

bool ProbabilisticBroadcastPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ProbabilisticBroadcastPkt *pp = (ProbabilisticBroadcastPkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setAppTtl(string2double(value)); return true;
        case 4: pp->setNbHops(string2long(value)); return true;
        default: return false;
    }
}

const char *ProbabilisticBroadcastPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        NULL,
        "LAddress::L3Type",
        "LAddress::L3Type",
        NULL,
    };
    return (field>=0 && field<5) ? fieldStructNames[field] : NULL;
}

void *ProbabilisticBroadcastPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ProbabilisticBroadcastPkt *pp = (ProbabilisticBroadcastPkt *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->getInitialSrcAddr()); break;
        case 3: return (void *)(&pp->getFinalDestAddr()); break;
        default: return NULL;
    }
}


