//
// Copyright (C) 2001 Matthias Oppitz <Matthias.Oppitz@gmx.de>
// Copyright (C) 2007 Ahmed Ayadi  <ahmed.ayadi@sophia.inria.fr>
// Copyright (C) 2010 Zoltan Bojthe
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

#ifndef __INETVEINS_RTCPPACKET3_H
#define __INETVEINS_RTCPPACKET3_H

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/transportlayer/rtp/RTCPPacket3_m.h"

namespace inetveins {

namespace rtp {

class INETVEINS_API RTCPSenderReportPacket : public RTCPSenderReportPacket_Base
{
  public:
    RTCPSenderReportPacket(const char *name = nullptr, int kind = 0);
    RTCPSenderReportPacket(const RTCPSenderReportPacket& other) : RTCPSenderReportPacket_Base(other) {}
    RTCPSenderReportPacket& operator=(const RTCPSenderReportPacket& other) { RTCPSenderReportPacket_Base::operator=(other); return *this; }
    virtual RTCPSenderReportPacket *dup() const override { return new RTCPSenderReportPacket(*this); }
    // ADD CODE HERE to redefine and implement pure virtual functions from RTCPSenderReportPacket_Base
};

} // namespace rtp

} // namespace inetveins

#endif    // _RTCPPACKET3_M_H_

