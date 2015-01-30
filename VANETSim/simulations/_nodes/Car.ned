//
// Copyright (C) 2008 Christoph Sommer <christoph.sommer@informatik.uni-erlangen.de>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

package vanetsim.simulations._nodes;


import inet.networklayer.ipv4.RoutingTable;
import inet.networklayer.IManetRouting;

import inet.nodes.inet.NetworkLayer;

import inet.transport.ISCTP;
import inet.transport.ITCP;
import inet.transport.IUDP;


module Car extends org.car2x.veins.nodes.Car
{
	parameters:
        int numUdpApps;
        string udpAppType = default("");
        @display("bgb=424,541"); 
        string routingProtocol @enum("AODVUU","DSRUU") = default("AODVUU");  // used mobile routing protocol. see: inet.networklayer.manetrouting
	submodules:
        manetrouting: <routingProtocol> like IManetRouting if routingProtocol != "" {
            @display("p=522,307");
        }
        networkLayer: NetworkLayer {
            parameters:
                @display("p=329,287;q=queue");
        }
    connections:
       networkLayer.transportOut++ --> manetrouting.from_ip if routingProtocol != "";
       networkLayer.transportIn++ <-- manetrouting.to_ip if routingProtocol != "";
}
