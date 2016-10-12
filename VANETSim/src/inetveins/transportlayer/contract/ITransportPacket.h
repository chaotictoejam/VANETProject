//
// Copyright (C) 2012 Andras Varga
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

#ifndef __INETVEINS_ITRANSPORTPACKET_H
#define __INETVEINS_ITRANSPORTPACKET_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {

/**
 * This interface provides an abstraction for different transport layer packets.
 */
class INETVEINS_API ITransportPacket
{
  public:
    virtual ~ITransportPacket() {}
    virtual unsigned int getSourcePort() const = 0;
    virtual void setSourcePort(unsigned int port) = 0;
    virtual unsigned int getDestinationPort() const = 0;
    virtual void setDestinationPort(unsigned int port) = 0;
};

} // namespace inetveins

#endif // ifndef __INETVEINS_ITRANSPORTPACKET_H

