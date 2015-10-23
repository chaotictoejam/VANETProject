//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/wiseroute/WiseRouteDatagram.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "WiseRouteDatagram_m.h"

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

WiseRouteDatagram_Base::WiseRouteDatagram_Base(const char *name, int kind) : ::inet::NetworkDatagramBase(name,kind)
{
    this->seqNum_var = 0;
    this->isFlood_var = 0;
    this->nbHops_var = 0;
    this->transportProtocol_var = -1;
}

WiseRouteDatagram_Base::WiseRouteDatagram_Base(const WiseRouteDatagram_Base& other) : ::inet::NetworkDatagramBase(other)
{
    copy(other);
}

WiseRouteDatagram_Base::~WiseRouteDatagram_Base()
{
}

WiseRouteDatagram_Base& WiseRouteDatagram_Base::operator=(const WiseRouteDatagram_Base& other)
{
    if (this==&other) return *this;
    ::inet::NetworkDatagramBase::operator=(other);
    copy(other);
    return *this;
}

void WiseRouteDatagram_Base::copy(const WiseRouteDatagram_Base& other)
{
    this->seqNum_var = other.seqNum_var;
    this->isFlood_var = other.isFlood_var;
    this->nbHops_var = other.nbHops_var;
    this->transportProtocol_var = other.transportProtocol_var;
    this->finalDestAddr_var = other.finalDestAddr_var;
    this->initialSrcAddr_var = other.initialSrcAddr_var;
}

void WiseRouteDatagram_Base::parsimPack(cCommBuffer *b)
{
    ::inet::NetworkDatagramBase::parsimPack(b);
    doPacking(b,this->seqNum_var);
    doPacking(b,this->isFlood_var);
    doPacking(b,this->nbHops_var);
    doPacking(b,this->transportProtocol_var);
    doPacking(b,this->finalDestAddr_var);
    doPacking(b,this->initialSrcAddr_var);
}

void WiseRouteDatagram_Base::parsimUnpack(cCommBuffer *b)
{
    ::inet::NetworkDatagramBase::parsimUnpack(b);
    doUnpacking(b,this->seqNum_var);
    doUnpacking(b,this->isFlood_var);
    doUnpacking(b,this->nbHops_var);
    doUnpacking(b,this->transportProtocol_var);
    doUnpacking(b,this->finalDestAddr_var);
    doUnpacking(b,this->initialSrcAddr_var);
}

unsigned long WiseRouteDatagram_Base::getSeqNum() const
{
    return seqNum_var;
}

void WiseRouteDatagram_Base::setSeqNum(unsigned long seqNum)
{
    this->seqNum_var = seqNum;
}

int WiseRouteDatagram_Base::getIsFlood() const
{
    return isFlood_var;
}

void WiseRouteDatagram_Base::setIsFlood(int isFlood)
{
    this->isFlood_var = isFlood;
}

int WiseRouteDatagram_Base::getNbHops() const
{
    return nbHops_var;
}

void WiseRouteDatagram_Base::setNbHops(int nbHops)
{
    this->nbHops_var = nbHops;
}

int WiseRouteDatagram_Base::getTransportProtocol() const
{
    return transportProtocol_var;
}

void WiseRouteDatagram_Base::setTransportProtocol(int transportProtocol)
{
    this->transportProtocol_var = transportProtocol;
}

L3Address& WiseRouteDatagram_Base::getFinalDestAddr()
{
    return finalDestAddr_var;
}

void WiseRouteDatagram_Base::setFinalDestAddr(const L3Address& finalDestAddr)
{
    this->finalDestAddr_var = finalDestAddr;
}

L3Address& WiseRouteDatagram_Base::getInitialSrcAddr()
{
    return initialSrcAddr_var;
}

void WiseRouteDatagram_Base::setInitialSrcAddr(const L3Address& initialSrcAddr)
{
    this->initialSrcAddr_var = initialSrcAddr;
}

class WiseRouteDatagramDescriptor : public cClassDescriptor
{
  public:
    WiseRouteDatagramDescriptor();
    virtual ~WiseRouteDatagramDescriptor();

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

Register_ClassDescriptor(WiseRouteDatagramDescriptor);

WiseRouteDatagramDescriptor::WiseRouteDatagramDescriptor() : cClassDescriptor("inet::WiseRouteDatagram", "inet::NetworkDatagramBase")
{
}

WiseRouteDatagramDescriptor::~WiseRouteDatagramDescriptor()
{
}

bool WiseRouteDatagramDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<WiseRouteDatagram_Base *>(obj)!=NULL;
}

const char *WiseRouteDatagramDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int WiseRouteDatagramDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int WiseRouteDatagramDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *WiseRouteDatagramDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "seqNum",
        "isFlood",
        "nbHops",
        "transportProtocol",
        "finalDestAddr",
        "initialSrcAddr",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int WiseRouteDatagramDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNum")==0) return base+0;
    if (fieldName[0]=='i' && strcmp(fieldName, "isFlood")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "nbHops")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "transportProtocol")==0) return base+3;
    if (fieldName[0]=='f' && strcmp(fieldName, "finalDestAddr")==0) return base+4;
    if (fieldName[0]=='i' && strcmp(fieldName, "initialSrcAddr")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *WiseRouteDatagramDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned long",
        "int",
        "int",
        "int",
        "L3Address",
        "L3Address",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *WiseRouteDatagramDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int WiseRouteDatagramDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    WiseRouteDatagram_Base *pp = (WiseRouteDatagram_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string WiseRouteDatagramDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    WiseRouteDatagram_Base *pp = (WiseRouteDatagram_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSeqNum());
        case 1: return long2string(pp->getIsFlood());
        case 2: return long2string(pp->getNbHops());
        case 3: return long2string(pp->getTransportProtocol());
        case 4: {std::stringstream out; out << pp->getFinalDestAddr(); return out.str();}
        case 5: {std::stringstream out; out << pp->getInitialSrcAddr(); return out.str();}
        default: return "";
    }
}

bool WiseRouteDatagramDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    WiseRouteDatagram_Base *pp = (WiseRouteDatagram_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSeqNum(string2ulong(value)); return true;
        case 1: pp->setIsFlood(string2long(value)); return true;
        case 2: pp->setNbHops(string2long(value)); return true;
        case 3: pp->setTransportProtocol(string2long(value)); return true;
        default: return false;
    }
}

const char *WiseRouteDatagramDescriptor::getFieldStructName(void *object, int field) const
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

void *WiseRouteDatagramDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    WiseRouteDatagram_Base *pp = (WiseRouteDatagram_Base *)object; (void)pp;
    switch (field) {
        case 4: return (void *)(&pp->getFinalDestAddr()); break;
        case 5: return (void *)(&pp->getInitialSrcAddr()); break;
        default: return NULL;
    }
}

} // namespace inet

