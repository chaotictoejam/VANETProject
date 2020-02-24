// Author: Joanne Skiles

#ifndef __INET_GEOADVFLQPOSITIONTABLE_H
#define __INET_GEOADVFLQPOSITIONTABLE_H

#include <map>
#include <vector>

#include "inet/common/INETDefs.h"
#include "inet/common/geometry/common/Coord.h"
#include "inet/networklayer/common/L3Address.h"

namespace inet {

/**
 * This class provides a mapping between node addresses and their positions.
 */
class INET_API GEOADVFLQPositionTable
{
  private:
    typedef std::pair<simtime_t, Coord> AddressToPositionMapValue;
    typedef std::map<L3Address, AddressToPositionMapValue> AddressToPositionMap;
    AddressToPositionMap addressToPositionMap;

    typedef std::pair<simtime_t, double> AddressToDirectionMapValue;
    typedef std::map<L3Address, AddressToDirectionMapValue> AddressToDirectionMap;
    AddressToDirectionMap addressToDirectionMap;

  public:
    GEOADVFLQPositionTable() {}

    std::vector<L3Address> getAddresses() const;

    bool hasPosition(const L3Address& address) const;
    Coord getPosition(const L3Address& address) const;
    void setPosition(const L3Address& address, const Coord& coord);

    bool hasDirection(const L3Address& address) const;
    double getDirection(const L3Address& address) const;
    void setDirection(const L3Address& address, const double angle);

    void removePosition(const L3Address& address);
    void removeOldPositions(simtime_t timestamp);

    void removeDirection(const L3Address& address);
    void removeOldDirections(simtime_t timestamp);

    void clear();

    simtime_t getOldestPosition() const;

    friend std::ostream& operator << (std::ostream& o, const GEOADVFLQPositionTable& t);
};

} // namespace inet

#endif // ifndef __INET_GEOADVFLQPOSITIONTABLE_H

