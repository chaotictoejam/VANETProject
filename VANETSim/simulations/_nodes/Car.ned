package vanetsim.simulations._nodes;

import vanetsim.inet.node.inet.INetworkNode;

module Car
{
    parameters:
        string routingProtocol;
        string applType; //type of the application layer
        string nicType = default("Nic80211p"); // type of network interface card
        string veinsmobilityType; //type of the mobility module
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
                @display("p=224,51");
        }
        veinsmobility: <veinsmobilityType> like vanetsim.veins.base.modules.IMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
        }
        //End Veins Submodules

        routing: <routingProtocol> like INetworkNode {
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
