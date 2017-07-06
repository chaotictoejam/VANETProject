//
// Copyright (C) 1992-2004 Andras Varga
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

#ifndef __INETVEINS_SINK_H
#define __INETVEINS_SINK_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {

/**
 * A module that just deletes every packet it receives, and collects
 * basic statistics (packet count, bit count, packet rate, bit rate).
 */
class INETVEINS_API Sink : public cSimpleModule
{
  protected:
    int numPackets;
    long numBits;
    double throughput;    // bit/sec
    double packetPerSec;

    //statistics:
    static simsignal_t rcvdPkSignal;

  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
    virtual void finish() override;
};

} // namespace inetveins

#endif // ifndef __INETVEINS_SINK_H

