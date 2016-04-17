//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transport/tcp_common/TCPSegment.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "TCPSegment_m.h"

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

TCPPayloadMessage::TCPPayloadMessage()
{
    endSequenceNo = 0;
}

void doPacking(cCommBuffer *b, TCPPayloadMessage& a)
{
    doPacking(b,a.endSequenceNo);
    doPacking(b,a.msg);
}

void doUnpacking(cCommBuffer *b, TCPPayloadMessage& a)
{
    doUnpacking(b,a.endSequenceNo);
    doUnpacking(b,a.msg);
}

class TCPPayloadMessageDescriptor : public cClassDescriptor
{
  public:
    TCPPayloadMessageDescriptor();
    virtual ~TCPPayloadMessageDescriptor();

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

Register_ClassDescriptor(TCPPayloadMessageDescriptor);

TCPPayloadMessageDescriptor::TCPPayloadMessageDescriptor() : cClassDescriptor("TCPPayloadMessage", "")
{
}

TCPPayloadMessageDescriptor::~TCPPayloadMessageDescriptor()
{
}

bool TCPPayloadMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPPayloadMessage *>(obj)!=NULL;
}

const char *TCPPayloadMessageDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPPayloadMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TCPPayloadMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TCPPayloadMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "endSequenceNo",
        "msg",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int TCPPayloadMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='e' && strcmp(fieldName, "endSequenceNo")==0) return base+0;
    if (fieldName[0]=='m' && strcmp(fieldName, "msg")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPPayloadMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "cPacketPtr",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *TCPPayloadMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPPayloadMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPPayloadMessage *pp = (TCPPayloadMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPPayloadMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPPayloadMessage *pp = (TCPPayloadMessage *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->endSequenceNo);
        case 1: {std::stringstream out; out << pp->msg; return out.str();}
        default: return "";
    }
}

bool TCPPayloadMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPPayloadMessage *pp = (TCPPayloadMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->endSequenceNo = string2ulong(value); return true;
        default: return false;
    }
}

const char *TCPPayloadMessageDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(cPacketPtr));
        default: return NULL;
    };
}

void *TCPPayloadMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPPayloadMessage *pp = (TCPPayloadMessage *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->msg); break;
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("TCPOptionNumbers");
    if (!e) enums.getInstance()->add(e = new cEnum("TCPOptionNumbers"));
    e->insert(TCPOPTION_END_OF_OPTION_LIST, "TCPOPTION_END_OF_OPTION_LIST");
    e->insert(TCPOPTION_NO_OPERATION, "TCPOPTION_NO_OPERATION");
    e->insert(TCPOPTION_MAXIMUM_SEGMENT_SIZE, "TCPOPTION_MAXIMUM_SEGMENT_SIZE");
    e->insert(TCPOPTION_WINDOW_SCALE, "TCPOPTION_WINDOW_SCALE");
    e->insert(TCPOPTION_SACK_PERMITTED, "TCPOPTION_SACK_PERMITTED");
    e->insert(TCPOPTION_SACK, "TCPOPTION_SACK");
    e->insert(TCPOPTION_TIMESTAMP, "TCPOPTION_TIMESTAMP");
);

Sack_Base::Sack_Base() : ::cObject()
{
    this->start_var = 0;
    this->end_var = 0;
}

Sack_Base::Sack_Base(const Sack_Base& other) : ::cObject(other)
{
    copy(other);
}

Sack_Base::~Sack_Base()
{
}

Sack_Base& Sack_Base::operator=(const Sack_Base& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void Sack_Base::copy(const Sack_Base& other)
{
    this->start_var = other.start_var;
    this->end_var = other.end_var;
}

void Sack_Base::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->start_var);
    doPacking(b,this->end_var);
}

void Sack_Base::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->start_var);
    doUnpacking(b,this->end_var);
}

unsigned int Sack_Base::getStart() const
{
    return start_var;
}

void Sack_Base::setStart(unsigned int start)
{
    this->start_var = start;
}

unsigned int Sack_Base::getEnd() const
{
    return end_var;
}

void Sack_Base::setEnd(unsigned int end)
{
    this->end_var = end;
}

class SackDescriptor : public cClassDescriptor
{
  public:
    SackDescriptor();
    virtual ~SackDescriptor();

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

Register_ClassDescriptor(SackDescriptor);

SackDescriptor::SackDescriptor() : cClassDescriptor("Sack", "cObject")
{
}

SackDescriptor::~SackDescriptor()
{
}

bool SackDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<Sack_Base *>(obj)!=NULL;
}

const char *SackDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SackDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SackDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SackDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "start",
        "end",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int SackDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "start")==0) return base+0;
    if (fieldName[0]=='e' && strcmp(fieldName, "end")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SackDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned int",
        "unsigned int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *SackDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SackDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    Sack_Base *pp = (Sack_Base *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SackDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    Sack_Base *pp = (Sack_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getStart());
        case 1: return ulong2string(pp->getEnd());
        default: return "";
    }
}

bool SackDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    Sack_Base *pp = (Sack_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setStart(string2ulong(value)); return true;
        case 1: pp->setEnd(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SackDescriptor::getFieldStructName(void *object, int field) const
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

void *SackDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    Sack_Base *pp = (Sack_Base *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPOption);

TCPOption::TCPOption() : ::cObject()
{
    this->kind_var = TCPOPTION_END_OF_OPTION_LIST;
    this->length_var = 1;
    values_arraysize = 0;
    this->values_var = 0;
}

TCPOption::TCPOption(const TCPOption& other) : ::cObject(other)
{
    values_arraysize = 0;
    this->values_var = 0;
    copy(other);
}

TCPOption::~TCPOption()
{
    delete [] values_var;
}

TCPOption& TCPOption::operator=(const TCPOption& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void TCPOption::copy(const TCPOption& other)
{
    this->kind_var = other.kind_var;
    this->length_var = other.length_var;
    delete [] this->values_var;
    this->values_var = (other.values_arraysize==0) ? NULL : new unsigned int[other.values_arraysize];
    values_arraysize = other.values_arraysize;
    for (unsigned int i=0; i<values_arraysize; i++)
        this->values_var[i] = other.values_var[i];
}

void TCPOption::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->kind_var);
    doPacking(b,this->length_var);
    b->pack(values_arraysize);
    doPacking(b,this->values_var,values_arraysize);
}

void TCPOption::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->kind_var);
    doUnpacking(b,this->length_var);
    delete [] this->values_var;
    b->unpack(values_arraysize);
    if (values_arraysize==0) {
        this->values_var = 0;
    } else {
        this->values_var = new unsigned int[values_arraysize];
        doUnpacking(b,this->values_var,values_arraysize);
    }
}

unsigned short TCPOption::getKind() const
{
    return kind_var;
}

void TCPOption::setKind(unsigned short kind)
{
    this->kind_var = kind;
}

unsigned short TCPOption::getLength() const
{
    return length_var;
}

void TCPOption::setLength(unsigned short length)
{
    this->length_var = length;
}

void TCPOption::setValuesArraySize(unsigned int size)
{
    unsigned int *values_var2 = (size==0) ? NULL : new unsigned int[size];
    unsigned int sz = values_arraysize < size ? values_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        values_var2[i] = this->values_var[i];
    for (unsigned int i=sz; i<size; i++)
        values_var2[i] = 0;
    values_arraysize = size;
    delete [] this->values_var;
    this->values_var = values_var2;
}

unsigned int TCPOption::getValuesArraySize() const
{
    return values_arraysize;
}

unsigned int TCPOption::getValues(unsigned int k) const
{
    if (k>=values_arraysize) throw cRuntimeError("Array of size %d indexed by %d", values_arraysize, k);
    return values_var[k];
}

void TCPOption::setValues(unsigned int k, unsigned int values)
{
    if (k>=values_arraysize) throw cRuntimeError("Array of size %d indexed by %d", values_arraysize, k);
    this->values_var[k] = values;
}

class TCPOptionDescriptor : public cClassDescriptor
{
  public:
    TCPOptionDescriptor();
    virtual ~TCPOptionDescriptor();

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

Register_ClassDescriptor(TCPOptionDescriptor);

TCPOptionDescriptor::TCPOptionDescriptor() : cClassDescriptor("TCPOption", "cObject")
{
}

TCPOptionDescriptor::~TCPOptionDescriptor()
{
}

bool TCPOptionDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOption *>(obj)!=NULL;
}

const char *TCPOptionDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOptionDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int TCPOptionDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TCPOptionDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "kind",
        "length",
        "values",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int TCPOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='k' && strcmp(fieldName, "kind")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+1;
    if (fieldName[0]=='v' && strcmp(fieldName, "values")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPOptionDescriptor::getFieldTypeString(void *object, int field) const
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
        "unsigned int",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *TCPOptionDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "TCPOptionNumbers";
            return NULL;
        default: return NULL;
    }
}

int TCPOptionDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOption *pp = (TCPOption *)object; (void)pp;
    switch (field) {
        case 2: return pp->getValuesArraySize();
        default: return 0;
    }
}

std::string TCPOptionDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOption *pp = (TCPOption *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getKind());
        case 1: return ulong2string(pp->getLength());
        case 2: return ulong2string(pp->getValues(i));
        default: return "";
    }
}

bool TCPOptionDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOption *pp = (TCPOption *)object; (void)pp;
    switch (field) {
        case 0: pp->setKind(string2ulong(value)); return true;
        case 1: pp->setLength(string2ulong(value)); return true;
        case 2: pp->setValues(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *TCPOptionDescriptor::getFieldStructName(void *object, int field) const
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

void *TCPOptionDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOption *pp = (TCPOption *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

TCPSegment_Base::TCPSegment_Base(const char *name, int kind) : ::cPacket(name,kind)
{
    this->srcPort_var = 0;
    this->destPort_var = 0;
    this->sequenceNo_var = 0;
    this->ackNo_var = 0;
    this->headerLength_var = TCP_HEADER_OCTETS;
    this->urgBit_var = 0;
    this->ackBit_var = 0;
    this->pshBit_var = 0;
    this->rstBit_var = 0;
    this->synBit_var = 0;
    this->finBit_var = 0;
    this->window_var = 0;
    this->urgentPointer_var = 0;
    options_arraysize = 0;
    this->options_var = 0;
    this->payloadLength_var = 0;
}

TCPSegment_Base::TCPSegment_Base(const TCPSegment_Base& other) : ::cPacket(other)
{
    options_arraysize = 0;
    this->options_var = 0;
    copy(other);
}

TCPSegment_Base::~TCPSegment_Base()
{
    delete [] options_var;
}

TCPSegment_Base& TCPSegment_Base::operator=(const TCPSegment_Base& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void TCPSegment_Base::copy(const TCPSegment_Base& other)
{
    this->srcPort_var = other.srcPort_var;
    this->destPort_var = other.destPort_var;
    this->sequenceNo_var = other.sequenceNo_var;
    this->ackNo_var = other.ackNo_var;
    this->headerLength_var = other.headerLength_var;
    this->urgBit_var = other.urgBit_var;
    this->ackBit_var = other.ackBit_var;
    this->pshBit_var = other.pshBit_var;
    this->rstBit_var = other.rstBit_var;
    this->synBit_var = other.synBit_var;
    this->finBit_var = other.finBit_var;
    this->window_var = other.window_var;
    this->urgentPointer_var = other.urgentPointer_var;
    delete [] this->options_var;
    this->options_var = (other.options_arraysize==0) ? NULL : new TCPOption[other.options_arraysize];
    options_arraysize = other.options_arraysize;
    for (unsigned int i=0; i<options_arraysize; i++)
        this->options_var[i] = other.options_var[i];
    this->payloadLength_var = other.payloadLength_var;
    this->byteArray_var = other.byteArray_var;
}

void TCPSegment_Base::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->srcPort_var);
    doPacking(b,this->destPort_var);
    doPacking(b,this->sequenceNo_var);
    doPacking(b,this->ackNo_var);
    doPacking(b,this->headerLength_var);
    doPacking(b,this->urgBit_var);
    doPacking(b,this->ackBit_var);
    doPacking(b,this->pshBit_var);
    doPacking(b,this->rstBit_var);
    doPacking(b,this->synBit_var);
    doPacking(b,this->finBit_var);
    doPacking(b,this->window_var);
    doPacking(b,this->urgentPointer_var);
    b->pack(options_arraysize);
    doPacking(b,this->options_var,options_arraysize);
    doPacking(b,this->payloadLength_var);
    // field payload is abstract -- please do packing in customized class
    doPacking(b,this->byteArray_var);
}

void TCPSegment_Base::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->srcPort_var);
    doUnpacking(b,this->destPort_var);
    doUnpacking(b,this->sequenceNo_var);
    doUnpacking(b,this->ackNo_var);
    doUnpacking(b,this->headerLength_var);
    doUnpacking(b,this->urgBit_var);
    doUnpacking(b,this->ackBit_var);
    doUnpacking(b,this->pshBit_var);
    doUnpacking(b,this->rstBit_var);
    doUnpacking(b,this->synBit_var);
    doUnpacking(b,this->finBit_var);
    doUnpacking(b,this->window_var);
    doUnpacking(b,this->urgentPointer_var);
    delete [] this->options_var;
    b->unpack(options_arraysize);
    if (options_arraysize==0) {
        this->options_var = 0;
    } else {
        this->options_var = new TCPOption[options_arraysize];
        doUnpacking(b,this->options_var,options_arraysize);
    }
    doUnpacking(b,this->payloadLength_var);
    // field payload is abstract -- please do unpacking in customized class
    doUnpacking(b,this->byteArray_var);
}

unsigned short TCPSegment_Base::getSrcPort() const
{
    return srcPort_var;
}

void TCPSegment_Base::setSrcPort(unsigned short srcPort)
{
    this->srcPort_var = srcPort;
}

unsigned short TCPSegment_Base::getDestPort() const
{
    return destPort_var;
}

void TCPSegment_Base::setDestPort(unsigned short destPort)
{
    this->destPort_var = destPort;
}

unsigned int TCPSegment_Base::getSequenceNo() const
{
    return sequenceNo_var;
}

void TCPSegment_Base::setSequenceNo(unsigned int sequenceNo)
{
    this->sequenceNo_var = sequenceNo;
}

unsigned int TCPSegment_Base::getAckNo() const
{
    return ackNo_var;
}

void TCPSegment_Base::setAckNo(unsigned int ackNo)
{
    this->ackNo_var = ackNo;
}

unsigned short TCPSegment_Base::getHeaderLength() const
{
    return headerLength_var;
}

void TCPSegment_Base::setHeaderLength(unsigned short headerLength)
{
    this->headerLength_var = headerLength;
}

bool TCPSegment_Base::getUrgBit() const
{
    return urgBit_var;
}

void TCPSegment_Base::setUrgBit(bool urgBit)
{
    this->urgBit_var = urgBit;
}

bool TCPSegment_Base::getAckBit() const
{
    return ackBit_var;
}

void TCPSegment_Base::setAckBit(bool ackBit)
{
    this->ackBit_var = ackBit;
}

bool TCPSegment_Base::getPshBit() const
{
    return pshBit_var;
}

void TCPSegment_Base::setPshBit(bool pshBit)
{
    this->pshBit_var = pshBit;
}

bool TCPSegment_Base::getRstBit() const
{
    return rstBit_var;
}

void TCPSegment_Base::setRstBit(bool rstBit)
{
    this->rstBit_var = rstBit;
}

bool TCPSegment_Base::getSynBit() const
{
    return synBit_var;
}

void TCPSegment_Base::setSynBit(bool synBit)
{
    this->synBit_var = synBit;
}

bool TCPSegment_Base::getFinBit() const
{
    return finBit_var;
}

void TCPSegment_Base::setFinBit(bool finBit)
{
    this->finBit_var = finBit;
}

unsigned short TCPSegment_Base::getWindow() const
{
    return window_var;
}

void TCPSegment_Base::setWindow(unsigned short window)
{
    this->window_var = window;
}

unsigned short TCPSegment_Base::getUrgentPointer() const
{
    return urgentPointer_var;
}

void TCPSegment_Base::setUrgentPointer(unsigned short urgentPointer)
{
    this->urgentPointer_var = urgentPointer;
}

void TCPSegment_Base::setOptionsArraySize(unsigned int size)
{
    TCPOption *options_var2 = (size==0) ? NULL : new TCPOption[size];
    unsigned int sz = options_arraysize < size ? options_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        options_var2[i] = this->options_var[i];
    options_arraysize = size;
    delete [] this->options_var;
    this->options_var = options_var2;
}

unsigned int TCPSegment_Base::getOptionsArraySize() const
{
    return options_arraysize;
}

TCPOption& TCPSegment_Base::getOptions(unsigned int k)
{
    if (k>=options_arraysize) throw cRuntimeError("Array of size %d indexed by %d", options_arraysize, k);
    return options_var[k];
}

void TCPSegment_Base::setOptions(unsigned int k, const TCPOption& options)
{
    if (k>=options_arraysize) throw cRuntimeError("Array of size %d indexed by %d", options_arraysize, k);
    this->options_var[k] = options;
}

unsigned long TCPSegment_Base::getPayloadLength() const
{
    return payloadLength_var;
}

void TCPSegment_Base::setPayloadLength(unsigned long payloadLength)
{
    this->payloadLength_var = payloadLength;
}

ByteArray& TCPSegment_Base::getByteArray()
{
    return byteArray_var;
}

void TCPSegment_Base::setByteArray(const ByteArray& byteArray)
{
    this->byteArray_var = byteArray;
}

class TCPSegmentDescriptor : public cClassDescriptor
{
  public:
    TCPSegmentDescriptor();
    virtual ~TCPSegmentDescriptor();

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

Register_ClassDescriptor(TCPSegmentDescriptor);

TCPSegmentDescriptor::TCPSegmentDescriptor() : cClassDescriptor("TCPSegment", "cPacket")
{
}

TCPSegmentDescriptor::~TCPSegmentDescriptor()
{
}

bool TCPSegmentDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPSegment_Base *>(obj)!=NULL;
}

const char *TCPSegmentDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"customize")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPSegmentDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 17+basedesc->getFieldCount(object) : 17;
}

unsigned int TCPSegmentDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISCOBJECT,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISCOMPOUND,
    };
    return (field>=0 && field<17) ? fieldTypeFlags[field] : 0;
}

const char *TCPSegmentDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "srcPort",
        "destPort",
        "sequenceNo",
        "ackNo",
        "headerLength",
        "urgBit",
        "ackBit",
        "pshBit",
        "rstBit",
        "synBit",
        "finBit",
        "window",
        "urgentPointer",
        "options",
        "payloadLength",
        "payload",
        "byteArray",
    };
    return (field>=0 && field<17) ? fieldNames[field] : NULL;
}

int TCPSegmentDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "srcPort")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destPort")==0) return base+1;
    if (fieldName[0]=='s' && strcmp(fieldName, "sequenceNo")==0) return base+2;
    if (fieldName[0]=='a' && strcmp(fieldName, "ackNo")==0) return base+3;
    if (fieldName[0]=='h' && strcmp(fieldName, "headerLength")==0) return base+4;
    if (fieldName[0]=='u' && strcmp(fieldName, "urgBit")==0) return base+5;
    if (fieldName[0]=='a' && strcmp(fieldName, "ackBit")==0) return base+6;
    if (fieldName[0]=='p' && strcmp(fieldName, "pshBit")==0) return base+7;
    if (fieldName[0]=='r' && strcmp(fieldName, "rstBit")==0) return base+8;
    if (fieldName[0]=='s' && strcmp(fieldName, "synBit")==0) return base+9;
    if (fieldName[0]=='f' && strcmp(fieldName, "finBit")==0) return base+10;
    if (fieldName[0]=='w' && strcmp(fieldName, "window")==0) return base+11;
    if (fieldName[0]=='u' && strcmp(fieldName, "urgentPointer")==0) return base+12;
    if (fieldName[0]=='o' && strcmp(fieldName, "options")==0) return base+13;
    if (fieldName[0]=='p' && strcmp(fieldName, "payloadLength")==0) return base+14;
    if (fieldName[0]=='p' && strcmp(fieldName, "payload")==0) return base+15;
    if (fieldName[0]=='b' && strcmp(fieldName, "byteArray")==0) return base+16;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPSegmentDescriptor::getFieldTypeString(void *object, int field) const
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
        "unsigned int",
        "unsigned int",
        "unsigned short",
        "bool",
        "bool",
        "bool",
        "bool",
        "bool",
        "bool",
        "unsigned short",
        "unsigned short",
        "TCPOption",
        "unsigned long",
        "TCPPayloadMessage",
        "ByteArray",
    };
    return (field>=0 && field<17) ? fieldTypeStrings[field] : NULL;
}

const char *TCPSegmentDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPSegmentDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPSegment_Base *pp = (TCPSegment_Base *)object; (void)pp;
    switch (field) {
        case 13: return pp->getOptionsArraySize();
        case 15: return pp->getPayloadArraySize();
        default: return 0;
    }
}

std::string TCPSegmentDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPSegment_Base *pp = (TCPSegment_Base *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSrcPort());
        case 1: return ulong2string(pp->getDestPort());
        case 2: return ulong2string(pp->getSequenceNo());
        case 3: return ulong2string(pp->getAckNo());
        case 4: return ulong2string(pp->getHeaderLength());
        case 5: return bool2string(pp->getUrgBit());
        case 6: return bool2string(pp->getAckBit());
        case 7: return bool2string(pp->getPshBit());
        case 8: return bool2string(pp->getRstBit());
        case 9: return bool2string(pp->getSynBit());
        case 10: return bool2string(pp->getFinBit());
        case 11: return ulong2string(pp->getWindow());
        case 12: return ulong2string(pp->getUrgentPointer());
        case 13: {std::stringstream out; out << pp->getOptions(i); return out.str();}
        case 14: return ulong2string(pp->getPayloadLength());
        case 15: {std::stringstream out; out << pp->getPayload(i); return out.str();}
        case 16: {std::stringstream out; out << pp->getByteArray(); return out.str();}
        default: return "";
    }
}

bool TCPSegmentDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPSegment_Base *pp = (TCPSegment_Base *)object; (void)pp;
    switch (field) {
        case 0: pp->setSrcPort(string2ulong(value)); return true;
        case 1: pp->setDestPort(string2ulong(value)); return true;
        case 2: pp->setSequenceNo(string2ulong(value)); return true;
        case 3: pp->setAckNo(string2ulong(value)); return true;
        case 4: pp->setHeaderLength(string2ulong(value)); return true;
        case 5: pp->setUrgBit(string2bool(value)); return true;
        case 6: pp->setAckBit(string2bool(value)); return true;
        case 7: pp->setPshBit(string2bool(value)); return true;
        case 8: pp->setRstBit(string2bool(value)); return true;
        case 9: pp->setSynBit(string2bool(value)); return true;
        case 10: pp->setFinBit(string2bool(value)); return true;
        case 11: pp->setWindow(string2ulong(value)); return true;
        case 12: pp->setUrgentPointer(string2ulong(value)); return true;
        case 14: pp->setPayloadLength(string2ulong(value)); return true;
        default: return false;
    }
}

const char *TCPSegmentDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 13: return opp_typename(typeid(TCPOption));
        case 15: return opp_typename(typeid(TCPPayloadMessage));
        case 16: return opp_typename(typeid(ByteArray));
        default: return NULL;
    };
}

void *TCPSegmentDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPSegment_Base *pp = (TCPSegment_Base *)object; (void)pp;
    switch (field) {
        case 13: return (void *)static_cast<cObject *>(&pp->getOptions(i)); break;
        case 15: return (void *)(&pp->getPayload(i)); break;
        case 16: return (void *)(&pp->getByteArray()); break;
        default: return NULL;
    }
}


