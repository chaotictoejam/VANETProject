package vanetsim.simulations.vanet.geoadv;

import vanetsim.routing.geoadv.GEOADV;
import inet.node.inet.AdhocHost;

module GEOADVRSU extends AdhocHost
{
    parameters:
        @display("i=device/cellphone");
        ipv4.configurator.networkConfiguratorModule = "";
    submodules:
        routing: GEOADV {
            @display("p=558,307");
        }
    connections allowunconnected:
        routing.ipOut --> at.in++;
        routing.ipIn <-- at.out++;
}