
package vanetsim.simulations.aodv;
import vanetsim.inet.common.lifecycle.LifecycleController;
import vanetsim.inet.common.scenario.ScenarioManager;
import vanetsim.inet.networklayer.configurator.ipv4.IPv4NetworkConfigurator;
import vanetsim.inet.networklayer.ipv4.RoutingTableRecorder;
import vanetsim.inet.physicallayer.contract.packetlevel.IRadioMedium;
import vanetsim.veins.base.modules.BaseMobility;

import  vanetsim.simulations._nodes.RSU;

network AODVSim extends vanetsim.simulations._nodes.Scenario
{
    string radioMediumType;
    submodules:
        radioMedium: <radioMediumType> like IRadioMedium {
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
}