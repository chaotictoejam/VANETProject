//
// Copyright (C) 2004 Andras Varga
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

#ifndef __INETVEINS_TCPNOCONGESTIONCONTROL_H
#define __INETVEINS_TCPNOCONGESTIONCONTROL_H

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/transportlayer/tcp/flavours/TCPBaseAlg.h"

namespace inetveins {

namespace tcp {

/**
 * State variables for TCPNoCongestionControl.
 */
typedef TCPBaseAlgStateVariables TCPNoCongestionControlStateVariables;

/**
 * TCP with no congestion control (i.e. congestion window kept very large).
 * Can be used to demonstrate effect of lack of congestion control.
 */
class INETVEINS_API TCPNoCongestionControl : public TCPBaseAlg
{
  protected:
    TCPNoCongestionControlStateVariables *& state;    // alias to TCLAlgorithm's 'state'

    /** Create and return a TCPNoCongestionControlStateVariables object. */
    virtual TCPStateVariables *createStateVariables() override
    {
        return new TCPNoCongestionControlStateVariables();
    }

    /** Redefine what should happen on retransmission */
    virtual void processRexmitTimer(TCPEventCode& event) override;

  public:
    /** Ctor */
    TCPNoCongestionControl();

    /** Initialize state vars */
    virtual void initialize() override;

    /** Redefine what should happen when data got acked, to add congestion window management */
    virtual void receivedDataAck(uint32 firstSeqAcked) override;
};

} // namespace tcp

} // namespace inetveins

#endif // ifndef __INETVEINS_TCPNOCONGESTIONCONTROL_H

