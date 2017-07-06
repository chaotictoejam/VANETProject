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

#ifndef __INETVEINS_IANTENNA_H
#define __INETVEINS_IANTENNA_H

#include "inetveins/physicallayer/contract/packetlevel/IPrintableObject.h"
#include "inetveins/mobility/contract/IMobility.h"

namespace inetveins {

namespace physicallayer {

/**
 * This interface represents a physical device (a part of the radio) which converts
 * electric signals into radio waves, and vice versa.
 */
class INETVEINS_API IAntenna : public IPrintableObject
{
  public:
    /**
     * Returns the mobility of this antenna that describes its position and
     * orientation over time.
     */
    virtual IMobility *getMobility() const = 0;

    /**
     * Returns the number of antennas in the array.
     */
    virtual int getNumAntennas() const = 0;

    /**
     * Returns the maximum possible antenna gain independent of any direction.
     */
    virtual double getMaxGain() const = 0;

    /**
     * Returns the antenna gain in the provided direction. The direction is
     * relative to the antenna geometry, so the result depends only on the
     * antenna characteristics. For transmissions, it determines how well the
     * antenna converts input power into radio waves headed in the specified
     * direction. For receptions, it determines how well the antenna converts
     * radio waves arriving from the the specified direction.
     */
    virtual double computeGain(const EulerAngles direction) const = 0;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_IANTENNA_H

