//
// Generated file, do not edit! Created by nedtool 4.6 from inetveins/networklayer/diffserv/DSCP.msg.
//

// Disable warnings about unused variables, empty switch stmts, etc:
#ifdef _MSC_VER
#  pragma warning(disable:4101)
#  pragma warning(disable:4065)
#endif

#include <iostream>
#include <sstream>
#include "DSCP_m.h"

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



namespace inetveins {

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
    cEnum *e = cEnum::find("inetveins::DSCP");
    if (!e) enums.getInstance()->add(e = new cEnum("inetveins::DSCP"));
    e->insert(DSCP_BE, "DSCP_BE");
    e->insert(DSCP_AF11, "DSCP_AF11");
    e->insert(DSCP_AF12, "DSCP_AF12");
    e->insert(DSCP_AF13, "DSCP_AF13");
    e->insert(DSCP_AF21, "DSCP_AF21");
    e->insert(DSCP_AF22, "DSCP_AF22");
    e->insert(DSCP_AF23, "DSCP_AF23");
    e->insert(DSCP_AF31, "DSCP_AF31");
    e->insert(DSCP_AF32, "DSCP_AF32");
    e->insert(DSCP_AF33, "DSCP_AF33");
    e->insert(DSCP_AF41, "DSCP_AF41");
    e->insert(DSCP_AF42, "DSCP_AF42");
    e->insert(DSCP_AF43, "DSCP_AF43");
    e->insert(DSCP_EF, "DSCP_EF");
    e->insert(DSCP_CS1, "DSCP_CS1");
    e->insert(DSCP_CS2, "DSCP_CS2");
    e->insert(DSCP_CS3, "DSCP_CS3");
    e->insert(DSCP_CS4, "DSCP_CS4");
    e->insert(DSCP_CS5, "DSCP_CS5");
    e->insert(DSCP_CS6, "DSCP_CS6");
    e->insert(DSCP_CS7, "DSCP_CS7");
    e->insert(DSCP_MAX, "DSCP_MAX");
);

} // namespace inetveins

