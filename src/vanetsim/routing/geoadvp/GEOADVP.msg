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

import inet.common.INETDefs;
import inet.common.TlvOptions;
import inet.common.geometry.Geometry;
import inet.common.packet.chunk.Chunk;
import inet.networklayer.common.L3Address;


cplusplus {{
#include "vanetsim/routing/geoadvp/GEOADVPDefs.h"
}}

namespace inet;

enum GEOADVPForwardingMode {
    GEOADVP_GREEDY_ROUTING = 1;
    GEOADVP_PTWR_ROUTING = 2;
};

enum GEOADVPPlanarizationMode {
    GEOADVP_NO_PLANARIZATION = 0;
    GEOADVP_GG_PLANARIZATION = 1;
    GEOADVP_RNG_PLANARIZATION = 2;
};
//
// The GEOADVP beacon packet is sent periodically by all GEOADVP routers to notify
// the neighbors about the router's address and position.
//
class GEOADVPBeacon extends FieldsChunk {
    L3Address address;
    Coord position;
}

//
// The GEOADVPOption is used to add extra routing information for network datagrams.
//
class GEOADVPOption extends TlvOptionBase {
    GEOADVPForwardingMode routingMode = (GEOADVPForwardingMode)-1;
    Coord destinationPosition;               // D
    Coord ptwrRoutingStartPosition;     // Lp
    Coord ptwrRoutingForwardPosition;   // Lf
    L3Address currentFaceFirstSenderAddress;   // e0
    L3Address currentFaceFirstReceiverAddress; // e0
    L3Address senderAddress; // TODO: this field is not strictly needed by GEOADVP (should be eliminated)
}

