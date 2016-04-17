//
// Generated file, do not edit! Created by nedtool 4.6 from inet/networklayer/routing/rip/RIPPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "RIPPacket_m.h"

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
    cEnum *e = cEnum::find("RIPCommand");
    if (!e) enums.getInstance()->add(e = new cEnum("RIPCommand"));
    e->insert(RIP_REQUEST, "RIP_REQUEST");
    e->insert(RIP_RESPONSE, "RIP_RESPONSE");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("RIP_AF");
    if (!e) enums.getInstance()->add(e = new cEnum("RIP_AF"));
    e->insert(RIP_AF_NONE, "RIP_AF_NONE");
    e->insert(RIP_AF_INET, "RIP_AF_INET");
);

RIPEntry::RIPEntry()
{
    addressFamilyId = 0;
    routeTag = 0;
    prefixLength = 0;
    metric = 0;
}

void doPacking(cCommBuffer *b, RIPEntry& a)
{
    doPacking(b,a.addressFamilyId);
    doPacking(b,a.routeTag);
    doPacking(b,a.address);
    doPacking(b,a.prefixLength);
    doPacking(b,a.nextHop);
    doPacking(b,a.metric);
}

void doUnpacking(cCommBuffer *b, RIPEntry& a)
{
    doUnpacking(b,a.addressFamilyId);
    doUnpacking(b,a.routeTag);
    doUnpacking(b,a.address);
    doUnpacking(b,a.prefixLength);
    doUnpacking(b,a.nextHop);
    doUnpacking(b,a.metric);
}

class RIPEntryDescriptor : public cClassDescriptor
{
  public:
    RIPEntryDescriptor();
    virtual ~RIPEntryDescriptor();

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

Register_ClassDescriptor(RIPEntryDescriptor);

RIPEntryDescriptor::RIPEntryDescriptor() : cClassDescriptor("RIPEntry", "")
{
}

RIPEntryDescriptor::~RIPEntryDescriptor()
{
}

bool RIPEntryDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RIPEntry *>(obj)!=NULL;
}

const char *RIPEntryDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RIPEntryDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 6+basedesc->getFieldCount(object) : 6;
}

unsigned int RIPEntryDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
    };
    return (field>=0 && field<6) ? fieldTypeFlags[field] : 0;
}

const char *RIPEntryDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "addressFamilyId",
        "routeTag",
        "address",
        "prefixLength",
        "nextHop",
        "metric",
    };
    return (field>=0 && field<6) ? fieldNames[field] : NULL;
}

int RIPEntryDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='a' && strcmp(fieldName, "addressFamilyId")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "routeTag")==0) return base+1;
    if (fieldName[0]=='a' && strcmp(fieldName, "address")==0) return base+2;
    if (fieldName[0]=='p' && strcmp(fieldName, "prefixLength")==0) return base+3;
    if (fieldName[0]=='n' && strcmp(fieldName, "nextHop")==0) return base+4;
    if (fieldName[0]=='m' && strcmp(fieldName, "metric")==0) return base+5;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RIPEntryDescriptor::getFieldTypeString(void *object, int field) const
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
        "IPvXAddress",
        "int",
        "IPvXAddress",
        "unsigned int",
    };
    return (field>=0 && field<6) ? fieldTypeStrings[field] : NULL;
}

const char *RIPEntryDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "RIP_AF";
            return NULL;
        default: return NULL;
    }
}

int RIPEntryDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RIPEntry *pp = (RIPEntry *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string RIPEntryDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RIPEntry *pp = (RIPEntry *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->addressFamilyId);
        case 1: return ulong2string(pp->routeTag);
        case 2: {std::stringstream out; out << pp->address; return out.str();}
        case 3: return long2string(pp->prefixLength);
        case 4: {std::stringstream out; out << pp->nextHop; return out.str();}
        case 5: return ulong2string(pp->metric);
        default: return "";
    }
}

bool RIPEntryDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RIPEntry *pp = (RIPEntry *)object; (void)pp;
    switch (field) {
        case 0: pp->addressFamilyId = string2ulong(value); return true;
        case 1: pp->routeTag = string2ulong(value); return true;
        case 3: pp->prefixLength = string2long(value); return true;
        case 5: pp->metric = string2ulong(value); return true;
        default: return false;
    }
}

const char *RIPEntryDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2: return opp_typename(typeid(IPvXAddress));
        case 4: return opp_typename(typeid(IPvXAddress));
        default: return NULL;
    };
}

void *RIPEntryDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RIPEntry *pp = (RIPEntry *)object; (void)pp;
    switch (field) {
        case 2: return (void *)(&pp->address); break;
        case 4: return (void *)(&pp->nextHop); break;
        default: return NULL;
    }
}

Register_Class(RIPPacket);

RIPPacket::RIPPacket(const char *name, int kind) : ::cPacket(name,kind)
{
    this->command_var = 0;
    entry_arraysize = 0;
    this->entry_var = 0;
}

RIPPacket::RIPPacket(const RIPPacket& other) : ::cPacket(other)
{
    entry_arraysize = 0;
    this->entry_var = 0;
    copy(other);
}

RIPPacket::~RIPPacket()
{
    delete [] entry_var;
}

RIPPacket& RIPPacket::operator=(const RIPPacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void RIPPacket::copy(const RIPPacket& other)
{
    this->command_var = other.command_var;
    delete [] this->entry_var;
    this->entry_var = (other.entry_arraysize==0) ? NULL : new RIPEntry[other.entry_arraysize];
    entry_arraysize = other.entry_arraysize;
    for (unsigned int i=0; i<entry_arraysize; i++)
        this->entry_var[i] = other.entry_var[i];
}

void RIPPacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->command_var);
    b->pack(entry_arraysize);
    doPacking(b,this->entry_var,entry_arraysize);
}

void RIPPacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->command_var);
    delete [] this->entry_var;
    b->unpack(entry_arraysize);
    if (entry_arraysize==0) {
        this->entry_var = 0;
    } else {
        this->entry_var = new RIPEntry[entry_arraysize];
        doUnpacking(b,this->entry_var,entry_arraysize);
    }
}

unsigned char RIPPacket::getCommand() const
{
    return command_var;
}

void RIPPacket::setCommand(unsigned char command)
{
    this->command_var = command;
}

void RIPPacket::setEntryArraySize(unsigned int size)
{
    RIPEntry *entry_var2 = (size==0) ? NULL : new RIPEntry[size];
    unsigned int sz = entry_arraysize < size ? entry_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        entry_var2[i] = this->entry_var[i];
    entry_arraysize = size;
    delete [] this->entry_var;
    this->entry_var = entry_var2;
}

unsigned int RIPPacket::getEntryArraySize() const
{
    return entry_arraysize;
}

RIPEntry& RIPPacket::getEntry(unsigned int k)
{
    if (k>=entry_arraysize) throw cRuntimeError("Array of size %d indexed by %d", entry_arraysize, k);
    return entry_var[k];
}

void RIPPacket::setEntry(unsigned int k, const RIPEntry& entry)
{
    if (k>=entry_arraysize) throw cRuntimeError("Array of size %d indexed by %d", entry_arraysize, k);
    this->entry_var[k] = entry;
}

class RIPPacketDescriptor : public cClassDescriptor
{
  public:
    RIPPacketDescriptor();
    virtual ~RIPPacketDescriptor();

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

Register_ClassDescriptor(RIPPacketDescriptor);

RIPPacketDescriptor::RIPPacketDescriptor() : cClassDescriptor("RIPPacket", "cPacket")
{
}

RIPPacketDescriptor::~RIPPacketDescriptor()
{
}

bool RIPPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<RIPPacket *>(obj)!=NULL;
}

const char *RIPPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int RIPPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int RIPPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *RIPPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "command",
        "entry",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int RIPPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='c' && strcmp(fieldName, "command")==0) return base+0;
    if (fieldName[0]=='e' && strcmp(fieldName, "entry")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *RIPPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "unsigned char",
        "RIPEntry",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *RIPPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0:
            if (!strcmp(propertyname,"enum")) return "RIPCommand";
            return NULL;
        default: return NULL;
    }
}

int RIPPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    RIPPacket *pp = (RIPPacket *)object; (void)pp;
    switch (field) {
        case 1: return pp->getEntryArraySize();
        default: return 0;
    }
}

std::string RIPPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    RIPPacket *pp = (RIPPacket *)object; (void)pp;
    switch (field) {
        case 0: return ulong2string(pp->getCommand());
        case 1: {std::stringstream out; out << pp->getEntry(i); return out.str();}
        default: return "";
    }
}

bool RIPPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    RIPPacket *pp = (RIPPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setCommand(string2ulong(value)); return true;
        default: return false;
    }
}

const char *RIPPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(RIPEntry));
        default: return NULL;
    };
}

void *RIPPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    RIPPacket *pp = (RIPPacket *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getEntry(i)); break;
        default: return NULL;
    }
}


