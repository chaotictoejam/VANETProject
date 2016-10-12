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

#ifndef __INETVEINS_ANALOGDIGITALCONVERTER_H
#define __INETVEINS_ANALOGDIGITALCONVERTER_H

#include "inetveins/physicallayer/contract/bitlevel/IAnalogDigitalConverter.h"
#include "inetveins/physicallayer/common/bitlevel/SignalSampleModel.h"
#include "inetveins/physicallayer/analogmodel/bitlevel/SignalAnalogModel.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API ScalarAnalogDigitalConverter : public IAnalogDigitalConverter
{
  protected:
    W power;
    // TODO: why carrierFrequency and bandwidth here? why not in the shaper
    Hz carrierFrequency;
    Hz bandwidth;
    double sampleRate;

  public:
    ScalarAnalogDigitalConverter();

    virtual const IReceptionSampleModel *convertAnalogToDigital(const IReceptionAnalogModel *analogModel) const;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_ANALOGDIGITALCONVERTER_H

