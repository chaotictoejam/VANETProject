package vanetsim.simulations.vanet.aodv;

import inet.routing.aodv.Aodv;
import inet.node.inet.AdhocHost;

module AODVRSU extends AdhocHost
{
    parameters:
        @display("i=device/cellphone");
        ipv4.configurator.networkConfiguratorModule = "";
    submodules:
        routing: Aodv {
            @display("p=558,307");
        }
    connections allowunconnected:
        routing.socketOut --> at.in++;
        routing.socketIn <-- at.out++;
}
