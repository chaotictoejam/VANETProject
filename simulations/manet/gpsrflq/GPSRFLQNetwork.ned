//
// This program is property of its copyright holder. All rights reserved.
//

package vanetsim.simulations.manet.gpsrflq;

import inet.common.scenario.ScenarioManager;
import inet.networklayer.configurator.ipv4.Ipv4NetworkConfigurator;
import inet.networklayer.ipv4.RoutingTableRecorder;
import vanetsim.node.gpsrflq.GPSRFLQRouter;
import inet.physicallayer.ieee80211.packetlevel.Ieee80211ScalarRadioMedium;

network GPSRFLQNetworkRandom
{
    parameters:
        int numHosts;
    submodules:
        radioMedium: Ieee80211ScalarRadioMedium {
            parameters:
                @display("p=100,200;is=s");
        }
        configurator: Ipv4NetworkConfigurator {
            parameters:
                config = xml("<config><interface hosts='*' address='145.236.x.x' netmask='255.255.0.0'/></config>");
                @display("p=100,100;is=s");
        }
        routingTableRecorder: RoutingTableRecorder {
            parameters:
                @display("p=100,300;is=s");
        }
        scenarioManager: ScenarioManager {
            parameters:
                script = default(xml("<scenario/>"));
                @display("p=100,400;is=s");
        }
        host[numHosts]: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070");
        }
    connections allowunconnected:
}

network GPSRFLQNetworkManual
{
    submodules:
        radioMedium: Ieee80211ScalarRadioMedium {
            parameters:
                @display("p=100,200;is=s");
        }
        configurator: Ipv4NetworkConfigurator {
            parameters:
                config = xml("<config><interface hosts='*' address='145.236.x.x' netmask='255.255.0.0'/></config>");
                @display("p=100,100;is=s");
        }
        routingTableRecorder: RoutingTableRecorder {
            parameters:
                @display("p=100,300;is=s");
        }
        host0: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=37,300");
        }
        host1: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=723,300");
        }
        host2: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=185,300");
        }
        host3: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=345,300");
        }
        host4: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=345,157");
        }
        host5: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=346,26");
        }
        host6: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=446,26");
        }
        host7: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=346,446");
        }
        host8: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=345,572");
        }
        host9: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=446,572");
        }
        host10: GPSRFLQRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=642,100");
        }
}
