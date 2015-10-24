//
// Generated file, do not edit! Created by nedtool 4.6 from networklayer/manetrouting/olsr/OLSRpkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "OLSRpkt_m.h"

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

Register_Class(OLSR_pkt);

OLSR_pkt::OLSR_pkt(const char *name, int kind) : ::cPacket(name,kind)
{
    this->reduceFuncionality_var = false;
    this->pkt_seq_num_var = 0;
    this->sn_var = 0;
    this->send_time_var = 0;
    msg_arraysize = 0;
    this->msg_var = 0;
}

OLSR_pkt::OLSR_pkt(const OLSR_pkt& other) : ::cPacket(other)
{
    msg_arraysize = 0;
    this->msg_var = 0;
    copy(other);
}

OLSR_pkt::~OLSR_pkt()
{
    delete [] msg_var;
}

OLSR_pkt& OLSR_pkt::operator=(const OLSR_pkt& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void OLSR_pkt::copy(const OLSR_pkt& other)
{
    this->reduceFuncionality_var = other.reduceFuncionality_var;
    this->pkt_seq_num_var = other.pkt_seq_num_var;
    this->sn_var = other.sn_var;
    this->send_time_var = other.send_time_var;
    delete [] this->msg_var;
    this->msg_var = (other.msg_arraysize==0) ? NULL : new OLSR_msg[other.msg_arraysize];
    msg_arraysize = other.msg_arraysize;
    for (unsigned int i=0; i<msg_arraysize; i++)
        this->msg_var[i] = other.msg_var[i];
}

void OLSR_pkt::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->reduceFuncionality_var);
    doPacking(b,this->pkt_seq_num_var);
    doPacking(b,this->sn_var);
    doPacking(b,this->send_time_var);
    b->pack(msg_arraysize);
    doPacking(b,this->msg_var,msg_arraysize);
}

void OLSR_pkt::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->reduceFuncionality_var);
    doUnpacking(b,this->pkt_seq_num_var);
    doUnpacking(b,this->sn_var);
    doUnpacking(b,this->send_time_var);
    delete [] this->msg_var;
    b->unpack(msg_arraysize);
    if (msg_arraysize==0) {
        this->msg_var = 0;
    } else {
        this->msg_var = new OLSR_msg[msg_arraysize];
        doUnpacking(b,this->msg_var,msg_arraysize);
    }
}

bool OLSR_pkt::reduceFuncionality() const
{
    return reduceFuncionality_var;
}

void OLSR_pkt::setReduceFuncionality(bool reduceFuncionality)
{
    this->reduceFuncionality_var = reduceFuncionality;
}

short OLSR_pkt::pkt_seq_num() const
{
    return pkt_seq_num_var;
}

void OLSR_pkt::setPkt_seq_num(short pkt_seq_num)
{
    this->pkt_seq_num_var = pkt_seq_num;
}

long OLSR_pkt::sn() const
{
    return sn_var;
}

void OLSR_pkt::setSn(long sn)
{
    this->sn_var = sn;
}

double OLSR_pkt::send_time() const
{
    return send_time_var;
}

void OLSR_pkt::setSend_time(double send_time)
{
    this->send_time_var = send_time;
}

void OLSR_pkt::setMsgArraySize(unsigned int size)
{
    OLSR_msg *msg_var2 = (size==0) ? NULL : new OLSR_msg[size];
    unsigned int sz = msg_arraysize < size ? msg_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        msg_var2[i] = this->msg_var[i];
    msg_arraysize = size;
    delete [] this->msg_var;
    this->msg_var = msg_var2;
}

unsigned int OLSR_pkt::msgArraySize() const
{
    return msg_arraysize;
}

OLSR_msg& OLSR_pkt::msg(unsigned int k)
{
    if (k>=msg_arraysize) throw cRuntimeError("Array of size %d indexed by %d", msg_arraysize, k);
    return msg_var[k];
}

void OLSR_pkt::setMsg(unsigned int k, const OLSR_msg& msg)
{
    if (k>=msg_arraysize) throw cRuntimeError("Array of size %d indexed by %d", msg_arraysize, k);
    this->msg_var[k] = msg;
}

class OLSR_pktDescriptor : public cClassDescriptor
{
  public:
    OLSR_pktDescriptor();
    virtual ~OLSR_pktDescriptor();

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

Register_ClassDescriptor(OLSR_pktDescriptor);

OLSR_pktDescriptor::OLSR_pktDescriptor() : cClassDescriptor("OLSR_pkt", "cPacket")
{
}

OLSR_pktDescriptor::~OLSR_pktDescriptor()
{
}

bool OLSR_pktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<OLSR_pkt *>(obj)!=NULL;
}

const char *OLSR_pktDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int OLSR_pktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int OLSR_pktDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *OLSR_pktDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "reduceFuncionality",
        "pkt_seq_num",
        "sn",
        "send_time",
        "msg",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int OLSR_pktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "reduceFuncionality")==0) return base+0;
    if (fieldName[0]=='p' && strcmp(fieldName, "pkt_seq_num")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sn")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "send_time")==0) return base+3;
    if (fieldName[0]=='m' && strcmp(fieldName, "msg")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *OLSR_pktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "bool",
        "short",
        "long",
        "double",
        "OLSR_msg",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *OLSR_pktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int OLSR_pktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    OLSR_pkt *pp = (OLSR_pkt *)object; (void)pp;
    switch (field) {
        case 4: return pp->msgArraySize();
        default: return 0;
    }
}

std::string OLSR_pktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    OLSR_pkt *pp = (OLSR_pkt *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->reduceFuncionality());
        case 1: return long2string(pp->pkt_seq_num());
        case 2: return long2string(pp->sn());
        case 3: return double2string(pp->send_time());
        case 4: {std::stringstream out; out << pp->msg(i); return out.str();}
        default: return "";
    }
}

bool OLSR_pktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    OLSR_pkt *pp = (OLSR_pkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setReduceFuncionality(string2bool(value)); return true;
        case 1: pp->setPkt_seq_num(string2long(value)); return true;
        case 2: pp->setSn(string2long(value)); return true;
        case 3: pp->setSend_time(string2double(value)); return true;
        default: return false;
    }
}

const char *OLSR_pktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 4: return opp_typename(typeid(OLSR_msg));
        default: return NULL;
    };
}

void *OLSR_pktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    OLSR_pkt *pp = (OLSR_pkt *)object; (void)pp;
    switch (field) {
        case 4: return (void *)(&pp->msg(i)); break;
        default: return NULL;
    }
}


