package  vanetsim.simulations.old._nodes;

import vanetsim.old.inet.base.NotificationBoard;
import vanetsim.old.inet.networklayer.autorouting.ipv4.HostAutoConfigurator;
import vanetsim.old.inet.networklayer.common.InterfaceTable;
import vanetsim.old.inet.applications.traci.TraCIDemo;
import vanetsim.old.inet.mobility.single.LinearMobility;
import vanetsim.old.inet.networklayer.ipv4.RoutingTable;
import vanetsim.old.inet.transport.udp.UDP;
import vanetsim.old.inet.nodes.inet.NetworkLayer;
import vanetsim.old.inet.linklayer.ieee80211.Ieee80211Nic;
import vanetsim.old.inet.networklayer.IManetRouting;
import vanetsim.old.inet.mobility.contract.IMobility;

module RSU
{
    parameters:
        @node();
        string mobilityType;
        networkLayer.configurator.networkConfiguratorModule = "";
        string routingProtocol @enum("AODVUU","DYMOUM","DYMO","DSRUU","OLSR","OLSR_ETX","DSDV_2","Batman", "GPSR", "GPSRU") = default("");  // used mobile routing protocol
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
        mobility: <mobilityType> like IMobility {
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
