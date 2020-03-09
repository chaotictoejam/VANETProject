// Author: Joanne Skiles

#ifndef __INET_POSITIONTABLE_H
#define __INET_POSITIONTABLE_H

#include <vector>
#include <map>
#include "inet/common/INETMath.h"
#include "inet/common/INETDefs.h"
#include "inet/networklayer/common/L3Address.h"
#include "inet/common/geometry/common/Coord.h"
#include "inet/common/geometry/common/Quaternion.h"
#include "inet/common/INETMath.h"

namespace inet {

/**
 * This class provides a mapping between node addresses and their positions.
 */
class INET_API GPSRWRPositionTable
{
  private:
    typedef std::pair<simtime_t, Coord> AddressToPositionMapValue;
    typedef std::map<L3Address, AddressToPositionMapValue> AddressToPositionMap;
    AddressToPositionMap addressToPositionMap;

    typedef std::pair<simtime_t, Coord> AddressToVelocityMapValue;
    typedef std::map<L3Address, AddressToVelocityMapValue> AddressToVelocityMap;
    AddressToVelocityMap addressToVelocityMap;

    typedef std::pair<simtime_t, Coord> AddressToAccelerationMapValue;
    typedef std::map<L3Address, AddressToAccelerationMapValue> AddressToAccelerationMap;
    AddressToAccelerationMap addressToAccelerationMap;

    typedef std::pair<simtime_t, Quaternion> AddressToDirectionMapValue;
    typedef std::map<L3Address, AddressToDirectionMapValue> AddressToDirectionMap;
    AddressToDirectionMap addressToDirectionMap;

  public:
    GPSRWRPositionTable() {}

    std::vector<L3Address> getAddresses() const;

    bool hasPosition(const L3Address& address) const;
    Coord getPosition(const L3Address& address) const;
    void setPosition(const L3Address& address, const Coord& coord);

    void removePosition(const L3Address& address);
    void removeOldPositions(simtime_t timestamp);

    bool hasVelocity(const L3Address& address) const;
    Coord getVelocity(const L3Address& address) const;
    void setVelocity(const L3Address& address, const Coord& coord);

    void removeVelocity(const L3Address& address);
    void removeOldVelocitys(simtime_t timestamp);

    bool hasAcceleration(const L3Address& address) const;
    Coord getAcceleration(const L3Address& address) const;
    void setAcceleration(const L3Address& address, const Coord& coord);

    void removeAcceleration(const L3Address& address);
    void removeOldAccelerations(simtime_t timestamp);

    bool hasDirection(const L3Address& address) const;
    Quaternion getDirection(const L3Address& address) const;
    void setDirection(const L3Address& address, const Quaternion& quaternion);

    void removeDirection(const L3Address& address);
    void removeOldDirections(simtime_t timestamp);

    void clear();

    simtime_t getOldestPosition() const;

    friend std::ostream& operator << (std::ostream& o, const GPSRWRPositionTable& t);
};

} // namespace inet

#endif // ifndef __INET_POSITIONTABLE_H

