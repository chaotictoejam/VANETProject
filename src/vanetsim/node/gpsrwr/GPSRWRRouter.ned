package vanetsim.node.gpsrwr;

import inet.node.inet.AdhocHost;
import vanetsim.routing.gpsrwr.GPSRWR;

module GPSRWRRouter extends AdhocHost
{
    submodules:
        gpsr: GPSRWR {
            parameters:
                @display("p=825,226");
        }
    connections:
        gpsr.ipOut --> tn.in++;
        gpsr.ipIn <-- tn.out++;
}
