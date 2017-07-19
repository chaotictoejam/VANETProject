package vanetsim.simulations.vanet.gpsr;


import inet.networklayer.configurator.ipv4.HostAutoConfigurator;
import inet.node.inet.WirelessHost;
import inet.routing.gpsr.GPSR;

module GPSRRSU extends WirelessHost
{
    submodules:
        ac_wlan: HostAutoConfigurator {
            @display("p=171,335");
        }
        gpsr: GPSR {
            @display("p=558,307");
        }
    connections allowunconnected:
        gpsr.ipOut --> networkLayer.transportIn++;
        gpsr.ipIn <-- networkLayer.transportOut++;
}
