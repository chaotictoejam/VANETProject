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

#ifndef __INETVEINS_APSKMODULATOR_H
#define __INETVEINS_APSKMODULATOR_H

#include "inetveins/physicallayer/contract/bitlevel/IModulator.h"
#include "inetveins/physicallayer/common/bitlevel/SignalBitModel.h"
#include "inetveins/physicallayer/common/bitlevel/SignalSymbolModel.h"
#include "inetveins/physicallayer/base/packetlevel/APSKModulationBase.h"
#include "inetveins/physicallayer/apskradio/bitlevel/APSKSymbol.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API APSKModulator : public IModulator, public cSimpleModule
{
  protected:
    const APSKModulationBase *modulation;

  protected:
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void initialize(int stage) override;

  public:
    APSKModulator();

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;
    virtual const IModulation *getModulation() const override { return modulation; }
    virtual const ITransmissionSymbolModel *modulate(const ITransmissionBitModel *bitModel) const override;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_APSKMODULATOR_H

