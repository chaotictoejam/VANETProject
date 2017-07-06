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

#ifndef __INETVEINS_IRADIOFRAME_H
#define __INETVEINS_IRADIOFRAME_H

#include "inetveins/physicallayer/contract/packetlevel/IArrival.h"
#include "inetveins/physicallayer/contract/packetlevel/IListening.h"
#include "inetveins/physicallayer/contract/packetlevel/IPhysicalLayerFrame.h"
#include "inetveins/physicallayer/contract/packetlevel/IReception.h"
#include "inetveins/physicallayer/contract/packetlevel/ITransmission.h"

namespace inetveins {

namespace physicallayer {

/**
 * This purely virtual interface provides an abstraction for different radio frames.
 */
class INETVEINS_API IRadioFrame : public IPhysicalLayerFrame, public IPrintableObject
{
  public:
    /**
     * Returns the radio signal transmission that this radio frame represents.
     * This function never returns nullptr.
     */
    virtual const ITransmission *getTransmission() const = 0;

    /**
     * This function may return nullptr if this is not yet computed.
     */
    virtual const IArrival *getArrival() const = 0;

    /**
     * This function may return nullptr if this is not yet computed.
     */
    virtual const IListening *getListening() const = 0;

    /**
     * This function may return nullptr if this is not yet computed.
     */
    virtual const IReception *getReception() const = 0;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_IRADIOFRAME_H

