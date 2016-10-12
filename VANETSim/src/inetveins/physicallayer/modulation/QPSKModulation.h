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

#ifndef __INETVEINS_QPSKMODULATION_H
#define __INETVEINS_QPSKMODULATION_H

#include "inetveins/physicallayer/base/packetlevel/MQAMModulationBase.h"

namespace inetveins {

namespace physicallayer {

/**
 * This modulation implements quadrature phase-shift keying.
 *
 * http://en.wikipedia.org/wiki/Phase-shift_keying#Quadrature_phase-shift_keying_.28QPSK.29
 */
class INETVEINS_API QPSKModulation : public MQAMModulationBase
{
  public:
    static const QPSKModulation singleton;

  protected:
    static const std::vector<APSKSymbol> constellation;

  public:
    QPSKModulation();

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override { return stream << "QPSKModulation"; }
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_QPSKMODULATION_H

