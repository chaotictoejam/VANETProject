package vanetsim.simulations.vanet.aodvwr;

import inet.node.inet.AdhocHost;
import vanetsim.routing.aodvwr.AODVWR;

module AODVWRCar extends AdhocHost
{
    submodules:
        routing: AODVWR {
            @display("p=558,307");
        }
    connections allowunconnected:
        routing.socketOut --> at.in++;
        routing.socketIn <-- at.out++;
}
