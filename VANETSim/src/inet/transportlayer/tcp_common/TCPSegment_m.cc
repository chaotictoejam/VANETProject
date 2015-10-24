//
// Generated file, do not edit! Created by nedtool 4.6 from inet/transportlayer/tcp_common/TCPSegment.msg.
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



namespace inet {
namespace tcp {

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
    msg = nullptr;
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

TCPPayloadMessageDescriptor::TCPPayloadMessageDescriptor() : cClassDescriptor("inet::tcp::TCPPayloadMessage", "")
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
    cEnum *e = cEnum::find("inet::tcp::TCPOptionNumbers");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::tcp::TCPOptionNumbers"));
    e->insert(TCPOPTION_END_OF_OPTION_LIST, "TCPOPTION_END_OF_OPTION_LIST");
    e->insert(TCPOPTION_NO_OPERATION, "TCPOPTION_NO_OPERATION");
    e->insert(TCPOPTION_MAXIMUM_SEGMENT_SIZE, "TCPOPTION_MAXIMUM_SEGMENT_SIZE");
    e->insert(TCPOPTION_WINDOW_SCALE, "TCPOPTION_WINDOW_SCALE");
    e->insert(TCPOPTION_SACK_PERMITTED, "TCPOPTION_SACK_PERMITTED");
    e->insert(TCPOPTION_SACK, "TCPOPTION_SACK");
    e->insert(TCPOPTION_TIMESTAMP, "TCPOPTION_TIMESTAMP");
);

Register_Class(SackItem);

SackItem::SackItem() : ::cObject()
{
    this->start_var = 0;
    this->end_var = 0;
}

SackItem::SackItem(const SackItem& other) : ::cObject(other)
{
    copy(other);
}

SackItem::~SackItem()
{
}

SackItem& SackItem::operator=(const SackItem& other)
{
    if (this==&other) return *this;
    ::cObject::operator=(other);
    copy(other);
    return *this;
}

void SackItem::copy(const SackItem& other)
{
    this->start_var = other.start_var;
    this->end_var = other.end_var;
}

void SackItem::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->start_var);
    doPacking(b,this->end_var);
}

void SackItem::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->start_var);
    doUnpacking(b,this->end_var);
}

unsigned int SackItem::getStart() const
{
    return start_var;
}

void SackItem::setStart(unsigned int start)
{
    this->start_var = start;
}

unsigned int SackItem::getEnd() const
{
    return end_var;
}

void SackItem::setEnd(unsigned int end)
{
    this->end_var = end;
}

class SackItemDescriptor : public cClassDescriptor
{
  public:
    SackItemDescriptor();
    virtual ~SackItemDescriptor();

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

Register_ClassDescriptor(SackItemDescriptor);

SackItemDescriptor::SackItemDescriptor() : cClassDescriptor("inet::tcp::SackItem", "cObject")
{
}

SackItemDescriptor::~SackItemDescriptor()
{
}

bool SackItemDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<SackItem *>(obj)!=NULL;
}

const char *SackItemDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"fieldNameSuffix")) return "_var";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int SackItemDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int SackItemDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *SackItemDescriptor::getFieldName(void *object, int field) const
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

int SackItemDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "start")==0) return base+0;
    if (fieldName[0]=='e' && strcmp(fieldName, "end")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *SackItemDescriptor::getFieldTypeString(void *object, int field) const
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

const char *SackItemDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int SackItemDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    SackItem *pp = (SackItem *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string SackItemDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    SackItem *pp = (SackItem *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getStart());
        case 1: return ulong2string(pp->getEnd());
        default: return "";
    }
}

bool SackItemDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    SackItem *pp = (SackItem *)object; (void)pp;
    switch (field) {
        case 0: pp->setStart(string2ulong(value)); return true;
        case 1: pp->setEnd(string2ulong(value)); return true;
        default: return false;
    }
}

const char *SackItemDescriptor::getFieldStructName(void *object, int field) const
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

void *SackItemDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    SackItem *pp = (SackItem *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Sack_Base::Sack_Base() : ::inet::tcp::SackItem()
{
}

Sack_Base::Sack_Base(const Sack_Base& other) : ::inet::tcp::SackItem(other)
{
    copy(other);
}

Sack_Base::~Sack_Base()
{
}

Sack_Base& Sack_Base::operator=(const Sack_Base& other)
{
    if (this==&other) return *this;
    ::inet::tcp::SackItem::operator=(other);
    copy(other);
    return *this;
}

void Sack_Base::copy(const Sack_Base& other)
{
}

void Sack_Base::parsimPack(cCommBuffer *b)
{
    ::inet::tcp::SackItem::parsimPack(b);
}

void Sack_Base::parsimUnpack(cCommBuffer *b)
{
    ::inet::tcp::SackItem::parsimUnpack(b);
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

SackDescriptor::SackDescriptor() : cClassDescriptor("inet::tcp::Sack", "inet::tcp::SackItem")
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
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int SackDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *SackDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int SackDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
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
    return NULL;
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
    return NULL;
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
    this->kind_var = -1;
    this->length_var = 1;
}

TCPOption::TCPOption(const TCPOption& other) : ::cObject(other)
{
    copy(other);
}

TCPOption::~TCPOption()
{
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
}

void TCPOption::parsimPack(cCommBuffer *b)
{
    doPacking(b,this->kind_var);
    doPacking(b,this->length_var);
}

void TCPOption::parsimUnpack(cCommBuffer *b)
{
    doUnpacking(b,this->kind_var);
    doUnpacking(b,this->length_var);
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

TCPOptionDescriptor::TCPOptionDescriptor() : cClassDescriptor("inet::tcp::TCPOption", "cObject")
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
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
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
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
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
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int TCPOptionDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='k' && strcmp(fieldName, "kind")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+1;
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
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
            if (!strcmp(propertyname,"enum")) return "inet::tcp::TCPOptionNumbers";
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

Register_Class(TCPOptionEnd);

TCPOptionEnd::TCPOptionEnd() : ::inet::tcp::TCPOption()
{
    this->setKind(TCPOPTION_END_OF_OPTION_LIST);
    this->setLength(1);
}

TCPOptionEnd::TCPOptionEnd(const TCPOptionEnd& other) : ::inet::tcp::TCPOption(other)
{
    copy(other);
}

TCPOptionEnd::~TCPOptionEnd()
{
}

TCPOptionEnd& TCPOptionEnd::operator=(const TCPOptionEnd& other)
{
    if (this==&other) return *this;
    ::inet::tcp::TCPOption::operator=(other);
    copy(other);
    return *this;
}

void TCPOptionEnd::copy(const TCPOptionEnd& other)
{
}

void TCPOptionEnd::parsimPack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimPack(b);
}

void TCPOptionEnd::parsimUnpack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimUnpack(b);
}

class TCPOptionEndDescriptor : public cClassDescriptor
{
  public:
    TCPOptionEndDescriptor();
    virtual ~TCPOptionEndDescriptor();

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

Register_ClassDescriptor(TCPOptionEndDescriptor);

TCPOptionEndDescriptor::TCPOptionEndDescriptor() : cClassDescriptor("inet::tcp::TCPOptionEnd", "inet::tcp::TCPOption")
{
}

TCPOptionEndDescriptor::~TCPOptionEndDescriptor()
{
}

bool TCPOptionEndDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOptionEnd *>(obj)!=NULL;
}

const char *TCPOptionEndDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOptionEndDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int TCPOptionEndDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *TCPOptionEndDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int TCPOptionEndDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPOptionEndDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *TCPOptionEndDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPOptionEndDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionEnd *pp = (TCPOptionEnd *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPOptionEndDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionEnd *pp = (TCPOptionEnd *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool TCPOptionEndDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionEnd *pp = (TCPOptionEnd *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TCPOptionEndDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *TCPOptionEndDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionEnd *pp = (TCPOptionEnd *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPOptionNop);

TCPOptionNop::TCPOptionNop() : ::inet::tcp::TCPOption()
{
    this->setKind(TCPOPTION_NO_OPERATION);
    this->setLength(1);
}

TCPOptionNop::TCPOptionNop(const TCPOptionNop& other) : ::inet::tcp::TCPOption(other)
{
    copy(other);
}

TCPOptionNop::~TCPOptionNop()
{
}

TCPOptionNop& TCPOptionNop::operator=(const TCPOptionNop& other)
{
    if (this==&other) return *this;
    ::inet::tcp::TCPOption::operator=(other);
    copy(other);
    return *this;
}

void TCPOptionNop::copy(const TCPOptionNop& other)
{
}

void TCPOptionNop::parsimPack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimPack(b);
}

void TCPOptionNop::parsimUnpack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimUnpack(b);
}

class TCPOptionNopDescriptor : public cClassDescriptor
{
  public:
    TCPOptionNopDescriptor();
    virtual ~TCPOptionNopDescriptor();

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

Register_ClassDescriptor(TCPOptionNopDescriptor);

TCPOptionNopDescriptor::TCPOptionNopDescriptor() : cClassDescriptor("inet::tcp::TCPOptionNop", "inet::tcp::TCPOption")
{
}

TCPOptionNopDescriptor::~TCPOptionNopDescriptor()
{
}

bool TCPOptionNopDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOptionNop *>(obj)!=NULL;
}

const char *TCPOptionNopDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOptionNopDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int TCPOptionNopDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *TCPOptionNopDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int TCPOptionNopDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPOptionNopDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *TCPOptionNopDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPOptionNopDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionNop *pp = (TCPOptionNop *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPOptionNopDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionNop *pp = (TCPOptionNop *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool TCPOptionNopDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionNop *pp = (TCPOptionNop *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TCPOptionNopDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *TCPOptionNopDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionNop *pp = (TCPOptionNop *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPOptionMaxSegmentSize);

TCPOptionMaxSegmentSize::TCPOptionMaxSegmentSize() : ::inet::tcp::TCPOption()
{
    this->setKind(TCPOPTION_MAXIMUM_SEGMENT_SIZE);
    this->setLength(4);

    this->maxSegmentSize_var = 0;
}

TCPOptionMaxSegmentSize::TCPOptionMaxSegmentSize(const TCPOptionMaxSegmentSize& other) : ::inet::tcp::TCPOption(other)
{
    copy(other);
}

TCPOptionMaxSegmentSize::~TCPOptionMaxSegmentSize()
{
}

TCPOptionMaxSegmentSize& TCPOptionMaxSegmentSize::operator=(const TCPOptionMaxSegmentSize& other)
{
    if (this==&other) return *this;
    ::inet::tcp::TCPOption::operator=(other);
    copy(other);
    return *this;
}

void TCPOptionMaxSegmentSize::copy(const TCPOptionMaxSegmentSize& other)
{
    this->maxSegmentSize_var = other.maxSegmentSize_var;
}

void TCPOptionMaxSegmentSize::parsimPack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimPack(b);
    doPacking(b,this->maxSegmentSize_var);
}

void TCPOptionMaxSegmentSize::parsimUnpack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimUnpack(b);
    doUnpacking(b,this->maxSegmentSize_var);
}

uint16_t TCPOptionMaxSegmentSize::getMaxSegmentSize() const
{
    return maxSegmentSize_var;
}

void TCPOptionMaxSegmentSize::setMaxSegmentSize(uint16_t maxSegmentSize)
{
    this->maxSegmentSize_var = maxSegmentSize;
}

class TCPOptionMaxSegmentSizeDescriptor : public cClassDescriptor
{
  public:
    TCPOptionMaxSegmentSizeDescriptor();
    virtual ~TCPOptionMaxSegmentSizeDescriptor();

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

Register_ClassDescriptor(TCPOptionMaxSegmentSizeDescriptor);

TCPOptionMaxSegmentSizeDescriptor::TCPOptionMaxSegmentSizeDescriptor() : cClassDescriptor("inet::tcp::TCPOptionMaxSegmentSize", "inet::tcp::TCPOption")
{
}

TCPOptionMaxSegmentSizeDescriptor::~TCPOptionMaxSegmentSizeDescriptor()
{
}

bool TCPOptionMaxSegmentSizeDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOptionMaxSegmentSize *>(obj)!=NULL;
}

const char *TCPOptionMaxSegmentSizeDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOptionMaxSegmentSizeDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int TCPOptionMaxSegmentSizeDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TCPOptionMaxSegmentSizeDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "maxSegmentSize",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int TCPOptionMaxSegmentSizeDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "maxSegmentSize")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPOptionMaxSegmentSizeDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16_t",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *TCPOptionMaxSegmentSizeDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPOptionMaxSegmentSizeDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionMaxSegmentSize *pp = (TCPOptionMaxSegmentSize *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPOptionMaxSegmentSizeDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionMaxSegmentSize *pp = (TCPOptionMaxSegmentSize *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getMaxSegmentSize());
        default: return "";
    }
}

bool TCPOptionMaxSegmentSizeDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionMaxSegmentSize *pp = (TCPOptionMaxSegmentSize *)object; (void)pp;
    switch (field) {
        case 0: pp->setMaxSegmentSize(string2ulong(value)); return true;
        default: return false;
    }
}

const char *TCPOptionMaxSegmentSizeDescriptor::getFieldStructName(void *object, int field) const
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

void *TCPOptionMaxSegmentSizeDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionMaxSegmentSize *pp = (TCPOptionMaxSegmentSize *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPOptionWindowScale);

TCPOptionWindowScale::TCPOptionWindowScale() : ::inet::tcp::TCPOption()
{
    this->setKind(TCPOPTION_WINDOW_SCALE);
    this->setLength(3);

    this->windowScale_var = 0;
}

TCPOptionWindowScale::TCPOptionWindowScale(const TCPOptionWindowScale& other) : ::inet::tcp::TCPOption(other)
{
    copy(other);
}

TCPOptionWindowScale::~TCPOptionWindowScale()
{
}

TCPOptionWindowScale& TCPOptionWindowScale::operator=(const TCPOptionWindowScale& other)
{
    if (this==&other) return *this;
    ::inet::tcp::TCPOption::operator=(other);
    copy(other);
    return *this;
}

void TCPOptionWindowScale::copy(const TCPOptionWindowScale& other)
{
    this->windowScale_var = other.windowScale_var;
}

void TCPOptionWindowScale::parsimPack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimPack(b);
    doPacking(b,this->windowScale_var);
}

void TCPOptionWindowScale::parsimUnpack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimUnpack(b);
    doUnpacking(b,this->windowScale_var);
}

unsigned short TCPOptionWindowScale::getWindowScale() const
{
    return windowScale_var;
}

void TCPOptionWindowScale::setWindowScale(unsigned short windowScale)
{
    this->windowScale_var = windowScale;
}

class TCPOptionWindowScaleDescriptor : public cClassDescriptor
{
  public:
    TCPOptionWindowScaleDescriptor();
    virtual ~TCPOptionWindowScaleDescriptor();

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

Register_ClassDescriptor(TCPOptionWindowScaleDescriptor);

TCPOptionWindowScaleDescriptor::TCPOptionWindowScaleDescriptor() : cClassDescriptor("inet::tcp::TCPOptionWindowScale", "inet::tcp::TCPOption")
{
}

TCPOptionWindowScaleDescriptor::~TCPOptionWindowScaleDescriptor()
{
}

bool TCPOptionWindowScaleDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOptionWindowScale *>(obj)!=NULL;
}

const char *TCPOptionWindowScaleDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOptionWindowScaleDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int TCPOptionWindowScaleDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TCPOptionWindowScaleDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "windowScale",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int TCPOptionWindowScaleDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='w' && strcmp(fieldName, "windowScale")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPOptionWindowScaleDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned short",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *TCPOptionWindowScaleDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPOptionWindowScaleDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionWindowScale *pp = (TCPOptionWindowScale *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPOptionWindowScaleDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionWindowScale *pp = (TCPOptionWindowScale *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getWindowScale());
        default: return "";
    }
}

bool TCPOptionWindowScaleDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionWindowScale *pp = (TCPOptionWindowScale *)object; (void)pp;
    switch (field) {
        case 0: pp->setWindowScale(string2ulong(value)); return true;
        default: return false;
    }
}

const char *TCPOptionWindowScaleDescriptor::getFieldStructName(void *object, int field) const
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

void *TCPOptionWindowScaleDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionWindowScale *pp = (TCPOptionWindowScale *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPOptionSackPermitted);

TCPOptionSackPermitted::TCPOptionSackPermitted() : ::inet::tcp::TCPOption()
{
    this->setKind(TCPOPTION_SACK_PERMITTED);
    this->setLength(2);
}

TCPOptionSackPermitted::TCPOptionSackPermitted(const TCPOptionSackPermitted& other) : ::inet::tcp::TCPOption(other)
{
    copy(other);
}

TCPOptionSackPermitted::~TCPOptionSackPermitted()
{
}

TCPOptionSackPermitted& TCPOptionSackPermitted::operator=(const TCPOptionSackPermitted& other)
{
    if (this==&other) return *this;
    ::inet::tcp::TCPOption::operator=(other);
    copy(other);
    return *this;
}

void TCPOptionSackPermitted::copy(const TCPOptionSackPermitted& other)
{
}

void TCPOptionSackPermitted::parsimPack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimPack(b);
}

void TCPOptionSackPermitted::parsimUnpack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimUnpack(b);
}

class TCPOptionSackPermittedDescriptor : public cClassDescriptor
{
  public:
    TCPOptionSackPermittedDescriptor();
    virtual ~TCPOptionSackPermittedDescriptor();

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

Register_ClassDescriptor(TCPOptionSackPermittedDescriptor);

TCPOptionSackPermittedDescriptor::TCPOptionSackPermittedDescriptor() : cClassDescriptor("inet::tcp::TCPOptionSackPermitted", "inet::tcp::TCPOption")
{
}

TCPOptionSackPermittedDescriptor::~TCPOptionSackPermittedDescriptor()
{
}

bool TCPOptionSackPermittedDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOptionSackPermitted *>(obj)!=NULL;
}

const char *TCPOptionSackPermittedDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOptionSackPermittedDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 0+basedesc->getFieldCount(object) : 0;
}

unsigned int TCPOptionSackPermittedDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return 0;
}

const char *TCPOptionSackPermittedDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

int TCPOptionSackPermittedDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPOptionSackPermittedDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

const char *TCPOptionSackPermittedDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPOptionSackPermittedDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionSackPermitted *pp = (TCPOptionSackPermitted *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPOptionSackPermittedDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionSackPermitted *pp = (TCPOptionSackPermitted *)object; (void)pp;
    switch (field) {
        default: return "";
    }
}

bool TCPOptionSackPermittedDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionSackPermitted *pp = (TCPOptionSackPermitted *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TCPOptionSackPermittedDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    return NULL;
}

void *TCPOptionSackPermittedDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionSackPermitted *pp = (TCPOptionSackPermitted *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPOptionSack);

TCPOptionSack::TCPOptionSack() : ::inet::tcp::TCPOption()
{
    this->setKind(TCPOPTION_SACK);
    this->setLength(2);

    sackItem_arraysize = 0;
    this->sackItem_var = 0;
}

TCPOptionSack::TCPOptionSack(const TCPOptionSack& other) : ::inet::tcp::TCPOption(other)
{
    sackItem_arraysize = 0;
    this->sackItem_var = 0;
    copy(other);
}

TCPOptionSack::~TCPOptionSack()
{
    delete [] sackItem_var;
}

TCPOptionSack& TCPOptionSack::operator=(const TCPOptionSack& other)
{
    if (this==&other) return *this;
    ::inet::tcp::TCPOption::operator=(other);
    copy(other);
    return *this;
}

void TCPOptionSack::copy(const TCPOptionSack& other)
{
    delete [] this->sackItem_var;
    this->sackItem_var = (other.sackItem_arraysize==0) ? NULL : new SackItem[other.sackItem_arraysize];
    sackItem_arraysize = other.sackItem_arraysize;
    for (unsigned int i=0; i<sackItem_arraysize; i++)
        this->sackItem_var[i] = other.sackItem_var[i];
}

void TCPOptionSack::parsimPack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimPack(b);
    b->pack(sackItem_arraysize);
    doPacking(b,this->sackItem_var,sackItem_arraysize);
}

void TCPOptionSack::parsimUnpack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimUnpack(b);
    delete [] this->sackItem_var;
    b->unpack(sackItem_arraysize);
    if (sackItem_arraysize==0) {
        this->sackItem_var = 0;
    } else {
        this->sackItem_var = new SackItem[sackItem_arraysize];
        doUnpacking(b,this->sackItem_var,sackItem_arraysize);
    }
}

void TCPOptionSack::setSackItemArraySize(unsigned int size)
{
    SackItem *sackItem_var2 = (size==0) ? NULL : new SackItem[size];
    unsigned int sz = sackItem_arraysize < size ? sackItem_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        sackItem_var2[i] = this->sackItem_var[i];
    sackItem_arraysize = size;
    delete [] this->sackItem_var;
    this->sackItem_var = sackItem_var2;
}

unsigned int TCPOptionSack::getSackItemArraySize() const
{
    return sackItem_arraysize;
}

SackItem& TCPOptionSack::getSackItem(unsigned int k)
{
    if (k>=sackItem_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sackItem_arraysize, k);
    return sackItem_var[k];
}

void TCPOptionSack::setSackItem(unsigned int k, const SackItem& sackItem)
{
    if (k>=sackItem_arraysize) throw cRuntimeError("Array of size %d indexed by %d", sackItem_arraysize, k);
    this->sackItem_var[k] = sackItem;
}

class TCPOptionSackDescriptor : public cClassDescriptor
{
  public:
    TCPOptionSackDescriptor();
    virtual ~TCPOptionSackDescriptor();

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

Register_ClassDescriptor(TCPOptionSackDescriptor);

TCPOptionSackDescriptor::TCPOptionSackDescriptor() : cClassDescriptor("inet::tcp::TCPOptionSack", "inet::tcp::TCPOption")
{
}

TCPOptionSackDescriptor::~TCPOptionSackDescriptor()
{
}

bool TCPOptionSackDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOptionSack *>(obj)!=NULL;
}

const char *TCPOptionSackDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOptionSackDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int TCPOptionSackDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND | FD_ISCOBJECT,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *TCPOptionSackDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "sackItem",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int TCPOptionSackDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "sackItem")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPOptionSackDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "SackItem",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *TCPOptionSackDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPOptionSackDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionSack *pp = (TCPOptionSack *)object; (void)pp;
    switch (field) {
        case 0: return pp->getSackItemArraySize();
        default: return 0;
    }
}

std::string TCPOptionSackDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionSack *pp = (TCPOptionSack *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSackItem(i); return out.str();}
        default: return "";
    }
}

bool TCPOptionSackDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionSack *pp = (TCPOptionSack *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *TCPOptionSackDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(SackItem));
        default: return NULL;
    };
}

void *TCPOptionSackDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionSack *pp = (TCPOptionSack *)object; (void)pp;
    switch (field) {
        case 0: return (void *)static_cast<cObject *>(&pp->getSackItem(i)); break;
        default: return NULL;
    }
}

Register_Class(TCPOptionTimestamp);

TCPOptionTimestamp::TCPOptionTimestamp() : ::inet::tcp::TCPOption()
{
    this->setKind(TCPOPTION_TIMESTAMP);
    this->setLength(10);

    this->senderTimestamp_var = 0;
    this->echoedTimestamp_var = 0;
}

TCPOptionTimestamp::TCPOptionTimestamp(const TCPOptionTimestamp& other) : ::inet::tcp::TCPOption(other)
{
    copy(other);
}

TCPOptionTimestamp::~TCPOptionTimestamp()
{
}

TCPOptionTimestamp& TCPOptionTimestamp::operator=(const TCPOptionTimestamp& other)
{
    if (this==&other) return *this;
    ::inet::tcp::TCPOption::operator=(other);
    copy(other);
    return *this;
}

void TCPOptionTimestamp::copy(const TCPOptionTimestamp& other)
{
    this->senderTimestamp_var = other.senderTimestamp_var;
    this->echoedTimestamp_var = other.echoedTimestamp_var;
}

void TCPOptionTimestamp::parsimPack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimPack(b);
    doPacking(b,this->senderTimestamp_var);
    doPacking(b,this->echoedTimestamp_var);
}

void TCPOptionTimestamp::parsimUnpack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimUnpack(b);
    doUnpacking(b,this->senderTimestamp_var);
    doUnpacking(b,this->echoedTimestamp_var);
}

uint32_t TCPOptionTimestamp::getSenderTimestamp() const
{
    return senderTimestamp_var;
}

void TCPOptionTimestamp::setSenderTimestamp(uint32_t senderTimestamp)
{
    this->senderTimestamp_var = senderTimestamp;
}

uint32_t TCPOptionTimestamp::getEchoedTimestamp() const
{
    return echoedTimestamp_var;
}

void TCPOptionTimestamp::setEchoedTimestamp(uint32_t echoedTimestamp)
{
    this->echoedTimestamp_var = echoedTimestamp;
}

class TCPOptionTimestampDescriptor : public cClassDescriptor
{
  public:
    TCPOptionTimestampDescriptor();
    virtual ~TCPOptionTimestampDescriptor();

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

Register_ClassDescriptor(TCPOptionTimestampDescriptor);

TCPOptionTimestampDescriptor::TCPOptionTimestampDescriptor() : cClassDescriptor("inet::tcp::TCPOptionTimestamp", "inet::tcp::TCPOption")
{
}

TCPOptionTimestampDescriptor::~TCPOptionTimestampDescriptor()
{
}

bool TCPOptionTimestampDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOptionTimestamp *>(obj)!=NULL;
}

const char *TCPOptionTimestampDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOptionTimestampDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int TCPOptionTimestampDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *TCPOptionTimestampDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "senderTimestamp",
        "echoedTimestamp",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int TCPOptionTimestampDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "senderTimestamp")==0) return base+0;
    if (fieldName[0]=='e' && strcmp(fieldName, "echoedTimestamp")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPOptionTimestampDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint32_t",
        "uint32_t",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *TCPOptionTimestampDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPOptionTimestampDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionTimestamp *pp = (TCPOptionTimestamp *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string TCPOptionTimestampDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionTimestamp *pp = (TCPOptionTimestamp *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getSenderTimestamp());
        case 1: return ulong2string(pp->getEchoedTimestamp());
        default: return "";
    }
}

bool TCPOptionTimestampDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionTimestamp *pp = (TCPOptionTimestamp *)object; (void)pp;
    switch (field) {
        case 0: pp->setSenderTimestamp(string2ulong(value)); return true;
        case 1: pp->setEchoedTimestamp(string2ulong(value)); return true;
        default: return false;
    }
}

const char *TCPOptionTimestampDescriptor::getFieldStructName(void *object, int field) const
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

void *TCPOptionTimestampDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionTimestamp *pp = (TCPOptionTimestamp *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(TCPOptionUnknown);

TCPOptionUnknown::TCPOptionUnknown() : ::inet::tcp::TCPOption()
{
    this->setKind(-1);

    bytes_arraysize = 0;
    this->bytes_var = 0;
}

TCPOptionUnknown::TCPOptionUnknown(const TCPOptionUnknown& other) : ::inet::tcp::TCPOption(other)
{
    bytes_arraysize = 0;
    this->bytes_var = 0;
    copy(other);
}

TCPOptionUnknown::~TCPOptionUnknown()
{
    delete [] bytes_var;
}

TCPOptionUnknown& TCPOptionUnknown::operator=(const TCPOptionUnknown& other)
{
    if (this==&other) return *this;
    ::inet::tcp::TCPOption::operator=(other);
    copy(other);
    return *this;
}

void TCPOptionUnknown::copy(const TCPOptionUnknown& other)
{
    delete [] this->bytes_var;
    this->bytes_var = (other.bytes_arraysize==0) ? NULL : new uint8_t[other.bytes_arraysize];
    bytes_arraysize = other.bytes_arraysize;
    for (unsigned int i=0; i<bytes_arraysize; i++)
        this->bytes_var[i] = other.bytes_var[i];
}

void TCPOptionUnknown::parsimPack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimPack(b);
    b->pack(bytes_arraysize);
    doPacking(b,this->bytes_var,bytes_arraysize);
}

void TCPOptionUnknown::parsimUnpack(cCommBuffer *b)
{
    ::inet::tcp::TCPOption::parsimUnpack(b);
    delete [] this->bytes_var;
    b->unpack(bytes_arraysize);
    if (bytes_arraysize==0) {
        this->bytes_var = 0;
    } else {
        this->bytes_var = new uint8_t[bytes_arraysize];
        doUnpacking(b,this->bytes_var,bytes_arraysize);
    }
}

void TCPOptionUnknown::setBytesArraySize(unsigned int size)
{
    uint8_t *bytes_var2 = (size==0) ? NULL : new uint8_t[size];
    unsigned int sz = bytes_arraysize < size ? bytes_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        bytes_var2[i] = this->bytes_var[i];
    for (unsigned int i=sz; i<size; i++)
        bytes_var2[i] = 0;
    bytes_arraysize = size;
    delete [] this->bytes_var;
    this->bytes_var = bytes_var2;
}

unsigned int TCPOptionUnknown::getBytesArraySize() const
{
    return bytes_arraysize;
}

uint8_t TCPOptionUnknown::getBytes(unsigned int k) const
{
    if (k>=bytes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", bytes_arraysize, k);
    return bytes_var[k];
}

void TCPOptionUnknown::setBytes(unsigned int k, uint8_t bytes)
{
    if (k>=bytes_arraysize) throw cRuntimeError("Array of size %d indexed by %d", bytes_arraysize, k);
    this->bytes_var[k] = bytes;
}

class TCPOptionUnknownDescriptor : public cClassDescriptor
{
  public:
    TCPOptionUnknownDescriptor();
    virtual ~TCPOptionUnknownDescriptor();

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

Register_ClassDescriptor(TCPOptionUnknownDescriptor);

TCPOptionUnknownDescriptor::TCPOptionUnknownDescriptor() : cClassDescriptor("inet::tcp::TCPOptionUnknown", "inet::tcp::TCPOption")
{
}

TCPOptionUnknownDescriptor::~TCPOptionUnknownDescriptor()
{
}

bool TCPOptionUnknownDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<TCPOptionUnknown *>(obj)!=NULL;
}

const char *TCPOptionUnknownDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int TCPOptionUnknownDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int TCPOptionUnknownDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *TCPOptionUnknownDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "bytes",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int TCPOptionUnknownDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "bytes")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *TCPOptionUnknownDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
    };
    return (field>=0 && field<1) ? fieldTypeStrings[field] : NULL;
}

const char *TCPOptionUnknownDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int TCPOptionUnknownDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionUnknown *pp = (TCPOptionUnknown *)object; (void)pp;
    switch (field) {
        case 0: return pp->getBytesArraySize();
        default: return 0;
    }
}

std::string TCPOptionUnknownDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionUnknown *pp = (TCPOptionUnknown *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getBytes(i));
        default: return "";
    }
}

bool TCPOptionUnknownDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionUnknown *pp = (TCPOptionUnknown *)object; (void)pp;
    switch (field) {
        case 0: pp->setBytes(i,string2ulong(value)); return true;
        default: return false;
    }
}

const char *TCPOptionUnknownDescriptor::getFieldStructName(void *object, int field) const
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

void *TCPOptionUnknownDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    TCPOptionUnknown *pp = (TCPOptionUnknown *)object; (void)pp;
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
    this->payloadLength_var = 0;
}

TCPSegment_Base::TCPSegment_Base(const TCPSegment_Base& other) : ::cPacket(other)
{
    copy(other);
}

TCPSegment_Base::~TCPSegment_Base()
{
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
    // field headerOption is abstract -- please do packing in customized class
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
    // field headerOption is abstract -- please do unpacking in customized class
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

TCPSegmentDescriptor::TCPSegmentDescriptor() : cClassDescriptor("inet::tcp::TCPSegment", "cPacket")
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
    if (!strcmp(propertyname,"fieldNameSuffix")) return "_var";
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
        FD_ISARRAY | FD_ISCOMPOUND,
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
        "headerOption",
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
    if (fieldName[0]=='h' && strcmp(fieldName, "headerOption")==0) return base+13;
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
        "TCPOptionPtr",
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
        case 13: return pp->getHeaderOptionArraySize();
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
        case 13: {std::stringstream out; out << pp->getHeaderOption(i); return out.str();}
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
        case 13: return opp_typename(typeid(TCPOptionPtr));
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
        case 13: return (void *)(&pp->getHeaderOption(i)); break;
        case 15: return (void *)(&pp->getPayload(i)); break;
        case 16: return (void *)(&pp->getByteArray()); break;
        default: return NULL;
    }
}

} // namespace tcp
} // namespace inet

