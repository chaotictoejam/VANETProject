//
// This program is property of its copyright holder. All rights reserved.
//

package vanetsim.node.gpsrwr;

import inet.node.inet.WirelessHost;
import vanetsim.routing.gpsrwr.IGPSRWR;


//
// TODO
//
module GPSRWRRouter extends WirelessHost
{
    parameters:
        @display("i=device/cellphone");
        forwarding = true;
        wlan[*].mgmtType = default("Ieee80211MgmtAdhoc");
        string gpsrType = default("GPSRWR");
    submodules:
        gpsr: <gpsrType> like IGPSRWR {
            @display("p=527,287");
        }
    connections:
        gpsr.ipOut --> networkLayer.transportIn++;
        gpsr.ipIn <-- networkLayer.transportOut++;
}
