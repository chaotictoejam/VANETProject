package vanetsim.simulations.vanet.gpsrwr;

import inet.node.inet.AdhocHost;
import vanetsim.routing.gpsrwr.GPSRWR;

module GPSRWRRSU extends AdhocHost
{
    parameters:
        @display("i=device/cellphone");
        ipv4.configurator.networkConfiguratorModule = "";
    submodules:
        routing: GPSRWR {
            @display("p=558,307");
        }
    connections allowunconnected:
        routing.ipOut --> at.in++;
        routing.ipIn <-- at.out++;
}