//
// Generated file, do not edit! Created by nedtool 4.6 from wpan/linklayer/ieee802154/mac/Ieee802154Frame.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "Ieee802154Frame_m.h"

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

Register_Class(Ieee802154Frame);

Ieee802154Frame::Ieee802154Frame(const char *name, int kind) : ::cPacket(name,kind)
{
    this->bdsn_var = 0;
    this->dstPanId_var = 0;
    this->srcPanId_var = 0;
    this->isIndirect_var = false;
    this->isGTS_var = false;
}

Ieee802154Frame::Ieee802154Frame(const Ieee802154Frame& other) : ::cPacket(other)
{
    copy(other);
}

Ieee802154Frame::~Ieee802154Frame()
{
}

Ieee802154Frame& Ieee802154Frame::operator=(const Ieee802154Frame& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154Frame::copy(const Ieee802154Frame& other)
{
    this->frmCtrl_var = other.frmCtrl_var;
    this->bdsn_var = other.bdsn_var;
    this->dstPanId_var = other.dstPanId_var;
    this->dstAddr_var = other.dstAddr_var;
    this->srcPanId_var = other.srcPanId_var;
    this->srcAddr_var = other.srcAddr_var;
    this->isIndirect_var = other.isIndirect_var;
    this->isGTS_var = other.isGTS_var;
}

void Ieee802154Frame::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->frmCtrl_var);
    doPacking(b,this->bdsn_var);
    doPacking(b,this->dstPanId_var);
    doPacking(b,this->dstAddr_var);
    doPacking(b,this->srcPanId_var);
    doPacking(b,this->srcAddr_var);
    doPacking(b,this->isIndirect_var);
    doPacking(b,this->isGTS_var);
}

void Ieee802154Frame::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->frmCtrl_var);
    doUnpacking(b,this->bdsn_var);
    doUnpacking(b,this->dstPanId_var);
    doUnpacking(b,this->dstAddr_var);
    doUnpacking(b,this->srcPanId_var);
    doUnpacking(b,this->srcAddr_var);
    doUnpacking(b,this->isIndirect_var);
    doUnpacking(b,this->isGTS_var);
}

FrameCtrl& Ieee802154Frame::getFrmCtrl()
{
    return frmCtrl_var;
}

void Ieee802154Frame::setFrmCtrl(const FrameCtrl& frmCtrl)
{
    this->frmCtrl_var = frmCtrl;
}

unsigned char Ieee802154Frame::getBdsn() const
{
    return bdsn_var;
}

void Ieee802154Frame::setBdsn(unsigned char bdsn)
{
    this->bdsn_var = bdsn;
}

uint16_t Ieee802154Frame::getDstPanId() const
{
    return dstPanId_var;
}

void Ieee802154Frame::setDstPanId(uint16_t dstPanId)
{
    this->dstPanId_var = dstPanId;
}

MACAddress& Ieee802154Frame::getDstAddr()
{
    return dstAddr_var;
}

void Ieee802154Frame::setDstAddr(const MACAddress& dstAddr)
{
    this->dstAddr_var = dstAddr;
}

uint16_t Ieee802154Frame::getSrcPanId() const
{
    return srcPanId_var;
}

void Ieee802154Frame::setSrcPanId(uint16_t srcPanId)
{
    this->srcPanId_var = srcPanId;
}

MACAddress& Ieee802154Frame::getSrcAddr()
{
    return srcAddr_var;
}

void Ieee802154Frame::setSrcAddr(const MACAddress& srcAddr)
{
    this->srcAddr_var = srcAddr;
}

bool Ieee802154Frame::getIsIndirect() const
{
    return isIndirect_var;
}

void Ieee802154Frame::setIsIndirect(bool isIndirect)
{
    this->isIndirect_var = isIndirect;
}

bool Ieee802154Frame::getIsGTS() const
{
    return isGTS_var;
}

void Ieee802154Frame::setIsGTS(bool isGTS)
{
    this->isGTS_var = isGTS;
}

class Ieee802154FrameDescriptor : public cClassDescriptor
{
  public:
    Ieee802154FrameDescriptor();
    virtual ~Ieee802154FrameDescriptor();

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

Register_ClassDescriptor(Ieee802154FrameDescriptor);

Ieee802154FrameDescriptor::Ieee802154FrameDescriptor() : cClassDescriptor("Ieee802154Frame", "cPacket")
{
}

Ieee802154FrameDescriptor::~Ieee802154FrameDescriptor()
{
}

bool Ieee802154FrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154Frame *>(obj)!=NULL;
}

const char *Ieee802154FrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154FrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 8+basedesc->getFieldCount(object) : 8;
}

unsigned int Ieee802154FrameDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<8) ? fieldTypeFlags[field] : 0;
}

const char *Ieee802154FrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "frmCtrl",
        "bdsn",
        "dstPanId",
        "dstAddr",
        "srcPanId",
        "srcAddr",
        "isIndirect",
        "isGTS",
    };
    return (field>=0 && field<8) ? fieldNames[field] : NULL;
}

int Ieee802154FrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='f' && strcmp(fieldName, "frmCtrl")==0) return base+0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bdsn")==0) return base+1;
    if (fieldName[0]=='d' && strcmp(fieldName, "dstPanId")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "dstAddr")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcPanId")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcAddr")==0) return base+5;
    if (fieldName[0]=='i' && strcmp(fieldName, "isIndirect")==0) return base+6;
    if (fieldName[0]=='i' && strcmp(fieldName, "isGTS")==0) return base+7;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154FrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "FrameCtrl",
        "unsigned char",
        "uint16_t",
        "MACAddress",
        "uint16_t",
        "MACAddress",
        "bool",
        "bool",
    };
    return (field>=0 && field<8) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154FrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154FrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154Frame *pp = (Ieee802154Frame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154FrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154Frame *pp = (Ieee802154Frame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getFrmCtrl(); return out.str();}
        case 1: return ulong2string(pp->getBdsn());
        case 2: return ulong2string(pp->getDstPanId());
        case 3: {std::stringstream out; out << pp->getDstAddr(); return out.str();}
        case 4: return ulong2string(pp->getSrcPanId());
        case 5: {std::stringstream out; out << pp->getSrcAddr(); return out.str();}
        case 6: return bool2string(pp->getIsIndirect());
        case 7: return bool2string(pp->getIsGTS());
        default: return "";
    }
}

bool Ieee802154FrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154Frame *pp = (Ieee802154Frame *)object; (void)pp;
    switch (field) {
        case 1: pp->setBdsn(string2ulong(value)); return true;
        case 2: pp->setDstPanId(string2ulong(value)); return true;
        case 4: pp->setSrcPanId(string2ulong(value)); return true;
        case 6: pp->setIsIndirect(string2bool(value)); return true;
        case 7: pp->setIsGTS(string2bool(value)); return true;
        default: return false;
    }
}

const char *Ieee802154FrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(FrameCtrl));
        case 3: return opp_typename(typeid(MACAddress));
        case 5: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *Ieee802154FrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154Frame *pp = (Ieee802154Frame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getFrmCtrl()); break;
        case 3: return (void *)(&pp->getDstAddr()); break;
        case 5: return (void *)(&pp->getSrcAddr()); break;
        default: return NULL;
    }
}

Register_Class(Ieee802154BeaconFrame);

Ieee802154BeaconFrame::Ieee802154BeaconFrame(const char *name, int kind) : ::Ieee802154Frame(name,kind)
{
}

Ieee802154BeaconFrame::Ieee802154BeaconFrame(const Ieee802154BeaconFrame& other) : ::Ieee802154Frame(other)
{
    copy(other);
}

Ieee802154BeaconFrame::~Ieee802154BeaconFrame()
{
}

Ieee802154BeaconFrame& Ieee802154BeaconFrame::operator=(const Ieee802154BeaconFrame& other)
{
    if (this==&other) return *this;
    ::Ieee802154Frame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154BeaconFrame::copy(const Ieee802154BeaconFrame& other)
{
    this->sfSpec_var = other.sfSpec_var;
}

void Ieee802154BeaconFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee802154Frame::parsimPack(b);
    doPacking(b,this->sfSpec_var);
}

void Ieee802154BeaconFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154Frame::parsimUnpack(b);
    doUnpacking(b,this->sfSpec_var);
}

SuperframeSpec& Ieee802154BeaconFrame::getSfSpec()
{
    return sfSpec_var;
}

void Ieee802154BeaconFrame::setSfSpec(const SuperframeSpec& sfSpec)
{
    this->sfSpec_var = sfSpec;
}

class Ieee802154BeaconFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee802154BeaconFrameDescriptor();
    virtual ~Ieee802154BeaconFrameDescriptor();

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

Register_ClassDescriptor(Ieee802154BeaconFrameDescriptor);

Ieee802154BeaconFrameDescriptor::Ieee802154BeaconFrameDescriptor() : cClassDescriptor("Ieee802154BeaconFrame", "Ieee802154Frame")
{
}

Ieee802154BeaconFrameDescriptor::~Ieee802154BeaconFrameDescriptor()
{
}

bool Ieee802154BeaconFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154BeaconFrame *>(obj)!=NULL;
}

const char *Ieee802154BeaconFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154BeaconFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee802154BeaconFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee802154BeaconFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sfSpec",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee802154BeaconFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sfSpec")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154BeaconFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "SuperframeSpec",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154BeaconFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154BeaconFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154BeaconFrame *pp = (Ieee802154BeaconFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154BeaconFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154BeaconFrame *pp = (Ieee802154BeaconFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSfSpec(); return out.str();}
        default: return "";
    }
}

bool Ieee802154BeaconFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154BeaconFrame *pp = (Ieee802154BeaconFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee802154BeaconFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(SuperframeSpec));
        default: return NULL;
    };
}

void *Ieee802154BeaconFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154BeaconFrame *pp = (Ieee802154BeaconFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSfSpec()); break;
        default: return NULL;
    }
}

Register_Class(Ieee802154DataFrame);

Ieee802154DataFrame::Ieee802154DataFrame(const char *name, int kind) : ::Ieee802154Frame(name,kind)
{
}

Ieee802154DataFrame::Ieee802154DataFrame(const Ieee802154DataFrame& other) : ::Ieee802154Frame(other)
{
    copy(other);
}

Ieee802154DataFrame::~Ieee802154DataFrame()
{
}

Ieee802154DataFrame& Ieee802154DataFrame::operator=(const Ieee802154DataFrame& other)
{
    if (this==&other) return *this;
    ::Ieee802154Frame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154DataFrame::copy(const Ieee802154DataFrame& other)
{
}

void Ieee802154DataFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee802154Frame::parsimPack(b);
}

void Ieee802154DataFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154Frame::parsimUnpack(b);
}

class Ieee802154DataFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee802154DataFrameDescriptor();
    virtual ~Ieee802154DataFrameDescriptor();

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

Register_ClassDescriptor(Ieee802154DataFrameDescriptor);

Ieee802154DataFrameDescriptor::Ieee802154DataFrameDescriptor() : cClassDescriptor("Ieee802154DataFrame", "Ieee802154Frame")
{
}

Ieee802154DataFrameDescriptor::~Ieee802154DataFrameDescriptor()
{
}

bool Ieee802154DataFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154DataFrame *>(obj)!=NULL;
}

const char *Ieee802154DataFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154DataFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee802154DataFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee802154DataFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee802154DataFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154DataFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee802154DataFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154DataFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DataFrame *pp = (Ieee802154DataFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154DataFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DataFrame *pp = (Ieee802154DataFrame *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee802154DataFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DataFrame *pp = (Ieee802154DataFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee802154DataFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee802154DataFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DataFrame *pp = (Ieee802154DataFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee802154AckFrame);

Ieee802154AckFrame::Ieee802154AckFrame(const char *name, int kind) : ::Ieee802154Frame(name,kind)
{
}

Ieee802154AckFrame::Ieee802154AckFrame(const Ieee802154AckFrame& other) : ::Ieee802154Frame(other)
{
    copy(other);
}

Ieee802154AckFrame::~Ieee802154AckFrame()
{
}

Ieee802154AckFrame& Ieee802154AckFrame::operator=(const Ieee802154AckFrame& other)
{
    if (this==&other) return *this;
    ::Ieee802154Frame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154AckFrame::copy(const Ieee802154AckFrame& other)
{
}

void Ieee802154AckFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee802154Frame::parsimPack(b);
}

void Ieee802154AckFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154Frame::parsimUnpack(b);
}

class Ieee802154AckFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee802154AckFrameDescriptor();
    virtual ~Ieee802154AckFrameDescriptor();

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

Register_ClassDescriptor(Ieee802154AckFrameDescriptor);

Ieee802154AckFrameDescriptor::Ieee802154AckFrameDescriptor() : cClassDescriptor("Ieee802154AckFrame", "Ieee802154Frame")
{
}

Ieee802154AckFrameDescriptor::~Ieee802154AckFrameDescriptor()
{
}

bool Ieee802154AckFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154AckFrame *>(obj)!=NULL;
}

const char *Ieee802154AckFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154AckFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee802154AckFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee802154AckFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee802154AckFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154AckFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee802154AckFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154AckFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AckFrame *pp = (Ieee802154AckFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154AckFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AckFrame *pp = (Ieee802154AckFrame *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee802154AckFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AckFrame *pp = (Ieee802154AckFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee802154AckFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee802154AckFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AckFrame *pp = (Ieee802154AckFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee802154CmdFrame);

Ieee802154CmdFrame::Ieee802154CmdFrame(const char *name, int kind) : ::Ieee802154Frame(name,kind)
{
    this->cmdType_var = 0;
}

Ieee802154CmdFrame::Ieee802154CmdFrame(const Ieee802154CmdFrame& other) : ::Ieee802154Frame(other)
{
    copy(other);
}

Ieee802154CmdFrame::~Ieee802154CmdFrame()
{
}

Ieee802154CmdFrame& Ieee802154CmdFrame::operator=(const Ieee802154CmdFrame& other)
{
    if (this==&other) return *this;
    ::Ieee802154Frame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154CmdFrame::copy(const Ieee802154CmdFrame& other)
{
    this->cmdType_var = other.cmdType_var;
}

void Ieee802154CmdFrame::parsimPack(cCommBuffer *b)
{
    ::Ieee802154Frame::parsimPack(b);
    doPacking(b,this->cmdType_var);
}

void Ieee802154CmdFrame::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154Frame::parsimUnpack(b);
    doUnpacking(b,this->cmdType_var);
}

int Ieee802154CmdFrame::getCmdType() const
{
    return cmdType_var;
}

void Ieee802154CmdFrame::setCmdType(int cmdType)
{
    this->cmdType_var = cmdType;
}

class Ieee802154CmdFrameDescriptor : public cClassDescriptor
{
  public:
    Ieee802154CmdFrameDescriptor();
    virtual ~Ieee802154CmdFrameDescriptor();

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

Register_ClassDescriptor(Ieee802154CmdFrameDescriptor);

Ieee802154CmdFrameDescriptor::Ieee802154CmdFrameDescriptor() : cClassDescriptor("Ieee802154CmdFrame", "Ieee802154Frame")
{
}

Ieee802154CmdFrameDescriptor::~Ieee802154CmdFrameDescriptor()
{
}

bool Ieee802154CmdFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154CmdFrame *>(obj)!=NULL;
}

const char *Ieee802154CmdFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154CmdFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee802154CmdFrameDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee802154CmdFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "cmdType",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee802154CmdFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "cmdType")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154CmdFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154CmdFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "Ieee802154MacCmdType";
            return NULL;
        default: return NULL;
    }
}

int Ieee802154CmdFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154CmdFrame *pp = (Ieee802154CmdFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154CmdFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154CmdFrame *pp = (Ieee802154CmdFrame *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getCmdType());
        default: return "";
    }
}

bool Ieee802154CmdFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154CmdFrame *pp = (Ieee802154CmdFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setCmdType(string2long(value)); return true;
        default: return false;
    }
}

const char *Ieee802154CmdFrameDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee802154CmdFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154CmdFrame *pp = (Ieee802154CmdFrame *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee802154AssoReqtCmd);

Ieee802154AssoReqtCmd::Ieee802154AssoReqtCmd(const char *name, int kind) : ::Ieee802154CmdFrame(name,kind)
{
}

Ieee802154AssoReqtCmd::Ieee802154AssoReqtCmd(const Ieee802154AssoReqtCmd& other) : ::Ieee802154CmdFrame(other)
{
    copy(other);
}

Ieee802154AssoReqtCmd::~Ieee802154AssoReqtCmd()
{
}

Ieee802154AssoReqtCmd& Ieee802154AssoReqtCmd::operator=(const Ieee802154AssoReqtCmd& other)
{
    if (this==&other) return *this;
    ::Ieee802154CmdFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154AssoReqtCmd::copy(const Ieee802154AssoReqtCmd& other)
{
    this->capability_var = other.capability_var;
}

void Ieee802154AssoReqtCmd::parsimPack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimPack(b);
    doPacking(b,this->capability_var);
}

void Ieee802154AssoReqtCmd::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimUnpack(b);
    doUnpacking(b,this->capability_var);
}

DevCapability& Ieee802154AssoReqtCmd::getCapability()
{
    return capability_var;
}

void Ieee802154AssoReqtCmd::setCapability(const DevCapability& capability)
{
    this->capability_var = capability;
}

class Ieee802154AssoReqtCmdDescriptor : public cClassDescriptor
{
  public:
    Ieee802154AssoReqtCmdDescriptor();
    virtual ~Ieee802154AssoReqtCmdDescriptor();

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

Register_ClassDescriptor(Ieee802154AssoReqtCmdDescriptor);

Ieee802154AssoReqtCmdDescriptor::Ieee802154AssoReqtCmdDescriptor() : cClassDescriptor("Ieee802154AssoReqtCmd", "Ieee802154CmdFrame")
{
}

Ieee802154AssoReqtCmdDescriptor::~Ieee802154AssoReqtCmdDescriptor()
{
}

bool Ieee802154AssoReqtCmdDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154AssoReqtCmd *>(obj)!=NULL;
}

const char *Ieee802154AssoReqtCmdDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154AssoReqtCmdDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee802154AssoReqtCmdDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee802154AssoReqtCmdDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "capability",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee802154AssoReqtCmdDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "capability")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154AssoReqtCmdDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "DevCapability",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154AssoReqtCmdDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154AssoReqtCmdDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AssoReqtCmd *pp = (Ieee802154AssoReqtCmd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154AssoReqtCmdDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AssoReqtCmd *pp = (Ieee802154AssoReqtCmd *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getCapability(); return out.str();}
        default: return "";
    }
}

bool Ieee802154AssoReqtCmdDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AssoReqtCmd *pp = (Ieee802154AssoReqtCmd *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee802154AssoReqtCmdDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(DevCapability));
        default: return NULL;
    };
}

void *Ieee802154AssoReqtCmdDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AssoReqtCmd *pp = (Ieee802154AssoReqtCmd *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getCapability()); break;
        default: return NULL;
    }
}

Register_Class(Ieee802154AssoRespCmd);

Ieee802154AssoRespCmd::Ieee802154AssoRespCmd(const char *name, int kind) : ::Ieee802154CmdFrame(name,kind)
{
    this->shortAddr_var = 0;
    this->atCapacity_var = 0;
}

Ieee802154AssoRespCmd::Ieee802154AssoRespCmd(const Ieee802154AssoRespCmd& other) : ::Ieee802154CmdFrame(other)
{
    copy(other);
}

Ieee802154AssoRespCmd::~Ieee802154AssoRespCmd()
{
}

Ieee802154AssoRespCmd& Ieee802154AssoRespCmd::operator=(const Ieee802154AssoRespCmd& other)
{
    if (this==&other) return *this;
    ::Ieee802154CmdFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154AssoRespCmd::copy(const Ieee802154AssoRespCmd& other)
{
    this->shortAddr_var = other.shortAddr_var;
    this->atCapacity_var = other.atCapacity_var;
}

void Ieee802154AssoRespCmd::parsimPack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimPack(b);
    doPacking(b,this->shortAddr_var);
    doPacking(b,this->atCapacity_var);
}

void Ieee802154AssoRespCmd::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimUnpack(b);
    doUnpacking(b,this->shortAddr_var);
    doUnpacking(b,this->atCapacity_var);
}

unsigned short Ieee802154AssoRespCmd::getShortAddr() const
{
    return shortAddr_var;
}

void Ieee802154AssoRespCmd::setShortAddr(unsigned short shortAddr)
{
    this->shortAddr_var = shortAddr;
}

bool Ieee802154AssoRespCmd::getAtCapacity() const
{
    return atCapacity_var;
}

void Ieee802154AssoRespCmd::setAtCapacity(bool atCapacity)
{
    this->atCapacity_var = atCapacity;
}

class Ieee802154AssoRespCmdDescriptor : public cClassDescriptor
{
  public:
    Ieee802154AssoRespCmdDescriptor();
    virtual ~Ieee802154AssoRespCmdDescriptor();

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

Register_ClassDescriptor(Ieee802154AssoRespCmdDescriptor);

Ieee802154AssoRespCmdDescriptor::Ieee802154AssoRespCmdDescriptor() : cClassDescriptor("Ieee802154AssoRespCmd", "Ieee802154CmdFrame")
{
}

Ieee802154AssoRespCmdDescriptor::~Ieee802154AssoRespCmdDescriptor()
{
}

bool Ieee802154AssoRespCmdDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154AssoRespCmd *>(obj)!=NULL;
}

const char *Ieee802154AssoRespCmdDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154AssoRespCmdDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int Ieee802154AssoRespCmdDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee802154AssoRespCmdDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "shortAddr",
        "atCapacity",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int Ieee802154AssoRespCmdDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "shortAddr")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "atCapacity")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154AssoRespCmdDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned short",
        "bool",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154AssoRespCmdDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154AssoRespCmdDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AssoRespCmd *pp = (Ieee802154AssoRespCmd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154AssoRespCmdDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AssoRespCmd *pp = (Ieee802154AssoRespCmd *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getShortAddr());
        case 1: return bool2string(pp->getAtCapacity());
        default: return "";
    }
}

bool Ieee802154AssoRespCmdDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AssoRespCmd *pp = (Ieee802154AssoRespCmd *)object; (void)pp;
    switch (field) {
        case 0: pp->setShortAddr(string2ulong(value)); return true;
        case 1: pp->setAtCapacity(string2bool(value)); return true;
        default: return false;
    }
}

const char *Ieee802154AssoRespCmdDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee802154AssoRespCmdDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154AssoRespCmd *pp = (Ieee802154AssoRespCmd *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee802154DisassoNotiCmd);

Ieee802154DisassoNotiCmd::Ieee802154DisassoNotiCmd(const char *name, int kind) : ::Ieee802154CmdFrame(name,kind)
{
    this->isCoor_var = 0;
}

Ieee802154DisassoNotiCmd::Ieee802154DisassoNotiCmd(const Ieee802154DisassoNotiCmd& other) : ::Ieee802154CmdFrame(other)
{
    copy(other);
}

Ieee802154DisassoNotiCmd::~Ieee802154DisassoNotiCmd()
{
}

Ieee802154DisassoNotiCmd& Ieee802154DisassoNotiCmd::operator=(const Ieee802154DisassoNotiCmd& other)
{
    if (this==&other) return *this;
    ::Ieee802154CmdFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154DisassoNotiCmd::copy(const Ieee802154DisassoNotiCmd& other)
{
    this->isCoor_var = other.isCoor_var;
}

void Ieee802154DisassoNotiCmd::parsimPack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimPack(b);
    doPacking(b,this->isCoor_var);
}

void Ieee802154DisassoNotiCmd::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimUnpack(b);
    doUnpacking(b,this->isCoor_var);
}

bool Ieee802154DisassoNotiCmd::getIsCoor() const
{
    return isCoor_var;
}

void Ieee802154DisassoNotiCmd::setIsCoor(bool isCoor)
{
    this->isCoor_var = isCoor;
}

class Ieee802154DisassoNotiCmdDescriptor : public cClassDescriptor
{
  public:
    Ieee802154DisassoNotiCmdDescriptor();
    virtual ~Ieee802154DisassoNotiCmdDescriptor();

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

Register_ClassDescriptor(Ieee802154DisassoNotiCmdDescriptor);

Ieee802154DisassoNotiCmdDescriptor::Ieee802154DisassoNotiCmdDescriptor() : cClassDescriptor("Ieee802154DisassoNotiCmd", "Ieee802154CmdFrame")
{
}

Ieee802154DisassoNotiCmdDescriptor::~Ieee802154DisassoNotiCmdDescriptor()
{
}

bool Ieee802154DisassoNotiCmdDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154DisassoNotiCmd *>(obj)!=NULL;
}

const char *Ieee802154DisassoNotiCmdDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154DisassoNotiCmdDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int Ieee802154DisassoNotiCmdDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *Ieee802154DisassoNotiCmdDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "isCoor",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int Ieee802154DisassoNotiCmdDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='i' && strcmp(fieldName, "isCoor")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154DisassoNotiCmdDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154DisassoNotiCmdDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154DisassoNotiCmdDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DisassoNotiCmd *pp = (Ieee802154DisassoNotiCmd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154DisassoNotiCmdDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DisassoNotiCmd *pp = (Ieee802154DisassoNotiCmd *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->getIsCoor());
        default: return "";
    }
}

bool Ieee802154DisassoNotiCmdDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DisassoNotiCmd *pp = (Ieee802154DisassoNotiCmd *)object; (void)pp;
    switch (field) {
        case 0: pp->setIsCoor(string2bool(value)); return true;
        default: return false;
    }
}

const char *Ieee802154DisassoNotiCmdDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee802154DisassoNotiCmdDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DisassoNotiCmd *pp = (Ieee802154DisassoNotiCmd *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee802154DataReqtCmd);

Ieee802154DataReqtCmd::Ieee802154DataReqtCmd(const char *name, int kind) : ::Ieee802154CmdFrame(name,kind)
{
}

Ieee802154DataReqtCmd::Ieee802154DataReqtCmd(const Ieee802154DataReqtCmd& other) : ::Ieee802154CmdFrame(other)
{
    copy(other);
}

Ieee802154DataReqtCmd::~Ieee802154DataReqtCmd()
{
}

Ieee802154DataReqtCmd& Ieee802154DataReqtCmd::operator=(const Ieee802154DataReqtCmd& other)
{
    if (this==&other) return *this;
    ::Ieee802154CmdFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154DataReqtCmd::copy(const Ieee802154DataReqtCmd& other)
{
}

void Ieee802154DataReqtCmd::parsimPack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimPack(b);
}

void Ieee802154DataReqtCmd::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimUnpack(b);
}

class Ieee802154DataReqtCmdDescriptor : public cClassDescriptor
{
  public:
    Ieee802154DataReqtCmdDescriptor();
    virtual ~Ieee802154DataReqtCmdDescriptor();

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

Register_ClassDescriptor(Ieee802154DataReqtCmdDescriptor);

Ieee802154DataReqtCmdDescriptor::Ieee802154DataReqtCmdDescriptor() : cClassDescriptor("Ieee802154DataReqtCmd", "Ieee802154CmdFrame")
{
}

Ieee802154DataReqtCmdDescriptor::~Ieee802154DataReqtCmdDescriptor()
{
}

bool Ieee802154DataReqtCmdDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154DataReqtCmd *>(obj)!=NULL;
}

const char *Ieee802154DataReqtCmdDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154DataReqtCmdDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee802154DataReqtCmdDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee802154DataReqtCmdDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee802154DataReqtCmdDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154DataReqtCmdDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee802154DataReqtCmdDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154DataReqtCmdDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DataReqtCmd *pp = (Ieee802154DataReqtCmd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154DataReqtCmdDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DataReqtCmd *pp = (Ieee802154DataReqtCmd *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee802154DataReqtCmdDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DataReqtCmd *pp = (Ieee802154DataReqtCmd *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee802154DataReqtCmdDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee802154DataReqtCmdDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154DataReqtCmd *pp = (Ieee802154DataReqtCmd *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee802154PanIdConflictNotiCmd);

Ieee802154PanIdConflictNotiCmd::Ieee802154PanIdConflictNotiCmd(const char *name, int kind) : ::Ieee802154CmdFrame(name,kind)
{
}

Ieee802154PanIdConflictNotiCmd::Ieee802154PanIdConflictNotiCmd(const Ieee802154PanIdConflictNotiCmd& other) : ::Ieee802154CmdFrame(other)
{
    copy(other);
}

Ieee802154PanIdConflictNotiCmd::~Ieee802154PanIdConflictNotiCmd()
{
}

Ieee802154PanIdConflictNotiCmd& Ieee802154PanIdConflictNotiCmd::operator=(const Ieee802154PanIdConflictNotiCmd& other)
{
    if (this==&other) return *this;
    ::Ieee802154CmdFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154PanIdConflictNotiCmd::copy(const Ieee802154PanIdConflictNotiCmd& other)
{
}

void Ieee802154PanIdConflictNotiCmd::parsimPack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimPack(b);
}

void Ieee802154PanIdConflictNotiCmd::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimUnpack(b);
}

class Ieee802154PanIdConflictNotiCmdDescriptor : public cClassDescriptor
{
  public:
    Ieee802154PanIdConflictNotiCmdDescriptor();
    virtual ~Ieee802154PanIdConflictNotiCmdDescriptor();

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

Register_ClassDescriptor(Ieee802154PanIdConflictNotiCmdDescriptor);

Ieee802154PanIdConflictNotiCmdDescriptor::Ieee802154PanIdConflictNotiCmdDescriptor() : cClassDescriptor("Ieee802154PanIdConflictNotiCmd", "Ieee802154CmdFrame")
{
}

Ieee802154PanIdConflictNotiCmdDescriptor::~Ieee802154PanIdConflictNotiCmdDescriptor()
{
}

bool Ieee802154PanIdConflictNotiCmdDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154PanIdConflictNotiCmd *>(obj)!=NULL;
}

const char *Ieee802154PanIdConflictNotiCmdDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154PanIdConflictNotiCmdDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee802154PanIdConflictNotiCmdDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee802154PanIdConflictNotiCmdDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee802154PanIdConflictNotiCmdDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154PanIdConflictNotiCmdDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee802154PanIdConflictNotiCmdDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154PanIdConflictNotiCmdDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154PanIdConflictNotiCmd *pp = (Ieee802154PanIdConflictNotiCmd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154PanIdConflictNotiCmdDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154PanIdConflictNotiCmd *pp = (Ieee802154PanIdConflictNotiCmd *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee802154PanIdConflictNotiCmdDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154PanIdConflictNotiCmd *pp = (Ieee802154PanIdConflictNotiCmd *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee802154PanIdConflictNotiCmdDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee802154PanIdConflictNotiCmdDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154PanIdConflictNotiCmd *pp = (Ieee802154PanIdConflictNotiCmd *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee802154OrphanNotiCmd);

Ieee802154OrphanNotiCmd::Ieee802154OrphanNotiCmd(const char *name, int kind) : ::Ieee802154CmdFrame(name,kind)
{
}

Ieee802154OrphanNotiCmd::Ieee802154OrphanNotiCmd(const Ieee802154OrphanNotiCmd& other) : ::Ieee802154CmdFrame(other)
{
    copy(other);
}

Ieee802154OrphanNotiCmd::~Ieee802154OrphanNotiCmd()
{
}

Ieee802154OrphanNotiCmd& Ieee802154OrphanNotiCmd::operator=(const Ieee802154OrphanNotiCmd& other)
{
    if (this==&other) return *this;
    ::Ieee802154CmdFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154OrphanNotiCmd::copy(const Ieee802154OrphanNotiCmd& other)
{
}

void Ieee802154OrphanNotiCmd::parsimPack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimPack(b);
}

void Ieee802154OrphanNotiCmd::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimUnpack(b);
}

class Ieee802154OrphanNotiCmdDescriptor : public cClassDescriptor
{
  public:
    Ieee802154OrphanNotiCmdDescriptor();
    virtual ~Ieee802154OrphanNotiCmdDescriptor();

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

Register_ClassDescriptor(Ieee802154OrphanNotiCmdDescriptor);

Ieee802154OrphanNotiCmdDescriptor::Ieee802154OrphanNotiCmdDescriptor() : cClassDescriptor("Ieee802154OrphanNotiCmd", "Ieee802154CmdFrame")
{
}

Ieee802154OrphanNotiCmdDescriptor::~Ieee802154OrphanNotiCmdDescriptor()
{
}

bool Ieee802154OrphanNotiCmdDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154OrphanNotiCmd *>(obj)!=NULL;
}

const char *Ieee802154OrphanNotiCmdDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154OrphanNotiCmdDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee802154OrphanNotiCmdDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee802154OrphanNotiCmdDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee802154OrphanNotiCmdDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154OrphanNotiCmdDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee802154OrphanNotiCmdDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154OrphanNotiCmdDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154OrphanNotiCmd *pp = (Ieee802154OrphanNotiCmd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154OrphanNotiCmdDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154OrphanNotiCmd *pp = (Ieee802154OrphanNotiCmd *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee802154OrphanNotiCmdDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154OrphanNotiCmd *pp = (Ieee802154OrphanNotiCmd *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee802154OrphanNotiCmdDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee802154OrphanNotiCmdDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154OrphanNotiCmd *pp = (Ieee802154OrphanNotiCmd *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee802154BeaconReqtCmd);

Ieee802154BeaconReqtCmd::Ieee802154BeaconReqtCmd(const char *name, int kind) : ::Ieee802154CmdFrame(name,kind)
{
}

Ieee802154BeaconReqtCmd::Ieee802154BeaconReqtCmd(const Ieee802154BeaconReqtCmd& other) : ::Ieee802154CmdFrame(other)
{
    copy(other);
}

Ieee802154BeaconReqtCmd::~Ieee802154BeaconReqtCmd()
{
}

Ieee802154BeaconReqtCmd& Ieee802154BeaconReqtCmd::operator=(const Ieee802154BeaconReqtCmd& other)
{
    if (this==&other) return *this;
    ::Ieee802154CmdFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154BeaconReqtCmd::copy(const Ieee802154BeaconReqtCmd& other)
{
}

void Ieee802154BeaconReqtCmd::parsimPack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimPack(b);
}

void Ieee802154BeaconReqtCmd::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimUnpack(b);
}

class Ieee802154BeaconReqtCmdDescriptor : public cClassDescriptor
{
  public:
    Ieee802154BeaconReqtCmdDescriptor();
    virtual ~Ieee802154BeaconReqtCmdDescriptor();

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

Register_ClassDescriptor(Ieee802154BeaconReqtCmdDescriptor);

Ieee802154BeaconReqtCmdDescriptor::Ieee802154BeaconReqtCmdDescriptor() : cClassDescriptor("Ieee802154BeaconReqtCmd", "Ieee802154CmdFrame")
{
}

Ieee802154BeaconReqtCmdDescriptor::~Ieee802154BeaconReqtCmdDescriptor()
{
}

bool Ieee802154BeaconReqtCmdDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154BeaconReqtCmd *>(obj)!=NULL;
}

const char *Ieee802154BeaconReqtCmdDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154BeaconReqtCmdDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int Ieee802154BeaconReqtCmdDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *Ieee802154BeaconReqtCmdDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int Ieee802154BeaconReqtCmdDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154BeaconReqtCmdDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *Ieee802154BeaconReqtCmdDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154BeaconReqtCmdDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154BeaconReqtCmd *pp = (Ieee802154BeaconReqtCmd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154BeaconReqtCmdDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154BeaconReqtCmd *pp = (Ieee802154BeaconReqtCmd *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool Ieee802154BeaconReqtCmdDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154BeaconReqtCmd *pp = (Ieee802154BeaconReqtCmd *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *Ieee802154BeaconReqtCmdDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *Ieee802154BeaconReqtCmdDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154BeaconReqtCmd *pp = (Ieee802154BeaconReqtCmd *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee802154CoorRealignCmd);

Ieee802154CoorRealignCmd::Ieee802154CoorRealignCmd(const char *name, int kind) : ::Ieee802154CmdFrame(name,kind)
{
    this->panId_var = 0;
    this->coorShortAddr_var = 0;
    this->logiChannel_var = 0;
    this->shortAddr_var = 0;
}

Ieee802154CoorRealignCmd::Ieee802154CoorRealignCmd(const Ieee802154CoorRealignCmd& other) : ::Ieee802154CmdFrame(other)
{
    copy(other);
}

Ieee802154CoorRealignCmd::~Ieee802154CoorRealignCmd()
{
}

Ieee802154CoorRealignCmd& Ieee802154CoorRealignCmd::operator=(const Ieee802154CoorRealignCmd& other)
{
    if (this==&other) return *this;
    ::Ieee802154CmdFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154CoorRealignCmd::copy(const Ieee802154CoorRealignCmd& other)
{
    this->panId_var = other.panId_var;
    this->coorShortAddr_var = other.coorShortAddr_var;
    this->logiChannel_var = other.logiChannel_var;
    this->shortAddr_var = other.shortAddr_var;
}

void Ieee802154CoorRealignCmd::parsimPack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimPack(b);
    doPacking(b,this->panId_var);
    doPacking(b,this->coorShortAddr_var);
    doPacking(b,this->logiChannel_var);
    doPacking(b,this->shortAddr_var);
}

void Ieee802154CoorRealignCmd::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimUnpack(b);
    doUnpacking(b,this->panId_var);
    doUnpacking(b,this->coorShortAddr_var);
    doUnpacking(b,this->logiChannel_var);
    doUnpacking(b,this->shortAddr_var);
}

unsigned short Ieee802154CoorRealignCmd::getPanId() const
{
    return panId_var;
}

void Ieee802154CoorRealignCmd::setPanId(unsigned short panId)
{
    this->panId_var = panId;
}

unsigned short Ieee802154CoorRealignCmd::getCoorShortAddr() const
{
    return coorShortAddr_var;
}

void Ieee802154CoorRealignCmd::setCoorShortAddr(unsigned short coorShortAddr)
{
    this->coorShortAddr_var = coorShortAddr;
}

unsigned char Ieee802154CoorRealignCmd::getLogiChannel() const
{
    return logiChannel_var;
}

void Ieee802154CoorRealignCmd::setLogiChannel(unsigned char logiChannel)
{
    this->logiChannel_var = logiChannel;
}

unsigned short Ieee802154CoorRealignCmd::getShortAddr() const
{
    return shortAddr_var;
}

void Ieee802154CoorRealignCmd::setShortAddr(unsigned short shortAddr)
{
    this->shortAddr_var = shortAddr;
}

class Ieee802154CoorRealignCmdDescriptor : public cClassDescriptor
{
  public:
    Ieee802154CoorRealignCmdDescriptor();
    virtual ~Ieee802154CoorRealignCmdDescriptor();

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

Register_ClassDescriptor(Ieee802154CoorRealignCmdDescriptor);

Ieee802154CoorRealignCmdDescriptor::Ieee802154CoorRealignCmdDescriptor() : cClassDescriptor("Ieee802154CoorRealignCmd", "Ieee802154CmdFrame")
{
}

Ieee802154CoorRealignCmdDescriptor::~Ieee802154CoorRealignCmdDescriptor()
{
}

bool Ieee802154CoorRealignCmdDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154CoorRealignCmd *>(obj)!=NULL;
}

const char *Ieee802154CoorRealignCmdDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154CoorRealignCmdDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int Ieee802154CoorRealignCmdDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee802154CoorRealignCmdDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "panId",
        "coorShortAddr",
        "logiChannel",
        "shortAddr",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int Ieee802154CoorRealignCmdDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "panId")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "coorShortAddr")==0) return base+1;
    if (fieldName[0]=='l' && strcmp(fieldName, "logiChannel")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "shortAddr")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154CoorRealignCmdDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned short",
        "unsigned short",
        "unsigned char",
        "unsigned short",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154CoorRealignCmdDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154CoorRealignCmdDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154CoorRealignCmd *pp = (Ieee802154CoorRealignCmd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154CoorRealignCmdDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154CoorRealignCmd *pp = (Ieee802154CoorRealignCmd *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getPanId());
        case 1: return ulong2string(pp->getCoorShortAddr());
        case 2: return ulong2string(pp->getLogiChannel());
        case 3: return ulong2string(pp->getShortAddr());
        default: return "";
    }
}

bool Ieee802154CoorRealignCmdDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154CoorRealignCmd *pp = (Ieee802154CoorRealignCmd *)object; (void)pp;
    switch (field) {
        case 0: pp->setPanId(string2ulong(value)); return true;
        case 1: pp->setCoorShortAddr(string2ulong(value)); return true;
        case 2: pp->setLogiChannel(string2ulong(value)); return true;
        case 3: pp->setShortAddr(string2ulong(value)); return true;
        default: return false;
    }
}

const char *Ieee802154CoorRealignCmdDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee802154CoorRealignCmdDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154CoorRealignCmd *pp = (Ieee802154CoorRealignCmd *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(Ieee802154GtsReqtCmd);

Ieee802154GtsReqtCmd::Ieee802154GtsReqtCmd(const char *name, int kind) : ::Ieee802154CmdFrame(name,kind)
{
    this->gtsLength_var = 0;
    this->recvOnly_var = 0;
    this->isAllocation_var = 0;
}

Ieee802154GtsReqtCmd::Ieee802154GtsReqtCmd(const Ieee802154GtsReqtCmd& other) : ::Ieee802154CmdFrame(other)
{
    copy(other);
}

Ieee802154GtsReqtCmd::~Ieee802154GtsReqtCmd()
{
}

Ieee802154GtsReqtCmd& Ieee802154GtsReqtCmd::operator=(const Ieee802154GtsReqtCmd& other)
{
    if (this==&other) return *this;
    ::Ieee802154CmdFrame::operator=(other);
    copy(other);
    return *this;
}

void Ieee802154GtsReqtCmd::copy(const Ieee802154GtsReqtCmd& other)
{
    this->gtsLength_var = other.gtsLength_var;
    this->recvOnly_var = other.recvOnly_var;
    this->isAllocation_var = other.isAllocation_var;
}

void Ieee802154GtsReqtCmd::parsimPack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimPack(b);
    doPacking(b,this->gtsLength_var);
    doPacking(b,this->recvOnly_var);
    doPacking(b,this->isAllocation_var);
}

void Ieee802154GtsReqtCmd::parsimUnpack(cCommBuffer *b)
{
    ::Ieee802154CmdFrame::parsimUnpack(b);
    doUnpacking(b,this->gtsLength_var);
    doUnpacking(b,this->recvOnly_var);
    doUnpacking(b,this->isAllocation_var);
}

unsigned char Ieee802154GtsReqtCmd::getGtsLength() const
{
    return gtsLength_var;
}

void Ieee802154GtsReqtCmd::setGtsLength(unsigned char gtsLength)
{
    this->gtsLength_var = gtsLength;
}

bool Ieee802154GtsReqtCmd::getRecvOnly() const
{
    return recvOnly_var;
}

void Ieee802154GtsReqtCmd::setRecvOnly(bool recvOnly)
{
    this->recvOnly_var = recvOnly;
}

bool Ieee802154GtsReqtCmd::getIsAllocation() const
{
    return isAllocation_var;
}

void Ieee802154GtsReqtCmd::setIsAllocation(bool isAllocation)
{
    this->isAllocation_var = isAllocation;
}

class Ieee802154GtsReqtCmdDescriptor : public cClassDescriptor
{
  public:
    Ieee802154GtsReqtCmdDescriptor();
    virtual ~Ieee802154GtsReqtCmdDescriptor();

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

Register_ClassDescriptor(Ieee802154GtsReqtCmdDescriptor);

Ieee802154GtsReqtCmdDescriptor::Ieee802154GtsReqtCmdDescriptor() : cClassDescriptor("Ieee802154GtsReqtCmd", "Ieee802154CmdFrame")
{
}

Ieee802154GtsReqtCmdDescriptor::~Ieee802154GtsReqtCmdDescriptor()
{
}

bool Ieee802154GtsReqtCmdDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Ieee802154GtsReqtCmd *>(obj)!=NULL;
}

const char *Ieee802154GtsReqtCmdDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int Ieee802154GtsReqtCmdDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int Ieee802154GtsReqtCmdDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *Ieee802154GtsReqtCmdDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "gtsLength",
        "recvOnly",
        "isAllocation",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int Ieee802154GtsReqtCmdDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "gtsLength")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "recvOnly")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "isAllocation")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *Ieee802154GtsReqtCmdDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
        "bool",
        "bool",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *Ieee802154GtsReqtCmdDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int Ieee802154GtsReqtCmdDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154GtsReqtCmd *pp = (Ieee802154GtsReqtCmd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string Ieee802154GtsReqtCmdDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154GtsReqtCmd *pp = (Ieee802154GtsReqtCmd *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getGtsLength());
        case 1: return bool2string(pp->getRecvOnly());
        case 2: return bool2string(pp->getIsAllocation());
        default: return "";
    }
}

bool Ieee802154GtsReqtCmdDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154GtsReqtCmd *pp = (Ieee802154GtsReqtCmd *)object; (void)pp;
    switch (field) {
        case 0: pp->setGtsLength(string2ulong(value)); return true;
        case 1: pp->setRecvOnly(string2bool(value)); return true;
        case 2: pp->setIsAllocation(string2bool(value)); return true;
        default: return false;
    }
}

const char *Ieee802154GtsReqtCmdDescriptor::getFieldStructName(void *object, int field) const
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

void *Ieee802154GtsReqtCmdDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Ieee802154GtsReqtCmd *pp = (Ieee802154GtsReqtCmd *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


