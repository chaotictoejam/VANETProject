package vanetsim.simulations.olsr;

import vanetsim.src.veins.base.modules.*;
import vanetsim.src.veins.modules.nic.Nic80211p;

module Car
{
    parameters:
        string applType; //type of the application layer
        string veinsmobilityType; //type of the mobility module
    gates:
        input veinsradioIn; // gate for sendDirect
    submodules:
        appl: <applType> like vanetsim.src.veins.base.modules.IBaseApplLayer {
            parameters:
                @display("p=60,50");
        }

        nic: Nic80211p {
            parameters:
                @display("p=60,166");
        }

        veinsmobility: <veinsmobilityType> like vanetsim.src.veins.base.modules.IMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
        }
        
    connections:
        nic.upperLayerOut --> appl.lowerLayerIn;
        nic.upperLayerIn <-- appl.lowerLayerOut;
        nic.upperControlOut --> appl.lowerControlIn;
        nic.upperControlIn <-- appl.lowerControlOut;

        veinsradioIn --> nic.radioIn;

}
