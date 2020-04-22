package vanetsim.simulations.vanet.gpsrflq;

import inet.node.inet.AdhocHost;
import vanetsim.routing.gpsrflq.GPSRFLQ;

module GPSRFLQRSU extends AdhocHost
{
    parameters:
        @display("i=device/cellphone");
        ipv4.configurator.networkConfiguratorModule = "";
    submodules:
        routing: GPSRFLQ {
            @display("p=558,307");
        }
    connections allowunconnected:
        routing.ipOut --> at.in++;
        routing.ipIn <-- at.out++;
}

