//
// Copyright (C) 2013 OpenSim Ltd.
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

#include "inetveins/physicallayer/base/packetlevel/AntennaBase.h"
#include "inetveins/common/ModuleAccess.h"

namespace inetveins {

namespace physicallayer {

AntennaBase::AntennaBase() :
    mobility(nullptr),
    numAntennas(-1)
{
}

void AntennaBase::initialize(int stage)
{
    if (stage == INITSTAGE_LOCAL) {
        mobility = getModuleFromPar<IMobility>(par("mobilityModule"), getContainingNode(this));
        numAntennas = par("numAntennas");
    }
}

std::ostream& AntennaBase::printToStream(std::ostream& stream, int level) const
{
    return stream;
}

} // namespace physicallayer

} // namespace inetveins

