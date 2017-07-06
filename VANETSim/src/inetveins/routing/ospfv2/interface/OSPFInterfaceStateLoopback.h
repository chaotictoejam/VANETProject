//
// Copyright (C) 2006 Andras Babos and Andras Varga
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

#ifndef __INETVEINS_OSPFINTERFACESTATELOOPBACK_H
#define __INETVEINS_OSPFINTERFACESTATELOOPBACK_H

#include "inetveins/common/INETVEINSDefs.h"
#include "inetveins/routing/ospfv2/interface/OSPFInterfaceState.h"

namespace inetveins {

namespace ospf {

class INETVEINS_API InterfaceStateLoopback : public InterfaceState
{
  public:
    virtual void processEvent(Interface *intf, Interface::InterfaceEventType event) override;
    virtual Interface::InterfaceStateType getState() const override { return Interface::LOOPBACK_STATE; }
};

} // namespace ospf

} // namespace inetveins

#endif // ifndef __INETVEINS_OSPFINTERFACESTATELOOPBACK_H

