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

#ifndef __INETVEINS_NETWORKDATAGRAMMULTIPLEXER_H
#define __INETVEINS_NETWORKDATAGRAMMULTIPLEXER_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {

/**
 * This class provides network datagram multiplexing based on the the datagram
 * runtime type or on the type of attached control info.
 */
class INETVEINS_API NetworkDatagramMultiplexer : public cSimpleModule
{
  public:
    NetworkDatagramMultiplexer() {}
    virtual ~NetworkDatagramMultiplexer() {}

  protected:
    virtual void handleMessage(cMessage *message) override;
    int getProtocolIndex(cMessage *message);
};

} // namespace inetveins

#endif // ifndef __INETVEINS_NETWORKDATAGRAMMULTIPLEXER_H

