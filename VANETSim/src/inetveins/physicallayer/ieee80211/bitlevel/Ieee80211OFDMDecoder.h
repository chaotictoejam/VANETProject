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

#ifndef __INETVEINS_IEEE80211OFDMDECODER_H
#define __INETVEINS_IEEE80211OFDMDECODER_H

#include "inetveins/physicallayer/ieee80211/bitlevel/Ieee80211OFDMInterleaver.h"
#include "inetveins/physicallayer/common/bitlevel/AdditiveScrambler.h"
#include "inetveins/physicallayer/ieee80211/bitlevel/Ieee80211OFDMInterleaving.h"
#include "inetveins/physicallayer/common/bitlevel/ConvolutionalCoder.h"
#include "inetveins/physicallayer/ieee80211/mode/Ieee80211OFDMCode.h"
#include "inetveins/physicallayer/ieee80211/bitlevel/Ieee80211ConvolutionalCode.h"
#include "inetveins/physicallayer/base/packetlevel/APSKModulationBase.h"
#include "inetveins/physicallayer/contract/bitlevel/ISignalPacketModel.h"
#include "inetveins/physicallayer/contract/bitlevel/ISignalBitModel.h"
#include "inetveins/physicallayer/contract/bitlevel/IDecoder.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API Ieee80211OFDMDecoder : public IDecoder
{
  protected:
    const Ieee80211OFDMCode *code = nullptr;
    const IScrambler *descrambler = nullptr;
    const IFECCoder *fecDecoder = nullptr;
    const IInterleaver *deinterleaver = nullptr;

  protected:
    const IReceptionPacketModel *createPacketModel(const BitVector *decodedBits, const IScrambling *scrambling, const IForwardErrorCorrection *fec, const IInterleaving *interleaving) const;
    ShortBitVector getSignalFieldRate(const BitVector& signalField) const;
    unsigned int getSignalFieldLength(const BitVector& signalField) const;
    unsigned int calculatePadding(unsigned int dataFieldLengthInBits, const IModulation *modulationScheme, const Ieee80211ConvolutionalCode *fec) const;

  public:
    Ieee80211OFDMDecoder(const IScrambler *descrambler, const IFECCoder *fecDecoder, const IInterleaver *deinterleaver);
    Ieee80211OFDMDecoder(const Ieee80211OFDMCode *code);
    virtual ~Ieee80211OFDMDecoder();

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;
    const IReceptionPacketModel *decode(const IReceptionBitModel *bitModel) const override;
    const Ieee80211OFDMCode *getCode() const { return code; }
};
} /* namespace physicallayer */
} /* namespace inetveins */

#endif // ifndef __INETVEINS_IEEE80211OFDMDECODER_H

