package vanetsim.node.gpsrflq;

import inet.node.inet.AdhocHost;
import vanetsim.routing.gpsrflq.GPSRFLQ;

module GPSRFLQRouter extends AdhocHost
{
    submodules:
        gpsrflq: GPSRFLQ {
            parameters:
                @display("p=825,226");
        }
    connections:
        gpsrflq.ipOut --> tn.in++;
        gpsrflq.ipIn <-- tn.out++;
}
