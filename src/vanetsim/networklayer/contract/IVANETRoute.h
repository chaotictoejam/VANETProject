//
// Copyright (C) 2012 Andras Varga
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INET_IVANETRoute_H
#define __INET_IVANETRoute_H

#include "inet/common/INETDefs.h"
#include "inet/networklayer/common/L3Address.h"
#include "inet/networklayer/common/InterfaceEntry.h"

namespace inet {

class IVANETRoutingTable;

/**
 * C++ interface for accessing unicast routing table entries of various protocols (IPv4, IPv6, etc)
 * in a uniform way.
 *
 * @see IVANETRoutingTable, IPv4Route, IPv6Route
 */
class INET_API IVANETRoute
{
  public:
    /** Specifies where the route comes from */
    enum SourceType {
        AODVWR,    ///< managed by AODVWR routing
        GPSRWR,    ///< managed by GPSRWR routing
    };

    /** Field codes for NB_ROUTE_CHANGED notifications */
    enum ChangeCodes {
        F_DESTINATION,
        F_PREFIX_LENGTH,
        F_NEXTHOP,
        F_IFACE,
        F_SOURCE,
        F_TYPE,
        F_ADMINDIST,
        F_METRIC,
        F_EXPIRYTIME,
        F_LAST
    };

//TODO maybe:
//    virtual std::string info() const;
//    virtual std::string detailedInfo() const;
//
//    bool operator==(const IGenericRoute& route) const { return equals(route); }
//    bool operator!=(const IGenericRoute& route) const { return !equals(route); }
//    bool equals(const IGenericRoute& route) const;

    virtual ~IVANETRoute() {}

    /** The routing table in which this route is inserted, or nullptr. */
    virtual IVANETRoutingTable *getRoutingTableAsGeneric() const = 0;

    virtual void setDestination(const L3Address& dest) = 0;
    virtual void setPrefixLength(int l) = 0;
    virtual void setNextHop(const L3Address& nextHop) = 0;
    virtual void setInterface(InterfaceEntry *ie) = 0;
    virtual void setSource(cObject *source) = 0;
    virtual void setSourceType(SourceType type) = 0;
    virtual void setMetric(int metric) = 0;    //XXX double?

    /** Destination address prefix to match */
    virtual L3Address getDestinationAsGeneric() const = 0;

    /** Represents length of prefix to match */
    virtual int getPrefixLength() const = 0;

    /** Next hop address */
    virtual L3Address getNextHopAsGeneric() const = 0;

    /** Next hop interface */
    virtual InterfaceEntry *getInterface() const = 0;

    /** Source of route */
    virtual cObject *getSource() const = 0;

    /** Source type of the route */
    virtual SourceType getSourceType() const = 0;

    /** Cost to reach the destination */
    virtual int getMetric() const = 0;

    virtual cObject *getProtocolData() const = 0;
    virtual void setProtocolData(cObject *protocolData) = 0;

    static const char *sourceTypeName(SourceType sourceType);
};

// TODO: move into info()?
inline std::ostream& operator<<(std::ostream& out, const IVANETRoute *route)
{
    out << "destination = " << route->getDestinationAsGeneric();
    out << ", prefixLength = " << route->getPrefixLength();
    out << ", nextHop = " << route->getNextHopAsGeneric();
    out << ", metric = " << route->getMetric();
    if (route->getInterface())
        out << ", interface = " << route->getInterface()->getName();
    return out;
};

} // namespace inet

#endif // ifndef __INET_IVANETRoute_H

