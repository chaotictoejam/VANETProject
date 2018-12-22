// Author: Joanne Skiles
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

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

bool GPSRWRPositionTable::hasSpeed(const L3Address& address) const
{
    AddressToSpeedMap::const_iterator it = addressToSpeedMap.find(address);
    return it != addressToSpeedMap.end();
}

Coord GPSRWRPositionTable::getSpeed(const L3Address& address) const
{
    AddressToSpeedMap::const_iterator it = addressToSpeedMap.find(address);
    if (it == addressToSpeedMap.end())
        return Coord(NaN, NaN, NaN);
    else
        return it->second.second;
}

void GPSRWRPositionTable::setSpeed(const L3Address& address, const Coord& coord)
{
    ASSERT(!address.isUnspecified());
    addressToSpeedMap[address] = AddressToSpeedMapValue(simTime(), coord);
}

void GPSRWRPositionTable::removeSpeed(const L3Address& address)
{
    auto it = addressToSpeedMap.find(address);
    addressToSpeedMap.erase(it);
}

void GPSRWRPositionTable::removeOldSpeeds(simtime_t timestamp)
{
    for (auto it = addressToSpeedMap.begin(); it != addressToSpeedMap.end(); )
        if (it->second.first <= timestamp)
            addressToSpeedMap.erase(it++);
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

EulerAngles GPSRWRPositionTable::getDirection(const L3Address& address) const
{
    AddressToDirectionMap::const_iterator it = addressToDirectionMap.find(address);
    if (it == addressToDirectionMap.end())
        return EulerAngles(NaN, NaN, NaN);
    else
        return it->second.second;
}

void GPSRWRPositionTable::setDirection(const L3Address& address, const EulerAngles& eulerAngles)
{
    ASSERT(!address.isUnspecified());
    addressToDirectionMap[address] = AddressToDirectionMapValue(simTime(), eulerAngles);
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
    addressToSpeedMap.clear();
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

