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

#ifndef __INETVEINS_SIGNALANALOGMODEL_H
#define __INETVEINS_SIGNALANALOGMODEL_H

#include "inetveins/physicallayer/contract/packetlevel/IRadioSignal.h"
#include "inetveins/physicallayer/contract/bitlevel/ISignalAnalogModel.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API SignalAnalogModel : public virtual ISignalAnalogModel
{
  protected:
    const simtime_t duration;

  public:
    SignalAnalogModel(const simtime_t duration);

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;

    virtual const simtime_t getDuration() const override { return duration; }
};

class INETVEINS_API NarrowbandSignalAnalogModel : public SignalAnalogModel, public virtual INarrowbandSignal
{
  protected:
    const Hz carrierFrequency;
    const Hz bandwidth;

  public:
    NarrowbandSignalAnalogModel(const simtime_t duration, Hz carrierFrequency, Hz bandwidth);

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;

    virtual Hz getCarrierFrequency() const override { return carrierFrequency; }
    virtual Hz getBandwidth() const override { return bandwidth; }
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_SIGNALANALOGMODEL_H

