
package vanetsim.nodes;

import vanetsim.routing.aodvvanet.AODVVANETRouting;
import inet.nodes.inet.WirelessHost;


module AODVVANETRouter extends WirelessHost
{
    parameters:
        @display("i=device/cellphone");
        IPForward = true;
        //wlan[*].mgmtType = default("Ieee80211MgmtAdhoc");
    submodules:
        aodvvanet: AODVVANETRouting {
            @display("p=558,307");
        }
    connections:
        aodvvanet.to_ip --> networkLayer.transportIn++;
        aodvvanet.from_ip <-- networkLayer.transportOut++;
}
