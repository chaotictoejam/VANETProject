//
// This program is property of its copyright holder. All rights reserved.
//

package vanetsim.simulations.manet.gpsrwr;

import inet.common.scenario.ScenarioManager;
import inet.networklayer.configurator.ipv4.Ipv4NetworkConfigurator;
import inet.networklayer.ipv4.RoutingTableRecorder;
import vanetsim.node.gpsrwr.GPSRWRRouter;
import inet.physicallayer.ieee80211.packetlevel.Ieee80211ScalarRadioMedium;

network GPSRWRNetworkRandom
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
        host[numHosts]: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070");
        }
    connections allowunconnected:
}

network GPSRWRNetworkManual
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
        host0: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=37,300");
        }
        host1: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=723,300");
        }
        host2: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=185,300");
        }
        host3: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=345,300");
        }
        host4: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=345,157");
        }
        host5: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=346,26");
        }
        host6: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=446,26");
        }
        host7: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=346,446");
        }
        host8: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=345,572");
        }
        host9: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=446,572");
        }
        host10: GPSRWRRouter {
            parameters:
                @display("i=device/pocketpc_s;r=,,#707070;p=642,100");
        }
}
