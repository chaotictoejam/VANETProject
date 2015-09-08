package vanetsim.simulations._nodes;

import inet.base.LifecycleController;
import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.networklayer.ipv4.RoutingTableRecorder;
import inet.world.radio.IdealChannelModel;
import inet.world.traci.aodvTraCIScenarioManagerLaunchd;


module AODVVANETROUTEHighway
{
    submodules:
        channelControl: IdealChannelModel {
            parameters:
                @display("p=50,50");
        }
        manager: aodvTraCIScenarioManagerLaunchd {
            parameters:
                @display("p=512,128");
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
}
