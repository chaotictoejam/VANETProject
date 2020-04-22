package vanetsim.simulations.vanet.geoadvpf;

import vanetsim.routing.geoadvpf.GEOADVPF;
import inet.node.inet.AdhocHost;

module GEOADVPFRSU extends AdhocHost
{
    parameters:
        @display("i=device/cellphone");
        ipv4.configurator.networkConfiguratorModule = "";
    submodules:
        routing: GEOADVPF {
            @display("p=558,307");
        }
    connections allowunconnected:
        routing.ipOut --> at.in++;
        routing.ipIn <-- at.out++;
}