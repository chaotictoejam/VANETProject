//
// Generated file, do not edit! Created by opp_msgc 4.4 from messages/LMacPkt.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "LMacPkt_m.h"

USING_NAMESPACE

// Template rule which fires if a struct or class doesn't have operator<<
template<typename T>
std::ostream& operator<<(std::ostream& out,const T&) {return out;}

// Another default rule (prevents compiler from choosing base class' doPacking())
template<typename T>
void doPacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doPacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}

template<typename T>
void doUnpacking(cCommBuffer *, T& t) {
    throw cRuntimeError("Parsim error: no doUnpacking() function for type %s or its base class (check .msg and _m.cc/h files!)",opp_typename(typeid(t)));
}




Register_Class(LMacPkt);

LMacPkt::LMacPkt(const char *name, int kind) : MacPkt(name,kind)
{
    this->mySlot_var = 0;
    occupiedSlots_arraysize = 0;
    this->occupiedSlots_var = 0;
}

LMacPkt::LMacPkt(const LMacPkt& other) : MacPkt(other)
{
    occupiedSlots_arraysize = 0;
    this->occupiedSlots_var = 0;
    copy(other);
}

LMacPkt::~LMacPkt()
{
    delete [] occupiedSlots_var;
}

LMacPkt& LMacPkt::operator=(const LMacPkt& other)
{
    if (this==&other) return *this;
    MacPkt::operator=(other);
    copy(other);
    return *this;
}

void LMacPkt::copy(const LMacPkt& other)
{
    this->mySlot_var = other.mySlot_var;
    delete [] this->occupiedSlots_var;
    this->occupiedSlots_var = (other.occupiedSlots_arraysize==0) ? NULL : new LAddress::L2Type[other.occupiedSlots_arraysize];
    occupiedSlots_arraysize = other.occupiedSlots_arraysize;
    for (unsigned int i=0; i<occupiedSlots_arraysize; i++)
        this->occupiedSlots_var[i] = other.occupiedSlots_var[i];
}

void LMacPkt::parsimPack(cCommBuffer *b)
{
    MacPkt::parsimPack(b);
    doPacking(b,this->mySlot_var);
    b->pack(occupiedSlots_arraysize);
    doPacking(b,this->occupiedSlots_var,occupiedSlots_arraysize);
}

void LMacPkt::parsimUnpack(cCommBuffer *b)
{
    MacPkt::parsimUnpack(b);
    doUnpacking(b,this->mySlot_var);
    delete [] this->occupiedSlots_var;
    b->unpack(occupiedSlots_arraysize);
    if (occupiedSlots_arraysize==0) {
        this->occupiedSlots_var = 0;
    } else {
        this->occupiedSlots_var = new LAddress::L2Type[occupiedSlots_arraysize];
        doUnpacking(b,this->occupiedSlots_var,occupiedSlots_arraysize);
    }
}

int LMacPkt::getMySlot() const
{
    return mySlot_var;
}

void LMacPkt::setMySlot(int mySlot)
{
    this->mySlot_var = mySlot;
}

void LMacPkt::setOccupiedSlotsArraySize(unsigned int size)
{
    LAddress::L2Type *occupiedSlots_var2 = (size==0) ? NULL : new LAddress::L2Type[size];
    unsigned int sz = occupiedSlots_arraysize < size ? occupiedSlots_arraysize : size;
    for (unsigned int i=0; i<sz; i++)
        occupiedSlots_var2[i] = this->occupiedSlots_var[i];
    occupiedSlots_arraysize = size;
    delete [] this->occupiedSlots_var;
    this->occupiedSlots_var = occupiedSlots_var2;
}

unsigned int LMacPkt::getOccupiedSlotsArraySize() const
{
    return occupiedSlots_arraysize;
}

LAddress::L2Type& LMacPkt::getOccupiedSlots(unsigned int k)
{
    if (k>=occupiedSlots_arraysize) throw cRuntimeError("Array of size %d indexed by %d", occupiedSlots_arraysize, k);
    return occupiedSlots_var[k];
}

void LMacPkt::setOccupiedSlots(unsigned int k, const LAddress::L2Type& occupiedSlots)
{
    if (k>=occupiedSlots_arraysize) throw cRuntimeError("Array of size %d indexed by %d", occupiedSlots_arraysize, k);
    this->occupiedSlots_var[k] = occupiedSlots;
}

class LMacPktDescriptor : public cClassDescriptor
{
  public:
    LMacPktDescriptor();
    virtual ~LMacPktDescriptor();

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

Register_ClassDescriptor(LMacPktDescriptor);

LMacPktDescriptor::LMacPktDescriptor() : cClassDescriptor("LMacPkt", "MacPkt")
{
}

LMacPktDescriptor::~LMacPktDescriptor()
{
}

bool LMacPktDescriptor::doesSupport(cObject *obj) const
{
    return dynamic_cast<LMacPkt *>(obj)!=NULL;
}

const char *LMacPktDescriptor::getProperty(const char *propertyname) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? basedesc->getProperty(propertyname) : NULL;
}

int LMacPktDescriptor::getFieldCount(void *object) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    return basedesc ? 2+basedesc->getFieldCount(object) : 2;
}

unsigned int LMacPktDescriptor::getFieldTypeFlags(void *object, int field) const
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

const char *LMacPktDescriptor::getFieldName(void *object, int field) const
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

int LMacPktDescriptor::findField(void *object, const char *fieldName) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    int base = basedesc ? basedesc->getFieldCount(object) : 0;
    if (fieldName[0]=='m' && strcmp(fieldName, "mySlot")==0) return base+0;
    if (fieldName[0]=='o' && strcmp(fieldName, "occupiedSlots")==0) return base+1;
    return basedesc ? basedesc->findField(object, fieldName) : -1;
}

const char *LMacPktDescriptor::getFieldTypeString(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldTypeString(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldTypeStrings[] = {
        "int",
        "LAddress::L2Type",
    };
    return (field>=0 && field<2) ? fieldTypeStrings[field] : NULL;
}

const char *LMacPktDescriptor::getFieldProperty(void *object, int field, const char *propertyname) const
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

int LMacPktDescriptor::getArraySize(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getArraySize(object, field);
        field -= basedesc->getFieldCount(object);
    }
    LMacPkt *pp = (LMacPkt *)object; (void)pp;
    switch (field) {
        case 1: return pp->getOccupiedSlotsArraySize();
        default: return 0;
    }
}

std::string LMacPktDescriptor::getFieldAsString(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldAsString(object,field,i);
        field -= basedesc->getFieldCount(object);
    }
    LMacPkt *pp = (LMacPkt *)object; (void)pp;
    switch (field) {
        case 0: return long2string(pp->getMySlot());
        case 1: {std::stringstream out; out << pp->getOccupiedSlots(i); return out.str();}
        default: return "";
    }
}

bool LMacPktDescriptor::setFieldAsString(void *object, int field, int i, const char *value) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->setFieldAsString(object,field,i,value);
        field -= basedesc->getFieldCount(object);
    }
    LMacPkt *pp = (LMacPkt *)object; (void)pp;
    switch (field) {
        case 0: pp->setMySlot(string2long(value)); return true;
        default: return false;
    }
}

const char *LMacPktDescriptor::getFieldStructName(void *object, int field) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructName(object, field);
        field -= basedesc->getFieldCount(object);
    }
    static const char *fieldStructNames[] = {
        NULL,
        "LAddress::L2Type",
    };
    return (field>=0 && field<2) ? fieldStructNames[field] : NULL;
}

void *LMacPktDescriptor::getFieldStructPointer(void *object, int field, int i) const
{
    cClassDescriptor *basedesc = getBaseClassDescriptor();
    if (basedesc) {
        if (field < basedesc->getFieldCount(object))
            return basedesc->getFieldStructPointer(object, field, i);
        field -= basedesc->getFieldCount(object);
    }
    LMacPkt *pp = (LMacPkt *)object; (void)pp;
    switch (field) {
        case 1: return (void *)(&pp->getOccupiedSlots(i)); break;
        default: return NULL;
    }
}


