package vanetsim.simulations.vanet._nodes;

import inet.routing.aodv.Aodv;
import inet.node.inet.AdhocHost;
import inet.routing.contract.IManetRouting;

module ManetCar extends AdhocHost
{
    parameters:
        @display("i=veins/node/car");
        ipv4.configurator.networkConfiguratorModule = "";
    	string router;
    submodules:
        routing: <router> like IManetRouting {
            @display("p=558,307");
        }
    connections allowunconnected:
        routing.ipOut --> at.in++;
        routing.ipIn <-- at.out++;
}

