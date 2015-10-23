//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/probabilistic/ProbabilisticBroadcastDatagram.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ProbabilisticBroadcastDatagram_m.h"

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

ProbabilisticBroadcastDatagram_Base::ProbabilisticBroadcastDatagram_Base(const char *name, int kind) : ::inet::NetworkDatagramBase(name,kind)
{
    this->id_var = 0;
    this->nbHops_var = 0;
    this->transportProtocol_var = -1;
    this->appTtl_var = 0;
}

ProbabilisticBroadcastDatagram_Base::ProbabilisticBroadcastDatagram_Base(const ProbabilisticBroadcastDatagram_Base& other) : ::inet::NetworkDatagramBase(other)
{
    copy(other);
}

ProbabilisticBroadcastDatagram_Base::~ProbabilisticBroadcastDatagram_Base()
{
}

ProbabilisticBroadcastDatagram_Base& ProbabilisticBroadcastDatagram_Base::operator=(const ProbabilisticBroadcastDatagram_Base& other)
{
    if (this==&other) return *this;
    ::inet::NetworkDatagramBase::operator=(other);
    copy(other);
    return *this;
}

void ProbabilisticBroadcastDatagram_Base::copy(const ProbabilisticBroadcastDatagram_Base& other)
{
    this->id_var = other.id_var;
    this->nbHops_var = other.nbHops_var;
    this->transportProtocol_var = other.transportProtocol_var;
    this->appTtl_var = other.appTtl_var;
    this->initialSrcAddr_var = other.initialSrcAddr_var;
    this->finalDestAddr_var = other.finalDestAddr_var;
}

void ProbabilisticBroadcastDatagram_Base::parsimPack(cCommBuffer *b)
{
    ::inet::NetworkDatagramBase::parsimPack(b);
    doPacking(b,this->id_var);
    doPacking(b,this->nbHops_var);
    doPacking(b,this->transportProtocol_var);
    doPacking(b,this->appTtl_var);
    doPacking(b,this->initialSrcAddr_var);
    doPacking(b,this->finalDestAddr_var);
}

void ProbabilisticBroadcastDatagram_Base::parsimUnpack(cCommBuffer *b)
{
    ::inet::NetworkDatagramBase::parsimUnpack(b);
    doUnpacking(b,this->id_var);
    doUnpacking(b,this->nbHops_var);
    doUnpacking(b,this->transportProtocol_var);
    doUnpacking(b,this->appTtl_var);
    doUnpacking(b,this->initialSrcAddr_var);
    doUnpacking(b,this->finalDestAddr_var);
}

long ProbabilisticBroadcastDatagram_Base::getId() const
{
    return id_var;
}

void ProbabilisticBroadcastDatagram_Base::setId(long id)
{
    this->id_var = id;
}

int ProbabilisticBroadcastDatagram_Base::getNbHops() const
{
    return nbHops_var;
}

void ProbabilisticBroadcastDatagram_Base::setNbHops(int nbHops)
{
    this->nbHops_var = nbHops;
}

int ProbabilisticBroadcastDatagram_Base::getTransportProtocol() const
{
    return transportProtocol_var;
}

void ProbabilisticBroadcastDatagram_Base::setTransportProtocol(int transportProtocol)
{
    this->transportProtocol_var = transportProtocol;
}

simtime_t ProbabilisticBroadcastDatagram_Base::getAppTtl() const
{
    return appTtl_var;
}

void ProbabilisticBroadcastDatagram_Base::setAppTtl(simtime_t appTtl)
{
    this->appTtl_var = appTtl;
}

L3Address& ProbabilisticBroadcastDatagram_Base::getInitialSrcAddr()
{
    return initialSrcAddr_var;
}

void ProbabilisticBroadcastDatagram_Base::setInitialSrcAddr(const L3Address& initialSrcAddr)
{
    this->initialSrcAddr_var = initialSrcAddr;
}

L3Address& ProbabilisticBroadcastDatagram_Base::getFinalDestAddr()
{
    return finalDestAddr_var;
}

void ProbabilisticBroadcastDatagram_Base::setFinalDestAddr(const L3Address& finalDestAddr)
{
    this->finalDestAddr_var = finalDestAddr;
}

class ProbabilisticBroadcastDatagramDescriptor : public cClassDescriptor
{
  public:
    ProbabilisticBroadcastDatagramDescriptor();
    virtual ~ProbabilisticBroadcastDatagramDescriptor();

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

Register_ClassDescriptor(ProbabilisticBroadcastDatagramDescriptor);

ProbabilisticBroadcastDatagramDescriptor::ProbabilisticBroadcastDatagramDescriptor() : cClassDescriptor("inet::ProbabilisticBroadcastDatagram", "inet::NetworkDatagramBase")
{
}

ProbabilisticBroadcastDatagramDescriptor::~ProbabilisticBroadcastDatagramDescriptor()
{
}

bool ProbabilisticBroadcastDatagramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ProbabilisticBroadcastDatagram_Base *>(obj)!=NULL;
}

const char *ProbabilisticBroadcastDatagramDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ProbabilisticBroadcastDatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int ProbabilisticBroadcastDatagramDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *ProbabilisticBroadcastDatagramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "id",
        "nbHops",
        "transportProtocol",
        "appTtl",
        "initialSrcAddr",
        "finalDestAddr",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int ProbabilisticBroadcastDatagramDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "id")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nbHops")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "transportProtocol")==0) return base+2;
    if (fieldName[0]=='a' && strcmp(fieldName, "appTtl")==0) return base+3;
    if (fieldName[0]=='i' && strcmp(fieldName, "initialSrcAddr")==0) return base+4;
    if (fieldName[0]=='f' && strcmp(fieldName, "finalDestAddr")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ProbabilisticBroadcastDatagramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "long",
        "int",
        "int",
        "simtime_t",
        "L3Address",
        "L3Address",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *ProbabilisticBroadcastDatagramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ProbabilisticBroadcastDatagramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ProbabilisticBroadcastDatagram_Base *pp = (ProbabilisticBroadcastDatagram_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ProbabilisticBroadcastDatagramDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ProbabilisticBroadcastDatagram_Base *pp = (ProbabilisticBroadcastDatagram_Base *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getId());
        case 1: return long2string(pp->getNbHops());
        case 2: return long2string(pp->getTransportProtocol());
        case 3: return double2string(pp->getAppTtl());
        case 4: {std::stringstream out; out << pp->getInitialSrcAddr(); return out.str();}
        case 5: {std::stringstream out; out << pp->getFinalDestAddr(); return out.str();}
        default: return "";
    }
}

bool ProbabilisticBroadcastDatagramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ProbabilisticBroadcastDatagram_Base *pp = (ProbabilisticBroadcastDatagram_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setId(string2long(value)); return true;
        case 1: pp->setNbHops(string2long(value)); return true;
        case 2: pp->setTransportProtocol(string2long(value)); return true;
        case 3: pp->setAppTtl(string2double(value)); return true;
        default: return false;
    }
}

const char *ProbabilisticBroadcastDatagramDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 4: return opp_typename(typeid(L3Address));
        case 5: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *ProbabilisticBroadcastDatagramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ProbabilisticBroadcastDatagram_Base *pp = (ProbabilisticBroadcastDatagram_Base *)object; (void)pp;
    switch (field) {
        case 4: return (void *)(&pp->getInitialSrcAddr()); break;
        case 5: return (void *)(&pp->getFinalDestAddr()); break;
        default: return NULL;
    }
}

} // namespace inet

