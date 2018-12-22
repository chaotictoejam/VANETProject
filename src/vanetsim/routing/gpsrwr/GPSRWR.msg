// Author: Joanne Skiles
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
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//

cplusplus {{
#include "inet/common/INETMath.h"
#include "inet/common/geometry/common/Coord.h"
#include "inet/common/geometry/common/EulerAngles.h"
#include "inet/common/TLVOption.h"
#include "inet/networklayer/common/L3Address.h"
#include "vanetsim/routing/gpsrwr/GPSRWRDefs.h"
}}

namespace inet;

class noncobject L3Address;

class noncobject Coord;

class noncobject EulerAngles;

class noncobject GPSRWRForwardingMode;

class noncobject TLVOptionBase;

//
// The GPSRWR beacon packet is sent periodically by all GPSRWR routers to notify
// the neighbors about the router's address and node information.
//
packet GPSRWRBeacon {
    L3Address address;
    Coord position;
    Coord speed;
    Coord acceleration;
    EulerAngles direction;
}

//
// The GPSRWROption is used to add extra routing information for network datagrams.
//
class GPSRWROption extends TLVOptionBase {
    GPSRWRForwardingMode routingMode = (GPSRWRForwardingMode)-1;
    Coord destinationPosition;               // D
    Coord perimeterRoutingStartPosition;     // Lp
    Coord perimeterRoutingForwardPosition;   // Lf
    L3Address currentFaceFirstSenderAddress;   // e0
    L3Address currentFaceFirstReceiverAddress; // e0
    L3Address senderAddress; // TODO: this field is not strictly needed by GPSRWR (should be eliminated)
}

