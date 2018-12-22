
package vanetsim.simulations.vanet.gpsrflq;

import inet.common.lifecycle.LifecycleController;
import inet.common.scenario.ScenarioManager;
import inet.networklayer.configurator.ipv4.IPv4NetworkConfigurator;
import inet.networklayer.ipv4.RoutingTableRecorder;
import inet.physicallayer.contract.packetlevel.IRadioMedium;

import veins_inet.VeinsInetManager;

network GPSRFLQSim
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
        rsu[1]: GPSRFLQRSU {
            @display("p=150,140;b=10,10,oval");
        }
        manager: VeinsInetManager;
}