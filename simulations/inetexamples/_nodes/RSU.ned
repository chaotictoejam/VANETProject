package vanetsim.simulations.inetexamples._nodes;

import inet.node.inet.INetworkNode;
import org.car2x.veins.base.modules.BaseMobility;

module RSU
{
    parameters:
        string routingProtocol;
        string applType; //type of the application layer
        string nicType = default("Nic80211p"); // type of network interface card
    gates:
        input veinsradioIn @directIn; // gate for sendDirect
    submodules:

        //Start Veins Submodules
        appl: <applType> like org.car2x.veins.base.modules.IBaseApplLayer {
            parameters:
                @display("p=60,50");
        }
        nic: <nicType> like org.car2x.veins.modules.nic.INic80211p {
            parameters:
                @display("p=60,166");
        }
        mobility: BaseMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
        }
        //End Veins Submodules

        //routing: <routingProtocol> like INetworkNode {
            //parameters:
                //@display("i=device/pocketpc_s;r=,,#707070");
        //}
    connections:
        nic.upperLayerOut --> appl.lowerLayerIn;
        nic.upperLayerIn <-- appl.lowerLayerOut;
        nic.upperControlOut --> appl.lowerControlIn;
        nic.upperControlIn <-- appl.lowerControlOut;

        veinsradioIn --> nic.radioIn;
}
