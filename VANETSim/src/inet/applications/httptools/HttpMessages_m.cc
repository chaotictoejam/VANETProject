//
// Generated file, do not edit! Created by nedtool 4.6 from src/inet/applications/httptools/HttpMessages.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "HttpMessages_m.h"

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

Register_Class(HttpBaseMessage);

HttpBaseMessage::HttpBaseMessage(const char *name, int kind) : ::cPacket(name,kind)
{
    this->targetUrl_var = 0;
    this->originatorUrl_var = "";
    this->protocol_var = 11;
    this->keepAlive_var = true;
    this->serial_var = 0;
    this->heading_var = "";
    this->payload_var = "";
}

HttpBaseMessage::HttpBaseMessage(const HttpBaseMessage& other) : ::cPacket(other)
{
    copy(other);
}

HttpBaseMessage::~HttpBaseMessage()
{
}

HttpBaseMessage& HttpBaseMessage::operator=(const HttpBaseMessage& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void HttpBaseMessage::copy(const HttpBaseMessage& other)
{
    this->targetUrl_var = other.targetUrl_var;
    this->originatorUrl_var = other.originatorUrl_var;
    this->protocol_var = other.protocol_var;
    this->keepAlive_var = other.keepAlive_var;
    this->serial_var = other.serial_var;
    this->heading_var = other.heading_var;
    this->payload_var = other.payload_var;
}

void HttpBaseMessage::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->targetUrl_var);
    doPacking(b,this->originatorUrl_var);
    doPacking(b,this->protocol_var);
    doPacking(b,this->keepAlive_var);
    doPacking(b,this->serial_var);
    doPacking(b,this->heading_var);
    doPacking(b,this->payload_var);
}

void HttpBaseMessage::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->targetUrl_var);
    doUnpacking(b,this->originatorUrl_var);
    doUnpacking(b,this->protocol_var);
    doUnpacking(b,this->keepAlive_var);
    doUnpacking(b,this->serial_var);
    doUnpacking(b,this->heading_var);
    doUnpacking(b,this->payload_var);
}

const char * HttpBaseMessage::targetUrl() const
{
    return targetUrl_var.c_str();
}

void HttpBaseMessage::setTargetUrl(const char * targetUrl)
{
    this->targetUrl_var = targetUrl;
}

const char * HttpBaseMessage::originatorUrl() const
{
    return originatorUrl_var.c_str();
}

void HttpBaseMessage::setOriginatorUrl(const char * originatorUrl)
{
    this->originatorUrl_var = originatorUrl;
}

int HttpBaseMessage::protocol() const
{
    return protocol_var;
}

void HttpBaseMessage::setProtocol(int protocol)
{
    this->protocol_var = protocol;
}

bool HttpBaseMessage::keepAlive() const
{
    return keepAlive_var;
}

void HttpBaseMessage::setKeepAlive(bool keepAlive)
{
    this->keepAlive_var = keepAlive;
}

int HttpBaseMessage::serial() const
{
    return serial_var;
}

void HttpBaseMessage::setSerial(int serial)
{
    this->serial_var = serial;
}

const char * HttpBaseMessage::heading() const
{
    return heading_var.c_str();
}

void HttpBaseMessage::setHeading(const char * heading)
{
    this->heading_var = heading;
}

const char * HttpBaseMessage::payload() const
{
    return payload_var.c_str();
}

void HttpBaseMessage::setPayload(const char * payload)
{
    this->payload_var = payload;
}

class HttpBaseMessageDescriptor : public cClassDescriptor
{
  public:
    HttpBaseMessageDescriptor();
    virtual ~HttpBaseMessageDescriptor();

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

Register_ClassDescriptor(HttpBaseMessageDescriptor);

HttpBaseMessageDescriptor::HttpBaseMessageDescriptor() : cClassDescriptor("HttpBaseMessage", "cPacket")
{
}

HttpBaseMessageDescriptor::~HttpBaseMessageDescriptor()
{
}

bool HttpBaseMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HttpBaseMessage *>(obj)!=NULL;
}

const char *HttpBaseMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HttpBaseMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 7+basedesc->getFieldCount(object) : 7;
}

unsigned int HttpBaseMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<7) ? fieldTypeFlags[field] : 0;
}

const char *HttpBaseMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "targetUrl",
        "originatorUrl",
        "protocol",
        "keepAlive",
        "serial",
        "heading",
        "payload",
    };
    return (field>=0 && field<7) ? fieldNames[field] : NULL;
}

int HttpBaseMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "targetUrl")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "originatorUrl")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "protocol")==0) return base+2;
    if (fieldName[0]=='k' && strcmp(fieldName, "keepAlive")==0) return base+3;
    if (fieldName[0]=='s' && strcmp(fieldName, "serial")==0) return base+4;
    if (fieldName[0]=='h' && strcmp(fieldName, "heading")==0) return base+5;
    if (fieldName[0]=='p' && strcmp(fieldName, "payload")==0) return base+6;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HttpBaseMessageDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "string",
        "string",
        "int",
        "bool",
        "int",
        "string",
        "string",
    };
    return (field>=0 && field<7) ? fieldTypeStrings[field] : NULL;
}

const char *HttpBaseMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HttpBaseMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HttpBaseMessage *pp = (HttpBaseMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HttpBaseMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HttpBaseMessage *pp = (HttpBaseMessage *)object; (void)pp;
    switch (field) {
        case 0: return oppstring2string(pp->targetUrl());
        case 1: return oppstring2string(pp->originatorUrl());
        case 2: return long2string(pp->protocol());
        case 3: return bool2string(pp->keepAlive());
        case 4: return long2string(pp->serial());
        case 5: return oppstring2string(pp->heading());
        case 6: return oppstring2string(pp->payload());
        default: return "";
    }
}

bool HttpBaseMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HttpBaseMessage *pp = (HttpBaseMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setTargetUrl((value)); return true;
        case 1: pp->setOriginatorUrl((value)); return true;
        case 2: pp->setProtocol(string2long(value)); return true;
        case 3: pp->setKeepAlive(string2bool(value)); return true;
        case 4: pp->setSerial(string2long(value)); return true;
        case 5: pp->setHeading((value)); return true;
        case 6: pp->setPayload((value)); return true;
        default: return false;
    }
}

const char *HttpBaseMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *HttpBaseMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HttpBaseMessage *pp = (HttpBaseMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

Register_Class(HttpRequestMessage);

HttpRequestMessage::HttpRequestMessage(const char *name, int kind) : ::HttpBaseMessage(name,kind)
{
    this->badRequest_var = false;
}

HttpRequestMessage::HttpRequestMessage(const HttpRequestMessage& other) : ::HttpBaseMessage(other)
{
    copy(other);
}

HttpRequestMessage::~HttpRequestMessage()
{
}

HttpRequestMessage& HttpRequestMessage::operator=(const HttpRequestMessage& other)
{
    if (this==&other) return *this;
    ::HttpBaseMessage::operator=(other);
    copy(other);
    return *this;
}

void HttpRequestMessage::copy(const HttpRequestMessage& other)
{
    this->badRequest_var = other.badRequest_var;
}

void HttpRequestMessage::parsimPack(cCommBuffer *b)
{
    ::HttpBaseMessage::parsimPack(b);
    doPacking(b,this->badRequest_var);
}

void HttpRequestMessage::parsimUnpack(cCommBuffer *b)
{
    ::HttpBaseMessage::parsimUnpack(b);
    doUnpacking(b,this->badRequest_var);
}

bool HttpRequestMessage::badRequest() const
{
    return badRequest_var;
}

void HttpRequestMessage::setBadRequest(bool badRequest)
{
    this->badRequest_var = badRequest;
}

class HttpRequestMessageDescriptor : public cClassDescriptor
{
  public:
    HttpRequestMessageDescriptor();
    virtual ~HttpRequestMessageDescriptor();

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

Register_ClassDescriptor(HttpRequestMessageDescriptor);

HttpRequestMessageDescriptor::HttpRequestMessageDescriptor() : cClassDescriptor("HttpRequestMessage", "HttpBaseMessage")
{
}

HttpRequestMessageDescriptor::~HttpRequestMessageDescriptor()
{
}

bool HttpRequestMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HttpRequestMessage *>(obj)!=NULL;
}

const char *HttpRequestMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HttpRequestMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int HttpRequestMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HttpRequestMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "badRequest",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int HttpRequestMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='b' && strcmp(fieldName, "badRequest")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HttpRequestMessageDescriptor::getFieldTypeString(void *object, int field) const
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

const char *HttpRequestMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int HttpRequestMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HttpRequestMessage *pp = (HttpRequestMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HttpRequestMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HttpRequestMessage *pp = (HttpRequestMessage *)object; (void)pp;
    switch (field) {
        case 0: return bool2string(pp->badRequest());
        default: return "";
    }
}

bool HttpRequestMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HttpRequestMessage *pp = (HttpRequestMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setBadRequest(string2bool(value)); return true;
        default: return false;
    }
}

const char *HttpRequestMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *HttpRequestMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HttpRequestMessage *pp = (HttpRequestMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("HttpContentType");
    if (!e) enums.getInstance()->add(e = new cEnum("HttpContentType"));
    e->insert(CT_UNKNOWN, "CT_UNKNOWN");
    e->insert(CT_HTML, "CT_HTML");
    e->insert(CT_IMAGE, "CT_IMAGE");
    e->insert(CT_TEXT, "CT_TEXT");
);

Register_Class(HttpReplyMessage);

HttpReplyMessage::HttpReplyMessage(const char *name, int kind) : ::HttpBaseMessage(name,kind)
{
    this->result_var = 0;
    this->contentType_var = CT_UNKNOWN;
}

HttpReplyMessage::HttpReplyMessage(const HttpReplyMessage& other) : ::HttpBaseMessage(other)
{
    copy(other);
}

HttpReplyMessage::~HttpReplyMessage()
{
}

HttpReplyMessage& HttpReplyMessage::operator=(const HttpReplyMessage& other)
{
    if (this==&other) return *this;
    ::HttpBaseMessage::operator=(other);
    copy(other);
    return *this;
}

void HttpReplyMessage::copy(const HttpReplyMessage& other)
{
    this->result_var = other.result_var;
    this->contentType_var = other.contentType_var;
}

void HttpReplyMessage::parsimPack(cCommBuffer *b)
{
    ::HttpBaseMessage::parsimPack(b);
    doPacking(b,this->result_var);
    doPacking(b,this->contentType_var);
}

void HttpReplyMessage::parsimUnpack(cCommBuffer *b)
{
    ::HttpBaseMessage::parsimUnpack(b);
    doUnpacking(b,this->result_var);
    doUnpacking(b,this->contentType_var);
}

int HttpReplyMessage::result() const
{
    return result_var;
}

void HttpReplyMessage::setResult(int result)
{
    this->result_var = result;
}

int HttpReplyMessage::contentType() const
{
    return contentType_var;
}

void HttpReplyMessage::setContentType(int contentType)
{
    this->contentType_var = contentType;
}

class HttpReplyMessageDescriptor : public cClassDescriptor
{
  public:
    HttpReplyMessageDescriptor();
    virtual ~HttpReplyMessageDescriptor();

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

Register_ClassDescriptor(HttpReplyMessageDescriptor);

HttpReplyMessageDescriptor::HttpReplyMessageDescriptor() : cClassDescriptor("HttpReplyMessage", "HttpBaseMessage")
{
}

HttpReplyMessageDescriptor::~HttpReplyMessageDescriptor()
{
}

bool HttpReplyMessageDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<HttpReplyMessage *>(obj)!=NULL;
}

const char *HttpReplyMessageDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"omitGetVerb")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int HttpReplyMessageDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int HttpReplyMessageDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *HttpReplyMessageDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "result",
        "contentType",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int HttpReplyMessageDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "result")==0) return base+0;
    if (fieldName[0]=='c' && strcmp(fieldName, "contentType")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *HttpReplyMessageDescriptor::getFieldTypeString(void *object, int field) const
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
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *HttpReplyMessageDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1:
            if (!strcmp(propertyname,"enum")) return "HttpContentType";
            return NULL;
        default: return NULL;
    }
}

int HttpReplyMessageDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    HttpReplyMessage *pp = (HttpReplyMessage *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string HttpReplyMessageDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    HttpReplyMessage *pp = (HttpReplyMessage *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->result());
        case 1: return long2string(pp->contentType());
        default: return "";
    }
}

bool HttpReplyMessageDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    HttpReplyMessage *pp = (HttpReplyMessage *)object; (void)pp;
    switch (field) {
        case 0: pp->setResult(string2long(value)); return true;
        case 1: pp->setContentType(string2long(value)); return true;
        default: return false;
    }
}

const char *HttpReplyMessageDescriptor::getFieldStructName(void *object, int field) const
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

void *HttpReplyMessageDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    HttpReplyMessage *pp = (HttpReplyMessage *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


