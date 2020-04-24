package vanetsim.simulations.vanet._nodes;

import inet.routing.aodv.Aodv;
import inet.node.inet.AdhocHost;
import inet.applications.contract.IApp;

module RSU extends AdhocHost
{
    parameters:
        @display("i=veins/sign/yellowdiamond");
        ipv4.configurator.networkConfiguratorModule = "";
    	string router;
    submodules:
        routing: <router> like IApp {
            @display("p=558,307");
        }
    connections allowunconnected:
        routing.socketOut --> at.in++;
        routing.socketIn <-- at.out++;
}
