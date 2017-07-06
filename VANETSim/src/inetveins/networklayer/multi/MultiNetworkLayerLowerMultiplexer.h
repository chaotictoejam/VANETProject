//
// Copyright (C) 2013 Opensim Ltd.
// Author: Levente Meszaros
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

#ifndef __INETVEINS_MULTINETVEINSWORKLAYERLOWERMULTIPLEXER_H
#define __INETVEINS_MULTINETVEINSWORKLAYERLOWERMULTIPLEXER_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {

class INETVEINS_API MultiNetworkLayerLowerMultiplexer : public cSimpleModule
{
  public:
    MultiNetworkLayerLowerMultiplexer() {}
    virtual ~MultiNetworkLayerLowerMultiplexer() {}

  protected:
    virtual void handleMessage(cMessage *message) override;
    int getProtocolCount();
    int getProtocolIndex(cMessage *message);
};

} // namespace inetveins

#endif // ifndef __INETVEINS_MULTINETVEINSWORKLAYERLOWERMULTIPLEXER_H

