//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/manetrouting/PASER/simple_kdc/kdc_message/crl_message.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "crl_message_m.h"

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

Register_Class(crl_message);

crl_message::crl_message(const char *name, int kind) : ::cPacket(name,kind)
{
    this->cert_len_var = 0;
    cert_array_arraysize = 0;
    this->cert_array_var = 0;
    this->kdc_gtk_len_var = 0;
    kdc_gtk_array_arraysize = 0;
    this->kdc_gtk_array_var = 0;
    this->kdc_nonce_var = 0;
    this->kdc_crl_len_var = 0;
    kdc_crl_array_arraysize = 0;
    this->kdc_crl_array_var = 0;
    this->kdc_cert_len_var = 0;
    kdc_cert_array_arraysize = 0;
    this->kdc_cert_array_var = 0;
    this->kdc_sign_len_var = 0;
    kdc_sign_array_arraysize = 0;
    this->kdc_sign_array_var = 0;
    this->kdc_key_nr_var = 0;
    this->kdc_sign_key_len_var = 0;
    kdc_sign_key_array_arraysize = 0;
    this->kdc_sign_key_array_var = 0;
}

crl_message::crl_message(const crl_message& other) : ::cPacket(other)
{
    cert_array_arraysize = 0;
    this->cert_array_var = 0;
    kdc_gtk_array_arraysize = 0;
    this->kdc_gtk_array_var = 0;
    kdc_crl_array_arraysize = 0;
    this->kdc_crl_array_var = 0;
    kdc_cert_array_arraysize = 0;
    this->kdc_cert_array_var = 0;
    kdc_sign_array_arraysize = 0;
    this->kdc_sign_array_var = 0;
    kdc_sign_key_array_arraysize = 0;
    this->kdc_sign_key_array_var = 0;
    copy(other);
}

crl_message::~crl_message()
{
    delete [] cert_array_var;
    delete [] kdc_gtk_array_var;
    delete [] kdc_crl_array_var;
    delete [] kdc_cert_array_var;
    delete [] kdc_sign_array_var;
    delete [] kdc_sign_key_array_var;
}

crl_message& crl_message::operator=(const crl_message& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void crl_message::copy(const crl_message& other)
{
    this->src_var = other.src_var;
    this->gwAddr_var = other.gwAddr_var;
    this->nextHopAddr_var = other.nextHopAddr_var;
    this->cert_len_var = other.cert_len_var;
    delete [] this->cert_array_var;
    this->cert_array_var = (other.cert_array_arraysize==0) ? NULL : new char[other.cert_array_arraysize];
    cert_array_arraysize = other.cert_array_arraysize;
    for (unsigned int i=0; i<cert_array_arraysize; i++)
        this->cert_array_var[i] = other.cert_array_var[i];
    this->kdc_gtk_len_var = other.kdc_gtk_len_var;
    delete [] this->kdc_gtk_array_var;
    this->kdc_gtk_array_var = (other.kdc_gtk_array_arraysize==0) ? NULL : new char[other.kdc_gtk_array_arraysize];
    kdc_gtk_array_arraysize = other.kdc_gtk_array_arraysize;
    for (unsigned int i=0; i<kdc_gtk_array_arraysize; i++)
        this->kdc_gtk_array_var[i] = other.kdc_gtk_array_var[i];
    this->kdc_nonce_var = other.kdc_nonce_var;
    this->kdc_crl_len_var = other.kdc_crl_len_var;
    delete [] this->kdc_crl_array_var;
    this->kdc_crl_array_var = (other.kdc_crl_array_arraysize==0) ? NULL : new char[other.kdc_crl_array_arraysize];
    kdc_crl_array_arraysize = other.kdc_crl_array_arraysize;
    for (unsigned int i=0; i<kdc_crl_array_arraysize; i++)
        this->kdc_crl_array_var[i] = other.kdc_crl_array_var[i];
    this->kdc_cert_len_var = other.kdc_cert_len_var;
    delete [] this->kdc_cert_array_var;
    this->kdc_cert_array_var = (other.kdc_cert_array_arraysize==0) ? NULL : new char[other.kdc_cert_array_arraysize];
    kdc_cert_array_arraysize = other.kdc_cert_array_arraysize;
    for (unsigned int i=0; i<kdc_cert_array_arraysize; i++)
        this->kdc_cert_array_var[i] = other.kdc_cert_array_var[i];
    this->kdc_sign_len_var = other.kdc_sign_len_var;
    delete [] this->kdc_sign_array_var;
    this->kdc_sign_array_var = (other.kdc_sign_array_arraysize==0) ? NULL : new char[other.kdc_sign_array_arraysize];
    kdc_sign_array_arraysize = other.kdc_sign_array_arraysize;
    for (unsigned int i=0; i<kdc_sign_array_arraysize; i++)
        this->kdc_sign_array_var[i] = other.kdc_sign_array_var[i];
    this->kdc_key_nr_var = other.kdc_key_nr_var;
    this->kdc_sign_key_len_var = other.kdc_sign_key_len_var;
    delete [] this->kdc_sign_key_array_var;
    this->kdc_sign_key_array_var = (other.kdc_sign_key_array_arraysize==0) ? NULL : new char[other.kdc_sign_key_array_arraysize];
    kdc_sign_key_array_arraysize = other.kdc_sign_key_array_arraysize;
    for (unsigned int i=0; i<kdc_sign_key_array_arraysize; i++)
        this->kdc_sign_key_array_var[i] = other.kdc_sign_key_array_var[i];
}

void crl_message::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->src_var);
    doPacking(b,this->gwAddr_var);
    doPacking(b,this->nextHopAddr_var);
    doPacking(b,this->cert_len_var);
    b->pack(cert_array_arraysize);
    doPacking(b,this->cert_array_var,cert_array_arraysize);
    doPacking(b,this->kdc_gtk_len_var);
    b->pack(kdc_gtk_array_arraysize);
    doPacking(b,this->kdc_gtk_array_var,kdc_gtk_array_arraysize);
    doPacking(b,this->kdc_nonce_var);
    doPacking(b,this->kdc_crl_len_var);
    b->pack(kdc_crl_array_arraysize);
    doPacking(b,this->kdc_crl_array_var,kdc_crl_array_arraysize);
    doPacking(b,this->kdc_cert_len_var);
    b->pack(kdc_cert_array_arraysize);
    doPacking(b,this->kdc_cert_array_var,kdc_cert_array_arraysize);
    doPacking(b,this->kdc_sign_len_var);
    b->pack(kdc_sign_array_arraysize);
    doPacking(b,this->kdc_sign_array_var,kdc_sign_array_arraysize);
    doPacking(b,this->kdc_key_nr_var);
    doPacking(b,this->kdc_sign_key_len_var);
    b->pack(kdc_sign_key_array_arraysize);
    doPacking(b,this->kdc_sign_key_array_var,kdc_sign_key_array_arraysize);
}

void crl_message::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->src_var);
    doUnpacking(b,this->gwAddr_var);
    doUnpacking(b,this->nextHopAddr_var);
    doUnpacking(b,this->cert_len_var);
    delete [] this->cert_array_var;
    b->unpack(cert_array_arraysize);
    if (cert_array_arraysize==0) {
        this->cert_array_var = 0;
    } else {
        this->cert_array_var = new char[cert_array_arraysize];
        doUnpacking(b,this->cert_array_var,cert_array_arraysize);
    }
    doUnpacking(b,this->kdc_gtk_len_var);
    delete [] this->kdc_gtk_array_var;
    b->unpack(kdc_gtk_array_arraysize);
    if (kdc_gtk_array_arraysize==0) {
        this->kdc_gtk_array_var = 0;
    } else {
        this->kdc_gtk_array_var = new char[kdc_gtk_array_arraysize];
        doUnpacking(b,this->kdc_gtk_array_var,kdc_gtk_array_arraysize);
    }
    doUnpacking(b,this->kdc_nonce_var);
    doUnpacking(b,this->kdc_crl_len_var);
    delete [] this->kdc_crl_array_var;
    b->unpack(kdc_crl_array_arraysize);
    if (kdc_crl_array_arraysize==0) {
        this->kdc_crl_array_var = 0;
    } else {
        this->kdc_crl_array_var = new char[kdc_crl_array_arraysize];
        doUnpacking(b,this->kdc_crl_array_var,kdc_crl_array_arraysize);
    }
    doUnpacking(b,this->kdc_cert_len_var);
    delete [] this->kdc_cert_array_var;
    b->unpack(kdc_cert_array_arraysize);
    if (kdc_cert_array_arraysize==0) {
        this->kdc_cert_array_var = 0;
    } else {
        this->kdc_cert_array_var = new char[kdc_cert_array_arraysize];
        doUnpacking(b,this->kdc_cert_array_var,kdc_cert_array_arraysize);
    }
    doUnpacking(b,this->kdc_sign_len_var);
    delete [] this->kdc_sign_array_var;
    b->unpack(kdc_sign_array_arraysize);
    if (kdc_sign_array_arraysize==0) {
        this->kdc_sign_array_var = 0;
    } else {
        this->kdc_sign_array_var = new char[kdc_sign_array_arraysize];
        doUnpacking(b,this->kdc_sign_array_var,kdc_sign_array_arraysize);
    }
    doUnpacking(b,this->kdc_key_nr_var);
    doUnpacking(b,this->kdc_sign_key_len_var);
    delete [] this->kdc_sign_key_array_var;
    b->unpack(kdc_sign_key_array_arraysize);
    if (kdc_sign_key_array_arraysize==0) {
        this->kdc_sign_key_array_var = 0;
    } else {
        this->kdc_sign_key_array_var = new char[kdc_sign_key_array_arraysize];
        doUnpacking(b,this->kdc_sign_key_array_var,kdc_sign_key_array_arraysize);
    }
}

In_addr& crl_message::getSrc()
{
    return src_var;
}

void crl_message::setSrc(const In_addr& src)
{
    this->src_var = src;
}

In_addr& crl_message::getGwAddr()
{
    return gwAddr_var;
}

void crl_message::setGwAddr(const In_addr& gwAddr)
{
    this->gwAddr_var = gwAddr;
}

In_addr& crl_message::getNextHopAddr()
{
    return nextHopAddr_var;
}

void crl_message::setNextHopAddr(const In_addr& nextHopAddr)
{
    this->nextHopAddr_var = nextHopAddr;
}

int crl_message::getCert_len() const
{
    return cert_len_var;
}

void crl_message::setCert_len(int cert_len)
{
    this->cert_len_var = cert_len;
}

void crl_message::setCert_arrayArraySize(unsigned int size)
{
    char *cert_array_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = cert_array_arraysize < size ? cert_array_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        cert_array_var2[i] = this->cert_array_var[i];
    for (unsigned int i=sz; i<size; i++)
        cert_array_var2[i] = 0;
    cert_array_arraysize = size;
    delete [] this->cert_array_var;
    this->cert_array_var = cert_array_var2;
}

unsigned int crl_message::getCert_arrayArraySize() const
{
    return cert_array_arraysize;
}

char crl_message::getCert_array(unsigned int k) const
{
    if (k>=cert_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", cert_array_arraysize, k);
    return cert_array_var[k];
}

void crl_message::setCert_array(unsigned int k, char cert_array)
{
    if (k>=cert_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", cert_array_arraysize, k);
    this->cert_array_var[k] = cert_array;
}

int crl_message::getKdc_gtk_len() const
{
    return kdc_gtk_len_var;
}

void crl_message::setKdc_gtk_len(int kdc_gtk_len)
{
    this->kdc_gtk_len_var = kdc_gtk_len;
}

void crl_message::setKdc_gtk_arrayArraySize(unsigned int size)
{
    char *kdc_gtk_array_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = kdc_gtk_array_arraysize < size ? kdc_gtk_array_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        kdc_gtk_array_var2[i] = this->kdc_gtk_array_var[i];
    for (unsigned int i=sz; i<size; i++)
        kdc_gtk_array_var2[i] = 0;
    kdc_gtk_array_arraysize = size;
    delete [] this->kdc_gtk_array_var;
    this->kdc_gtk_array_var = kdc_gtk_array_var2;
}

unsigned int crl_message::getKdc_gtk_arrayArraySize() const
{
    return kdc_gtk_array_arraysize;
}

char crl_message::getKdc_gtk_array(unsigned int k) const
{
    if (k>=kdc_gtk_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kdc_gtk_array_arraysize, k);
    return kdc_gtk_array_var[k];
}

void crl_message::setKdc_gtk_array(unsigned int k, char kdc_gtk_array)
{
    if (k>=kdc_gtk_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kdc_gtk_array_arraysize, k);
    this->kdc_gtk_array_var[k] = kdc_gtk_array;
}

int crl_message::getKdc_nonce() const
{
    return kdc_nonce_var;
}

void crl_message::setKdc_nonce(int kdc_nonce)
{
    this->kdc_nonce_var = kdc_nonce;
}

int crl_message::getKdc_crl_len() const
{
    return kdc_crl_len_var;
}

void crl_message::setKdc_crl_len(int kdc_crl_len)
{
    this->kdc_crl_len_var = kdc_crl_len;
}

void crl_message::setKdc_crl_arrayArraySize(unsigned int size)
{
    char *kdc_crl_array_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = kdc_crl_array_arraysize < size ? kdc_crl_array_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        kdc_crl_array_var2[i] = this->kdc_crl_array_var[i];
    for (unsigned int i=sz; i<size; i++)
        kdc_crl_array_var2[i] = 0;
    kdc_crl_array_arraysize = size;
    delete [] this->kdc_crl_array_var;
    this->kdc_crl_array_var = kdc_crl_array_var2;
}

unsigned int crl_message::getKdc_crl_arrayArraySize() const
{
    return kdc_crl_array_arraysize;
}

char crl_message::getKdc_crl_array(unsigned int k) const
{
    if (k>=kdc_crl_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kdc_crl_array_arraysize, k);
    return kdc_crl_array_var[k];
}

void crl_message::setKdc_crl_array(unsigned int k, char kdc_crl_array)
{
    if (k>=kdc_crl_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kdc_crl_array_arraysize, k);
    this->kdc_crl_array_var[k] = kdc_crl_array;
}

int crl_message::getKdc_cert_len() const
{
    return kdc_cert_len_var;
}

void crl_message::setKdc_cert_len(int kdc_cert_len)
{
    this->kdc_cert_len_var = kdc_cert_len;
}

void crl_message::setKdc_cert_arrayArraySize(unsigned int size)
{
    char *kdc_cert_array_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = kdc_cert_array_arraysize < size ? kdc_cert_array_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        kdc_cert_array_var2[i] = this->kdc_cert_array_var[i];
    for (unsigned int i=sz; i<size; i++)
        kdc_cert_array_var2[i] = 0;
    kdc_cert_array_arraysize = size;
    delete [] this->kdc_cert_array_var;
    this->kdc_cert_array_var = kdc_cert_array_var2;
}

unsigned int crl_message::getKdc_cert_arrayArraySize() const
{
    return kdc_cert_array_arraysize;
}

char crl_message::getKdc_cert_array(unsigned int k) const
{
    if (k>=kdc_cert_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kdc_cert_array_arraysize, k);
    return kdc_cert_array_var[k];
}

void crl_message::setKdc_cert_array(unsigned int k, char kdc_cert_array)
{
    if (k>=kdc_cert_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kdc_cert_array_arraysize, k);
    this->kdc_cert_array_var[k] = kdc_cert_array;
}

int crl_message::getKdc_sign_len() const
{
    return kdc_sign_len_var;
}

void crl_message::setKdc_sign_len(int kdc_sign_len)
{
    this->kdc_sign_len_var = kdc_sign_len;
}

void crl_message::setKdc_sign_arrayArraySize(unsigned int size)
{
    char *kdc_sign_array_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = kdc_sign_array_arraysize < size ? kdc_sign_array_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        kdc_sign_array_var2[i] = this->kdc_sign_array_var[i];
    for (unsigned int i=sz; i<size; i++)
        kdc_sign_array_var2[i] = 0;
    kdc_sign_array_arraysize = size;
    delete [] this->kdc_sign_array_var;
    this->kdc_sign_array_var = kdc_sign_array_var2;
}

unsigned int crl_message::getKdc_sign_arrayArraySize() const
{
    return kdc_sign_array_arraysize;
}

char crl_message::getKdc_sign_array(unsigned int k) const
{
    if (k>=kdc_sign_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kdc_sign_array_arraysize, k);
    return kdc_sign_array_var[k];
}

void crl_message::setKdc_sign_array(unsigned int k, char kdc_sign_array)
{
    if (k>=kdc_sign_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kdc_sign_array_arraysize, k);
    this->kdc_sign_array_var[k] = kdc_sign_array;
}

int crl_message::getKdc_key_nr() const
{
    return kdc_key_nr_var;
}

void crl_message::setKdc_key_nr(int kdc_key_nr)
{
    this->kdc_key_nr_var = kdc_key_nr;
}

int crl_message::getKdc_sign_key_len() const
{
    return kdc_sign_key_len_var;
}

void crl_message::setKdc_sign_key_len(int kdc_sign_key_len)
{
    this->kdc_sign_key_len_var = kdc_sign_key_len;
}

void crl_message::setKdc_sign_key_arrayArraySize(unsigned int size)
{
    char *kdc_sign_key_array_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = kdc_sign_key_array_arraysize < size ? kdc_sign_key_array_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        kdc_sign_key_array_var2[i] = this->kdc_sign_key_array_var[i];
    for (unsigned int i=sz; i<size; i++)
        kdc_sign_key_array_var2[i] = 0;
    kdc_sign_key_array_arraysize = size;
    delete [] this->kdc_sign_key_array_var;
    this->kdc_sign_key_array_var = kdc_sign_key_array_var2;
}

unsigned int crl_message::getKdc_sign_key_arrayArraySize() const
{
    return kdc_sign_key_array_arraysize;
}

char crl_message::getKdc_sign_key_array(unsigned int k) const
{
    if (k>=kdc_sign_key_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kdc_sign_key_array_arraysize, k);
    return kdc_sign_key_array_var[k];
}

void crl_message::setKdc_sign_key_array(unsigned int k, char kdc_sign_key_array)
{
    if (k>=kdc_sign_key_array_arraysize) throw cRuntimeError("Array of size %d indexed by %d", kdc_sign_key_array_arraysize, k);
    this->kdc_sign_key_array_var[k] = kdc_sign_key_array;
}

class crl_messageDescriptor : public cClassDescriptor
{
  public:
    crl_messageDescriptor();
    virtual ~crl_messageDescriptor();

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

Register_ClassDescriptor(crl_messageDescriptor);

crl_messageDescriptor::crl_messageDescriptor() : cClassDescriptor("crl_message", "cPacket")
{
}

crl_messageDescriptor::~crl_messageDescriptor()
{
}

bool crl_messageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<crl_message *>(obj)!=NULL;
}

const char *crl_messageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int crl_messageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 17+basedesc->getFieldCount(object) : 17;
}

unsigned int crl_messageDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<17) ? fieldTypeFlags[field] : 0;
}

const char *crl_messageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "src",
        "gwAddr",
        "nextHopAddr",
        "cert_len",
        "cert_array",
        "kdc_gtk_len",
        "kdc_gtk_array",
        "kdc_nonce",
        "kdc_crl_len",
        "kdc_crl_array",
        "kdc_cert_len",
        "kdc_cert_array",
        "kdc_sign_len",
        "kdc_sign_array",
        "kdc_key_nr",
        "kdc_sign_key_len",
        "kdc_sign_key_array",
    };
    return (field>=0 && field<17) ? fieldNames[field] : NULL;
}

int crl_messageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "src")==0) return base+0;
    if (fieldName[0]=='g' && strcmp(fieldName, "gwAddr")==0) return base+1;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextHopAddr")==0) return base+2;
    if (fieldName[0]=='c' && strcmp(fieldName, "cert_len")==0) return base+3;
    if (fieldName[0]=='c' && strcmp(fieldName, "cert_array")==0) return base+4;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_gtk_len")==0) return base+5;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_gtk_array")==0) return base+6;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_nonce")==0) return base+7;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_crl_len")==0) return base+8;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_crl_array")==0) return base+9;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_cert_len")==0) return base+10;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_cert_array")==0) return base+11;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_sign_len")==0) return base+12;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_sign_array")==0) return base+13;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_key_nr")==0) return base+14;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_sign_key_len")==0) return base+15;
    if (fieldName[0]=='k' && strcmp(fieldName, "kdc_sign_key_array")==0) return base+16;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *crl_messageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "In_addr",
        "In_addr",
        "In_addr",
        "int",
        "char",
        "int",
        "char",
        "int",
        "int",
        "char",
        "int",
        "char",
        "int",
        "char",
        "int",
        "int",
        "char",
    };
    return (field>=0 && field<17) ? fieldTypeStrings[field] : NULL;
}

const char *crl_messageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int crl_messageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    crl_message *pp = (crl_message *)object; (void)pp;
    switch (field) {
        case 4: return pp->getCert_arrayArraySize();
        case 6: return pp->getKdc_gtk_arrayArraySize();
        case 9: return pp->getKdc_crl_arrayArraySize();
        case 11: return pp->getKdc_cert_arrayArraySize();
        case 13: return pp->getKdc_sign_arrayArraySize();
        case 16: return pp->getKdc_sign_key_arrayArraySize();
        default: return 0;
    }
}

std::string crl_messageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    crl_message *pp = (crl_message *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSrc(); return out.str();}
        case 1: {std::stringstream out; out << pp->getGwAddr(); return out.str();}
        case 2: {std::stringstream out; out << pp->getNextHopAddr(); return out.str();}
        case 3: return long2string(pp->getCert_len());
        case 4: return long2string(pp->getCert_array(i));
        case 5: return long2string(pp->getKdc_gtk_len());
        case 6: return long2string(pp->getKdc_gtk_array(i));
        case 7: return long2string(pp->getKdc_nonce());
        case 8: return long2string(pp->getKdc_crl_len());
        case 9: return long2string(pp->getKdc_crl_array(i));
        case 10: return long2string(pp->getKdc_cert_len());
        case 11: return long2string(pp->getKdc_cert_array(i));
        case 12: return long2string(pp->getKdc_sign_len());
        case 13: return long2string(pp->getKdc_sign_array(i));
        case 14: return long2string(pp->getKdc_key_nr());
        case 15: return long2string(pp->getKdc_sign_key_len());
        case 16: return long2string(pp->getKdc_sign_key_array(i));
        default: return "";
    }
}

bool crl_messageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    crl_message *pp = (crl_message *)object; (void)pp;
    switch (field) {
        case 3: pp->setCert_len(string2long(value)); return true;
        case 4: pp->setCert_array(i,string2long(value)); return true;
        case 5: pp->setKdc_gtk_len(string2long(value)); return true;
        case 6: pp->setKdc_gtk_array(i,string2long(value)); return true;
        case 7: pp->setKdc_nonce(string2long(value)); return true;
        case 8: pp->setKdc_crl_len(string2long(value)); return true;
        case 9: pp->setKdc_crl_array(i,string2long(value)); return true;
        case 10: pp->setKdc_cert_len(string2long(value)); return true;
        case 11: pp->setKdc_cert_array(i,string2long(value)); return true;
        case 12: pp->setKdc_sign_len(string2long(value)); return true;
        case 13: pp->setKdc_sign_array(i,string2long(value)); return true;
        case 14: pp->setKdc_key_nr(string2long(value)); return true;
        case 15: pp->setKdc_sign_key_len(string2long(value)); return true;
        case 16: pp->setKdc_sign_key_array(i,string2long(value)); return true;
        default: return false;
    }
}

const char *crl_messageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(In_addr));
        case 1: return opp_typename(typeid(In_addr));
        case 2: return opp_typename(typeid(In_addr));
        default: return NULL;
    };
}

void *crl_messageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    crl_message *pp = (crl_message *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSrc()); break;
        case 1: return (void *)(&pp->getGwAddr()); break;
        case 2: return (void *)(&pp->getNextHopAddr()); break;
        default: return NULL;
    }
}


