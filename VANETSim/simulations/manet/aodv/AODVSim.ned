package vanetsim.simulations.manet.aodv;

import inet.base.LifecycleController;
import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.networklayer.ipv4.RoutingTableRecorder;
import inet.nodes.inet.AdhocHost;
import inet.world.radio.ChannelControl;
import inet.world.scenario.ScenarioManager;


network AODVSim extends Highway
{
    parameters:
        int numHosts;
    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=50,50");
        }
        configurator: IPv4NetworkConfigurator {
            parameters:
                config = xml("<config><interface hosts='*' address='145.236.x.x' netmask='255.255.0.0'/></config>");
                @display("p=50,100");
        }
        routingTableRecorder: RoutingTableRecorder {
            parameters:
                @display("p=50,150");
        }
        lifecycleController: LifecycleController {
            parameters:
                @display("p=50,200");
        }
        scenarioManager: ScenarioManager {
            parameters:
                script = default(xml("<scenario/>"));
                @display("p=50,250");
        }
        rsu[1]: RSU {
            @display("p=150,140;b=10,10,oval");
        }
    connections allowunconnected:
}