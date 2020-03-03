// Author: Joanne Skiles

#include "GEOADVPFPositionTable.h"

namespace inet {

std::vector<L3Address> GEOADVPFPositionTable::getAddresses() const
{
    std::vector<L3Address> addresses;
    for (const auto & elem : addressToPositionMap)
        addresses.push_back(elem.first);
    return addresses;
}

bool GEOADVPFPositionTable::hasPosition(const L3Address& address) const
{
    AddressToPositionMap::const_iterator it = addressToPositionMap.find(address);
    return it != addressToPositionMap.end();
}

Coord GEOADVPFPositionTable::getPosition(const L3Address& address) const
{
    AddressToPositionMap::const_iterator it = addressToPositionMap.find(address);
    if (it == addressToPositionMap.end())
        return Coord(NaN, NaN, NaN);
    else
        return it->second.second;
}

void GEOADVPFPositionTable::setPosition(const L3Address& address, const Coord& coord)
{
    ASSERT(!address.isUnspecified());
    addressToPositionMap[address] = AddressToPositionMapValue(simTime(), coord);
}

void GEOADVPFPositionTable::removePosition(const L3Address& address)
{
    auto it = addressToPositionMap.find(address);
    addressToPositionMap.erase(it);
}

void GEOADVPFPositionTable::removeOldPositions(simtime_t timestamp)
{
    for (auto it = addressToPositionMap.begin(); it != addressToPositionMap.end(); )
        if (it->second.first <= timestamp)
            addressToPositionMap.erase(it++);
        else
            it++;

}

void GEOADVPFPositionTable::clear()
{
    addressToPositionMap.clear();
}

simtime_t GEOADVPFPositionTable::getOldestPosition() const
{
    simtime_t oldestPosition = SimTime::getMaxTime();
    for (const auto & elem : addressToPositionMap) {
        const simtime_t& time = elem.second.first;
        if (time < oldestPosition)
            oldestPosition = time;
    }
    return oldestPosition;
}

std::ostream& operator << (std::ostream& o, const GEOADVPFPositionTable& t)
{
    o << "{ ";
    for(auto elem : t.addressToPositionMap) {
        o << elem.first << ":(" << elem.second.first << ";" << elem.second.second << ") ";
    }
    o << "}";
    return o;
}

} // namespace inet

