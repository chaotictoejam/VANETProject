//
// Generated file, do not edit! Created by nedtool 4.6 from inet/applications/packetdrill/PacketDrillInfo.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "PacketDrillInfo_m.h"

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

Register_Class(PacketDrillInfo);

PacketDrillInfo::PacketDrillInfo(const char *name, int kind) : ::cMessage(name,kind)
{
    this->scriptTime_var = 0;
    this->scriptTimeEnd_var = 0;
    this->offset_var = 0;
    this->timeType_var = 0;
    this->liveTime_var = 0;
}

PacketDrillInfo::PacketDrillInfo(const PacketDrillInfo& other) : ::cMessage(other)
{
    copy(other);
}

PacketDrillInfo::~PacketDrillInfo()
{
}

PacketDrillInfo& PacketDrillInfo::operator=(const PacketDrillInfo& other)
{
    if (this==&other) return *this;
    ::cMessage::operator=(other);
    copy(other);
    return *this;
}

void PacketDrillInfo::copy(const PacketDrillInfo& other)
{
    this->scriptTime_var = other.scriptTime_var;
    this->scriptTimeEnd_var = other.scriptTimeEnd_var;
    this->offset_var = other.offset_var;
    this->timeType_var = other.timeType_var;
    this->liveTime_var = other.liveTime_var;
}

void PacketDrillInfo::parsimPack(cCommBuffer *b)
{
    ::cMessage::parsimPack(b);
    doPacking(b,this->scriptTime_var);
    doPacking(b,this->scriptTimeEnd_var);
    doPacking(b,this->offset_var);
    doPacking(b,this->timeType_var);
    doPacking(b,this->liveTime_var);
}

void PacketDrillInfo::parsimUnpack(cCommBuffer *b)
{
    ::cMessage::parsimUnpack(b);
    doUnpacking(b,this->scriptTime_var);
    doUnpacking(b,this->scriptTimeEnd_var);
    doUnpacking(b,this->offset_var);
    doUnpacking(b,this->timeType_var);
    doUnpacking(b,this->liveTime_var);
}

simtime_t PacketDrillInfo::getScriptTime() const
{
    return scriptTime_var;
}

void PacketDrillInfo::setScriptTime(simtime_t scriptTime)
{
    this->scriptTime_var = scriptTime;
}

simtime_t PacketDrillInfo::getScriptTimeEnd() const
{
    return scriptTimeEnd_var;
}

void PacketDrillInfo::setScriptTimeEnd(simtime_t scriptTimeEnd)
{
    this->scriptTimeEnd_var = scriptTimeEnd;
}

simtime_t PacketDrillInfo::getOffset() const
{
    return offset_var;
}

void PacketDrillInfo::setOffset(simtime_t offset)
{
    this->offset_var = offset;
}

uint16 PacketDrillInfo::getTimeType() const
{
    return timeType_var;
}

void PacketDrillInfo::setTimeType(uint16 timeType)
{
    this->timeType_var = timeType;
}

simtime_t PacketDrillInfo::getLiveTime() const
{
    return liveTime_var;
}

void PacketDrillInfo::setLiveTime(simtime_t liveTime)
{
    this->liveTime_var = liveTime;
}

class PacketDrillInfoDescriptor : public cClassDescriptor
{
  public:
    PacketDrillInfoDescriptor();
    virtual ~PacketDrillInfoDescriptor();

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

Register_ClassDescriptor(PacketDrillInfoDescriptor);

PacketDrillInfoDescriptor::PacketDrillInfoDescriptor() : cClassDescriptor("PacketDrillInfo", "cMessage")
{
}

PacketDrillInfoDescriptor::~PacketDrillInfoDescriptor()
{
}

bool PacketDrillInfoDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<PacketDrillInfo *>(obj)!=NULL;
}

const char *PacketDrillInfoDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int PacketDrillInfoDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 5+basedesc->getFieldCount(object) : 5;
}

unsigned int PacketDrillInfoDescriptor::getFieldTypeFlags(void *object, int field) const
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
    };
    return (field>=0 && field<5) ? fieldTypeFlags[field] : 0;
}

const char *PacketDrillInfoDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "scriptTime",
        "scriptTimeEnd",
        "offset",
        "timeType",
        "liveTime",
    };
    return (field>=0 && field<5) ? fieldNames[field] : NULL;
}

int PacketDrillInfoDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='s' && strcmp(fieldName, "scriptTime")==0) return base+0;
    if (fieldName[0]=='s' && strcmp(fieldName, "scriptTimeEnd")==0) return base+1;
    if (fieldName[0]=='o' && strcmp(fieldName, "offset")==0) return base+2;
    if (fieldName[0]=='t' && strcmp(fieldName, "timeType")==0) return base+3;
    if (fieldName[0]=='l' && strcmp(fieldName, "liveTime")==0) return base+4;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *PacketDrillInfoDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "simtime_t",
        "simtime_t",
        "simtime_t",
        "uint16",
        "simtime_t",
    };
    return (field>=0 && field<5) ? fieldTypeStrings[field] : NULL;
}

const char *PacketDrillInfoDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int PacketDrillInfoDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    PacketDrillInfo *pp = (PacketDrillInfo *)object; (void)pp;
    switch (field) {
        default: return 0;
    }
}

std::string PacketDrillInfoDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    PacketDrillInfo *pp = (PacketDrillInfo *)object; (void)pp;
    switch (field) {
        case 0: return double2string(pp->getScriptTime());
        case 1: return double2string(pp->getScriptTimeEnd());
        case 2: return double2string(pp->getOffset());
        case 3: return ulong2string(pp->getTimeType());
        case 4: return double2string(pp->getLiveTime());
        default: return "";
    }
}

bool PacketDrillInfoDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    PacketDrillInfo *pp = (PacketDrillInfo *)object; (void)pp;
    switch (field) {
        case 0: pp->setScriptTime(string2double(value)); return true;
        case 1: pp->setScriptTimeEnd(string2double(value)); return true;
        case 2: pp->setOffset(string2double(value)); return true;
        case 3: pp->setTimeType(string2ulong(value)); return true;
        case 4: pp->setLiveTime(string2double(value)); return true;
        default: return false;
    }
}

const char *PacketDrillInfoDescriptor::getFieldStructName(void *object, int field) const
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

void *PacketDrillInfoDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    PacketDrillInfo *pp = (PacketDrillInfo *)object; (void)pp;
    switch (field) {
        default: return NULL;
    }
}


