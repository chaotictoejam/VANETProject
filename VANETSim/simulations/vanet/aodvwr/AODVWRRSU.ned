package vanetsim.simulations.vanet.aodvwr;

import inet.networklayer.configurator.ipv4.HostAutoConfigurator;
import inet.node.inet.WirelessHost;

import vanetsim.routing.aodvwr.AODVWRRouting;

module AODVWRRSU extends WirelessHost
{
    submodules:
        ac_wlan: HostAutoConfigurator {
            @display("p=171,335");
        }
        aodv: AODVWRRouting {
            @display("p=558,307");
        }
        
    connections allowunconnected:
        aodv.ipOut --> networkLayer.transportIn++;
        aodv.ipIn <-- networkLayer.transportOut++;
}
