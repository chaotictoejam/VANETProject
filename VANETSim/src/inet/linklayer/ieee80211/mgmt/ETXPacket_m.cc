//
// Generated file, do not edit! Created by nedtool 4.6 from inet/linklayer/ieee80211/mgmt/ETXPacket.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "ETXPacket_m.h"

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

Register_Class(ETXBasePacket);

ETXBasePacket::ETXBasePacket(const char *name, int kind) : ::cPacket(name,kind)
{
}

ETXBasePacket::ETXBasePacket(const ETXBasePacket& other) : ::cPacket(other)
{
    copy(other);
}

ETXBasePacket::~ETXBasePacket()
{
}

ETXBasePacket& ETXBasePacket::operator=(const ETXBasePacket& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void ETXBasePacket::copy(const ETXBasePacket& other)
{
    this->source_var = other.source_var;
    this->dest_var = other.dest_var;
}

void ETXBasePacket::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->source_var);
    doPacking(b,this->dest_var);
}

void ETXBasePacket::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->source_var);
    doUnpacking(b,this->dest_var);
}

MACAddress& ETXBasePacket::getSource()
{
    return source_var;
}

void ETXBasePacket::setSource(const MACAddress& source)
{
    this->source_var = source;
}

MACAddress& ETXBasePacket::getDest()
{
    return dest_var;
}

void ETXBasePacket::setDest(const MACAddress& dest)
{
    this->dest_var = dest;
}

class ETXBasePacketDescriptor : public cClassDescriptor
{
  public:
    ETXBasePacketDescriptor();
    virtual ~ETXBasePacketDescriptor();

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

Register_ClassDescriptor(ETXBasePacketDescriptor);

ETXBasePacketDescriptor::ETXBasePacketDescriptor() : cClassDescriptor("ETXBasePacket", "cPacket")
{
}

ETXBasePacketDescriptor::~ETXBasePacketDescriptor()
{
}

bool ETXBasePacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<ETXBasePacket *>(obj)!=NULL;
}

const char *ETXBasePacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int ETXBasePacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int ETXBasePacketDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *ETXBasePacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "source",
        "dest",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int ETXBasePacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "source")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "dest")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *ETXBasePacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "MACAddress",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *ETXBasePacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int ETXBasePacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    ETXBasePacket *pp = (ETXBasePacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string ETXBasePacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    ETXBasePacket *pp = (ETXBasePacket *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getSource(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDest(); return out.str();}
        default: return "";
    }
}

bool ETXBasePacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    ETXBasePacket *pp = (ETXBasePacket *)object; (void)pp;
    switch (field) {
        default: return false;
    }
}

const char *ETXBasePacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(MACAddress));
        case 1: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *ETXBasePacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    ETXBasePacket *pp = (ETXBasePacket *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getSource()); break;
        case 1: return (void *)(&pp->getDest()); break;
        default: return NULL;
    }
}

Register_Class(MACETXPacket);

MACETXPacket::MACETXPacket(const char *name, int kind) : ::ETXBasePacket(name,kind)
{
    this->setByteLength(100);

    neighbors_arraysize = 0;
    this->neighbors_var = 0;
    recPackets_arraysize = 0;
    this->recPackets_var = 0;
}

MACETXPacket::MACETXPacket(const MACETXPacket& other) : ::ETXBasePacket(other)
{
    neighbors_arraysize = 0;
    this->neighbors_var = 0;
    recPackets_arraysize = 0;
    this->recPackets_var = 0;
    copy(other);
}

MACETXPacket::~MACETXPacket()
{
    delete [] neighbors_var;
    delete [] recPackets_var;
}

MACETXPacket& MACETXPacket::operator=(const MACETXPacket& other)
{
    if (this==&other) return *this;
    ::ETXBasePacket::operator=(other);
    copy(other);
    return *this;
}

void MACETXPacket::copy(const MACETXPacket& other)
{
    delete [] this->neighbors_var;
    this->neighbors_var = (other.neighbors_arraysize==0) ? NULL : new MACAddress[other.neighbors_arraysize];
    neighbors_arraysize = other.neighbors_arraysize;
    for (unsigned int i=0; i<neighbors_arraysize; i++)
        this->neighbors_var[i] = other.neighbors_var[i];
    delete [] this->recPackets_var;
    this->recPackets_var = (other.recPackets_arraysize==0) ? NULL : new int[other.recPackets_arraysize];
    recPackets_arraysize = other.recPackets_arraysize;
    for (unsigned int i=0; i<recPackets_arraysize; i++)
        this->recPackets_var[i] = other.recPackets_var[i];
}

void MACETXPacket::parsimPack(cCommBuffer *b)
{
    ::ETXBasePacket::parsimPack(b);
    b->pack(neighbors_arraysize);
    doPacking(b,this->neighbors_var,neighbors_arraysize);
    b->pack(recPackets_arraysize);
    doPacking(b,this->recPackets_var,recPackets_arraysize);
}

void MACETXPacket::parsimUnpack(cCommBuffer *b)
{
    ::ETXBasePacket::parsimUnpack(b);
    delete [] this->neighbors_var;
    b->unpack(neighbors_arraysize);
    if (neighbors_arraysize==0) {
        this->neighbors_var = 0;
    } else {
        this->neighbors_var = new MACAddress[neighbors_arraysize];
        doUnpacking(b,this->neighbors_var,neighbors_arraysize);
    }
    delete [] this->recPackets_var;
    b->unpack(recPackets_arraysize);
    if (recPackets_arraysize==0) {
        this->recPackets_var = 0;
    } else {
        this->recPackets_var = new int[recPackets_arraysize];
        doUnpacking(b,this->recPackets_var,recPackets_arraysize);
    }
}

void MACETXPacket::setNeighborsArraySize(unsigned int size)
{
    MACAddress *neighbors_var2 = (size==0) ? NULL : new MACAddress[size];
    unsigned int sz = neighbors_arraysize < size ? neighbors_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        neighbors_var2[i] = this->neighbors_var[i];
    neighbors_arraysize = size;
    delete [] this->neighbors_var;
    this->neighbors_var = neighbors_var2;
}

unsigned int MACETXPacket::getNeighborsArraySize() const
{
    return neighbors_arraysize;
}

MACAddress& MACETXPacket::getNeighbors(unsigned int k)
{
    if (k>=neighbors_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighbors_arraysize, k);
    return neighbors_var[k];
}

void MACETXPacket::setNeighbors(unsigned int k, const MACAddress& neighbors)
{
    if (k>=neighbors_arraysize) throw cRuntimeError("Array of size %d indexed by %d", neighbors_arraysize, k);
    this->neighbors_var[k] = neighbors;
}

void MACETXPacket::setRecPacketsArraySize(unsigned int size)
{
    int *recPackets_var2 = (size==0) ? NULL : new int[size];
    unsigned int sz = recPackets_arraysize < size ? recPackets_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        recPackets_var2[i] = this->recPackets_var[i];
    for (unsigned int i=sz; i<size; i++)
        recPackets_var2[i] = 0;
    recPackets_arraysize = size;
    delete [] this->recPackets_var;
    this->recPackets_var = recPackets_var2;
}

unsigned int MACETXPacket::getRecPacketsArraySize() const
{
    return recPackets_arraysize;
}

int MACETXPacket::getRecPackets(unsigned int k) const
{
    if (k>=recPackets_arraysize) throw cRuntimeError("Array of size %d indexed by %d", recPackets_arraysize, k);
    return recPackets_var[k];
}

void MACETXPacket::setRecPackets(unsigned int k, int recPackets)
{
    if (k>=recPackets_arraysize) throw cRuntimeError("Array of size %d indexed by %d", recPackets_arraysize, k);
    this->recPackets_var[k] = recPackets;
}

class MACETXPacketDescriptor : public cClassDescriptor
{
  public:
    MACETXPacketDescriptor();
    virtual ~MACETXPacketDescriptor();

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

Register_ClassDescriptor(MACETXPacketDescriptor);

MACETXPacketDescriptor::MACETXPacketDescriptor() : cClassDescriptor("MACETXPacket", "ETXBasePacket")
{
}

MACETXPacketDescriptor::~MACETXPacketDescriptor()
{
}

bool MACETXPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MACETXPacket *>(obj)!=NULL;
}

const char *MACETXPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MACETXPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int MACETXPacketDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISARRAY | FD_ISCOMPOUND,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<2) ? fieldTypeFlags[field] : 0;
}

const char *MACETXPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "neighbors",
        "recPackets",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int MACETXPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "neighbors")==0) return base+0;
    if (fieldName[0]=='r' && strcmp(fieldName, "recPackets")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MACETXPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "MACAddress",
        "int",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *MACETXPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MACETXPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MACETXPacket *pp = (MACETXPacket *)object; (void)pp;
    switch (field) {
        case 0: return pp->getNeighborsArraySize();
        case 1: return pp->getRecPacketsArraySize();
        default: return 0;
    }
}

std::string MACETXPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MACETXPacket *pp = (MACETXPacket *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNeighbors(i); return out.str();}
        case 1: return long2string(pp->getRecPackets(i));
        default: return "";
    }
}

bool MACETXPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MACETXPacket *pp = (MACETXPacket *)object; (void)pp;
    switch (field) {
        case 1: pp->setRecPackets(i,string2long(value)); return true;
        default: return false;
    }
}

const char *MACETXPacketDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *MACETXPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MACETXPacket *pp = (MACETXPacket *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNeighbors(i)); break;
        default: return NULL;
    }
}

Register_Class(MACBwPacket);

MACBwPacket::MACBwPacket(const char *name, int kind) : ::ETXBasePacket(name,kind)
{
    this->type_var = 0;
    this->time_var = 0;
    this->index_var = 0;
}

MACBwPacket::MACBwPacket(const MACBwPacket& other) : ::ETXBasePacket(other)
{
    copy(other);
}

MACBwPacket::~MACBwPacket()
{
}

MACBwPacket& MACBwPacket::operator=(const MACBwPacket& other)
{
    if (this==&other) return *this;
    ::ETXBasePacket::operator=(other);
    copy(other);
    return *this;
}

void MACBwPacket::copy(const MACBwPacket& other)
{
    this->type_var = other.type_var;
    this->time_var = other.time_var;
    this->index_var = other.index_var;
}

void MACBwPacket::parsimPack(cCommBuffer *b)
{
    ::ETXBasePacket::parsimPack(b);
    doPacking(b,this->type_var);
    doPacking(b,this->time_var);
    doPacking(b,this->index_var);
}

void MACBwPacket::parsimUnpack(cCommBuffer *b)
{
    ::ETXBasePacket::parsimUnpack(b);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->time_var);
    doUnpacking(b,this->index_var);
}

int MACBwPacket::getType() const
{
    return type_var;
}

void MACBwPacket::setType(int type)
{
    this->type_var = type;
}

simtime_t MACBwPacket::getTime() const
{
    return time_var;
}

void MACBwPacket::setTime(simtime_t time)
{
    this->time_var = time;
}

unsigned long MACBwPacket::getIndex() const
{
    return index_var;
}

void MACBwPacket::setIndex(unsigned long index)
{
    this->index_var = index;
}

class MACBwPacketDescriptor : public cClassDescriptor
{
  public:
    MACBwPacketDescriptor();
    virtual ~MACBwPacketDescriptor();

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

Register_ClassDescriptor(MACBwPacketDescriptor);

MACBwPacketDescriptor::MACBwPacketDescriptor() : cClassDescriptor("MACBwPacket", "ETXBasePacket")
{
}

MACBwPacketDescriptor::~MACBwPacketDescriptor()
{
}

bool MACBwPacketDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<MACBwPacket *>(obj)!=NULL;
}

const char *MACBwPacketDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int MACBwPacketDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 3+basedesc->getFieldCount(object) : 3;
}

unsigned int MACBwPacketDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<3) ? fieldTypeFlags[field] : 0;
}

const char *MACBwPacketDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "type",
        "time",
        "index",
    };
    return (field>=0 && field<3) ? fieldNames[field] : NULL;
}

int MACBwPacketDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+0;
    if (fieldName[0]=='t' && strcmp(fieldName, "time")==0) return base+1;
    if (fieldName[0]=='i' && strcmp(fieldName, "index")==0) return base+2;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *MACBwPacketDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "simtime_t",
        "unsigned long",
    };
    return (field>=0 && field<3) ? fieldTypeStrings[field] : NULL;
}

const char *MACBwPacketDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int MACBwPacketDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    MACBwPacket *pp = (MACBwPacket *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string MACBwPacketDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    MACBwPacket *pp = (MACBwPacket *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getType());
        case 1: return double2string(pp->getTime());
        case 2: return ulong2string(pp->getIndex());
        default: return "";
    }
}

bool MACBwPacketDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    MACBwPacket *pp = (MACBwPacket *)object; (void)pp;
    switch (field) {
        case 0: pp->setType(string2long(value)); return true;
        case 1: pp->setTime(string2double(value)); return true;
        case 2: pp->setIndex(string2ulong(value)); return true;
        default: return false;
    }
}

const char *MACBwPacketDescriptor::getFieldStructName(void *object, int field) const
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

void *MACBwPacketDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    MACBwPacket *pp = (MACBwPacket *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


