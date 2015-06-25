package vanetsim.simulations._nodes;

import inet.applications.traci.TraCIDemo;
import inet.base.LifecycleController;
import inet.base.NotificationBoard;
import inet.linklayer.ieee80211.Ieee80211Nic;
import inet.mobility.contract.IMobility;
import inet.networklayer.autorouting.ipv4.HostAutoConfigurator;
import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv4.RoutingTable;
import inet.nodes.aodv.AODVRouter;
import inet.nodes.inet.NetworkLayer;
import inet.transport.udp.UDP;
import inet.world.radio.ChannelControl;


module AODVCar
{
    parameters:
        @node();
        string mobilityType = default("TraCIMobility");
        networkLayer.configurator.networkConfiguratorModule = "";
        //int numHosts;
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
        app: TraCIDemo {
            parameters:
                @display("p=384,46");
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
        wlan: Ieee80211Nic {
            parameters:
                @display("p=304,461;q=queue");
        }
        manetrouting: AODVRouter {
            @display("p=522,307");
        }
        configurator: IPv4NetworkConfigurator {
            parameters:
                config = xml("<config><interface hosts='*' address='145.236.x.x' netmask='255.255.0.0'/></config>");
                @display("p=50,100");
        }
        channelControl: ChannelControl {
            parameters:
                @display("p=50,50");
        }
        lifecycleController: LifecycleController {
            parameters:
                @display("p=50,200");
        }
    connections allowunconnected:
        udp.appOut++ --> app.udp$i;
        udp.appIn++ <-- app.udp$o;

        udp.ipOut --> networkLayer.transportIn++;
        udp.ipIn <-- networkLayer.transportOut++;

        wlan.upperLayerOut --> networkLayer.ifIn[0];
        wlan.upperLayerIn <-- networkLayer.ifOut[0];

        radioIn --> wlan.radioIn;
}
