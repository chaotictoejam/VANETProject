package vanetsim.simulations._nodes;

import inet.base.NotificationBoard;
import inet.networklayer.autorouting.ipv4.HostAutoConfigurator;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv4.RoutingTable;
import inet.nodes.inet.NetworkLayer;
import vanetsim.vanetrouting.mobility.contract.IVANETMobility;
import vanetsim.veins.base.modules.IBaseApplLayer;
import vanetsim.veins.modules.nic.INic80211p;


module AODVVANETRSU
{
    parameters:
        @node();
        string mobilityType;
        string applType = default("TraCIDemoRSU11p"); //type of the application layer
        string nicType = default("Nic80211p"); // type of network interface card
        string routingProtocol @enum("AODVVANET") = default("");  // used mobile routing protocol
    gates:
        input radioIn @directIn;
    submodules:
        notificationBoard: NotificationBoard {
            parameters:
                @display("p=140,462");
        }
        ac_wlan: HostAutoConfigurator {
            @display("p=296,402");
        }
        interfaceTable: InterfaceTable {
            parameters:
                @display("p=140,326");
        }
        mobility: <mobilityType> like IVANETMobility {
            parameters:
                @display("p=60,459");
        }
        routingTable: RoutingTable {
            parameters:
                IPForward = true;
                routerId = "";
                routingFile = "";
                @display("p=60,326");
        }
        nic: <nicType> like INic80211p {
            parameters:
                @display("p=304,461;q=queue");
        }
        appl: <applType> like IBaseApplLayer {
            parameters:
                @display("p=60,50");
        }
        //networkLayer: NetworkLayer {
        //    parameters:
        //        proxyARP = false;
        //        @display("p=304,327;q=queue");
        //    gates:
        //        ifIn[1];
        //        ifOut[1];
        //}
    connections allowunconnected:
        nic.upperLayerOut --> appl.lowerLayerIn;
        nic.upperLayerIn <-- appl.lowerLayerOut;
        nic.upperControlOut --> appl.lowerControlIn;
        nic.upperControlIn <-- appl.lowerControlOut;

        radioIn --> nic.radioIn;
}
