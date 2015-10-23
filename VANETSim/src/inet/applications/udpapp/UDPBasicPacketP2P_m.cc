//
// Generated file, do not edit! Created by nedtool 4.6 from applications/udpapp/UDPBasicPacketP2P.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "UDPBasicPacketP2P_m.h"

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

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::PacketType");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::PacketType"));
    e->insert(REQUEST, "REQUEST");
    e->insert(SEGMEN, "SEGMEN");
    e->insert(GENERAL, "GENERAL");
    e->insert(CONFIRMATION, "CONFIRMATION");
);

Register_Class(UDPBasicPacketP2P);

UDPBasicPacketP2P::UDPBasicPacketP2P(const char *name, int kind) : ::cPacket(name,kind)
{
    this->type_var = 0;
    this->segmentRequest_var = -1;
    this->totalSize_var = 0;
    this->segmentId_var = 0;
    this->subSegmentId_var = 0;
    subSegmentRequest_arraysize = 0;
    this->subSegmentRequest_var = 0;
    mapSegments_arraysize = 0;
    this->mapSegments_var = 0;
}

UDPBasicPacketP2P::UDPBasicPacketP2P(const UDPBasicPacketP2P& other) : ::cPacket(other)
{
    subSegmentRequest_arraysize = 0;
    this->subSegmentRequest_var = 0;
    mapSegments_arraysize = 0;
    this->mapSegments_var = 0;
    copy(other);
}

UDPBasicPacketP2P::~UDPBasicPacketP2P()
{
    delete [] subSegmentRequest_var;
    delete [] mapSegments_var;
}

UDPBasicPacketP2P& UDPBasicPacketP2P::operator=(const UDPBasicPacketP2P& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void UDPBasicPacketP2P::copy(const UDPBasicPacketP2P& other)
{
    this->nodeId_var = other.nodeId_var;
    this->destination_var = other.destination_var;
    this->type_var = other.type_var;
    this->segmentRequest_var = other.segmentRequest_var;
    this->totalSize_var = other.totalSize_var;
    this->segmentId_var = other.segmentId_var;
    this->subSegmentId_var = other.subSegmentId_var;
    delete [] this->subSegmentRequest_var;
    this->subSegmentRequest_var = (other.subSegmentRequest_arraysize==0) ? NULL : new uint16_t[other.subSegmentRequest_arraysize];
    subSegmentRequest_arraysize = other.subSegmentRequest_arraysize;
    for (unsigned int i=0; i<subSegmentRequest_arraysize; i++)
        this->subSegmentRequest_var[i] = other.subSegmentRequest_var[i];
    delete [] this->mapSegments_var;
    this->mapSegments_var = (other.mapSegments_arraysize==0) ? NULL : new char[other.mapSegments_arraysize];
    mapSegments_arraysize = other.mapSegments_arraysize;
    for (unsigned int i=0; i<mapSegments_arraysize; i++)
        this->mapSegments_var[i] = other.mapSegments_var[i];
}

void UDPBasicPacketP2P::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->nodeId_var);
    doPacking(b,this->destination_var);
    doPacking(b,this->type_var);
    doPacking(b,this->segmentRequest_var);
    doPacking(b,this->totalSize_var);
    doPacking(b,this->segmentId_var);
    doPacking(b,this->subSegmentId_var);
    b->pack(subSegmentRequest_arraysize);
    doPacking(b,this->subSegmentRequest_var,subSegmentRequest_arraysize);
    b->pack(mapSegments_arraysize);
    doPacking(b,this->mapSegments_var,mapSegments_arraysize);
}

void UDPBasicPacketP2P::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->nodeId_var);
    doUnpacking(b,this->destination_var);
    doUnpacking(b,this->type_var);
    doUnpacking(b,this->segmentRequest_var);
    doUnpacking(b,this->totalSize_var);
    doUnpacking(b,this->segmentId_var);
    doUnpacking(b,this->subSegmentId_var);
    delete [] this->subSegmentRequest_var;
    b->unpack(subSegmentRequest_arraysize);
    if (subSegmentRequest_arraysize==0) {
        this->subSegmentRequest_var = 0;
    } else {
        this->subSegmentRequest_var = new uint16_t[subSegmentRequest_arraysize];
        doUnpacking(b,this->subSegmentRequest_var,subSegmentRequest_arraysize);
    }
    delete [] this->mapSegments_var;
    b->unpack(mapSegments_arraysize);
    if (mapSegments_arraysize==0) {
        this->mapSegments_var = 0;
    } else {
        this->mapSegments_var = new char[mapSegments_arraysize];
        doUnpacking(b,this->mapSegments_var,mapSegments_arraysize);
    }
}

L3Address& UDPBasicPacketP2P::getNodeId()
{
    return nodeId_var;
}

void UDPBasicPacketP2P::setNodeId(const L3Address& nodeId)
{
    this->nodeId_var = nodeId;
}

L3Address& UDPBasicPacketP2P::getDestination()
{
    return destination_var;
}

void UDPBasicPacketP2P::setDestination(const L3Address& destination)
{
    this->destination_var = destination;
}

int UDPBasicPacketP2P::getType() const
{
    return type_var;
}

void UDPBasicPacketP2P::setType(int type)
{
    this->type_var = type;
}

int64_t UDPBasicPacketP2P::getSegmentRequest() const
{
    return segmentRequest_var;
}

void UDPBasicPacketP2P::setSegmentRequest(int64_t segmentRequest)
{
    this->segmentRequest_var = segmentRequest;
}

uint64_t UDPBasicPacketP2P::getTotalSize() const
{
    return totalSize_var;
}

void UDPBasicPacketP2P::setTotalSize(uint64_t totalSize)
{
    this->totalSize_var = totalSize;
}

uint64_t UDPBasicPacketP2P::getSegmentId() const
{
    return segmentId_var;
}

void UDPBasicPacketP2P::setSegmentId(uint64_t segmentId)
{
    this->segmentId_var = segmentId;
}

uint16_t UDPBasicPacketP2P::getSubSegmentId() const
{
    return subSegmentId_var;
}

void UDPBasicPacketP2P::setSubSegmentId(uint16_t subSegmentId)
{
    this->subSegmentId_var = subSegmentId;
}

void UDPBasicPacketP2P::setSubSegmentRequestArraySize(unsigned int size)
{
    uint16_t *subSegmentRequest_var2 = (size==0) ? NULL : new uint16_t[size];
    unsigned int sz = subSegmentRequest_arraysize < size ? subSegmentRequest_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        subSegmentRequest_var2[i] = this->subSegmentRequest_var[i];
    for (unsigned int i=sz; i<size; i++)
        subSegmentRequest_var2[i] = 0;
    subSegmentRequest_arraysize = size;
    delete [] this->subSegmentRequest_var;
    this->subSegmentRequest_var = subSegmentRequest_var2;
}

unsigned int UDPBasicPacketP2P::getSubSegmentRequestArraySize() const
{
    return subSegmentRequest_arraysize;
}

uint16_t UDPBasicPacketP2P::getSubSegmentRequest(unsigned int k) const
{
    if (k>=subSegmentRequest_arraysize) throw cRuntimeError("Array of size %d indexed by %d", subSegmentRequest_arraysize, k);
    return subSegmentRequest_var[k];
}

void UDPBasicPacketP2P::setSubSegmentRequest(unsigned int k, uint16_t subSegmentRequest)
{
    if (k>=subSegmentRequest_arraysize) throw cRuntimeError("Array of size %d indexed by %d", subSegmentRequest_arraysize, k);
    this->subSegmentRequest_var[k] = subSegmentRequest;
}

void UDPBasicPacketP2P::setMapSegmentsArraySize(unsigned int size)
{
    char *mapSegments_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = mapSegments_arraysize < size ? mapSegments_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        mapSegments_var2[i] = this->mapSegments_var[i];
    for (unsigned int i=sz; i<size; i++)
        mapSegments_var2[i] = 0;
    mapSegments_arraysize = size;
    delete [] this->mapSegments_var;
    this->mapSegments_var = mapSegments_var2;
}

unsigned int UDPBasicPacketP2P::getMapSegmentsArraySize() const
{
    return mapSegments_arraysize;
}

char UDPBasicPacketP2P::getMapSegments(unsigned int k) const
{
    if (k>=mapSegments_arraysize) throw cRuntimeError("Array of size %d indexed by %d", mapSegments_arraysize, k);
    return mapSegments_var[k];
}

void UDPBasicPacketP2P::setMapSegments(unsigned int k, char mapSegments)
{
    if (k>=mapSegments_arraysize) throw cRuntimeError("Array of size %d indexed by %d", mapSegments_arraysize, k);
    this->mapSegments_var[k] = mapSegments;
}

class UDPBasicPacketP2PDescriptor : public cClassDescriptor
{
  public:
    UDPBasicPacketP2PDescriptor();
    virtual ~UDPBasicPacketP2PDescriptor();

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

Register_ClassDescriptor(UDPBasicPacketP2PDescriptor);

UDPBasicPacketP2PDescriptor::UDPBasicPacketP2PDescriptor() : cClassDescriptor("inet::UDPBasicPacketP2P", "cPacket")
{
}

UDPBasicPacketP2PDescriptor::~UDPBasicPacketP2PDescriptor()
{
}

bool UDPBasicPacketP2PDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPBasicPacketP2P *>(obj)!=NULL;
}

const char *UDPBasicPacketP2PDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPBasicPacketP2PDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 9+basedesc->getFieldCount(object) : 9;
}

unsigned int UDPBasicPacketP2PDescriptor::getFieldTypeFlags(void *object, int field) const
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
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<9) ? fieldTypeFlags[field] : 0;
}

const char *UDPBasicPacketP2PDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nodeId",
        "destination",
        "type",
        "segmentRequest",
        "totalSize",
        "segmentId",
        "subSegmentId",
        "subSegmentRequest",
        "mapSegments",
    };
    return (field>=0 && field<9) ? fieldNames[field] : NULL;
}

int UDPBasicPacketP2PDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nodeId")==0) return base+0;
    if (fieldName[0]=='d' && strcmp(fieldName, "destination")==0) return base+1;
    if (fieldName[0]=='t' && strcmp(fieldName, "type")==0) return base+2;
    if (fieldName[0]=='s' && strcmp(fieldName, "segmentRequest")==0) return base+3;
    if (fieldName[0]=='t' && strcmp(fieldName, "totalSize")==0) return base+4;
    if (fieldName[0]=='s' && strcmp(fieldName, "segmentId")==0) return base+5;
    if (fieldName[0]=='s' && strcmp(fieldName, "subSegmentId")==0) return base+6;
    if (fieldName[0]=='s' && strcmp(fieldName, "subSegmentRequest")==0) return base+7;
    if (fieldName[0]=='m' && strcmp(fieldName, "mapSegments")==0) return base+8;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPBasicPacketP2PDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "L3Address",
        "L3Address",
        "int",
        "int64_t",
        "uint64_t",
        "uint64_t",
        "uint16_t",
        "uint16_t",
        "char",
    };
    return (field>=0 && field<9) ? fieldTypeStrings[field] : NULL;
}

const char *UDPBasicPacketP2PDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldProperty(object, field, propertyname);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 2:
            if (!strcmp(propertyname,"enum")) return "inet::PacketType";
            return NULL;
        default: return NULL;
    }
}

int UDPBasicPacketP2PDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPBasicPacketP2P *pp = (UDPBasicPacketP2P *)object; (void)pp;
    switch (field) {
        case 7: return pp->getSubSegmentRequestArraySize();
        case 8: return pp->getMapSegmentsArraySize();
        default: return 0;
    }
}

std::string UDPBasicPacketP2PDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPBasicPacketP2P *pp = (UDPBasicPacketP2P *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNodeId(); return out.str();}
        case 1: {std::stringstream out; out << pp->getDestination(); return out.str();}
        case 2: return long2string(pp->getType());
        case 3: return int642string(pp->getSegmentRequest());
        case 4: return uint642string(pp->getTotalSize());
        case 5: return uint642string(pp->getSegmentId());
        case 6: return ulong2string(pp->getSubSegmentId());
        case 7: return ulong2string(pp->getSubSegmentRequest(i));
        case 8: return long2string(pp->getMapSegments(i));
        default: return "";
    }
}

bool UDPBasicPacketP2PDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPBasicPacketP2P *pp = (UDPBasicPacketP2P *)object; (void)pp;
    switch (field) {
        case 2: pp->setType(string2long(value)); return true;
        case 3: pp->setSegmentRequest(string2int64(value)); return true;
        case 4: pp->setTotalSize(string2uint64(value)); return true;
        case 5: pp->setSegmentId(string2uint64(value)); return true;
        case 6: pp->setSubSegmentId(string2ulong(value)); return true;
        case 7: pp->setSubSegmentRequest(i,string2ulong(value)); return true;
        case 8: pp->setMapSegments(i,string2long(value)); return true;
        default: return false;
    }
}

const char *UDPBasicPacketP2PDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 0: return opp_typename(typeid(L3Address));
        case 1: return opp_typename(typeid(L3Address));
        default: return NULL;
    };
}

void *UDPBasicPacketP2PDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPBasicPacketP2P *pp = (UDPBasicPacketP2P *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNodeId()); break;
        case 1: return (void *)(&pp->getDestination()); break;
        default: return NULL;
    }
}

Register_Class(UDPBasicPacketP2PNotification);

UDPBasicPacketP2PNotification::UDPBasicPacketP2PNotification(const char *name, int kind) : ::cPacket(name,kind)
{
    this->seqnum_var = 0;
    this->mapSegmentsSize_var = 0;
    mapSegments_arraysize = 0;
    this->mapSegments_var = 0;
}

UDPBasicPacketP2PNotification::UDPBasicPacketP2PNotification(const UDPBasicPacketP2PNotification& other) : ::cPacket(other)
{
    mapSegments_arraysize = 0;
    this->mapSegments_var = 0;
    copy(other);
}

UDPBasicPacketP2PNotification::~UDPBasicPacketP2PNotification()
{
    delete [] mapSegments_var;
}

UDPBasicPacketP2PNotification& UDPBasicPacketP2PNotification::operator=(const UDPBasicPacketP2PNotification& other)
{
    if (this==&other) return *this;
    ::cPacket::operator=(other);
    copy(other);
    return *this;
}

void UDPBasicPacketP2PNotification::copy(const UDPBasicPacketP2PNotification& other)
{
    this->nodeId_var = other.nodeId_var;
    this->seqnum_var = other.seqnum_var;
    this->mapSegmentsSize_var = other.mapSegmentsSize_var;
    delete [] this->mapSegments_var;
    this->mapSegments_var = (other.mapSegments_arraysize==0) ? NULL : new char[other.mapSegments_arraysize];
    mapSegments_arraysize = other.mapSegments_arraysize;
    for (unsigned int i=0; i<mapSegments_arraysize; i++)
        this->mapSegments_var[i] = other.mapSegments_var[i];
}

void UDPBasicPacketP2PNotification::parsimPack(cCommBuffer *b)
{
    ::cPacket::parsimPack(b);
    doPacking(b,this->nodeId_var);
    doPacking(b,this->seqnum_var);
    doPacking(b,this->mapSegmentsSize_var);
    b->pack(mapSegments_arraysize);
    doPacking(b,this->mapSegments_var,mapSegments_arraysize);
}

void UDPBasicPacketP2PNotification::parsimUnpack(cCommBuffer *b)
{
    ::cPacket::parsimUnpack(b);
    doUnpacking(b,this->nodeId_var);
    doUnpacking(b,this->seqnum_var);
    doUnpacking(b,this->mapSegmentsSize_var);
    delete [] this->mapSegments_var;
    b->unpack(mapSegments_arraysize);
    if (mapSegments_arraysize==0) {
        this->mapSegments_var = 0;
    } else {
        this->mapSegments_var = new char[mapSegments_arraysize];
        doUnpacking(b,this->mapSegments_var,mapSegments_arraysize);
    }
}

L3Address& UDPBasicPacketP2PNotification::getNodeId()
{
    return nodeId_var;
}

void UDPBasicPacketP2PNotification::setNodeId(const L3Address& nodeId)
{
    this->nodeId_var = nodeId;
}

uint64_t UDPBasicPacketP2PNotification::getSeqnum() const
{
    return seqnum_var;
}

void UDPBasicPacketP2PNotification::setSeqnum(uint64_t seqnum)
{
    this->seqnum_var = seqnum;
}

int UDPBasicPacketP2PNotification::getMapSegmentsSize() const
{
    return mapSegmentsSize_var;
}

void UDPBasicPacketP2PNotification::setMapSegmentsSize(int mapSegmentsSize)
{
    this->mapSegmentsSize_var = mapSegmentsSize;
}

void UDPBasicPacketP2PNotification::setMapSegmentsArraySize(unsigned int size)
{
    char *mapSegments_var2 = (size==0) ? NULL : new char[size];
    unsigned int sz = mapSegments_arraysize < size ? mapSegments_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        mapSegments_var2[i] = this->mapSegments_var[i];
    for (unsigned int i=sz; i<size; i++)
        mapSegments_var2[i] = 0;
    mapSegments_arraysize = size;
    delete [] this->mapSegments_var;
    this->mapSegments_var = mapSegments_var2;
}

unsigned int UDPBasicPacketP2PNotification::getMapSegmentsArraySize() const
{
    return mapSegments_arraysize;
}

char UDPBasicPacketP2PNotification::getMapSegments(unsigned int k) const
{
    if (k>=mapSegments_arraysize) throw cRuntimeError("Array of size %d indexed by %d", mapSegments_arraysize, k);
    return mapSegments_var[k];
}

void UDPBasicPacketP2PNotification::setMapSegments(unsigned int k, char mapSegments)
{
    if (k>=mapSegments_arraysize) throw cRuntimeError("Array of size %d indexed by %d", mapSegments_arraysize, k);
    this->mapSegments_var[k] = mapSegments;
}

class UDPBasicPacketP2PNotificationDescriptor : public cClassDescriptor
{
  public:
    UDPBasicPacketP2PNotificationDescriptor();
    virtual ~UDPBasicPacketP2PNotificationDescriptor();

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

Register_ClassDescriptor(UDPBasicPacketP2PNotificationDescriptor);

UDPBasicPacketP2PNotificationDescriptor::UDPBasicPacketP2PNotificationDescriptor() : cClassDescriptor("inet::UDPBasicPacketP2PNotification", "cPacket")
{
}

UDPBasicPacketP2PNotificationDescriptor::~UDPBasicPacketP2PNotificationDescriptor()
{
}

bool UDPBasicPacketP2PNotificationDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<UDPBasicPacketP2PNotification *>(obj)!=NULL;
}

const char *UDPBasicPacketP2PNotificationDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int UDPBasicPacketP2PNotificationDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 4+basedesc->getFieldCount(object) : 4;
}

unsigned int UDPBasicPacketP2PNotificationDescriptor::getFieldTypeFlags(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeFlags(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static unsigned int fieldTypeFlags[] = {
        FD_ISCOMPOUND,
        FD_ISEDITABLE,
        FD_ISEDITABLE,
        FD_ISARRAY | FD_ISEDITABLE,
    };
    return (field>=0 && field<4) ? fieldTypeFlags[field] : 0;
}

const char *UDPBasicPacketP2PNotificationDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "nodeId",
        "seqnum",
        "mapSegmentsSize",
        "mapSegments",
    };
    return (field>=0 && field<4) ? fieldNames[field] : NULL;
}

int UDPBasicPacketP2PNotificationDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='n' && strcmp(fieldName, "nodeId")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "seqnum")==0) return base+1;
    if (fieldName[0]=='m' && strcmp(fieldName, "mapSegmentsSize")==0) return base+2;
    if (fieldName[0]=='m' && strcmp(fieldName, "mapSegments")==0) return base+3;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *UDPBasicPacketP2PNotificationDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "L3Address",
        "uint64_t",
        "int",
        "char",
    };
    return (field>=0 && field<4) ? fieldTypeStrings[field] : NULL;
}

const char *UDPBasicPacketP2PNotificationDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int UDPBasicPacketP2PNotificationDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    UDPBasicPacketP2PNotification *pp = (UDPBasicPacketP2PNotification *)object; (void)pp;
    switch (field) {
        case 3: return pp->getMapSegmentsArraySize();
        default: return 0;
    }
}

std::string UDPBasicPacketP2PNotificationDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    UDPBasicPacketP2PNotification *pp = (UDPBasicPacketP2PNotification *)object; (void)pp;
    switch (field) {
        case 0: {std::stringstream out; out << pp->getNodeId(); return out.str();}
        case 1: return uint642string(pp->getSeqnum());
        case 2: return long2string(pp->getMapSegmentsSize());
        case 3: return long2string(pp->getMapSegments(i));
        default: return "";
    }
}

bool UDPBasicPacketP2PNotificationDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    UDPBasicPacketP2PNotification *pp = (UDPBasicPacketP2PNotification *)object; (void)pp;
    switch (field) {
        case 1: pp->setSeqnum(string2uint64(value)); return true;
        case 2: pp->setMapSegmentsSize(string2long(value)); return true;
        case 3: pp->setMapSegments(i,string2long(value)); return true;
        default: return false;
    }
}

const char *UDPBasicPacketP2PNotificationDescriptor::getFieldStructName(void *object, int field) const
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

void *UDPBasicPacketP2PNotificationDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    UDPBasicPacketP2PNotification *pp = (UDPBasicPacketP2PNotification *)object; (void)pp;
    switch (field) {
        case 0: return (void *)(&pp->getNodeId()); break;
        default: return NULL;
    }
}

} // namespace inet

