
package vanetsim.node.aodvwr;

import inet.node.inet.AdhocHost;
import vanetsim.routing.aodvwr.AODVWR;

module AODVWRRouter extends AdhocHost
{
    submodules:
        aodvwr: AODVWR {
            @display("p=825,226");
        }
    connections:
        aodvwr.socketOut --> at.in++;
        aodvwr.socketIn <-- at.out++;
}

