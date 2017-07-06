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

#ifndef __INETVEINS_TCPSOCKETMAP_H
#define __INETVEINS_TCPSOCKETMAP_H

#include <map>

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/transportlayer/contract/tcp/TCPSocket.h"

namespace inetveins {

/**
 * Small utility class for managing a large number of TCPSocket objects.
 */
//TBD: need for lookup could be eliminated by adding a void *yourPtr into TCPConnection and TCPCommand
class INETVEINS_API TCPSocketMap
{
  protected:
    typedef std::map<int, TCPSocket *> SocketMap;
    SocketMap socketMap;

  public:
    /**
     * Constructor.
     */
    TCPSocketMap() {}

    /**
     * Destructor. Does NOT delete the TCPSocket objects.
     */
    ~TCPSocketMap() {}

    /**
     * Finds the socket (by connId) for the given message. The message
     * must have arrived from TCP, and must contain a TCPCommand
     * control info object. The method returns nullptr if the socket was
     * not found, and throws an error if the message doesn't contain
     * a TCPCommand.
     */
    TCPSocket *findSocketFor(cMessage *msg);

    /**
     * Registers the given socket. Should not be called multiple times
     * for one socket object.
     */
    void addSocket(TCPSocket *socket);

    /**
     * Removes the given socket from the data structure.
     */
    TCPSocket *removeSocket(TCPSocket *socket);

    /**
     * Returns the number of sockets stored.
     */
    unsigned int size() { return socketMap.size(); }

    /**
     * Deletes the socket objects.
     */
    void deleteSockets();
};

} // namespace inetveins

#endif // ifndef __INETVEINS_TCPSOCKETMAP_H

