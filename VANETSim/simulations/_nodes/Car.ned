package vanetsim.simulations._nodes;

import vanetsim.inet.applications.traci.TraCIDemo;
import vanetsim.inet.base.NotificationBoard;
import vanetsim.inet.linklayer.ieee80211.Ieee80211Nic;
import vanetsim.inet.mobility.contract.IMobility;
import vanetsim.inet.networklayer.IManetRouting;
import vanetsim.inet.networklayer.autorouting.ipv4.HostAutoConfigurator;
import vanetsim.inet.networklayer.common.InterfaceTable;
import vanetsim.inet.networklayer.ipv4.RoutingTable;
import vanetsim.inet.nodes.inet.NetworkLayer;
import vanetsim.inet.transport.udp.UDP;
import vanetsim.inet.applications.udpapp.UDPBasicBurst;


module Car
{
    parameters:
        @node();
        string mobilityType = default("TraCIMobility");
        networkLayer.configurator.networkConfiguratorModule = "";
        string routingProtocol @enum("AODVUU","DYMOUM","DYMO","DSRUU","OLSR","OLSR_ETX","DSDV_2","Batman","GPSR") = default("");  // used mobile routing protocol
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
        routingTable: RoutingTable {
            parameters:
                IPForward = true;
                routerId = "";
                routingFile = "";
                @display("p=60,326");
        }
        udp: UDP {
            parameters:
                @display("p=384,146");
        }
        networkLayer: NetworkLayer {
            parameters:
                proxyARP = false;
                @display("p=304,327;q=queue");
            gates:
                ifIn[1];
                ifOut[1];
        }
        udpApp: UDPBasicBurst {
            parameters:
                @display("p=384,46");
        }
        mobility: <mobilityType> like IMobility {
            parameters:
                @display("p=60,459");
        }
        wlan: Ieee80211Nic {
            parameters:
                @display("p=304,461;q=queue");
        }
        manetrouting: <routingProtocol> like IManetRouting if routingProtocol != "" {
            @display("p=522,307");
        }
    connections allowunconnected:
        udp.appOut++ --> udpApp.udpIn;
        udp.appIn++ <-- udpApp.udpOut;

        udp.ipOut --> networkLayer.transportIn++;
        udp.ipIn <-- networkLayer.transportOut++;

        wlan.upperLayerOut --> networkLayer.ifIn[0];
        wlan.upperLayerIn <-- networkLayer.ifOut[0];

        radioIn --> wlan.radioIn;

        networkLayer.transportOut++ --> manetrouting.from_ip if routingProtocol != "";
        networkLayer.transportIn++ <-- manetrouting.to_ip if routingProtocol != "";
}
