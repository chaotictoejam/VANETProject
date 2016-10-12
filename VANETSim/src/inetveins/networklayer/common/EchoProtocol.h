//
// Copyright (C) 2004, 2009 Andras Varga
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

#ifndef __INETVEINS_ECHOPROTOCOL_H
#define __INETVEINS_ECHOPROTOCOL_H

#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/networklayer/common/L3Address.h"
#include "inetveins/networklayer/common/EchoPacket_m.h"

namespace inetveins {

class PingPayload;

/**
 * TODO
 */
class INETVEINS_API EchoProtocol : public cSimpleModule
{
  protected:
    typedef std::map<long, int> PingMap;
    PingMap pingMap;

  protected:
    virtual void processPacket(EchoPacket *packet);
    virtual void processEchoRequest(EchoPacket *packet);
    virtual void processEchoReply(EchoPacket *packet);
    virtual void sendEchoRequest(PingPayload *packet);

  protected:
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void initialize(int stage) override;
    virtual void handleMessage(cMessage *msg) override;
};

} // namespace inetveins

#endif // ifndef __INETVEINS_ECHOPROTOCOL_H

