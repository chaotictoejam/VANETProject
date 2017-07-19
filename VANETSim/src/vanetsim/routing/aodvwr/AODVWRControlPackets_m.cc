//
// Generated file, do not edit! Created by nedtool 5.1 from vanetsim/routing/aodvwr/AODVWRControlPackets.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wshadow"
#  pragma clang diagnostic ignored "-Wconversion"
#  pragma clang diagnostic ignored "-Wunused-parameter"
#  pragma clang diagnostic ignored "-Wc++98-compat"
#  pragma clang diagnostic ignored "-Wunreachable-code-break"
#  pragma clang diagnostic ignored "-Wold-style-cast"
#elif defined(__GNUC__)
#  pragma GCC diagnostic ignored "-Wshadow"
#  pragma GCC diagnostic ignored "-Wconversion"
#  pragma GCC diagnostic ignored "-Wunused-parameter"
#  pragma GCC diagnostic ignored "-Wold-style-cast"
#  pragma GCC diagnostic ignored "-Wsuggest-attribute=noreturn"
#  pragma GCC diagnostic ignored "-Wfloat-conversion"
#endif

#include <iostream>
#include <sstream>
#include "AODVWRControlPackets_m.h"

namespace omnetpp {

// Template pack/unpack rules. They are declared *after* a1l type-specific pack functions for multiple reasons.
// They are in the omnetpp namespace, to allow them to be found by argument-dependent lookup via the cCommBuffer argument

// Packing/unpacking an std::vector
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::vector<T,A>& v)
{
    int n = v.size();
    doParsimPacking(buffer, n);
    for (int i = 0; i < n; i++)
        doParsimPacking(buffer, v[i]);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::vector<T,A>& v)
{
    int n;
    doParsimUnpacking(buffer, n);
    v.resize(n);
    for (int i = 0; i < n; i++)
        doParsimUnpacking(buffer, v[i]);
}

// Packing/unpacking an std::list
template<typename T, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::list<T,A>& l)
{
    doParsimPacking(buffer, (int)l.size());
    for (typename std::list<T,A>::const_iterator it = l.begin(); it != l.end(); ++it)
        doParsimPacking(buffer, (T&)*it);
}

template<typename T, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::list<T,A>& l)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        l.push_back(T());
        doParsimUnpacking(buffer, l.back());
    }
}

// Packing/unpacking an std::set
template<typename T, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::set<T,Tr,A>& s)
{
    doParsimPacking(buffer, (int)s.size());
    for (typename std::set<T,Tr,A>::const_iterator it = s.begin(); it != s.end(); ++it)
        doParsimPacking(buffer, *it);
}

template<typename T, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::set<T,Tr,A>& s)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        T x;
        doParsimUnpacking(buffer, x);
        s.insert(x);
    }
}

// Packing/unpacking an std::map
template<typename K, typename V, typename Tr, typename A>
void doParsimPacking(omnetpp::cCommBuffer *buffer, const std::map<K,V,Tr,A>& m)
{
    doParsimPacking(buffer, (int)m.size());
    for (typename std::map<K,V,Tr,A>::const_iterator it = m.begin(); it != m.end(); ++it) {
        doParsimPacking(buffer, it->first);
        doParsimPacking(buffer, it->second);
    }
}

template<typename K, typename V, typename Tr, typename A>
void doParsimUnpacking(omnetpp::cCommBuffer *buffer, std::map<K,V,Tr,A>& m)
{
    int n;
    doParsimUnpacking(buffer, n);
    for (int i=0; i<n; i++) {
        K k; V v;
        doParsimUnpacking(buffer, k);
        doParsimUnpacking(buffer, v);
        m[k] = v;
    }
}

// Default pack/unpack function for arrays
template<typename T>
void doParsimArrayPacking(omnetpp::cCommBuffer *b, const T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimPacking(b, t[i]);
}

template<typename T>
void doParsimArrayUnpacking(omnetpp::cCommBuffer *b, T *t, int n)
{
    for (int i = 0; i < n; i++)
        doParsimUnpacking(b, t[i]);
}

// Default rule to prevent compiler from choosing base class' doParsimPacking() function
template<typename T>
void doParsimPacking(omnetpp::cCommBuffer *, const T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimPacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

template<typename T>
void doParsimUnpacking(omnetpp::cCommBuffer *, T& t)
{
    throw omnetpp::cRuntimeError("Parsim error: No doParsimUnpacking() function for type %s", omnetpp::opp_typename(typeid(t)));
}

}  // namespace omnetpp

namespace inet {

// forward
template<typename T, typename A>
std::ostream& operator<<(std::ostream& out, const std::vector<T,A>& vec);

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
inline std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// operator<< for std::vector<T>
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

UnreachableAODVWRNode::UnreachableAODVWRNode()
{
    this->seqNum = 0;
}

void __doPacking(omnetpp::cCommBuffer *b, const UnreachableAODVWRNode& a)
{
    doParsimPacking(b,a.addr);
    doParsimPacking(b,a.seqNum);
}

void __doUnpacking(omnetpp::cCommBuffer *b, UnreachableAODVWRNode& a)
{
    doParsimUnpacking(b,a.addr);
    doParsimUnpacking(b,a.seqNum);
}

class UnreachableAODVWRNodeDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    UnreachableAODVWRNodeDescriptor();
    virtual ~UnreachableAODVWRNodeDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(UnreachableAODVWRNodeDescriptor)

UnreachableAODVWRNodeDescriptor::UnreachableAODVWRNodeDescriptor() : omnetpp::cClassDescriptor("inet::UnreachableAODVWRNode", "")
{
    propertynames = nullptr;
}

UnreachableAODVWRNodeDescriptor::~UnreachableAODVWRNodeDescriptor()
{
    delete[] propertynames;
}

bool UnreachableAODVWRNodeDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<UnreachableAODVWRNode *>(obj)!=nullptr;
}

const char **UnreachableAODVWRNodeDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *UnreachableAODVWRNodeDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int UnreachableAODVWRNodeDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount() : 2;
}

unsigned int UnreachableAODVWRNodeDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *UnreachableAODVWRNodeDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "addr",
        "seqNum",
    };
    return (field>=0 && field<2) ? fieldNames[field] : nullptr;
}

int UnreachableAODVWRNodeDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addr")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqNum")==0) return base+1;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *UnreachableAODVWRNodeDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "L3Address",
        "unsigned int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : nullptr;
}

const char **UnreachableAODVWRNodeDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *UnreachableAODVWRNodeDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int UnreachableAODVWRNodeDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    UnreachableAODVWRNode *pp = (UnreachableAODVWRNode *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *UnreachableAODVWRNodeDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    UnreachableAODVWRNode *pp = (UnreachableAODVWRNode *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string UnreachableAODVWRNodeDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    UnreachableAODVWRNode *pp = (UnreachableAODVWRNode *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->addr; return out.str();}
        case 1: return ulong2string(pp->seqNum);
        default: return "";
    }
}

bool UnreachableAODVWRNodeDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    UnreachableAODVWRNode *pp = (UnreachableAODVWRNode *)object; (void)pp;
    switch (field) {
        case 1: pp->seqNum = string2ulong(value); return true;
        default: return false;
    }
}

const char *UnreachableAODVWRNodeDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 0: return omnetpp::opp_typename(typeid(L3Address));
        default: return nullptr;
    };
}

void *UnreachableAODVWRNodeDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    UnreachableAODVWRNode *pp = (UnreachableAODVWRNode *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->addr); break;
        default: return nullptr;
    }
}

EXECUTE_ON_STARTUP(
    omnetpp::cEnum *e = omnetpp::cEnum::find("inet::AODVWRControlPacketType");
    if (!e) omnetpp::enums.getInstance()->add(e = new omnetpp::cEnum("inet::AODVWRControlPacketType"));
    e->insert(RREQ, "RREQ");
    e->insert(RREP, "RREP");
    e->insert(RERR, "RERR");
    e->insert(RREPACK, "RREPACK");
)

Register_Class(AODVWRControlPacket)

AODVWRControlPacket::AODVWRControlPacket(const char *name, short kind) : ::omnetpp::cPacket(name,kind)
{
    this->packetType = 0;
}

AODVWRControlPacket::AODVWRControlPacket(const AODVWRControlPacket& other) : ::omnetpp::cPacket(other)
{
    copy(other);
}

AODVWRControlPacket::~AODVWRControlPacket()
{
}

AODVWRControlPacket& AODVWRControlPacket::operator=(const AODVWRControlPacket& other)
{
    if (this==&other) return *this;
    ::omnetpp::cPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVWRControlPacket::copy(const AODVWRControlPacket& other)
{
    this->packetType = other.packetType;
}

void AODVWRControlPacket::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::omnetpp::cPacket::parsimPack(b);
    doParsimPacking(b,this->packetType);
}

void AODVWRControlPacket::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::omnetpp::cPacket::parsimUnpack(b);
    doParsimUnpacking(b,this->packetType);
}

unsigned int AODVWRControlPacket::getPacketType() const
{
    return this->packetType;
}

void AODVWRControlPacket::setPacketType(unsigned int packetType)
{
    this->packetType = packetType;
}

class AODVWRControlPacketDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    AODVWRControlPacketDescriptor();
    virtual ~AODVWRControlPacketDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(AODVWRControlPacketDescriptor)

AODVWRControlPacketDescriptor::AODVWRControlPacketDescriptor() : omnetpp::cClassDescriptor("inet::AODVWRControlPacket", "omnetpp::cPacket")
{
    propertynames = nullptr;
}

AODVWRControlPacketDescriptor::~AODVWRControlPacketDescriptor()
{
    delete[] propertynames;
}

bool AODVWRControlPacketDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<AODVWRControlPacket *>(obj)!=nullptr;
}

const char **AODVWRControlPacketDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *AODVWRControlPacketDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int AODVWRControlPacketDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount() : 1;
}

unsigned int AODVWRControlPacketDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *AODVWRControlPacketDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "packetType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : nullptr;
}

int AODVWRControlPacketDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "packetType")==0) return base+0;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *AODVWRControlPacketDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : nullptr;
}

const char **AODVWRControlPacketDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *AODVWRControlPacketDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int AODVWRControlPacketDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    AODVWRControlPacket *pp = (AODVWRControlPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *AODVWRControlPacketDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    AODVWRControlPacket *pp = (AODVWRControlPacket *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string AODVWRControlPacketDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    AODVWRControlPacket *pp = (AODVWRControlPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPacketType());
        default: return "";
    }
}

bool AODVWRControlPacketDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    AODVWRControlPacket *pp = (AODVWRControlPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setPacketType(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVWRControlPacketDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    };
}

void *AODVWRControlPacketDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    AODVWRControlPacket *pp = (AODVWRControlPacket *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

Register_Class(AODVWRRREQ)

AODVWRRREQ::AODVWRRREQ(const char *name) : ::inet::AODVWRControlPacket(name)
{
    this->setPacketType(RREQ);

    this->joinFlag = false;
    this->repairFlag = false;
    this->gratuitousRREPFlag = false;
    this->destOnlyFlag = false;
    this->unknownSeqNumFlag = false;
    this->hopCount = 0;
    this->rreqId = 0;
    this->destSeqNum = 0;
    this->originatorSeqNum = 0;
    this->twr = 0;
    this->expirationTime = 0;
}

AODVWRRREQ::AODVWRRREQ(const AODVWRRREQ& other) : ::inet::AODVWRControlPacket(other)
{
    copy(other);
}

AODVWRRREQ::~AODVWRRREQ()
{
}

AODVWRRREQ& AODVWRRREQ::operator=(const AODVWRRREQ& other)
{
    if (this==&other) return *this;
    ::inet::AODVWRControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVWRRREQ::copy(const AODVWRRREQ& other)
{
    this->joinFlag = other.joinFlag;
    this->repairFlag = other.repairFlag;
    this->gratuitousRREPFlag = other.gratuitousRREPFlag;
    this->destOnlyFlag = other.destOnlyFlag;
    this->unknownSeqNumFlag = other.unknownSeqNumFlag;
    this->hopCount = other.hopCount;
    this->rreqId = other.rreqId;
    this->destAddr = other.destAddr;
    this->destSeqNum = other.destSeqNum;
    this->originatorAddr = other.originatorAddr;
    this->originatorSeqNum = other.originatorSeqNum;
    this->position = other.position;
    this->speed = other.speed;
    this->acceleration = other.acceleration;
    this->direction = other.direction;
    this->twr = other.twr;
    this->expirationTime = other.expirationTime;
}

void AODVWRRREQ::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::inet::AODVWRControlPacket::parsimPack(b);
    doParsimPacking(b,this->joinFlag);
    doParsimPacking(b,this->repairFlag);
    doParsimPacking(b,this->gratuitousRREPFlag);
    doParsimPacking(b,this->destOnlyFlag);
    doParsimPacking(b,this->unknownSeqNumFlag);
    doParsimPacking(b,this->hopCount);
    doParsimPacking(b,this->rreqId);
    doParsimPacking(b,this->destAddr);
    doParsimPacking(b,this->destSeqNum);
    doParsimPacking(b,this->originatorAddr);
    doParsimPacking(b,this->originatorSeqNum);
    doParsimPacking(b,this->position);
    doParsimPacking(b,this->speed);
    doParsimPacking(b,this->acceleration);
    doParsimPacking(b,this->direction);
    doParsimPacking(b,this->twr);
    doParsimPacking(b,this->expirationTime);
}

void AODVWRRREQ::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::inet::AODVWRControlPacket::parsimUnpack(b);
    doParsimUnpacking(b,this->joinFlag);
    doParsimUnpacking(b,this->repairFlag);
    doParsimUnpacking(b,this->gratuitousRREPFlag);
    doParsimUnpacking(b,this->destOnlyFlag);
    doParsimUnpacking(b,this->unknownSeqNumFlag);
    doParsimUnpacking(b,this->hopCount);
    doParsimUnpacking(b,this->rreqId);
    doParsimUnpacking(b,this->destAddr);
    doParsimUnpacking(b,this->destSeqNum);
    doParsimUnpacking(b,this->originatorAddr);
    doParsimUnpacking(b,this->originatorSeqNum);
    doParsimUnpacking(b,this->position);
    doParsimUnpacking(b,this->speed);
    doParsimUnpacking(b,this->acceleration);
    doParsimUnpacking(b,this->direction);
    doParsimUnpacking(b,this->twr);
    doParsimUnpacking(b,this->expirationTime);
}

bool AODVWRRREQ::getJoinFlag() const
{
    return this->joinFlag;
}

void AODVWRRREQ::setJoinFlag(bool joinFlag)
{
    this->joinFlag = joinFlag;
}

bool AODVWRRREQ::getRepairFlag() const
{
    return this->repairFlag;
}

void AODVWRRREQ::setRepairFlag(bool repairFlag)
{
    this->repairFlag = repairFlag;
}

bool AODVWRRREQ::getGratuitousRREPFlag() const
{
    return this->gratuitousRREPFlag;
}

void AODVWRRREQ::setGratuitousRREPFlag(bool gratuitousRREPFlag)
{
    this->gratuitousRREPFlag = gratuitousRREPFlag;
}

bool AODVWRRREQ::getDestOnlyFlag() const
{
    return this->destOnlyFlag;
}

void AODVWRRREQ::setDestOnlyFlag(bool destOnlyFlag)
{
    this->destOnlyFlag = destOnlyFlag;
}

bool AODVWRRREQ::getUnknownSeqNumFlag() const
{
    return this->unknownSeqNumFlag;
}

void AODVWRRREQ::setUnknownSeqNumFlag(bool unknownSeqNumFlag)
{
    this->unknownSeqNumFlag = unknownSeqNumFlag;
}

unsigned int AODVWRRREQ::getHopCount() const
{
    return this->hopCount;
}

void AODVWRRREQ::setHopCount(unsigned int hopCount)
{
    this->hopCount = hopCount;
}

unsigned int AODVWRRREQ::getRreqId() const
{
    return this->rreqId;
}

void AODVWRRREQ::setRreqId(unsigned int rreqId)
{
    this->rreqId = rreqId;
}

L3Address& AODVWRRREQ::getDestAddr()
{
    return this->destAddr;
}

void AODVWRRREQ::setDestAddr(const L3Address& destAddr)
{
    this->destAddr = destAddr;
}

unsigned int AODVWRRREQ::getDestSeqNum() const
{
    return this->destSeqNum;
}

void AODVWRRREQ::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum = destSeqNum;
}

L3Address& AODVWRRREQ::getOriginatorAddr()
{
    return this->originatorAddr;
}

void AODVWRRREQ::setOriginatorAddr(const L3Address& originatorAddr)
{
    this->originatorAddr = originatorAddr;
}

unsigned int AODVWRRREQ::getOriginatorSeqNum() const
{
    return this->originatorSeqNum;
}

void AODVWRRREQ::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum = originatorSeqNum;
}

Coord& AODVWRRREQ::getPosition()
{
    return this->position;
}

void AODVWRRREQ::setPosition(const Coord& position)
{
    this->position = position;
}

Coord& AODVWRRREQ::getSpeed()
{
    return this->speed;
}

void AODVWRRREQ::setSpeed(const Coord& speed)
{
    this->speed = speed;
}

Coord& AODVWRRREQ::getAcceleration()
{
    return this->acceleration;
}

void AODVWRRREQ::setAcceleration(const Coord& acceleration)
{
    this->acceleration = acceleration;
}

EulerAngles& AODVWRRREQ::getDirection()
{
    return this->direction;
}

void AODVWRRREQ::setDirection(const EulerAngles& direction)
{
    this->direction = direction;
}

double AODVWRRREQ::getTwr() const
{
    return this->twr;
}

void AODVWRRREQ::setTwr(double twr)
{
    this->twr = twr;
}

double AODVWRRREQ::getExpirationTime() const
{
    return this->expirationTime;
}

void AODVWRRREQ::setExpirationTime(double expirationTime)
{
    this->expirationTime = expirationTime;
}

class AODVWRRREQDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    AODVWRRREQDescriptor();
    virtual ~AODVWRRREQDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(AODVWRRREQDescriptor)

AODVWRRREQDescriptor::AODVWRRREQDescriptor() : omnetpp::cClassDescriptor("inet::AODVWRRREQ", "inet::AODVWRControlPacket")
{
    propertynames = nullptr;
}

AODVWRRREQDescriptor::~AODVWRRREQDescriptor()
{
    delete[] propertynames;
}

bool AODVWRRREQDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<AODVWRRREQ *>(obj)!=nullptr;
}

const char **AODVWRRREQDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *AODVWRRREQDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int AODVWRRREQDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 17+basedesc->getFieldCount() : 17;
}

unsigned int AODVWRRREQDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<17) ? fieldTypeFlags[field] : 0;
}

const char *AODVWRRREQDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "joinFlag",
        "repairFlag",
        "gratuitousRREPFlag",
        "destOnlyFlag",
        "unknownSeqNumFlag",
        "hopCount",
        "rreqId",
        "destAddr",
        "destSeqNum",
        "originatorAddr",
        "originatorSeqNum",
        "position",
        "speed",
        "acceleration",
        "direction",
        "twr",
        "expirationTime",
    };
    return (field>=0 && field<17) ? fieldNames[field] : nullptr;
}

int AODVWRRREQDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0]=='j' && strcmp(fieldName, "joinFlag")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "repairFlag")==0) return base+1;
    if (fieldName[0]=='g' && strcmp(fieldName, "gratuitousRREPFlag")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "destOnlyFlag")==0) return base+3;
    if (fieldName[0]=='u' && strcmp(fieldName, "unknownSeqNumFlag")==0) return base+4;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+5;
    if (fieldName[0]=='r' && strcmp(fieldName, "rreqId")==0) return base+6;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+7;
    if (fieldName[0]=='d' && strcmp(fieldName, "destSeqNum")==0) return base+8;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorAddr")==0) return base+9;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorSeqNum")==0) return base+10;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+11;
    if (fieldName[0]=='s' && strcmp(fieldName, "speed")==0) return base+12;
    if (fieldName[0]=='a' && strcmp(fieldName, "acceleration")==0) return base+13;
    if (fieldName[0]=='d' && strcmp(fieldName, "direction")==0) return base+14;
    if (fieldName[0]=='t' && strcmp(fieldName, "twr")==0) return base+15;
    if (fieldName[0]=='e' && strcmp(fieldName, "expirationTime")==0) return base+16;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *AODVWRRREQDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "bool",
        "bool",
        "bool",
        "bool",
        "unsigned int",
        "unsigned int",
        "L3Address",
        "unsigned int",
        "L3Address",
        "unsigned int",
        "Coord",
        "Coord",
        "Coord",
        "EulerAngles",
        "double",
        "double",
    };
    return (field>=0 && field<17) ? fieldTypeStrings[field] : nullptr;
}

const char **AODVWRRREQDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *AODVWRRREQDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int AODVWRRREQDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREQ *pp = (AODVWRRREQ *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *AODVWRRREQDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREQ *pp = (AODVWRRREQ *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string AODVWRRREQDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREQ *pp = (AODVWRRREQ *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getJoinFlag());
        case 1: return bool2string(pp->getRepairFlag());
        case 2: return bool2string(pp->getGratuitousRREPFlag());
        case 3: return bool2string(pp->getDestOnlyFlag());
        case 4: return bool2string(pp->getUnknownSeqNumFlag());
        case 5: return ulong2string(pp->getHopCount());
        case 6: return ulong2string(pp->getRreqId());
        case 7: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 8: return ulong2string(pp->getDestSeqNum());
        case 9: {std::stringstream out; out << pp->getOriginatorAddr(); return out.str();}
        case 10: return ulong2string(pp->getOriginatorSeqNum());
        case 11: {std::stringstream out; out << pp->getPosition(); return out.str();}
        case 12: {std::stringstream out; out << pp->getSpeed(); return out.str();}
        case 13: {std::stringstream out; out << pp->getAcceleration(); return out.str();}
        case 14: {std::stringstream out; out << pp->getDirection(); return out.str();}
        case 15: return double2string(pp->getTwr());
        case 16: return double2string(pp->getExpirationTime());
        default: return "";
    }
}

bool AODVWRRREQDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREQ *pp = (AODVWRRREQ *)object; (void)pp;
    switch (field) {
        case 0: pp->setJoinFlag(string2bool(value)); return true;
        case 1: pp->setRepairFlag(string2bool(value)); return true;
        case 2: pp->setGratuitousRREPFlag(string2bool(value)); return true;
        case 3: pp->setDestOnlyFlag(string2bool(value)); return true;
        case 4: pp->setUnknownSeqNumFlag(string2bool(value)); return true;
        case 5: pp->setHopCount(string2ulong(value)); return true;
        case 6: pp->setRreqId(string2ulong(value)); return true;
        case 8: pp->setDestSeqNum(string2ulong(value)); return true;
        case 10: pp->setOriginatorSeqNum(string2ulong(value)); return true;
        case 15: pp->setTwr(string2double(value)); return true;
        case 16: pp->setExpirationTime(string2double(value)); return true;
        default: return false;
    }
}

const char *AODVWRRREQDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 7: return omnetpp::opp_typename(typeid(L3Address));
        case 9: return omnetpp::opp_typename(typeid(L3Address));
        case 11: return omnetpp::opp_typename(typeid(Coord));
        case 12: return omnetpp::opp_typename(typeid(Coord));
        case 13: return omnetpp::opp_typename(typeid(Coord));
        case 14: return omnetpp::opp_typename(typeid(EulerAngles));
        default: return nullptr;
    };
}

void *AODVWRRREQDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREQ *pp = (AODVWRRREQ *)object; (void)pp;
    switch (field) {
        case 7: return (void *)(&pp->getDestAddr()); break;
        case 9: return (void *)(&pp->getOriginatorAddr()); break;
        case 11: return (void *)(&pp->getPosition()); break;
        case 12: return (void *)(&pp->getSpeed()); break;
        case 13: return (void *)(&pp->getAcceleration()); break;
        case 14: return (void *)(&pp->getDirection()); break;
        default: return nullptr;
    }
}

Register_Class(AODVWRRREP)

AODVWRRREP::AODVWRRREP(const char *name) : ::inet::AODVWRControlPacket(name)
{
    this->setPacketType(RREP);

    this->repairFlag = false;
    this->ackRequiredFlag = false;
    this->prefixSize = 0;
    this->hopCount = 0;
    this->destSeqNum = 0;
    this->originatorSeqNum = 0;
    this->lifeTime = 0;
    this->twr = 0;
    this->expirationTime = 0;
}

AODVWRRREP::AODVWRRREP(const AODVWRRREP& other) : ::inet::AODVWRControlPacket(other)
{
    copy(other);
}

AODVWRRREP::~AODVWRRREP()
{
}

AODVWRRREP& AODVWRRREP::operator=(const AODVWRRREP& other)
{
    if (this==&other) return *this;
    ::inet::AODVWRControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVWRRREP::copy(const AODVWRRREP& other)
{
    this->repairFlag = other.repairFlag;
    this->ackRequiredFlag = other.ackRequiredFlag;
    this->prefixSize = other.prefixSize;
    this->hopCount = other.hopCount;
    this->destAddr = other.destAddr;
    this->destSeqNum = other.destSeqNum;
    this->originatorAddr = other.originatorAddr;
    this->originatorSeqNum = other.originatorSeqNum;
    this->lifeTime = other.lifeTime;
    this->position = other.position;
    this->speed = other.speed;
    this->acceleration = other.acceleration;
    this->direction = other.direction;
    this->twr = other.twr;
    this->expirationTime = other.expirationTime;
}

void AODVWRRREP::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::inet::AODVWRControlPacket::parsimPack(b);
    doParsimPacking(b,this->repairFlag);
    doParsimPacking(b,this->ackRequiredFlag);
    doParsimPacking(b,this->prefixSize);
    doParsimPacking(b,this->hopCount);
    doParsimPacking(b,this->destAddr);
    doParsimPacking(b,this->destSeqNum);
    doParsimPacking(b,this->originatorAddr);
    doParsimPacking(b,this->originatorSeqNum);
    doParsimPacking(b,this->lifeTime);
    doParsimPacking(b,this->position);
    doParsimPacking(b,this->speed);
    doParsimPacking(b,this->acceleration);
    doParsimPacking(b,this->direction);
    doParsimPacking(b,this->twr);
    doParsimPacking(b,this->expirationTime);
}

void AODVWRRREP::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::inet::AODVWRControlPacket::parsimUnpack(b);
    doParsimUnpacking(b,this->repairFlag);
    doParsimUnpacking(b,this->ackRequiredFlag);
    doParsimUnpacking(b,this->prefixSize);
    doParsimUnpacking(b,this->hopCount);
    doParsimUnpacking(b,this->destAddr);
    doParsimUnpacking(b,this->destSeqNum);
    doParsimUnpacking(b,this->originatorAddr);
    doParsimUnpacking(b,this->originatorSeqNum);
    doParsimUnpacking(b,this->lifeTime);
    doParsimUnpacking(b,this->position);
    doParsimUnpacking(b,this->speed);
    doParsimUnpacking(b,this->acceleration);
    doParsimUnpacking(b,this->direction);
    doParsimUnpacking(b,this->twr);
    doParsimUnpacking(b,this->expirationTime);
}

bool AODVWRRREP::getRepairFlag() const
{
    return this->repairFlag;
}

void AODVWRRREP::setRepairFlag(bool repairFlag)
{
    this->repairFlag = repairFlag;
}

bool AODVWRRREP::getAckRequiredFlag() const
{
    return this->ackRequiredFlag;
}

void AODVWRRREP::setAckRequiredFlag(bool ackRequiredFlag)
{
    this->ackRequiredFlag = ackRequiredFlag;
}

unsigned int AODVWRRREP::getPrefixSize() const
{
    return this->prefixSize;
}

void AODVWRRREP::setPrefixSize(unsigned int prefixSize)
{
    this->prefixSize = prefixSize;
}

unsigned int AODVWRRREP::getHopCount() const
{
    return this->hopCount;
}

void AODVWRRREP::setHopCount(unsigned int hopCount)
{
    this->hopCount = hopCount;
}

L3Address& AODVWRRREP::getDestAddr()
{
    return this->destAddr;
}

void AODVWRRREP::setDestAddr(const L3Address& destAddr)
{
    this->destAddr = destAddr;
}

unsigned int AODVWRRREP::getDestSeqNum() const
{
    return this->destSeqNum;
}

void AODVWRRREP::setDestSeqNum(unsigned int destSeqNum)
{
    this->destSeqNum = destSeqNum;
}

L3Address& AODVWRRREP::getOriginatorAddr()
{
    return this->originatorAddr;
}

void AODVWRRREP::setOriginatorAddr(const L3Address& originatorAddr)
{
    this->originatorAddr = originatorAddr;
}

unsigned int AODVWRRREP::getOriginatorSeqNum() const
{
    return this->originatorSeqNum;
}

void AODVWRRREP::setOriginatorSeqNum(unsigned int originatorSeqNum)
{
    this->originatorSeqNum = originatorSeqNum;
}

::omnetpp::simtime_t AODVWRRREP::getLifeTime() const
{
    return this->lifeTime;
}

void AODVWRRREP::setLifeTime(::omnetpp::simtime_t lifeTime)
{
    this->lifeTime = lifeTime;
}

Coord& AODVWRRREP::getPosition()
{
    return this->position;
}

void AODVWRRREP::setPosition(const Coord& position)
{
    this->position = position;
}

Coord& AODVWRRREP::getSpeed()
{
    return this->speed;
}

void AODVWRRREP::setSpeed(const Coord& speed)
{
    this->speed = speed;
}

Coord& AODVWRRREP::getAcceleration()
{
    return this->acceleration;
}

void AODVWRRREP::setAcceleration(const Coord& acceleration)
{
    this->acceleration = acceleration;
}

EulerAngles& AODVWRRREP::getDirection()
{
    return this->direction;
}

void AODVWRRREP::setDirection(const EulerAngles& direction)
{
    this->direction = direction;
}

double AODVWRRREP::getTwr() const
{
    return this->twr;
}

void AODVWRRREP::setTwr(double twr)
{
    this->twr = twr;
}

double AODVWRRREP::getExpirationTime() const
{
    return this->expirationTime;
}

void AODVWRRREP::setExpirationTime(double expirationTime)
{
    this->expirationTime = expirationTime;
}

class AODVWRRREPDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    AODVWRRREPDescriptor();
    virtual ~AODVWRRREPDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(AODVWRRREPDescriptor)

AODVWRRREPDescriptor::AODVWRRREPDescriptor() : omnetpp::cClassDescriptor("inet::AODVWRRREP", "inet::AODVWRControlPacket")
{
    propertynames = nullptr;
}

AODVWRRREPDescriptor::~AODVWRRREPDescriptor()
{
    delete[] propertynames;
}

bool AODVWRRREPDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<AODVWRRREP *>(obj)!=nullptr;
}

const char **AODVWRRREPDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *AODVWRRREPDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int AODVWRRREPDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 15+basedesc->getFieldCount() : 15;
}

unsigned int AODVWRRREPDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<15) ? fieldTypeFlags[field] : 0;
}

const char *AODVWRRREPDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "repairFlag",
        "ackRequiredFlag",
        "prefixSize",
        "hopCount",
        "destAddr",
        "destSeqNum",
        "originatorAddr",
        "originatorSeqNum",
        "lifeTime",
        "position",
        "speed",
        "acceleration",
        "direction",
        "twr",
        "expirationTime",
    };
    return (field>=0 && field<15) ? fieldNames[field] : nullptr;
}

int AODVWRRREPDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "repairFlag")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "ackRequiredFlag")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefixSize")==0) return base+2;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopCount")==0) return base+3;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+4;
    if (fieldName[0]=='d' && strcmp(fieldName, "destSeqNum")==0) return base+5;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorAddr")==0) return base+6;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorSeqNum")==0) return base+7;
    if (fieldName[0]=='l' && strcmp(fieldName, "lifeTime")==0) return base+8;
    if (fieldName[0]=='p' && strcmp(fieldName, "position")==0) return base+9;
    if (fieldName[0]=='s' && strcmp(fieldName, "speed")==0) return base+10;
    if (fieldName[0]=='a' && strcmp(fieldName, "acceleration")==0) return base+11;
    if (fieldName[0]=='d' && strcmp(fieldName, "direction")==0) return base+12;
    if (fieldName[0]=='t' && strcmp(fieldName, "twr")==0) return base+13;
    if (fieldName[0]=='e' && strcmp(fieldName, "expirationTime")==0) return base+14;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *AODVWRRREPDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "bool",
        "unsigned int",
        "unsigned int",
        "L3Address",
        "unsigned int",
        "L3Address",
        "unsigned int",
        "simtime_t",
        "Coord",
        "Coord",
        "Coord",
        "EulerAngles",
        "double",
        "double",
    };
    return (field>=0 && field<15) ? fieldTypeStrings[field] : nullptr;
}

const char **AODVWRRREPDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *AODVWRRREPDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int AODVWRRREPDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREP *pp = (AODVWRRREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *AODVWRRREPDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREP *pp = (AODVWRRREP *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string AODVWRRREPDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREP *pp = (AODVWRRREP *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getRepairFlag());
        case 1: return bool2string(pp->getAckRequiredFlag());
        case 2: return ulong2string(pp->getPrefixSize());
        case 3: return ulong2string(pp->getHopCount());
        case 4: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 5: return ulong2string(pp->getDestSeqNum());
        case 6: {std::stringstream out; out << pp->getOriginatorAddr(); return out.str();}
        case 7: return ulong2string(pp->getOriginatorSeqNum());
        case 8: return simtime2string(pp->getLifeTime());
        case 9: {std::stringstream out; out << pp->getPosition(); return out.str();}
        case 10: {std::stringstream out; out << pp->getSpeed(); return out.str();}
        case 11: {std::stringstream out; out << pp->getAcceleration(); return out.str();}
        case 12: {std::stringstream out; out << pp->getDirection(); return out.str();}
        case 13: return double2string(pp->getTwr());
        case 14: return double2string(pp->getExpirationTime());
        default: return "";
    }
}

bool AODVWRRREPDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREP *pp = (AODVWRRREP *)object; (void)pp;
    switch (field) {
        case 0: pp->setRepairFlag(string2bool(value)); return true;
        case 1: pp->setAckRequiredFlag(string2bool(value)); return true;
        case 2: pp->setPrefixSize(string2ulong(value)); return true;
        case 3: pp->setHopCount(string2ulong(value)); return true;
        case 5: pp->setDestSeqNum(string2ulong(value)); return true;
        case 7: pp->setOriginatorSeqNum(string2ulong(value)); return true;
        case 8: pp->setLifeTime(string2simtime(value)); return true;
        case 13: pp->setTwr(string2double(value)); return true;
        case 14: pp->setExpirationTime(string2double(value)); return true;
        default: return false;
    }
}

const char *AODVWRRREPDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 4: return omnetpp::opp_typename(typeid(L3Address));
        case 6: return omnetpp::opp_typename(typeid(L3Address));
        case 9: return omnetpp::opp_typename(typeid(Coord));
        case 10: return omnetpp::opp_typename(typeid(Coord));
        case 11: return omnetpp::opp_typename(typeid(Coord));
        case 12: return omnetpp::opp_typename(typeid(EulerAngles));
        default: return nullptr;
    };
}

void *AODVWRRREPDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREP *pp = (AODVWRRREP *)object; (void)pp;
    switch (field) {
        case 4: return (void *)(&pp->getDestAddr()); break;
        case 6: return (void *)(&pp->getOriginatorAddr()); break;
        case 9: return (void *)(&pp->getPosition()); break;
        case 10: return (void *)(&pp->getSpeed()); break;
        case 11: return (void *)(&pp->getAcceleration()); break;
        case 12: return (void *)(&pp->getDirection()); break;
        default: return nullptr;
    }
}

Register_Class(AODVWRRERR)

AODVWRRERR::AODVWRRERR(const char *name) : ::inet::AODVWRControlPacket(name)
{
    this->setPacketType(RERR);

    unreachableNodes_arraysize = 0;
    this->unreachableNodes = 0;
    this->noDeleteFlag = false;
    this->destCount = 0;
}

AODVWRRERR::AODVWRRERR(const AODVWRRERR& other) : ::inet::AODVWRControlPacket(other)
{
    unreachableNodes_arraysize = 0;
    this->unreachableNodes = 0;
    copy(other);
}

AODVWRRERR::~AODVWRRERR()
{
    delete [] this->unreachableNodes;
}

AODVWRRERR& AODVWRRERR::operator=(const AODVWRRERR& other)
{
    if (this==&other) return *this;
    ::inet::AODVWRControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVWRRERR::copy(const AODVWRRERR& other)
{
    delete [] this->unreachableNodes;
    this->unreachableNodes = (other.unreachableNodes_arraysize==0) ? nullptr : new UnreachableAODVWRNode[other.unreachableNodes_arraysize];
    unreachableNodes_arraysize = other.unreachableNodes_arraysize;
    for (unsigned int i=0; i<unreachableNodes_arraysize; i++)
        this->unreachableNodes[i] = other.unreachableNodes[i];
    this->noDeleteFlag = other.noDeleteFlag;
    this->destCount = other.destCount;
}

void AODVWRRERR::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::inet::AODVWRControlPacket::parsimPack(b);
    b->pack(unreachableNodes_arraysize);
    doParsimArrayPacking(b,this->unreachableNodes,unreachableNodes_arraysize);
    doParsimPacking(b,this->noDeleteFlag);
    doParsimPacking(b,this->destCount);
}

void AODVWRRERR::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::inet::AODVWRControlPacket::parsimUnpack(b);
    delete [] this->unreachableNodes;
    b->unpack(unreachableNodes_arraysize);
    if (unreachableNodes_arraysize==0) {
        this->unreachableNodes = 0;
    } else {
        this->unreachableNodes = new UnreachableAODVWRNode[unreachableNodes_arraysize];
        doParsimArrayUnpacking(b,this->unreachableNodes,unreachableNodes_arraysize);
    }
    doParsimUnpacking(b,this->noDeleteFlag);
    doParsimUnpacking(b,this->destCount);
}

void AODVWRRERR::setUnreachableNodesArraySize(unsigned int size)
{
    UnreachableAODVWRNode *unreachableNodes2 = (size==0) ? nullptr : new UnreachableAODVWRNode[size];
    unsigned int sz = unreachableNodes_arraysize < size ? unreachableNodes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        unreachableNodes2[i] = this->unreachableNodes[i];
    unreachableNodes_arraysize = size;
    delete [] this->unreachableNodes;
    this->unreachableNodes = unreachableNodes2;
}

unsigned int AODVWRRERR::getUnreachableNodesArraySize() const
{
    return unreachableNodes_arraysize;
}

UnreachableAODVWRNode& AODVWRRERR::getUnreachableNodes(unsigned int k)
{
    if (k>=unreachableNodes_arraysize) throw omnetpp::cRuntimeError("Array of size %d indexed by %d", unreachableNodes_arraysize, k);
    return this->unreachableNodes[k];
}

void AODVWRRERR::setUnreachableNodes(unsigned int k, const UnreachableAODVWRNode& unreachableNodes)
{
    if (k>=unreachableNodes_arraysize) throw omnetpp::cRuntimeError("Array of size %d indexed by %d", unreachableNodes_arraysize, k);
    this->unreachableNodes[k] = unreachableNodes;
}

bool AODVWRRERR::getNoDeleteFlag() const
{
    return this->noDeleteFlag;
}

void AODVWRRERR::setNoDeleteFlag(bool noDeleteFlag)
{
    this->noDeleteFlag = noDeleteFlag;
}

unsigned int AODVWRRERR::getDestCount() const
{
    return this->destCount;
}

void AODVWRRERR::setDestCount(unsigned int destCount)
{
    this->destCount = destCount;
}

class AODVWRRERRDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    AODVWRRERRDescriptor();
    virtual ~AODVWRRERRDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(AODVWRRERRDescriptor)

AODVWRRERRDescriptor::AODVWRRERRDescriptor() : omnetpp::cClassDescriptor("inet::AODVWRRERR", "inet::AODVWRControlPacket")
{
    propertynames = nullptr;
}

AODVWRRERRDescriptor::~AODVWRRERRDescriptor()
{
    delete[] propertynames;
}

bool AODVWRRERRDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<AODVWRRERR *>(obj)!=nullptr;
}

const char **AODVWRRERRDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *AODVWRRERRDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int AODVWRRERRDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount() : 3;
}

unsigned int AODVWRRERRDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *AODVWRRERRDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "unreachableNodes",
        "noDeleteFlag",
        "destCount",
    };
    return (field>=0 && field<3) ? fieldNames[field] : nullptr;
}

int AODVWRRERRDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0]=='u' && strcmp(fieldName, "unreachableNodes")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "noDeleteFlag")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "destCount")==0) return base+2;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *AODVWRRERRDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "UnreachableAODVWRNode",
        "bool",
        "unsigned int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : nullptr;
}

const char **AODVWRRERRDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *AODVWRRERRDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int AODVWRRERRDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    AODVWRRERR *pp = (AODVWRRERR *)object; (void)pp;
    switch (field) {
        case 0: return pp->getUnreachableNodesArraySize();
        default: return 0;
    }
}

const char *AODVWRRERRDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRERR *pp = (AODVWRRERR *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string AODVWRRERRDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRERR *pp = (AODVWRRERR *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getUnreachableNodes(i); return out.str();}
        case 1: return bool2string(pp->getNoDeleteFlag());
        case 2: return ulong2string(pp->getDestCount());
        default: return "";
    }
}

bool AODVWRRERRDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    AODVWRRERR *pp = (AODVWRRERR *)object; (void)pp;
    switch (field) {
        case 1: pp->setNoDeleteFlag(string2bool(value)); return true;
        case 2: pp->setDestCount(string2ulong(value)); return true;
        default: return false;
    }
}

const char *AODVWRRERRDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 0: return omnetpp::opp_typename(typeid(UnreachableAODVWRNode));
        default: return nullptr;
    };
}

void *AODVWRRERRDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRERR *pp = (AODVWRRERR *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getUnreachableNodes(i)); break;
        default: return nullptr;
    }
}

Register_Class(AODVWRRREPACK)

AODVWRRREPACK::AODVWRRREPACK(const char *name) : ::inet::AODVWRControlPacket(name)
{
    this->setPacketType(RREPACK);
}

AODVWRRREPACK::AODVWRRREPACK(const AODVWRRREPACK& other) : ::inet::AODVWRControlPacket(other)
{
    copy(other);
}

AODVWRRREPACK::~AODVWRRREPACK()
{
}

AODVWRRREPACK& AODVWRRREPACK::operator=(const AODVWRRREPACK& other)
{
    if (this==&other) return *this;
    ::inet::AODVWRControlPacket::operator=(other);
    copy(other);
    return *this;
}

void AODVWRRREPACK::copy(const AODVWRRREPACK& other)
{
}

void AODVWRRREPACK::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::inet::AODVWRControlPacket::parsimPack(b);
}

void AODVWRRREPACK::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::inet::AODVWRControlPacket::parsimUnpack(b);
}

class AODVWRRREPACKDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    AODVWRRREPACKDescriptor();
    virtual ~AODVWRRREPACKDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(AODVWRRREPACKDescriptor)

AODVWRRREPACKDescriptor::AODVWRRREPACKDescriptor() : omnetpp::cClassDescriptor("inet::AODVWRRREPACK", "inet::AODVWRControlPacket")
{
    propertynames = nullptr;
}

AODVWRRREPACKDescriptor::~AODVWRRREPACKDescriptor()
{
    delete[] propertynames;
}

bool AODVWRRREPACKDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<AODVWRRREPACK *>(obj)!=nullptr;
}

const char **AODVWRRREPACKDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *AODVWRRREPACKDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int AODVWRRREPACKDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount() : 0;
}

unsigned int AODVWRRREPACKDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    return 0;
}

const char *AODVWRRREPACKDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    return nullptr;
}

int AODVWRRREPACKDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *AODVWRRREPACKDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    return nullptr;
}

const char **AODVWRRREPACKDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *AODVWRRREPACKDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int AODVWRRREPACKDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREPACK *pp = (AODVWRRREPACK *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *AODVWRRREPACKDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREPACK *pp = (AODVWRRREPACK *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string AODVWRRREPACKDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREPACK *pp = (AODVWRRREPACK *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool AODVWRRREPACKDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREPACK *pp = (AODVWRRREPACK *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *AODVWRRREPACKDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    return nullptr;
}

void *AODVWRRREPACKDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    AODVWRRREPACK *pp = (AODVWRRREPACK *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

Register_Class(WaitForRREPWR)

WaitForRREPWR::WaitForRREPWR(const char *name, short kind) : ::omnetpp::cMessage(name,kind)
{
    this->lastTTL = 0;
    this->fromInvalidEntry = false;
}

WaitForRREPWR::WaitForRREPWR(const WaitForRREPWR& other) : ::omnetpp::cMessage(other)
{
    copy(other);
}

WaitForRREPWR::~WaitForRREPWR()
{
}

WaitForRREPWR& WaitForRREPWR::operator=(const WaitForRREPWR& other)
{
    if (this==&other) return *this;
    ::omnetpp::cMessage::operator=(other);
    copy(other);
    return *this;
}

void WaitForRREPWR::copy(const WaitForRREPWR& other)
{
    this->destAddr = other.destAddr;
    this->lastTTL = other.lastTTL;
    this->fromInvalidEntry = other.fromInvalidEntry;
}

void WaitForRREPWR::parsimPack(omnetpp::cCommBuffer *b) const
{
    ::omnetpp::cMessage::parsimPack(b);
    doParsimPacking(b,this->destAddr);
    doParsimPacking(b,this->lastTTL);
    doParsimPacking(b,this->fromInvalidEntry);
}

void WaitForRREPWR::parsimUnpack(omnetpp::cCommBuffer *b)
{
    ::omnetpp::cMessage::parsimUnpack(b);
    doParsimUnpacking(b,this->destAddr);
    doParsimUnpacking(b,this->lastTTL);
    doParsimUnpacking(b,this->fromInvalidEntry);
}

L3Address& WaitForRREPWR::getDestAddr()
{
    return this->destAddr;
}

void WaitForRREPWR::setDestAddr(const L3Address& destAddr)
{
    this->destAddr = destAddr;
}

unsigned int WaitForRREPWR::getLastTTL() const
{
    return this->lastTTL;
}

void WaitForRREPWR::setLastTTL(unsigned int lastTTL)
{
    this->lastTTL = lastTTL;
}

bool WaitForRREPWR::getFromInvalidEntry() const
{
    return this->fromInvalidEntry;
}

void WaitForRREPWR::setFromInvalidEntry(bool fromInvalidEntry)
{
    this->fromInvalidEntry = fromInvalidEntry;
}

class WaitForRREPWRDescriptor : public omnetpp::cClassDescriptor
{
  private:
    mutable const char **propertynames;
  public:
    WaitForRREPWRDescriptor();
    virtual ~WaitForRREPWRDescriptor();

    virtual bool doesSupport(omnetpp::cObject *obj) const override;
    virtual const char **getPropertyNames() const override;
    virtual const char *getProperty(const char *propertyname) const override;
    virtual int getFieldCount() const override;
    virtual const char *getFieldName(int field) const override;
    virtual int findField(const char *fieldName) const override;
    virtual unsigned int getFieldTypeFlags(int field) const override;
    virtual const char *getFieldTypeString(int field) const override;
    virtual const char **getFieldPropertyNames(int field) const override;
    virtual const char *getFieldProperty(int field, const char *propertyname) const override;
    virtual int getFieldArraySize(void *object, int field) const override;

    virtual const char *getFieldDynamicTypeString(void *object, int field, int i) const override;
    virtual std::string getFieldValueAsString(void *object, int field, int i) const override;
    virtual bool setFieldValueAsString(void *object, int field, int i, const char *value) const override;

    virtual const char *getFieldStructName(int field) const override;
    virtual void *getFieldStructValuePointer(void *object, int field, int i) const override;
};

Register_ClassDescriptor(WaitForRREPWRDescriptor)

WaitForRREPWRDescriptor::WaitForRREPWRDescriptor() : omnetpp::cClassDescriptor("inet::WaitForRREPWR", "omnetpp::cMessage")
{
    propertynames = nullptr;
}

WaitForRREPWRDescriptor::~WaitForRREPWRDescriptor()
{
    delete[] propertynames;
}

bool WaitForRREPWRDescriptor::doesSupport(omnetpp::cObject *obj) const
{
    return dynamic_cast<WaitForRREPWR *>(obj)!=nullptr;
}

const char **WaitForRREPWRDescriptor::getPropertyNames() const
{
    if (!propertynames) {
        static const char *names[] = {  nullptr };
        omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
        const char **basenames = basedesc ? basedesc->getPropertyNames() : nullptr;
        propertynames = mergeLists(basenames, names);
    }
    return propertynames;
}

const char *WaitForRREPWRDescriptor::getProperty(const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : nullptr;
}

int WaitForRREPWRDescriptor::getFieldCount() const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount() : 3;
}

unsigned int WaitForRREPWRDescriptor::getFieldTypeFlags(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeFlags(field);
        field -= basedesc->getFieldCount();
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *WaitForRREPWRDescriptor::getFieldName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldName(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldNames[] = {
        "destAddr",
        "lastTTL",
        "fromInvalidEntry",
    };
    return (field>=0 && field<3) ? fieldNames[field] : nullptr;
}

int WaitForRREPWRDescriptor::findField(const char *fieldName) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount() : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destAddr")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "lastTTL")==0) return base+1;
    if (fieldName[0]=='f' && strcmp(fieldName, "fromInvalidEntry")==0) return base+2;
    return basedesc ? basedesc->findField(fieldName) : -1;
}

const char *WaitForRREPWRDescriptor::getFieldTypeString(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldTypeString(field);
        field -= basedesc->getFieldCount();
    }
    static const char *fieldTypeStrings[] = {
        "L3Address",
        "unsigned int",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : nullptr;
}

const char **WaitForRREPWRDescriptor::getFieldPropertyNames(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldPropertyNames(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

const char *WaitForRREPWRDescriptor::getFieldProperty(int field, const char *propertyname) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldProperty(field, propertyname);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        default: return nullptr;
    }
}

int WaitForRREPWRDescriptor::getFieldArraySize(void *object, int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldArraySize(object, field);
        field -= basedesc->getFieldCount();
    }
    WaitForRREPWR *pp = (WaitForRREPWR *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

const char *WaitForRREPWRDescriptor::getFieldDynamicTypeString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldDynamicTypeString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    WaitForRREPWR *pp = (WaitForRREPWR *)object; (void)pp;
    switch (field) {
        default: return nullptr;
    }
}

std::string WaitForRREPWRDescriptor::getFieldValueAsString(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldValueAsString(object,field,i);
        field -= basedesc->getFieldCount();
    }
    WaitForRREPWR *pp = (WaitForRREPWR *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getDestAddr(); return out.str();}
        case 1: return ulong2string(pp->getLastTTL());
        case 2: return bool2string(pp->getFromInvalidEntry());
        default: return "";
    }
}

bool WaitForRREPWRDescriptor::setFieldValueAsString(void *object, int field, int i, const char *value) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->setFieldValueAsString(object,field,i,value);
        field -= basedesc->getFieldCount();
    }
    WaitForRREPWR *pp = (WaitForRREPWR *)object; (void)pp;
    switch (field) {
        case 1: pp->setLastTTL(string2ulong(value)); return true;
        case 2: pp->setFromInvalidEntry(string2bool(value)); return true;
        default: return false;
    }
}

const char *WaitForRREPWRDescriptor::getFieldStructName(int field) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructName(field);
        field -= basedesc->getFieldCount();
    }
    switch (field) {
        case 0: return omnetpp::opp_typename(typeid(L3Address));
        default: return nullptr;
    };
}

void *WaitForRREPWRDescriptor::getFieldStructValuePointer(void *object, int field, int i) const
{
    omnetpp::cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount())
            return basedesc->getFieldStructValuePointer(object, field, i);
        field -= basedesc->getFieldCount();
    }
    WaitForRREPWR *pp = (WaitForRREPWR *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getDestAddr()); break;
        default: return nullptr;
    }
}

} // namespace inet

