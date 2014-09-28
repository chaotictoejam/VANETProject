package vanetsim.simulations.manet.aodv;

import org.car2x.veins.base.modules.*;
import org.car2x.veins.modules.nic.Nic80211p;

import inet.nodes.inet.NetworkLayer;
import inet.transport.udp.UDP;
import inet.networklayer.ipv4.IIGMP;

module Car
{
    parameters:
        string applType; //type of the application layer
        string veinsmobilityType; //type of the mobility module
    gates:
        input veinsradioIn; // gate for sendDirect
    submodules:
        appl: <applType> like org.car2x.veins.base.modules.IBaseApplLayer {
            parameters:
                @display("p=60,50");
        }

        nic: Nic80211p {
            parameters:
                @display("p=60,166");
        }

        veinsmobility: <veinsmobilityType> like org.car2x.veins.base.modules.IMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
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
        igmp: <igmpType> like IIGMP {
            parameters:
                @display("p=39,33");
        }
    connections:
        //nic.upperLayerOut --> appl.lowerLayerIn;
        //nic.upperLayerIn <-- appl.lowerLayerOut;
        nic.upperControlOut --> appl.lowerControlIn;
        nic.upperControlIn <-- appl.lowerControlOut;
        
        udp.appOut++ --> appl.lowerLayerIn;
        udp.appIn++ <-- appl.lowerLayerOut;

        udp.ipOut --> networkLayer.transportIn++;
        udp.ipIn <-- networkLayer.transportOut++;

        udp.ipv6Out --> networkLayer.transportIn++;
        udp.ipv6In <-- networkLayer.transportOut++;
        
        nic.upperLayerOut --> networkLayer.ifIn[0];
        nic.upperLayerIn <-- networkLayer.ifOut[0];
        
        igmp.routerOut --> networkLayer.igmpIn;
        igmp.routerIn <-- networkLayer.igmpOut;
        
        veinsradioIn --> nic.radioIn;

}
