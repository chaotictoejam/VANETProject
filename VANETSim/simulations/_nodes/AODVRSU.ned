package vanetsim.simulations._nodes;

import vanetsim.inetveins.common.lifecycle.NodeStatus;
import vanetsim.inetveins.common.packet.PcapRecorder;
import vanetsim.inetveins.linklayer.contract.IExternalNic;
import vanetsim.inetveins.linklayer.contract.ITunNic;
import vanetsim.inetveins.linklayer.contract.IWiredNic;
import vanetsim.inetveins.linklayer.contract.IWirelessNic;
import vanetsim.inetveins.linklayer.loopback.LoopbackInterface;
import vanetsim.inetveins.mobility.contract.IMobility;
import vanetsim.inetveins.networklayer.contract.IRoutingTable;
import vanetsim.inetveins.networklayer.common.InterfaceTable;
import vanetsim.inetveins.networklayer.contract.INetworkLayer;
import vanetsim.inetveins.power.contract.IEnergyStorage;
import vanetsim.inetveins.power.contract.IEnergyGenerator;
import vanetsim.inetveins.node.inet.INetworkNode;

import vanetsim.inetveins.applications.contract.IPingApp;
import vanetsim.inetveins.applications.contract.ISCTPApp;
import vanetsim.inetveins.applications.contract.ITCPApp;
import vanetsim.inetveins.applications.contract.IUDPApp;
import vanetsim.inetveins.transportlayer.contract.ISCTP;
import vanetsim.inetveins.transportlayer.contract.ITCP;
import vanetsim.inetveins.transportlayer.contract.IUDP;
import vanetsim.inetveins.applications.contract.ITunApp;

import vanetsim.veins.base.modules.BaseMobility;
import vanetsim.veins.base.modules.IBaseApplLayer;
import vanetsim.veins.modules.nic.INic80211p;

import vanetsim.inetveins.routing.aodv.AODVRouting;

module AODVRSU
{
    parameters:
        @display("i=device/pc2");
        @networkNode;
        @labels(node,ethernet-node,wireless-node);
        bool hasStatus = default(false);
        int numExtInterfaces = default(0);
        int numPcapRecorders = default(0); // no of PcapRecorders.
        int numTunInterfaces = default(0);
        string networkLayerType = default("IPv4NetworkLayer");
        string routingTableType = default("IPv4RoutingTable");
        bool multicastForwarding = default(false);
        string energyStorageType = default("");
        string energyGeneratorType = default("");
        routingTable.forwarding = forwarding;
        routingTable.multicastForwarding = multicastForwarding;   // for IPv4, IPv6, Generic
        *.interfaceTableModule = default(absPath(".interfaceTable"));
        *.routingTableModule = default(routingTableType != "" ? absPath(".routingTable") : "");
        *.energySourceModule = default(energyStorageType != "" ? absPath(".energyStorage") : "");
        
        string routingProtocol;
        string applType; //type of the application layer
        string nicType = default("Nic80211p"); // type of network interface card
        //string veinsmobilityType; //type of the mobility module

        int numTcpApps = default(0);  // no of TCP apps. Specify the app types in INI file with tcpApp[0..1].typename="TCPEchoApp" syntax
        int numUdpApps = default(0);  // no of UDP apps. Specify the app types in INI file with udpApp[0..1].typename="UDPVideoStreamCli" syntax
        int numSctpApps = default(0); // no of SCTP apps. Specify the app types in INI file with sctpApp[0..1].typename="SCTPServer" syntax
        int numPingApps = default(0);  // no of PING apps. Specify the app types in INI file with pingApp[0..1].typename="PingApp" syntax
        bool hasTcp = default(numTcpApps > 0);
        bool hasUdp = default(numUdpApps > 0);
        bool hasSctp = default(numSctpApps > 0);
        bool hasTun = default(numTunInterfaces > 0);
        string tcpType = default(firstAvailableOrEmpty("TCP", "TCP_lwIP", "TCP_NSC"));  // tcp implementation (e.g. ~TCP, ~TCP_lwIP, ~TCP_NSC) or ~TCPSpoof
        string udpType = default(firstAvailableOrEmpty("UDP"));
        string sctpType = default(firstAvailableOrEmpty("SCTP"));
        networkLayer.proxyARP = default(false);
        
        int numRadios = default(1);
        bool forwarding = true;
    gates:
        input radioIn[numRadios] @directIn;
        inout pppg[] @labels(PPPFrame-conn);
        inout ethg[] @labels(EtherFrame-conn);
    submodules:
        status: NodeStatus if hasStatus {
            @display("p=50,50");
        }
        energyStorage: <energyStorageType> like IEnergyStorage if energyStorageType != "" {
            parameters:
                @display("p=50,100;i=block/plug;is=s");
        }
        energyGenerator: <energyGeneratorType> like IEnergyGenerator if energyGeneratorType != "" {
            parameters:
                @display("p=50,150;i=block/plug;is=s");
        }
        // network layer
        networkLayer: <networkLayerType> like INetworkLayer {
            parameters:
                @display("p=329,287;q=queue");
        }
        // routing table
        routingTable: <routingTableType> like IRoutingTable if routingTableType != "" {
            parameters:
                @display("p=53,250;is=s");
        }
        // linklayer
        interfaceTable: InterfaceTable {
            parameters:
                @display("p=53,300;is=s");
        }
        pcapRecorder[numPcapRecorders]: PcapRecorder {
            @display("p=53,350,r,10");
        }
        lo0: LoopbackInterface {
            @display("p=78,406");
        }
        eth[sizeof(ethg)]: <default("EthernetInterface")> like IWiredNic {
            parameters:
                @display("p=368,406,row,60;q=txQueue");
        }
        ppp[sizeof(pppg)]: <default("PPPInterface")> like IWiredNic {
            parameters:
                @display("p=558,406,row,60;q=txQueue");
        }
        ext[numExtInterfaces]: <default("ExtInterface")> like IExternalNic {
            parameters:
                @display("p=149,406,row,10;q=txQueue;i=block/ifcard");
        }
        tun[numTunInterfaces]: <default("TunInterface")> like ITunNic {
            parameters:
                @display("p=213,406,row,10;q=txQueue;i=block/ifcard");
        }
        

        //Start Veins Submodules
        appl: <applType> like IBaseApplLayer {
            parameters:
                @display("p=60,50");
        }
        nic[numRadios]: <nicType> like INic80211p {
            parameters:
                @display("p=224,51");
        }
        //wlan[numRadios]: <default("Ieee80211Nic")> like IWirelessNic {
            //parameters:
                //@display("p=216,406,row,60;q=queue");
        //}
        mobility: BaseMobility {
            parameters:
                @display("p=130,172;i=block/cogwheel");
        }
        //End Veins Submodules
        
        tunApp[numTunInterfaces]: <> like ITunApp {
            parameters:
                @display("p=280,40");
        }
        tcpApp[numTcpApps]: <> like ITCPApp {
            parameters:
                @display("p=147,54,row,60");
        }
        tcp: <tcpType> like ITCP if hasTcp {
            parameters:
                @display("p=147,141");
        }
        udpApp[numUdpApps]: <> like IUDPApp {
            parameters:
                @display("p=329,54,row,60");
        }
        udp: <udpType> like IUDP if hasUdp {
            parameters:
                @display("p=329,141");
        }
        sctpApp[numSctpApps]: <> like ISCTPApp {
            parameters:
                @display("p=527,54,row,60");
        }
        sctp: <sctpType> like ISCTP if hasSctp {
            @display("p=527,141");
        }
        pingApp[numPingApps]: <default("PingApp")> like IPingApp {
            parameters:
                @display("p=635,141,row,60");
        }
        
        aodv: AODVRouting {
            @display("p=558,307");
        }
        
    connections allowunconnected:
        // connections to network outside
        networkLayer.ifOut++ --> lo0.upperLayerIn;
        lo0.upperLayerOut --> networkLayer.ifIn++;

        for i=0..sizeof(radioIn)-1 {
            radioIn[i] --> { @display("m=s"); } --> nic[i].radioIn;
            nic[i].upperLayerOut --> appl.lowerLayerIn;
            nic[i].upperLayerIn <-- appl.lowerLayerOut;
            nic[i].upperControlOut --> appl.lowerControlIn;
            nic[i].upperControlIn <-- appl.lowerControlOut;
        }

        for i=0..sizeof(ethg)-1 {
            ethg[i] <--> { @display("m=s"); } <--> eth[i].phys;
            eth[i].upperLayerOut --> networkLayer.ifIn++;
            eth[i].upperLayerIn <-- networkLayer.ifOut++;
        }

        for i=0..sizeof(pppg)-1 {
            pppg[i] <--> { @display("m=s"); } <--> ppp[i].phys;
            ppp[i].upperLayerOut --> networkLayer.ifIn++;
            ppp[i].upperLayerIn <-- networkLayer.ifOut++;
        }

        for i=0..numExtInterfaces-1 {
            ext[i].upperLayerOut --> networkLayer.ifIn++;
            ext[i].upperLayerIn <-- networkLayer.ifOut++;
        }

        for i=0..numTunInterfaces-1 {
            tun[i].upperLayerOut --> networkLayer.ifIn++;
            tun[i].upperLayerIn <-- networkLayer.ifOut++;
        }
        for i=0..numTcpApps-1 {
            tcpApp[i].tcpOut --> tcp.appIn++;
            tcpApp[i].tcpIn <-- tcp.appOut++;
        }

        tcp.ipOut --> networkLayer.transportIn++ if hasTcp;
        tcp.ipIn <-- networkLayer.transportOut++ if hasTcp;

        for i=0..numUdpApps-1 {
            udpApp[i].udpOut --> udp.appIn++;
            udpApp[i].udpIn <-- udp.appOut++;
        }

        udp.ipOut --> networkLayer.transportIn++ if hasUdp;
        udp.ipIn <-- networkLayer.transportOut++ if hasUdp;

        for i=0..numSctpApps-1 {
            sctpApp[i].sctpOut --> sctp.from_appl++;
            sctp.to_appl++ --> sctpApp[i].sctpIn;
        }
        sctp.to_ip --> networkLayer.transportIn++ if hasSctp;
        networkLayer.transportOut++ --> sctp.from_ip if hasSctp;

        for i=0..numPingApps-1 {
            networkLayer.pingOut++ --> pingApp[i].pingIn;
            networkLayer.pingIn++ <-- pingApp[i].pingOut;
        }

        for i=0..numTunInterfaces-1 {
            tunApp[i].tunOut --> tun[i].appIn if hasTun;
            tunApp[i].tunIn <-- tun[i].appOut if hasTun;
        }
        
        aodv.ipOut --> networkLayer.transportIn++;
        aodv.ipIn <-- networkLayer.transportOut++;

}
