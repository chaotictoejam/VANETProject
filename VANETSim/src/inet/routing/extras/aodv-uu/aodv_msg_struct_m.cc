//
// Generated file, do not edit! Created by nedtool 4.6 from routing/extras/aodv-uu/aodv_msg_struct.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "aodv_msg_struct_m.h"

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
namespace inetmanet {

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

class AODV_extDescriptor : public cClassDescriptor
{
  public:
    AODV_extDescriptor();
    virtual ~AODV_extDescriptor();

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

Register_ClassDescriptor(AODV_extDescriptor);

AODV_extDescriptor::AODV_extDescriptor() : cClassDescriptor("inet::inetmanet::AODV_ext", "")
{
}

AODV_extDescriptor::~AODV_extDescriptor()
{
}

bool AODV_extDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODV_ext *>(obj)!=NULL;
}

const char *AODV_extDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"descriptor")) return "readonly";
    if (!strcmp(propertyname,"existingClass")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODV_extDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int AODV_extDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        0,
        0,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *AODV_extDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "length",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int AODV_extDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='l' && strcmp(fieldName, "length")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODV_extDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
        "uint8_t",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *AODV_extDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int AODV_extDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODV_ext *pp = (AODV_ext *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string AODV_extDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODV_ext *pp = (AODV_ext *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->type);
        case 1: return ulong2string(pp->length);
        default: return "";
    }
}

bool AODV_extDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODV_ext *pp = (AODV_ext *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *AODV_extDescriptor::getFieldStructName(void *object, int field) const
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

void *AODV_extDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODV_ext *pp = (AODV_ext *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class AODV_msgDescriptor : public cClassDescriptor
{
  public:
    AODV_msgDescriptor();
    virtual ~AODV_msgDescriptor();

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

Register_ClassDescriptor(AODV_msgDescriptor);

AODV_msgDescriptor::AODV_msgDescriptor() : cClassDescriptor("inet::inetmanet::AODV_msg", "cPacket")
{
}

AODV_msgDescriptor::~AODV_msgDescriptor()
{
}

bool AODV_msgDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<AODV_msg *>(obj)!=NULL;
}

const char *AODV_msgDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"descriptor")) return "readonly";
    if (!strcmp(propertyname,"existingClass")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int AODV_msgDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int AODV_msgDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        0,
        0,
        0,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *AODV_msgDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "ttl",
        "prevFix",
        "extension",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int AODV_msgDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "ttl")==0) return base+1;
    if (fieldName[0]=='p' && strcmp(fieldName, "prevFix")==0) return base+2;
    if (fieldName[0]=='e' && strcmp(fieldName, "extension")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *AODV_msgDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
        "uint8_t",
        "bool",
        "AODV_ext",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *AODV_msgDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3:
            if (!strcmp(propertyname,"getter")) return "getExtensionRef";
            if (!strcmp(propertyname,"sizeGetter")) return "getNumExtension";
            return NULL;
        default: return NULL;
    }
}

int AODV_msgDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    AODV_msg *pp = (AODV_msg *)object; (void)pp;
    switch (field) {
        case 3: return pp->getNumExtension();
        default: return 0;
    }
}

std::string AODV_msgDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    AODV_msg *pp = (AODV_msg *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getType());
        case 1: return ulong2string(pp->getTtl());
        case 2: return bool2string(pp->getPrevFix());
        case 3: {std::stringstream out; out << pp->getExtensionRef(i); return out.str();}
        default: return "";
    }
}

bool AODV_msgDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    AODV_msg *pp = (AODV_msg *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *AODV_msgDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return opp_typename(typeid(AODV_ext));
        default: return NULL;
    };
}

void *AODV_msgDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    AODV_msg *pp = (AODV_msg *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getExtensionRef(i)); break;
        default: return NULL;
    }
}

class RERR_udestDescriptor : public cClassDescriptor
{
  public:
    RERR_udestDescriptor();
    virtual ~RERR_udestDescriptor();

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

Register_ClassDescriptor(RERR_udestDescriptor);

RERR_udestDescriptor::RERR_udestDescriptor() : cClassDescriptor("inet::inetmanet::RERR_udest", "")
{
}

RERR_udestDescriptor::~RERR_udestDescriptor()
{
}

bool RERR_udestDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RERR_udest *>(obj)!=NULL;
}

const char *RERR_udestDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"descriptor")) return "readonly";
    if (!strcmp(propertyname,"existingClass")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RERR_udestDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RERR_udestDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        0,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *RERR_udestDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "dest_addr",
        "dest_seqno",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RERR_udestDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest_addr")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest_seqno")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RERR_udestDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "L3Address",
        "uint32_t",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *RERR_udestDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RERR_udestDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RERR_udest *pp = (RERR_udest *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RERR_udestDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RERR_udest *pp = (RERR_udest *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->dest_addr; return out.str();}
        case 1: return ulong2string(pp->dest_seqno);
        default: return "";
    }
}

bool RERR_udestDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RERR_udest *pp = (RERR_udest *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RERR_udestDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *RERR_udestDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RERR_udest *pp = (RERR_udest *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->dest_addr); break;
        default: return NULL;
    }
}

class RERRDescriptor : public cClassDescriptor
{
  public:
    RERRDescriptor();
    virtual ~RERRDescriptor();

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

Register_ClassDescriptor(RERRDescriptor);

RERRDescriptor::RERRDescriptor() : cClassDescriptor("inet::inetmanet::RERR", "inet::inetmanet::AODV_msg")
{
}

RERRDescriptor::~RERRDescriptor()
{
}

bool RERRDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RERR *>(obj)!=NULL;
}

const char *RERRDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"descriptor")) return "readonly";
    if (!strcmp(propertyname,"existingClass")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RERRDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int RERRDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        0,
        0,
        0,
        FD_ISARRAY | FD_ISCOMPOUND,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *RERRDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "res1",
        "n",
        "res2",
        "udest",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int RERRDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "res1")==0) return base+0;
    if (fieldName[0]=='n' && strcmp(fieldName, "n")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "res2")==0) return base+2;
    if (fieldName[0]=='u' && strcmp(fieldName, "udest")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RERRDescriptor::getFieldTypeString(void *object, int field) const
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
        "unsigned short",
        "RERR_udest",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *RERRDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3:
            if (!strcmp(propertyname,"getter")) return "getUdestRef";
            return NULL;
        default: return NULL;
    }
}

int RERRDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RERR *pp = (RERR *)object; (void)pp;
    switch (field) {
        case 3: return pp->getUdestArraySize();
        default: return 0;
    }
}

std::string RERRDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RERR *pp = (RERR *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getRes1());
        case 1: return ulong2string(pp->getN());
        case 2: return ulong2string(pp->getRes2());
        case 3: {std::stringstream out; out << pp->getUdestRef(i); return out.str();}
        default: return "";
    }
}

bool RERRDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RERR *pp = (RERR *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RERRDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 3: return opp_typename(typeid(RERR_udest));
        default: return NULL;
    };
}

void *RERRDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RERR *pp = (RERR *)object; (void)pp;
    switch (field) {
        case 3: return (void *)(&pp->getUdestRef(i)); break;
        default: return NULL;
    }
}

class RREPDescriptor : public cClassDescriptor
{
  public:
    RREPDescriptor();
    virtual ~RREPDescriptor();

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

Register_ClassDescriptor(RREPDescriptor);

RREPDescriptor::RREPDescriptor() : cClassDescriptor("inet::inetmanet::RREP", "inet::inetmanet::AODV_msg")
{
}

RREPDescriptor::~RREPDescriptor()
{
}

bool RREPDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RREP *>(obj)!=NULL;
}

const char *RREPDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"descriptor")) return "readonly";
    if (!strcmp(propertyname,"existingClass")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RREPDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 12+basedesc->getFieldCount(object) : 12;
}

unsigned int RREPDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        0,
        0,
        0,
        0,
        0,
        0,
        FD_ISCOMPOUND,
        0,
        FD_ISCOMPOUND,
        0,
        0,
        0,
    };
    return (field>=0 && field<12) ? fieldTypeFlags[field] : 0;
}

const char *RREPDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "res1",
        "a",
        "r",
        "prefix",
        "res2",
        "hcnt",
        "dest_addr",
        "dest_seqno",
        "orig_addr",
        "lifetime",
        "cost",
        "hopfix",
    };
    return (field>=0 && field<12) ? fieldNames[field] : NULL;
}

int RREPDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "res1")==0) return base+0;
    if (fieldName[0]=='a' && strcmp(fieldName, "a")==0) return base+1;
    if (fieldName[0]=='r' && strcmp(fieldName, "r")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefix")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "res2")==0) return base+4;
    if (fieldName[0]=='h' && strcmp(fieldName, "hcnt")==0) return base+5;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest_addr")==0) return base+6;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest_seqno")==0) return base+7;
    if (fieldName[0]=='o' && strcmp(fieldName, "orig_addr")==0) return base+8;
    if (fieldName[0]=='l' && strcmp(fieldName, "lifetime")==0) return base+9;
    if (fieldName[0]=='c' && strcmp(fieldName, "cost")==0) return base+10;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopfix")==0) return base+11;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RREPDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint16_t",
        "uint16_t",
        "uint16_t",
        "uint16_t",
        "uint16_t",
        "uint8_t",
        "L3Address",
        "uint32_t",
        "L3Address",
        "uint32_t",
        "uint32_t",
        "uint8_t",
    };
    return (field>=0 && field<12) ? fieldTypeStrings[field] : NULL;
}

const char *RREPDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RREPDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RREP *pp = (RREP *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RREPDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RREP *pp = (RREP *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getRes1());
        case 1: return ulong2string(pp->getA());
        case 2: return ulong2string(pp->getR());
        case 3: return ulong2string(pp->getPrefix());
        case 4: return ulong2string(pp->getRes2());
        case 5: return ulong2string(pp->getHcnt());
        case 6: {std::stringstream out; out << pp->getDest_addr(); return out.str();}
        case 7: return ulong2string(pp->getDest_seqno());
        case 8: {std::stringstream out; out << pp->getOrig_addr(); return out.str();}
        case 9: return ulong2string(pp->getLifetime());
        case 10: return ulong2string(pp->getCost());
        case 11: return ulong2string(pp->getHopfix());
        default: return "";
    }
}

bool RREPDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RREP *pp = (RREP *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RREPDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 6: return opp_typename(typeid(L3Address));
        case 8: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *RREPDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RREP *pp = (RREP *)object; (void)pp;
    switch (field) {
        case 6: return (void *)(&pp->getDest_addr()); break;
        case 8: return (void *)(&pp->getOrig_addr()); break;
        default: return NULL;
    }
}

class RREP_ackDescriptor : public cClassDescriptor
{
  public:
    RREP_ackDescriptor();
    virtual ~RREP_ackDescriptor();

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

Register_ClassDescriptor(RREP_ackDescriptor);

RREP_ackDescriptor::RREP_ackDescriptor() : cClassDescriptor("inet::inetmanet::RREP_ack", "inet::inetmanet::AODV_msg")
{
}

RREP_ackDescriptor::~RREP_ackDescriptor()
{
}

bool RREP_ackDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RREP_ack *>(obj)!=NULL;
}

const char *RREP_ackDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"descriptor")) return "readonly";
    if (!strcmp(propertyname,"existingClass")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RREP_ackDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 1+basedesc->getFieldCount(object) : 1;
}

unsigned int RREP_ackDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        0,
    };
    return (field>=0 && field<1) ? fieldTypeFlags[field] : 0;
}

const char *RREP_ackDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "reserved",
    };
    return (field>=0 && field<1) ? fieldNames[field] : NULL;
}

int RREP_ackDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='r' && strcmp(fieldName, "reserved")==0) return base+0;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RREP_ackDescriptor::getFieldTypeString(void *object, int field) const
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

const char *RREP_ackDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RREP_ackDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RREP_ack *pp = (RREP_ack *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RREP_ackDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RREP_ack *pp = (RREP_ack *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getReserved());
        default: return "";
    }
}

bool RREP_ackDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RREP_ack *pp = (RREP_ack *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RREP_ackDescriptor::getFieldStructName(void *object, int field) const
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

void *RREP_ackDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RREP_ack *pp = (RREP_ack *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}

class RREQDescriptor : public cClassDescriptor
{
  public:
    RREQDescriptor();
    virtual ~RREQDescriptor();

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

Register_ClassDescriptor(RREQDescriptor);

RREQDescriptor::RREQDescriptor() : cClassDescriptor("inet::inetmanet::RREQ", "inet::inetmanet::AODV_msg")
{
}

RREQDescriptor::~RREQDescriptor()
{
}

bool RREQDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RREQ *>(obj)!=NULL;
}

const char *RREQDescriptor::getProperty(const char *propertyname) const
{
    if (!strcmp(propertyname,"descriptor")) return "readonly";
    if (!strcmp(propertyname,"existingClass")) return "true";
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RREQDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 14+basedesc->getFieldCount(object) : 14;
}

unsigned int RREQDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        FD_ISCOMPOUND,
        0,
        FD_ISCOMPOUND,
        0,
        0,
        0,
    };
    return (field>=0 && field<14) ? fieldTypeFlags[field] : 0;
}

const char *RREQDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "j",
        "r",
        "g",
        "d",
        "res1",
        "res2",
        "hcnt",
        "rreq_id",
        "dest_addr",
        "dest_seqno",
        "orig_addr",
        "orig_seqno",
        "cost",
        "hopfix",
    };
    return (field>=0 && field<14) ? fieldNames[field] : NULL;
}

int RREQDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='j' && strcmp(fieldName, "j")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "r")==0) return base+1;
    if (fieldName[0]=='g' && strcmp(fieldName, "g")==0) return base+2;
    if (fieldName[0]=='d' && strcmp(fieldName, "d")==0) return base+3;
    if (fieldName[0]=='r' && strcmp(fieldName, "res1")==0) return base+4;
    if (fieldName[0]=='r' && strcmp(fieldName, "res2")==0) return base+5;
    if (fieldName[0]=='h' && strcmp(fieldName, "hcnt")==0) return base+6;
    if (fieldName[0]=='r' && strcmp(fieldName, "rreq_id")==0) return base+7;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest_addr")==0) return base+8;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest_seqno")==0) return base+9;
    if (fieldName[0]=='o' && strcmp(fieldName, "orig_addr")==0) return base+10;
    if (fieldName[0]=='o' && strcmp(fieldName, "orig_seqno")==0) return base+11;
    if (fieldName[0]=='c' && strcmp(fieldName, "cost")==0) return base+12;
    if (fieldName[0]=='h' && strcmp(fieldName, "hopfix")==0) return base+13;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RREQDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "uint8_t",
        "uint8_t",
        "uint8_t",
        "uint8_t",
        "uint8_t",
        "uint8_t",
        "uint8_t",
        "uint32_t",
        "L3Address",
        "uint32_t",
        "L3Address",
        "uint32_t",
        "uint32_t",
        "uint8_t",
    };
    return (field>=0 && field<14) ? fieldTypeStrings[field] : NULL;
}

const char *RREQDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int RREQDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RREQ *pp = (RREQ *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RREQDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RREQ *pp = (RREQ *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getJ());
        case 1: return ulong2string(pp->getR());
        case 2: return ulong2string(pp->getG());
        case 3: return ulong2string(pp->getD());
        case 4: return ulong2string(pp->getRes1());
        case 5: return ulong2string(pp->getRes2());
        case 6: return ulong2string(pp->getHcnt());
        case 7: return ulong2string(pp->getRreq_id());
        case 8: {std::stringstream out; out << pp->getDest_addr(); return out.str();}
        case 9: return ulong2string(pp->getDest_seqno());
        case 10: {std::stringstream out; out << pp->getOrig_addr(); return out.str();}
        case 11: return ulong2string(pp->getOrig_seqno());
        case 12: return ulong2string(pp->getCost());
        case 13: return ulong2string(pp->getHopfix());
        default: return "";
    }
}

bool RREQDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RREQ *pp = (RREQ *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *RREQDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 8: return opp_typename(typeid(L3Address));
        case 10: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *RREQDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RREQ *pp = (RREQ *)object; (void)pp;
    switch (field) {
        case 8: return (void *)(&pp->getDest_addr()); break;
        case 10: return (void *)(&pp->getOrig_addr()); break;
        default: return NULL;
    }
}

} // namespace inetmanet
} // namespace inet

