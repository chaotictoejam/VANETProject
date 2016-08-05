//
// Copyright (C) 2005 Michael Tuexen
//               2008 Irene Ruengeler
//               2009 Thomas Dreibholz
//               2011 Zoltan Bojthe
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INET_TCPDUMP_H
#define __INET_TCPDUMP_H

#include "inetveins/common/INETDefs.h"

#include "inetveins/common/packet/PcapDump.h"
#include "inetveins/common/packet/PacketDump.h"

namespace inetveins {

/**
 * Dumps every packet using the PcapDump class and the
 * PacketDump class.
 */
class INETVEINS_API TCPDump : public cSimpleModule
{
  protected:
    PcapDump pcapDump;
    PacketDump tcpdump;
    unsigned int snaplen = 0;
    bool dumpBadFrames = false;
    bool dropBadFrames = false;

  public:
    TCPDump() {}
    ~TCPDump();
    virtual void handleMessage(cMessage *msg) override;
    virtual void initialize() override;
    virtual void finish() override;
};

} // namespace inet

#endif // ifndef __INET_TCPDUMP_H

