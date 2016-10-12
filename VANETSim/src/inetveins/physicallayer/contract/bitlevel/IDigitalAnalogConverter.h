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

#ifndef __INETVEINS_IDIGITALANALOGCONVERTER_H
#define __INETVEINS_IDIGITALANALOGCONVERTER_H

#include "inetveins/physicallayer/contract/bitlevel/ISignalSampleModel.h"
#include "inetveins/physicallayer/contract/bitlevel/ISignalAnalogModel.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API IDigitalAnalogConverter : public IPrintableObject
{
  public:
    virtual const ITransmissionAnalogModel *convertDigitalToAnalog(const ITransmissionSampleModel *sampleModel) const = 0;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_IDIGITALANALOGCONVERTER_H

