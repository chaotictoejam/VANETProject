package vanetsim.simulations.vanet.geoadvp;

import vanetsim.routing.geoadvp.GEOADVP;
import inet.node.inet.AdhocHost;

module GEOADVPRSU extends AdhocHost
{
    parameters:
        @display("i=device/cellphone");
        ipv4.configurator.networkConfiguratorModule = "";
    submodules:
        routing: GEOADVP {
            @display("p=558,307");
        }
    connections allowunconnected:
        routing.ipOut --> at.in++;
        routing.ipIn <-- at.out++;
}