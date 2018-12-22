package vanetsim.simulations.vanet.gpsrflq;


import inet.networklayer.configurator.ipv4.HostAutoConfigurator;
import inet.node.inet.WirelessHost;
import vanetsim.routing.gpsrflq.GPSRFLQ;

module GPSRFLQRSU extends WirelessHost
{
    submodules:
        ac_wlan: HostAutoConfigurator {
            @display("p=171,335");
        }
        gpsr: GPSRFLQ {
            @display("p=558,307");
        }
    connections allowunconnected:
        gpsr.ipOut --> networkLayer.transportIn++;
        gpsr.ipIn <-- networkLayer.transportOut++;
}
