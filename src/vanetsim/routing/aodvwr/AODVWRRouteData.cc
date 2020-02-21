// Author: Joanne Skiles
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//

#include "vanetsim/routing/aodvwr/AODVWRRouteData.h"

namespace inet {

namespace aodvwr{

std::ostream& operator<<(std::ostream& out, const AODVWRRouteData *data)
{
    out << " isActive = " << data->isActive()
        << ", hasValidDestNum = " << data->hasValidDestNum()
        << ", destNum = " << data->getDestSeqNum()
        << ", twr = " << data->getTWR()
        << ", ExpirationTime = " << data->getExpirationTime();

    const std::set<L3Address>& preList = data->getPrecursorList();

    if (!preList.empty()) {
        out << ", precursor list: ";
        std::set<L3Address>::const_iterator iter = preList.begin();
        out << *iter;
        for (++iter; iter != preList.end(); ++iter)
            out << "; " << *iter;
    }
    return out;
};

} // namespace aodvwr

} // namespace inet

