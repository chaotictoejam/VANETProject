//
// Copyright (C) 2004 Andras Varga
// Copyright (C) 2000 Institut fuer Telematik, Universitaet Karlsruhe
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

#ifndef __INETVEINS_IPVXTRAFSINK_H
#define __INETVEINS_IPVXTRAFSINK_H

#include <vector>

#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/networklayer/common/L3Address.h"
#include "inetveins/common/lifecycle/ILifecycle.h"

namespace inetveins {

/**
 * Consumes and prints packets received from the IP module. See NED for more info.
 */
class INETVEINS_API IPvXTrafSink : public cSimpleModule, public ILifecycle
{
  protected:
    int numReceived;
    bool isOperational;
    static simsignal_t rcvdPkSignal;

  protected:
    virtual void printPacket(cPacket *msg);
    virtual void processPacket(cPacket *msg);

    virtual void initialize(int stage) override;
    virtual int numInitStages() const override { return NUM_INIT_STAGES; }
    virtual void handleMessage(cMessage *msg) override;
    virtual bool handleOperationStage(LifecycleOperation *operation, int stage, IDoneCallback *doneCallback) override;
};

} // namespace inetveins

#endif // ifndef __INETVEINS_IPVXTRAFSINK_H

