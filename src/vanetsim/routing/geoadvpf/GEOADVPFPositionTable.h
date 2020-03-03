// Author: Joanne Skiles

#ifndef __INET_GEOADVPFPOSITIONTABLE_H
#define __INET_GEOADVPFPOSITIONTABLE_H

#include <vector>
#include <map>
#include "inet/common/INETDefs.h"
#include "inet/common/INETMath.h"
#include "inet/networklayer/common/L3Address.h"
#include "inet/common/geometry/common/Coord.h"

namespace inet {

/**
 * This class provides a mapping between node addresses and their positions.
 */
class INET_API GEOADVPFPositionTable
{
  private:
    typedef std::pair<simtime_t, Coord> AddressToPositionMapValue;
    typedef std::map<L3Address, AddressToPositionMapValue> AddressToPositionMap;
    AddressToPositionMap addressToPositionMap;

  public:
    GEOADVPFPositionTable() {}

    std::vector<L3Address> getAddresses() const;

    bool hasPosition(const L3Address& address) const;
    Coord getPosition(const L3Address& address) const;
    void setPosition(const L3Address& address, const Coord& coord);

    void removePosition(const L3Address& address);
    void removeOldPositions(simtime_t timestamp);

    void clear();

    simtime_t getOldestPosition() const;

    friend std::ostream& operator << (std::ostream& o, const GEOADVPFPositionTable& t);
};

} // namespace inet

#endif // ifndef __INET_GEOADVPFPOSITIONTABLE_H

