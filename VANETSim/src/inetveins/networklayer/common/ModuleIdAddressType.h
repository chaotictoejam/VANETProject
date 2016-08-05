//
// Copyright (C) 2012 Opensim Ltd.
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

#ifndef __INET_MODULEIDADDRESSTYPE_H
#define __INET_MODULEIDADDRESSTYPE_H

#include "inetveins/common/INETDefs.h"
#include "inetveins/networklayer/contract/IL3AddressType.h"
#include "inetveins/networklayer/common/ModuleIdAddress.h"
#include "inetveins/networklayer/contract/generic/GenericNetworkProtocolControlInfo.h"

namespace inetveins {

class INETVEINS_API ModuleIdAddressType : public IL3AddressType
{
  public:
    static ModuleIdAddressType INSTANCE;

  public:
    ModuleIdAddressType() {}
    virtual ~ModuleIdAddressType() {}

    virtual int getAddressBitLength() const override { return 64; }     // change to your choice
    virtual int getMaxPrefixLength() const override { return 0; }
    virtual L3Address getUnspecifiedAddress() const override { return ModuleIdAddress(); }    // TODO: constant
    virtual L3Address getBroadcastAddress() const override { return ModuleIdAddress(-1); }
    virtual L3Address getLinkLocalManetRoutersMulticastAddress() const override { return ModuleIdAddress(-109); }    // TODO: constant
    virtual L3Address getLinkLocalRIPRoutersMulticastAddress() const override { return ModuleIdAddress(-9); }    // TODO: constant
    virtual INetworkProtocolControlInfo *createNetworkProtocolControlInfo() const override { return new GenericNetworkProtocolControlInfo(); }
    virtual L3Address getLinkLocalAddress(const InterfaceEntry *ie) const override { return ModuleIdAddress(); }    // TODO constant
};

} // namespace inet

#endif // ifndef __INET_MODULEIDADDRESSTYPE_H

