//
// Generated file, do not edit! Created by nedtool 4.6 from inet/securityModule/message/securityPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "securityPkt_m.h"

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

Register_Class(SecurityPkt);

SecurityPkt::SecurityPkt(const char *name, int kind) : ::cPacket(name,kind)
{
    for (unsigned int i=0; i<12; i++)
        this->Descriptor_Type_var[i] = 0;
    this->Key_Info_var = 0;
    this->Key_Length_var = 0;
    this->Key_RSC_var = 0;
    this->Reserved_var = 0;
    this->Key_Data_Length_var = 0;
}

SecurityPkt::SecurityPkt(const SecurityPkt& other) : ::cPacket(other)
{
    copy(other);
}

SecurityPkt::~SecurityPkt()
{
}

SecurityPkt& SecurityPkt::operator=(const SecurityPkt& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SecurityPkt::copy(const SecurityPkt& other)
{
    for (unsigned int i=0; i<12; i++)
        this->Descriptor_Type_var[i] = other.Descriptor_Type_var[i];
    this->Key_Info_var = other.Key_Info_var;
    this->Key_Length_var = other.Key_Length_var;
    this->Key_RC_var = other.Key_RC_var;
    this->Key_Nonce_var = other.Key_Nonce_var;
    this->EAPOL_KeyIV_var = other.EAPOL_KeyIV_var;
    this->Key_RSC_var = other.Key_RSC_var;
    this->Reserved_var = other.Reserved_var;
    this->Mic_var = other.Mic_var;
    this->Key_Data_Length_var = other.Key_Data_Length_var;
    this->Key_Data128_var = other.Key_Data128_var;
    this->Key_Data256_var = other.Key_Data256_var;
}

void SecurityPkt::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->Descriptor_Type_var,12);
    doPacking(b,this->Key_Info_var);
    doPacking(b,this->Key_Length_var);
    doPacking(b,this->Key_RC_var);
    doPacking(b,this->Key_Nonce_var);
    doPacking(b,this->EAPOL_KeyIV_var);
    doPacking(b,this->Key_RSC_var);
    doPacking(b,this->Reserved_var);
    doPacking(b,this->Mic_var);
    doPacking(b,this->Key_Data_Length_var);
    doPacking(b,this->Key_Data128_var);
    doPacking(b,this->Key_Data256_var);
}

void SecurityPkt::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->Descriptor_Type_var,12);
    doUnpacking(b,this->Key_Info_var);
    doUnpacking(b,this->Key_Length_var);
    doUnpacking(b,this->Key_RC_var);
    doUnpacking(b,this->Key_Nonce_var);
    doUnpacking(b,this->EAPOL_KeyIV_var);
    doUnpacking(b,this->Key_RSC_var);
    doUnpacking(b,this->Reserved_var);
    doUnpacking(b,this->Mic_var);
    doUnpacking(b,this->Key_Data_Length_var);
    doUnpacking(b,this->Key_Data128_var);
    doUnpacking(b,this->Key_Data256_var);
}

unsigned int SecurityPkt::getDescriptor_TypeArraySize() const
{
    return 12;
}

char SecurityPkt::getDescriptor_Type(unsigned int k) const
{
    if (k>=12) throw cRuntimeError("Array of size 12 indexed by %lu", (unsigned long)k);
    return Descriptor_Type_var[k];
}

void SecurityPkt::setDescriptor_Type(unsigned int k, char Descriptor_Type)
{
    if (k>=12) throw cRuntimeError("Array of size 12 indexed by %lu", (unsigned long)k);
    this->Descriptor_Type_var[k] = Descriptor_Type;
}

short SecurityPkt::getKey_Info() const
{
    return Key_Info_var;
}

void SecurityPkt::setKey_Info(short Key_Info)
{
    this->Key_Info_var = Key_Info;
}

short SecurityPkt::getKey_Length() const
{
    return Key_Length_var;
}

void SecurityPkt::setKey_Length(short Key_Length)
{
    this->Key_Length_var = Key_Length;
}

unit64_t_& SecurityPkt::getKey_RC()
{
    return Key_RC_var;
}

void SecurityPkt::setKey_RC(const unit64_t_& Key_RC)
{
    this->Key_RC_var = Key_RC;
}

nonce& SecurityPkt::getKey_Nonce()
{
    return Key_Nonce_var;
}

void SecurityPkt::setKey_Nonce(const nonce& Key_Nonce)
{
    this->Key_Nonce_var = Key_Nonce;
}

key128& SecurityPkt::getEAPOL_KeyIV()
{
    return EAPOL_KeyIV_var;
}

void SecurityPkt::setEAPOL_KeyIV(const key128& EAPOL_KeyIV)
{
    this->EAPOL_KeyIV_var = EAPOL_KeyIV;
}

unit64_t_& SecurityPkt::getKey_RSC()
{
    return Key_RSC_var;
}

void SecurityPkt::setKey_RSC(const unit64_t_& Key_RSC)
{
    this->Key_RSC_var = Key_RSC;
}

unit64_t_& SecurityPkt::getReserved()
{
    return Reserved_var;
}

void SecurityPkt::setReserved(const unit64_t_& Reserved)
{
    this->Reserved_var = Reserved;
}

key128& SecurityPkt::getMic()
{
    return Mic_var;
}

void SecurityPkt::setMic(const key128& Mic)
{
    this->Mic_var = Mic;
}

short SecurityPkt::getKey_Data_Length() const
{
    return Key_Data_Length_var;
}

void SecurityPkt::setKey_Data_Length(short Key_Data_Length)
{
    this->Key_Data_Length_var = Key_Data_Length;
}

key128& SecurityPkt::getKey_Data128()
{
    return Key_Data128_var;
}

void SecurityPkt::setKey_Data128(const key128& Key_Data128)
{
    this->Key_Data128_var = Key_Data128;
}

key256& SecurityPkt::getKey_Data256()
{
    return Key_Data256_var;
}

void SecurityPkt::setKey_Data256(const key256& Key_Data256)
{
    this->Key_Data256_var = Key_Data256;
}

class SecurityPktDescriptor : public cClassDescriptor
{
  public:
    SecurityPktDescriptor();
    virtual ~SecurityPktDescriptor();

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

Register_ClassDescriptor(SecurityPktDescriptor);

SecurityPktDescriptor::SecurityPktDescriptor() : cClassDescriptor("SecurityPkt", "cPacket")
{
}

SecurityPktDescriptor::~SecurityPktDescriptor()
{
}

bool SecurityPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SecurityPkt *>(obj)!=NULL;
}

const char *SecurityPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SecurityPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 12+basedesc->getFieldCount(object) : 12;
}

unsigned int SecurityPktDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<12) ? fieldTypeFlags[field] : 0;
}

const char *SecurityPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "Descriptor_Type",
        "Key_Info",
        "Key_Length",
        "Key_RC",
        "Key_Nonce",
        "EAPOL_KeyIV",
        "Key_RSC",
        "Reserved",
        "Mic",
        "Key_Data_Length",
        "Key_Data128",
        "Key_Data256",
    };
    return (field>=0 && field<12) ? fieldNames[field] : NULL;
}

int SecurityPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='D' && strcmp(fieldName, "Descriptor_Type")==0) return base+0;
    if (fieldName[0]=='K' && strcmp(fieldName, "Key_Info")==0) return base+1;
    if (fieldName[0]=='K' && strcmp(fieldName, "Key_Length")==0) return base+2;
    if (fieldName[0]=='K' && strcmp(fieldName, "Key_RC")==0) return base+3;
    if (fieldName[0]=='K' && strcmp(fieldName, "Key_Nonce")==0) return base+4;
    if (fieldName[0]=='E' && strcmp(fieldName, "EAPOL_KeyIV")==0) return base+5;
    if (fieldName[0]=='K' && strcmp(fieldName, "Key_RSC")==0) return base+6;
    if (fieldName[0]=='R' && strcmp(fieldName, "Reserved")==0) return base+7;
    if (fieldName[0]=='M' && strcmp(fieldName, "Mic")==0) return base+8;
    if (fieldName[0]=='K' && strcmp(fieldName, "Key_Data_Length")==0) return base+9;
    if (fieldName[0]=='K' && strcmp(fieldName, "Key_Data128")==0) return base+10;
    if (fieldName[0]=='K' && strcmp(fieldName, "Key_Data256")==0) return base+11;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SecurityPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "char",
        "short",
        "short",
        "unit64_t_",
        "nonce",
        "key128",
        "unit64_t_",
        "unit64_t_",
        "key128",
        "short",
        "key128",
        "key256",
    };
    return (field>=0 && field<12) ? fieldTypeStrings[field] : NULL;
}

const char *SecurityPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SecurityPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SecurityPkt *pp = (SecurityPkt *)object; (void)pp;
    switch (field) {
        case 0: return 12;
        default: return 0;
    }
}

std::string SecurityPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SecurityPkt *pp = (SecurityPkt *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getDescriptor_Type(i));
        case 1: return long2string(pp->getKey_Info());
        case 2: return long2string(pp->getKey_Length());
        case 3: {std::stringstream out; out << pp->getKey_RC(); return out.str();}
        case 4: {std::stringstream out; out << pp->getKey_Nonce(); return out.str();}
        case 5: {std::stringstream out; out << pp->getEAPOL_KeyIV(); return out.str();}
        case 6: {std::stringstream out; out << pp->getKey_RSC(); return out.str();}
        case 7: {std::stringstream out; out << pp->getReserved(); return out.str();}
        case 8: {std::stringstream out; out << pp->getMic(); return out.str();}
        case 9: return long2string(pp->getKey_Data_Length());
        case 10: {std::stringstream out; out << pp->getKey_Data128(); return out.str();}
        case 11: {std::stringstream out; out << pp->getKey_Data256(); return out.str();}
        default: return "";
    }
}

bool SecurityPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SecurityPkt *pp = (SecurityPkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setDescriptor_Type(i,string2long(value)); return true;
        case 1: pp->setKey_Info(string2long(value)); return true;
        case 2: pp->setKey_Length(string2long(value)); return true;
        case 9: pp->setKey_Data_Length(string2long(value)); return true;
        default: return false;
    }
}

const char *SecurityPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return opp_typename(typeid(unit64_t_));
        case 4: return opp_typename(typeid(nonce));
        case 5: return opp_typename(typeid(key128));
        case 6: return opp_typename(typeid(unit64_t_));
        case 7: return opp_typename(typeid(unit64_t_));
        case 8: return opp_typename(typeid(key128));
        case 10: return opp_typename(typeid(key128));
        case 11: return opp_typename(typeid(key256));
        default: return NULL;
    };
}

void *SecurityPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SecurityPkt *pp = (SecurityPkt *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getKey_RC()); break;
        case 4: return (void *)(&pp->getKey_Nonce()); break;
        case 5: return (void *)(&pp->getEAPOL_KeyIV()); break;
        case 6: return (void *)(&pp->getKey_RSC()); break;
        case 7: return (void *)(&pp->getReserved()); break;
        case 8: return (void *)(&pp->getMic()); break;
        case 10: return (void *)(&pp->getKey_Data128()); break;
        case 11: return (void *)(&pp->getKey_Data256()); break;
        default: return NULL;
    }
}

Register_Class(CCMPFrame);

CCMPFrame::CCMPFrame(const char *name, int kind) : ::cPacket(name,kind)
{
}

CCMPFrame::CCMPFrame(const CCMPFrame& other) : ::cPacket(other)
{
    copy(other);
}

CCMPFrame::~CCMPFrame()
{
}

CCMPFrame& CCMPFrame::operator=(const CCMPFrame& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void CCMPFrame::copy(const CCMPFrame& other)
{
    this->CCMP_Header_var = other.CCMP_Header_var;
    this->CCMP_Mic_var = other.CCMP_Mic_var;
}

void CCMPFrame::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->CCMP_Header_var);
    doPacking(b,this->CCMP_Mic_var);
}

void CCMPFrame::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->CCMP_Header_var);
    doUnpacking(b,this->CCMP_Mic_var);
}

unit64_t_& CCMPFrame::getCCMP_Header()
{
    return CCMP_Header_var;
}

void CCMPFrame::setCCMP_Header(const unit64_t_& CCMP_Header)
{
    this->CCMP_Header_var = CCMP_Header;
}

unit64_t_& CCMPFrame::getCCMP_Mic()
{
    return CCMP_Mic_var;
}

void CCMPFrame::setCCMP_Mic(const unit64_t_& CCMP_Mic)
{
    this->CCMP_Mic_var = CCMP_Mic;
}

class CCMPFrameDescriptor : public cClassDescriptor
{
  public:
    CCMPFrameDescriptor();
    virtual ~CCMPFrameDescriptor();

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

Register_ClassDescriptor(CCMPFrameDescriptor);

CCMPFrameDescriptor::CCMPFrameDescriptor() : cClassDescriptor("CCMPFrame", "cPacket")
{
}

CCMPFrameDescriptor::~CCMPFrameDescriptor()
{
}

bool CCMPFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<CCMPFrame *>(obj)!=NULL;
}

const char *CCMPFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int CCMPFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int CCMPFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *CCMPFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "CCMP_Header",
        "CCMP_Mic",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int CCMPFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='C' && strcmp(fieldName, "CCMP_Header")==0) return base+0;
    if (fieldName[0]=='C' && strcmp(fieldName, "CCMP_Mic")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *CCMPFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unit64_t_",
        "unit64_t_",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *CCMPFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int CCMPFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    CCMPFrame *pp = (CCMPFrame *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string CCMPFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    CCMPFrame *pp = (CCMPFrame *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getCCMP_Header(); return out.str();}
        case 1: {std::stringstream out; out << pp->getCCMP_Mic(); return out.str();}
        default: return "";
    }
}

bool CCMPFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    CCMPFrame *pp = (CCMPFrame *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *CCMPFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(unit64_t_));
        case 1: return opp_typename(typeid(unit64_t_));
        default: return NULL;
    };
}

void *CCMPFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    CCMPFrame *pp = (CCMPFrame *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getCCMP_Header()); break;
        case 1: return (void *)(&pp->getCCMP_Mic()); break;
        default: return NULL;
    }
}

Register_Class(SAEMsg);

SAEMsg::SAEMsg(const char *name, int kind) : ::cPacket(name,kind)
{
    this->SAE_sendConfirm_var = 0;
    this->SAE_commitScalar_var = 0;
    this->SAE_commitElement_var = 0;
    this->SAE_confirmfield_var = 0;
    this->SAE_finiteCyclicGroup_var = 0;
}

SAEMsg::SAEMsg(const SAEMsg& other) : ::cPacket(other)
{
    copy(other);
}

SAEMsg::~SAEMsg()
{
}

SAEMsg& SAEMsg::operator=(const SAEMsg& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void SAEMsg::copy(const SAEMsg& other)
{
    this->SAE_sendConfirm_var = other.SAE_sendConfirm_var;
    this->SAE_commitScalar_var = other.SAE_commitScalar_var;
    this->SAE_commitElement_var = other.SAE_commitElement_var;
    this->SAE_confirmfield_var = other.SAE_confirmfield_var;
    this->SAE_finiteCyclicGroup_var = other.SAE_finiteCyclicGroup_var;
}

void SAEMsg::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->SAE_sendConfirm_var);
    doPacking(b,this->SAE_commitScalar_var);
    doPacking(b,this->SAE_commitElement_var);
    doPacking(b,this->SAE_confirmfield_var);
    doPacking(b,this->SAE_finiteCyclicGroup_var);
}

void SAEMsg::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->SAE_sendConfirm_var);
    doUnpacking(b,this->SAE_commitScalar_var);
    doUnpacking(b,this->SAE_commitElement_var);
    doUnpacking(b,this->SAE_confirmfield_var);
    doUnpacking(b,this->SAE_finiteCyclicGroup_var);
}

short SAEMsg::getSAE_sendConfirm() const
{
    return SAE_sendConfirm_var;
}

void SAEMsg::setSAE_sendConfirm(short SAE_sendConfirm)
{
    this->SAE_sendConfirm_var = SAE_sendConfirm;
}

int SAEMsg::getSAE_commitScalar() const
{
    return SAE_commitScalar_var;
}

void SAEMsg::setSAE_commitScalar(int SAE_commitScalar)
{
    this->SAE_commitScalar_var = SAE_commitScalar;
}

int SAEMsg::getSAE_commitElement() const
{
    return SAE_commitElement_var;
}

void SAEMsg::setSAE_commitElement(int SAE_commitElement)
{
    this->SAE_commitElement_var = SAE_commitElement;
}

int SAEMsg::getSAE_confirmfield() const
{
    return SAE_confirmfield_var;
}

void SAEMsg::setSAE_confirmfield(int SAE_confirmfield)
{
    this->SAE_confirmfield_var = SAE_confirmfield;
}

short SAEMsg::getSAE_finiteCyclicGroup() const
{
    return SAE_finiteCyclicGroup_var;
}

void SAEMsg::setSAE_finiteCyclicGroup(short SAE_finiteCyclicGroup)
{
    this->SAE_finiteCyclicGroup_var = SAE_finiteCyclicGroup;
}

class SAEMsgDescriptor : public cClassDescriptor
{
  public:
    SAEMsgDescriptor();
    virtual ~SAEMsgDescriptor();

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

Register_ClassDescriptor(SAEMsgDescriptor);

SAEMsgDescriptor::SAEMsgDescriptor() : cClassDescriptor("SAEMsg", "cPacket")
{
}

SAEMsgDescriptor::~SAEMsgDescriptor()
{
}

bool SAEMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SAEMsg *>(obj)!=NULL;
}

const char *SAEMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SAEMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int SAEMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SAEMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "SAE_sendConfirm",
        "SAE_commitScalar",
        "SAE_commitElement",
        "SAE_confirmfield",
        "SAE_finiteCyclicGroup",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int SAEMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='S' && strcmp(fieldName, "SAE_sendConfirm")==0) return base+0;
    if (fieldName[0]=='S' && strcmp(fieldName, "SAE_commitScalar")==0) return base+1;
    if (fieldName[0]=='S' && strcmp(fieldName, "SAE_commitElement")==0) return base+2;
    if (fieldName[0]=='S' && strcmp(fieldName, "SAE_confirmfield")==0) return base+3;
    if (fieldName[0]=='S' && strcmp(fieldName, "SAE_finiteCyclicGroup")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SAEMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "short",
        "int",
        "int",
        "int",
        "short",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *SAEMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SAEMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SAEMsg *pp = (SAEMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SAEMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SAEMsg *pp = (SAEMsg *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getSAE_sendConfirm());
        case 1: return long2string(pp->getSAE_commitScalar());
        case 2: return long2string(pp->getSAE_commitElement());
        case 3: return long2string(pp->getSAE_confirmfield());
        case 4: return long2string(pp->getSAE_finiteCyclicGroup());
        default: return "";
    }
}

bool SAEMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SAEMsg *pp = (SAEMsg *)object; (void)pp;
    switch (field) {
        case 0: pp->setSAE_sendConfirm(string2long(value)); return true;
        case 1: pp->setSAE_commitScalar(string2long(value)); return true;
        case 2: pp->setSAE_commitElement(string2long(value)); return true;
        case 3: pp->setSAE_confirmfield(string2long(value)); return true;
        case 4: pp->setSAE_finiteCyclicGroup(string2long(value)); return true;
        default: return false;
    }
}

const char *SAEMsgDescriptor::getFieldStructName(void *object, int field) const
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

void *SAEMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SAEMsg *pp = (SAEMsg *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(AMPEMsg);

AMPEMsg::AMPEMsg(const char *name, int kind) : ::cPacket(name,kind)
{
    this->sec_var = 1;
}

AMPEMsg::AMPEMsg(const AMPEMsg& other) : ::cPacket(other)
{
    copy(other);
}

AMPEMsg::~AMPEMsg()
{
}

AMPEMsg& AMPEMsg::operator=(const AMPEMsg& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void AMPEMsg::copy(const AMPEMsg& other)
{
    this->Key_Data128_var = other.Key_Data128_var;
    this->sec_var = other.sec_var;
}

void AMPEMsg::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->Key_Data128_var);
    doPacking(b,this->sec_var);
}

void AMPEMsg::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->Key_Data128_var);
    doUnpacking(b,this->sec_var);
}

key128& AMPEMsg::getKey_Data128()
{
    return Key_Data128_var;
}

void AMPEMsg::setKey_Data128(const key128& Key_Data128)
{
    this->Key_Data128_var = Key_Data128;
}

int AMPEMsg::getSec() const
{
    return sec_var;
}

void AMPEMsg::setSec(int sec)
{
    this->sec_var = sec;
}

class AMPEMsgDescriptor : public cClassDescriptor
{
  public:
    AMPEMsgDescriptor();
    virtual ~AMPEMsgDescriptor();

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

Register_ClassDescriptor(AMPEMsgDescriptor);

AMPEMsgDescriptor::AMPEMsgDescriptor() : cClassDescriptor("AMPEMsg", "cPacket")
{
}

AMPEMsgDescriptor::~AMPEMsgDescriptor()
{
}

bool AMPEMsgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AMPEMsg *>(obj)!=NULL;
}

const char *AMPEMsgDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AMPEMsgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int AMPEMsgDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *AMPEMsgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "Key_Data128",
        "sec",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int AMPEMsgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='K' && strcmp(fieldName, "Key_Data128")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sec")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AMPEMsgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "key128",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *AMPEMsgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AMPEMsgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AMPEMsg *pp = (AMPEMsg *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AMPEMsgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AMPEMsg *pp = (AMPEMsg *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getKey_Data128(); return out.str();}
        case 1: return long2string(pp->getSec());
        default: return "";
    }
}

bool AMPEMsgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AMPEMsg *pp = (AMPEMsg *)object; (void)pp;
    switch (field) {
        case 1: pp->setSec(string2long(value)); return true;
        default: return false;
    }
}

const char *AMPEMsgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(key128));
        default: return NULL;
    };
}

void *AMPEMsgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AMPEMsg *pp = (AMPEMsg *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getKey_Data128()); break;
        default: return NULL;
    }
}


