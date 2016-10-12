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

#ifndef __INETVEINS_IEEE80211TRANSMITTERBASE_H
#define __INETVEINS_IEEE80211TRANSMITTERBASE_H

#include "inetveins/physicallayer/base/packetlevel/FlatTransmitterBase.h"
#include "inetveins/physicallayer/ieee80211/mode/IIeee80211Mode.h"
#include "inetveins/physicallayer/ieee80211/mode/Ieee80211ModeSet.h"
#include "inetveins/physicallayer/ieee80211/mode/Ieee80211Channel.h"
#include "inetveins/physicallayer/ieee80211/mode/Ieee80211Band.h"
#include "inetveins/physicallayer/ieee80211/packetlevel/Ieee80211ControlInfo_m.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API Ieee80211TransmitterBase : public FlatTransmitterBase
{
  protected:
    const Ieee80211ModeSet *modeSet;
    const IIeee80211Mode *mode;
    const IIeee80211Band *band;
    const Ieee80211Channel *channel;

  protected:
    virtual void initialize(int stage) override;

    virtual const IIeee80211Mode *computeTransmissionMode(const TransmissionRequest *transmissionRequest) const;
    virtual const Ieee80211Channel *computeTransmissionChannel(const TransmissionRequest *transmissionRequest) const;
    virtual W computeTransmissionPower(const TransmissionRequest *transmissionRequest) const;

  public:
    Ieee80211TransmitterBase();
    virtual ~Ieee80211TransmitterBase();

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;

    virtual void setModeSet(const Ieee80211ModeSet *modeSet);
    virtual void setMode(const IIeee80211Mode *mode);
    virtual void setBand(const IIeee80211Band *band);
    virtual void setChannel(const Ieee80211Channel *channel);
    virtual void setChannelNumber(int channelNumber);
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_IEEE80211TRANSMITTERBASE_H

