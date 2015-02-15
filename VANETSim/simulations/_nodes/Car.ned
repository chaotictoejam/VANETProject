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


import vanetsim.src.inet.networklayer.ipv4.RoutingTable;
import vanetsim.src.inet.networklayer.IManetRouting;

import vanetsim.src.inet.nodes.inet.NetworkLayer;

import vanetsim.src.inet.transport.ISCTP;
import vanetsim.src.inet.transport.ITCP;
import vanetsim.src.inet.transport.IUDP;
import vanetsim.src.inet.nodes.inet.StandardHost;
import vanetsim.src.inet.world.radio.ChannelControl;
import vanetsim.src.inet.nodes.inet.AdhocHost;


module Car extends StandardHost
{
	parameters:
        string applType; //type of the application layer
        string nicType = default("Nic80211p"); // type of network interface card
        string veinsmobilityType; //type of the mobility module
        string udpAppType = default("");
        
        networkLayer.configurator.networkConfiguratorModule = "";
        
        @display("bgb=424,541"); 
        
        string routingProtocol @enum("AODVUU","DSRUU") = default("AODVUU");  // used mobile routing protocol
    gates:
        input veinsradioIn; // gate for sendDirect
    submodules:
        appl: <applType> like vanetsim.src.veins.base.modules.IBaseApplLayer {
            parameters:
                @display("p=60,50");
        }

        nic: <nicType> like vanetsim.src.veins.modules.nic.INic80211p {
            parameters:
                @display("p=60,166");
        }

        veinsmobility: <veinsmobilityType> like vanetsim.src.veins.base.modules.IMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
        }
        
        channelControl: ChannelControl {
            parameters:
                @display("p=50,50");
        }
        
        manetrouting: <routingProtocol> like IManetRouting if routingProtocol != "" {
            @display("p=522,307");
        }
        
        //host[numHosts]: AdhocHost {
        //    parameters:
        //        @display("i=device/pocketpc_s;r=,,#707070");
        //}
    connections:
       networkLayer.transportOut++ --> manetrouting.from_ip if routingProtocol != "";
       networkLayer.transportIn++ <-- manetrouting.to_ip if routingProtocol != "";
       
       nic.upperLayerOut --> appl.lowerLayerIn;
       nic.upperLayerIn <-- appl.lowerLayerOut;
       nic.upperControlOut --> appl.lowerControlIn;
       nic.upperControlIn <-- appl.lowerControlOut;

       veinsradioIn --> nic.radioIn;
}