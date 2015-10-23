//
// Generated file, do not edit! Created by nedtool 4.6 from linklayer/lmac/LMacFrame.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LMacFrame_m.h"

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

Register_Class(LMacFrame);

LMacFrame::LMacFrame(const char *name, int kind) : ::inet::MACFrameBase(name,kind)
{
    this->mySlot_var = 0;
    occupiedSlots_arraysize = 0;
    this->occupiedSlots_var = 0;
}

LMacFrame::LMacFrame(const LMacFrame& other) : ::inet::MACFrameBase(other)
{
    occupiedSlots_arraysize = 0;
    this->occupiedSlots_var = 0;
    copy(other);
}

LMacFrame::~LMacFrame()
{
    delete [] occupiedSlots_var;
}

LMacFrame& LMacFrame::operator=(const LMacFrame& other)
{
    if (this==&other) return *this;
    ::inet::MACFrameBase::operator=(other);
    copy(other);
    return *this;
}

void LMacFrame::copy(const LMacFrame& other)
{
    this->mySlot_var = other.mySlot_var;
    delete [] this->occupiedSlots_var;
    this->occupiedSlots_var = (other.occupiedSlots_arraysize==0) ? NULL : new MACAddress[other.occupiedSlots_arraysize];
    occupiedSlots_arraysize = other.occupiedSlots_arraysize;
    for (unsigned int i=0; i<occupiedSlots_arraysize; i++)
        this->occupiedSlots_var[i] = other.occupiedSlots_var[i];
}

void LMacFrame::parsimPack(cCommBuffer *b)
{
    ::inet::MACFrameBase::parsimPack(b);
    doPacking(b,this->mySlot_var);
    b->pack(occupiedSlots_arraysize);
    doPacking(b,this->occupiedSlots_var,occupiedSlots_arraysize);
}

void LMacFrame::parsimUnpack(cCommBuffer *b)
{
    ::inet::MACFrameBase::parsimUnpack(b);
    doUnpacking(b,this->mySlot_var);
    delete [] this->occupiedSlots_var;
    b->unpack(occupiedSlots_arraysize);
    if (occupiedSlots_arraysize==0) {
        this->occupiedSlots_var = 0;
    } else {
        this->occupiedSlots_var = new MACAddress[occupiedSlots_arraysize];
        doUnpacking(b,this->occupiedSlots_var,occupiedSlots_arraysize);
    }
}

int LMacFrame::getMySlot() const
{
    return mySlot_var;
}

void LMacFrame::setMySlot(int mySlot)
{
    this->mySlot_var = mySlot;
}

void LMacFrame::setOccupiedSlotsArraySize(unsigned int size)
{
    MACAddress *occupiedSlots_var2 = (size==0) ? NULL : new MACAddress[size];
    unsigned int sz = occupiedSlots_arraysize < size ? occupiedSlots_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        occupiedSlots_var2[i] = this->occupiedSlots_var[i];
    occupiedSlots_arraysize = size;
    delete [] this->occupiedSlots_var;
    this->occupiedSlots_var = occupiedSlots_var2;
}

unsigned int LMacFrame::getOccupiedSlotsArraySize() const
{
    return occupiedSlots_arraysize;
}

MACAddress& LMacFrame::getOccupiedSlots(unsigned int k)
{
    if (k>=occupiedSlots_arraysize) throw cRuntimeError("Array of size %d indexed by %d", occupiedSlots_arraysize, k);
    return occupiedSlots_var[k];
}

void LMacFrame::setOccupiedSlots(unsigned int k, const MACAddress& occupiedSlots)
{
    if (k>=occupiedSlots_arraysize) throw cRuntimeError("Array of size %d indexed by %d", occupiedSlots_arraysize, k);
    this->occupiedSlots_var[k] = occupiedSlots;
}

class LMacFrameDescriptor : public cClassDescriptor
{
  public:
    LMacFrameDescriptor();
    virtual ~LMacFrameDescriptor();

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

Register_ClassDescriptor(LMacFrameDescriptor);

LMacFrameDescriptor::LMacFrameDescriptor() : cClassDescriptor("inet::LMacFrame", "inet::MACFrameBase")
{
}

LMacFrameDescriptor::~LMacFrameDescriptor()
{
}

bool LMacFrameDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LMacFrame *>(obj)!=NULL;
}

const char *LMacFrameDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LMacFrameDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int LMacFrameDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *LMacFrameDescriptor::getFieldName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldNames[] = {
        "mySlot",
        "occupiedSlots",
    };
    return (field>=0 && field<2) ? fieldNames[field] : NULL;
}

int LMacFrameDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "mySlot")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "occupiedSlots")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LMacFrameDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "MACAddress",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *LMacFrameDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LMacFrameDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LMacFrame *pp = (LMacFrame *)object; (void)pp;
    switch (field) {
        case 1: return pp->getOccupiedSlotsArraySize();
        default: return 0;
    }
}

std::string LMacFrameDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LMacFrame *pp = (LMacFrame *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getMySlot());
        case 1: {std::stringstream out; out << pp->getOccupiedSlots(i); return out.str();}
        default: return "";
    }
}

bool LMacFrameDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LMacFrame *pp = (LMacFrame *)object; (void)pp;
    switch (field) {
        case 0: pp->setMySlot(string2long(value)); return true;
        default: return false;
    }
}

const char *LMacFrameDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    switch (field) {
        case 1: return opp_typename(typeid(MACAddress));
        default: return NULL;
    };
}

void *LMacFrameDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LMacFrame *pp = (LMacFrame *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getOccupiedSlots(i)); break;
        default: return NULL;
    }
}

} // namespace inet

