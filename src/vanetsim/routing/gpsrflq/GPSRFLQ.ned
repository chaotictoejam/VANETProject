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

package vanetsim.routing.gpsrflq;

import inet.networklayer.multi.NetworkDatagramMultiplexer;

//
// This module interface is used by GPSRFLQ implementations.
//
moduleinterface IGPSRFLQ
{
    parameters:
        @display("i=block/routing");
    gates:
        input ipIn;
        output ipOut;
}

//
// This module provides Greedy Perimeter Stateless Routing for Wireless Networks.
// The implementation supports both GG and RNG planarization algorithms.
//
// For more information on the routing algorithm, see the GPSRFLQ paper
// http://www.eecs.harvard.edu/~htk/publication/2000-mobi-karp-kung.pdf
//
simple GPSRFLQ like IGPSRFLQ
{
    parameters:
        // properties
        @display("i=block/routing");

        // context parameters
        string interfaceTableModule;   // The path to the InterfaceTable module
        string routingTableModule;
        string networkProtocolModule = default("^.networkLayer.ip");
        string outputInterface = default("wlan0");

        // GPSRFLQ parameters
        int planarizationMode @enum(0,1) = default(0); // 0 for GG, 1 for RNG
        string interfaces = default("*");
        double initialBeaconInterval @unit("s") = default(1s);
        double maxJitter @unit("s") = default(1s);
        double neighborValidityInterval @unit("s") = default(30s);
        int positionByteLength @unit(B) = default(2 * 4B);
        bool isUrban = default(true);
    gates:
        input ipIn;
        output ipOut;
}

//
// This module provides GPSRFLQ routing for multiple network protocols simultaneously.
//
module MultiGPSRFLQ like IGPSRFLQ
{
    parameters:
        @display("i=block/table");
        bool enableIPv4 = default(true);
        bool enableIPv6 = default(true);
        bool enableGeneric = default(true);
        string interfaceTableModule;   // The path to the InterfaceTable module
        string routingTableModule;
        *.interfaceTableModule = default(absPath(interfaceTableModule));
        ipv4.routingTableModule = default(absPath(routingTableModule)  + ".ipv4");
        ipv4.networkProtocolModule = default("^.^.networkLayer.ipv4.ip");
        ipv6.routingTableModule = default(absPath(routingTableModule)  + ".ipv6");
        ipv6.networkProtocolModule = default("^.^.networkLayer.ipv6.ipv6");
        generic.routingTableModule = default(absPath(routingTableModule)  + ".generic");
        generic.networkProtocolModule = default("^.^.networkLayer.generic.gnp");

    gates:
        input ipIn;
        output ipOut;

    submodules:
        ipv4: GPSRFLQ if enableIPv4 {
            @display("p=100,100");
        }
        ipv6: GPSRFLQ if enableIPv6 {
            @display("p=200,100");
        }
        generic: GPSRFLQ if enableGeneric {
            @display("p=300,100");
        }
        multiplexer: NetworkDatagramMultiplexer {
            @display("p=200,200");
        }

    connections allowunconnected:
        multiplexer.upperOut --> ipOut;
        ipIn --> multiplexer.upperIn;
        multiplexer.lowerOut++ --> ipv4.ipIn if enableIPv4;
        ipv4.ipOut --> multiplexer.lowerIn++ if enableIPv4;
        multiplexer.lowerOut++ --> ipv6.ipIn if enableIPv6;
        ipv6.ipOut --> multiplexer.lowerIn++ if enableIPv6;
        multiplexer.lowerOut++ --> generic.ipIn if enableGeneric;
        generic.ipOut --> multiplexer.lowerIn++ if enableGeneric;
}
