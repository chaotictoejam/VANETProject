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

#ifndef __INETVEINS_IEEE802154UWBIRRECEIVER_H
#define __INETVEINS_IEEE802154UWBIRRECEIVER_H

#include <vector>
#include "inetveins/common/mapping/MappingBase.h"
#include "inetveins/common/mapping/MappingUtils.h"
#include "inetveins/physicallayer/base/packetlevel/ReceiverBase.h"
#include "inetveins/physicallayer/ieee802154/bitlevel/Ieee802154UWBIRMode.h"

namespace inetveins {

namespace physicallayer {

// This class was created by porting some C++ code from the DeciderUWBIRED class in MiXiM.
class INETVEINS_API Ieee802154UWBIRReceiver : public ReceiverBase
{
  protected:
    Ieee802154UWBIRMode cfg;

  protected:
    virtual void initialize(int stage) override;

    virtual std::vector<bool> *decode(const IReception *reception, const std::vector<const IReception *> *interferingReceptions, const INoise *backgroundNoise) const;
    virtual std::pair<double, double> integrateWindow(simtime_t_cref pNow, simtime_t_cref burst, const IReception *reception, const std::vector<const IReception *> *interferingReceptions, const INoise *backgroundNoise) const;

  public:
    Ieee802154UWBIRReceiver();

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;
    virtual const IListening *createListening(const IRadio *radio, const simtime_t startTime, const simtime_t endTime, const Coord startPosition, const Coord endPosition) const override;
    virtual const IListeningDecision *computeListeningDecision(const IListening *listening, const IInterference *interference) const override;
    virtual bool computeIsReceptionAttempted(const IListening *listening, const IReception *reception, IRadioSignal::SignalPart part, const IInterference *interference) const override;
    virtual bool computeIsReceptionSuccessful(const IListening *listening, const IReception *reception, IRadioSignal::SignalPart part, const IInterference *interference, const ISNIR *snir) const override;
    virtual const IReceptionDecision *computeReceptionDecision(const IListening *listening, const IReception *reception, IRadioSignal::SignalPart part, const IInterference *interference, const ISNIR *snir) const override;
    virtual const ReceptionIndication *computeReceptionIndication(const ISNIR *snir) const override;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_IEEE802154UWBIRRECEIVER_H

