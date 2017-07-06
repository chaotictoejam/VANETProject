//
// Copyright (C) 2012 Opensim Ltd.
// Author: Tamas Borbely
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

#ifndef __INETVEINS_ALGORITHMICDROPPERBASE_H
#define __INETVEINS_ALGORITHMICDROPPERBASE_H

#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/common/queue/IQueueAccess.h"

namespace inetveins {

/**
 * Base class for algorithmic droppers (RED, DropTail, etc.).
 */
class INETVEINS_API AlgorithmicDropperBase : public cSimpleModule, public IQueueAccess
{
  protected:
    int numGates;
    std::vector<IQueueAccess *> outQueues;    // vector of out queues indexed by gate index (may contain duplicate elements)
    std::set<IQueueAccess *> outQueueSet;    // set of out queues; comparing pointers is ok

  public:
    AlgorithmicDropperBase() : numGates(0) {};
    virtual ~AlgorithmicDropperBase() {};

  protected:
    virtual void initialize() override;
    virtual void handleMessage(cMessage *msg) override;
    virtual bool shouldDrop(cPacket *packet) = 0;
    virtual void dropPacket(cPacket *packet);
    virtual void sendOut(cPacket *packet);

    virtual int getLength() const override;
    virtual int getByteLength() const override;
};

} // namespace inetveins

#endif // ifndef __INETVEINS_ALGORITHMICDROPPERBASE_H

