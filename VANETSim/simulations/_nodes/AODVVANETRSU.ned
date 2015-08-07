package vanetsim.simulations._nodes;

import inet.base.NotificationBoard;
import inet.linklayer.ieee80211.Ieee80211Nic;
import inet.networklayer.autorouting.ipv4.HostAutoConfigurator;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv4.RoutingTable;
import inet.nodes.inet.NetworkLayer;
import vanetsim.vanetrouting.mobility.contract.IVANETMobility;

module AODVVANETRSU
{
    parameters:
        @node();
        string mobilityType;
        networkLayer.configurator.networkConfiguratorModule = "";
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
        networkLayer: NetworkLayer {
            parameters:
                proxyARP = false;
                @display("p=304,327;q=queue");
            gates:
                ifIn[1];
                ifOut[1];
        }
        wlan: Ieee80211Nic {
            parameters:
                @display("p=304,461;q=queue");
        }
    connections allowunconnected:

        wlan.upperLayerOut --> networkLayer.ifIn[0];
        wlan.upperLayerIn <-- networkLayer.ifOut[0];

        radioIn --> wlan.radioIn;
}
