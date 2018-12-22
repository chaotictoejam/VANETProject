//
// This program is property of its copyright holder. All rights reserved.
//

package vanetsim.node.geoadv;

import inet.node.inet.WirelessHost;
import vanetsim.routing.geoadv.IGEOADV;


//
// TODO
//
module GEOADVRouter extends WirelessHost
{
    parameters:
        @display("i=device/cellphone");
        forwarding = true;
        wlan[*].mgmtType = default("Ieee80211MgmtAdhoc");
        string geoadvType = default("GEOADV");
    submodules:
        gpsr: <geoadvType> like IGEOADV {
            @display("p=527,287");
        }
    connections:
        gpsr.ipOut --> networkLayer.transportIn++;
        gpsr.ipIn <-- networkLayer.transportOut++;
}
