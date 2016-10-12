//
// Copyright (C) 2014 OpenSim Ltd.
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

#ifndef __INETVEINS_DQPSKMODULATION_H
#define __INETVEINS_DQPSKMODULATION_H

#include "inetveins/physicallayer/base/packetlevel/DPSKModulationBase.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API DQPSKModulation : public DPSKModulationBase
{
  public:
    static const DQPSKModulation singleton;

  public:
    DQPSKModulation();

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override { return stream << "DQPSKModulation"; }
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_DQPSKMODULATION_H

