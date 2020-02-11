package vanetsim.node.geoadv;

import inet.node.inet.AdhocHost;
import vanetsim.routing.contract.IVANETRouting;

module GEOADVRouter extends AdhocHost
{
    submodules:
        geoadv: <geoadvType> like IVANETRouting {
            parameters:
                @display("p=825,226");
        }
    connections:
        geoadv.ipOut --> tn.in++;
        geoadv.ipIn <-- tn.out++;
}