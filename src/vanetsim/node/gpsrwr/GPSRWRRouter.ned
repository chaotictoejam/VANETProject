package vanetsim.node.gpsrwr;

import inet.node.inet.AdhocHost;
import vanetsim.routing.gpsrwr.GPSRWR;

module GPSRWRRouter extends AdhocHost
{
    submodules:
        gpsrwr: GPSRWR {
            parameters:
                @display("p=825,226");
        }
    connections:
        gpsrwr.ipOut --> tn.in++;
        gpsrwr.ipIn <-- tn.out++;
}
