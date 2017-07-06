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

#ifndef __INETVEINS_TCPBASICCLIENTAPP_H
#define __INETVEINS_TCPBASICCLIENTAPP_H

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/applications/tcpapp/TCPAppBase.h"
#include "inetveins/common/lifecycle/NodeStatus.h"
#include "inetveins/common/lifecycle/ILifecycle.h"

namespace inetveins {

/**
 * An example request-reply based client application.
 */
class INETVEINS_API TCPBasicClientApp : public TCPAppBase, public ILifecycle
{
  protected:
    cMessage *timeoutMsg = nullptr;
    NodeStatus *nodeStatus = nullptr;
    bool earlySend = false;    // if true, don't wait with sendRequest() until established()
    int numRequestsToSend = 0;    // requests to send in this session
    simtime_t startTime;
    simtime_t stopTime;

    virtual void sendRequest();
    virtual void rescheduleOrDeleteTimer(simtime_t d, short int msgKind);

    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void initialize(int stage) override;
    virtual void handleTimer(cMessage *msg) override;
    virtual void socketEstablished(int connId, void *yourPtr) override;
    virtual void socketDataArrived(int connId, void *yourPtr, cPacket *msg, bool urgent) override;
    virtual void socketClosed(int connId, void *yourPtr) override;
    virtual void socketFailure(int connId, void *yourPtr, int code) override;
    virtual bool isNodeUp();
    virtual bool handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback) override;

  public:
    TCPBasicClientApp() {}
    virtual ~TCPBasicClientApp();
};

} // namespace inetveins

#endif // ifndef __INETVEINS_TCPBASICCLIENTAPP_H

