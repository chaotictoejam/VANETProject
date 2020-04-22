package vanetsim.simulations.vanet.gpsr;

import inet.node.inet.AdhocHost;
import inet.routing.gpsr.Gpsr;

module GPSRCar extends AdhocHost
{
    parameters:
        @display("i=device/cellphone");
        ipv4.configurator.networkConfiguratorModule = "";
    submodules:
        routing: Gpsr {
            @display("p=558,307");
        }
    connections allowunconnected:
        routing.ipOut --> at.in++;
        routing.ipIn <-- at.out++;
}

