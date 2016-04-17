//
// Generated file, do not edit! Created by nedtool 4.6 from inet/routing/bgpv4/BGPCommon.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "BGPCommon_m.h"

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
namespace bgp {

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
    cEnum *e = cEnum::find("inet::bgp::BGPSessionType");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::bgp::BGPSessionType"));
    e->insert(IGP, "IGP");
    e->insert(EGP, "EGP");
    e->insert(INCOMPLETE, "INCOMPLETE");
);

EXECUTE_ON_STARTUP(
    cEnum *e = cEnum::find("inet::bgp::BGPPathSegmentType");
    if (!e) enums.getInstance()->add(e = new cEnum("inet::bgp::BGPPathSegmentType"));
    e->insert(AS_SET, "AS_SET");
    e->insert(AS_SEQUENCE, "AS_SEQUENCE");
);

} // namespace bgp
} // namespace inet

