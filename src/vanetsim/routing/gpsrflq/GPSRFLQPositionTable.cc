//
// Copyright (C) 2013 Opensim Ltd
// Author: Levente Meszaros
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

#include "vanetsim/routing/gpsrflq/GPSRFLQPositionTable.h"

namespace inet {

std::vector<L3Address> GPSRFLQPositionTable::getAddresses() const
{
    std::vector<L3Address> addresses;
    for (const auto & elem : addressToPositionMap)
        addresses.push_back(elem.first);
    return addresses;
}

bool GPSRFLQPositionTable::hasPosition(const L3Address& address) const
{
    AddressToPositionMap::const_iterator it = addressToPositionMap.find(address);
    return it != addressToPositionMap.end();
}

Coord GPSRFLQPositionTable::getPosition(const L3Address& address) const
{
    AddressToPositionMap::const_iterator it = addressToPositionMap.find(address);
    if (it == addressToPositionMap.end())
        return Coord(NaN, NaN, NaN);
    else
        return it->second.second;
}

void GPSRFLQPositionTable::setPosition(const L3Address& address, const Coord& coord)
{
    ASSERT(!address.isUnspecified());
    addressToPositionMap[address] = AddressToPositionMapValue(simTime(), coord);
}


bool GPSRFLQPositionTable::hasDirection(const L3Address& address) const
{
    AddressToDirectionMap::const_iterator it = addressToDirectionMap.find(address);
    return it != addressToDirectionMap.end();
}

double GPSRFLQPositionTable::getDirection(const L3Address& address) const
{
    AddressToDirectionMap::const_iterator it = addressToDirectionMap.find(address);
    if (it == addressToDirectionMap.end())
        return NaN;
    else
        return it->second.second;
}

void GPSRFLQPositionTable::setDirection(const L3Address& address, const double angle)
{
    ASSERT(!address.isUnspecified());
    addressToDirectionMap[address] = AddressToDirectionMapValue(simTime(), angle);
}

void GPSRFLQPositionTable::removePosition(const L3Address& address)
{
    auto it = addressToPositionMap.find(address);
    addressToPositionMap.erase(it);
}

void GPSRFLQPositionTable::removeOldPositions(simtime_t timestamp)
{
    for (auto it = addressToPositionMap.begin(); it != addressToPositionMap.end(); )
        if (it->second.first <= timestamp)
            addressToPositionMap.erase(it++);
        else
            it++;

}

void GPSRFLQPositionTable::removeDirection(const L3Address& address)
{
    auto it = addressToDirectionMap.find(address);
    addressToDirectionMap.erase(it);
}

void GPSRFLQPositionTable::removeOldDirections(simtime_t timestamp)
{
    for (auto it = addressToDirectionMap.begin(); it != addressToDirectionMap.end(); )
        if (it->second.first <= timestamp)
            addressToDirectionMap.erase(it++);
        else
            it++;
}

void GPSRFLQPositionTable::clear()
{
    addressToPositionMap.clear();
    addressToDirectionMap.clear();
}

simtime_t GPSRFLQPositionTable::getOldestPosition() const
{
    simtime_t oldestPosition = SimTime::getMaxTime();
    for (const auto & elem : addressToPositionMap) {
        const simtime_t& time = elem.second.first;
        if (time < oldestPosition)
            oldestPosition = time;
    }
    return oldestPosition;
}

std::ostream& operator << (std::ostream& o, const GPSRFLQPositionTable& t)
{
    o << "{ ";
    for(auto elem : t.addressToPositionMap) {
        o << elem.first << ":(" << elem.second.first << ";" << elem.second.second << ") ";
    }
    o << "}";
    return o;
}

} // namespace inet

