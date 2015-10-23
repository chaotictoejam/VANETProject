//
// Generated file, do not edit! Created by nedtool 4.6 from linklayer/xmac/XMacPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "XMacPkt_m.h"

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

Register_Class(XMacPkt);

XMacPkt::XMacPkt(const char *name, int kind) : ::inet::MACFrameBase(name,kind)
{
    this->preambleCont_var = 0;
    destinationAddress_arraysize = 0;
    this->destinationAddress_var = 0;
}

XMacPkt::XMacPkt(const XMacPkt& other) : ::inet::MACFrameBase(other)
{
    destinationAddress_arraysize = 0;
    this->destinationAddress_var = 0;
    copy(other);
}

XMacPkt::~XMacPkt()
{
    delete [] destinationAddress_var;
}

XMacPkt& XMacPkt::operator=(const XMacPkt& other)
{
    if (this==&other) return *this;
    ::inet::MACFrameBase::operator=(other);
    copy(other);
    return *this;
}

void XMacPkt::copy(const XMacPkt& other)
{
    this->preambleCont_var = other.preambleCont_var;
    delete [] this->destinationAddress_var;
    this->destinationAddress_var = (other.destinationAddress_arraysize==0) ? NULL : new MACAddress[other.destinationAddress_arraysize];
    destinationAddress_arraysize = other.destinationAddress_arraysize;
    for (unsigned int i=0; i<destinationAddress_arraysize; i++)
        this->destinationAddress_var[i] = other.destinationAddress_var[i];
}

void XMacPkt::parsimPack(cCommBuffer *b)
{
    ::inet::MACFrameBase::parsimPack(b);
    doPacking(b,this->preambleCont_var);
    b->pack(destinationAddress_arraysize);
    doPacking(b,this->destinationAddress_var,destinationAddress_arraysize);
}

void XMacPkt::parsimUnpack(cCommBuffer *b)
{
    ::inet::MACFrameBase::parsimUnpack(b);
    doUnpacking(b,this->preambleCont_var);
    delete [] this->destinationAddress_var;
    b->unpack(destinationAddress_arraysize);
    if (destinationAddress_arraysize==0) {
        this->destinationAddress_var = 0;
    } else {
        this->destinationAddress_var = new MACAddress[destinationAddress_arraysize];
        doUnpacking(b,this->destinationAddress_var,destinationAddress_arraysize);
    }
}

int XMacPkt::getPreambleCont() const
{
    return preambleCont_var;
}

void XMacPkt::setPreambleCont(int preambleCont)
{
    this->preambleCont_var = preambleCont;
}

void XMacPkt::setDestinationAddressArraySize(unsigned int size)
{
    MACAddress *destinationAddress_var2 = (size==0) ? NULL : new MACAddress[size];
    unsigned int sz = destinationAddress_arraysize < size ? destinationAddress_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        destinationAddress_var2[i] = this->destinationAddress_var[i];
    destinationAddress_arraysize = size;
    delete [] this->destinationAddress_var;
    this->destinationAddress_var = destinationAddress_var2;
}

unsigned int XMacPkt::getDestinationAddressArraySize() const
{
    return destinationAddress_arraysize;
}

MACAddress& XMacPkt::getDestinationAddress(unsigned int k)
{
    if (k>=destinationAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", destinationAddress_arraysize, k);
    return destinationAddress_var[k];
}

void XMacPkt::setDestinationAddress(unsigned int k, const MACAddress& destinationAddress)
{
    if (k>=destinationAddress_arraysize) throw cRuntimeError("Array of size %d indexed by %d", destinationAddress_arraysize, k);
    this->destinationAddress_var[k] = destinationAddress;
}

class XMacPktDescriptor : public cClassDescriptor
{
  public:
    XMacPktDescriptor();
    virtual ~XMacPktDescriptor();

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

Register_ClassDescriptor(XMacPktDescriptor);

XMacPktDescriptor::XMacPktDescriptor() : cClassDescriptor("inet::XMacPkt", "inet::MACFrameBase")
{
}

XMacPktDescriptor::~XMacPktDescriptor()
{
}

bool XMacPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<XMacPkt *>(obj)!=NULL;
}

const char *XMacPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int XMacPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int XMacPktDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *XMacPktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "preambleCont",
        "destinationAddress",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int XMacPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='p' && strcmp(fieldName, "preambleCont")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destinationAddress")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *XMacPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "MACAddress",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *XMacPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int XMacPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    XMacPkt *pp = (XMacPkt *)object; (void)pp;
    switch (field) {
        case 1: return pp->getDestinationAddressArraySize();
        default: return 0;
    }
}

std::string XMacPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    XMacPkt *pp = (XMacPkt *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getPreambleCont());
        case 1: {std::stringstream out; out << pp->getDestinationAddress(i); return out.str();}
        default: return "";
    }
}

bool XMacPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    XMacPkt *pp = (XMacPkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setPreambleCont(string2long(value)); return true;
        default: return false;
    }
}

const char *XMacPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *XMacPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    XMacPkt *pp = (XMacPkt *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getDestinationAddress(i)); break;
        default: return NULL;
    }
}

} // namespace inet

