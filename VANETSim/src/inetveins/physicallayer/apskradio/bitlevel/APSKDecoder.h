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

#ifndef __INETVEINS_APSKDECODER_H
#define __INETVEINS_APSKDECODER_H

#include "inetveins/physicallayer/contract/bitlevel/IDecoder.h"
#include "inetveins/physicallayer/apskradio/bitlevel/APSKCode.h"

namespace inetveins {

namespace physicallayer {

class INETVEINS_API APSKDecoder : public cSimpleModule, public IDecoder
{
  protected:
    const APSKCode *code;
    const IScrambler *descrambler;
    const IFECCoder *fecDecoder;
    const IInterleaver *deinterleaver;

  protected:
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void initialize(int stage) override;

  public:
    APSKDecoder();
    virtual ~APSKDecoder();

    virtual std::ostream& printToStream(std::ostream& stream, int level) const override;
    virtual const APSKCode *getCode() const { return code; }
    virtual const IReceptionPacketModel *decode(const IReceptionBitModel *bitModel) const override;
};

} // namespace physicallayer

} // namespace inetveins

#endif // ifndef __INETVEINS_APSKDECODER_H

