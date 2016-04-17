//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/ldp/LDPPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LDPPacket_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("LDP_MESSAGE_TYPES");
    if (!e) enums.getInstance()->add(e = new cEnum("LDP_MESSAGE_TYPES"));
    e->insert(NOTIFICATION, "NOTIFICATION");
    e->insert(HELLO, "HELLO");
    e->insert(INITIALIZATION, "INITIALIZATION");
    e->insert(KEEP_ALIVE, "KEEP_ALIVE");
    e->insert(ADDRESS, "ADDRESS");
    e->insert(ADDRESS_WITHDRAW, "ADDRESS_WITHDRAW");
    e->insert(LABEL_MAPPING, "LABEL_MAPPING");
    e->insert(LABEL_REQUEST, "LABEL_REQUEST");
    e->insert(LABEL_WITHDRAW, "LABEL_WITHDRAW");
    e->insert(LABEL_RELEASE, "LABEL_RELEASE");
    e->insert(UNKNOWN, "UNKNOWN");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("LDP_STATUS_TYPES");
    if (!e) enums.getInstance()->add(e = new cEnum("LDP_STATUS_TYPES"));
    e->insert(NO_ROUTE, "NO_ROUTE");
);

FEC_TLV::FEC_TLV()
{
    length = 0;
}

void doPacking(cCommBuffer *b, FEC_TLV& a)
{
    doPacking(b,a.addr);
    doPacking(b,a.length);
}

void doUnpacking(cCommBuffer *b, FEC_TLV& a)
{
    doUnpacking(b,a.addr);
    doUnpacking(b,a.length);
}

class FEC_TLVDescriptor : public cClassDescriptor
{
  public:
    FEC_TLVDescriptor();
    virtual ~FEC_TLVDescriptor();

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

Register_ClassDescriptor(FEC_TLVDescriptor);

FEC_TLVDescriptor::FEC_TLVDescriptor() : cClassDescriptor("FEC_TLV", "")
{
}

FEC_TLVDescriptor::~FEC_TLVDescriptor()
{
}

bool FEC_TLVDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<FEC_TLV *>(obj)!=NULL;
}

const char *FEC_TLVDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int FEC_TLVDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int FEC_TLVDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *FEC_TLVDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "addr",
        "length",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int FEC_TLVDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addr")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *FEC_TLVDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "IPv4Address",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *FEC_TLVDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int FEC_TLVDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    FEC_TLV *pp = (FEC_TLV *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string FEC_TLVDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    FEC_TLV *pp = (FEC_TLV *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->addr; return out.str();}
        case 1: return long2string(pp->length);
        default: return "";
    }
}

bool FEC_TLVDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    FEC_TLV *pp = (FEC_TLV *)object; (void)pp;
    switch (field) {
        case 1: pp->length = string2long(value); return true;
        default: return false;
    }
}

const char *FEC_TLVDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *FEC_TLVDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    FEC_TLV *pp = (FEC_TLV *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->addr); break;
        default: return NULL;
    }
}

Register_Class(LDPPacket);

LDPPacket::LDPPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->type_var = 0;
}

LDPPacket::LDPPacket(const LDPPacket& other) : ::cPacket(other)
{
    copy(other);
}

LDPPacket::~LDPPacket()
{
}

LDPPacket& LDPPacket::operator=(const LDPPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void LDPPacket::copy(const LDPPacket& other)
{
    this->type_var = other.type_var;
    this->senderAddress_var = other.senderAddress_var;
    this->receiverAddress_var = other.receiverAddress_var;
}

void LDPPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->senderAddress_var);
    doPacking(b,this->receiverAddress_var);
}

void LDPPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->senderAddress_var);
    doUnpacking(b,this->receiverAddress_var);
}

int LDPPacket::getType() const
{
    return type_var;
}

void LDPPacket::setType(int type)
{
    this->type_var = type;
}

IPv4Address& LDPPacket::getSenderAddress()
{
    return senderAddress_var;
}

void LDPPacket::setSenderAddress(const IPv4Address& senderAddress)
{
    this->senderAddress_var = senderAddress;
}

IPv4Address& LDPPacket::getReceiverAddress()
{
    return receiverAddress_var;
}

void LDPPacket::setReceiverAddress(const IPv4Address& receiverAddress)
{
    this->receiverAddress_var = receiverAddress;
}

class LDPPacketDescriptor : public cClassDescriptor
{
  public:
    LDPPacketDescriptor();
    virtual ~LDPPacketDescriptor();

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

Register_ClassDescriptor(LDPPacketDescriptor);

LDPPacketDescriptor::LDPPacketDescriptor() : cClassDescriptor("LDPPacket", "cPacket")
{
}

LDPPacketDescriptor::~LDPPacketDescriptor()
{
}

bool LDPPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LDPPacket *>(obj)!=NULL;
}

const char *LDPPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LDPPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int LDPPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *LDPPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "senderAddress",
        "receiverAddress",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int LDPPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderAddress")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "receiverAddress")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LDPPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "IPv4Address",
        "IPv4Address",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *LDPPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LDPPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LDPPacket *pp = (LDPPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LDPPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LDPPacket *pp = (LDPPacket *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: {std::stringstream out; out << pp->getSenderAddress(); return out.str();}
        case 2: {std::stringstream out; out << pp->getReceiverAddress(); return out.str();}
        default: return "";
    }
}

bool LDPPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LDPPacket *pp = (LDPPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        default: return false;
    }
}

const char *LDPPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(IPv4Address));
        case 2: return opp_typename(typeid(IPv4Address));
        default: return NULL;
    };
}

void *LDPPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LDPPacket *pp = (LDPPacket *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getSenderAddress()); break;
        case 2: return (void *)(&pp->getReceiverAddress()); break;
        default: return NULL;
    }
}

Register_Class(LDPLabelMapping);

LDPLabelMapping::LDPLabelMapping(const char *name, int kind) : ::LDPPacket(name,kind)
{
    this->label_var = 0;
}

LDPLabelMapping::LDPLabelMapping(const LDPLabelMapping& other) : ::LDPPacket(other)
{
    copy(other);
}

LDPLabelMapping::~LDPLabelMapping()
{
}

LDPLabelMapping& LDPLabelMapping::operator=(const LDPLabelMapping& other)
{
    if (this==&other) return *this;
    ::LDPPacket::operator=(other);
    copy(other);
    return *this;
}

void LDPLabelMapping::copy(const LDPLabelMapping& other)
{
    this->fec_var = other.fec_var;
    this->label_var = other.label_var;
}

void LDPLabelMapping::parsimPack(cCommBuffer *b)
{
    ::LDPPacket::parsimPack(b);
    doPacking(b,this->fec_var);
    doPacking(b,this->label_var);
}

void LDPLabelMapping::parsimUnpack(cCommBuffer *b)
{
    ::LDPPacket::parsimUnpack(b);
    doUnpacking(b,this->fec_var);
    doUnpacking(b,this->label_var);
}

FEC_TLV& LDPLabelMapping::getFec()
{
    return fec_var;
}

void LDPLabelMapping::setFec(const FEC_TLV& fec)
{
    this->fec_var = fec;
}

int LDPLabelMapping::getLabel() const
{
    return label_var;
}

void LDPLabelMapping::setLabel(int label)
{
    this->label_var = label;
}

class LDPLabelMappingDescriptor : public cClassDescriptor
{
  public:
    LDPLabelMappingDescriptor();
    virtual ~LDPLabelMappingDescriptor();

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

Register_ClassDescriptor(LDPLabelMappingDescriptor);

LDPLabelMappingDescriptor::LDPLabelMappingDescriptor() : cClassDescriptor("LDPLabelMapping", "LDPPacket")
{
}

LDPLabelMappingDescriptor::~LDPLabelMappingDescriptor()
{
}

bool LDPLabelMappingDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LDPLabelMapping *>(obj)!=NULL;
}

const char *LDPLabelMappingDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LDPLabelMappingDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int LDPLabelMappingDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *LDPLabelMappingDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "fec",
        "label",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int LDPLabelMappingDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "fec")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "label")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LDPLabelMappingDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "FEC_TLV",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *LDPLabelMappingDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LDPLabelMappingDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LDPLabelMapping *pp = (LDPLabelMapping *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LDPLabelMappingDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LDPLabelMapping *pp = (LDPLabelMapping *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getFec(); return out.str();}
        case 1: return long2string(pp->getLabel());
        default: return "";
    }
}

bool LDPLabelMappingDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LDPLabelMapping *pp = (LDPLabelMapping *)object; (void)pp;
    switch (field) {
        case 1: pp->setLabel(string2long(value)); return true;
        default: return false;
    }
}

const char *LDPLabelMappingDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(FEC_TLV));
        default: return NULL;
    };
}

void *LDPLabelMappingDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LDPLabelMapping *pp = (LDPLabelMapping *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getFec()); break;
        default: return NULL;
    }
}

Register_Class(LDPLabelRequest);

LDPLabelRequest::LDPLabelRequest(const char *name, int kind) : ::LDPPacket(name,kind)
{
}

LDPLabelRequest::LDPLabelRequest(const LDPLabelRequest& other) : ::LDPPacket(other)
{
    copy(other);
}

LDPLabelRequest::~LDPLabelRequest()
{
}

LDPLabelRequest& LDPLabelRequest::operator=(const LDPLabelRequest& other)
{
    if (this==&other) return *this;
    ::LDPPacket::operator=(other);
    copy(other);
    return *this;
}

void LDPLabelRequest::copy(const LDPLabelRequest& other)
{
    this->fec_var = other.fec_var;
}

void LDPLabelRequest::parsimPack(cCommBuffer *b)
{
    ::LDPPacket::parsimPack(b);
    doPacking(b,this->fec_var);
}

void LDPLabelRequest::parsimUnpack(cCommBuffer *b)
{
    ::LDPPacket::parsimUnpack(b);
    doUnpacking(b,this->fec_var);
}

FEC_TLV& LDPLabelRequest::getFec()
{
    return fec_var;
}

void LDPLabelRequest::setFec(const FEC_TLV& fec)
{
    this->fec_var = fec;
}

class LDPLabelRequestDescriptor : public cClassDescriptor
{
  public:
    LDPLabelRequestDescriptor();
    virtual ~LDPLabelRequestDescriptor();

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

Register_ClassDescriptor(LDPLabelRequestDescriptor);

LDPLabelRequestDescriptor::LDPLabelRequestDescriptor() : cClassDescriptor("LDPLabelRequest", "LDPPacket")
{
}

LDPLabelRequestDescriptor::~LDPLabelRequestDescriptor()
{
}

bool LDPLabelRequestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LDPLabelRequest *>(obj)!=NULL;
}

const char *LDPLabelRequestDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LDPLabelRequestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int LDPLabelRequestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *LDPLabelRequestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "fec",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int LDPLabelRequestDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "fec")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LDPLabelRequestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "FEC_TLV",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *LDPLabelRequestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LDPLabelRequestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LDPLabelRequest *pp = (LDPLabelRequest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LDPLabelRequestDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LDPLabelRequest *pp = (LDPLabelRequest *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getFec(); return out.str();}
        default: return "";
    }
}

bool LDPLabelRequestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LDPLabelRequest *pp = (LDPLabelRequest *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *LDPLabelRequestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(FEC_TLV));
        default: return NULL;
    };
}

void *LDPLabelRequestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LDPLabelRequest *pp = (LDPLabelRequest *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getFec()); break;
        default: return NULL;
    }
}

Register_Class(LDPHello);

LDPHello::LDPHello(const char *name, int kind) : ::LDPPacket(name,kind)
{
    this->holdTime_var = 0;
    this->tbit_var = 0;
    this->rbit_var = 0;
}

LDPHello::LDPHello(const LDPHello& other) : ::LDPPacket(other)
{
    copy(other);
}

LDPHello::~LDPHello()
{
}

LDPHello& LDPHello::operator=(const LDPHello& other)
{
    if (this==&other) return *this;
    ::LDPPacket::operator=(other);
    copy(other);
    return *this;
}

void LDPHello::copy(const LDPHello& other)
{
    this->holdTime_var = other.holdTime_var;
    this->tbit_var = other.tbit_var;
    this->rbit_var = other.rbit_var;
}

void LDPHello::parsimPack(cCommBuffer *b)
{
    ::LDPPacket::parsimPack(b);
    doPacking(b,this->holdTime_var);
    doPacking(b,this->tbit_var);
    doPacking(b,this->rbit_var);
}

void LDPHello::parsimUnpack(cCommBuffer *b)
{
    ::LDPPacket::parsimUnpack(b);
    doUnpacking(b,this->holdTime_var);
    doUnpacking(b,this->tbit_var);
    doUnpacking(b,this->rbit_var);
}

double LDPHello::getHoldTime() const
{
    return holdTime_var;
}

void LDPHello::setHoldTime(double holdTime)
{
    this->holdTime_var = holdTime;
}

bool LDPHello::getTbit() const
{
    return tbit_var;
}

void LDPHello::setTbit(bool tbit)
{
    this->tbit_var = tbit;
}

bool LDPHello::getRbit() const
{
    return rbit_var;
}

void LDPHello::setRbit(bool rbit)
{
    this->rbit_var = rbit;
}

class LDPHelloDescriptor : public cClassDescriptor
{
  public:
    LDPHelloDescriptor();
    virtual ~LDPHelloDescriptor();

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

Register_ClassDescriptor(LDPHelloDescriptor);

LDPHelloDescriptor::LDPHelloDescriptor() : cClassDescriptor("LDPHello", "LDPPacket")
{
}

LDPHelloDescriptor::~LDPHelloDescriptor()
{
}

bool LDPHelloDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LDPHello *>(obj)!=NULL;
}

const char *LDPHelloDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LDPHelloDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int LDPHelloDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *LDPHelloDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "holdTime",
        "tbit",
        "rbit",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int LDPHelloDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='h' && strcmp(fieldName, "holdTime")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "tbit")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "rbit")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LDPHelloDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "bool",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *LDPHelloDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LDPHelloDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LDPHello *pp = (LDPHello *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LDPHelloDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LDPHello *pp = (LDPHello *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getHoldTime());
        case 1: return bool2string(pp->getTbit());
        case 2: return bool2string(pp->getRbit());
        default: return "";
    }
}

bool LDPHelloDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LDPHello *pp = (LDPHello *)object; (void)pp;
    switch (field) {
        case 0: pp->setHoldTime(string2double(value)); return true;
        case 1: pp->setTbit(string2bool(value)); return true;
        case 2: pp->setRbit(string2bool(value)); return true;
        default: return false;
    }
}

const char *LDPHelloDescriptor::getFieldStructName(void *object, int field) const
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

void *LDPHelloDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LDPHello *pp = (LDPHello *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(LDPNotify);

LDPNotify::LDPNotify(const char *name, int kind) : ::LDPPacket(name,kind)
{
    this->status_var = 0;
}

LDPNotify::LDPNotify(const LDPNotify& other) : ::LDPPacket(other)
{
    copy(other);
}

LDPNotify::~LDPNotify()
{
}

LDPNotify& LDPNotify::operator=(const LDPNotify& other)
{
    if (this==&other) return *this;
    ::LDPPacket::operator=(other);
    copy(other);
    return *this;
}

void LDPNotify::copy(const LDPNotify& other)
{
    this->status_var = other.status_var;
    this->fec_var = other.fec_var;
}

void LDPNotify::parsimPack(cCommBuffer *b)
{
    ::LDPPacket::parsimPack(b);
    doPacking(b,this->status_var);
    doPacking(b,this->fec_var);
}

void LDPNotify::parsimUnpack(cCommBuffer *b)
{
    ::LDPPacket::parsimUnpack(b);
    doUnpacking(b,this->status_var);
    doUnpacking(b,this->fec_var);
}

int LDPNotify::getStatus() const
{
    return status_var;
}

void LDPNotify::setStatus(int status)
{
    this->status_var = status;
}

FEC_TLV& LDPNotify::getFec()
{
    return fec_var;
}

void LDPNotify::setFec(const FEC_TLV& fec)
{
    this->fec_var = fec;
}

class LDPNotifyDescriptor : public cClassDescriptor
{
  public:
    LDPNotifyDescriptor();
    virtual ~LDPNotifyDescriptor();

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

Register_ClassDescriptor(LDPNotifyDescriptor);

LDPNotifyDescriptor::LDPNotifyDescriptor() : cClassDescriptor("LDPNotify", "LDPPacket")
{
}

LDPNotifyDescriptor::~LDPNotifyDescriptor()
{
}

bool LDPNotifyDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LDPNotify *>(obj)!=NULL;
}

const char *LDPNotifyDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LDPNotifyDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int LDPNotifyDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *LDPNotifyDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "status",
        "fec",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int LDPNotifyDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "status")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "fec")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LDPNotifyDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "FEC_TLV",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *LDPNotifyDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LDPNotifyDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LDPNotify *pp = (LDPNotify *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LDPNotifyDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LDPNotify *pp = (LDPNotify *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getStatus());
        case 1: {std::stringstream out; out << pp->getFec(); return out.str();}
        default: return "";
    }
}

bool LDPNotifyDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LDPNotify *pp = (LDPNotify *)object; (void)pp;
    switch (field) {
        case 0: pp->setStatus(string2long(value)); return true;
        default: return false;
    }
}

const char *LDPNotifyDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(FEC_TLV));
        default: return NULL;
    };
}

void *LDPNotifyDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LDPNotify *pp = (LDPNotify *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getFec()); break;
        default: return NULL;
    }
}

Register_Class(LDPIni);

LDPIni::LDPIni(const char *name, int kind) : ::LDPPacket(name,kind)
{
    this->keepAliveTime_var = 0;
    this->abit_var = 0;
    this->dbit_var = 0;
    this->pvLim_var = 0;
    this->receiverLDPIdentifier_var = 0;
}

LDPIni::LDPIni(const LDPIni& other) : ::LDPPacket(other)
{
    copy(other);
}

LDPIni::~LDPIni()
{
}

LDPIni& LDPIni::operator=(const LDPIni& other)
{
    if (this==&other) return *this;
    ::LDPPacket::operator=(other);
    copy(other);
    return *this;
}

void LDPIni::copy(const LDPIni& other)
{
    this->keepAliveTime_var = other.keepAliveTime_var;
    this->abit_var = other.abit_var;
    this->dbit_var = other.dbit_var;
    this->pvLim_var = other.pvLim_var;
    this->receiverLDPIdentifier_var = other.receiverLDPIdentifier_var;
}

void LDPIni::parsimPack(cCommBuffer *b)
{
    ::LDPPacket::parsimPack(b);
    doPacking(b,this->keepAliveTime_var);
    doPacking(b,this->abit_var);
    doPacking(b,this->dbit_var);
    doPacking(b,this->pvLim_var);
    doPacking(b,this->receiverLDPIdentifier_var);
}

void LDPIni::parsimUnpack(cCommBuffer *b)
{
    ::LDPPacket::parsimUnpack(b);
    doUnpacking(b,this->keepAliveTime_var);
    doUnpacking(b,this->abit_var);
    doUnpacking(b,this->dbit_var);
    doUnpacking(b,this->pvLim_var);
    doUnpacking(b,this->receiverLDPIdentifier_var);
}

double LDPIni::getKeepAliveTime() const
{
    return keepAliveTime_var;
}

void LDPIni::setKeepAliveTime(double keepAliveTime)
{
    this->keepAliveTime_var = keepAliveTime;
}

bool LDPIni::getAbit() const
{
    return abit_var;
}

void LDPIni::setAbit(bool abit)
{
    this->abit_var = abit;
}

bool LDPIni::getDbit() const
{
    return dbit_var;
}

void LDPIni::setDbit(bool dbit)
{
    this->dbit_var = dbit;
}

int LDPIni::getPvLim() const
{
    return pvLim_var;
}

void LDPIni::setPvLim(int pvLim)
{
    this->pvLim_var = pvLim;
}

const char * LDPIni::getReceiverLDPIdentifier() const
{
    return receiverLDPIdentifier_var.c_str();
}

void LDPIni::setReceiverLDPIdentifier(const char * receiverLDPIdentifier)
{
    this->receiverLDPIdentifier_var = receiverLDPIdentifier;
}

class LDPIniDescriptor : public cClassDescriptor
{
  public:
    LDPIniDescriptor();
    virtual ~LDPIniDescriptor();

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

Register_ClassDescriptor(LDPIniDescriptor);

LDPIniDescriptor::LDPIniDescriptor() : cClassDescriptor("LDPIni", "LDPPacket")
{
}

LDPIniDescriptor::~LDPIniDescriptor()
{
}

bool LDPIniDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LDPIni *>(obj)!=NULL;
}

const char *LDPIniDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LDPIniDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int LDPIniDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *LDPIniDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "keepAliveTime",
        "abit",
        "dbit",
        "pvLim",
        "receiverLDPIdentifier",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int LDPIniDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='k' && strcmp(fieldName, "keepAliveTime")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "abit")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "dbit")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "pvLim")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "receiverLDPIdentifier")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LDPIniDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "double",
        "bool",
        "bool",
        "int",
        "string",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *LDPIniDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LDPIniDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LDPIni *pp = (LDPIni *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string LDPIniDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LDPIni *pp = (LDPIni *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getKeepAliveTime());
        case 1: return bool2string(pp->getAbit());
        case 2: return bool2string(pp->getDbit());
        case 3: return long2string(pp->getPvLim());
        case 4: return oppstring2string(pp->getReceiverLDPIdentifier());
        default: return "";
    }
}

bool LDPIniDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LDPIni *pp = (LDPIni *)object; (void)pp;
    switch (field) {
        case 0: pp->setKeepAliveTime(string2double(value)); return true;
        case 1: pp->setAbit(string2bool(value)); return true;
        case 2: pp->setDbit(string2bool(value)); return true;
        case 3: pp->setPvLim(string2long(value)); return true;
        case 4: pp->setReceiverLDPIdentifier((value)); return true;
        default: return false;
    }
}

const char *LDPIniDescriptor::getFieldStructName(void *object, int field) const
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

void *LDPIniDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LDPIni *pp = (LDPIni *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(LDPAddress);

LDPAddress::LDPAddress(const char *name, int kind) : ::LDPPacket(name,kind)
{
    this->isWithdraw_var = 0;
    this->family_var = 0;
    addresses_arraysize = 0;
    this->addresses_var = 0;
}

LDPAddress::LDPAddress(const LDPAddress& other) : ::LDPPacket(other)
{
    addresses_arraysize = 0;
    this->addresses_var = 0;
    copy(other);
}

LDPAddress::~LDPAddress()
{
    delete [] addresses_var;
}

LDPAddress& LDPAddress::operator=(const LDPAddress& other)
{
    if (this==&other) return *this;
    ::LDPPacket::operator=(other);
    copy(other);
    return *this;
}

void LDPAddress::copy(const LDPAddress& other)
{
    this->isWithdraw_var = other.isWithdraw_var;
    this->family_var = other.family_var;
    delete [] this->addresses_var;
    this->addresses_var = (other.addresses_arraysize==0) ? NULL : new opp_string[other.addresses_arraysize];
    addresses_arraysize = other.addresses_arraysize;
    for (unsigned int i=0; i<addresses_arraysize; i++)
        this->addresses_var[i] = other.addresses_var[i];
}

void LDPAddress::parsimPack(cCommBuffer *b)
{
    ::LDPPacket::parsimPack(b);
    doPacking(b,this->isWithdraw_var);
    doPacking(b,this->family_var);
    b->pack(addresses_arraysize);
    doPacking(b,this->addresses_var,addresses_arraysize);
}

void LDPAddress::parsimUnpack(cCommBuffer *b)
{
    ::LDPPacket::parsimUnpack(b);
    doUnpacking(b,this->isWithdraw_var);
    doUnpacking(b,this->family_var);
    delete [] this->addresses_var;
    b->unpack(addresses_arraysize);
    if (addresses_arraysize==0) {
        this->addresses_var = 0;
    } else {
        this->addresses_var = new opp_string[addresses_arraysize];
        doUnpacking(b,this->addresses_var,addresses_arraysize);
    }
}

bool LDPAddress::getIsWithdraw() const
{
    return isWithdraw_var;
}

void LDPAddress::setIsWithdraw(bool isWithdraw)
{
    this->isWithdraw_var = isWithdraw;
}

const char * LDPAddress::getFamily() const
{
    return family_var.c_str();
}

void LDPAddress::setFamily(const char * family)
{
    this->family_var = family;
}

void LDPAddress::setAddressesArraySize(unsigned int size)
{
    opp_string *addresses_var2 = (size==0) ? NULL : new opp_string[size];
    unsigned int sz = addresses_arraysize < size ? addresses_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        addresses_var2[i] = this->addresses_var[i];
    for (unsigned int i=sz; i<size; i++)
        addresses_var2[i] = 0;
    addresses_arraysize = size;
    delete [] this->addresses_var;
    this->addresses_var = addresses_var2;
}

unsigned int LDPAddress::getAddressesArraySize() const
{
    return addresses_arraysize;
}

const char * LDPAddress::getAddresses(unsigned int k) const
{
    if (k>=addresses_arraysize) throw cRuntimeError("Array of size %d indexed by %d", addresses_arraysize, k);
    return addresses_var[k].c_str();
}

void LDPAddress::setAddresses(unsigned int k, const char * addresses)
{
    if (k>=addresses_arraysize) throw cRuntimeError("Array of size %d indexed by %d", addresses_arraysize, k);
    this->addresses_var[k] = addresses;
}

class LDPAddressDescriptor : public cClassDescriptor
{
  public:
    LDPAddressDescriptor();
    virtual ~LDPAddressDescriptor();

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

Register_ClassDescriptor(LDPAddressDescriptor);

LDPAddressDescriptor::LDPAddressDescriptor() : cClassDescriptor("LDPAddress", "LDPPacket")
{
}

LDPAddressDescriptor::~LDPAddressDescriptor()
{
}

bool LDPAddressDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LDPAddress *>(obj)!=NULL;
}

const char *LDPAddressDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LDPAddressDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int LDPAddressDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *LDPAddressDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "isWithdraw",
        "family",
        "addresses",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int LDPAddressDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "isWithdraw")==0) return base+0;
    if (fieldName[0]=='f' && strcmp(fieldName, "family")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "addresses")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LDPAddressDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "string",
        "string",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *LDPAddressDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LDPAddressDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LDPAddress *pp = (LDPAddress *)object; (void)pp;
    switch (field) {
        case 2: return pp->getAddressesArraySize();
        default: return 0;
    }
}

std::string LDPAddressDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LDPAddress *pp = (LDPAddress *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getIsWithdraw());
        case 1: return oppstring2string(pp->getFamily());
        case 2: return oppstring2string(pp->getAddresses(i));
        default: return "";
    }
}

bool LDPAddressDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LDPAddress *pp = (LDPAddress *)object; (void)pp;
    switch (field) {
        case 0: pp->setIsWithdraw(string2bool(value)); return true;
        case 1: pp->setFamily((value)); return true;
        case 2: pp->setAddresses(i,(value)); return true;
        default: return false;
    }
}

const char *LDPAddressDescriptor::getFieldStructName(void *object, int field) const
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

void *LDPAddressDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LDPAddress *pp = (LDPAddress *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


