package vanetsim.simulations._nodes;

import vanetsim.inet.common.lifecycle.LifecycleController;
import vanetsim.inet.common.scenario.ScenarioManager;
import vanetsim.inet.networklayer.configurator.ipv4.IPv4NetworkConfigurator;
import vanetsim.inet.networklayer.ipv4.RoutingTableRecorder;
import vanetsim.inet.physicallayer.idealradio.IdealRadioMedium;
import vanetsim.veins.base.modules.BaseMobility;

module RSU
{
    parameters:
        string applType; //type of the application layer
        string nicType = default("Nic80211p"); // type of network interface card
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
        mobility: BaseMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
        }
        //End Veins Submodules
    connections:
        nic.upperLayerOut --> appl.lowerLayerIn;
        nic.upperLayerIn <-- appl.lowerLayerOut;
        nic.upperControlOut --> appl.lowerControlIn;
        nic.upperControlIn <-- appl.lowerControlOut;
		
        veinsradioIn --> nic.radioIn;
}
