//
// Copyright (C) 2008 Christoph Sommer <christoph.sommer@informatik.uni-erlangen.de>
//
// Documentation for these modules is at http://veins.car2x.org/
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//

package vanetsim.simulations.aodv;

import org.car2x.veins.base.modules.*;
import org.car2x.veins.modules.nic.Nic80211p;

import inet.networklayer.ipv4.RoutingTable;
import inet.nodes.inet.NetworkLayer;

import inet.transport.ISCTP;
import inet.transport.ITCP;
import inet.transport.IUDP;


module Car
{
    parameters:
        string applType; //type of the application layer
        string nicType = default("Nic80211p"); // type of network interface card
        string veinsmobilityType; //type of the mobility module
        
        int numTcpApps = default(0);  // no of TCP apps. Specify the app types in INI file with tcpApp[0..1].typename="TCPEchoApp" syntax
        int numUdpApps = default(0);  // no of UDP apps. Specify the app types in INI file with udpApp[0..1].typename="UDPVideoStreamCli" syntax
        int numSctpApps = default(0); // no of SCTP apps. Specify the app types in INI file with sctpApp[0..1].typename="SCTPServer" syntax
        bool hasTcp = default(numTcpApps>0);
        bool hasUdp = default(numUdpApps>0);
        bool hasSctp = default(numSctpApps>0);
        string tcpType = default(firstAvailable("TCP", "TCP_lwIP", "TCP_NSC", "TCP_None"));  // tcp implementation (e.g. ~TCP, ~TCP_lwIP, ~TCP_NSC) or ~TCPSpoof
        string udpType = default(firstAvailable("UDP","UDP_None"));
        string sctpType = default(firstAvailable("SCTP","SCTP_None"));
        
    gates:
        input veinsradioIn; // gate for sendDirect
    submodules:
        appl: <applType> like org.car2x.veins.base.modules.IBaseApplLayer {
            parameters:
                @display("p=60,50");
        }

        nic: <nicType> like org.car2x.veins.modules.nic.INic80211p {
            parameters:
                @display("p=60,166");
        }

        veinsmobility: <veinsmobilityType> like org.car2x.veins.base.modules.IMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
        }
        
        routingTable: RoutingTable {
            parameters:
                IPForward = true;
                routerId = "";
                routingFile = "";
                @display("p=60,326");
        }
		
		tcpApp[numTcpApps]: <> like inet.applications.ITCPApp {
            parameters:
                @display("p=186,54,row,60");
        }
        tcp: <tcpType> like inet.transport.ITCP if hasTcp {
            parameters:
                @display("p=186,141");
        }
        udpApp[numUdpApps]: <> like inet.applications.IUDPApp {
            parameters:
                @display("p=336,54,row,60");
        }
        udp: <udpType> like inet.transport.IUDP if hasUdp {
            parameters:
                @display("p=336,141");
        }
        sctpApp[numSctpApps]: <> like inet.applications.ISCTPApp {
            parameters:
                @display("p=501,54,row,60");
        }
        sctp: <sctpType> like inet.transport.ISCTP if hasSctp {
            @display("p=501,141");
        }
        
        networkLayer: NetworkLayer {
            parameters:
                proxyARP = false;
                @display("p=304,327;q=queue");
            gates:
                ifIn[0];
                ifOut[0];
        }
    connections:
        for i=0..numTcpApps-1 {
            tcpApp[i].tcpOut --> tcp.appIn++;
            tcpApp[i].tcpIn <-- tcp.appOut++;
        }

        tcp.ipv6Out --> networkLayer.transportIn++ if hasTcp;
        tcp.ipv6In <-- networkLayer.transportOut++ if hasTcp;

        for i=0..numUdpApps-1 {
            udpApp[i].udpOut --> udp.appIn++;
            udpApp[i].udpIn <-- udp.appOut++;
        }

        udp.ipv6Out --> networkLayer.transportIn++ if hasUdp;
        udp.ipv6In <-- networkLayer.transportOut++ if hasUdp;
        udp.ipOut --> networkLayer.transportIn++ if hasUdp;
        udp.ipIn <-- networkLayer.transportOut++ if hasUdp;

        for i=0..numSctpApps-1 {
            sctpApp[i].sctpOut --> sctp.from_appl++;
            sctp.to_appl++ --> sctpApp[i].sctpIn;
        }
        sctp.to_ipv6 --> networkLayer.transportIn++ if hasSctp;
        networkLayer.transportOut++ --> sctp.from_ipv6 if hasSctp;
        
        nic.upperLayerOut --> appl.lowerLayerIn;
        nic.upperLayerIn <-- appl.lowerLayerOut;
        nic.upperControlOut --> appl.lowerControlIn;
        nic.upperControlIn <-- appl.lowerControlOut;

        veinsradioIn --> nic.radioIn;
}
