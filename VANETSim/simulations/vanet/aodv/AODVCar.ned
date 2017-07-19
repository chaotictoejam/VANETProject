package vanetsim.simulations.vanet.aodv;


import inet.networklayer.configurator.ipv4.HostAutoConfigurator;
import inet.node.inet.WirelessHost;
import inet.routing.aodv.AODVRouting;

module AODVCar extends WirelessHost
{
    submodules:
        ac_wlan: HostAutoConfigurator {
            @display("p=171,335");
        }
        aodv: AODVRouting {
            @display("p=558,307");
        }
    connections allowunconnected:
        aodv.ipOut --> networkLayer.transportIn++;
        aodv.ipIn <-- networkLayer.transportOut++;
}
