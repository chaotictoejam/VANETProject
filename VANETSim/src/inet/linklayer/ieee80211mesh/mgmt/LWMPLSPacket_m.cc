//
// Generated file, do not edit! Created by nedtool 4.6 from linklayer/ieee80211mesh/mgmt/LWMPLSPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LWMPLSPacket_m.h"

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
    cEnum *e = cEnum::find("LwmplsType");
    if (!e) enums.getInstance()->add(e = new cEnum("LwmplsType"));
    e->insert(WMPLS_NORMAL, "WMPLS_NORMAL");
    e->insert(WMPLS_BEGIN, "WMPLS_BEGIN");
    e->insert(WMPLS_REFRES, "WMPLS_REFRES");
    e->insert(WMPLS_END, "WMPLS_END");
    e->insert(WMPLS_BREAK, "WMPLS_BREAK");
    e->insert(WMPLS_NOTFOUND, "WMPLS_NOTFOUND");
    e->insert(WMPLS_ACK, "WMPLS_ACK");
    e->insert(WMPLS_ADITIONAL, "WMPLS_ADITIONAL");
    e->insert(WMPLS_BEGIN_W_ROUTE, "WMPLS_BEGIN_W_ROUTE");
    e->insert(WMPLS_SEND, "WMPLS_SEND");
    e->insert(WMPLS_BROADCAST, "WMPLS_BROADCAST");
    e->insert(WMPLS_MACBASEDLABEL_BEGIN, "WMPLS_MACBASEDLABEL_BEGIN");
    e->insert(WMPLS_MACBASEDLABEL_BEGIN_W_ROUTE, "WMPLS_MACBASEDLABEL_BEGIN_W_ROUTE");
    e->insert(WMPLS_ANNOUNCE_GATEWAY, "WMPLS_ANNOUNCE_GATEWAY");
    e->insert(WMPLS_REQUEST_GATEWAY, "WMPLS_REQUEST_GATEWAY");
);

Register_Class(LWMPLSPacket);

LWMPLSPacket::LWMPLSPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->setByteLength(6);

    this->label_var = 0;
    this->labelReturn_var = 0;
    this->type_var = 0;
    this->nextHeader_var = false;
    this->counter_var = 0;
    this->TTL_var = 0;
    vectorAddress_arraysize = 0;
    this->vectorAddress_var = 0;
}

LWMPLSPacket::LWMPLSPacket(const LWMPLSPacket& other) : ::cPacket(other)
{
    vectorAddress_arraysize = 0;
    this->vectorAddress_var = 0;
    copy(other);
}

LWMPLSPacket::~LWMPLSPacket()
{
    delete [] vectorAddress_var;
}

LWMPLSPacket& LWMPLSPacket::operator=(const LWMPLSPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void LWMPLSPacket::copy(const LWMPLSPacket& other)
{
    this->label_var = other.label_var;
    this->labelReturn_var = other.labelReturn_var;
    this->type_var = other.type_var;
    this->nextHeader_var = other.nextHeader_var;
    this->counter_var = other.counter_var;
    this->source_var = other.source_var;
    this->dest_var = other.dest_var;
    this->TTL_var = other.TTL_var;
    delete [] this->vectorAddress_var;
    this->vectorAddress_var = (other.vectorAddress_arraysize==0) ? NULL : new MACAddress[other.vectorAddress_arraysize];
    vectorAddress_arraysize = other.vectorAddress_arraysize;
    for (unsigned int i=0; i<vectorAddress_arraysize; i++)
        this->vectorAddress_var[i] = other.vectorAddress_var[i];
}

void LWMPLSPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->label_var);
    doPacking(b,this->labelReturn_var);
    doPacking(b,this->type_var);
    doPacking(b,this->nextHeader_var);
    doPacking(b,this->counter_var);
    doPacking(b,this->source_var);
    doPacking(b,this->dest_var);
    doPacking(b,this->TTL_var);
    b->pack(vectorAddress_arraysize);
    doPacking(b,this->vectorAddress_var,vectorAddress_arraysize);
}

void LWMPLSPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->label_var);
    doUnpacking(b,this->labelReturn_var);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->nextHeader_var);
    doUnpacking(b,this->counter_var);
    doUnpacking(b,this->source_var);
    doUnpacking(b,this->dest_var);
    doUnpacking(b,this->TTL_var);
    delete [] this->vectorAddress_var;
    b->unpack(vectorAddress_arraysize);
    if (vectorAddress_arraysize==0) {
        this->vectorAddress_var = 0;
    } else {
        this->vectorAddress_var = new MACAddress[vectorAddress_arraysize];
        doUnpacking(b,this->vectorAddress_var,vectorAddress_arraysize);
    }
}

int LWMPLSPacket::getLabel() const
{
    return label_var;
}

void LWMPLSPacket::setLabel(int label)
{
    this->label_var = label;
}

int LWMPLSPacket::getLabelReturn() const
{
    return labelReturn_var;
}

void LWMPLSPacket::setLabelReturn(int labelReturn)
{
    this->labelReturn_var = labelReturn;
}

int LWMPLSPacket::getType() const
{
    return type_var;
}

void LWMPLSPacket::setType(int type)
{
    this->type_var = type;
}

bool LWMPLSPacket::getNextHeader() const
{
    return nextHeader_var;
}

void LWMPLSPacket::setNextHeader(bool nextHeader)
{
    this->nextHeader_var = nextHeader;
}

unsigned int LWMPLSPacket::getCounter() const
{
    return counter_var;
}

void LWMPLSPacket::setCounter(unsigned int counter)
{
    this->counter_var = counter;
}

MACAddress& LWMPLSPacket::getSource()
{
    return source_var;
}

void LWMPLSPacket::setSource(const MACAddress& source)
{
    this->source_var = source;
}

MACAddress& LWMPLSPacket::getDest()
{
    return dest_var;
}

void LWMPLSPacket::setDest(const MACAddress& dest)
{
    this->dest_var = dest;
}

short LWMPLSPacket::getTTL() const
{
    return TTL_var;
}

void LWMPLSPacket::setTTL(short TTL)
{
    this->TTL_var = TTL;
}

void LWMPLSPacket::setVectorAddressArraySize(unsigned int size)
{
    MACAddress *vectorAddress_var2 = (size==0) ? NULL : new MACAddress[size];
    unsigned int sz = vectorAddress_arraysize < size ? vectorAddress_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        vectorAddress_var2[i] = this->vectorAddress_var[i];
    vectorAddress_arraysize = size;
    delete [] this->vectorAddress_var;
    this->vectorAddress_var = vectorAddress_var2;
}

unsigned int LWMPLSPacket::getVectorAddressArraySize() const
{
    return vectorAddress_arraysize;
}

MACAddress& LWMPLSPacket::getVectorAddress(unsigned int k)
{
    if (k>=vectorAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", vectorAddress_arraysize, k);
    return vectorAddress_var[k];
}

void LWMPLSPacket::setVectorAddress(unsigned int k, const MACAddress& vectorAddress)
{
    if (k>=vectorAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", vectorAddress_arraysize, k);
    this->vectorAddress_var[k] = vectorAddress;
}

class LWMPLSPacketDescriptor : public cClassDescriptor
{
  public:
    LWMPLSPacketDescriptor();
    virtual ~LWMPLSPacketDescriptor();

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

Register_ClassDescriptor(LWMPLSPacketDescriptor);

LWMPLSPacketDescriptor::LWMPLSPacketDescriptor() : cClassDescriptor("LWMPLSPacket", "cPacket")
{
}

LWMPLSPacketDescriptor::~LWMPLSPacketDescriptor()
{
}

bool LWMPLSPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LWMPLSPacket *>(obj)!=NULL;
}

const char *LWMPLSPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LWMPLSPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int LWMPLSPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<9) ? fieldTypeFlags[field] : 0;
}

const char *LWMPLSPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "label",
        "labelReturn",
        "type",
        "nextHeader",
        "counter",
        "source",
        "dest",
        "TTL",
        "vectorAddress",
    };
    return (field>=0 && field<9) ? fieldNames[field] : NULL;
}

int LWMPLSPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='l' && strcmp(fieldName, "label")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "labelReturn")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+2;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextHeader")==0) return base+3;
    if (fieldName[0]=='c' && strcmp(fieldName, "counter")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "source")==0) return base+5;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest")==0) return base+6;
    if (fieldName[0]=='T' && strcmp(fieldName, "TTL")==0) return base+7;
    if (fieldName[0]=='v' && strcmp(fieldName, "vectorAddress")==0) return base+8;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LWMPLSPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "int",
        "int",
        "bool",
        "unsigned int",
        "MACAddress",
        "MACAddress",
        "short",
        "MACAddress",
    };
    return (field>=0 && field<9) ? fieldTypeStrings[field] : NULL;
}

const char *LWMPLSPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "LwmplsType";
            return NULL;
        default: return NULL;
    }
}

int LWMPLSPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LWMPLSPacket *pp = (LWMPLSPacket *)object; (void)pp;
    switch (field) {
        case 8: return pp->getVectorAddressArraySize();
        default: return 0;
    }
}

std::string LWMPLSPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LWMPLSPacket *pp = (LWMPLSPacket *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getLabel());
        case 1: return long2string(pp->getLabelReturn());
        case 2: return long2string(pp->getType());
        case 3: return bool2string(pp->getNextHeader());
        case 4: return ulong2string(pp->getCounter());
        case 5: {std::stringstream out; out << pp->getSource(); return out.str();}
        case 6: {std::stringstream out; out << pp->getDest(); return out.str();}
        case 7: return long2string(pp->getTTL());
        case 8: {std::stringstream out; out << pp->getVectorAddress(i); return out.str();}
        default: return "";
    }
}

bool LWMPLSPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LWMPLSPacket *pp = (LWMPLSPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setLabel(string2long(value)); return true;
        case 1: pp->setLabelReturn(string2long(value)); return true;
        case 2: pp->setType(string2long(value)); return true;
        case 3: pp->setNextHeader(string2bool(value)); return true;
        case 4: pp->setCounter(string2ulong(value)); return true;
        case 7: pp->setTTL(string2long(value)); return true;
        default: return false;
    }
}

const char *LWMPLSPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 5: return opp_typename(typeid(MACAddress));
        case 6: return opp_typename(typeid(MACAddress));
        case 8: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *LWMPLSPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LWMPLSPacket *pp = (LWMPLSPacket *)object; (void)pp;
    switch (field) {
        case 5: return (void *)(&pp->getSource()); break;
        case 6: return (void *)(&pp->getDest()); break;
        case 8: return (void *)(&pp->getVectorAddress(i)); break;
        default: return NULL;
    }
}

Register_Class(LWMPLSControl);

LWMPLSControl::LWMPLSControl(const char *name, int kind) : ::LWMPLSPacket(name,kind)
{
    this->setByteLength(12);

    gateAddressPtr_arraysize = 0;
    this->gateAddressPtr_var = 0;
    assocAddressPtr_arraysize = 0;
    this->assocAddressPtr_var = 0;
}

LWMPLSControl::LWMPLSControl(const LWMPLSControl& other) : ::LWMPLSPacket(other)
{
    gateAddressPtr_arraysize = 0;
    this->gateAddressPtr_var = 0;
    assocAddressPtr_arraysize = 0;
    this->assocAddressPtr_var = 0;
    copy(other);
}

LWMPLSControl::~LWMPLSControl()
{
    delete [] gateAddressPtr_var;
    delete [] assocAddressPtr_var;
}

LWMPLSControl& LWMPLSControl::operator=(const LWMPLSControl& other)
{
    if (this==&other) return *this;
    ::LWMPLSPacket::operator=(other);
    copy(other);
    return *this;
}

void LWMPLSControl::copy(const LWMPLSControl& other)
{
    delete [] this->gateAddressPtr_var;
    this->gateAddressPtr_var = (other.gateAddressPtr_arraysize==0) ? NULL : new unsigned char[other.gateAddressPtr_arraysize];
    gateAddressPtr_arraysize = other.gateAddressPtr_arraysize;
    for (unsigned int i=0; i<gateAddressPtr_arraysize; i++)
        this->gateAddressPtr_var[i] = other.gateAddressPtr_var[i];
    delete [] this->assocAddressPtr_var;
    this->assocAddressPtr_var = (other.assocAddressPtr_arraysize==0) ? NULL : new unsigned char[other.assocAddressPtr_arraysize];
    assocAddressPtr_arraysize = other.assocAddressPtr_arraysize;
    for (unsigned int i=0; i<assocAddressPtr_arraysize; i++)
        this->assocAddressPtr_var[i] = other.assocAddressPtr_var[i];
}

void LWMPLSControl::parsimPack(cCommBuffer *b)
{
    ::LWMPLSPacket::parsimPack(b);
    b->pack(gateAddressPtr_arraysize);
    doPacking(b,this->gateAddressPtr_var,gateAddressPtr_arraysize);
    b->pack(assocAddressPtr_arraysize);
    doPacking(b,this->assocAddressPtr_var,assocAddressPtr_arraysize);
}

void LWMPLSControl::parsimUnpack(cCommBuffer *b)
{
    ::LWMPLSPacket::parsimUnpack(b);
    delete [] this->gateAddressPtr_var;
    b->unpack(gateAddressPtr_arraysize);
    if (gateAddressPtr_arraysize==0) {
        this->gateAddressPtr_var = 0;
    } else {
        this->gateAddressPtr_var = new unsigned char[gateAddressPtr_arraysize];
        doUnpacking(b,this->gateAddressPtr_var,gateAddressPtr_arraysize);
    }
    delete [] this->assocAddressPtr_var;
    b->unpack(assocAddressPtr_arraysize);
    if (assocAddressPtr_arraysize==0) {
        this->assocAddressPtr_var = 0;
    } else {
        this->assocAddressPtr_var = new unsigned char[assocAddressPtr_arraysize];
        doUnpacking(b,this->assocAddressPtr_var,assocAddressPtr_arraysize);
    }
}

void LWMPLSControl::setGateAddressPtrArraySize(unsigned int size)
{
    unsigned char *gateAddressPtr_var2 = (size==0) ? NULL : new unsigned char[size];
    unsigned int sz = gateAddressPtr_arraysize < size ? gateAddressPtr_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        gateAddressPtr_var2[i] = this->gateAddressPtr_var[i];
    for (unsigned int i=sz; i<size; i++)
        gateAddressPtr_var2[i] = 0;
    gateAddressPtr_arraysize = size;
    delete [] this->gateAddressPtr_var;
    this->gateAddressPtr_var = gateAddressPtr_var2;
}

unsigned int LWMPLSControl::getGateAddressPtrArraySize() const
{
    return gateAddressPtr_arraysize;
}

unsigned char LWMPLSControl::getGateAddressPtr(unsigned int k) const
{
    if (k>=gateAddressPtr_arraysize) throw cRuntimeError("Array of size %d indexed by %d", gateAddressPtr_arraysize, k);
    return gateAddressPtr_var[k];
}

void LWMPLSControl::setGateAddressPtr(unsigned int k, unsigned char gateAddressPtr)
{
    if (k>=gateAddressPtr_arraysize) throw cRuntimeError("Array of size %d indexed by %d", gateAddressPtr_arraysize, k);
    this->gateAddressPtr_var[k] = gateAddressPtr;
}

void LWMPLSControl::setAssocAddressPtrArraySize(unsigned int size)
{
    unsigned char *assocAddressPtr_var2 = (size==0) ? NULL : new unsigned char[size];
    unsigned int sz = assocAddressPtr_arraysize < size ? assocAddressPtr_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        assocAddressPtr_var2[i] = this->assocAddressPtr_var[i];
    for (unsigned int i=sz; i<size; i++)
        assocAddressPtr_var2[i] = 0;
    assocAddressPtr_arraysize = size;
    delete [] this->assocAddressPtr_var;
    this->assocAddressPtr_var = assocAddressPtr_var2;
}

unsigned int LWMPLSControl::getAssocAddressPtrArraySize() const
{
    return assocAddressPtr_arraysize;
}

unsigned char LWMPLSControl::getAssocAddressPtr(unsigned int k) const
{
    if (k>=assocAddressPtr_arraysize) throw cRuntimeError("Array of size %d indexed by %d", assocAddressPtr_arraysize, k);
    return assocAddressPtr_var[k];
}

void LWMPLSControl::setAssocAddressPtr(unsigned int k, unsigned char assocAddressPtr)
{
    if (k>=assocAddressPtr_arraysize) throw cRuntimeError("Array of size %d indexed by %d", assocAddressPtr_arraysize, k);
    this->assocAddressPtr_var[k] = assocAddressPtr;
}

class LWMPLSControlDescriptor : public cClassDescriptor
{
  public:
    LWMPLSControlDescriptor();
    virtual ~LWMPLSControlDescriptor();

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

Register_ClassDescriptor(LWMPLSControlDescriptor);

LWMPLSControlDescriptor::LWMPLSControlDescriptor() : cClassDescriptor("LWMPLSControl", "LWMPLSPacket")
{
}

LWMPLSControlDescriptor::~LWMPLSControlDescriptor()
{
}

bool LWMPLSControlDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LWMPLSControl *>(obj)!=NULL;
}

const char *LWMPLSControlDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LWMPLSControlDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int LWMPLSControlDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *LWMPLSControlDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "gateAddressPtr",
        "assocAddressPtr",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int LWMPLSControlDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='g' && strcmp(fieldName, "gateAddressPtr")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "assocAddressPtr")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LWMPLSControlDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
        "unsigned char",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *LWMPLSControlDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LWMPLSControlDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LWMPLSControl *pp = (LWMPLSControl *)object; (void)pp;
    switch (field) {
        case 0: return pp->getGateAddressPtrArraySize();
        case 1: return pp->getAssocAddressPtrArraySize();
        default: return 0;
    }
}

std::string LWMPLSControlDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LWMPLSControl *pp = (LWMPLSControl *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getGateAddressPtr(i));
        case 1: return ulong2string(pp->getAssocAddressPtr(i));
        default: return "";
    }
}

bool LWMPLSControlDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LWMPLSControl *pp = (LWMPLSControl *)object; (void)pp;
    switch (field) {
        case 0: pp->setGateAddressPtr(i,string2ulong(value)); return true;
        case 1: pp->setAssocAddressPtr(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *LWMPLSControlDescriptor::getFieldStructName(void *object, int field) const
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

void *LWMPLSControlDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LWMPLSControl *pp = (LWMPLSControl *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


