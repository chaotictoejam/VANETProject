package vanetsim.simulations._nodes;

import vanetsim.inet.applications.udpapp.UDPBasicBurst;
import vanetsim.inet.networklayer.common.InterfaceTable;
import vanetsim.inet.networklayer.configurator.ipv4.HostAutoConfigurator;
import vanetsim.inet.networklayer.contract.IManetRouting;
import vanetsim.inet.networklayer.ipv4.IPv4NetworkLayer;
import vanetsim.inet.networklayer.ipv4.IPv4RoutingTable;
import vanetsim.inet.transportlayer.udp.UDP;


module Car
{
    parameters:
        string applType; //type of the application layer
        string nicType = default("Nic80211p"); // type of network interface card
        string veinsmobilityType; //type of the mobility module
        
        networkLayer.configurator.networkConfiguratorModule = "";
        string routingProtocol @enum("AODVUU","DYMOUM","DYMO","DSRUU","OLSR","OLSR_ETX","DSDV_2","Batman","GPSR") = default("");  // used mobile routing protocol
    gates:
        input veinsradioIn @directIn; // gate for sendDirect
    submodules:
        //Start Veins Submodules
        appl: <applType> like vanetsim.veins.base.modules.IBaseApplLayer {
            parameters:
                @display("p=60,50");
        }

        nic: <nicType> like vanetsim.veins.modules.nic.INic80211p {
            parameters:
                @display("p=60,166");
        }

        veinsmobility: <veinsmobilityType> like vanetsim.veins.base.modules.IMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
        }
        //End Veins Submodules

        ac_wlan: HostAutoConfigurator {
            @display("p=296,402");
        }
        interfaceTable: InterfaceTable {
            parameters:
                @display("p=140,326");
        }
        routingTable: IPv4RoutingTable {
            parameters:
                forwarding = true;
                routerId = "";
                routingFile = "";
                @display("p=60,326");
        }
        udp: UDP {
            parameters:
                @display("p=384,146");
        }
        networkLayer: IPv4NetworkLayer {
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

        manetrouting: <routingProtocol> like IManetRouting if routingProtocol != "" {
            @display("p=522,307");
        }
    connections allowunconnected:
        udp.appOut++ --> udpApp.udpIn;
        udp.appIn++ <-- udpApp.udpOut;

        udp.ipOut --> networkLayer.transportIn++;
        udp.ipIn <-- networkLayer.transportOut++;

        nic.upperLayerOut --> appl.lowerLayerIn;
        nic.upperLayerIn <-- appl.lowerLayerOut;
        nic.upperControlOut --> appl.lowerControlIn;
        nic.upperControlIn <-- appl.lowerControlOut;

        veinsradioIn --> nic.radioIn;

        networkLayer.transportOut++ --> manetrouting.from_ip if routingProtocol != "";
        networkLayer.transportIn++ <-- manetrouting.to_ip if routingProtocol != "";
}
