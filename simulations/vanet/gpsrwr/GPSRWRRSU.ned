package vanetsim.simulations.vanet.gpsrwr;

import inet.networklayer.configurator.ipv4.HostAutoConfigurator;
import inet.node.inet.WirelessHost;

import vanetsim.routing.gpsrwr.GPSRWR;

module GPSRWRRSU extends WirelessHost
{
    submodules:
        ac_wlan: HostAutoConfigurator {
            @display("p=171,335");
        }
        gpsrwr: GPSRWR{
            @display("p=558,307");
        }
    connections allowunconnected:
        gpsrwr.ipOut --> networkLayer.transportIn++;
        gpsrwr.ipIn <-- networkLayer.transportOut++;
}
