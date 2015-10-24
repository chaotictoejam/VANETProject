//
// Copyright (C) 2006 Alfonso Ariza Quintana
// Copyright (C) 2015 Joanne Skiles
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

class noncobject VanetAddress;

cplusplus {{
#include "VanetAddress.h"
}}



enum VanetControlType
{

    VANET_ROUTE_NO_OPTION = 0;
    VANET_ROUTE_UPDATE = 1;
    VANET_ROUTE_NOROUTE = 2;
}

//
// ICMP message class
//
packet ControlVanetRouting
{
    VanetAddress srcAddress;
    VanetAddress destAddress;
    int optionCode @enum(VanetControlType) = VANET_ROUTE_NO_OPTION;
}
