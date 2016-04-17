package vanetsim.simulations._nodes;

import vanetsim.inet.common.lifecycle.LifecycleController;
import vanetsim.inet.common.scenario.ScenarioManager;
import vanetsim.inet.networklayer.configurator.ipv4.IPv4NetworkConfigurator;
import vanetsim.inet.networklayer.ipv4.RoutingTableRecorder;
import vanetsim.inet.node.inet.INetworkNode;
import vanetsim.inet.physicallayer.idealradio.IdealRadioMedium;

module Car
{
    parameters:
        string applType; //type of the application layer
        string nicType = default("Nic80211p"); // type of network interface card
        string veinsmobilityType; //type of the mobility module

        string routingProtocol @enum("AODVRouter", "OLSR","OLSR_ETX","DSDV_2","Batman","GPSR") = default("");  // used mobile routing protocol
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

        radioMedium: IdealRadioMedium {
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
        manetrouting: <routingProtocol> like INetworkNode if routingProtocol != "" {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070");
        }
    connections allowunconnected:
        nic.upperLayerOut --> appl.lowerLayerIn;
        nic.upperLayerIn <-- appl.lowerLayerOut;
        nic.upperControlOut --> appl.lowerControlIn;
        nic.upperControlIn <-- appl.lowerControlOut;

        veinsradioIn --> nic.radioIn;
}
