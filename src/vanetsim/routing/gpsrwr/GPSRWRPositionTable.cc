// Author: Joanne Skiles

#include "vanetsim/routing/gpsrwr/GPSRWRPositionTable.h"

namespace inet {

std::vector<L3Address> GPSRWRPositionTable::getAddresses() const
{
    std::vector<L3Address> addresses;
    for (const auto & elem : addressToPositionMap)
        addresses.push_back(elem.first);
    return addresses;
}

bool GPSRWRPositionTable::hasPosition(const L3Address& address) const
{
    AddressToPositionMap::const_iterator it = addressToPositionMap.find(address);
    return it != addressToPositionMap.end();
}

Coord GPSRWRPositionTable::getPosition(const L3Address& address) const
{
    AddressToPositionMap::const_iterator it = addressToPositionMap.find(address);
    if (it == addressToPositionMap.end())
        return Coord(NaN, NaN, NaN);
    else
        return it->second.second;
}

void GPSRWRPositionTable::setPosition(const L3Address& address, const Coord& coord)
{
    ASSERT(!address.isUnspecified());
    addressToPositionMap[address] = AddressToPositionMapValue(simTime(), coord);
}

void GPSRWRPositionTable::removePosition(const L3Address& address)
{
    auto it = addressToPositionMap.find(address);
    addressToPositionMap.erase(it);
}

void GPSRWRPositionTable::removeOldPositions(simtime_t timestamp)
{
    for (auto it = addressToPositionMap.begin(); it != addressToPositionMap.end(); )
        if (it->second.first <= timestamp)
            addressToPositionMap.erase(it++);
        else
            it++;
}

bool GPSRWRPositionTable::hasVelocity(const L3Address& address) const
{
    AddressToVelocityMap::const_iterator it = addressToVelocityMap.find(address);
    return it != addressToVelocityMap.end();
}

Coord GPSRWRPositionTable::getVelocity(const L3Address& address) const
{
    AddressToVelocityMap::const_iterator it = addressToVelocityMap.find(address);
    if (it == addressToVelocityMap.end())
        return Coord(NaN, NaN, NaN);
    else
        return it->second.second;
}

void GPSRWRPositionTable::setVelocity(const L3Address& address, const Coord& coord)
{
    ASSERT(!address.isUnspecified());
    addressToVelocityMap[address] = AddressToVelocityMapValue(simTime(), coord);
}

void GPSRWRPositionTable::removeVelocity(const L3Address& address)
{
    auto it = addressToVelocityMap.find(address);
    addressToVelocityMap.erase(it);
}

void GPSRWRPositionTable::removeOldVelocitys(simtime_t timestamp)
{
    for (auto it = addressToVelocityMap.begin(); it != addressToVelocityMap.end(); )
        if (it->second.first <= timestamp)
            addressToVelocityMap.erase(it++);
        else
            it++;

}

bool GPSRWRPositionTable::hasAcceleration(const L3Address& address) const
{
    AddressToAccelerationMap::const_iterator it = addressToAccelerationMap.find(address);
    return it != addressToAccelerationMap.end();
}

Coord GPSRWRPositionTable::getAcceleration(const L3Address& address) const
{
    AddressToAccelerationMap::const_iterator it = addressToAccelerationMap.find(address);
    if (it == addressToAccelerationMap.end())
        return Coord(NaN, NaN, NaN);
    else
        return it->second.second;
}

void GPSRWRPositionTable::setAcceleration(const L3Address& address, const Coord& coord)
{
    ASSERT(!address.isUnspecified());
    addressToAccelerationMap[address] = AddressToAccelerationMapValue(simTime(), coord);
}

void GPSRWRPositionTable::removeAcceleration(const L3Address& address)
{
    auto it = addressToAccelerationMap.find(address);
    addressToAccelerationMap.erase(it);
}

void GPSRWRPositionTable::removeOldAccelerations(simtime_t timestamp)
{
    for (auto it = addressToAccelerationMap.begin(); it != addressToAccelerationMap.end(); )
        if (it->second.first <= timestamp)
            addressToAccelerationMap.erase(it++);
        else
            it++;

}

bool GPSRWRPositionTable::hasDirection(const L3Address& address) const
{
    AddressToDirectionMap::const_iterator it = addressToDirectionMap.find(address);
    return it != addressToDirectionMap.end();
}

Quaternion GPSRWRPositionTable::getDirection(const L3Address& address) const
{
    AddressToDirectionMap::const_iterator it = addressToDirectionMap.find(address);
    if (it == addressToDirectionMap.end())
        return Quaternion::NIL;
    else
        return it->second.second;
}

void GPSRWRPositionTable::setDirection(const L3Address& address, const Quaternion& quaternion)
{
    ASSERT(!address.isUnspecified());
    addressToDirectionMap[address] = AddressToDirectionMapValue(simTime(), quaternion);
}

void GPSRWRPositionTable::removeDirection(const L3Address& address)
{
    auto it = addressToDirectionMap.find(address);
    addressToDirectionMap.erase(it);
}

void GPSRWRPositionTable::removeOldDirections(simtime_t timestamp)
{
    for (auto it = addressToDirectionMap.begin(); it != addressToDirectionMap.end(); )
        if (it->second.first <= timestamp)
            addressToDirectionMap.erase(it++);
        else
            it++;

}

void GPSRWRPositionTable::clear()
{
    addressToPositionMap.clear();
    addressToVelocityMap.clear();
    addressToAccelerationMap.clear();
    addressToDirectionMap.clear();
}

simtime_t GPSRWRPositionTable::getOldestPosition() const
{
    simtime_t oldestPosition = SimTime::getMaxTime();
    for (const auto & elem : addressToPositionMap) {
        const simtime_t& time = elem.second.first;
        if (time < oldestPosition)
            oldestPosition = time;
    }
    return oldestPosition;
}

std::ostream& operator << (std::ostream& o, const GPSRWRPositionTable& t)
{
    o << "{ ";
    for(auto elem : t.addressToPositionMap) {
        o << elem.first << ":(" << elem.second.first << ";" << elem.second.second << ") ";
    }
    o << "}";
    return o;
}

} // namespace inet

