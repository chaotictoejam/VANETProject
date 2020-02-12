package vanetsim.simulations.vanet.aodv;


import inet.networklayer.configurator.ipv4.HostAutoConfigurator;
import inet.node.inet.WirelessHost;
import inet.node.aodv.AodvRouter;

module AODVCar
{
    submodules:
        //Start Veins Submodules
        appl: <applType> like org.car2x.veins.base.modules.IBaseApplLayer {
            parameters:
                @display("p=60,50");
        }
        nic: <nicType> like org.car2x.veins.modules.nic.INic80211p {
            parameters:
                @display("p=224,51");
        }
        veinsmobility: <veinsmobilityType> like org.car2x.veins.base.modules.IMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
        }
        //End Veins Submodules
        
        ac_wlan: HostAutoConfigurator {
            @display("p=171,335");
        }
        aodv: AodvRouter {
            @display("p=558,307");
        }
    connections allowunconnected:
}
