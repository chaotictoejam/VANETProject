#
# OMNeT++/OMNEST Makefile for VANETSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -DWITH_TCP_COMMON -DWITH_TCP_INET -DWITH_IPv4 -DWITH_IPv6 -DWITH_GENERIC -DWITH_FLOOD -DWITH_UDP -DWITH_RTP -DWITH_SCTP -DWITH_DHCP -DWITH_ETHERNET -DWITH_PPP -DWITH_MPLS -DWITH_OSPFv2 -DWITH_BGPv4 -DWITH_PIM -DWITH_AODV -DWITH_RIP -DWITH_MANET -DWITH_POWER -DWITH_RADIO -DWITH_IEEE80211 -DWITH_IEEE802154 -DWITH_APSKRADIO -DWITH_IDEALWIRELESS -DWITH_TUN -DWITH_BMAC -DWITH_LMAC -DWITH_CSMA -DWITH_XMAC -DWITH_80211MESH -DWITH_xMIPv6 -DWITH_TRACI
#

# Name of target to be created (-o option)
TARGET = VANETSim$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I. \
    -Idissertation \
    -Idissertation/applications \
    -Idissertation/applications/traci \
    -Idissertation/linklayer \
    -Idissertation/linklayer/ieee80211 \
    -Idissertation/linklayer/ieee80211/mgmt \
    -Idissertation/linklayer/ieee80211mesh \
    -Idissertation/linklayer/ieee80211mesh/vanetlocator \
    -Idissertation/mobility \
    -Idissertation/mobility/common \
    -Idissertation/mobility/contract \
    -Idissertation/mobility/single \
    -Idissertation/networklayer \
    -Idissertation/networklayer/manetrouting \
    -Idissertation/networklayer/manetrouting/gpsr \
    -Idissertation/networklayer/vanetrouting \
    -Idissertation/networklayer/vanetrouting/aodvvanet \
    -Idissertation/networklayer/vanetrouting/aodvvanet/aodvvanet \
    -Idissertation/networklayer/vanetrouting/aodvvanetrouting \
    -Idissertation/networklayer/vanetrouting/base \
    -Idissertation/networklayer/vanetrouting/bitcar \
    -Idissertation/networklayer/vanetrouting/geoadv \
    -Idissertation/networklayer/vanetrouting/rbvtr \
    -Idissertation/nodes \
    -Idissertation/nodes/aodvvanet \
    -Idissertation/nodes/bitcar \
    -Idissertation/nodes/rbvtr \
    -Idissertation/util \
    -Idissertation/world \
    -Idissertation/world/traci \
    -Iinet \
    -Iinet/applications \
    -Iinet/applications/common \
    -Iinet/applications/dhcp \
    -Iinet/applications/ethernet \
    -Iinet/applications/generic \
    -Iinet/applications/httptools \
    -Iinet/applications/netperfmeter \
    -Iinet/applications/pingapp \
    -Iinet/applications/rtpapp \
    -Iinet/applications/sctpapp \
    -Iinet/applications/tcpapp \
    -Iinet/applications/traci \
    -Iinet/applications/trafgen \
    -Iinet/applications/udpapp \
    -Iinet/applications/util \
    -Iinet/base \
    -Iinet/battery \
    -Iinet/battery/models \
    -Iinet/generic \
    -Iinet/linklayer \
    -Iinet/linklayer/channels \
    -Iinet/linklayer/common \
    -Iinet/linklayer/configurator \
    -Iinet/linklayer/contract \
    -Iinet/linklayer/ethernet \
    -Iinet/linklayer/ethernet/switch \
    -Iinet/linklayer/idealwireless \
    -Iinet/linklayer/ieee80211 \
    -Iinet/linklayer/ieee80211/mac \
    -Iinet/linklayer/ieee80211/mgmt \
    -Iinet/linklayer/ieee80211/mgmt/wpa2 \
    -Iinet/linklayer/ieee80211/radio \
    -Iinet/linklayer/ieee80211/radio/errormodel \
    -Iinet/linklayer/ieee80211mesh \
    -Iinet/linklayer/ieee80211mesh/ethernet \
    -Iinet/linklayer/ieee80211mesh/hwmp \
    -Iinet/linklayer/ieee80211mesh/locator \
    -Iinet/linklayer/ieee80211mesh/mgmt \
    -Iinet/linklayer/ieee80211mesh/nodes \
    -Iinet/linklayer/ieee8021d \
    -Iinet/linklayer/ieee8021d/common \
    -Iinet/linklayer/ieee8021d/relay \
    -Iinet/linklayer/ieee8021d/rstp \
    -Iinet/linklayer/ieee8021d/stp \
    -Iinet/linklayer/ieee8021d/tester \
    -Iinet/linklayer/loopback \
    -Iinet/linklayer/queue \
    -Iinet/linklayer/radio \
    -Iinet/linklayer/radio/propagation \
    -Iinet/mobility \
    -Iinet/mobility/common \
    -Iinet/mobility/contract \
    -Iinet/mobility/group \
    -Iinet/mobility/single \
    -Iinet/mobility/static \
    -Iinet/networklayer \
    -Iinet/networklayer/arp \
    -Iinet/networklayer/autorouting \
    -Iinet/networklayer/autorouting/ipv4 \
    -Iinet/networklayer/autorouting/ipv6 \
    -Iinet/networklayer/bgpv4 \
    -Iinet/networklayer/bgpv4/BGPMessage \
    -Iinet/networklayer/common \
    -Iinet/networklayer/contract \
    -Iinet/networklayer/diffserv \
    -Iinet/networklayer/icmpv6 \
    -Iinet/networklayer/internetcloud \
    -Iinet/networklayer/ipv4 \
    -Iinet/networklayer/ipv6 \
    -Iinet/networklayer/ipv6tunneling \
    -Iinet/networklayer/ldp \
    -Iinet/networklayer/manetrouting \
    -Iinet/networklayer/manetrouting/aodv-uu \
    -Iinet/networklayer/manetrouting/aodv-uu/aodv-uu \
    -Iinet/networklayer/manetrouting/base \
    -Iinet/networklayer/manetrouting/dsr \
    -Iinet/networklayer/manetrouting/dsr/dsr-uu \
    -Iinet/networklayer/manetrouting/dymo \
    -Iinet/networklayer/manetrouting/dymo/dymoum \
    -Iinet/networklayer/manetrouting/dymo_fau \
    -Iinet/networklayer/manetrouting/olsr \
    -Iinet/networklayer/mpls \
    -Iinet/networklayer/ospfv2 \
    -Iinet/networklayer/ospfv2/interface \
    -Iinet/networklayer/ospfv2/messagehandler \
    -Iinet/networklayer/ospfv2/neighbor \
    -Iinet/networklayer/ospfv2/router \
    -Iinet/networklayer/routing \
    -Iinet/networklayer/routing/aodv \
    -Iinet/networklayer/routing/dymo \
    -Iinet/networklayer/routing/rip \
    -Iinet/networklayer/rsvp_te \
    -Iinet/networklayer/ted \
    -Iinet/networklayer/xmipv6 \
    -Iinet/nodes \
    -Iinet/nodes/aodv \
    -Iinet/nodes/bgp \
    -Iinet/nodes/dymo \
    -Iinet/nodes/ethernet \
    -Iinet/nodes/httptools \
    -Iinet/nodes/inet \
    -Iinet/nodes/internetcloud \
    -Iinet/nodes/ipv6 \
    -Iinet/nodes/mpls \
    -Iinet/nodes/ospfv2 \
    -Iinet/nodes/rip \
    -Iinet/nodes/rtp \
    -Iinet/nodes/wireless \
    -Iinet/nodes/xmipv6 \
    -Iinet/securityModule \
    -Iinet/securityModule/message \
    -Iinet/status \
    -Iinet/transport \
    -Iinet/transport/contract \
    -Iinet/transport/rtp \
    -Iinet/transport/rtp/profiles \
    -Iinet/transport/rtp/profiles/avprofile \
    -Iinet/transport/sctp \
    -Iinet/transport/tcp \
    -Iinet/transport/tcp/flavours \
    -Iinet/transport/tcp/queues \
    -Iinet/transport/tcp_common \
    -Iinet/transport/udp \
    -Iinet/util \
    -Iinet/util/headerserializers \
    -Iinet/util/headerserializers/headers \
    -Iinet/util/headerserializers/ipv4 \
    -Iinet/util/headerserializers/ipv4/headers \
    -Iinet/util/headerserializers/ipv6 \
    -Iinet/util/headerserializers/ipv6/headers \
    -Iinet/util/headerserializers/sctp \
    -Iinet/util/headerserializers/sctp/headers \
    -Iinet/util/headerserializers/tcp \
    -Iinet/util/headerserializers/tcp/headers \
    -Iinet/util/headerserializers/udp \
    -Iinet/util/headerserializers/udp/headers \
    -Iinet/util/messageprinters \
    -Iinet/world \
    -Iinet/world/annotations \
    -Iinet/world/httptools \
    -Iinet/world/obstacles \
    -Iinet/world/powercontrol \
    -Iinet/world/radio \
    -Iinet/world/scenario \
    -Iinet/world/traci

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/dissertation/applications/traci/aodvTraCI.o \
    $O/dissertation/applications/traci/aodvTraCITestApp.o \
    $O/dissertation/applications/traci/bitcarTraCIDemo.o \
    $O/dissertation/applications/traci/bitcarTraCITestApp.o \
    $O/dissertation/applications/traci/rbvtrTraCIDemo.o \
    $O/dissertation/applications/traci/rbvtrTraCITestApp.o \
    $O/dissertation/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.o \
    $O/dissertation/linklayer/ieee80211mesh/vanetlocator/VanetBigUint.o \
    $O/dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.o \
    $O/dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.o \
    $O/dissertation/mobility/common/LineSegmentsVANETMobilityBase.o \
    $O/dissertation/mobility/common/MovingVANETMobilityBase.o \
    $O/dissertation/mobility/common/VANETMobilityAccess.o \
    $O/dissertation/mobility/common/VANETMobilityBase.o \
    $O/dissertation/mobility/contract/IVANETMobility.o \
    $O/dissertation/mobility/single/aodvTraCIMobility.o \
    $O/dissertation/mobility/single/bitcarTraCIMobility.o \
    $O/dissertation/mobility/single/LinearVANETMobility.o \
    $O/dissertation/mobility/single/rbvtrTraCIMobility.o \
    $O/dissertation/networklayer/manetrouting/gpsr/GPSR.o \
    $O/dissertation/networklayer/manetrouting/gpsr/PositionTable.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.o \
    $O/dissertation/networklayer/vanetrouting/base/VanetAddress.o \
    $O/dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.o \
    $O/dissertation/networklayer/vanetrouting/base/VanetRoutingBase.o \
    $O/dissertation/networklayer/vanetrouting/bitcar/BITCARRouteData.o \
    $O/dissertation/networklayer/vanetrouting/bitcar/BITCARRouting.o \
    $O/dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouteData.o \
    $O/dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouting.o \
    $O/dissertation/util/GlobalWirelessLinkInspectorVanet.o \
    $O/dissertation/world/traci/aodvTraCIScenarioManager.o \
    $O/dissertation/world/traci/aodvTraCIScenarioManagerLaunchd.o \
    $O/dissertation/world/traci/bitcarTraCIScenarioManager.o \
    $O/dissertation/world/traci/bitcarTraCIScenarioManagerLaunchd.o \
    $O/dissertation/world/traci/rbvtrTraCIScenarioManager.o \
    $O/dissertation/world/traci/rbvtrTraCIScenarioManagerLaunchd.o \
    $O/dissertation/world/traci/vanetTraCIColor.o \
    $O/inet/applications/common/ApplicationBase.o \
    $O/inet/applications/dhcp/DHCPClient.o \
    $O/inet/applications/dhcp/DHCPServer.o \
    $O/inet/applications/ethernet/EtherAppCli.o \
    $O/inet/applications/ethernet/EtherAppSrv.o \
    $O/inet/applications/ethernet/EthernetApplication.o \
    $O/inet/applications/ethernet/EtherTrafGen.o \
    $O/inet/applications/generic/IPvXTrafGen.o \
    $O/inet/applications/generic/IPvXTrafSink.o \
    $O/inet/applications/httptools/HttpBrowser.o \
    $O/inet/applications/httptools/HttpBrowserBase.o \
    $O/inet/applications/httptools/HttpBrowserDirect.o \
    $O/inet/applications/httptools/HttpNodeBase.o \
    $O/inet/applications/httptools/HttpRandom.o \
    $O/inet/applications/httptools/HttpServer.o \
    $O/inet/applications/httptools/HttpServerBase.o \
    $O/inet/applications/httptools/HttpServerDirect.o \
    $O/inet/applications/httptools/HttpServerDirectEvilA.o \
    $O/inet/applications/httptools/HttpServerDirectEvilB.o \
    $O/inet/applications/httptools/HttpServerEvilA.o \
    $O/inet/applications/httptools/HttpServerEvilB.o \
    $O/inet/applications/httptools/HttpUtils.o \
    $O/inet/applications/netperfmeter/NetPerfMeter.o \
    $O/inet/applications/pingapp/PingApp.o \
    $O/inet/applications/pingapp/PingTestApp.o \
    $O/inet/applications/rtpapp/RTPApplication.o \
    $O/inet/applications/sctpapp/SCTPClient.o \
    $O/inet/applications/sctpapp/SCTPNatPeer.o \
    $O/inet/applications/sctpapp/SCTPNatServer.o \
    $O/inet/applications/sctpapp/SCTPPeer.o \
    $O/inet/applications/sctpapp/SCTPServer.o \
    $O/inet/applications/tcpapp/TCPAppBase.o \
    $O/inet/applications/tcpapp/TCPBasicClientApp.o \
    $O/inet/applications/tcpapp/TCPEchoApp.o \
    $O/inet/applications/tcpapp/TCPGenericCliAppBasePromis.o \
    $O/inet/applications/tcpapp/TCPGenericSrvApp.o \
    $O/inet/applications/tcpapp/TCPGenericSrvThread.o \
    $O/inet/applications/tcpapp/TCPSessionApp.o \
    $O/inet/applications/tcpapp/TCPSinkApp.o \
    $O/inet/applications/tcpapp/TCPSrvHostApp.o \
    $O/inet/applications/tcpapp/TelnetApp.o \
    $O/inet/applications/traci/TraCIDemo.o \
    $O/inet/applications/traci/TraCITestApp.o \
    $O/inet/applications/trafgen/TrafGen.o \
    $O/inet/applications/trafgen/TrafGenPar.o \
    $O/inet/applications/udpapp/PASERUdpTrafficReceiver.o \
    $O/inet/applications/udpapp/PASERUdpTrafficSender.o \
    $O/inet/applications/udpapp/UDPBasicApp.o \
    $O/inet/applications/udpapp/UDPBasicBurst.o \
    $O/inet/applications/udpapp/UDPBasicBurstNotification.o \
    $O/inet/applications/udpapp/UDPBasicFlooding.o \
    $O/inet/applications/udpapp/UDPEchoApp.o \
    $O/inet/applications/udpapp/UDPSink.o \
    $O/inet/applications/udpapp/UDPVideoStreamCli.o \
    $O/inet/applications/udpapp/UDPVideoStreamCli2.o \
    $O/inet/applications/udpapp/UDPVideoStreamSvr.o \
    $O/inet/applications/udpapp/UDPVideoStreamSvr2.o \
    $O/inet/applications/util/AddressModule.o \
    $O/inet/base/AbstractQueue.o \
    $O/inet/base/BasicModule.o \
    $O/inet/base/ByteArray.o \
    $O/inet/base/ByteArrayBuffer.o \
    $O/inet/base/ByteArrayMessage.o \
    $O/inet/base/Compat.o \
    $O/inet/base/Coord.o \
    $O/inet/base/erfc.o \
    $O/inet/base/InterfaceOperations.o \
    $O/inet/base/Join.o \
    $O/inet/base/LifecycleController.o \
    $O/inet/base/MMapBoard.o \
    $O/inet/base/ModuleAccess.o \
    $O/inet/base/NedFunctions.o \
    $O/inet/base/NodeOperations.o \
    $O/inet/base/NotificationBoard.o \
    $O/inet/base/NotifierConsts.o \
    $O/inet/base/OperationalBase.o \
    $O/inet/base/PassiveQueueBase.o \
    $O/inet/base/ProtocolMap.o \
    $O/inet/base/QueueBase.o \
    $O/inet/base/ReassemblyBuffer.o \
    $O/inet/base/ResultFilters.o \
    $O/inet/base/Sink.o \
    $O/inet/base/Topology.o \
    $O/inet/base/UnimplementedModule.o \
    $O/inet/battery/models/BasicBattery.o \
    $O/inet/battery/models/InetSimpleBattery.o \
    $O/inet/generic/RPSSocket.o \
    $O/inet/linklayer/channels/LinkFailureManager.o \
    $O/inet/linklayer/channels/MyThroughputMeteringChannel.o \
    $O/inet/linklayer/channels/ProgramedFailureChannel.o \
    $O/inet/linklayer/common/MACBase.o \
    $O/inet/linklayer/common/WirelessMacBase.o \
    $O/inet/linklayer/configurator/Ieee8021dInterfaceData.o \
    $O/inet/linklayer/configurator/L2NetworkConfigurator.o \
    $O/inet/linklayer/configurator/L2NodeConfigurator.o \
    $O/inet/linklayer/contract/MACAddress.o \
    $O/inet/linklayer/ethernet/EtherBus.o \
    $O/inet/linklayer/ethernet/EtherEncap.o \
    $O/inet/linklayer/ethernet/EtherFrameClassifier.o \
    $O/inet/linklayer/ethernet/EtherHub.o \
    $O/inet/linklayer/ethernet/EtherLLC.o \
    $O/inet/linklayer/ethernet/EtherMAC.o \
    $O/inet/linklayer/ethernet/EtherMACBase.o \
    $O/inet/linklayer/ethernet/EtherMACFullDuplex.o \
    $O/inet/linklayer/ethernet/switch/MACAddressTable.o \
    $O/inet/linklayer/ethernet/switch/MACRelayUnit.o \
    $O/inet/linklayer/idealwireless/IdealWirelessMac.o \
    $O/inet/linklayer/ieee80211/mac/FrameBlock.o \
    $O/inet/linklayer/ieee80211/mac/Ieee80211DataRate.o \
    $O/inet/linklayer/ieee80211/mac/Ieee80211eClassifier.o \
    $O/inet/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/inet/linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.o \
    $O/inet/linklayer/ieee80211/mac/MultiQueue.o \
    $O/inet/linklayer/ieee80211/mac/WifiMode.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211Etx.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/inet/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtAdhoc.o \
    $O/inet/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtBase.o \
    $O/inet/linklayer/ieee80211/radio/BerParseFile.o \
    $O/inet/linklayer/ieee80211/radio/Ieee80211RadioModel.o \
    $O/inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o \
    $O/inet/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o \
    $O/inet/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o \
    $O/inet/linklayer/ieee80211mesh/ethernet/EtherEncapMesh.o \
    $O/inet/linklayer/ieee80211mesh/hwmp/hwmp-rtable.o \
    $O/inet/linklayer/ieee80211mesh/hwmp/hwmp.o \
    $O/inet/linklayer/ieee80211mesh/locator/BigUint.o \
    $O/inet/linklayer/ieee80211mesh/locator/LocatorModule.o \
    $O/inet/linklayer/ieee80211mesh/locator/LocatorModuleClient.o \
    $O/inet/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.o \
    $O/inet/linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.o \
    $O/inet/linklayer/ieee80211mesh/mgmt/lwmpls_data.o \
    $O/inet/linklayer/ieee8021d/common/STPBase.o \
    $O/inet/linklayer/ieee8021d/relay/Ieee8021dRelay.o \
    $O/inet/linklayer/ieee8021d/rstp/RSTP.o \
    $O/inet/linklayer/ieee8021d/stp/STP.o \
    $O/inet/linklayer/ieee8021d/tester/STPTester.o \
    $O/inet/linklayer/loopback/Loopback.o \
    $O/inet/linklayer/queue/AlgorithmicDropperBase.o \
    $O/inet/linklayer/queue/DropTailQueue.o \
    $O/inet/linklayer/queue/FIFOQueue.o \
    $O/inet/linklayer/queue/PriorityScheduler.o \
    $O/inet/linklayer/queue/REDDropper.o \
    $O/inet/linklayer/queue/SchedulerBase.o \
    $O/inet/linklayer/queue/ThresholdDropper.o \
    $O/inet/linklayer/queue/WeightedFairQueue.o \
    $O/inet/linklayer/queue/WRRScheduler.o \
    $O/inet/linklayer/radio/GenericRadioModel.o \
    $O/inet/linklayer/radio/IdealRadio.o \
    $O/inet/linklayer/radio/Modulation.o \
    $O/inet/linklayer/radio/Radio.o \
    $O/inet/linklayer/radio/propagation/FreeSpaceModel.o \
    $O/inet/linklayer/radio/propagation/LogNormalShadowingModel.o \
    $O/inet/linklayer/radio/propagation/NakagamiModel.o \
    $O/inet/linklayer/radio/propagation/RayleighModel.o \
    $O/inet/linklayer/radio/propagation/RiceModel.o \
    $O/inet/linklayer/radio/propagation/SUIModel.o \
    $O/inet/linklayer/radio/propagation/TwoRayGroundModel.o \
    $O/inet/mobility/common/LineSegmentsMobilityBase.o \
    $O/inet/mobility/common/MobilityAccess.o \
    $O/inet/mobility/common/MobilityBase.o \
    $O/inet/mobility/common/MovingMobilityBase.o \
    $O/inet/mobility/contract/IMobility.o \
    $O/inet/mobility/group/MoBANCoordinator.o \
    $O/inet/mobility/group/MoBANLocal.o \
    $O/inet/mobility/group/Posture.o \
    $O/inet/mobility/group/PostureTransition.o \
    $O/inet/mobility/single/ANSimMobility.o \
    $O/inet/mobility/single/BonnMotionFileCache.o \
    $O/inet/mobility/single/BonnMotionMobility.o \
    $O/inet/mobility/single/ChiangMobility.o \
    $O/inet/mobility/single/CircleMobility.o \
    $O/inet/mobility/single/ConstSpeedMobility.o \
    $O/inet/mobility/single/GaussMarkovMobility.o \
    $O/inet/mobility/single/LaptopModelManager.o \
    $O/inet/mobility/single/LinearMobility.o \
    $O/inet/mobility/single/LinearNodeDistributionMobility.o \
    $O/inet/mobility/single/MassMobility.o \
    $O/inet/mobility/single/Ns2MotionMobility.o \
    $O/inet/mobility/single/RandomWPMobility.o \
    $O/inet/mobility/single/RectangleMobility.o \
    $O/inet/mobility/single/TraCIMobility.o \
    $O/inet/mobility/single/TractorMobility.o \
    $O/inet/mobility/single/TurtleMobility.o \
    $O/inet/mobility/static/StaticGridMobility.o \
    $O/inet/mobility/static/StationaryMobility.o \
    $O/inet/networklayer/arp/ARP.o \
    $O/inet/networklayer/arp/IARPCache.o \
    $O/inet/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o \
    $O/inet/networklayer/autorouting/ipv4/HostAutoConfigurator.o \
    $O/inet/networklayer/autorouting/ipv4/HostAutoConfigurator2.o \
    $O/inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o \
    $O/inet/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o \
    $O/inet/networklayer/autorouting/ipv4/WirelessRoutingEntry.o \
    $O/inet/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o \
    $O/inet/networklayer/bgpv4/BGPFSM.o \
    $O/inet/networklayer/bgpv4/BGPRouting.o \
    $O/inet/networklayer/bgpv4/BGPSession.o \
    $O/inet/networklayer/bgpv4/BGPMessage/BGPUpdate.o \
    $O/inet/networklayer/common/InterfaceEntry.o \
    $O/inet/networklayer/common/InterfaceMatcher.o \
    $O/inet/networklayer/common/InterfaceTable.o \
    $O/inet/networklayer/contract/IPSocket.o \
    $O/inet/networklayer/contract/IPv4Address.o \
    $O/inet/networklayer/contract/IPv4ControlInfo.o \
    $O/inet/networklayer/contract/IPv6Address.o \
    $O/inet/networklayer/contract/IPv6ControlInfo.o \
    $O/inet/networklayer/contract/IPvXAddress.o \
    $O/inet/networklayer/contract/IPvXAddressResolver.o \
    $O/inet/networklayer/diffserv/BehaviorAggregateClassifier.o \
    $O/inet/networklayer/diffserv/DiffservUtil.o \
    $O/inet/networklayer/diffserv/DSCPMarker.o \
    $O/inet/networklayer/diffserv/MultiFieldClassifier.o \
    $O/inet/networklayer/diffserv/SingleRateThreeColorMeter.o \
    $O/inet/networklayer/diffserv/TokenBucketMeter.o \
    $O/inet/networklayer/diffserv/TwoRateThreeColorMeter.o \
    $O/inet/networklayer/icmpv6/ICMPv6.o \
    $O/inet/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/inet/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/inet/networklayer/internetcloud/CloudDelayerBase.o \
    $O/inet/networklayer/internetcloud/MatrixCloudDelayer.o \
    $O/inet/networklayer/ipv4/ErrorHandling.o \
    $O/inet/networklayer/ipv4/ICMP.o \
    $O/inet/networklayer/ipv4/IGMPv2.o \
    $O/inet/networklayer/ipv4/IPv4.o \
    $O/inet/networklayer/ipv4/IPv4Datagram.o \
    $O/inet/networklayer/ipv4/IPv4FragBuf.o \
    $O/inet/networklayer/ipv4/IPv4InterfaceData.o \
    $O/inet/networklayer/ipv4/IPv4Route.o \
    $O/inet/networklayer/ipv4/IPv4RouteRule.o \
    $O/inet/networklayer/ipv4/NetworkInfo.o \
    $O/inet/networklayer/ipv4/RoutingTable.o \
    $O/inet/networklayer/ipv4/RoutingTableParser.o \
    $O/inet/networklayer/ipv4/RoutingTableRecorder.o \
    $O/inet/networklayer/ipv6/IPv6.o \
    $O/inet/networklayer/ipv6/IPv6Datagram.o \
    $O/inet/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/inet/networklayer/ipv6/IPv6ExtensionHeaders.o \
    $O/inet/networklayer/ipv6/IPv6FragBuf.o \
    $O/inet/networklayer/ipv6/IPv6InterfaceData.o \
    $O/inet/networklayer/ipv6/RoutingTable6.o \
    $O/inet/networklayer/ipv6tunneling/IPv6Tunneling.o \
    $O/inet/networklayer/ldp/LDP.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o \
    $O/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o \
    $O/inet/networklayer/manetrouting/base/ManetAddress.o \
    $O/inet/networklayer/manetrouting/base/ManetNetfilterHook.o \
    $O/inet/networklayer/manetrouting/base/ManetRoutingBase.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.o \
    $O/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.o \
    $O/inet/networklayer/manetrouting/dymo/dymo_msg_struct.o \
    $O/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o \
    $O/inet/networklayer/manetrouting/dymo/dymo_um_omnet.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/blacklist.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/rtable.o \
    $O/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o \
    $O/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.o \
    $O/inet/networklayer/manetrouting/olsr/OLSR.o \
    $O/inet/networklayer/manetrouting/olsr/OLSROPT.o \
    $O/inet/networklayer/manetrouting/olsr/OLSR_ETX.o \
    $O/inet/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o \
    $O/inet/networklayer/manetrouting/olsr/OLSR_ETX_state.o \
    $O/inet/networklayer/manetrouting/olsr/OLSR_rtable.o \
    $O/inet/networklayer/manetrouting/olsr/OLSR_state.o \
    $O/inet/networklayer/mpls/LIBTable.o \
    $O/inet/networklayer/mpls/MPLS.o \
    $O/inet/networklayer/mpls/MPLSPacket.o \
    $O/inet/networklayer/ospfv2/OSPFConfigReader.o \
    $O/inet/networklayer/ospfv2/OSPFRouting.o \
    $O/inet/networklayer/ospfv2/interface/OSPFInterface.o \
    $O/inet/networklayer/ospfv2/interface/OSPFInterfaceState.o \
    $O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/inet/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/inet/networklayer/ospfv2/messagehandler/HelloHandler.o \
    $O/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/inet/networklayer/ospfv2/messagehandler/MessageHandler.o \
    $O/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.o \
    $O/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.o \
    $O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/inet/networklayer/ospfv2/router/ASExternalLSA.o \
    $O/inet/networklayer/ospfv2/router/LSA.o \
    $O/inet/networklayer/ospfv2/router/NetworkLSA.o \
    $O/inet/networklayer/ospfv2/router/OSPFArea.o \
    $O/inet/networklayer/ospfv2/router/OSPFRouter.o \
    $O/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.o \
    $O/inet/networklayer/ospfv2/router/RouterLSA.o \
    $O/inet/networklayer/ospfv2/router/SummaryLSA.o \
    $O/inet/networklayer/routing/aodv/AODVRouteData.o \
    $O/inet/networklayer/routing/aodv/AODVRouting.o \
    $O/inet/networklayer/routing/dymo/DYMORouteData.o \
    $O/inet/networklayer/routing/dymo/xDYMO.o \
    $O/inet/networklayer/routing/rip/RIPRouting.o \
    $O/inet/networklayer/rsvp_te/RSVP.o \
    $O/inet/networklayer/rsvp_te/SimpleClassifier.o \
    $O/inet/networklayer/rsvp_te/Utils.o \
    $O/inet/networklayer/ted/LinkStateRouting.o \
    $O/inet/networklayer/ted/TED.o \
    $O/inet/networklayer/xmipv6/BindingCache.o \
    $O/inet/networklayer/xmipv6/BindingUpdateList.o \
    $O/inet/networklayer/xmipv6/MobilityHeader.o \
    $O/inet/networklayer/xmipv6/xMIPv6.o \
    $O/inet/securityModule/Security.o \
    $O/inet/securityModule/SecurityWPA2.o \
    $O/inet/status/NodeStatus.o \
    $O/inet/transport/contract/SCTPSocket.o \
    $O/inet/transport/contract/TCPSocket.o \
    $O/inet/transport/contract/TCPSocketMap.o \
    $O/inet/transport/contract/UDPSocket.o \
    $O/inet/transport/rtp/reports.o \
    $O/inet/transport/rtp/RTCP.o \
    $O/inet/transport/rtp/RTCPPacket.o \
    $O/inet/transport/rtp/RTP.o \
    $O/inet/transport/rtp/RTPInnerPacket.o \
    $O/inet/transport/rtp/RTPPacket.o \
    $O/inet/transport/rtp/RTPParticipantInfo.o \
    $O/inet/transport/rtp/RTPPayloadReceiver.o \
    $O/inet/transport/rtp/RTPPayloadSender.o \
    $O/inet/transport/rtp/RTPProfile.o \
    $O/inet/transport/rtp/RTPReceiverInfo.o \
    $O/inet/transport/rtp/RTPSenderInfo.o \
    $O/inet/transport/rtp/sdes.o \
    $O/inet/transport/rtp/profiles/avprofile/RTPAVProfile.o \
    $O/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o \
    $O/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o \
    $O/inet/transport/sctp/SCTP.o \
    $O/inet/transport/sctp/SCTPAlg.o \
    $O/inet/transport/sctp/SCTPAssociationAddIP.o \
    $O/inet/transport/sctp/SCTPAssociationBase.o \
    $O/inet/transport/sctp/SCTPAssociationEventProc.o \
    $O/inet/transport/sctp/SCTPAssociationRcvMessage.o \
    $O/inet/transport/sctp/SCTPAssociationSendAll.o \
    $O/inet/transport/sctp/SCTPAssociationStreamReset.o \
    $O/inet/transport/sctp/SCTPAssociationUtil.o \
    $O/inet/transport/sctp/SCTPCCFunctions.o \
    $O/inet/transport/sctp/SCTPGapList.o \
    $O/inet/transport/sctp/SCTPMessage.o \
    $O/inet/transport/sctp/SCTPNatHook.o \
    $O/inet/transport/sctp/SCTPNatTable.o \
    $O/inet/transport/sctp/SCTPQueue.o \
    $O/inet/transport/sctp/SCTPReceiveStream.o \
    $O/inet/transport/sctp/SCTPSendStream.o \
    $O/inet/transport/sctp/SCTPSSFunctions.o \
    $O/inet/transport/tcp/TCP.o \
    $O/inet/transport/tcp/TCPConnectionBase.o \
    $O/inet/transport/tcp/TCPConnectionEventProc.o \
    $O/inet/transport/tcp/TCPConnectionRcvSegment.o \
    $O/inet/transport/tcp/TCPConnectionSackUtil.o \
    $O/inet/transport/tcp/TCPConnectionUtil.o \
    $O/inet/transport/tcp/TCPSACKRexmitQueue.o \
    $O/inet/transport/tcp/flavours/DumbTCP.o \
    $O/inet/transport/tcp/flavours/TCPBaseAlg.o \
    $O/inet/transport/tcp/flavours/TCPNewReno.o \
    $O/inet/transport/tcp/flavours/TCPNoCongestionControl.o \
    $O/inet/transport/tcp/flavours/TCPReno.o \
    $O/inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.o \
    $O/inet/transport/tcp/flavours/TCPTahoe.o \
    $O/inet/transport/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/inet/transport/tcp/flavours/TCPVegas.o \
    $O/inet/transport/tcp/flavours/TCPWestwood.o \
    $O/inet/transport/tcp/queues/TCPByteStreamRcvQueue.o \
    $O/inet/transport/tcp/queues/TCPByteStreamSendQueue.o \
    $O/inet/transport/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/inet/transport/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/inet/transport/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/inet/transport/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/inet/transport/tcp_common/TCPSegment.o \
    $O/inet/transport/tcp_common/TCPSpoof.o \
    $O/inet/transport/udp/UDP.o \
    $O/inet/util/common.o \
    $O/inet/util/Delayer.o \
    $O/inet/util/dijktraKShortest.o \
    $O/inet/util/GlobalWirelessLinkInspector.o \
    $O/inet/util/int128.o \
    $O/inet/util/Macho.o \
    $O/inet/util/MessageChecker.o \
    $O/inet/util/NetAnimTrace.o \
    $O/inet/util/opp_utils.o \
    $O/inet/util/OrdinalBasedDropper.o \
    $O/inet/util/OrdinalBasedDuplicator.o \
    $O/inet/util/PacketDump.o \
    $O/inet/util/PatternMatcher.o \
    $O/inet/util/PcapDump.o \
    $O/inet/util/PcapRecorder.o \
    $O/inet/util/TCPDump.o \
    $O/inet/util/ThruputMeter.o \
    $O/inet/util/ThruputMeteringChannel.o \
    $O/inet/util/uint128.o \
    $O/inet/util/WirelessGetNeig.o \
    $O/inet/util/WirelessNumHops.o \
    $O/inet/util/XMLUtils.o \
    $O/inet/util/headerserializers/TCPIPchecksum.o \
    $O/inet/util/headerserializers/ipv4/ICMPSerializer.o \
    $O/inet/util/headerserializers/ipv4/IGMPSerializer.o \
    $O/inet/util/headerserializers/ipv4/IPv4Serializer.o \
    $O/inet/util/headerserializers/ipv6/IPv6Serializer.o \
    $O/inet/util/headerserializers/sctp/SCTPSerializer.o \
    $O/inet/util/headerserializers/tcp/TCPSerializer.o \
    $O/inet/util/headerserializers/udp/UDPSerializer.o \
    $O/inet/util/messageprinters/InetPacketBytesPrinter.o \
    $O/inet/util/messageprinters/InetPacketPrinter.o \
    $O/inet/util/messageprinters/InetPacketPrinter2.o \
    $O/inet/world/annotations/AnnotationDummy.o \
    $O/inet/world/annotations/AnnotationManager.o \
    $O/inet/world/httptools/HttpController.o \
    $O/inet/world/obstacles/Obstacle.o \
    $O/inet/world/obstacles/ObstacleControl.o \
    $O/inet/world/powercontrol/PowerControlManager.o \
    $O/inet/world/radio/ChannelAccess.o \
    $O/inet/world/radio/ChannelControl.o \
    $O/inet/world/radio/IdealChannelModel.o \
    $O/inet/world/radio/IdealChannelModelAccess.o \
    $O/inet/world/scenario/ScenarioManager.o \
    $O/inet/world/traci/TraCIColor.o \
    $O/inet/world/traci/TraCIScenarioManager.o \
    $O/inet/world/traci/TraCIScenarioManagerLaunchd.o \
    $O/dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.o \
    $O/dissertation/networklayer/manetrouting/gpsr/GPSR_m.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.o \
    $O/dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.o \
    $O/dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o \
    $O/dissertation/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o \
    $O/dissertation/networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.o \
    $O/dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.o \
    $O/dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.o \
    $O/inet/applications/dhcp/DHCPMessage_m.o \
    $O/inet/applications/ethernet/EtherApp_m.o \
    $O/inet/applications/httptools/HttpEventMessages_m.o \
    $O/inet/applications/httptools/HttpMessages_m.o \
    $O/inet/applications/netperfmeter/NetPerfMeter_m.o \
    $O/inet/applications/pingapp/PingPayload_m.o \
    $O/inet/applications/tcpapp/GenericAppMsg_m.o \
    $O/inet/applications/udpapp/PaserTrafficDataMsg_m.o \
    $O/inet/applications/udpapp/UDPEchoAppMsg_m.o \
    $O/inet/applications/udpapp/UDPVideoData_m.o \
    $O/inet/applications/udpapp/VideoPacket_m.o \
    $O/inet/base/ByteArray_m.o \
    $O/inet/base/ByteArrayMessage_m.o \
    $O/inet/linklayer/channels/LinkFailureMessage_m.o \
    $O/inet/linklayer/contract/Ieee802Ctrl_m.o \
    $O/inet/linklayer/contract/PhyControlInfo_m.o \
    $O/inet/linklayer/ethernet/EtherFrame_m.o \
    $O/inet/linklayer/idealwireless/IdealWirelessFrame_m.o \
    $O/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/inet/linklayer/ieee80211/mgmt/ETXPacket_m.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/inet/linklayer/ieee80211mesh/locator/locatorPkt_m.o \
    $O/inet/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.o \
    $O/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.o \
    $O/inet/linklayer/radio/AirFrame_m.o \
    $O/inet/linklayer/radio/IdealAirFrame_m.o \
    $O/inet/linklayer/radio/Radio80211aControlInfo_m.o \
    $O/inet/networklayer/arp/ARPPacket_m.o \
    $O/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.o \
    $O/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.o \
    $O/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.o \
    $O/inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.o \
    $O/inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.o \
    $O/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o \
    $O/inet/networklayer/contract/IPProtocolId_m.o \
    $O/inet/networklayer/contract/IPv4ControlInfo_m.o \
    $O/inet/networklayer/contract/IPv6ControlInfo_m.o \
    $O/inet/networklayer/diffserv/DSCP_m.o \
    $O/inet/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/inet/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/inet/networklayer/ipv4/ICMPMessage_m.o \
    $O/inet/networklayer/ipv4/IGMPMessage_m.o \
    $O/inet/networklayer/ipv4/IPv4Datagram_m.o \
    $O/inet/networklayer/ipv6/IPv6Datagram_m.o \
    $O/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/inet/networklayer/ldp/LDPPacket_m.o \
    $O/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.o \
    $O/inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.o \
    $O/inet/networklayer/manetrouting/base/ControlManetRouting_m.o \
    $O/inet/networklayer/manetrouting/base/LocatorNotificationInfo_m.o \
    $O/inet/networklayer/manetrouting/base/MeshControlInfo_m.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o \
    $O/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o \
    $O/inet/networklayer/manetrouting/olsr/OLSRpkt_m.o \
    $O/inet/networklayer/ospfv2/OSPFPacket_m.o \
    $O/inet/networklayer/routing/aodv/AODVControlPackets_m.o \
    $O/inet/networklayer/routing/dymo/DYMO_m.o \
    $O/inet/networklayer/routing/rip/RIPPacket_m.o \
    $O/inet/networklayer/rsvp_te/IntServ_m.o \
    $O/inet/networklayer/rsvp_te/RSVPHello_m.o \
    $O/inet/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/inet/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/inet/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/inet/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/inet/networklayer/ted/LinkStatePacket_m.o \
    $O/inet/networklayer/ted/TED_m.o \
    $O/inet/networklayer/xmipv6/MobilityHeader_m.o \
    $O/inet/securityModule/message/NewMsgWithMacAddr_m.o \
    $O/inet/securityModule/message/securityPkt_m.o \
    $O/inet/transport/contract/SCTPCommand_m.o \
    $O/inet/transport/contract/TCPCommand_m.o \
    $O/inet/transport/contract/UDPControlInfo_m.o \
    $O/inet/transport/rtp/reports_m.o \
    $O/inet/transport/rtp/RTCPPacket1_m.o \
    $O/inet/transport/rtp/RTCPPacket2_m.o \
    $O/inet/transport/rtp/RTCPPacket3_m.o \
    $O/inet/transport/rtp/RTPInnerPacket_m.o \
    $O/inet/transport/rtp/RTPInterfacePacket_m.o \
    $O/inet/transport/rtp/RTPPacket_m.o \
    $O/inet/transport/rtp/RTPParticipantInfo_m.o \
    $O/inet/transport/rtp/RTPSenderControlMessage_m.o \
    $O/inet/transport/rtp/RTPSenderStatusMessage_m.o \
    $O/inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/inet/transport/sctp/SCTPMessage_m.o \
    $O/inet/transport/tcp_common/TCPSegment_m.o \
    $O/inet/transport/udp/UDPPacket_m.o \
    $O/inet/world/powercontrol/PowerControlMessages_m.o

# Message files
MSGFILES = \
    dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt.msg \
    dissertation/networklayer/manetrouting/gpsr/GPSR.msg \
    dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.msg \
    dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets.msg \
    dissertation/networklayer/vanetrouting/base/ControlVanetRouting.msg \
    dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink.msg \
    dissertation/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo.msg \
    dissertation/networklayer/vanetrouting/base/Vanet_MeshControlInfo.msg \
    dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets.msg \
    dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets.msg \
    inet/applications/dhcp/DHCPMessage.msg \
    inet/applications/ethernet/EtherApp.msg \
    inet/applications/httptools/HttpEventMessages.msg \
    inet/applications/httptools/HttpMessages.msg \
    inet/applications/netperfmeter/NetPerfMeter.msg \
    inet/applications/pingapp/PingPayload.msg \
    inet/applications/tcpapp/GenericAppMsg.msg \
    inet/applications/udpapp/PaserTrafficDataMsg.msg \
    inet/applications/udpapp/UDPEchoAppMsg.msg \
    inet/applications/udpapp/UDPVideoData.msg \
    inet/applications/udpapp/VideoPacket.msg \
    inet/base/ByteArray.msg \
    inet/base/ByteArrayMessage.msg \
    inet/linklayer/channels/LinkFailureMessage.msg \
    inet/linklayer/contract/Ieee802Ctrl.msg \
    inet/linklayer/contract/PhyControlInfo.msg \
    inet/linklayer/ethernet/EtherFrame.msg \
    inet/linklayer/idealwireless/IdealWirelessFrame.msg \
    inet/linklayer/ieee80211/mac/Ieee80211Frame.msg \
    inet/linklayer/ieee80211/mgmt/ETXPacket.msg \
    inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    inet/linklayer/ieee80211mesh/locator/locatorPkt.msg \
    inet/linklayer/ieee80211mesh/mgmt/LWMPLSPacket.msg \
    inet/linklayer/ieee8021d/common/Ieee8021dBPDU.msg \
    inet/linklayer/radio/AirFrame.msg \
    inet/linklayer/radio/IdealAirFrame.msg \
    inet/linklayer/radio/Radio80211aControlInfo.msg \
    inet/networklayer/arp/ARPPacket.msg \
    inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment.msg \
    inet/networklayer/bgpv4/BGPMessage/BGPHeader.msg \
    inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive.msg \
    inet/networklayer/bgpv4/BGPMessage/BGPOpen.msg \
    inet/networklayer/bgpv4/BGPMessage/BGPUpdate.msg \
    inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes.msg \
    inet/networklayer/contract/IPProtocolId.msg \
    inet/networklayer/contract/IPv4ControlInfo.msg \
    inet/networklayer/contract/IPv6ControlInfo.msg \
    inet/networklayer/diffserv/DSCP.msg \
    inet/networklayer/icmpv6/ICMPv6Message.msg \
    inet/networklayer/icmpv6/IPv6NDMessage.msg \
    inet/networklayer/ipv4/ICMPMessage.msg \
    inet/networklayer/ipv4/IGMPMessage.msg \
    inet/networklayer/ipv4/IPv4Datagram.msg \
    inet/networklayer/ipv6/IPv6Datagram.msg \
    inet/networklayer/ipv6/IPv6ExtensionHeaders.msg \
    inet/networklayer/ldp/LDPPacket.msg \
    inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.msg \
    inet/networklayer/manetrouting/base/ControlInfoBreakLink.msg \
    inet/networklayer/manetrouting/base/ControlManetRouting.msg \
    inet/networklayer/manetrouting/base/LocatorNotificationInfo.msg \
    inet/networklayer/manetrouting/base/MeshControlInfo.msg \
    inet/networklayer/manetrouting/dymo_fau/DYMO_Packet.msg \
    inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage.msg \
    inet/networklayer/manetrouting/dymo_fau/DYMO_RERR.msg \
    inet/networklayer/manetrouting/dymo_fau/DYMO_RM.msg \
    inet/networklayer/manetrouting/dymo_fau/DYMO_RREP.msg \
    inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ.msg \
    inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg \
    inet/networklayer/manetrouting/dymo_fau/DYMO_UERR.msg \
    inet/networklayer/manetrouting/olsr/OLSRpkt.msg \
    inet/networklayer/ospfv2/OSPFPacket.msg \
    inet/networklayer/routing/aodv/AODVControlPackets.msg \
    inet/networklayer/routing/dymo/DYMO.msg \
    inet/networklayer/routing/rip/RIPPacket.msg \
    inet/networklayer/rsvp_te/IntServ.msg \
    inet/networklayer/rsvp_te/RSVPHello.msg \
    inet/networklayer/rsvp_te/RSVPPacket.msg \
    inet/networklayer/rsvp_te/RSVPPathMsg.msg \
    inet/networklayer/rsvp_te/RSVPResvMsg.msg \
    inet/networklayer/rsvp_te/SignallingMsg.msg \
    inet/networklayer/ted/LinkStatePacket.msg \
    inet/networklayer/ted/TED.msg \
    inet/networklayer/xmipv6/MobilityHeader.msg \
    inet/securityModule/message/NewMsgWithMacAddr.msg \
    inet/securityModule/message/securityPkt.msg \
    inet/transport/contract/SCTPCommand.msg \
    inet/transport/contract/TCPCommand.msg \
    inet/transport/contract/UDPControlInfo.msg \
    inet/transport/rtp/reports.msg \
    inet/transport/rtp/RTCPPacket1.msg \
    inet/transport/rtp/RTCPPacket2.msg \
    inet/transport/rtp/RTCPPacket3.msg \
    inet/transport/rtp/RTPInnerPacket.msg \
    inet/transport/rtp/RTPInterfacePacket.msg \
    inet/transport/rtp/RTPPacket.msg \
    inet/transport/rtp/RTPParticipantInfo.msg \
    inet/transport/rtp/RTPSenderControlMessage.msg \
    inet/transport/rtp/RTPSenderStatusMessage.msg \
    inet/transport/rtp/profiles/avprofile/RTPMpegPacket.msg \
    inet/transport/sctp/SCTPMessage.msg \
    inet/transport/tcp_common/TCPSegment.msg \
    inet/transport/udp/UDPPacket.msg \
    inet/world/powercontrol/PowerControlMessages.msg

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc or configuser.vc)

ifneq ("$(OMNETPP_CONFIGFILE)","")
CONFIGFILE = $(OMNETPP_CONFIGFILE)
else
ifneq ("$(OMNETPP_ROOT)","")
CONFIGFILE = $(OMNETPP_ROOT)/Makefile.inc
else
CONFIGFILE = $(shell opp_configfilepath)
endif
endif

ifeq ("$(wildcard $(CONFIGFILE))","")
$(error Config file '$(CONFIGFILE)' does not exist -- add the OMNeT++ bin directory to the path so that opp_configfilepath can be found, or set the OMNETPP_CONFIGFILE variable to point to Makefile.inc)
endif

include $(CONFIGFILE)

# Simulation kernel and user interface libraries
OMNETPP_LIB_SUBDIR = $(OMNETPP_LIB_DIR)/$(TOOLCHAIN_NAME)
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppmain$D $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)

COPTS = $(CFLAGS) \
    -DWITH_TCP_COMMON \
    -DWITH_TCP_INET \
    -DWITH_IPv4 \
    -DWITH_IPv6 \
    -DWITH_GENERIC \
    -DWITH_FLOOD \
    -DWITH_UDP \
    -DWITH_RTP \
    -DWITH_SCTP \
    -DWITH_DHCP \
    -DWITH_ETHERNET \
    -DWITH_PPP \
    -DWITH_MPLS \
    -DWITH_OSPFv2 \
    -DWITH_BGPv4 \
    -DWITH_PIM \
    -DWITH_AODV \
    -DWITH_RIP \
    -DWITH_MANET \
    -DWITH_POWER \
    -DWITH_RADIO \
    -DWITH_IEEE80211 \
    -DWITH_IEEE802154 \
    -DWITH_APSKRADIO \
    -DWITH_IDEALWIRELESS \
    -DWITH_TUN \
    -DWITH_BMAC \
    -DWITH_LMAC \
    -DWITH_CSMA \
    -DWITH_XMAC \
    -DWITH_80211MESH \
    -DWITH_xMIPv6 \
    -DWITH_TRACI $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ($(MAKECMDGOALS),depend)
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile
	@$(MKPATH) $O
	@echo Creating executable: $@
	$(Q)echo >.tmp$$$$ $(OBJS) $(EXTRA_OBJS) && $(AR) .tmplib$$$$ @.tmp$$$$ && $(CXX) -o $O/$(TARGET) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) .tmplib$$$$ $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS) && rm .tmp$$$$ && rm .tmplib$$$$

.PHONY: all clean cleanall depend msgheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE)
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f VANETSim VANETSim.exe libVANETSim.so libVANETSim.a libVANETSim.dll libVANETSim.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f dissertation/*_m.cc dissertation/*_m.h
	$(Q)-rm -f dissertation/applications/*_m.cc dissertation/applications/*_m.h
	$(Q)-rm -f dissertation/applications/traci/*_m.cc dissertation/applications/traci/*_m.h
	$(Q)-rm -f dissertation/linklayer/*_m.cc dissertation/linklayer/*_m.h
	$(Q)-rm -f dissertation/linklayer/ieee80211/*_m.cc dissertation/linklayer/ieee80211/*_m.h
	$(Q)-rm -f dissertation/linklayer/ieee80211/mgmt/*_m.cc dissertation/linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f dissertation/linklayer/ieee80211mesh/*_m.cc dissertation/linklayer/ieee80211mesh/*_m.h
	$(Q)-rm -f dissertation/linklayer/ieee80211mesh/vanetlocator/*_m.cc dissertation/linklayer/ieee80211mesh/vanetlocator/*_m.h
	$(Q)-rm -f dissertation/mobility/*_m.cc dissertation/mobility/*_m.h
	$(Q)-rm -f dissertation/mobility/common/*_m.cc dissertation/mobility/common/*_m.h
	$(Q)-rm -f dissertation/mobility/contract/*_m.cc dissertation/mobility/contract/*_m.h
	$(Q)-rm -f dissertation/mobility/single/*_m.cc dissertation/mobility/single/*_m.h
	$(Q)-rm -f dissertation/networklayer/*_m.cc dissertation/networklayer/*_m.h
	$(Q)-rm -f dissertation/networklayer/manetrouting/*_m.cc dissertation/networklayer/manetrouting/*_m.h
	$(Q)-rm -f dissertation/networklayer/manetrouting/gpsr/*_m.cc dissertation/networklayer/manetrouting/gpsr/*_m.h
	$(Q)-rm -f dissertation/networklayer/vanetrouting/*_m.cc dissertation/networklayer/vanetrouting/*_m.h
	$(Q)-rm -f dissertation/networklayer/vanetrouting/aodvvanet/*_m.cc dissertation/networklayer/vanetrouting/aodvvanet/*_m.h
	$(Q)-rm -f dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/*_m.cc dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/*_m.h
	$(Q)-rm -f dissertation/networklayer/vanetrouting/aodvvanetrouting/*_m.cc dissertation/networklayer/vanetrouting/aodvvanetrouting/*_m.h
	$(Q)-rm -f dissertation/networklayer/vanetrouting/base/*_m.cc dissertation/networklayer/vanetrouting/base/*_m.h
	$(Q)-rm -f dissertation/networklayer/vanetrouting/bitcar/*_m.cc dissertation/networklayer/vanetrouting/bitcar/*_m.h
	$(Q)-rm -f dissertation/networklayer/vanetrouting/geoadv/*_m.cc dissertation/networklayer/vanetrouting/geoadv/*_m.h
	$(Q)-rm -f dissertation/networklayer/vanetrouting/rbvtr/*_m.cc dissertation/networklayer/vanetrouting/rbvtr/*_m.h
	$(Q)-rm -f dissertation/nodes/*_m.cc dissertation/nodes/*_m.h
	$(Q)-rm -f dissertation/nodes/aodvvanet/*_m.cc dissertation/nodes/aodvvanet/*_m.h
	$(Q)-rm -f dissertation/nodes/bitcar/*_m.cc dissertation/nodes/bitcar/*_m.h
	$(Q)-rm -f dissertation/nodes/rbvtr/*_m.cc dissertation/nodes/rbvtr/*_m.h
	$(Q)-rm -f dissertation/util/*_m.cc dissertation/util/*_m.h
	$(Q)-rm -f dissertation/world/*_m.cc dissertation/world/*_m.h
	$(Q)-rm -f dissertation/world/traci/*_m.cc dissertation/world/traci/*_m.h
	$(Q)-rm -f inet/*_m.cc inet/*_m.h
	$(Q)-rm -f inet/applications/*_m.cc inet/applications/*_m.h
	$(Q)-rm -f inet/applications/common/*_m.cc inet/applications/common/*_m.h
	$(Q)-rm -f inet/applications/dhcp/*_m.cc inet/applications/dhcp/*_m.h
	$(Q)-rm -f inet/applications/ethernet/*_m.cc inet/applications/ethernet/*_m.h
	$(Q)-rm -f inet/applications/generic/*_m.cc inet/applications/generic/*_m.h
	$(Q)-rm -f inet/applications/httptools/*_m.cc inet/applications/httptools/*_m.h
	$(Q)-rm -f inet/applications/netperfmeter/*_m.cc inet/applications/netperfmeter/*_m.h
	$(Q)-rm -f inet/applications/pingapp/*_m.cc inet/applications/pingapp/*_m.h
	$(Q)-rm -f inet/applications/rtpapp/*_m.cc inet/applications/rtpapp/*_m.h
	$(Q)-rm -f inet/applications/sctpapp/*_m.cc inet/applications/sctpapp/*_m.h
	$(Q)-rm -f inet/applications/tcpapp/*_m.cc inet/applications/tcpapp/*_m.h
	$(Q)-rm -f inet/applications/traci/*_m.cc inet/applications/traci/*_m.h
	$(Q)-rm -f inet/applications/trafgen/*_m.cc inet/applications/trafgen/*_m.h
	$(Q)-rm -f inet/applications/udpapp/*_m.cc inet/applications/udpapp/*_m.h
	$(Q)-rm -f inet/applications/util/*_m.cc inet/applications/util/*_m.h
	$(Q)-rm -f inet/base/*_m.cc inet/base/*_m.h
	$(Q)-rm -f inet/battery/*_m.cc inet/battery/*_m.h
	$(Q)-rm -f inet/battery/models/*_m.cc inet/battery/models/*_m.h
	$(Q)-rm -f inet/generic/*_m.cc inet/generic/*_m.h
	$(Q)-rm -f inet/linklayer/*_m.cc inet/linklayer/*_m.h
	$(Q)-rm -f inet/linklayer/channels/*_m.cc inet/linklayer/channels/*_m.h
	$(Q)-rm -f inet/linklayer/common/*_m.cc inet/linklayer/common/*_m.h
	$(Q)-rm -f inet/linklayer/configurator/*_m.cc inet/linklayer/configurator/*_m.h
	$(Q)-rm -f inet/linklayer/contract/*_m.cc inet/linklayer/contract/*_m.h
	$(Q)-rm -f inet/linklayer/ethernet/*_m.cc inet/linklayer/ethernet/*_m.h
	$(Q)-rm -f inet/linklayer/ethernet/switch/*_m.cc inet/linklayer/ethernet/switch/*_m.h
	$(Q)-rm -f inet/linklayer/idealwireless/*_m.cc inet/linklayer/idealwireless/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211/*_m.cc inet/linklayer/ieee80211/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211/mac/*_m.cc inet/linklayer/ieee80211/mac/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211/mgmt/*_m.cc inet/linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211/mgmt/wpa2/*_m.cc inet/linklayer/ieee80211/mgmt/wpa2/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211/radio/*_m.cc inet/linklayer/ieee80211/radio/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211/radio/errormodel/*_m.cc inet/linklayer/ieee80211/radio/errormodel/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211mesh/*_m.cc inet/linklayer/ieee80211mesh/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211mesh/ethernet/*_m.cc inet/linklayer/ieee80211mesh/ethernet/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211mesh/hwmp/*_m.cc inet/linklayer/ieee80211mesh/hwmp/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211mesh/locator/*_m.cc inet/linklayer/ieee80211mesh/locator/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211mesh/mgmt/*_m.cc inet/linklayer/ieee80211mesh/mgmt/*_m.h
	$(Q)-rm -f inet/linklayer/ieee80211mesh/nodes/*_m.cc inet/linklayer/ieee80211mesh/nodes/*_m.h
	$(Q)-rm -f inet/linklayer/ieee8021d/*_m.cc inet/linklayer/ieee8021d/*_m.h
	$(Q)-rm -f inet/linklayer/ieee8021d/common/*_m.cc inet/linklayer/ieee8021d/common/*_m.h
	$(Q)-rm -f inet/linklayer/ieee8021d/relay/*_m.cc inet/linklayer/ieee8021d/relay/*_m.h
	$(Q)-rm -f inet/linklayer/ieee8021d/rstp/*_m.cc inet/linklayer/ieee8021d/rstp/*_m.h
	$(Q)-rm -f inet/linklayer/ieee8021d/stp/*_m.cc inet/linklayer/ieee8021d/stp/*_m.h
	$(Q)-rm -f inet/linklayer/ieee8021d/tester/*_m.cc inet/linklayer/ieee8021d/tester/*_m.h
	$(Q)-rm -f inet/linklayer/loopback/*_m.cc inet/linklayer/loopback/*_m.h
	$(Q)-rm -f inet/linklayer/queue/*_m.cc inet/linklayer/queue/*_m.h
	$(Q)-rm -f inet/linklayer/radio/*_m.cc inet/linklayer/radio/*_m.h
	$(Q)-rm -f inet/linklayer/radio/propagation/*_m.cc inet/linklayer/radio/propagation/*_m.h
	$(Q)-rm -f inet/mobility/*_m.cc inet/mobility/*_m.h
	$(Q)-rm -f inet/mobility/common/*_m.cc inet/mobility/common/*_m.h
	$(Q)-rm -f inet/mobility/contract/*_m.cc inet/mobility/contract/*_m.h
	$(Q)-rm -f inet/mobility/group/*_m.cc inet/mobility/group/*_m.h
	$(Q)-rm -f inet/mobility/single/*_m.cc inet/mobility/single/*_m.h
	$(Q)-rm -f inet/mobility/static/*_m.cc inet/mobility/static/*_m.h
	$(Q)-rm -f inet/networklayer/*_m.cc inet/networklayer/*_m.h
	$(Q)-rm -f inet/networklayer/arp/*_m.cc inet/networklayer/arp/*_m.h
	$(Q)-rm -f inet/networklayer/autorouting/*_m.cc inet/networklayer/autorouting/*_m.h
	$(Q)-rm -f inet/networklayer/autorouting/ipv4/*_m.cc inet/networklayer/autorouting/ipv4/*_m.h
	$(Q)-rm -f inet/networklayer/autorouting/ipv6/*_m.cc inet/networklayer/autorouting/ipv6/*_m.h
	$(Q)-rm -f inet/networklayer/bgpv4/*_m.cc inet/networklayer/bgpv4/*_m.h
	$(Q)-rm -f inet/networklayer/bgpv4/BGPMessage/*_m.cc inet/networklayer/bgpv4/BGPMessage/*_m.h
	$(Q)-rm -f inet/networklayer/common/*_m.cc inet/networklayer/common/*_m.h
	$(Q)-rm -f inet/networklayer/contract/*_m.cc inet/networklayer/contract/*_m.h
	$(Q)-rm -f inet/networklayer/diffserv/*_m.cc inet/networklayer/diffserv/*_m.h
	$(Q)-rm -f inet/networklayer/icmpv6/*_m.cc inet/networklayer/icmpv6/*_m.h
	$(Q)-rm -f inet/networklayer/internetcloud/*_m.cc inet/networklayer/internetcloud/*_m.h
	$(Q)-rm -f inet/networklayer/ipv4/*_m.cc inet/networklayer/ipv4/*_m.h
	$(Q)-rm -f inet/networklayer/ipv6/*_m.cc inet/networklayer/ipv6/*_m.h
	$(Q)-rm -f inet/networklayer/ipv6tunneling/*_m.cc inet/networklayer/ipv6tunneling/*_m.h
	$(Q)-rm -f inet/networklayer/ldp/*_m.cc inet/networklayer/ldp/*_m.h
	$(Q)-rm -f inet/networklayer/manetrouting/*_m.cc inet/networklayer/manetrouting/*_m.h
	$(Q)-rm -f inet/networklayer/manetrouting/aodv-uu/*_m.cc inet/networklayer/manetrouting/aodv-uu/*_m.h
	$(Q)-rm -f inet/networklayer/manetrouting/aodv-uu/aodv-uu/*_m.cc inet/networklayer/manetrouting/aodv-uu/aodv-uu/*_m.h
	$(Q)-rm -f inet/networklayer/manetrouting/base/*_m.cc inet/networklayer/manetrouting/base/*_m.h
	$(Q)-rm -f inet/networklayer/manetrouting/dsr/*_m.cc inet/networklayer/manetrouting/dsr/*_m.h
	$(Q)-rm -f inet/networklayer/manetrouting/dsr/dsr-uu/*_m.cc inet/networklayer/manetrouting/dsr/dsr-uu/*_m.h
	$(Q)-rm -f inet/networklayer/manetrouting/dymo/*_m.cc inet/networklayer/manetrouting/dymo/*_m.h
	$(Q)-rm -f inet/networklayer/manetrouting/dymo/dymoum/*_m.cc inet/networklayer/manetrouting/dymo/dymoum/*_m.h
	$(Q)-rm -f inet/networklayer/manetrouting/dymo_fau/*_m.cc inet/networklayer/manetrouting/dymo_fau/*_m.h
	$(Q)-rm -f inet/networklayer/manetrouting/olsr/*_m.cc inet/networklayer/manetrouting/olsr/*_m.h
	$(Q)-rm -f inet/networklayer/mpls/*_m.cc inet/networklayer/mpls/*_m.h
	$(Q)-rm -f inet/networklayer/ospfv2/*_m.cc inet/networklayer/ospfv2/*_m.h
	$(Q)-rm -f inet/networklayer/ospfv2/interface/*_m.cc inet/networklayer/ospfv2/interface/*_m.h
	$(Q)-rm -f inet/networklayer/ospfv2/messagehandler/*_m.cc inet/networklayer/ospfv2/messagehandler/*_m.h
	$(Q)-rm -f inet/networklayer/ospfv2/neighbor/*_m.cc inet/networklayer/ospfv2/neighbor/*_m.h
	$(Q)-rm -f inet/networklayer/ospfv2/router/*_m.cc inet/networklayer/ospfv2/router/*_m.h
	$(Q)-rm -f inet/networklayer/routing/*_m.cc inet/networklayer/routing/*_m.h
	$(Q)-rm -f inet/networklayer/routing/aodv/*_m.cc inet/networklayer/routing/aodv/*_m.h
	$(Q)-rm -f inet/networklayer/routing/dymo/*_m.cc inet/networklayer/routing/dymo/*_m.h
	$(Q)-rm -f inet/networklayer/routing/rip/*_m.cc inet/networklayer/routing/rip/*_m.h
	$(Q)-rm -f inet/networklayer/rsvp_te/*_m.cc inet/networklayer/rsvp_te/*_m.h
	$(Q)-rm -f inet/networklayer/ted/*_m.cc inet/networklayer/ted/*_m.h
	$(Q)-rm -f inet/networklayer/xmipv6/*_m.cc inet/networklayer/xmipv6/*_m.h
	$(Q)-rm -f inet/nodes/*_m.cc inet/nodes/*_m.h
	$(Q)-rm -f inet/nodes/aodv/*_m.cc inet/nodes/aodv/*_m.h
	$(Q)-rm -f inet/nodes/bgp/*_m.cc inet/nodes/bgp/*_m.h
	$(Q)-rm -f inet/nodes/dymo/*_m.cc inet/nodes/dymo/*_m.h
	$(Q)-rm -f inet/nodes/ethernet/*_m.cc inet/nodes/ethernet/*_m.h
	$(Q)-rm -f inet/nodes/httptools/*_m.cc inet/nodes/httptools/*_m.h
	$(Q)-rm -f inet/nodes/inet/*_m.cc inet/nodes/inet/*_m.h
	$(Q)-rm -f inet/nodes/internetcloud/*_m.cc inet/nodes/internetcloud/*_m.h
	$(Q)-rm -f inet/nodes/ipv6/*_m.cc inet/nodes/ipv6/*_m.h
	$(Q)-rm -f inet/nodes/mpls/*_m.cc inet/nodes/mpls/*_m.h
	$(Q)-rm -f inet/nodes/ospfv2/*_m.cc inet/nodes/ospfv2/*_m.h
	$(Q)-rm -f inet/nodes/rip/*_m.cc inet/nodes/rip/*_m.h
	$(Q)-rm -f inet/nodes/rtp/*_m.cc inet/nodes/rtp/*_m.h
	$(Q)-rm -f inet/nodes/wireless/*_m.cc inet/nodes/wireless/*_m.h
	$(Q)-rm -f inet/nodes/xmipv6/*_m.cc inet/nodes/xmipv6/*_m.h
	$(Q)-rm -f inet/securityModule/*_m.cc inet/securityModule/*_m.h
	$(Q)-rm -f inet/securityModule/message/*_m.cc inet/securityModule/message/*_m.h
	$(Q)-rm -f inet/status/*_m.cc inet/status/*_m.h
	$(Q)-rm -f inet/transport/*_m.cc inet/transport/*_m.h
	$(Q)-rm -f inet/transport/contract/*_m.cc inet/transport/contract/*_m.h
	$(Q)-rm -f inet/transport/rtp/*_m.cc inet/transport/rtp/*_m.h
	$(Q)-rm -f inet/transport/rtp/profiles/*_m.cc inet/transport/rtp/profiles/*_m.h
	$(Q)-rm -f inet/transport/rtp/profiles/avprofile/*_m.cc inet/transport/rtp/profiles/avprofile/*_m.h
	$(Q)-rm -f inet/transport/sctp/*_m.cc inet/transport/sctp/*_m.h
	$(Q)-rm -f inet/transport/tcp/*_m.cc inet/transport/tcp/*_m.h
	$(Q)-rm -f inet/transport/tcp/flavours/*_m.cc inet/transport/tcp/flavours/*_m.h
	$(Q)-rm -f inet/transport/tcp/queues/*_m.cc inet/transport/tcp/queues/*_m.h
	$(Q)-rm -f inet/transport/tcp_common/*_m.cc inet/transport/tcp_common/*_m.h
	$(Q)-rm -f inet/transport/udp/*_m.cc inet/transport/udp/*_m.h
	$(Q)-rm -f inet/util/*_m.cc inet/util/*_m.h
	$(Q)-rm -f inet/util/headerserializers/*_m.cc inet/util/headerserializers/*_m.h
	$(Q)-rm -f inet/util/headerserializers/headers/*_m.cc inet/util/headerserializers/headers/*_m.h
	$(Q)-rm -f inet/util/headerserializers/ipv4/*_m.cc inet/util/headerserializers/ipv4/*_m.h
	$(Q)-rm -f inet/util/headerserializers/ipv4/headers/*_m.cc inet/util/headerserializers/ipv4/headers/*_m.h
	$(Q)-rm -f inet/util/headerserializers/ipv6/*_m.cc inet/util/headerserializers/ipv6/*_m.h
	$(Q)-rm -f inet/util/headerserializers/ipv6/headers/*_m.cc inet/util/headerserializers/ipv6/headers/*_m.h
	$(Q)-rm -f inet/util/headerserializers/sctp/*_m.cc inet/util/headerserializers/sctp/*_m.h
	$(Q)-rm -f inet/util/headerserializers/sctp/headers/*_m.cc inet/util/headerserializers/sctp/headers/*_m.h
	$(Q)-rm -f inet/util/headerserializers/tcp/*_m.cc inet/util/headerserializers/tcp/*_m.h
	$(Q)-rm -f inet/util/headerserializers/tcp/headers/*_m.cc inet/util/headerserializers/tcp/headers/*_m.h
	$(Q)-rm -f inet/util/headerserializers/udp/*_m.cc inet/util/headerserializers/udp/*_m.h
	$(Q)-rm -f inet/util/headerserializers/udp/headers/*_m.cc inet/util/headerserializers/udp/headers/*_m.h
	$(Q)-rm -f inet/util/messageprinters/*_m.cc inet/util/messageprinters/*_m.h
	$(Q)-rm -f inet/world/*_m.cc inet/world/*_m.h
	$(Q)-rm -f inet/world/annotations/*_m.cc inet/world/annotations/*_m.h
	$(Q)-rm -f inet/world/httptools/*_m.cc inet/world/httptools/*_m.h
	$(Q)-rm -f inet/world/obstacles/*_m.cc inet/world/obstacles/*_m.h
	$(Q)-rm -f inet/world/powercontrol/*_m.cc inet/world/powercontrol/*_m.h
	$(Q)-rm -f inet/world/radio/*_m.cc inet/world/radio/*_m.h
	$(Q)-rm -f inet/world/scenario/*_m.cc inet/world/scenario/*_m.h
	$(Q)-rm -f inet/world/traci/*_m.cc inet/world/traci/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc dissertation/*.cc dissertation/applications/*.cc dissertation/applications/traci/*.cc dissertation/linklayer/*.cc dissertation/linklayer/ieee80211/*.cc dissertation/linklayer/ieee80211/mgmt/*.cc dissertation/linklayer/ieee80211mesh/*.cc dissertation/linklayer/ieee80211mesh/vanetlocator/*.cc dissertation/mobility/*.cc dissertation/mobility/common/*.cc dissertation/mobility/contract/*.cc dissertation/mobility/single/*.cc dissertation/networklayer/*.cc dissertation/networklayer/manetrouting/*.cc dissertation/networklayer/manetrouting/gpsr/*.cc dissertation/networklayer/vanetrouting/*.cc dissertation/networklayer/vanetrouting/aodvvanet/*.cc dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/*.cc dissertation/networklayer/vanetrouting/aodvvanetrouting/*.cc dissertation/networklayer/vanetrouting/base/*.cc dissertation/networklayer/vanetrouting/bitcar/*.cc dissertation/networklayer/vanetrouting/geoadv/*.cc dissertation/networklayer/vanetrouting/rbvtr/*.cc dissertation/nodes/*.cc dissertation/nodes/aodvvanet/*.cc dissertation/nodes/bitcar/*.cc dissertation/nodes/rbvtr/*.cc dissertation/util/*.cc dissertation/world/*.cc dissertation/world/traci/*.cc inet/*.cc inet/applications/*.cc inet/applications/common/*.cc inet/applications/dhcp/*.cc inet/applications/ethernet/*.cc inet/applications/generic/*.cc inet/applications/httptools/*.cc inet/applications/netperfmeter/*.cc inet/applications/pingapp/*.cc inet/applications/rtpapp/*.cc inet/applications/sctpapp/*.cc inet/applications/tcpapp/*.cc inet/applications/traci/*.cc inet/applications/trafgen/*.cc inet/applications/udpapp/*.cc inet/applications/util/*.cc inet/base/*.cc inet/battery/*.cc inet/battery/models/*.cc inet/generic/*.cc inet/linklayer/*.cc inet/linklayer/channels/*.cc inet/linklayer/common/*.cc inet/linklayer/configurator/*.cc inet/linklayer/contract/*.cc inet/linklayer/ethernet/*.cc inet/linklayer/ethernet/switch/*.cc inet/linklayer/idealwireless/*.cc inet/linklayer/ieee80211/*.cc inet/linklayer/ieee80211/mac/*.cc inet/linklayer/ieee80211/mgmt/*.cc inet/linklayer/ieee80211/mgmt/wpa2/*.cc inet/linklayer/ieee80211/radio/*.cc inet/linklayer/ieee80211/radio/errormodel/*.cc inet/linklayer/ieee80211mesh/*.cc inet/linklayer/ieee80211mesh/ethernet/*.cc inet/linklayer/ieee80211mesh/hwmp/*.cc inet/linklayer/ieee80211mesh/locator/*.cc inet/linklayer/ieee80211mesh/mgmt/*.cc inet/linklayer/ieee80211mesh/nodes/*.cc inet/linklayer/ieee8021d/*.cc inet/linklayer/ieee8021d/common/*.cc inet/linklayer/ieee8021d/relay/*.cc inet/linklayer/ieee8021d/rstp/*.cc inet/linklayer/ieee8021d/stp/*.cc inet/linklayer/ieee8021d/tester/*.cc inet/linklayer/loopback/*.cc inet/linklayer/queue/*.cc inet/linklayer/radio/*.cc inet/linklayer/radio/propagation/*.cc inet/mobility/*.cc inet/mobility/common/*.cc inet/mobility/contract/*.cc inet/mobility/group/*.cc inet/mobility/single/*.cc inet/mobility/static/*.cc inet/networklayer/*.cc inet/networklayer/arp/*.cc inet/networklayer/autorouting/*.cc inet/networklayer/autorouting/ipv4/*.cc inet/networklayer/autorouting/ipv6/*.cc inet/networklayer/bgpv4/*.cc inet/networklayer/bgpv4/BGPMessage/*.cc inet/networklayer/common/*.cc inet/networklayer/contract/*.cc inet/networklayer/diffserv/*.cc inet/networklayer/icmpv6/*.cc inet/networklayer/internetcloud/*.cc inet/networklayer/ipv4/*.cc inet/networklayer/ipv6/*.cc inet/networklayer/ipv6tunneling/*.cc inet/networklayer/ldp/*.cc inet/networklayer/manetrouting/*.cc inet/networklayer/manetrouting/aodv-uu/*.cc inet/networklayer/manetrouting/aodv-uu/aodv-uu/*.cc inet/networklayer/manetrouting/base/*.cc inet/networklayer/manetrouting/dsr/*.cc inet/networklayer/manetrouting/dsr/dsr-uu/*.cc inet/networklayer/manetrouting/dymo/*.cc inet/networklayer/manetrouting/dymo/dymoum/*.cc inet/networklayer/manetrouting/dymo_fau/*.cc inet/networklayer/manetrouting/olsr/*.cc inet/networklayer/mpls/*.cc inet/networklayer/ospfv2/*.cc inet/networklayer/ospfv2/interface/*.cc inet/networklayer/ospfv2/messagehandler/*.cc inet/networklayer/ospfv2/neighbor/*.cc inet/networklayer/ospfv2/router/*.cc inet/networklayer/routing/*.cc inet/networklayer/routing/aodv/*.cc inet/networklayer/routing/dymo/*.cc inet/networklayer/routing/rip/*.cc inet/networklayer/rsvp_te/*.cc inet/networklayer/ted/*.cc inet/networklayer/xmipv6/*.cc inet/nodes/*.cc inet/nodes/aodv/*.cc inet/nodes/bgp/*.cc inet/nodes/dymo/*.cc inet/nodes/ethernet/*.cc inet/nodes/httptools/*.cc inet/nodes/inet/*.cc inet/nodes/internetcloud/*.cc inet/nodes/ipv6/*.cc inet/nodes/mpls/*.cc inet/nodes/ospfv2/*.cc inet/nodes/rip/*.cc inet/nodes/rtp/*.cc inet/nodes/wireless/*.cc inet/nodes/xmipv6/*.cc inet/securityModule/*.cc inet/securityModule/message/*.cc inet/status/*.cc inet/transport/*.cc inet/transport/contract/*.cc inet/transport/rtp/*.cc inet/transport/rtp/profiles/*.cc inet/transport/rtp/profiles/avprofile/*.cc inet/transport/sctp/*.cc inet/transport/tcp/*.cc inet/transport/tcp/flavours/*.cc inet/transport/tcp/queues/*.cc inet/transport/tcp_common/*.cc inet/transport/udp/*.cc inet/util/*.cc inet/util/headerserializers/*.cc inet/util/headerserializers/headers/*.cc inet/util/headerserializers/ipv4/*.cc inet/util/headerserializers/ipv4/headers/*.cc inet/util/headerserializers/ipv6/*.cc inet/util/headerserializers/ipv6/headers/*.cc inet/util/headerserializers/sctp/*.cc inet/util/headerserializers/sctp/headers/*.cc inet/util/headerserializers/tcp/*.cc inet/util/headerserializers/tcp/headers/*.cc inet/util/headerserializers/udp/*.cc inet/util/headerserializers/udp/headers/*.cc inet/util/messageprinters/*.cc inet/world/*.cc inet/world/annotations/*.cc inet/world/httptools/*.cc inet/world/obstacles/*.cc inet/world/powercontrol/*.cc inet/world/radio/*.cc inet/world/scenario/*.cc inet/world/traci/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/dissertation/applications/traci/aodvTraCI.o: dissertation/applications/traci/aodvTraCI.cc \
	dissertation/applications/traci/aodvTraCI.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/aodvTraCIMobility.h \
	dissertation/world/traci/aodvTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPSocket.h \
	inet/util/FWMath.h
$O/dissertation/applications/traci/aodvTraCITestApp.o: dissertation/applications/traci/aodvTraCITestApp.cc \
	dissertation/applications/traci/aodvTraCITestApp.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/aodvTraCIMobility.h \
	dissertation/world/traci/aodvTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/status/NodeStatus.h \
	inet/util/FWMath.h
$O/dissertation/applications/traci/bitcarTraCIDemo.o: dissertation/applications/traci/bitcarTraCIDemo.cc \
	dissertation/applications/traci/bitcarTraCIDemo.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/bitcarTraCIMobility.h \
	dissertation/world/traci/bitcarTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPSocket.h \
	inet/util/FWMath.h
$O/dissertation/applications/traci/bitcarTraCITestApp.o: dissertation/applications/traci/bitcarTraCITestApp.cc \
	dissertation/applications/traci/bitcarTraCITestApp.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/bitcarTraCIMobility.h \
	dissertation/world/traci/bitcarTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/status/NodeStatus.h \
	inet/util/FWMath.h
$O/dissertation/applications/traci/rbvtrTraCIDemo.o: dissertation/applications/traci/rbvtrTraCIDemo.cc \
	dissertation/applications/traci/rbvtrTraCIDemo.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/rbvtrTraCIMobility.h \
	dissertation/world/traci/rbvtrTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPSocket.h \
	inet/util/FWMath.h
$O/dissertation/applications/traci/rbvtrTraCITestApp.o: dissertation/applications/traci/rbvtrTraCITestApp.cc \
	dissertation/applications/traci/rbvtrTraCITestApp.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/rbvtrTraCIMobility.h \
	dissertation/world/traci/rbvtrTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/status/NodeStatus.h \
	inet/util/FWMath.h
$O/dissertation/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.o: dissertation/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.cc \
	dissertation/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/linklayer/ieee80211mesh/vanetlocator/VanetBigUint.o: dissertation/linklayer/ieee80211mesh/vanetlocator/VanetBigUint.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/VanetBigUint.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.o: dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/util/GlobalWirelessLinkInspectorVanet.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/ARPPacket_m.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/udp/UDP.h
$O/dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.o: dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/udp/UDP.h
$O/dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.o: dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h
$O/dissertation/mobility/common/LineSegmentsVANETMobilityBase.o: dissertation/mobility/common/LineSegmentsVANETMobilityBase.cc \
	dissertation/mobility/common/LineSegmentsVANETMobilityBase.h \
	dissertation/mobility/common/MovingVANETMobilityBase.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/mobility/common/MovingVANETMobilityBase.o: dissertation/mobility/common/MovingVANETMobilityBase.cc \
	dissertation/mobility/common/MovingVANETMobilityBase.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/mobility/common/VANETMobilityAccess.o: dissertation/mobility/common/VANETMobilityAccess.cc \
	dissertation/mobility/common/VANETMobilityAccess.h \
	dissertation/mobility/contract/IVANETMobility.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/mobility/common/VANETMobilityBase.o: dissertation/mobility/common/VANETMobilityBase.cc \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/mobility/contract/IVANETMobility.o: dissertation/mobility/contract/IVANETMobility.cc \
	dissertation/mobility/contract/IVANETMobility.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/util/FWMath.h
$O/dissertation/mobility/single/LinearVANETMobility.o: dissertation/mobility/single/LinearVANETMobility.cc \
	dissertation/mobility/common/MovingVANETMobilityBase.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/LinearVANETMobility.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/mobility/single/aodvTraCIMobility.o: dissertation/mobility/single/aodvTraCIMobility.cc \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/aodvTraCIMobility.h \
	dissertation/world/traci/aodvTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/mobility/single/bitcarTraCIMobility.o: dissertation/mobility/single/bitcarTraCIMobility.cc \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/bitcarTraCIMobility.h \
	dissertation/world/traci/bitcarTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/mobility/single/rbvtrTraCIMobility.o: dissertation/mobility/single/rbvtrTraCIMobility.cc \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/rbvtrTraCIMobility.h \
	dissertation/world/traci/rbvtrTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/manetrouting/gpsr/GPSR.o: dissertation/networklayer/manetrouting/gpsr/GPSR.cc \
	dissertation/networklayer/manetrouting/gpsr/GPSR.h \
	dissertation/networklayer/manetrouting/gpsr/GPSRDefs.h \
	dissertation/networklayer/manetrouting/gpsr/GPSR_m.h \
	dissertation/networklayer/manetrouting/gpsr/PositionTable.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/mobility/contract/IMobility.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/status/NodeStatus.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/manetrouting/gpsr/GPSR_m.o: dissertation/networklayer/manetrouting/gpsr/GPSR_m.cc \
	dissertation/networklayer/manetrouting/gpsr/GPSRDefs.h \
	dissertation/networklayer/manetrouting/gpsr/GPSR_m.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/manetrouting/gpsr/PositionTable.o: dissertation/networklayer/manetrouting/gpsr/PositionTable.cc \
	dissertation/networklayer/manetrouting/gpsr/PositionTable.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.cc \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.o: dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.cc \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/params_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.o: dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.cc \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.o: dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.cc \
	dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h
$O/dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.o: dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.cc \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.h \
	dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.h \
	dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.o: dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.cc \
	dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h
$O/dissertation/networklayer/vanetrouting/base/VanetAddress.o: dissertation/networklayer/vanetrouting/base/VanetAddress.cc \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h
$O/dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.o: dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.cc \
	dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/dissertation/networklayer/vanetrouting/base/VanetRoutingBase.o: dissertation/networklayer/vanetrouting/base/VanetRoutingBase.cc \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	dissertation/util/GlobalWirelessLinkInspectorVanet.h \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/mobility/common/MobilityAccess.h \
	inet/mobility/contract/IMobility.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o: dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.cc \
	dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h
$O/dissertation/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o: dissertation/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.cc \
	dissertation/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h
$O/dissertation/networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.o: dissertation/networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.cc \
	dissertation/networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h
$O/dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.o: dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.cc \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/bitcar/BITCARRouteData.o: dissertation/networklayer/vanetrouting/bitcar/BITCARRouteData.cc \
	dissertation/networklayer/vanetrouting/bitcar/BITCARRouteData.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h
$O/dissertation/networklayer/vanetrouting/bitcar/BITCARRouting.o: dissertation/networklayer/vanetrouting/bitcar/BITCARRouting.cc \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.h \
	dissertation/networklayer/vanetrouting/bitcar/BITCARRouteData.h \
	dissertation/networklayer/vanetrouting/bitcar/BITCARRouting.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.o: dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.cc \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/util/FWMath.h
$O/dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouteData.o: dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouteData.cc \
	dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouteData.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h
$O/dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouting.o: dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouting.cc \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.h \
	dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouteData.h \
	dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouting.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h
$O/dissertation/util/GlobalWirelessLinkInspectorVanet.o: dissertation/util/GlobalWirelessLinkInspectorVanet.cc \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/util/GlobalWirelessLinkInspectorVanet.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h
$O/dissertation/world/traci/aodvTraCIScenarioManager.o: dissertation/world/traci/aodvTraCIScenarioManager.cc \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/aodvTraCIMobility.h \
	dissertation/world/traci/aodvTraCIConstants.h \
	dissertation/world/traci/aodvTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/world/traci/aodvTraCIScenarioManagerLaunchd.o: dissertation/world/traci/aodvTraCIScenarioManagerLaunchd.cc \
	dissertation/world/traci/aodvTraCIConstants.h \
	dissertation/world/traci/aodvTraCIScenarioManager.h \
	dissertation/world/traci/aodvTraCIScenarioManagerLaunchd.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/world/traci/bitcarTraCIScenarioManager.o: dissertation/world/traci/bitcarTraCIScenarioManager.cc \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/bitcarTraCIMobility.h \
	dissertation/world/traci/bitcarTraCIConstants.h \
	dissertation/world/traci/bitcarTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/world/traci/bitcarTraCIScenarioManagerLaunchd.o: dissertation/world/traci/bitcarTraCIScenarioManagerLaunchd.cc \
	dissertation/world/traci/bitcarTraCIConstants.h \
	dissertation/world/traci/bitcarTraCIScenarioManager.h \
	dissertation/world/traci/bitcarTraCIScenarioManagerLaunchd.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/world/traci/rbvtrTraCIScenarioManager.o: dissertation/world/traci/rbvtrTraCIScenarioManager.cc \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/rbvtrTraCIMobility.h \
	dissertation/world/traci/rbvtrTraCIConstants.h \
	dissertation/world/traci/rbvtrTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/world/traci/rbvtrTraCIScenarioManagerLaunchd.o: dissertation/world/traci/rbvtrTraCIScenarioManagerLaunchd.cc \
	dissertation/world/traci/rbvtrTraCIConstants.h \
	dissertation/world/traci/rbvtrTraCIScenarioManager.h \
	dissertation/world/traci/rbvtrTraCIScenarioManagerLaunchd.h \
	dissertation/world/traci/vanetTraCIColor.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h
$O/dissertation/world/traci/vanetTraCIColor.o: dissertation/world/traci/vanetTraCIColor.cc \
	dissertation/world/traci/vanetTraCIColor.h
$O/inet/applications/common/ApplicationBase.o: inet/applications/common/ApplicationBase.cc \
	inet/applications/common/ApplicationBase.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/NodeOperations.h \
	inet/base/OperationalBase.h
$O/inet/applications/dhcp/DHCPClient.o: inet/applications/dhcp/DHCPClient.cc \
	inet/applications/dhcp/DHCPClient.h \
	inet/applications/dhcp/DHCPLease.h \
	inet/applications/dhcp/DHCPMessage_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/dhcp/DHCPMessage_m.o: inet/applications/dhcp/DHCPMessage_m.cc \
	inet/applications/dhcp/DHCPMessage_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h
$O/inet/applications/dhcp/DHCPServer.o: inet/applications/dhcp/DHCPServer.cc \
	inet/applications/dhcp/DHCPLease.h \
	inet/applications/dhcp/DHCPMessage_m.h \
	inet/applications/dhcp/DHCPServer.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/ethernet/EtherAppCli.o: inet/applications/ethernet/EtherAppCli.cc \
	inet/applications/ethernet/EtherAppCli.h \
	inet/applications/ethernet/EtherApp_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/status/NodeStatus.h
$O/inet/applications/ethernet/EtherAppSrv.o: inet/applications/ethernet/EtherAppSrv.cc \
	inet/applications/ethernet/EtherAppSrv.h \
	inet/applications/ethernet/EtherApp_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/status/NodeStatus.h
$O/inet/applications/ethernet/EtherApp_m.o: inet/applications/ethernet/EtherApp_m.cc \
	inet/applications/ethernet/EtherApp_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/applications/ethernet/EtherTrafGen.o: inet/applications/ethernet/EtherTrafGen.cc \
	inet/applications/ethernet/EtherTrafGen.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/status/NodeStatus.h
$O/inet/applications/ethernet/EthernetApplication.o: inet/applications/ethernet/EthernetApplication.cc \
	inet/applications/ethernet/EtherApp_m.h \
	inet/applications/ethernet/EthernetApplication.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h
$O/inet/applications/generic/IPvXTrafGen.o: inet/applications/generic/IPvXTrafGen.cc \
	inet/applications/generic/IPvXTrafGen.h \
	inet/applications/generic/IPvXTrafSink.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h
$O/inet/applications/generic/IPvXTrafSink.o: inet/applications/generic/IPvXTrafSink.cc \
	inet/applications/generic/IPvXTrafGen.h \
	inet/applications/generic/IPvXTrafSink.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h
$O/inet/applications/httptools/HttpBrowser.o: inet/applications/httptools/HttpBrowser.cc \
	inet/applications/httptools/HttpBrowser.h \
	inet/applications/httptools/HttpBrowserBase.h \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpBrowserBase.o: inet/applications/httptools/HttpBrowserBase.cc \
	inet/applications/httptools/HttpBrowserBase.h \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/status/NodeStatus.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpBrowserDirect.o: inet/applications/httptools/HttpBrowserDirect.cc \
	inet/applications/httptools/HttpBrowserBase.h \
	inet/applications/httptools/HttpBrowserDirect.h \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpServerBase.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpEventMessages_m.o: inet/applications/httptools/HttpEventMessages_m.cc \
	inet/applications/httptools/HttpEventMessages_m.h
$O/inet/applications/httptools/HttpMessages_m.o: inet/applications/httptools/HttpMessages_m.cc \
	inet/applications/httptools/HttpMessages_m.h
$O/inet/applications/httptools/HttpNodeBase.o: inet/applications/httptools/HttpNodeBase.cc \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpRandom.o: inet/applications/httptools/HttpRandom.cc \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/applications/httptools/HttpServer.o: inet/applications/httptools/HttpServer.cc \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpServer.h \
	inet/applications/httptools/HttpServerBase.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpServerBase.o: inet/applications/httptools/HttpServerBase.cc \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpServerBase.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/status/NodeStatus.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpServerDirect.o: inet/applications/httptools/HttpServerDirect.cc \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpServerBase.h \
	inet/applications/httptools/HttpServerDirect.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpServerDirectEvilA.o: inet/applications/httptools/HttpServerDirectEvilA.cc \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpServerBase.h \
	inet/applications/httptools/HttpServerDirect.h \
	inet/applications/httptools/HttpServerDirectEvilA.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpServerDirectEvilB.o: inet/applications/httptools/HttpServerDirectEvilB.cc \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpServerBase.h \
	inet/applications/httptools/HttpServerDirect.h \
	inet/applications/httptools/HttpServerDirectEvilB.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpServerEvilA.o: inet/applications/httptools/HttpServerEvilA.cc \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpServer.h \
	inet/applications/httptools/HttpServerBase.h \
	inet/applications/httptools/HttpServerEvilA.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpServerEvilB.o: inet/applications/httptools/HttpServerEvilB.cc \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpNodeBase.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpServer.h \
	inet/applications/httptools/HttpServerBase.h \
	inet/applications/httptools/HttpServerEvilB.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h \
	inet/world/httptools/HttpController.h
$O/inet/applications/httptools/HttpUtils.o: inet/applications/httptools/HttpUtils.cc \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpUtils.h
$O/inet/applications/netperfmeter/NetPerfMeter.o: inet/applications/netperfmeter/NetPerfMeter.cc \
	inet/applications/netperfmeter/NetPerfMeter.h \
	inet/applications/netperfmeter/NetPerfMeter_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/SCTPSocket.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/applications/netperfmeter/NetPerfMeter_m.o: inet/applications/netperfmeter/NetPerfMeter_m.cc \
	inet/applications/netperfmeter/NetPerfMeter_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/sctp/SCTPMessage_m.h
$O/inet/applications/pingapp/PingApp.o: inet/applications/pingapp/PingApp.cc \
	inet/applications/pingapp/PingApp.h \
	inet/applications/pingapp/PingPayload_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h
$O/inet/applications/pingapp/PingPayload_m.o: inet/applications/pingapp/PingPayload_m.cc \
	inet/applications/pingapp/PingPayload_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/applications/pingapp/PingTestApp.o: inet/applications/pingapp/PingTestApp.cc \
	inet/applications/pingapp/PingPayload_m.h \
	inet/applications/pingapp/PingTestApp.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/status/NodeStatus.h
$O/inet/applications/rtpapp/RTPApplication.o: inet/applications/rtpapp/RTPApplication.cc \
	inet/applications/rtpapp/RTPApplication.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h \
	inet/transport/rtp/RTPInterfacePacket_m.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/inet/applications/sctpapp/SCTPClient.o: inet/applications/sctpapp/SCTPClient.cc \
	inet/applications/sctpapp/SCTPClient.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/SCTPSocket.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/applications/sctpapp/SCTPNatPeer.o: inet/applications/sctpapp/SCTPNatPeer.cc \
	inet/applications/sctpapp/SCTPNatPeer.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/SCTPSocket.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/applications/sctpapp/SCTPNatServer.o: inet/applications/sctpapp/SCTPNatServer.cc \
	inet/applications/sctpapp/SCTPNatServer.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/SCTPSocket.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPNatTable.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/applications/sctpapp/SCTPPeer.o: inet/applications/sctpapp/SCTPPeer.cc \
	inet/applications/sctpapp/SCTPPeer.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/SCTPSocket.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/applications/sctpapp/SCTPServer.o: inet/applications/sctpapp/SCTPServer.cc \
	inet/applications/sctpapp/SCTPServer.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/SCTPSocket.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/applications/tcpapp/GenericAppMsg_m.o: inet/applications/tcpapp/GenericAppMsg_m.cc \
	inet/applications/tcpapp/GenericAppMsg_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/applications/tcpapp/TCPAppBase.o: inet/applications/tcpapp/TCPAppBase.cc \
	inet/applications/tcpapp/TCPAppBase.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h
$O/inet/applications/tcpapp/TCPBasicClientApp.o: inet/applications/tcpapp/TCPBasicClientApp.cc \
	inet/applications/tcpapp/GenericAppMsg_m.h \
	inet/applications/tcpapp/TCPAppBase.h \
	inet/applications/tcpapp/TCPBasicClientApp.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h
$O/inet/applications/tcpapp/TCPEchoApp.o: inet/applications/tcpapp/TCPEchoApp.cc \
	inet/applications/tcpapp/TCPEchoApp.h \
	inet/base/ByteArray.h \
	inet/base/ByteArrayMessage.h \
	inet/base/ByteArrayMessage_m.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h
$O/inet/applications/tcpapp/TCPGenericCliAppBasePromis.o: inet/applications/tcpapp/TCPGenericCliAppBasePromis.cc \
	inet/applications/tcpapp/GenericAppMsg_m.h \
	inet/applications/tcpapp/TCPGenericCliAppBasePromis.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h
$O/inet/applications/tcpapp/TCPGenericSrvApp.o: inet/applications/tcpapp/TCPGenericSrvApp.cc \
	inet/applications/tcpapp/GenericAppMsg_m.h \
	inet/applications/tcpapp/TCPGenericSrvApp.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h
$O/inet/applications/tcpapp/TCPGenericSrvThread.o: inet/applications/tcpapp/TCPGenericSrvThread.cc \
	inet/applications/tcpapp/GenericAppMsg_m.h \
	inet/applications/tcpapp/TCPGenericSrvThread.h \
	inet/applications/tcpapp/TCPSrvHostApp.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h
$O/inet/applications/tcpapp/TCPSessionApp.o: inet/applications/tcpapp/TCPSessionApp.cc \
	inet/applications/tcpapp/TCPAppBase.h \
	inet/applications/tcpapp/TCPSessionApp.h \
	inet/base/ByteArray.h \
	inet/base/ByteArrayMessage.h \
	inet/base/ByteArrayMessage_m.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h
$O/inet/applications/tcpapp/TCPSinkApp.o: inet/applications/tcpapp/TCPSinkApp.cc \
	inet/applications/tcpapp/TCPSinkApp.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h
$O/inet/applications/tcpapp/TCPSrvHostApp.o: inet/applications/tcpapp/TCPSrvHostApp.cc \
	inet/applications/tcpapp/TCPSrvHostApp.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h
$O/inet/applications/tcpapp/TelnetApp.o: inet/applications/tcpapp/TelnetApp.cc \
	inet/applications/tcpapp/GenericAppMsg_m.h \
	inet/applications/tcpapp/TCPAppBase.h \
	inet/applications/tcpapp/TelnetApp.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h
$O/inet/applications/traci/TraCIDemo.o: inet/applications/traci/TraCIDemo.cc \
	inet/applications/traci/TraCIDemo.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/TraCIMobility.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPSocket.h \
	inet/util/FWMath.h \
	inet/world/traci/TraCIColor.h \
	inet/world/traci/TraCIScenarioManager.h
$O/inet/applications/traci/TraCITestApp.o: inet/applications/traci/TraCITestApp.cc \
	inet/applications/traci/TraCITestApp.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/TraCIMobility.h \
	inet/status/NodeStatus.h \
	inet/util/FWMath.h \
	inet/world/traci/TraCIColor.h \
	inet/world/traci/TraCIScenarioManager.h
$O/inet/applications/trafgen/TrafGen.o: inet/applications/trafgen/TrafGen.cc \
	inet/applications/trafgen/TrafGen.h
$O/inet/applications/trafgen/TrafGenPar.o: inet/applications/trafgen/TrafGenPar.cc \
	inet/applications/trafgen/TrafGenPar.h
$O/inet/applications/udpapp/PASERUdpTrafficReceiver.o: inet/applications/udpapp/PASERUdpTrafficReceiver.cc \
	inet/applications/udpapp/PASERUdpTrafficReceiver.h \
	inet/applications/udpapp/PaserTrafficDataMsg_m.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/RandomWPMobility.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/util/FWMath.h
$O/inet/applications/udpapp/PASERUdpTrafficSender.o: inet/applications/udpapp/PASERUdpTrafficSender.cc \
	inet/applications/udpapp/PASERUdpTrafficSender.h \
	inet/applications/udpapp/PaserTrafficDataMsg_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/PaserTrafficDataMsg_m.o: inet/applications/udpapp/PaserTrafficDataMsg_m.cc \
	inet/applications/udpapp/PaserTrafficDataMsg_m.h
$O/inet/applications/udpapp/UDPBasicApp.o: inet/applications/udpapp/UDPBasicApp.cc \
	inet/applications/common/ApplicationBase.h \
	inet/applications/udpapp/UDPBasicApp.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotifierConsts.h \
	inet/base/OperationalBase.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/UDPBasicBurst.o: inet/applications/udpapp/UDPBasicBurst.cc \
	inet/applications/common/ApplicationBase.h \
	inet/applications/udpapp/UDPBasicBurst.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/OperationalBase.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ipv6/RoutingTable6.h \
	inet/networklayer/ipv6/RoutingTable6Access.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/UDPBasicBurstNotification.o: inet/applications/udpapp/UDPBasicBurstNotification.cc \
	inet/applications/common/ApplicationBase.h \
	inet/applications/udpapp/UDPBasicBurst.h \
	inet/applications/udpapp/UDPBasicBurstNotification.h \
	inet/applications/util/AddressModule.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/OperationalBase.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/UDPBasicFlooding.o: inet/applications/udpapp/UDPBasicFlooding.cc \
	inet/applications/common/ApplicationBase.h \
	inet/applications/udpapp/UDPBasicFlooding.h \
	inet/applications/util/AddressModule.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/OperationalBase.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/UDPEchoApp.o: inet/applications/udpapp/UDPEchoApp.cc \
	inet/applications/common/ApplicationBase.h \
	inet/applications/udpapp/UDPEchoApp.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/NodeOperations.h \
	inet/base/OperationalBase.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/UDPEchoAppMsg_m.o: inet/applications/udpapp/UDPEchoAppMsg_m.cc \
	inet/applications/udpapp/UDPEchoAppMsg_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/applications/udpapp/UDPSink.o: inet/applications/udpapp/UDPSink.cc \
	inet/applications/common/ApplicationBase.h \
	inet/applications/udpapp/UDPSink.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/NodeOperations.h \
	inet/base/OperationalBase.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/UDPVideoData_m.o: inet/applications/udpapp/UDPVideoData_m.cc \
	inet/applications/udpapp/UDPVideoData_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/applications/udpapp/UDPVideoStreamCli.o: inet/applications/udpapp/UDPVideoStreamCli.cc \
	inet/applications/common/ApplicationBase.h \
	inet/applications/udpapp/UDPVideoStreamCli.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/NodeOperations.h \
	inet/base/OperationalBase.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/UDPVideoStreamCli2.o: inet/applications/udpapp/UDPVideoStreamCli2.cc \
	inet/applications/common/ApplicationBase.h \
	inet/applications/udpapp/UDPVideoStreamCli2.h \
	inet/applications/udpapp/VideoPacket_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/NodeOperations.h \
	inet/base/OperationalBase.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/UDPVideoStreamSvr.o: inet/applications/udpapp/UDPVideoStreamSvr.cc \
	inet/applications/common/ApplicationBase.h \
	inet/applications/udpapp/UDPVideoStreamSvr.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/NodeOperations.h \
	inet/base/OperationalBase.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/UDPVideoStreamSvr2.o: inet/applications/udpapp/UDPVideoStreamSvr2.cc \
	inet/applications/common/ApplicationBase.h \
	inet/applications/udpapp/UDPVideoData_m.h \
	inet/applications/udpapp/UDPVideoStreamSvr2.h \
	inet/applications/udpapp/VideoPacket_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/OperationalBase.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/applications/udpapp/VideoPacket_m.o: inet/applications/udpapp/VideoPacket_m.cc \
	inet/applications/udpapp/VideoPacket_m.h
$O/inet/applications/util/AddressModule.o: inet/applications/util/AddressModule.cc \
	inet/applications/util/AddressModule.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h
$O/inet/base/AbstractQueue.o: inet/base/AbstractQueue.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/base/BasicModule.o: inet/base/BasicModule.cc \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h
$O/inet/base/ByteArray.o: inet/base/ByteArray.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/base/ByteArrayBuffer.o: inet/base/ByteArrayBuffer.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArrayBuffer.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/base/ByteArrayMessage.o: inet/base/ByteArrayMessage.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArrayMessage.h \
	inet/base/ByteArrayMessage_m.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/base/ByteArrayMessage_m.o: inet/base/ByteArrayMessage_m.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArrayMessage_m.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/base/ByteArray_m.o: inet/base/ByteArray_m.cc \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/base/Compat.o: inet/base/Compat.cc \
	inet/base/Compat.h
$O/inet/base/Coord.o: inet/base/Coord.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/util/FWMath.h
$O/inet/base/InterfaceOperations.o: inet/base/InterfaceOperations.cc
$O/inet/base/Join.o: inet/base/Join.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/base/LifecycleController.o: inet/base/LifecycleController.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/IScriptable.h \
	inet/base/LifecycleController.h \
	inet/base/LifecycleOperation.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h
$O/inet/base/MMapBoard.o: inet/base/MMapBoard.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/MMapBoard.h \
	inet/base/ModuleAccess.h
$O/inet/base/ModuleAccess.o: inet/base/ModuleAccess.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h
$O/inet/base/NedFunctions.o: inet/base/NedFunctions.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/FWMath.h
$O/inet/base/NodeOperations.o: inet/base/NodeOperations.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h
$O/inet/base/NotificationBoard.o: inet/base/NotificationBoard.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h
$O/inet/base/NotifierConsts.o: inet/base/NotifierConsts.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/NotifierConsts.h
$O/inet/base/OperationalBase.o: inet/base/OperationalBase.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/OperationalBase.h \
	inet/status/NodeStatus.h
$O/inet/base/PassiveQueueBase.o: inet/base/PassiveQueueBase.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/IPassiveQueue.h \
	inet/base/PassiveQueueBase.h
$O/inet/base/ProtocolMap.o: inet/base/ProtocolMap.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ProtocolMap.h
$O/inet/base/QueueBase.o: inet/base/QueueBase.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/QueueBase.h
$O/inet/base/ReassemblyBuffer.o: inet/base/ReassemblyBuffer.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ReassemblyBuffer.h
$O/inet/base/ResultFilters.o: inet/base/ResultFilters.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ResultFilters.h \
	inet/mobility/contract/IMobility.h \
	inet/util/FWMath.h
$O/inet/base/Sink.o: inet/base/Sink.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/Sink.h
$O/inet/base/Topology.o: inet/base/Topology.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/Topology.h \
	inet/util/PatternMatcher.h \
	inet/util/stlutils.h
$O/inet/base/UnimplementedModule.o: inet/base/UnimplementedModule.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/UnimplementedModule.h
$O/inet/base/erfc.o: inet/base/erfc.cc
$O/inet/battery/models/BasicBattery.o: inet/battery/models/BasicBattery.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/battery/models/BasicBattery.h
$O/inet/battery/models/InetSimpleBattery.o: inet/battery/models/InetSimpleBattery.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/battery/models/BasicBattery.h \
	inet/battery/models/Energy.h \
	inet/battery/models/InetSimpleBattery.h \
	inet/linklayer/contract/RadioState.h \
	inet/status/NodeStatus.h \
	inet/world/powercontrol/IPowerControl.h
$O/inet/generic/RPSSocket.o: inet/generic/RPSSocket.cc \
	inet/generic/RPSSocket.h
$O/inet/linklayer/channels/LinkFailureManager.o: inet/linklayer/channels/LinkFailureManager.cc \
	inet/linklayer/channels/LinkFailureManager.h \
	inet/linklayer/channels/LinkFailureMessage_m.h \
	inet/linklayer/channels/ProgramedFailureChannel.h
$O/inet/linklayer/channels/LinkFailureMessage_m.o: inet/linklayer/channels/LinkFailureMessage_m.cc \
	inet/linklayer/channels/LinkFailureManager.h \
	inet/linklayer/channels/LinkFailureMessage_m.h
$O/inet/linklayer/channels/MyThroughputMeteringChannel.o: inet/linklayer/channels/MyThroughputMeteringChannel.cc \
	inet/linklayer/channels/MyThroughputMeteringChannel.h
$O/inet/linklayer/channels/ProgramedFailureChannel.o: inet/linklayer/channels/ProgramedFailureChannel.cc \
	inet/linklayer/channels/LinkFailureManager.h \
	inet/linklayer/channels/ProgramedFailureChannel.h
$O/inet/linklayer/common/MACBase.o: inet/linklayer/common/MACBase.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/common/WirelessMacBase.o: inet/linklayer/common/WirelessMacBase.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/common/WirelessMacBase.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/configurator/Ieee8021dInterfaceData.o: inet/linklayer/configurator/Ieee8021dInterfaceData.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h
$O/inet/linklayer/configurator/L2NetworkConfigurator.o: inet/linklayer/configurator/L2NetworkConfigurator.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/base/Topology.h \
	inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	inet/linklayer/configurator/L2NetworkConfigurator.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/util/PatternMatcher.h \
	inet/util/stlutils.h
$O/inet/linklayer/configurator/L2NodeConfigurator.o: inet/linklayer/configurator/L2NodeConfigurator.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotifierConsts.h \
	inet/base/Topology.h \
	inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	inet/linklayer/configurator/L2NetworkConfigurator.h \
	inet/linklayer/configurator/L2NodeConfigurator.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/util/PatternMatcher.h
$O/inet/linklayer/contract/Ieee802Ctrl_m.o: inet/linklayer/contract/Ieee802Ctrl_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h
$O/inet/linklayer/contract/MACAddress.o: inet/linklayer/contract/MACAddress.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h
$O/inet/linklayer/contract/PhyControlInfo_m.o: inet/linklayer/contract/PhyControlInfo_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/PhyControlInfo_m.h
$O/inet/linklayer/ethernet/EtherBus.o: inet/linklayer/ethernet/EtherBus.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/ethernet/EtherBus.h
$O/inet/linklayer/ethernet/EtherEncap.o: inet/linklayer/ethernet/EtherEncap.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherEncap.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h
$O/inet/linklayer/ethernet/EtherFrameClassifier.o: inet/linklayer/ethernet/EtherFrameClassifier.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrameClassifier.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h
$O/inet/linklayer/ethernet/EtherFrame_m.o: inet/linklayer/ethernet/EtherFrame_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h
$O/inet/linklayer/ethernet/EtherHub.o: inet/linklayer/ethernet/EtherHub.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/ethernet/EtherHub.h
$O/inet/linklayer/ethernet/EtherLLC.o: inet/linklayer/ethernet/EtherLLC.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/EtherLLC.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/ethernet/EtherMAC.o: inet/linklayer/ethernet/EtherMAC.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/EtherMAC.h \
	inet/linklayer/ethernet/EtherMACBase.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/ethernet/EtherMACBase.o: inet/linklayer/ethernet/EtherMACBase.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/EtherMACBase.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/util/opp_utils.h
$O/inet/linklayer/ethernet/EtherMACFullDuplex.o: inet/linklayer/ethernet/EtherMACFullDuplex.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/EtherMACBase.h \
	inet/linklayer/ethernet/EtherMACFullDuplex.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/ethernet/switch/MACAddressTable.o: inet/linklayer/ethernet/switch/MACAddressTable.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/switch/IMACAddressTable.h \
	inet/linklayer/ethernet/switch/MACAddressTable.h
$O/inet/linklayer/ethernet/switch/MACRelayUnit.o: inet/linklayer/ethernet/switch/MACRelayUnit.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/EtherMACBase.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/linklayer/ethernet/switch/IMACAddressTable.h \
	inet/linklayer/ethernet/switch/MACRelayUnit.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/idealwireless/IdealWirelessFrame_m.o: inet/linklayer/idealwireless/IdealWirelessFrame_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/idealwireless/IdealWirelessFrame_m.h
$O/inet/linklayer/idealwireless/IdealWirelessMac.o: inet/linklayer/idealwireless/IdealWirelessMac.cc \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/common/WirelessMacBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/contract/RadioState.h \
	inet/linklayer/idealwireless/IdealWirelessFrame_m.h \
	inet/linklayer/idealwireless/IdealWirelessMac.h \
	inet/linklayer/radio/IdealAirFrame_m.h \
	inet/linklayer/radio/IdealRadio.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h \
	inet/world/radio/IdealChannelModel.h \
	inet/world/radio/IdealChannelModelAccess.h
$O/inet/linklayer/ieee80211/mac/FrameBlock.o: inet/linklayer/ieee80211/mac/FrameBlock.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/FrameBlock.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/inet/linklayer/ieee80211/mac/Ieee80211DataRate.o: inet/linklayer/ieee80211/mac/Ieee80211DataRate.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/ieee80211/mac/Ieee80211DataRate.h \
	inet/linklayer/ieee80211/mac/WifiMode.h \
	inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	inet/linklayer/radio/ModulationType.h
$O/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.o: inet/linklayer/ieee80211/mac/Ieee80211Frame_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/inet/linklayer/ieee80211/mac/Ieee80211Mac.o: inet/linklayer/ieee80211/mac/Ieee80211Mac.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/FSMA.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/common/WirelessMacBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/contract/PhyControlInfo_m.h \
	inet/linklayer/contract/RadioState.h \
	inet/linklayer/ieee80211/mac/IQoSClassifier.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211DataRate.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mac/Ieee80211Mac.h \
	inet/linklayer/ieee80211/mac/Ieee80211eClassifier.h \
	inet/linklayer/ieee80211/mac/WifiMode.h \
	inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	inet/linklayer/radio/AirFrame_m.h \
	inet/linklayer/radio/ModulationType.h \
	inet/linklayer/radio/Radio80211aControlInfo_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h
$O/inet/linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.o: inet/linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/IQoSClassifier.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.h
$O/inet/linklayer/ieee80211/mac/Ieee80211eClassifier.o: inet/linklayer/ieee80211/mac/Ieee80211eClassifier.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/IQoSClassifier.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mac/Ieee80211eClassifier.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/linklayer/ieee80211/mac/MultiQueue.o: inet/linklayer/ieee80211/mac/MultiQueue.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/ieee80211/mac/IQoSClassifier.h \
	inet/linklayer/ieee80211/mac/MultiQueue.h
$O/inet/linklayer/ieee80211/mac/WifiMode.o: inet/linklayer/ieee80211/mac/WifiMode.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/ieee80211/mac/Ieee80211DataRate.h \
	inet/linklayer/ieee80211/mac/WifiMode.h \
	inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	inet/linklayer/radio/ModulationType.h
$O/inet/linklayer/ieee80211/mgmt/ETXPacket_m.o: inet/linklayer/ieee80211/mgmt/ETXPacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mgmt/ETXPacket_m.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: inet/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/util/opp_utils.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211Etx.o: inet/linklayer/ieee80211/mgmt/Ieee80211Etx.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	inet/linklayer/radio/ModulationType.h \
	inet/linklayer/radio/Radio80211aControlInfo_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/util/GlobalWirelessLinkInspector.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/contract/RadioState.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.o: inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.o: inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o: inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/contract/PhyControlInfo_m.h \
	inet/linklayer/contract/RadioState.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/linklayer/radio/ModulationType.h \
	inet/linklayer/radio/Radio80211aControlInfo_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h \
	inet/world/radio/ChannelAccess.h \
	inet/world/radio/IChannelControl.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h
$O/inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o: inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h
$O/inet/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtAdhoc.o: inet/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtAdhoc.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtAdhoc.h \
	inet/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtBase.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/olsr/OLSR.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	inet/networklayer/manetrouting/olsr/OLSR_state.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	inet/securityModule/Security.h \
	inet/securityModule/SecurityKeys.h \
	inet/securityModule/SecurityWPA2.h \
	inet/securityModule/message/NewMsgWithMacAddr_m.h \
	inet/securityModule/message/securityPkt_m.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h
$O/inet/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtBase.o: inet/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtBase.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtBase.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/securityModule/Security.h \
	inet/securityModule/SecurityKeys.h \
	inet/securityModule/SecurityWPA2.h \
	inet/securityModule/message/NewMsgWithMacAddr_m.h \
	inet/securityModule/message/securityPkt_m.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/linklayer/ieee80211/radio/BerParseFile.o: inet/linklayer/ieee80211/radio/BerParseFile.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/ieee80211/radio/BerParseFile.h
$O/inet/linklayer/ieee80211/radio/Ieee80211RadioModel.o: inet/linklayer/ieee80211/radio/Ieee80211RadioModel.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/PhyControlInfo_m.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/WifiMode.h \
	inet/linklayer/ieee80211/radio/BerParseFile.h \
	inet/linklayer/ieee80211/radio/Ieee80211RadioModel.h \
	inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	inet/linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	inet/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
	inet/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
	inet/linklayer/radio/AirFrame_m.h \
	inet/linklayer/radio/IRadioModel.h \
	inet/linklayer/radio/ModulationType.h \
	inet/linklayer/radio/SnrList.h \
	inet/util/FWMath.h
$O/inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o: inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h
$O/inet/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o: inet/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/ieee80211/mac/WifiMode.h \
	inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	inet/linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	inet/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
	inet/linklayer/radio/ModulationType.h
$O/inet/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o: inet/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/ieee80211/mac/WifiMode.h \
	inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	inet/linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	inet/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
	inet/linklayer/radio/ModulationType.h
$O/inet/linklayer/ieee80211mesh/ethernet/EtherEncapMesh.o: inet/linklayer/ieee80211mesh/ethernet/EtherEncapMesh.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherEncap.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/EtherMAC.h \
	inet/linklayer/ethernet/EtherMACBase.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211mesh/ethernet/EtherEncapMesh.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/ieee80211mesh/hwmp/hwmp-rtable.o: inet/linklayer/ieee80211mesh/hwmp/hwmp-rtable.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/hwmp/hwmp-rtable.h
$O/inet/linklayer/ieee80211mesh/hwmp/hwmp.o: inet/linklayer/ieee80211mesh/hwmp/hwmp.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211mesh/hwmp/hwmp-rtable.h \
	inet/linklayer/ieee80211mesh/hwmp/hwmp.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/linklayer/radio/ModulationType.h \
	inet/linklayer/radio/Radio80211aControlInfo_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/linklayer/ieee80211mesh/locator/BigUint.o: inet/linklayer/ieee80211mesh/locator/BigUint.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/ieee80211mesh/locator/BigUint.h
$O/inet/linklayer/ieee80211mesh/locator/LocatorModule.o: inet/linklayer/ieee80211mesh/locator/LocatorModule.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/linklayer/ieee80211mesh/locator/LocatorModule.h \
	inet/linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/ARPPacket_m.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/udp/UDP.h \
	inet/util/GlobalWirelessLinkInspector.h
$O/inet/linklayer/ieee80211mesh/locator/LocatorModuleClient.o: inet/linklayer/ieee80211mesh/locator/LocatorModuleClient.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/linklayer/ieee80211mesh/locator/LocatorModuleClient.h \
	inet/linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/udp/UDP.h
$O/inet/linklayer/ieee80211mesh/locator/locatorPkt_m.o: inet/linklayer/ieee80211mesh/locator/locatorPkt_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/manetrouting/base/ManetAddress.h
$O/inet/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.o: inet/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.cc \
	inet/base/AbstractQueue.h \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/FSMA.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/common/WirelessMacBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/contract/PhyControlInfo_m.h \
	inet/linklayer/contract/RadioState.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/linklayer/ieee80211/mac/IQoSClassifier.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mac/Ieee80211Mac.h \
	inet/linklayer/ieee80211/mac/WifiMode.h \
	inet/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	inet/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.h \
	inet/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h \
	inet/linklayer/ieee80211mesh/mgmt/lwmpls_data.h \
	inet/linklayer/radio/AirFrame_m.h \
	inet/linklayer/radio/INoiseGenerator.h \
	inet/linklayer/radio/IRadioModel.h \
	inet/linklayer/radio/ModulationType.h \
	inet/linklayer/radio/Radio.h \
	inet/linklayer/radio/SnrList.h \
	inet/linklayer/radio/propagation/IReceptionModel.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/MeshControlInfo_m.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/olsr/OLSR.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	inet/networklayer/manetrouting/olsr/OLSR_state.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	inet/securityModule/Security.h \
	inet/securityModule/SecurityKeys.h \
	inet/securityModule/message/NewMsgWithMacAddr_m.h \
	inet/securityModule/message/securityPkt_m.h \
	inet/status/NodeStatus.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h \
	inet/util/WirelessNumHops.h \
	inet/util/dijktraKShortest.h \
	inet/util/opp_utils.h \
	inet/util/uint128.h \
	inet/world/annotations/AnnotationManager.h \
	inet/world/obstacles/Obstacle.h \
	inet/world/obstacles/ObstacleControl.h \
	inet/world/radio/ChannelAccess.h \
	inet/world/radio/IChannelControl.h
$O/inet/linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.o: inet/linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.cc \
	inet/base/AbstractQueue.h \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/FSMA.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/common/WirelessMacBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/contract/PhyControlInfo_m.h \
	inet/linklayer/contract/RadioState.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/linklayer/ieee80211/mac/IQoSClassifier.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mac/Ieee80211Mac.h \
	inet/linklayer/ieee80211/mac/WifiMode.h \
	inet/linklayer/ieee80211/mgmt/ETXPacket_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.h \
	inet/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h \
	inet/linklayer/ieee80211mesh/mgmt/lwmpls_data.h \
	inet/linklayer/radio/AirFrame_m.h \
	inet/linklayer/radio/INoiseGenerator.h \
	inet/linklayer/radio/IRadioModel.h \
	inet/linklayer/radio/ModulationType.h \
	inet/linklayer/radio/Radio.h \
	inet/linklayer/radio/SnrList.h \
	inet/linklayer/radio/propagation/IReceptionModel.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/ARPPacket_m.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/MeshControlInfo_m.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/olsr/OLSR.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	inet/networklayer/manetrouting/olsr/OLSR_state.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	inet/networklayer/mpls/MPLSPacket.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ted/LinkStatePacket_m.h \
	inet/networklayer/ted/TED_m.h \
	inet/securityModule/Security.h \
	inet/securityModule/SecurityKeys.h \
	inet/securityModule/message/NewMsgWithMacAddr_m.h \
	inet/securityModule/message/securityPkt_m.h \
	inet/status/NodeStatus.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h \
	inet/util/WirelessNumHops.h \
	inet/util/dijktraKShortest.h \
	inet/util/opp_utils.h \
	inet/util/uint128.h \
	inet/world/annotations/AnnotationManager.h \
	inet/world/obstacles/Obstacle.h \
	inet/world/obstacles/ObstacleControl.h \
	inet/world/radio/ChannelAccess.h \
	inet/world/radio/IChannelControl.h
$O/inet/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.o: inet/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h
$O/inet/linklayer/ieee80211mesh/mgmt/lwmpls_data.o: inet/linklayer/ieee80211mesh/mgmt/lwmpls_data.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/mgmt/lwmpls_data.h
$O/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.o: inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.h
$O/inet/linklayer/ieee8021d/common/STPBase.o: inet/linklayer/ieee8021d/common/STPBase.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/switch/IMACAddressTable.h \
	inet/linklayer/ieee8021d/common/STPBase.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/ieee8021d/relay/Ieee8021dRelay.o: inet/linklayer/ieee8021d/relay/Ieee8021dRelay.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/linklayer/ethernet/switch/IMACAddressTable.h \
	inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	inet/linklayer/ieee8021d/relay/Ieee8021dRelay.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/ieee8021d/rstp/RSTP.o: inet/linklayer/ieee8021d/rstp/RSTP.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/linklayer/ethernet/switch/IMACAddressTable.h \
	inet/linklayer/ethernet/switch/MACAddressTable.h \
	inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	inet/linklayer/ieee8021d/common/STPBase.h \
	inet/linklayer/ieee8021d/rstp/RSTP.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/ieee8021d/stp/STP.o: inet/linklayer/ieee8021d/stp/STP.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/EtherFrame.h \
	inet/linklayer/ethernet/EtherFrame_m.h \
	inet/linklayer/ethernet/Ethernet.h \
	inet/linklayer/ethernet/switch/IMACAddressTable.h \
	inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	inet/linklayer/ieee8021d/common/STPBase.h \
	inet/linklayer/ieee8021d/stp/STP.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/ieee8021d/tester/STPTester.o: inet/linklayer/ieee8021d/tester/STPTester.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/Topology.h \
	inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ethernet/switch/IMACAddressTable.h \
	inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	inet/linklayer/ieee8021d/common/STPBase.h \
	inet/linklayer/ieee8021d/stp/STP.h \
	inet/linklayer/ieee8021d/tester/STPTester.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h
$O/inet/linklayer/loopback/Loopback.o: inet/linklayer/loopback/Loopback.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/common/MACBase.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/contract/TxNotifDetails.h \
	inet/linklayer/loopback/Loopback.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/util/opp_utils.h
$O/inet/linklayer/queue/AlgorithmicDropperBase.o: inet/linklayer/queue/AlgorithmicDropperBase.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/queue/AlgorithmicDropperBase.h \
	inet/linklayer/queue/IQueueAccess.h
$O/inet/linklayer/queue/DropTailQueue.o: inet/linklayer/queue/DropTailQueue.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/IPassiveQueue.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/queue/DropTailQueue.h
$O/inet/linklayer/queue/FIFOQueue.o: inet/linklayer/queue/FIFOQueue.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/IPassiveQueue.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/queue/FIFOQueue.h \
	inet/linklayer/queue/IQueueAccess.h
$O/inet/linklayer/queue/PriorityScheduler.o: inet/linklayer/queue/PriorityScheduler.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/IPassiveQueue.h \
	inet/linklayer/queue/PriorityScheduler.h \
	inet/linklayer/queue/SchedulerBase.h
$O/inet/linklayer/queue/REDDropper.o: inet/linklayer/queue/REDDropper.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/queue/AlgorithmicDropperBase.h \
	inet/linklayer/queue/IQueueAccess.h \
	inet/linklayer/queue/REDDropper.h \
	inet/util/opp_utils.h
$O/inet/linklayer/queue/SchedulerBase.o: inet/linklayer/queue/SchedulerBase.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/IPassiveQueue.h \
	inet/linklayer/queue/SchedulerBase.h
$O/inet/linklayer/queue/ThresholdDropper.o: inet/linklayer/queue/ThresholdDropper.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/queue/AlgorithmicDropperBase.h \
	inet/linklayer/queue/IQueueAccess.h \
	inet/linklayer/queue/ThresholdDropper.h
$O/inet/linklayer/queue/WRRScheduler.o: inet/linklayer/queue/WRRScheduler.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/IPassiveQueue.h \
	inet/linklayer/queue/SchedulerBase.h \
	inet/linklayer/queue/WRRScheduler.h \
	inet/util/opp_utils.h
$O/inet/linklayer/queue/WeightedFairQueue.o: inet/linklayer/queue/WeightedFairQueue.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/IPassiveQueue.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/ieee80211/mac/IQoSClassifier.h \
	inet/linklayer/queue/IQueueAccess.h \
	inet/linklayer/queue/WeightedFairQueue.h
$O/inet/linklayer/radio/AirFrame_m.o: inet/linklayer/radio/AirFrame_m.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/linklayer/radio/AirFrame_m.h \
	inet/linklayer/radio/ModulationType.h \
	inet/util/FWMath.h
$O/inet/linklayer/radio/GenericRadioModel.o: inet/linklayer/radio/GenericRadioModel.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/PhyControlInfo_m.h \
	inet/linklayer/radio/AirFrame_m.h \
	inet/linklayer/radio/GenericRadioModel.h \
	inet/linklayer/radio/IModulation.h \
	inet/linklayer/radio/IRadioModel.h \
	inet/linklayer/radio/Modulation.h \
	inet/linklayer/radio/ModulationType.h \
	inet/linklayer/radio/SnrList.h \
	inet/util/FWMath.h
$O/inet/linklayer/radio/IdealAirFrame_m.o: inet/linklayer/radio/IdealAirFrame_m.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/linklayer/radio/IdealAirFrame_m.h \
	inet/util/FWMath.h
$O/inet/linklayer/radio/IdealRadio.o: inet/linklayer/radio/IdealRadio.cc \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/RadioState.h \
	inet/linklayer/radio/IdealAirFrame_m.h \
	inet/linklayer/radio/IdealRadio.h \
	inet/status/NodeStatus.h \
	inet/util/FWMath.h \
	inet/world/radio/IdealChannelModel.h \
	inet/world/radio/IdealChannelModelAccess.h
$O/inet/linklayer/radio/Modulation.o: inet/linklayer/radio/Modulation.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/radio/IModulation.h \
	inet/linklayer/radio/Modulation.h
$O/inet/linklayer/radio/Radio.o: inet/linklayer/radio/Radio.cc \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/battery/models/BasicBattery.h \
	inet/linklayer/contract/PhyControlInfo_m.h \
	inet/linklayer/contract/RadioState.h \
	inet/linklayer/radio/AirFrame_m.h \
	inet/linklayer/radio/INoiseGenerator.h \
	inet/linklayer/radio/IRadioModel.h \
	inet/linklayer/radio/ModulationType.h \
	inet/linklayer/radio/Radio.h \
	inet/linklayer/radio/Radio80211aControlInfo_m.h \
	inet/linklayer/radio/SnrList.h \
	inet/linklayer/radio/propagation/IReceptionModel.h \
	inet/status/NodeStatus.h \
	inet/util/FWMath.h \
	inet/world/annotations/AnnotationManager.h \
	inet/world/obstacles/Obstacle.h \
	inet/world/obstacles/ObstacleControl.h \
	inet/world/radio/ChannelAccess.h \
	inet/world/radio/IChannelControl.h
$O/inet/linklayer/radio/Radio80211aControlInfo_m.o: inet/linklayer/radio/Radio80211aControlInfo_m.cc \
	inet/linklayer/radio/ModulationType.h \
	inet/linklayer/radio/Radio80211aControlInfo_m.h
$O/inet/linklayer/radio/propagation/FreeSpaceModel.o: inet/linklayer/radio/propagation/FreeSpaceModel.cc \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/radio/propagation/FreeSpaceModel.h \
	inet/linklayer/radio/propagation/IReceptionModel.h \
	inet/util/FWMath.h \
	inet/world/radio/ChannelAccess.h \
	inet/world/radio/IChannelControl.h
$O/inet/linklayer/radio/propagation/LogNormalShadowingModel.o: inet/linklayer/radio/propagation/LogNormalShadowingModel.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/radio/propagation/FreeSpaceModel.h \
	inet/linklayer/radio/propagation/IReceptionModel.h \
	inet/linklayer/radio/propagation/LogNormalShadowingModel.h \
	inet/util/FWMath.h
$O/inet/linklayer/radio/propagation/NakagamiModel.o: inet/linklayer/radio/propagation/NakagamiModel.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/radio/propagation/FreeSpaceModel.h \
	inet/linklayer/radio/propagation/IReceptionModel.h \
	inet/linklayer/radio/propagation/NakagamiModel.h \
	inet/util/FWMath.h
$O/inet/linklayer/radio/propagation/RayleighModel.o: inet/linklayer/radio/propagation/RayleighModel.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/radio/propagation/FreeSpaceModel.h \
	inet/linklayer/radio/propagation/IReceptionModel.h \
	inet/linklayer/radio/propagation/RayleighModel.h \
	inet/util/FWMath.h
$O/inet/linklayer/radio/propagation/RiceModel.o: inet/linklayer/radio/propagation/RiceModel.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/radio/propagation/FreeSpaceModel.h \
	inet/linklayer/radio/propagation/IReceptionModel.h \
	inet/linklayer/radio/propagation/RiceModel.h \
	inet/util/FWMath.h
$O/inet/linklayer/radio/propagation/SUIModel.o: inet/linklayer/radio/propagation/SUIModel.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/radio/propagation/FreeSpaceModel.h \
	inet/linklayer/radio/propagation/IReceptionModel.h \
	inet/linklayer/radio/propagation/SUIModel.h \
	inet/util/FWMath.h
$O/inet/linklayer/radio/propagation/TwoRayGroundModel.o: inet/linklayer/radio/propagation/TwoRayGroundModel.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/radio/propagation/FreeSpaceModel.h \
	inet/linklayer/radio/propagation/IReceptionModel.h \
	inet/linklayer/radio/propagation/TwoRayGroundModel.h \
	inet/util/FWMath.h
$O/inet/mobility/common/LineSegmentsMobilityBase.o: inet/mobility/common/LineSegmentsMobilityBase.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/common/MobilityAccess.o: inet/mobility/common/MobilityAccess.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityAccess.h \
	inet/mobility/contract/IMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/common/MobilityBase.o: inet/mobility/common/MobilityBase.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/common/MovingMobilityBase.o: inet/mobility/common/MovingMobilityBase.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/contract/IMobility.o: inet/mobility/contract/IMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/mobility/contract/IMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/group/MoBANCoordinator.o: inet/mobility/group/MoBANCoordinator.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/group/MoBANCoordinator.h \
	inet/mobility/group/MoBANLocal.h \
	inet/mobility/group/Posture.h \
	inet/mobility/group/PostureTransition.h \
	inet/util/FWMath.h
$O/inet/mobility/group/MoBANLocal.o: inet/mobility/group/MoBANLocal.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/group/MoBANCoordinator.h \
	inet/mobility/group/MoBANLocal.h \
	inet/mobility/group/Posture.h \
	inet/mobility/group/PostureTransition.h \
	inet/util/FWMath.h
$O/inet/mobility/group/Posture.o: inet/mobility/group/Posture.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/mobility/group/Posture.h \
	inet/util/FWMath.h
$O/inet/mobility/group/PostureTransition.o: inet/mobility/group/PostureTransition.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/mobility/group/PostureTransition.h \
	inet/util/FWMath.h
$O/inet/mobility/single/ANSimMobility.o: inet/mobility/single/ANSimMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/ANSimMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/BonnMotionFileCache.o: inet/mobility/single/BonnMotionFileCache.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/mobility/single/BonnMotionFileCache.h
$O/inet/mobility/single/BonnMotionMobility.o: inet/mobility/single/BonnMotionMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/BonnMotionFileCache.h \
	inet/mobility/single/BonnMotionMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/ChiangMobility.o: inet/mobility/single/ChiangMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/ChiangMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/CircleMobility.o: inet/mobility/single/CircleMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/CircleMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/ConstSpeedMobility.o: inet/mobility/single/ConstSpeedMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/ConstSpeedMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/GaussMarkovMobility.o: inet/mobility/single/GaussMarkovMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/GaussMarkovMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/LaptopModelManager.o: inet/mobility/single/LaptopModelManager.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/LaptopModelManager.h \
	inet/util/FWMath.h
$O/inet/mobility/single/LinearMobility.o: inet/mobility/single/LinearMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/LinearMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/LinearNodeDistributionMobility.o: inet/mobility/single/LinearNodeDistributionMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/LinearNodeDistributionMobility.h \
	inet/mobility/static/StationaryMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/MassMobility.o: inet/mobility/single/MassMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/MassMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/Ns2MotionMobility.o: inet/mobility/single/Ns2MotionMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/Ns2MotionMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/RandomWPMobility.o: inet/mobility/single/RandomWPMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/RandomWPMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/RectangleMobility.o: inet/mobility/single/RectangleMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/RectangleMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/TraCIMobility.o: inet/mobility/single/TraCIMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/TraCIMobility.h \
	inet/util/FWMath.h \
	inet/world/traci/TraCIColor.h \
	inet/world/traci/TraCIScenarioManager.h
$O/inet/mobility/single/TractorMobility.o: inet/mobility/single/TractorMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/TractorMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/single/TurtleMobility.o: inet/mobility/single/TurtleMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/LineSegmentsMobilityBase.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/common/MovingMobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/TurtleMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/static/StaticGridMobility.o: inet/mobility/static/StaticGridMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/static/StaticGridMobility.h \
	inet/mobility/static/StationaryMobility.h \
	inet/util/FWMath.h
$O/inet/mobility/static/StationaryMobility.o: inet/mobility/static/StationaryMobility.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/static/StationaryMobility.h \
	inet/util/FWMath.h
$O/inet/networklayer/arp/ARP.o: inet/networklayer/arp/ARP.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/ARPPacket_m.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/status/NodeStatus.h
$O/inet/networklayer/arp/ARPPacket_m.o: inet/networklayer/arp/ARPPacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/ARPPacket_m.h \
	inet/networklayer/contract/IPv4Address.h
$O/inet/networklayer/arp/IARPCache.o: inet/networklayer/arp/IARPCache.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/contract/IPv4Address.h
$O/inet/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o: inet/networklayer/autorouting/ipv4/FlatNetworkConfigurator.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h
$O/inet/networklayer/autorouting/ipv4/HostAutoConfigurator.o: inet/networklayer/autorouting/ipv4/HostAutoConfigurator.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/autorouting/ipv4/HostAutoConfigurator.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h
$O/inet/networklayer/autorouting/ipv4/HostAutoConfigurator2.o: inet/networklayer/autorouting/ipv4/HostAutoConfigurator2.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/autorouting/ipv4/HostAutoConfigurator2.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h
$O/inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o: inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/Topology.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/util/PatternMatcher.h \
	inet/util/XMLUtils.h \
	inet/util/stlutils.h
$O/inet/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o: inet/networklayer/autorouting/ipv4/IPv4NodeConfigurator.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/Topology.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	inet/networklayer/autorouting/ipv4/IPv4NodeConfigurator.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/status/NodeStatus.h \
	inet/util/PatternMatcher.h
$O/inet/networklayer/autorouting/ipv4/WirelessRoutingEntry.o: inet/networklayer/autorouting/ipv4/WirelessRoutingEntry.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/autorouting/ipv4/WirelessRoutingEntry.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/util/FWMath.h \
	inet/util/WirelessNumHops.h \
	inet/util/dijktraKShortest.h \
	inet/util/uint128.h
$O/inet/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o: inet/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/networklayer/ipv6/RoutingTable6.h
$O/inet/networklayer/bgpv4/BGPFSM.o: inet/networklayer/bgpv4/BGPFSM.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/bgpv4/BGPCommon.h \
	inet/networklayer/bgpv4/BGPFSM.h \
	inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
	inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPOpen.h \
	inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	inet/networklayer/bgpv4/BGPRouting.h \
	inet/networklayer/bgpv4/BGPRoutingTableEntry.h \
	inet/networklayer/bgpv4/BGPSession.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFRouting.h \
	inet/networklayer/ospfv2/OSPFRoutingAccess.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h \
	inet/util/Macho.h
$O/inet/networklayer/bgpv4/BGPRouting.o: inet/networklayer/bgpv4/BGPRouting.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/bgpv4/BGPCommon.h \
	inet/networklayer/bgpv4/BGPFSM.h \
	inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
	inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPOpen.h \
	inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	inet/networklayer/bgpv4/BGPRouting.h \
	inet/networklayer/bgpv4/BGPRoutingTableEntry.h \
	inet/networklayer/bgpv4/BGPSession.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFRouting.h \
	inet/networklayer/ospfv2/OSPFRoutingAccess.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h \
	inet/util/Macho.h
$O/inet/networklayer/bgpv4/BGPSession.o: inet/networklayer/bgpv4/BGPSession.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/bgpv4/BGPCommon.h \
	inet/networklayer/bgpv4/BGPFSM.h \
	inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
	inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPOpen.h \
	inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	inet/networklayer/bgpv4/BGPRouting.h \
	inet/networklayer/bgpv4/BGPRoutingTableEntry.h \
	inet/networklayer/bgpv4/BGPSession.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFRouting.h \
	inet/networklayer/ospfv2/OSPFRoutingAccess.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h \
	inet/util/Macho.h
$O/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.o: inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.cc \
	inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h
$O/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.o: inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.cc \
	inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h
$O/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.o: inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.cc \
	inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h
$O/inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.o: inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	inet/networklayer/contract/IPv4Address.h
$O/inet/networklayer/bgpv4/BGPMessage/BGPUpdate.o: inet/networklayer/bgpv4/BGPMessage/BGPUpdate.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	inet/networklayer/contract/IPv4Address.h
$O/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o: inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	inet/networklayer/contract/IPv4Address.h
$O/inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.o: inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	inet/networklayer/contract/IPv4Address.h
$O/inet/networklayer/common/InterfaceEntry.o: inet/networklayer/common/InterfaceEntry.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h
$O/inet/networklayer/common/InterfaceMatcher.o: inet/networklayer/common/InterfaceMatcher.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceMatcher.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/util/PatternMatcher.h \
	inet/util/stlutils.h
$O/inet/networklayer/common/InterfaceTable.o: inet/networklayer/common/InterfaceTable.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/status/NodeStatus.h
$O/inet/networklayer/contract/IPProtocolId_m.o: inet/networklayer/contract/IPProtocolId_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h
$O/inet/networklayer/contract/IPSocket.o: inet/networklayer/contract/IPSocket.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h
$O/inet/networklayer/contract/IPv4Address.o: inet/networklayer/contract/IPv4Address.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h
$O/inet/networklayer/contract/IPv4ControlInfo.o: inet/networklayer/contract/IPv4ControlInfo.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h
$O/inet/networklayer/contract/IPv4ControlInfo_m.o: inet/networklayer/contract/IPv4ControlInfo_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h
$O/inet/networklayer/contract/IPv6Address.o: inet/networklayer/contract/IPv6Address.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv6Address.h
$O/inet/networklayer/contract/IPv6ControlInfo.o: inet/networklayer/contract/IPv6ControlInfo.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h
$O/inet/networklayer/contract/IPv6ControlInfo_m.o: inet/networklayer/contract/IPv6ControlInfo_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h
$O/inet/networklayer/contract/IPvXAddress.o: inet/networklayer/contract/IPvXAddress.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h
$O/inet/networklayer/contract/IPvXAddressResolver.o: inet/networklayer/contract/IPvXAddressResolver.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/Topology.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/networklayer/ipv6/RoutingTable6.h \
	inet/util/PatternMatcher.h
$O/inet/networklayer/diffserv/BehaviorAggregateClassifier.o: inet/networklayer/diffserv/BehaviorAggregateClassifier.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/diffserv/BehaviorAggregateClassifier.h \
	inet/networklayer/diffserv/DiffservUtil.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/networklayer/diffserv/DSCPMarker.o: inet/networklayer/diffserv/DSCPMarker.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/diffserv/DSCPMarker.h \
	inet/networklayer/diffserv/DSCP_m.h \
	inet/networklayer/diffserv/DiffservUtil.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h
$O/inet/networklayer/diffserv/DSCP_m.o: inet/networklayer/diffserv/DSCP_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/diffserv/DSCP_m.h
$O/inet/networklayer/diffserv/DiffservUtil.o: inet/networklayer/diffserv/DiffservUtil.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/diffserv/DSCP_m.h \
	inet/networklayer/diffserv/DiffservUtil.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/util/opp_utils.h
$O/inet/networklayer/diffserv/MultiFieldClassifier.o: inet/networklayer/diffserv/MultiFieldClassifier.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/diffserv/DiffservUtil.h \
	inet/networklayer/diffserv/MultiFieldClassifier.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/networklayer/diffserv/SingleRateThreeColorMeter.o: inet/networklayer/diffserv/SingleRateThreeColorMeter.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/diffserv/DiffservUtil.h \
	inet/networklayer/diffserv/SingleRateThreeColorMeter.h
$O/inet/networklayer/diffserv/TokenBucketMeter.o: inet/networklayer/diffserv/TokenBucketMeter.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/diffserv/DiffservUtil.h \
	inet/networklayer/diffserv/TokenBucketMeter.h
$O/inet/networklayer/diffserv/TwoRateThreeColorMeter.o: inet/networklayer/diffserv/TwoRateThreeColorMeter.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/diffserv/DiffservUtil.h \
	inet/networklayer/diffserv/TwoRateThreeColorMeter.h
$O/inet/networklayer/icmpv6/ICMPv6.o: inet/networklayer/icmpv6/ICMPv6.cc \
	inet/applications/pingapp/PingPayload_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/icmpv6/ICMPv6.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/status/NodeStatus.h
$O/inet/networklayer/icmpv6/ICMPv6Message_m.o: inet/networklayer/icmpv6/ICMPv6Message_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h
$O/inet/networklayer/icmpv6/IPv6NDMessage_m.o: inet/networklayer/icmpv6/IPv6NDMessage_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h \
	inet/networklayer/icmpv6/IPv6NDMessage_m.h
$O/inet/networklayer/icmpv6/IPv6NeighbourCache.o: inet/networklayer/icmpv6/IPv6NeighbourCache.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/icmpv6/IPv6NeighbourCache.h
$O/inet/networklayer/icmpv6/IPv6NeighbourDiscovery.o: inet/networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/icmpv6/ICMPv6.h \
	inet/networklayer/icmpv6/ICMPv6Access.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h \
	inet/networklayer/icmpv6/IPv6NDMessage_m.h \
	inet/networklayer/icmpv6/IPv6NeighbourCache.h \
	inet/networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/networklayer/ipv6/RoutingTable6.h \
	inet/networklayer/ipv6/RoutingTable6Access.h \
	inet/networklayer/ipv6tunneling/IPv6Tunneling.h \
	inet/networklayer/xmipv6/BindingUpdateList.h \
	inet/networklayer/xmipv6/MobilityHeader.h \
	inet/networklayer/xmipv6/MobilityHeader_m.h \
	inet/networklayer/xmipv6/xMIPv6.h \
	inet/networklayer/xmipv6/xMIPv6Access.h \
	inet/status/NodeStatus.h
$O/inet/networklayer/internetcloud/CloudDelayerBase.o: inet/networklayer/internetcloud/CloudDelayerBase.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/internetcloud/CloudDelayerBase.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h
$O/inet/networklayer/internetcloud/MatrixCloudDelayer.o: inet/networklayer/internetcloud/MatrixCloudDelayer.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/internetcloud/CloudDelayerBase.h \
	inet/networklayer/internetcloud/MatrixCloudDelayer.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/util/PatternMatcher.h \
	inet/util/XMLUtils.h
$O/inet/networklayer/ipv4/ErrorHandling.o: inet/networklayer/ipv4/ErrorHandling.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/ErrorHandling.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h
$O/inet/networklayer/ipv4/ICMP.o: inet/networklayer/ipv4/ICMP.cc \
	inet/applications/pingapp/PingPayload_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h
$O/inet/networklayer/ipv4/ICMPMessage_m.o: inet/networklayer/ipv4/ICMPMessage_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/ipv4/ICMPMessage_m.h
$O/inet/networklayer/ipv4/IGMPMessage_m.o: inet/networklayer/ipv4/IGMPMessage_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IGMPMessage_m.h
$O/inet/networklayer/ipv4/IGMPv2.o: inet/networklayer/ipv4/IGMPv2.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IGMPMessage_m.h \
	inet/networklayer/ipv4/IGMPv2.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h
$O/inet/networklayer/ipv4/IPv4.o: inet/networklayer/ipv4/IPv4.cc \
	inet/base/AbstractQueue.h \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/ARPPacket_m.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/status/NodeStatus.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/networklayer/ipv4/IPv4Datagram.o: inet/networklayer/ipv4/IPv4Datagram.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h
$O/inet/networklayer/ipv4/IPv4Datagram_m.o: inet/networklayer/ipv4/IPv4Datagram_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h
$O/inet/networklayer/ipv4/IPv4FragBuf.o: inet/networklayer/ipv4/IPv4FragBuf.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/ReassemblyBuffer.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h
$O/inet/networklayer/ipv4/IPv4InterfaceData.o: inet/networklayer/ipv4/IPv4InterfaceData.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h
$O/inet/networklayer/ipv4/IPv4Route.o: inet/networklayer/ipv4/IPv4Route.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/routing/aodv/AODVRouteData.h
$O/inet/networklayer/ipv4/IPv4RouteRule.o: inet/networklayer/ipv4/IPv4RouteRule.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IPv4RouteRule.h
$O/inet/networklayer/ipv4/NetworkInfo.o: inet/networklayer/ipv4/NetworkInfo.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/IScriptable.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/NetworkInfo.h
$O/inet/networklayer/ipv4/RoutingTable.o: inet/networklayer/ipv4/RoutingTable.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableParser.h \
	inet/status/NodeStatus.h \
	inet/util/opp_utils.h
$O/inet/networklayer/ipv4/RoutingTableParser.o: inet/networklayer/ipv4/RoutingTableParser.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableParser.h
$O/inet/networklayer/ipv4/RoutingTableRecorder.o: inet/networklayer/ipv4/RoutingTableRecorder.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableRecorder.h
$O/inet/networklayer/ipv6/IPv6.o: inet/networklayer/ipv6/IPv6.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/icmpv6/ICMPv6.h \
	inet/networklayer/icmpv6/ICMPv6Access.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h \
	inet/networklayer/icmpv6/IPv6NDMessage_m.h \
	inet/networklayer/icmpv6/IPv6NeighbourCache.h \
	inet/networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	inet/networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
	inet/networklayer/ipv6/IPv6.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	inet/networklayer/ipv6/IPv6FragBuf.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/networklayer/ipv6/RoutingTable6.h \
	inet/networklayer/ipv6/RoutingTable6Access.h \
	inet/networklayer/ipv6tunneling/IPv6Tunneling.h \
	inet/networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	inet/networklayer/xmipv6/MobilityHeader.h \
	inet/networklayer/xmipv6/MobilityHeader_m.h \
	inet/status/NodeStatus.h
$O/inet/networklayer/ipv6/IPv6Datagram.o: inet/networklayer/ipv6/IPv6Datagram.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/inet/networklayer/ipv6/IPv6Datagram_m.o: inet/networklayer/ipv6/IPv6Datagram_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h
$O/inet/networklayer/ipv6/IPv6ErrorHandling.o: inet/networklayer/ipv6/IPv6ErrorHandling.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ErrorHandling.h
$O/inet/networklayer/ipv6/IPv6ExtensionHeaders.o: inet/networklayer/ipv6/IPv6ExtensionHeaders.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.o: inet/networklayer/ipv6/IPv6ExtensionHeaders_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/inet/networklayer/ipv6/IPv6FragBuf.o: inet/networklayer/ipv6/IPv6FragBuf.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/ReassemblyBuffer.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/icmpv6/ICMPv6.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	inet/networklayer/ipv6/IPv6FragBuf.h
$O/inet/networklayer/ipv6/IPv6InterfaceData.o: inet/networklayer/ipv6/IPv6InterfaceData.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/networklayer/ipv6/RoutingTable6.h \
	inet/networklayer/ipv6/RoutingTable6Access.h
$O/inet/networklayer/ipv6/RoutingTable6.o: inet/networklayer/ipv6/RoutingTable6.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/networklayer/ipv6/RoutingTable6.h \
	inet/networklayer/ipv6tunneling/IPv6Tunneling.h \
	inet/networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	inet/util/opp_utils.h
$O/inet/networklayer/ipv6tunneling/IPv6Tunneling.o: inet/networklayer/ipv6tunneling/IPv6Tunneling.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/networklayer/ipv6/RoutingTable6.h \
	inet/networklayer/ipv6/RoutingTable6Access.h \
	inet/networklayer/ipv6tunneling/IPv6Tunneling.h \
	inet/networklayer/xmipv6/BindingUpdateList.h \
	inet/networklayer/xmipv6/MobilityHeader.h \
	inet/networklayer/xmipv6/MobilityHeader_m.h \
	inet/networklayer/xmipv6/xMIPv6.h \
	inet/networklayer/xmipv6/xMIPv6Access.h \
	inet/status/NodeStatus.h
$O/inet/networklayer/ldp/LDP.o: inet/networklayer/ldp/LDP.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ldp/LDP.h \
	inet/networklayer/ldp/LDPPacket_m.h \
	inet/networklayer/mpls/ConstType.h \
	inet/networklayer/mpls/IClassifier.h \
	inet/networklayer/mpls/LIBTable.h \
	inet/networklayer/mpls/LIBTableAccess.h \
	inet/networklayer/rsvp_te/IntServ.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/ted/TED.h \
	inet/networklayer/ted/TEDAccess.h \
	inet/networklayer/ted/TED_m.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/networklayer/ldp/LDPPacket_m.o: inet/networklayer/ldp/LDPPacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ldp/LDPPacket_m.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o: inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.o: inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/compatibility.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o: inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o: inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.cc \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o: inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.o: inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.h
$O/inet/networklayer/manetrouting/base/ControlManetRouting_m.o: inet/networklayer/manetrouting/base/ControlManetRouting_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h
$O/inet/networklayer/manetrouting/base/LocatorNotificationInfo_m.o: inet/networklayer/manetrouting/base/LocatorNotificationInfo_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/manetrouting/base/LocatorNotificationInfo_m.h
$O/inet/networklayer/manetrouting/base/ManetAddress.o: inet/networklayer/manetrouting/base/ManetAddress.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/manetrouting/base/ManetAddress.h
$O/inet/networklayer/manetrouting/base/ManetNetfilterHook.o: inet/networklayer/manetrouting/base/ManetNetfilterHook.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/base/ManetRoutingBase.o: inet/networklayer/manetrouting/base/ManetRoutingBase.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/mobility/common/MobilityAccess.h \
	inet/mobility/contract/IMobility.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h \
	inet/util/GlobalWirelessLinkInspector.h
$O/inet/networklayer/manetrouting/base/MeshControlInfo_m.o: inet/networklayer/manetrouting/base/MeshControlInfo_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/manetrouting/base/MeshControlInfo_m.h
$O/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.o: inet/networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/compatibility_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/inet/networklayer/manetrouting/dymo/dymo_msg_struct.o: inet/networklayer/manetrouting/dymo/dymo_msg_struct.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h
$O/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymo_um_omnet.o: inet/networklayer/manetrouting/dymo/dymo_um_omnet.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/blacklist.o: inet/networklayer/manetrouting/dymo/dymoum/blacklist.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.o: inet/networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/MeshControlInfo_m.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/rtable.o: inet/networklayer/manetrouting/dymo/dymoum/rtable.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.o: inet/networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO.o: inet/networklayer/manetrouting/dymo_fau/DYMO.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o: inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.cc \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o: inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.cc \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o: inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.cc \
	inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o: inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.cc \
	inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o: inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.cc \
	inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o: inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.cc \
	inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	inet/util/FWMath.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o: inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.cc \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o: inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.cc \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h
$O/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/inet/networklayer/manetrouting/olsr/OLSR.o: inet/networklayer/manetrouting/olsr/OLSR.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/olsr/OLSR.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	inet/networklayer/manetrouting/olsr/OLSR_state.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h
$O/inet/networklayer/manetrouting/olsr/OLSROPT.o: inet/networklayer/manetrouting/olsr/OLSROPT.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/olsr/OLSR.h \
	inet/networklayer/manetrouting/olsr/OLSROPT.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	inet/networklayer/manetrouting/olsr/OLSR_state.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h
$O/inet/networklayer/manetrouting/olsr/OLSR_ETX.o: inet/networklayer/manetrouting/olsr/OLSR_ETX.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/olsr/OLSR.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	inet/networklayer/manetrouting/olsr/OLSR_state.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h
$O/inet/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: inet/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/olsr/OLSR.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	inet/networklayer/manetrouting/olsr/OLSR_state.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h
$O/inet/networklayer/manetrouting/olsr/OLSR_ETX_state.o: inet/networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/olsr/OLSR.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	inet/networklayer/manetrouting/olsr/OLSR_state.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h
$O/inet/networklayer/manetrouting/olsr/OLSR_rtable.o: inet/networklayer/manetrouting/olsr/OLSR_rtable.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/olsr/OLSR.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	inet/networklayer/manetrouting/olsr/OLSR_state.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h
$O/inet/networklayer/manetrouting/olsr/OLSR_state.o: inet/networklayer/manetrouting/olsr/OLSR_state.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211mesh/locator/ILocator.h \
	inet/networklayer/arp/ARP.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	inet/networklayer/manetrouting/base/compatibility.h \
	inet/networklayer/manetrouting/olsr/OLSR.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	inet/networklayer/manetrouting/olsr/OLSR_state.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	inet/util/FWMath.h \
	inet/util/opp_utils.h
$O/inet/networklayer/manetrouting/olsr/OLSRpkt_m.o: inet/networklayer/manetrouting/olsr/OLSRpkt_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	inet/networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/inet/networklayer/mpls/LIBTable.o: inet/networklayer/mpls/LIBTable.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/mpls/ConstType.h \
	inet/networklayer/mpls/LIBTable.h \
	inet/util/XMLUtils.h
$O/inet/networklayer/mpls/MPLS.o: inet/networklayer/mpls/MPLS.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ldp/LDP.h \
	inet/networklayer/ldp/LDPPacket_m.h \
	inet/networklayer/mpls/ConstType.h \
	inet/networklayer/mpls/IClassifier.h \
	inet/networklayer/mpls/LIBTable.h \
	inet/networklayer/mpls/LIBTableAccess.h \
	inet/networklayer/mpls/MPLS.h \
	inet/networklayer/mpls/MPLSPacket.h \
	inet/networklayer/rsvp_te/IntServ.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/rsvp_te/Utils.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/networklayer/mpls/MPLSPacket.o: inet/networklayer/mpls/MPLSPacket.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/mpls/MPLSPacket.h
$O/inet/networklayer/ospfv2/OSPFConfigReader.o: inet/networklayer/ospfv2/OSPFConfigReader.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ospfv2/OSPFConfigReader.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h \
	inet/util/PatternMatcher.h \
	inet/util/XMLUtils.h
$O/inet/networklayer/ospfv2/OSPFPacket_m.o: inet/networklayer/ospfv2/OSPFPacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h
$O/inet/networklayer/ospfv2/OSPFRouting.o: inet/networklayer/ospfv2/OSPFRouting.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ospfv2/OSPFConfigReader.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFRouting.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h \
	inet/status/NodeStatus.h
$O/inet/networklayer/ospfv2/interface/OSPFInterface.o: inet/networklayer/ospfv2/interface/OSPFInterface.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/interface/OSPFInterfaceState.o: inet/networklayer/ospfv2/interface/OSPFInterfaceState.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: inet/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: inet/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: inet/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: inet/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	inet/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/messagehandler/HelloHandler.o: inet/networklayer/ospfv2/messagehandler/HelloHandler.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/messagehandler/MessageHandler.o: inet/networklayer/ospfv2/messagehandler/MessageHandler.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.o: inet/networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.o: inet/networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: inet/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: inet/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/router/ASExternalLSA.o: inet/networklayer/ospfv2/router/ASExternalLSA.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/router/LSA.o: inet/networklayer/ospfv2/router/LSA.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/router/NetworkLSA.o: inet/networklayer/ospfv2/router/NetworkLSA.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/router/OSPFArea.o: inet/networklayer/ospfv2/router/OSPFArea.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/router/OSPFRouter.o: inet/networklayer/ospfv2/router/OSPFRouter.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/OSPFTimer.h \
	inet/networklayer/ospfv2/interface/OSPFInterface.h \
	inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFArea.h \
	inet/networklayer/ospfv2/router/OSPFRouter.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.o: inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/router/RouterLSA.o: inet/networklayer/ospfv2/router/RouterLSA.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/ospfv2/router/SummaryLSA.o: inet/networklayer/ospfv2/router/SummaryLSA.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ospfv2/OSPFPacket_m.h \
	inet/networklayer/ospfv2/router/LSA.h \
	inet/networklayer/ospfv2/router/OSPFcommon.h
$O/inet/networklayer/routing/aodv/AODVControlPackets_m.o: inet/networklayer/routing/aodv/AODVControlPackets_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/routing/aodv/AODVControlPackets_m.h
$O/inet/networklayer/routing/aodv/AODVRouteData.o: inet/networklayer/routing/aodv/AODVRouteData.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/routing/aodv/AODVRouteData.h
$O/inet/networklayer/routing/aodv/AODVRouting.o: inet/networklayer/routing/aodv/AODVRouting.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/routing/aodv/AODVControlPackets_m.h \
	inet/networklayer/routing/aodv/AODVRouteData.h \
	inet/networklayer/routing/aodv/AODVRouting.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/networklayer/routing/dymo/DYMORouteData.o: inet/networklayer/routing/dymo/DYMORouteData.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/routing/dymo/DYMORouteData.h \
	inet/networklayer/routing/dymo/DYMOdefs.h
$O/inet/networklayer/routing/dymo/DYMO_m.o: inet/networklayer/routing/dymo/DYMO_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/routing/dymo/DYMO_m.h \
	inet/networklayer/routing/dymo/DYMOdefs.h
$O/inet/networklayer/routing/dymo/xDYMO.o: inet/networklayer/routing/dymo/xDYMO.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/routing/dymo/DYMORouteData.h \
	inet/networklayer/routing/dymo/DYMO_m.h \
	inet/networklayer/routing/dymo/DYMOdefs.h \
	inet/networklayer/routing/dymo/xDYMO.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/networklayer/routing/rip/RIPPacket_m.o: inet/networklayer/routing/rip/RIPPacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/routing/rip/RIPPacket_m.h
$O/inet/networklayer/routing/rip/RIPRouting.o: inet/networklayer/routing/rip/RIPRouting.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceMatcher.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/routing/rip/RIPPacket_m.h \
	inet/networklayer/routing/rip/RIPRouting.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/udp/UDP.h
$O/inet/networklayer/rsvp_te/IntServ_m.o: inet/networklayer/rsvp_te/IntServ_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/rsvp_te/IntServ_m.h
$O/inet/networklayer/rsvp_te/RSVP.o: inet/networklayer/rsvp_te/RSVP.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IScriptable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/mpls/ConstType.h \
	inet/networklayer/mpls/IClassifier.h \
	inet/networklayer/mpls/LIBTable.h \
	inet/networklayer/mpls/LIBTableAccess.h \
	inet/networklayer/rsvp_te/IRSVPClassifier.h \
	inet/networklayer/rsvp_te/IntServ.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/rsvp_te/RSVP.h \
	inet/networklayer/rsvp_te/RSVPHelloMsg.h \
	inet/networklayer/rsvp_te/RSVPHello_m.h \
	inet/networklayer/rsvp_te/RSVPPacket.h \
	inet/networklayer/rsvp_te/RSVPPacket_m.h \
	inet/networklayer/rsvp_te/RSVPPathMsg.h \
	inet/networklayer/rsvp_te/RSVPPathMsg_m.h \
	inet/networklayer/rsvp_te/RSVPResvMsg.h \
	inet/networklayer/rsvp_te/RSVPResvMsg_m.h \
	inet/networklayer/rsvp_te/SignallingMsg_m.h \
	inet/networklayer/rsvp_te/Utils.h \
	inet/networklayer/ted/TED.h \
	inet/networklayer/ted/TEDAccess.h \
	inet/networklayer/ted/TED_m.h \
	inet/status/NodeStatus.h \
	inet/util/XMLUtils.h \
	inet/util/common.h
$O/inet/networklayer/rsvp_te/RSVPHello_m.o: inet/networklayer/rsvp_te/RSVPHello_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/rsvp_te/RSVPHello_m.h \
	inet/networklayer/rsvp_te/RSVPPacket.h \
	inet/networklayer/rsvp_te/RSVPPacket_m.h
$O/inet/networklayer/rsvp_te/RSVPPacket_m.o: inet/networklayer/rsvp_te/RSVPPacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/rsvp_te/RSVPPacket_m.h
$O/inet/networklayer/rsvp_te/RSVPPathMsg_m.o: inet/networklayer/rsvp_te/RSVPPathMsg_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/rsvp_te/IntServ.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/rsvp_te/RSVPPacket.h \
	inet/networklayer/rsvp_te/RSVPPacket_m.h \
	inet/networklayer/rsvp_te/RSVPPathMsg_m.h
$O/inet/networklayer/rsvp_te/RSVPResvMsg_m.o: inet/networklayer/rsvp_te/RSVPResvMsg_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/rsvp_te/IntServ.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/rsvp_te/RSVPPacket.h \
	inet/networklayer/rsvp_te/RSVPPacket_m.h \
	inet/networklayer/rsvp_te/RSVPResvMsg_m.h
$O/inet/networklayer/rsvp_te/SignallingMsg_m.o: inet/networklayer/rsvp_te/SignallingMsg_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/rsvp_te/IntServ.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/rsvp_te/SignallingMsg_m.h
$O/inet/networklayer/rsvp_te/SimpleClassifier.o: inet/networklayer/rsvp_te/SimpleClassifier.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IScriptable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/mpls/ConstType.h \
	inet/networklayer/mpls/IClassifier.h \
	inet/networklayer/mpls/LIBTable.h \
	inet/networklayer/mpls/LIBTableAccess.h \
	inet/networklayer/rsvp_te/IRSVPClassifier.h \
	inet/networklayer/rsvp_te/IntServ.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/rsvp_te/RSVP.h \
	inet/networklayer/rsvp_te/RSVPAccess.h \
	inet/networklayer/rsvp_te/RSVPHelloMsg.h \
	inet/networklayer/rsvp_te/RSVPHello_m.h \
	inet/networklayer/rsvp_te/RSVPPacket.h \
	inet/networklayer/rsvp_te/RSVPPacket_m.h \
	inet/networklayer/rsvp_te/RSVPPathMsg.h \
	inet/networklayer/rsvp_te/RSVPPathMsg_m.h \
	inet/networklayer/rsvp_te/RSVPResvMsg.h \
	inet/networklayer/rsvp_te/RSVPResvMsg_m.h \
	inet/networklayer/rsvp_te/SignallingMsg_m.h \
	inet/networklayer/rsvp_te/SimpleClassifier.h \
	inet/util/XMLUtils.h
$O/inet/networklayer/rsvp_te/Utils.o: inet/networklayer/rsvp_te/Utils.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/rsvp_te/IntServ.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/rsvp_te/Utils.h
$O/inet/networklayer/ted/LinkStatePacket_m.o: inet/networklayer/ted/LinkStatePacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ted/LinkStatePacket_m.h \
	inet/networklayer/ted/TED_m.h
$O/inet/networklayer/ted/LinkStateRouting.o: inet/networklayer/ted/LinkStateRouting.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/rsvp_te/IntServ.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/ted/LinkStatePacket_m.h \
	inet/networklayer/ted/LinkStateRouting.h \
	inet/networklayer/ted/TED.h \
	inet/networklayer/ted/TEDAccess.h \
	inet/networklayer/ted/TED_m.h
$O/inet/networklayer/ted/TED.o: inet/networklayer/ted/TED.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/rsvp_te/IntServ.h \
	inet/networklayer/rsvp_te/IntServ_m.h \
	inet/networklayer/ted/TED.h \
	inet/networklayer/ted/TED_m.h \
	inet/status/NodeStatus.h
$O/inet/networklayer/ted/TED_m.o: inet/networklayer/ted/TED_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ted/TED_m.h
$O/inet/networklayer/xmipv6/BindingCache.o: inet/networklayer/xmipv6/BindingCache.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/xmipv6/BindingCache.h
$O/inet/networklayer/xmipv6/BindingUpdateList.o: inet/networklayer/xmipv6/BindingUpdateList.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/networklayer/xmipv6/BindingUpdateList.h
$O/inet/networklayer/xmipv6/MobilityHeader.o: inet/networklayer/xmipv6/MobilityHeader.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	inet/networklayer/xmipv6/MobilityHeader.h \
	inet/networklayer/xmipv6/MobilityHeader_m.h
$O/inet/networklayer/xmipv6/MobilityHeader_m.o: inet/networklayer/xmipv6/MobilityHeader_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	inet/networklayer/xmipv6/MobilityHeader_m.h
$O/inet/networklayer/xmipv6/xMIPv6.o: inet/networklayer/xmipv6/xMIPv6.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h \
	inet/networklayer/icmpv6/IPv6NDMessage_m.h \
	inet/networklayer/icmpv6/IPv6NeighbourCache.h \
	inet/networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	inet/networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/networklayer/ipv6/RoutingTable6.h \
	inet/networklayer/ipv6/RoutingTable6Access.h \
	inet/networklayer/ipv6tunneling/IPv6Tunneling.h \
	inet/networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	inet/networklayer/xmipv6/BindingCache.h \
	inet/networklayer/xmipv6/BindingCacheAccess.h \
	inet/networklayer/xmipv6/BindingUpdateList.h \
	inet/networklayer/xmipv6/BindingUpdateListAccess.h \
	inet/networklayer/xmipv6/MobilityHeader.h \
	inet/networklayer/xmipv6/MobilityHeader_m.h \
	inet/networklayer/xmipv6/xMIPv6.h
$O/inet/securityModule/Security.o: inet/securityModule/Security.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArrayMessage.h \
	inet/base/ByteArrayMessage_m.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/securityModule/Security.h \
	inet/securityModule/SecurityKeys.h \
	inet/securityModule/message/NewMsgWithMacAddr_m.h \
	inet/securityModule/message/securityPkt_m.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/queues/TCPByteStreamRcvQueue.h \
	inet/transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/udp/UDP.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/securityModule/SecurityWPA2.o: inet/securityModule/SecurityWPA2.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArrayMessage.h \
	inet/base/ByteArrayMessage_m.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/IPassiveQueue.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/PassiveQueueBase.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/securityModule/Security.h \
	inet/securityModule/SecurityKeys.h \
	inet/securityModule/SecurityWPA2.h \
	inet/securityModule/message/NewMsgWithMacAddr_m.h \
	inet/securityModule/message/securityPkt_m.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/queues/TCPByteStreamRcvQueue.h \
	inet/transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/udp/UDP.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/securityModule/message/NewMsgWithMacAddr_m.o: inet/securityModule/message/NewMsgWithMacAddr_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/securityModule/message/NewMsgWithMacAddr_m.h
$O/inet/securityModule/message/securityPkt_m.o: inet/securityModule/message/securityPkt_m.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/Ieee802Ctrl_m.h \
	inet/linklayer/contract/MACAddress.h \
	inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/securityModule/Security.h \
	inet/securityModule/SecurityKeys.h \
	inet/securityModule/message/NewMsgWithMacAddr_m.h \
	inet/securityModule/message/securityPkt_m.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/status/NodeStatus.o: inet/status/NodeStatus.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/status/NodeStatus.h
$O/inet/transport/contract/SCTPCommand_m.o: inet/transport/contract/SCTPCommand_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h
$O/inet/transport/contract/SCTPSocket.o: inet/transport/contract/SCTPSocket.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/SCTPSocket.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h
$O/inet/transport/contract/TCPCommand_m.o: inet/transport/contract/TCPCommand_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h
$O/inet/transport/contract/TCPSocket.o: inet/transport/contract/TCPSocket.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h
$O/inet/transport/contract/TCPSocketMap.o: inet/transport/contract/TCPSocketMap.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/contract/TCPSocket.h \
	inet/transport/contract/TCPSocketMap.h
$O/inet/transport/contract/UDPControlInfo_m.o: inet/transport/contract/UDPControlInfo_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPControlInfo_m.h
$O/inet/transport/contract/UDPSocket.o: inet/transport/contract/UDPSocket.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h
$O/inet/transport/rtp/RTCP.o: inet/transport/rtp/RTCP.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/rtp/RTCP.h \
	inet/transport/rtp/RTCPPacket.h \
	inet/transport/rtp/RTCPPacket1.h \
	inet/transport/rtp/RTCPPacket1_m.h \
	inet/transport/rtp/RTCPPacket2.h \
	inet/transport/rtp/RTCPPacket2_m.h \
	inet/transport/rtp/RTCPPacket3.h \
	inet/transport/rtp/RTCPPacket3_m.h \
	inet/transport/rtp/RTPInnerPacket.h \
	inet/transport/rtp/RTPInnerPacket_m.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPParticipantInfo.h \
	inet/transport/rtp/RTPParticipantInfo_m.h \
	inet/transport/rtp/RTPReceiverInfo.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h \
	inet/transport/rtp/RTPSenderInfo.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h \
	inet/transport/rtp/reports.h \
	inet/transport/rtp/reports_m.h \
	inet/transport/rtp/sdes.h
$O/inet/transport/rtp/RTCPPacket.o: inet/transport/rtp/RTCPPacket.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/rtp/RTCPPacket.h \
	inet/transport/rtp/RTCPPacket1.h \
	inet/transport/rtp/RTCPPacket1_m.h \
	inet/transport/rtp/RTCPPacket2.h \
	inet/transport/rtp/RTCPPacket2_m.h \
	inet/transport/rtp/RTCPPacket3.h \
	inet/transport/rtp/RTCPPacket3_m.h \
	inet/transport/rtp/reports.h \
	inet/transport/rtp/reports_m.h \
	inet/transport/rtp/sdes.h
$O/inet/transport/rtp/RTCPPacket1_m.o: inet/transport/rtp/RTCPPacket1_m.cc \
	inet/transport/rtp/RTCPPacket1_m.h
$O/inet/transport/rtp/RTCPPacket2_m.o: inet/transport/rtp/RTCPPacket2_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/rtp/RTCPPacket1.h \
	inet/transport/rtp/RTCPPacket1_m.h \
	inet/transport/rtp/RTCPPacket2_m.h \
	inet/transport/rtp/reports.h \
	inet/transport/rtp/reports_m.h \
	inet/transport/rtp/sdes.h
$O/inet/transport/rtp/RTCPPacket3_m.o: inet/transport/rtp/RTCPPacket3_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/rtp/RTCPPacket1.h \
	inet/transport/rtp/RTCPPacket1_m.h \
	inet/transport/rtp/RTCPPacket2.h \
	inet/transport/rtp/RTCPPacket2_m.h \
	inet/transport/rtp/RTCPPacket3_m.h \
	inet/transport/rtp/reports.h \
	inet/transport/rtp/reports_m.h \
	inet/transport/rtp/sdes.h
$O/inet/transport/rtp/RTP.o: inet/transport/rtp/RTP.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/rtp/RTP.h \
	inet/transport/rtp/RTPInnerPacket.h \
	inet/transport/rtp/RTPInnerPacket_m.h \
	inet/transport/rtp/RTPInterfacePacket_m.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPProfile.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/inet/transport/rtp/RTPInnerPacket.o: inet/transport/rtp/RTPInnerPacket.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPInnerPacket.h \
	inet/transport/rtp/RTPInnerPacket_m.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/inet/transport/rtp/RTPInnerPacket_m.o: inet/transport/rtp/RTPInnerPacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPInnerPacket_m.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/inet/transport/rtp/RTPInterfacePacket_m.o: inet/transport/rtp/RTPInterfacePacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPInterfacePacket_m.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/inet/transport/rtp/RTPPacket.o: inet/transport/rtp/RTPPacket.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h
$O/inet/transport/rtp/RTPPacket_m.o: inet/transport/rtp/RTPPacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/rtp/RTPPacket_m.h
$O/inet/transport/rtp/RTPParticipantInfo.o: inet/transport/rtp/RTPParticipantInfo.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPParticipantInfo.h \
	inet/transport/rtp/RTPParticipantInfo_m.h \
	inet/transport/rtp/reports.h \
	inet/transport/rtp/reports_m.h \
	inet/transport/rtp/sdes.h
$O/inet/transport/rtp/RTPParticipantInfo_m.o: inet/transport/rtp/RTPParticipantInfo_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPParticipantInfo_m.h
$O/inet/transport/rtp/RTPPayloadReceiver.o: inet/transport/rtp/RTPPayloadReceiver.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPInnerPacket.h \
	inet/transport/rtp/RTPInnerPacket_m.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPPayloadReceiver.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/inet/transport/rtp/RTPPayloadSender.o: inet/transport/rtp/RTPPayloadSender.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPInnerPacket.h \
	inet/transport/rtp/RTPInnerPacket_m.h \
	inet/transport/rtp/RTPInterfacePacket_m.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPPayloadSender.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/inet/transport/rtp/RTPProfile.o: inet/transport/rtp/RTPProfile.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPInnerPacket.h \
	inet/transport/rtp/RTPInnerPacket_m.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPPayloadReceiver.h \
	inet/transport/rtp/RTPPayloadSender.h \
	inet/transport/rtp/RTPProfile.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/inet/transport/rtp/RTPReceiverInfo.o: inet/transport/rtp/RTPReceiverInfo.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPParticipantInfo.h \
	inet/transport/rtp/RTPParticipantInfo_m.h \
	inet/transport/rtp/RTPReceiverInfo.h \
	inet/transport/rtp/reports.h \
	inet/transport/rtp/reports_m.h \
	inet/transport/rtp/sdes.h
$O/inet/transport/rtp/RTPSenderControlMessage_m.o: inet/transport/rtp/RTPSenderControlMessage_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h
$O/inet/transport/rtp/RTPSenderInfo.o: inet/transport/rtp/RTPSenderInfo.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPParticipantInfo.h \
	inet/transport/rtp/RTPParticipantInfo_m.h \
	inet/transport/rtp/RTPSenderInfo.h \
	inet/transport/rtp/reports.h \
	inet/transport/rtp/reports_m.h \
	inet/transport/rtp/sdes.h
$O/inet/transport/rtp/RTPSenderStatusMessage_m.o: inet/transport/rtp/RTPSenderStatusMessage_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/inet/transport/rtp/reports.o: inet/transport/rtp/reports.cc \
	inet/transport/rtp/reports.h \
	inet/transport/rtp/reports_m.h
$O/inet/transport/rtp/reports_m.o: inet/transport/rtp/reports_m.cc \
	inet/transport/rtp/reports_m.h
$O/inet/transport/rtp/sdes.o: inet/transport/rtp/sdes.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/rtp/sdes.h
$O/inet/transport/rtp/profiles/avprofile/RTPAVProfile.o: inet/transport/rtp/profiles/avprofile/RTPAVProfile.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/rtp/RTPProfile.h \
	inet/transport/rtp/profiles/avprofile/RTPAVProfile.h
$O/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPPayloadReceiver.h \
	inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h \
	inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/transport/rtp/RTPInnerPacket.h \
	inet/transport/rtp/RTPInnerPacket_m.h \
	inet/transport/rtp/RTPPacket.h \
	inet/transport/rtp/RTPPacket_m.h \
	inet/transport/rtp/RTPPayloadSender.h \
	inet/transport/rtp/RTPSenderControlMessage_m.h \
	inet/transport/rtp/RTPSenderStatusMessage_m.h \
	inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
	inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o: inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.cc \
	inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/inet/transport/sctp/SCTP.o: inet/transport/sctp/SCTP.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPAlg.o: inet/transport/sctp/SCTPAlg.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAlg.h \
	inet/transport/sctp/SCTPAlgorithm.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPAssociationAddIP.o: inet/transport/sctp/SCTPAssociationAddIP.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h \
	inet/util/common.h
$O/inet/transport/sctp/SCTPAssociationBase.o: inet/transport/sctp/SCTPAssociationBase.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ipv6/RoutingTable6.h \
	inet/networklayer/ipv6/RoutingTable6Access.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAlgorithm.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPAssociationEventProc.o: inet/transport/sctp/SCTPAssociationEventProc.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAlgorithm.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPAssociationRcvMessage.o: inet/transport/sctp/SCTPAssociationRcvMessage.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAlgorithm.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h \
	inet/util/common.h
$O/inet/transport/sctp/SCTPAssociationSendAll.o: inet/transport/sctp/SCTPAssociationSendAll.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAlgorithm.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPAssociationStreamReset.o: inet/transport/sctp/SCTPAssociationStreamReset.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPAssociationUtil.o: inet/transport/sctp/SCTPAssociationUtil.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/networklayer/ipv6/RoutingTable6.h \
	inet/networklayer/ipv6/RoutingTable6Access.h \
	inet/transport/contract/SCTPCommand.h \
	inet/transport/contract/SCTPCommand_m.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAlgorithm.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h \
	inet/util/common.h
$O/inet/transport/sctp/SCTPCCFunctions.o: inet/transport/sctp/SCTPCCFunctions.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPGapList.o: inet/transport/sctp/SCTPGapList.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPMessage.o: inet/transport/sctp/SCTPMessage.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPMessage_m.o: inet/transport/sctp/SCTPMessage_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/sctp/SCTPMessage_m.h
$O/inet/transport/sctp/SCTPNatHook.o: inet/transport/sctp/SCTPNatHook.cc \
	inet/base/AbstractQueue.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/base/ProtocolMap.h \
	inet/base/QueueBase.h \
	inet/base/ReassemblyBuffer.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/IARPCache.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/INetfilter.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4FragBuf.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPNatHook.h \
	inet/transport/sctp/SCTPNatTable.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPNatTable.o: inet/transport/sctp/SCTPNatTable.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPNatTable.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPQueue.o: inet/transport/sctp/SCTPQueue.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPReceiveStream.o: inet/transport/sctp/SCTPReceiveStream.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPSSFunctions.o: inet/transport/sctp/SCTPSSFunctions.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/sctp/SCTPSendStream.o: inet/transport/sctp/SCTPSendStream.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h
$O/inet/transport/tcp/TCP.o: inet/transport/tcp/TCP.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArrayBuffer.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/TCPSendQueue.h \
	inet/transport/tcp/queues/TCPByteStreamRcvQueue.h \
	inet/transport/tcp/queues/TCPByteStreamSendQueue.h \
	inet/transport/tcp/queues/TCPMsgBasedRcvQueue.h \
	inet/transport/tcp/queues/TCPMsgBasedSendQueue.h \
	inet/transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	inet/transport/tcp/queues/TCPVirtualDataSendQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/TCPConnectionBase.o: inet/transport/tcp/TCPConnectionBase.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/TCPSACKRexmitQueue.h \
	inet/transport/tcp/TCPSendQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/TCPConnectionEventProc.o: inet/transport/tcp/TCPConnectionEventProc.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/TCPSendQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/TCPConnectionRcvSegment.o: inet/transport/tcp/TCPConnectionRcvSegment.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/TCPSACKRexmitQueue.h \
	inet/transport/tcp/TCPSendQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/TCPConnectionSackUtil.o: inet/transport/tcp/TCPConnectionSackUtil.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/TCPSACKRexmitQueue.h \
	inet/transport/tcp/TCPSendQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/TCPConnectionUtil.o: inet/transport/tcp/TCPConnectionUtil.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/TCPSACKRexmitQueue.h \
	inet/transport/tcp/TCPSendQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/TCPSACKRexmitQueue.o: inet/transport/tcp/TCPSACKRexmitQueue.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPSACKRexmitQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/flavours/DumbTCP.o: inet/transport/tcp/flavours/DumbTCP.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/flavours/DumbTCP.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/flavours/TCPBaseAlg.o: inet/transport/tcp/flavours/TCPBaseAlg.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPSACKRexmitQueue.h \
	inet/transport/tcp/flavours/TCPBaseAlg.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/flavours/TCPNewReno.o: inet/transport/tcp/flavours/TCPNewReno.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/flavours/TCPBaseAlg.h \
	inet/transport/tcp/flavours/TCPNewReno.h \
	inet/transport/tcp/flavours/TCPTahoeRenoFamily.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/flavours/TCPNoCongestionControl.o: inet/transport/tcp/flavours/TCPNoCongestionControl.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/flavours/TCPBaseAlg.h \
	inet/transport/tcp/flavours/TCPNoCongestionControl.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/flavours/TCPReno.o: inet/transport/tcp/flavours/TCPReno.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/flavours/TCPBaseAlg.h \
	inet/transport/tcp/flavours/TCPReno.h \
	inet/transport/tcp/flavours/TCPTahoeRenoFamily.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.o: inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/flavours/TCPBaseAlg.h \
	inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/flavours/TCPTahoe.o: inet/transport/tcp/flavours/TCPTahoe.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/flavours/TCPBaseAlg.h \
	inet/transport/tcp/flavours/TCPTahoe.h \
	inet/transport/tcp/flavours/TCPTahoeRenoFamily.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/flavours/TCPTahoeRenoFamily.o: inet/transport/tcp/flavours/TCPTahoeRenoFamily.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/flavours/TCPBaseAlg.h \
	inet/transport/tcp/flavours/TCPTahoeRenoFamily.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/flavours/TCPVegas.o: inet/transport/tcp/flavours/TCPVegas.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/flavours/TCPBaseAlg.h \
	inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	inet/transport/tcp/flavours/TCPVegas.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/flavours/TCPWestwood.o: inet/transport/tcp/flavours/TCPWestwood.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPAlgorithm.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/flavours/TCPBaseAlg.h \
	inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	inet/transport/tcp/flavours/TCPWestwood.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/queues/TCPByteStreamRcvQueue.o: inet/transport/tcp/queues/TCPByteStreamRcvQueue.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArrayMessage.h \
	inet/base/ByteArrayMessage_m.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/queues/TCPByteStreamRcvQueue.h \
	inet/transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/queues/TCPByteStreamSendQueue.o: inet/transport/tcp/queues/TCPByteStreamSendQueue.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArrayBuffer.h \
	inet/base/ByteArrayMessage.h \
	inet/base/ByteArrayMessage_m.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPSendQueue.h \
	inet/transport/tcp/queues/TCPByteStreamSendQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/queues/TCPMsgBasedRcvQueue.o: inet/transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/queues/TCPMsgBasedRcvQueue.h \
	inet/transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/queues/TCPMsgBasedSendQueue.o: inet/transport/tcp/queues/TCPMsgBasedSendQueue.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPSendQueue.h \
	inet/transport/tcp/queues/TCPMsgBasedSendQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/queues/TCPVirtualDataRcvQueue.o: inet/transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPReceiveQueue.h \
	inet/transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp/queues/TCPVirtualDataSendQueue.o: inet/transport/tcp/queues/TCPVirtualDataSendQueue.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/contract/TCPCommand_m.h \
	inet/transport/tcp/TCP.h \
	inet/transport/tcp/TCPConnection.h \
	inet/transport/tcp/TCPSendQueue.h \
	inet/transport/tcp/queues/TCPVirtualDataSendQueue.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp_common/TCPSegment.o: inet/transport/tcp_common/TCPSegment.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp_common/TCPSegment_m.o: inet/transport/tcp_common/TCPSegment_m.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/tcp_common/TCPSegment_m.h
$O/inet/transport/tcp_common/TCPSpoof.o: inet/transport/tcp_common/TCPSpoof.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/tcp_common/TCPSpoof.h
$O/inet/transport/udp/UDP.o: inet/transport/udp/UDP.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/LifecycleOperation.h \
	inet/base/ModuleAccess.h \
	inet/base/NodeOperations.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPSocket.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv4ControlInfo.h \
	inet/networklayer/contract/IPv4ControlInfo_m.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPv6ControlInfo.h \
	inet/networklayer/contract/IPv6ControlInfo_m.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/icmpv6/ICMPv6.h \
	inet/networklayer/icmpv6/ICMPv6Access.h \
	inet/networklayer/icmpv6/ICMPv6Message_m.h \
	inet/networklayer/ipv4/ICMP.h \
	inet/networklayer/ipv4/ICMPAccess.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/networklayer/ipv6/IPv6InterfaceData.h \
	inet/status/NodeStatus.h \
	inet/transport/contract/UDPControlInfo.h \
	inet/transport/contract/UDPControlInfo_m.h \
	inet/transport/udp/UDP.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/transport/udp/UDPPacket_m.o: inet/transport/udp/UDPPacket_m.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/udp/UDPPacket_m.h
$O/inet/util/Delayer.o: inet/util/Delayer.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/Delayer.h
$O/inet/util/GlobalWirelessLinkInspector.o: inet/util/GlobalWirelessLinkInspector.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/util/GlobalWirelessLinkInspector.h
$O/inet/util/Macho.o: inet/util/Macho.cc \
	inet/util/Macho.h
$O/inet/util/MessageChecker.o: inet/util/MessageChecker.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/MessageChecker.h
$O/inet/util/NetAnimTrace.o: inet/util/NetAnimTrace.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/contract/IMobility.h \
	inet/util/FWMath.h \
	inet/util/NetAnimTrace.h
$O/inet/util/OrdinalBasedDropper.o: inet/util/OrdinalBasedDropper.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/OrdinalBasedDropper.h
$O/inet/util/OrdinalBasedDuplicator.o: inet/util/OrdinalBasedDuplicator.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/OrdinalBasedDuplicator.h
$O/inet/util/PacketDump.o: inet/util/PacketDump.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/arp/ARPPacket_m.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMPMessage.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/PacketDump.h
$O/inet/util/PatternMatcher.o: inet/util/PatternMatcher.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/PatternMatcher.h
$O/inet/util/PcapDump.o: inet/util/PcapDump.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/PcapDump.h \
	inet/util/headerserializers/ipv4/IPv4Serializer.h \
	inet/util/headerserializers/ipv6/IPv6Serializer.h
$O/inet/util/PcapRecorder.o: inet/util/PcapRecorder.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/util/PacketDump.h \
	inet/util/PcapDump.h \
	inet/util/PcapRecorder.h
$O/inet/util/TCPDump.o: inet/util/TCPDump.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/util/PacketDump.h \
	inet/util/PcapDump.h \
	inet/util/TCPDump.h
$O/inet/util/ThruputMeter.o: inet/util/ThruputMeter.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/ThruputMeter.h
$O/inet/util/ThruputMeteringChannel.o: inet/util/ThruputMeteringChannel.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/ThruputMeteringChannel.h
$O/inet/util/WirelessGetNeig.o: inet/util/WirelessGetNeig.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/mobility/common/MobilityAccess.h \
	inet/mobility/contract/IMobility.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/util/FWMath.h \
	inet/util/WirelessGetNeig.h
$O/inet/util/WirelessNumHops.o: inet/util/WirelessNumHops.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/mobility/common/MobilityAccess.h \
	inet/mobility/contract/IMobility.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/networklayer/ipv4/IPv4InterfaceData.h \
	inet/networklayer/ipv4/IPv4Route.h \
	inet/networklayer/ipv4/IPv4RouteRule.h \
	inet/networklayer/ipv4/IRoutingTable.h \
	inet/networklayer/ipv4/RoutingTableAccess.h \
	inet/networklayer/manetrouting/base/ManetAddress.h \
	inet/util/FWMath.h \
	inet/util/GlobalWirelessLinkInspector.h \
	inet/util/WirelessNumHops.h \
	inet/util/dijktraKShortest.h \
	inet/util/uint128.h
$O/inet/util/XMLUtils.o: inet/util/XMLUtils.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/contract/IPvXAddressResolver.h \
	inet/util/XMLUtils.h
$O/inet/util/common.o: inet/util/common.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/common.h
$O/inet/util/dijktraKShortest.o: inet/util/dijktraKShortest.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/dijktraKShortest.h \
	inet/util/uint128.h
$O/inet/util/int128.o: inet/util/int128.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/int128.h
$O/inet/util/opp_utils.o: inet/util/opp_utils.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/opp_utils.h
$O/inet/util/uint128.o: inet/util/uint128.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/uint128.h
$O/inet/util/headerserializers/TCPIPchecksum.o: inet/util/headerserializers/TCPIPchecksum.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/util/headerserializers/TCPIPchecksum.h
$O/inet/util/headerserializers/ipv4/ICMPSerializer.o: inet/util/headerserializers/ipv4/ICMPSerializer.cc \
	inet/applications/pingapp/PingPayload_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/util/headerserializers/TCPIPchecksum.h \
	inet/util/headerserializers/headers/bsdint.h \
	inet/util/headerserializers/headers/defs.h \
	inet/util/headerserializers/headers/in.h \
	inet/util/headerserializers/headers/in_systm.h \
	inet/util/headerserializers/ipv4/ICMPSerializer.h \
	inet/util/headerserializers/ipv4/IPv4Serializer.h \
	inet/util/headerserializers/ipv4/headers/ip.h \
	inet/util/headerserializers/ipv4/headers/ip_icmp.h
$O/inet/util/headerserializers/ipv4/IGMPSerializer.o: inet/util/headerserializers/ipv4/IGMPSerializer.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/ipv4/IGMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/util/headerserializers/TCPIPchecksum.h \
	inet/util/headerserializers/headers/bsdint.h \
	inet/util/headerserializers/headers/defs.h \
	inet/util/headerserializers/headers/in.h \
	inet/util/headerserializers/headers/in_systm.h \
	inet/util/headerserializers/ipv4/IGMPSerializer.h \
	inet/util/headerserializers/ipv4/IPv4Serializer.h \
	inet/util/headerserializers/ipv4/headers/igmp.h \
	inet/util/headerserializers/ipv4/headers/ip.h
$O/inet/util/headerserializers/ipv4/IPv4Serializer.o: inet/util/headerserializers/ipv4/IPv4Serializer.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/ICMPMessage_m.h \
	inet/networklayer/ipv4/IGMPMessage_m.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/headerserializers/TCPIPchecksum.h \
	inet/util/headerserializers/headers/bsdint.h \
	inet/util/headerserializers/headers/defs.h \
	inet/util/headerserializers/headers/in.h \
	inet/util/headerserializers/headers/in_systm.h \
	inet/util/headerserializers/ipv4/ICMPSerializer.h \
	inet/util/headerserializers/ipv4/IGMPSerializer.h \
	inet/util/headerserializers/ipv4/IPv4Serializer.h \
	inet/util/headerserializers/ipv4/headers/ip.h \
	inet/util/headerserializers/sctp/SCTPSerializer.h \
	inet/util/headerserializers/tcp/TCPSerializer.h \
	inet/util/headerserializers/tcp/headers/tcp.h \
	inet/util/headerserializers/udp/UDPSerializer.h
$O/inet/util/headerserializers/ipv6/IPv6Serializer.o: inet/util/headerserializers/ipv6/IPv6Serializer.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv6/IPv6Datagram.h \
	inet/networklayer/ipv6/IPv6Datagram_m.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/headerserializers/TCPIPchecksum.h \
	inet/util/headerserializers/headers/defs.h \
	inet/util/headerserializers/ipv6/IPv6Serializer.h \
	inet/util/headerserializers/ipv6/headers/ip6.h \
	inet/util/headerserializers/sctp/SCTPSerializer.h \
	inet/util/headerserializers/tcp/TCPSerializer.h \
	inet/util/headerserializers/tcp/headers/tcp.h \
	inet/util/headerserializers/udp/UDPSerializer.h
$O/inet/util/headerserializers/sctp/SCTPSerializer.o: inet/util/headerserializers/sctp/SCTPSerializer.cc \
	inet/base/Compat.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/MACAddress.h \
	inet/networklayer/common/IInterfaceTable.h \
	inet/networklayer/common/InterfaceEntry.h \
	inet/networklayer/common/InterfaceTable.h \
	inet/networklayer/common/InterfaceTableAccess.h \
	inet/networklayer/common/InterfaceToken.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/networklayer/ipv4/IPv4Datagram.h \
	inet/networklayer/ipv4/IPv4Datagram_m.h \
	inet/transport/contract/UDPSocket.h \
	inet/transport/sctp/SCTP.h \
	inet/transport/sctp/SCTPAssociation.h \
	inet/transport/sctp/SCTPGapList.h \
	inet/transport/sctp/SCTPMessage.h \
	inet/transport/sctp/SCTPMessage_m.h \
	inet/transport/sctp/SCTPQueue.h \
	inet/transport/sctp/SCTPReceiveStream.h \
	inet/transport/sctp/SCTPSendStream.h \
	inet/util/headerserializers/headers/bsdint.h \
	inet/util/headerserializers/headers/defs.h \
	inet/util/headerserializers/headers/in.h \
	inet/util/headerserializers/headers/in_systm.h \
	inet/util/headerserializers/ipv4/IPv4Serializer.h \
	inet/util/headerserializers/ipv4/headers/ip.h \
	inet/util/headerserializers/sctp/SCTPSerializer.h \
	inet/util/headerserializers/sctp/headers/sctp.h
$O/inet/util/headerserializers/tcp/TCPSerializer.o: inet/util/headerserializers/tcp/TCPSerializer.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/networklayer/contract/IPProtocolId_m.h \
	inet/networklayer/contract/IPv4Address.h \
	inet/networklayer/contract/IPv6Address.h \
	inet/networklayer/contract/IPvXAddress.h \
	inet/transport/tcp_common/TCPSegment.h \
	inet/transport/tcp_common/TCPSegment_m.h \
	inet/util/headerserializers/TCPIPchecksum.h \
	inet/util/headerserializers/headers/bsdint.h \
	inet/util/headerserializers/headers/defs.h \
	inet/util/headerserializers/headers/in.h \
	inet/util/headerserializers/headers/in_systm.h \
	inet/util/headerserializers/tcp/TCPSerializer.h \
	inet/util/headerserializers/tcp/headers/tcp.h
$O/inet/util/headerserializers/udp/UDPSerializer.o: inet/util/headerserializers/udp/UDPSerializer.cc \
	inet/base/ByteArray.h \
	inet/base/ByteArrayMessage.h \
	inet/base/ByteArrayMessage_m.h \
	inet/base/ByteArray_m.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/transport/udp/UDPPacket.h \
	inet/transport/udp/UDPPacket_m.h \
	inet/util/headerserializers/TCPIPchecksum.h \
	inet/util/headerserializers/headers/bsdint.h \
	inet/util/headerserializers/headers/defs.h \
	inet/util/headerserializers/headers/in.h \
	inet/util/headerserializers/headers/in_systm.h \
	inet/util/headerserializers/udp/UDPSerializer.h \
	inet/util/headerserializers/udp/headers/udp.h
$O/inet/util/messageprinters/InetPacketBytesPrinter.o: inet/util/messageprinters/InetPacketBytesPrinter.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/util/messageprinters/InetPacketPrinter.o: inet/util/messageprinters/InetPacketPrinter.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/util/messageprinters/InetPacketPrinter2.o: inet/util/messageprinters/InetPacketPrinter2.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h
$O/inet/world/annotations/AnnotationDummy.o: inet/world/annotations/AnnotationDummy.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/world/annotations/AnnotationDummy.h
$O/inet/world/annotations/AnnotationManager.o: inet/world/annotations/AnnotationManager.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h \
	inet/world/annotations/AnnotationManager.h
$O/inet/world/httptools/HttpController.o: inet/world/httptools/HttpController.cc \
	inet/applications/httptools/HttpEventMessages_m.h \
	inet/applications/httptools/HttpMessages_m.h \
	inet/applications/httptools/HttpRandom.h \
	inet/applications/httptools/HttpUtils.h \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/world/httptools/HttpController.h
$O/inet/world/obstacles/Obstacle.o: inet/world/obstacles/Obstacle.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h \
	inet/world/annotations/AnnotationManager.h \
	inet/world/obstacles/Obstacle.h
$O/inet/world/obstacles/ObstacleControl.o: inet/world/obstacles/ObstacleControl.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h \
	inet/world/annotations/AnnotationManager.h \
	inet/world/obstacles/Obstacle.h \
	inet/world/obstacles/ObstacleControl.h
$O/inet/world/powercontrol/PowerControlManager.o: inet/world/powercontrol/PowerControlManager.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/world/powercontrol/IPowerControl.h \
	inet/world/powercontrol/PowerControlManager.h \
	inet/world/powercontrol/PowerControlMessages_m.h
$O/inet/world/powercontrol/PowerControlMessages_m.o: inet/world/powercontrol/PowerControlMessages_m.cc \
	inet/world/powercontrol/PowerControlMessages_m.h
$O/inet/world/radio/ChannelAccess.o: inet/world/radio/ChannelAccess.cc \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/mobility/contract/IMobility.h \
	inet/util/FWMath.h \
	inet/world/radio/ChannelAccess.h \
	inet/world/radio/IChannelControl.h
$O/inet/world/radio/ChannelControl.o: inet/world/radio/ChannelControl.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/linklayer/radio/AirFrame_m.h \
	inet/linklayer/radio/ModulationType.h \
	inet/util/FWMath.h \
	inet/world/radio/ChannelControl.h \
	inet/world/radio/IChannelControl.h
$O/inet/world/radio/IdealChannelModel.o: inet/world/radio/IdealChannelModel.cc \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/ILifecycle.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/linklayer/contract/RadioState.h \
	inet/linklayer/radio/IdealAirFrame_m.h \
	inet/linklayer/radio/IdealRadio.h \
	inet/util/FWMath.h \
	inet/world/radio/IdealChannelModel.h \
	inet/world/radio/IdealChannelModelAccess.h
$O/inet/world/radio/IdealChannelModelAccess.o: inet/world/radio/IdealChannelModelAccess.cc \
	inet/base/BasicModule.h \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/INotifiable.h \
	inet/base/ModuleAccess.h \
	inet/base/NotificationBoard.h \
	inet/base/NotifierConsts.h \
	inet/mobility/contract/IMobility.h \
	inet/util/FWMath.h \
	inet/world/radio/IdealChannelModel.h \
	inet/world/radio/IdealChannelModelAccess.h
$O/inet/world/scenario/ScenarioManager.o: inet/world/scenario/ScenarioManager.cc \
	inet/base/Compat.h \
	inet/base/INETDefs.h \
	inet/base/IScriptable.h \
	inet/world/scenario/ScenarioManager.h
$O/inet/world/traci/TraCIColor.o: inet/world/traci/TraCIColor.cc \
	inet/world/traci/TraCIColor.h
$O/inet/world/traci/TraCIScenarioManager.o: inet/world/traci/TraCIScenarioManager.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/mobility/common/MobilityBase.h \
	inet/mobility/contract/IMobility.h \
	inet/mobility/single/TraCIMobility.h \
	inet/util/FWMath.h \
	inet/world/traci/TraCIColor.h \
	inet/world/traci/TraCIConstants.h \
	inet/world/traci/TraCIScenarioManager.h
$O/inet/world/traci/TraCIScenarioManagerLaunchd.o: inet/world/traci/TraCIScenarioManagerLaunchd.cc \
	inet/base/Compat.h \
	inet/base/Coord.h \
	inet/base/INETDefs.h \
	inet/base/ModuleAccess.h \
	inet/util/FWMath.h \
	inet/world/traci/TraCIColor.h \
	inet/world/traci/TraCIConstants.h \
	inet/world/traci/TraCIScenarioManager.h \
	inet/world/traci/TraCIScenarioManagerLaunchd.h

