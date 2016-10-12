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

#ifndef __INETVEINS_TCPECHOAPP_H
#define __INETVEINS_TCPECHOAPP_H

#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/common/INETVEINSMath.h"
#include "inetveins/common/lifecycle/ILifecycle.h"
#include "inetveins/common/lifecycle/NodeStatus.h"
#include "inetveins/transportlayer/contract/tcp/TCPSocket.h"

namespace inetveins {

/**
 * Accepts any number of incoming connections, and sends back whatever
 * arrives on them.
 */
class INETVEINS_API TCPEchoApp : public cSimpleModule, public ILifecycle
{
  protected:
    simtime_t delay;
    double echoFactor = NaN;

    TCPSocket socket;
    NodeStatus *nodeStatus = nullptr;

    long bytesRcvd = 0;
    long bytesSent = 0;

    static simsignal_t rcvdPkSignal;
    static simsignal_t sentPkSignal;

  protected:
    virtual bool isNodeUp();
    virtual void sendDown(cMessage *msg);
    virtual void startListening();
    virtual void stopListening();

    virtual void initialize(int stage) override;
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void handleMessage(cMessage *msg) override;
    virtual void finish() override;
    virtual bool handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback) override;

  public:
    TCPEchoApp() {}
};

} // namespace inetveins

#endif // ifndef __INETVEINS_TCPECHOAPP_H

