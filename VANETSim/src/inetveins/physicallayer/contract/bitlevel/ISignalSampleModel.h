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

#ifndef __INETVEINS_ISIGNALSAMPLEMODEL_H
#define __INETVEINS_ISIGNALSAMPLEMODEL_H

#include "inetveins/physicallayer/contract/packetlevel/IPrintableObject.h"

namespace inetveins {

namespace physicallayer {

/**
 * This purely virtual interface provides an abstraction for different radio
 * signal models in the waveform or sample domain.
 */
class INETVEINS_API ISignalSampleModel : public IPrintableObject
{
  public:
    virtual int getSampleLength() const = 0;

    virtual double getSampleRate() const = 0;

    virtual const std::vector<W> *getSamples() const = 0;
};

class INETVEINS_API ITransmissionSampleModel : public virtual ISignalSampleModel
{
};

class INETVEINS_API IReceptionSampleModel : public virtual ISignalSampleModel
{
  public:
    /**
     * Returns the receive signal strength indication.
     */
    virtual const W getRSSI() const = 0;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_ISIGNALSAMPLEMODEL_H

