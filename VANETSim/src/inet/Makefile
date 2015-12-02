#
# OMNeT++/OMNEST Makefile for inet
#
# This file was generated with the command:
#  opp_makemake -f --deep -o inet -O out -DWITH_TCP_COMMON -DWITH_TCP_INET -DWITH_IPv4 -DWITH_IPv6 -DWITH_GENERIC -DWITH_FLOOD -DWITH_UDP -DWITH_RTP -DWITH_SCTP -DWITH_DHCP -DWITH_ETHERNET -DWITH_PPP -DWITH_MPLS -DWITH_OSPFv2 -DWITH_BGPv4 -DWITH_PIM -DWITH_AODV -DWITH_RIP -DWITH_MANET -DWITH_POWER -DWITH_RADIO -DWITH_IEEE80211 -DWITH_IEEE802154 -DWITH_APSKRADIO -DWITH_IDEALWIRELESS -DWITH_TUN -DWITH_BMAC -DWITH_LMAC -DWITH_CSMA -DWITH_XMAC -DWITH_80211MESH -DWITH_xMIPv6 -DWITH_TRACI
#

# Name of target to be created (-o option)
TARGET = inet$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I. \
    -Iapplications \
    -Iapplications/common \
    -Iapplications/dhcp \
    -Iapplications/ethernet \
    -Iapplications/generic \
    -Iapplications/httptools \
    -Iapplications/netperfmeter \
    -Iapplications/pingapp \
    -Iapplications/rtpapp \
    -Iapplications/sctpapp \
    -Iapplications/tcpapp \
    -Iapplications/traci \
    -Iapplications/trafgen \
    -Iapplications/udpapp \
    -Iapplications/util \
    -Ibase \
    -Ibattery \
    -Ibattery/models \
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
    -Igeneric \
    -Ilinklayer \
    -Ilinklayer/channels \
    -Ilinklayer/common \
    -Ilinklayer/configurator \
    -Ilinklayer/contract \
    -Ilinklayer/ethernet \
    -Ilinklayer/ethernet/switch \
    -Ilinklayer/ext \
    -Ilinklayer/idealwireless \
    -Ilinklayer/ieee80211 \
    -Ilinklayer/ieee80211/mac \
    -Ilinklayer/ieee80211/mgmt \
    -Ilinklayer/ieee80211/mgmt/wpa2 \
    -Ilinklayer/ieee80211/radio \
    -Ilinklayer/ieee80211/radio/errormodel \
    -Ilinklayer/ieee80211mesh \
    -Ilinklayer/ieee80211mesh/ethernet \
    -Ilinklayer/ieee80211mesh/hwmp \
    -Ilinklayer/ieee80211mesh/locator \
    -Ilinklayer/ieee80211mesh/mgmt \
    -Ilinklayer/ieee80211mesh/nodes \
    -Ilinklayer/ieee8021d \
    -Ilinklayer/ieee8021d/common \
    -Ilinklayer/ieee8021d/relay \
    -Ilinklayer/ieee8021d/rstp \
    -Ilinklayer/ieee8021d/stp \
    -Ilinklayer/ieee8021d/tester \
    -Ilinklayer/loopback \
    -Ilinklayer/queue \
    -Ilinklayer/radio \
    -Ilinklayer/radio/propagation \
    -Imobility \
    -Imobility/common \
    -Imobility/contract \
    -Imobility/group \
    -Imobility/single \
    -Imobility/static \
    -Inetworklayer \
    -Inetworklayer/arp \
    -Inetworklayer/autorouting \
    -Inetworklayer/autorouting/ipv4 \
    -Inetworklayer/autorouting/ipv6 \
    -Inetworklayer/bgpv4 \
    -Inetworklayer/bgpv4/BGPMessage \
    -Inetworklayer/common \
    -Inetworklayer/contract \
    -Inetworklayer/diffserv \
    -Inetworklayer/icmpv6 \
    -Inetworklayer/internetcloud \
    -Inetworklayer/ipv4 \
    -Inetworklayer/ipv6 \
    -Inetworklayer/ipv6tunneling \
    -Inetworklayer/ldp \
    -Inetworklayer/manetrouting \
    -Inetworklayer/manetrouting/aodv-uu \
    -Inetworklayer/manetrouting/aodv-uu/aodv-uu \
    -Inetworklayer/manetrouting/base \
    -Inetworklayer/manetrouting/dsr \
    -Inetworklayer/manetrouting/dsr/dsr-uu \
    -Inetworklayer/manetrouting/dymo \
    -Inetworklayer/manetrouting/dymo/dymoum \
    -Inetworklayer/manetrouting/dymo_fau \
    -Inetworklayer/manetrouting/olsr \
    -Inetworklayer/mpls \
    -Inetworklayer/ospfv2 \
    -Inetworklayer/ospfv2/interface \
    -Inetworklayer/ospfv2/messagehandler \
    -Inetworklayer/ospfv2/neighbor \
    -Inetworklayer/ospfv2/router \
    -Inetworklayer/routing \
    -Inetworklayer/routing/aodv \
    -Inetworklayer/routing/dymo \
    -Inetworklayer/routing/gpsr \
    -Inetworklayer/routing/rip \
    -Inetworklayer/rsvp_te \
    -Inetworklayer/ted \
    -Inetworklayer/xmipv6 \
    -Inodes \
    -Inodes/aodv \
    -Inodes/bgp \
    -Inodes/dymo \
    -Inodes/ethernet \
    -Inodes/gpsr \
    -Inodes/httptools \
    -Inodes/inet \
    -Inodes/internetcloud \
    -Inodes/ipv6 \
    -Inodes/mpls \
    -Inodes/ospfv2 \
    -Inodes/rip \
    -Inodes/rtp \
    -Inodes/wireless \
    -Inodes/xmipv6 \
    -IsecurityModule \
    -IsecurityModule/message \
    -Istatus \
    -Itransport \
    -Itransport/contract \
    -Itransport/rtp \
    -Itransport/rtp/profiles \
    -Itransport/rtp/profiles/avprofile \
    -Itransport/sctp \
    -Itransport/tcp \
    -Itransport/tcp/flavours \
    -Itransport/tcp/queues \
    -Itransport/tcp_common \
    -Itransport/udp \
    -Iutil \
    -Iutil/headerserializers \
    -Iutil/headerserializers/headers \
    -Iutil/headerserializers/ipv4 \
    -Iutil/headerserializers/ipv4/headers \
    -Iutil/headerserializers/ipv6 \
    -Iutil/headerserializers/ipv6/headers \
    -Iutil/headerserializers/sctp \
    -Iutil/headerserializers/sctp/headers \
    -Iutil/headerserializers/tcp \
    -Iutil/headerserializers/tcp/headers \
    -Iutil/headerserializers/udp \
    -Iutil/headerserializers/udp/headers \
    -Iutil/messageprinters \
    -Iworld \
    -Iworld/annotations \
    -Iworld/httptools \
    -Iworld/obstacles \
    -Iworld/powercontrol \
    -Iworld/radio \
    -Iworld/scenario \
    -Iworld/traci

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = ../../out
PROJECTRELATIVE_PATH = src/inet
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/common/ApplicationBase.o \
    $O/applications/dhcp/DHCPClient.o \
    $O/applications/dhcp/DHCPServer.o \
    $O/applications/ethernet/EtherAppCli.o \
    $O/applications/ethernet/EtherAppSrv.o \
    $O/applications/ethernet/EthernetApplication.o \
    $O/applications/ethernet/EtherTrafGen.o \
    $O/applications/generic/IPvXTrafGen.o \
    $O/applications/generic/IPvXTrafSink.o \
    $O/applications/httptools/HttpBrowser.o \
    $O/applications/httptools/HttpBrowserBase.o \
    $O/applications/httptools/HttpBrowserDirect.o \
    $O/applications/httptools/HttpNodeBase.o \
    $O/applications/httptools/HttpRandom.o \
    $O/applications/httptools/HttpServer.o \
    $O/applications/httptools/HttpServerBase.o \
    $O/applications/httptools/HttpServerDirect.o \
    $O/applications/httptools/HttpServerDirectEvilA.o \
    $O/applications/httptools/HttpServerDirectEvilB.o \
    $O/applications/httptools/HttpServerEvilA.o \
    $O/applications/httptools/HttpServerEvilB.o \
    $O/applications/httptools/HttpUtils.o \
    $O/applications/netperfmeter/NetPerfMeter.o \
    $O/applications/pingapp/PingApp.o \
    $O/applications/pingapp/PingTestApp.o \
    $O/applications/rtpapp/RTPApplication.o \
    $O/applications/sctpapp/SCTPClient.o \
    $O/applications/sctpapp/SCTPNatPeer.o \
    $O/applications/sctpapp/SCTPNatServer.o \
    $O/applications/sctpapp/SCTPPeer.o \
    $O/applications/sctpapp/SCTPServer.o \
    $O/applications/tcpapp/TCPAppBase.o \
    $O/applications/tcpapp/TCPBasicClientApp.o \
    $O/applications/tcpapp/TCPEchoApp.o \
    $O/applications/tcpapp/TCPGenericCliAppBasePromis.o \
    $O/applications/tcpapp/TCPGenericSrvApp.o \
    $O/applications/tcpapp/TCPGenericSrvThread.o \
    $O/applications/tcpapp/TCPSessionApp.o \
    $O/applications/tcpapp/TCPSinkApp.o \
    $O/applications/tcpapp/TCPSrvHostApp.o \
    $O/applications/tcpapp/TelnetApp.o \
    $O/applications/traci/TraCIDemo.o \
    $O/applications/traci/TraCITestApp.o \
    $O/applications/trafgen/TrafGen.o \
    $O/applications/trafgen/TrafGenPar.o \
    $O/applications/udpapp/PASERUdpTrafficReceiver.o \
    $O/applications/udpapp/PASERUdpTrafficSender.o \
    $O/applications/udpapp/UDPBasicApp.o \
    $O/applications/udpapp/UDPBasicBurst.o \
    $O/applications/udpapp/UDPBasicBurstNotification.o \
    $O/applications/udpapp/UDPBasicFlooding.o \
    $O/applications/udpapp/UDPEchoApp.o \
    $O/applications/udpapp/UDPSink.o \
    $O/applications/udpapp/UDPVideoStreamCli.o \
    $O/applications/udpapp/UDPVideoStreamCli2.o \
    $O/applications/udpapp/UDPVideoStreamSvr.o \
    $O/applications/udpapp/UDPVideoStreamSvr2.o \
    $O/applications/util/AddressModule.o \
    $O/base/AbstractQueue.o \
    $O/base/BasicModule.o \
    $O/base/ByteArray.o \
    $O/base/ByteArrayBuffer.o \
    $O/base/ByteArrayMessage.o \
    $O/base/Compat.o \
    $O/base/Coord.o \
    $O/base/erfc.o \
    $O/base/InterfaceOperations.o \
    $O/base/Join.o \
    $O/base/LifecycleController.o \
    $O/base/MMapBoard.o \
    $O/base/ModuleAccess.o \
    $O/base/NedFunctions.o \
    $O/base/NodeOperations.o \
    $O/base/NotificationBoard.o \
    $O/base/NotifierConsts.o \
    $O/base/OperationalBase.o \
    $O/base/PassiveQueueBase.o \
    $O/base/ProtocolMap.o \
    $O/base/QueueBase.o \
    $O/base/ReassemblyBuffer.o \
    $O/base/ResultFilters.o \
    $O/base/Sink.o \
    $O/base/Topology.o \
    $O/base/UnimplementedModule.o \
    $O/battery/models/BasicBattery.o \
    $O/battery/models/InetSimpleBattery.o \
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
    $O/generic/RPSSocket.o \
    $O/linklayer/channels/LinkFailureManager.o \
    $O/linklayer/channels/MyThroughputMeteringChannel.o \
    $O/linklayer/channels/ProgramedFailureChannel.o \
    $O/linklayer/common/MACBase.o \
    $O/linklayer/common/WirelessMacBase.o \
    $O/linklayer/configurator/Ieee8021dInterfaceData.o \
    $O/linklayer/configurator/L2NetworkConfigurator.o \
    $O/linklayer/configurator/L2NodeConfigurator.o \
    $O/linklayer/contract/MACAddress.o \
    $O/linklayer/ethernet/EtherBus.o \
    $O/linklayer/ethernet/EtherEncap.o \
    $O/linklayer/ethernet/EtherFrameClassifier.o \
    $O/linklayer/ethernet/EtherHub.o \
    $O/linklayer/ethernet/EtherLLC.o \
    $O/linklayer/ethernet/EtherMAC.o \
    $O/linklayer/ethernet/EtherMACBase.o \
    $O/linklayer/ethernet/EtherMACFullDuplex.o \
    $O/linklayer/ethernet/switch/MACAddressTable.o \
    $O/linklayer/ethernet/switch/MACRelayUnit.o \
    $O/linklayer/ext/cSocketRTScheduler.o \
    $O/linklayer/ext/ExtInterface.o \
    $O/linklayer/idealwireless/IdealWirelessMac.o \
    $O/linklayer/ieee80211/mac/FrameBlock.o \
    $O/linklayer/ieee80211/mac/Ieee80211DataRate.o \
    $O/linklayer/ieee80211/mac/Ieee80211eClassifier.o \
    $O/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.o \
    $O/linklayer/ieee80211/mac/MultiQueue.o \
    $O/linklayer/ieee80211/mac/WifiMode.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Etx.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtAdhoc.o \
    $O/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtBase.o \
    $O/linklayer/ieee80211/radio/BerParseFile.o \
    $O/linklayer/ieee80211/radio/Ieee80211RadioModel.o \
    $O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o \
    $O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o \
    $O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o \
    $O/linklayer/ieee80211mesh/ethernet/EtherEncapMesh.o \
    $O/linklayer/ieee80211mesh/hwmp/hwmp-rtable.o \
    $O/linklayer/ieee80211mesh/hwmp/hwmp.o \
    $O/linklayer/ieee80211mesh/locator/BigUint.o \
    $O/linklayer/ieee80211mesh/locator/LocatorModule.o \
    $O/linklayer/ieee80211mesh/locator/LocatorModuleClient.o \
    $O/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.o \
    $O/linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.o \
    $O/linklayer/ieee80211mesh/mgmt/lwmpls_data.o \
    $O/linklayer/ieee8021d/common/STPBase.o \
    $O/linklayer/ieee8021d/relay/Ieee8021dRelay.o \
    $O/linklayer/ieee8021d/rstp/RSTP.o \
    $O/linklayer/ieee8021d/stp/STP.o \
    $O/linklayer/ieee8021d/tester/STPTester.o \
    $O/linklayer/loopback/Loopback.o \
    $O/linklayer/queue/AlgorithmicDropperBase.o \
    $O/linklayer/queue/DropTailQueue.o \
    $O/linklayer/queue/FIFOQueue.o \
    $O/linklayer/queue/PriorityScheduler.o \
    $O/linklayer/queue/REDDropper.o \
    $O/linklayer/queue/SchedulerBase.o \
    $O/linklayer/queue/ThresholdDropper.o \
    $O/linklayer/queue/WeightedFairQueue.o \
    $O/linklayer/queue/WRRScheduler.o \
    $O/linklayer/radio/GenericRadioModel.o \
    $O/linklayer/radio/IdealRadio.o \
    $O/linklayer/radio/Modulation.o \
    $O/linklayer/radio/Radio.o \
    $O/linklayer/radio/propagation/FreeSpaceModel.o \
    $O/linklayer/radio/propagation/LogNormalShadowingModel.o \
    $O/linklayer/radio/propagation/NakagamiModel.o \
    $O/linklayer/radio/propagation/RayleighModel.o \
    $O/linklayer/radio/propagation/RiceModel.o \
    $O/linklayer/radio/propagation/SUIModel.o \
    $O/linklayer/radio/propagation/TwoRayGroundModel.o \
    $O/mobility/common/LineSegmentsMobilityBase.o \
    $O/mobility/common/MobilityAccess.o \
    $O/mobility/common/MobilityBase.o \
    $O/mobility/common/MovingMobilityBase.o \
    $O/mobility/contract/IMobility.o \
    $O/mobility/group/MoBANCoordinator.o \
    $O/mobility/group/MoBANLocal.o \
    $O/mobility/group/Posture.o \
    $O/mobility/group/PostureTransition.o \
    $O/mobility/single/ANSimMobility.o \
    $O/mobility/single/BonnMotionFileCache.o \
    $O/mobility/single/BonnMotionMobility.o \
    $O/mobility/single/ChiangMobility.o \
    $O/mobility/single/CircleMobility.o \
    $O/mobility/single/ConstSpeedMobility.o \
    $O/mobility/single/GaussMarkovMobility.o \
    $O/mobility/single/LaptopModelManager.o \
    $O/mobility/single/LinearMobility.o \
    $O/mobility/single/LinearNodeDistributionMobility.o \
    $O/mobility/single/MassMobility.o \
    $O/mobility/single/Ns2MotionMobility.o \
    $O/mobility/single/RandomWPMobility.o \
    $O/mobility/single/RectangleMobility.o \
    $O/mobility/single/TraCIMobility.o \
    $O/mobility/single/TractorMobility.o \
    $O/mobility/single/TurtleMobility.o \
    $O/mobility/static/StaticGridMobility.o \
    $O/mobility/static/StationaryMobility.o \
    $O/networklayer/arp/ARP.o \
    $O/networklayer/arp/IARPCache.o \
    $O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o \
    $O/networklayer/autorouting/ipv4/HostAutoConfigurator.o \
    $O/networklayer/autorouting/ipv4/HostAutoConfigurator2.o \
    $O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o \
    $O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o \
    $O/networklayer/autorouting/ipv4/WirelessRoutingEntry.o \
    $O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o \
    $O/networklayer/bgpv4/BGPFSM.o \
    $O/networklayer/bgpv4/BGPRouting.o \
    $O/networklayer/bgpv4/BGPSession.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdate.o \
    $O/networklayer/common/InterfaceEntry.o \
    $O/networklayer/common/InterfaceMatcher.o \
    $O/networklayer/common/InterfaceTable.o \
    $O/networklayer/contract/IPSocket.o \
    $O/networklayer/contract/IPv4Address.o \
    $O/networklayer/contract/IPv4ControlInfo.o \
    $O/networklayer/contract/IPv6Address.o \
    $O/networklayer/contract/IPv6ControlInfo.o \
    $O/networklayer/contract/IPvXAddress.o \
    $O/networklayer/contract/IPvXAddressResolver.o \
    $O/networklayer/diffserv/BehaviorAggregateClassifier.o \
    $O/networklayer/diffserv/DiffservUtil.o \
    $O/networklayer/diffserv/DSCPMarker.o \
    $O/networklayer/diffserv/MultiFieldClassifier.o \
    $O/networklayer/diffserv/SingleRateThreeColorMeter.o \
    $O/networklayer/diffserv/TokenBucketMeter.o \
    $O/networklayer/diffserv/TwoRateThreeColorMeter.o \
    $O/networklayer/icmpv6/ICMPv6.o \
    $O/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/networklayer/internetcloud/CloudDelayerBase.o \
    $O/networklayer/internetcloud/MatrixCloudDelayer.o \
    $O/networklayer/ipv4/ErrorHandling.o \
    $O/networklayer/ipv4/ICMP.o \
    $O/networklayer/ipv4/IGMPv2.o \
    $O/networklayer/ipv4/IPv4.o \
    $O/networklayer/ipv4/IPv4Datagram.o \
    $O/networklayer/ipv4/IPv4FragBuf.o \
    $O/networklayer/ipv4/IPv4InterfaceData.o \
    $O/networklayer/ipv4/IPv4Route.o \
    $O/networklayer/ipv4/IPv4RouteRule.o \
    $O/networklayer/ipv4/NetworkInfo.o \
    $O/networklayer/ipv4/RoutingTable.o \
    $O/networklayer/ipv4/RoutingTableParser.o \
    $O/networklayer/ipv4/RoutingTableRecorder.o \
    $O/networklayer/ipv6/IPv6.o \
    $O/networklayer/ipv6/IPv6Datagram.o \
    $O/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders.o \
    $O/networklayer/ipv6/IPv6FragBuf.o \
    $O/networklayer/ipv6/IPv6InterfaceData.o \
    $O/networklayer/ipv6/RoutingTable6.o \
    $O/networklayer/ipv6tunneling/IPv6Tunneling.o \
    $O/networklayer/ldp/LDP.o \
    $O/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o \
    $O/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o \
    $O/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/list.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o \
    $O/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o \
    $O/networklayer/manetrouting/base/ManetAddress.o \
    $O/networklayer/manetrouting/base/ManetNetfilterHook.o \
    $O/networklayer/manetrouting/base/ManetRoutingBase.o \
    $O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o \
    $O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/neigh.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o \
    $O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o \
    $O/networklayer/manetrouting/dymo/dymo_msg_struct.o \
    $O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o \
    $O/networklayer/manetrouting/dymo/dymo_um_omnet.o \
    $O/networklayer/manetrouting/dymo/dymoum/blacklist.o \
    $O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_re.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o \
    $O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o \
    $O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o \
    $O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o \
    $O/networklayer/manetrouting/dymo/dymoum/rtable.o \
    $O/networklayer/manetrouting/dymo/dymoum/timer_queue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o \
    $O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o \
    $O/networklayer/manetrouting/olsr/OLSR.o \
    $O/networklayer/manetrouting/olsr/OLSROPT.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o \
    $O/networklayer/manetrouting/olsr/OLSR_ETX_state.o \
    $O/networklayer/manetrouting/olsr/OLSR_rtable.o \
    $O/networklayer/manetrouting/olsr/OLSR_state.o \
    $O/networklayer/mpls/LIBTable.o \
    $O/networklayer/mpls/MPLS.o \
    $O/networklayer/mpls/MPLSPacket.o \
    $O/networklayer/ospfv2/OSPFConfigReader.o \
    $O/networklayer/ospfv2/OSPFRouting.o \
    $O/networklayer/ospfv2/interface/OSPFInterface.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceState.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/networklayer/ospfv2/messagehandler/HelloHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/networklayer/ospfv2/messagehandler/MessageHandler.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighbor.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborState.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/networklayer/ospfv2/router/ASExternalLSA.o \
    $O/networklayer/ospfv2/router/LSA.o \
    $O/networklayer/ospfv2/router/NetworkLSA.o \
    $O/networklayer/ospfv2/router/OSPFArea.o \
    $O/networklayer/ospfv2/router/OSPFRouter.o \
    $O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o \
    $O/networklayer/ospfv2/router/RouterLSA.o \
    $O/networklayer/ospfv2/router/SummaryLSA.o \
    $O/networklayer/routing/aodv/AODVRouteData.o \
    $O/networklayer/routing/aodv/AODVRouting.o \
    $O/networklayer/routing/dymo/DYMORouteData.o \
    $O/networklayer/routing/dymo/xDYMO.o \
    $O/networklayer/routing/gpsr/GPSR.o \
    $O/networklayer/routing/gpsr/PositionTable.o \
    $O/networklayer/routing/rip/RIPRouting.o \
    $O/networklayer/rsvp_te/RSVP.o \
    $O/networklayer/rsvp_te/SimpleClassifier.o \
    $O/networklayer/rsvp_te/Utils.o \
    $O/networklayer/ted/LinkStateRouting.o \
    $O/networklayer/ted/TED.o \
    $O/networklayer/xmipv6/BindingCache.o \
    $O/networklayer/xmipv6/BindingUpdateList.o \
    $O/networklayer/xmipv6/MobilityHeader.o \
    $O/networklayer/xmipv6/xMIPv6.o \
    $O/securityModule/Security.o \
    $O/securityModule/SecurityWPA2.o \
    $O/status/NodeStatus.o \
    $O/transport/contract/SCTPSocket.o \
    $O/transport/contract/TCPSocket.o \
    $O/transport/contract/TCPSocketMap.o \
    $O/transport/contract/UDPSocket.o \
    $O/transport/rtp/reports.o \
    $O/transport/rtp/RTCP.o \
    $O/transport/rtp/RTCPPacket.o \
    $O/transport/rtp/RTP.o \
    $O/transport/rtp/RTPInnerPacket.o \
    $O/transport/rtp/RTPPacket.o \
    $O/transport/rtp/RTPParticipantInfo.o \
    $O/transport/rtp/RTPPayloadReceiver.o \
    $O/transport/rtp/RTPPayloadSender.o \
    $O/transport/rtp/RTPProfile.o \
    $O/transport/rtp/RTPReceiverInfo.o \
    $O/transport/rtp/RTPSenderInfo.o \
    $O/transport/rtp/sdes.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfile.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o \
    $O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o \
    $O/transport/sctp/SCTP.o \
    $O/transport/sctp/SCTPAlg.o \
    $O/transport/sctp/SCTPAssociationAddIP.o \
    $O/transport/sctp/SCTPAssociationBase.o \
    $O/transport/sctp/SCTPAssociationEventProc.o \
    $O/transport/sctp/SCTPAssociationRcvMessage.o \
    $O/transport/sctp/SCTPAssociationSendAll.o \
    $O/transport/sctp/SCTPAssociationStreamReset.o \
    $O/transport/sctp/SCTPAssociationUtil.o \
    $O/transport/sctp/SCTPCCFunctions.o \
    $O/transport/sctp/SCTPGapList.o \
    $O/transport/sctp/SCTPMessage.o \
    $O/transport/sctp/SCTPNatHook.o \
    $O/transport/sctp/SCTPNatTable.o \
    $O/transport/sctp/SCTPQueue.o \
    $O/transport/sctp/SCTPReceiveStream.o \
    $O/transport/sctp/SCTPSendStream.o \
    $O/transport/sctp/SCTPSSFunctions.o \
    $O/transport/tcp/TCP.o \
    $O/transport/tcp/TCPConnectionBase.o \
    $O/transport/tcp/TCPConnectionEventProc.o \
    $O/transport/tcp/TCPConnectionRcvSegment.o \
    $O/transport/tcp/TCPConnectionSackUtil.o \
    $O/transport/tcp/TCPConnectionUtil.o \
    $O/transport/tcp/TCPSACKRexmitQueue.o \
    $O/transport/tcp/flavours/DumbTCP.o \
    $O/transport/tcp/flavours/TCPBaseAlg.o \
    $O/transport/tcp/flavours/TCPNewReno.o \
    $O/transport/tcp/flavours/TCPNoCongestionControl.o \
    $O/transport/tcp/flavours/TCPReno.o \
    $O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o \
    $O/transport/tcp/flavours/TCPTahoe.o \
    $O/transport/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/transport/tcp/flavours/TCPVegas.o \
    $O/transport/tcp/flavours/TCPWestwood.o \
    $O/transport/tcp/queues/TCPByteStreamRcvQueue.o \
    $O/transport/tcp/queues/TCPByteStreamSendQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/transport/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/transport/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/transport/tcp_common/TCPSegment.o \
    $O/transport/tcp_common/TCPSpoof.o \
    $O/transport/udp/UDP.o \
    $O/util/common.o \
    $O/util/Delayer.o \
    $O/util/dijktraKShortest.o \
    $O/util/GlobalWirelessLinkInspector.o \
    $O/util/int128.o \
    $O/util/Macho.o \
    $O/util/MessageChecker.o \
    $O/util/NetAnimTrace.o \
    $O/util/opp_utils.o \
    $O/util/OrdinalBasedDropper.o \
    $O/util/OrdinalBasedDuplicator.o \
    $O/util/PacketDump.o \
    $O/util/PatternMatcher.o \
    $O/util/PcapDump.o \
    $O/util/PcapRecorder.o \
    $O/util/TCPDump.o \
    $O/util/ThruputMeter.o \
    $O/util/ThruputMeteringChannel.o \
    $O/util/uint128.o \
    $O/util/WirelessGetNeig.o \
    $O/util/WirelessNumHops.o \
    $O/util/XMLUtils.o \
    $O/util/headerserializers/TCPIPchecksum.o \
    $O/util/headerserializers/ipv4/ICMPSerializer.o \
    $O/util/headerserializers/ipv4/IGMPSerializer.o \
    $O/util/headerserializers/ipv4/IPv4Serializer.o \
    $O/util/headerserializers/ipv6/IPv6Serializer.o \
    $O/util/headerserializers/sctp/SCTPSerializer.o \
    $O/util/headerserializers/tcp/TCPSerializer.o \
    $O/util/headerserializers/udp/UDPSerializer.o \
    $O/util/messageprinters/InetPacketBytesPrinter.o \
    $O/util/messageprinters/InetPacketPrinter.o \
    $O/util/messageprinters/InetPacketPrinter2.o \
    $O/world/annotations/AnnotationDummy.o \
    $O/world/annotations/AnnotationManager.o \
    $O/world/httptools/HttpController.o \
    $O/world/obstacles/Obstacle.o \
    $O/world/obstacles/ObstacleControl.o \
    $O/world/powercontrol/PowerControlManager.o \
    $O/world/radio/ChannelAccess.o \
    $O/world/radio/ChannelControl.o \
    $O/world/radio/IdealChannelModel.o \
    $O/world/radio/IdealChannelModelAccess.o \
    $O/world/scenario/ScenarioManager.o \
    $O/world/traci/TraCIColor.o \
    $O/world/traci/TraCIScenarioManager.o \
    $O/world/traci/TraCIScenarioManagerLaunchd.o \
    $O/applications/dhcp/DHCPMessage_m.o \
    $O/applications/ethernet/EtherApp_m.o \
    $O/applications/httptools/HttpEventMessages_m.o \
    $O/applications/httptools/HttpMessages_m.o \
    $O/applications/netperfmeter/NetPerfMeter_m.o \
    $O/applications/pingapp/PingPayload_m.o \
    $O/applications/tcpapp/GenericAppMsg_m.o \
    $O/applications/udpapp/PaserTrafficDataMsg_m.o \
    $O/applications/udpapp/UDPEchoAppMsg_m.o \
    $O/applications/udpapp/UDPVideoData_m.o \
    $O/applications/udpapp/VideoPacket_m.o \
    $O/base/ByteArray_m.o \
    $O/base/ByteArrayMessage_m.o \
    $O/dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.o \
    $O/dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.o \
    $O/dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.o \
    $O/dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o \
    $O/dissertation/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o \
    $O/dissertation/networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.o \
    $O/dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.o \
    $O/dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.o \
    $O/linklayer/channels/LinkFailureMessage_m.o \
    $O/linklayer/contract/Ieee802Ctrl_m.o \
    $O/linklayer/contract/PhyControlInfo_m.o \
    $O/linklayer/ethernet/EtherFrame_m.o \
    $O/linklayer/ext/ExtFrame_m.o \
    $O/linklayer/idealwireless/IdealWirelessFrame_m.o \
    $O/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/linklayer/ieee80211/mgmt/ETXPacket_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/linklayer/ieee80211mesh/locator/locatorPkt_m.o \
    $O/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.o \
    $O/linklayer/ieee8021d/common/Ieee8021dBPDU_m.o \
    $O/linklayer/radio/AirFrame_m.o \
    $O/linklayer/radio/IdealAirFrame_m.o \
    $O/linklayer/radio/Radio80211aControlInfo_m.o \
    $O/networklayer/arp/ARPPacket_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPHeader_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPOpen_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdate_m.o \
    $O/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o \
    $O/networklayer/contract/IPProtocolId_m.o \
    $O/networklayer/contract/IPv4ControlInfo_m.o \
    $O/networklayer/contract/IPv6ControlInfo_m.o \
    $O/networklayer/diffserv/DSCP_m.o \
    $O/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/networklayer/ipv4/ICMPMessage_m.o \
    $O/networklayer/ipv4/IGMPMessage_m.o \
    $O/networklayer/ipv4/IPv4Datagram_m.o \
    $O/networklayer/ipv6/IPv6Datagram_m.o \
    $O/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/networklayer/ldp/LDPPacket_m.o \
    $O/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.o \
    $O/networklayer/manetrouting/base/ControlInfoBreakLink_m.o \
    $O/networklayer/manetrouting/base/ControlManetRouting_m.o \
    $O/networklayer/manetrouting/base/LocatorNotificationInfo_m.o \
    $O/networklayer/manetrouting/base/MeshControlInfo_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o \
    $O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o \
    $O/networklayer/manetrouting/olsr/OLSRpkt_m.o \
    $O/networklayer/ospfv2/OSPFPacket_m.o \
    $O/networklayer/routing/aodv/AODVControlPackets_m.o \
    $O/networklayer/routing/dymo/DYMO_m.o \
    $O/networklayer/routing/gpsr/GPSR_m.o \
    $O/networklayer/routing/rip/RIPPacket_m.o \
    $O/networklayer/rsvp_te/IntServ_m.o \
    $O/networklayer/rsvp_te/RSVPHello_m.o \
    $O/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/networklayer/ted/LinkStatePacket_m.o \
    $O/networklayer/ted/TED_m.o \
    $O/networklayer/xmipv6/MobilityHeader_m.o \
    $O/securityModule/message/NewMsgWithMacAddr_m.o \
    $O/securityModule/message/securityPkt_m.o \
    $O/transport/contract/SCTPCommand_m.o \
    $O/transport/contract/TCPCommand_m.o \
    $O/transport/contract/UDPControlInfo_m.o \
    $O/transport/rtp/reports_m.o \
    $O/transport/rtp/RTCPPacket1_m.o \
    $O/transport/rtp/RTCPPacket2_m.o \
    $O/transport/rtp/RTCPPacket3_m.o \
    $O/transport/rtp/RTPInnerPacket_m.o \
    $O/transport/rtp/RTPInterfacePacket_m.o \
    $O/transport/rtp/RTPPacket_m.o \
    $O/transport/rtp/RTPParticipantInfo_m.o \
    $O/transport/rtp/RTPSenderControlMessage_m.o \
    $O/transport/rtp/RTPSenderStatusMessage_m.o \
    $O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/transport/sctp/SCTPMessage_m.o \
    $O/transport/tcp_common/TCPSegment_m.o \
    $O/transport/udp/UDPPacket_m.o \
    $O/world/powercontrol/PowerControlMessages_m.o

# Message files
MSGFILES = \
    applications/dhcp/DHCPMessage.msg \
    applications/ethernet/EtherApp.msg \
    applications/httptools/HttpEventMessages.msg \
    applications/httptools/HttpMessages.msg \
    applications/netperfmeter/NetPerfMeter.msg \
    applications/pingapp/PingPayload.msg \
    applications/tcpapp/GenericAppMsg.msg \
    applications/udpapp/PaserTrafficDataMsg.msg \
    applications/udpapp/UDPEchoAppMsg.msg \
    applications/udpapp/UDPVideoData.msg \
    applications/udpapp/VideoPacket.msg \
    base/ByteArray.msg \
    base/ByteArrayMessage.msg \
    dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt.msg \
    dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.msg \
    dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets.msg \
    dissertation/networklayer/vanetrouting/base/ControlVanetRouting.msg \
    dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink.msg \
    dissertation/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo.msg \
    dissertation/networklayer/vanetrouting/base/Vanet_MeshControlInfo.msg \
    dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets.msg \
    dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets.msg \
    linklayer/channels/LinkFailureMessage.msg \
    linklayer/contract/Ieee802Ctrl.msg \
    linklayer/contract/PhyControlInfo.msg \
    linklayer/ethernet/EtherFrame.msg \
    linklayer/ext/ExtFrame.msg \
    linklayer/idealwireless/IdealWirelessFrame.msg \
    linklayer/ieee80211/mac/Ieee80211Frame.msg \
    linklayer/ieee80211/mgmt/ETXPacket.msg \
    linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    linklayer/ieee80211mesh/locator/locatorPkt.msg \
    linklayer/ieee80211mesh/mgmt/LWMPLSPacket.msg \
    linklayer/ieee8021d/common/Ieee8021dBPDU.msg \
    linklayer/radio/AirFrame.msg \
    linklayer/radio/IdealAirFrame.msg \
    linklayer/radio/Radio80211aControlInfo.msg \
    networklayer/arp/ARPPacket.msg \
    networklayer/bgpv4/BGPMessage/BGPASPathSegment.msg \
    networklayer/bgpv4/BGPMessage/BGPHeader.msg \
    networklayer/bgpv4/BGPMessage/BGPKeepAlive.msg \
    networklayer/bgpv4/BGPMessage/BGPOpen.msg \
    networklayer/bgpv4/BGPMessage/BGPUpdate.msg \
    networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes.msg \
    networklayer/contract/IPProtocolId.msg \
    networklayer/contract/IPv4ControlInfo.msg \
    networklayer/contract/IPv6ControlInfo.msg \
    networklayer/diffserv/DSCP.msg \
    networklayer/icmpv6/ICMPv6Message.msg \
    networklayer/icmpv6/IPv6NDMessage.msg \
    networklayer/ipv4/ICMPMessage.msg \
    networklayer/ipv4/IGMPMessage.msg \
    networklayer/ipv4/IPv4Datagram.msg \
    networklayer/ipv6/IPv6Datagram.msg \
    networklayer/ipv6/IPv6ExtensionHeaders.msg \
    networklayer/ldp/LDPPacket.msg \
    networklayer/manetrouting/aodv-uu/aodv_msg_struct.msg \
    networklayer/manetrouting/base/ControlInfoBreakLink.msg \
    networklayer/manetrouting/base/ControlManetRouting.msg \
    networklayer/manetrouting/base/LocatorNotificationInfo.msg \
    networklayer/manetrouting/base/MeshControlInfo.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Packet.msg \
    networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RERR.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RM.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREP.msg \
    networklayer/manetrouting/dymo_fau/DYMO_RREQ.msg \
    networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg \
    networklayer/manetrouting/dymo_fau/DYMO_UERR.msg \
    networklayer/manetrouting/olsr/OLSRpkt.msg \
    networklayer/ospfv2/OSPFPacket.msg \
    networklayer/routing/aodv/AODVControlPackets.msg \
    networklayer/routing/dymo/DYMO.msg \
    networklayer/routing/gpsr/GPSR.msg \
    networklayer/routing/rip/RIPPacket.msg \
    networklayer/rsvp_te/IntServ.msg \
    networklayer/rsvp_te/RSVPHello.msg \
    networklayer/rsvp_te/RSVPPacket.msg \
    networklayer/rsvp_te/RSVPPathMsg.msg \
    networklayer/rsvp_te/RSVPResvMsg.msg \
    networklayer/rsvp_te/SignallingMsg.msg \
    networklayer/ted/LinkStatePacket.msg \
    networklayer/ted/TED.msg \
    networklayer/xmipv6/MobilityHeader.msg \
    securityModule/message/NewMsgWithMacAddr.msg \
    securityModule/message/securityPkt.msg \
    transport/contract/SCTPCommand.msg \
    transport/contract/TCPCommand.msg \
    transport/contract/UDPControlInfo.msg \
    transport/rtp/reports.msg \
    transport/rtp/RTCPPacket1.msg \
    transport/rtp/RTCPPacket2.msg \
    transport/rtp/RTCPPacket3.msg \
    transport/rtp/RTPInnerPacket.msg \
    transport/rtp/RTPInterfacePacket.msg \
    transport/rtp/RTPPacket.msg \
    transport/rtp/RTPParticipantInfo.msg \
    transport/rtp/RTPSenderControlMessage.msg \
    transport/rtp/RTPSenderStatusMessage.msg \
    transport/rtp/profiles/avprofile/RTPMpegPacket.msg \
    transport/sctp/SCTPMessage.msg \
    transport/tcp_common/TCPSegment.msg \
    transport/udp/UDPPacket.msg \
    world/powercontrol/PowerControlMessages.msg

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
# inserted from file 'makefrag':
# if you want to use external interfaces with inet, you should install
# winpcap (on windows) or libpcap-dev (on linux) and re-run ./configure in
# the omnetpp root directory and comment out the following line:
HAVE_PCAP=no

ifeq ($(HAVE_PCAP),yes)
  # link with PCAP libs too
  LIBS += $(PCAP_LIBS)
else
  # remove the HAVE_PCAP define if we do not need PCAP
  CFLAGS := $(filter-out -DHAVE_PCAP,$(CFLAGS))
endif

#
# TCP implementaion using the Network Simulation Cradle (TCP_NSC feature)
#
ifneq (,$(findstring -DWITH_TCP_NSC,$(COPTS)))
  NSC_VERSION= $(shell ls -d ../3rdparty/nsc* 2>/dev/null | sed 's/^.*-//')
  ifneq ($(NSC_VERSION),)
    CFLAGS += -I../3rdparty/nsc-$(NSC_VERSION)/sim -DHAVE_NSC
    LIBS += -Wl,-rpath,`abspath ../3rdparty/nsc-$(NSC_VERSION)`
  endif
endif

#
# pkg-config:
#
HAVE_PKGCFG := $(shell pkg-config --version 2>/dev/null)
ifeq ($(strip $(HAVE_PKGCFG)),)
  HAVE_PKGCFG := no
else
  HAVE_PKGCFG := yes
  PKGCFG := $(shell which pkg-config)
endif

#
# VoipStream feature:
#
ifneq (,$(findstring -DWITH_VOIPSTREAM,$(COPTS)))
  ifeq ($(HAVE_PKGCFG), yes)
    HAVE_FFMPEG := $(shell $(PKGCFG) --exists libavcodec libavformat libavutil && echo yes || echo no)
    ifeq ($(HAVE_FFMPEG), yes)
      LIBS += $(shell $(PKGCFG) --libs libavcodec libavformat libavutil)
      CFLAGS += $(shell $(PKGCFG) --cflags libavcodec libavformat libavutil) -DHAVE_FFMPEG
    endif
    HAVE_FFMPEG_AVRESAMPLE := $(shell $(PKGCFG) --exists libavresample && echo yes || echo no)
    ifeq ($(HAVE_FFMPEG_AVRESAMPLE), yes)
      LIBS += $(shell $(PKGCFG) --libs libavresample)
      CFLAGS += $(shell $(PKGCFG) --cflags libavresample) -DHAVE_FFMPEG_AVRESAMPLE
    endif
  endif
endif

# disable anoying "... hides overloaded virtual function" warning
CFLAGS += -Wno-overloaded-virtual

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
	$(Q)-rm -f inet inet.exe libinet.so libinet.a libinet.dll libinet.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f applications/*_m.cc applications/*_m.h
	$(Q)-rm -f applications/common/*_m.cc applications/common/*_m.h
	$(Q)-rm -f applications/dhcp/*_m.cc applications/dhcp/*_m.h
	$(Q)-rm -f applications/ethernet/*_m.cc applications/ethernet/*_m.h
	$(Q)-rm -f applications/generic/*_m.cc applications/generic/*_m.h
	$(Q)-rm -f applications/httptools/*_m.cc applications/httptools/*_m.h
	$(Q)-rm -f applications/netperfmeter/*_m.cc applications/netperfmeter/*_m.h
	$(Q)-rm -f applications/pingapp/*_m.cc applications/pingapp/*_m.h
	$(Q)-rm -f applications/rtpapp/*_m.cc applications/rtpapp/*_m.h
	$(Q)-rm -f applications/sctpapp/*_m.cc applications/sctpapp/*_m.h
	$(Q)-rm -f applications/tcpapp/*_m.cc applications/tcpapp/*_m.h
	$(Q)-rm -f applications/traci/*_m.cc applications/traci/*_m.h
	$(Q)-rm -f applications/trafgen/*_m.cc applications/trafgen/*_m.h
	$(Q)-rm -f applications/udpapp/*_m.cc applications/udpapp/*_m.h
	$(Q)-rm -f applications/util/*_m.cc applications/util/*_m.h
	$(Q)-rm -f base/*_m.cc base/*_m.h
	$(Q)-rm -f battery/*_m.cc battery/*_m.h
	$(Q)-rm -f battery/models/*_m.cc battery/models/*_m.h
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
	$(Q)-rm -f generic/*_m.cc generic/*_m.h
	$(Q)-rm -f linklayer/*_m.cc linklayer/*_m.h
	$(Q)-rm -f linklayer/channels/*_m.cc linklayer/channels/*_m.h
	$(Q)-rm -f linklayer/common/*_m.cc linklayer/common/*_m.h
	$(Q)-rm -f linklayer/configurator/*_m.cc linklayer/configurator/*_m.h
	$(Q)-rm -f linklayer/contract/*_m.cc linklayer/contract/*_m.h
	$(Q)-rm -f linklayer/ethernet/*_m.cc linklayer/ethernet/*_m.h
	$(Q)-rm -f linklayer/ethernet/switch/*_m.cc linklayer/ethernet/switch/*_m.h
	$(Q)-rm -f linklayer/ext/*_m.cc linklayer/ext/*_m.h
	$(Q)-rm -f linklayer/idealwireless/*_m.cc linklayer/idealwireless/*_m.h
	$(Q)-rm -f linklayer/ieee80211/*_m.cc linklayer/ieee80211/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mac/*_m.cc linklayer/ieee80211/mac/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mgmt/*_m.cc linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mgmt/wpa2/*_m.cc linklayer/ieee80211/mgmt/wpa2/*_m.h
	$(Q)-rm -f linklayer/ieee80211/radio/*_m.cc linklayer/ieee80211/radio/*_m.h
	$(Q)-rm -f linklayer/ieee80211/radio/errormodel/*_m.cc linklayer/ieee80211/radio/errormodel/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/*_m.cc linklayer/ieee80211mesh/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/ethernet/*_m.cc linklayer/ieee80211mesh/ethernet/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/hwmp/*_m.cc linklayer/ieee80211mesh/hwmp/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/locator/*_m.cc linklayer/ieee80211mesh/locator/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/mgmt/*_m.cc linklayer/ieee80211mesh/mgmt/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/nodes/*_m.cc linklayer/ieee80211mesh/nodes/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/*_m.cc linklayer/ieee8021d/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/common/*_m.cc linklayer/ieee8021d/common/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/relay/*_m.cc linklayer/ieee8021d/relay/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/rstp/*_m.cc linklayer/ieee8021d/rstp/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/stp/*_m.cc linklayer/ieee8021d/stp/*_m.h
	$(Q)-rm -f linklayer/ieee8021d/tester/*_m.cc linklayer/ieee8021d/tester/*_m.h
	$(Q)-rm -f linklayer/loopback/*_m.cc linklayer/loopback/*_m.h
	$(Q)-rm -f linklayer/queue/*_m.cc linklayer/queue/*_m.h
	$(Q)-rm -f linklayer/radio/*_m.cc linklayer/radio/*_m.h
	$(Q)-rm -f linklayer/radio/propagation/*_m.cc linklayer/radio/propagation/*_m.h
	$(Q)-rm -f mobility/*_m.cc mobility/*_m.h
	$(Q)-rm -f mobility/common/*_m.cc mobility/common/*_m.h
	$(Q)-rm -f mobility/contract/*_m.cc mobility/contract/*_m.h
	$(Q)-rm -f mobility/group/*_m.cc mobility/group/*_m.h
	$(Q)-rm -f mobility/single/*_m.cc mobility/single/*_m.h
	$(Q)-rm -f mobility/static/*_m.cc mobility/static/*_m.h
	$(Q)-rm -f networklayer/*_m.cc networklayer/*_m.h
	$(Q)-rm -f networklayer/arp/*_m.cc networklayer/arp/*_m.h
	$(Q)-rm -f networklayer/autorouting/*_m.cc networklayer/autorouting/*_m.h
	$(Q)-rm -f networklayer/autorouting/ipv4/*_m.cc networklayer/autorouting/ipv4/*_m.h
	$(Q)-rm -f networklayer/autorouting/ipv6/*_m.cc networklayer/autorouting/ipv6/*_m.h
	$(Q)-rm -f networklayer/bgpv4/*_m.cc networklayer/bgpv4/*_m.h
	$(Q)-rm -f networklayer/bgpv4/BGPMessage/*_m.cc networklayer/bgpv4/BGPMessage/*_m.h
	$(Q)-rm -f networklayer/common/*_m.cc networklayer/common/*_m.h
	$(Q)-rm -f networklayer/contract/*_m.cc networklayer/contract/*_m.h
	$(Q)-rm -f networklayer/diffserv/*_m.cc networklayer/diffserv/*_m.h
	$(Q)-rm -f networklayer/icmpv6/*_m.cc networklayer/icmpv6/*_m.h
	$(Q)-rm -f networklayer/internetcloud/*_m.cc networklayer/internetcloud/*_m.h
	$(Q)-rm -f networklayer/ipv4/*_m.cc networklayer/ipv4/*_m.h
	$(Q)-rm -f networklayer/ipv6/*_m.cc networklayer/ipv6/*_m.h
	$(Q)-rm -f networklayer/ipv6tunneling/*_m.cc networklayer/ipv6tunneling/*_m.h
	$(Q)-rm -f networklayer/ldp/*_m.cc networklayer/ldp/*_m.h
	$(Q)-rm -f networklayer/manetrouting/*_m.cc networklayer/manetrouting/*_m.h
	$(Q)-rm -f networklayer/manetrouting/aodv-uu/*_m.cc networklayer/manetrouting/aodv-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/aodv-uu/aodv-uu/*_m.cc networklayer/manetrouting/aodv-uu/aodv-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/base/*_m.cc networklayer/manetrouting/base/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsr/*_m.cc networklayer/manetrouting/dsr/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dsr/dsr-uu/*_m.cc networklayer/manetrouting/dsr/dsr-uu/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo/*_m.cc networklayer/manetrouting/dymo/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo/dymoum/*_m.cc networklayer/manetrouting/dymo/dymoum/*_m.h
	$(Q)-rm -f networklayer/manetrouting/dymo_fau/*_m.cc networklayer/manetrouting/dymo_fau/*_m.h
	$(Q)-rm -f networklayer/manetrouting/olsr/*_m.cc networklayer/manetrouting/olsr/*_m.h
	$(Q)-rm -f networklayer/mpls/*_m.cc networklayer/mpls/*_m.h
	$(Q)-rm -f networklayer/ospfv2/*_m.cc networklayer/ospfv2/*_m.h
	$(Q)-rm -f networklayer/ospfv2/interface/*_m.cc networklayer/ospfv2/interface/*_m.h
	$(Q)-rm -f networklayer/ospfv2/messagehandler/*_m.cc networklayer/ospfv2/messagehandler/*_m.h
	$(Q)-rm -f networklayer/ospfv2/neighbor/*_m.cc networklayer/ospfv2/neighbor/*_m.h
	$(Q)-rm -f networklayer/ospfv2/router/*_m.cc networklayer/ospfv2/router/*_m.h
	$(Q)-rm -f networklayer/routing/*_m.cc networklayer/routing/*_m.h
	$(Q)-rm -f networklayer/routing/aodv/*_m.cc networklayer/routing/aodv/*_m.h
	$(Q)-rm -f networklayer/routing/dymo/*_m.cc networklayer/routing/dymo/*_m.h
	$(Q)-rm -f networklayer/routing/gpsr/*_m.cc networklayer/routing/gpsr/*_m.h
	$(Q)-rm -f networklayer/routing/rip/*_m.cc networklayer/routing/rip/*_m.h
	$(Q)-rm -f networklayer/rsvp_te/*_m.cc networklayer/rsvp_te/*_m.h
	$(Q)-rm -f networklayer/ted/*_m.cc networklayer/ted/*_m.h
	$(Q)-rm -f networklayer/xmipv6/*_m.cc networklayer/xmipv6/*_m.h
	$(Q)-rm -f nodes/*_m.cc nodes/*_m.h
	$(Q)-rm -f nodes/aodv/*_m.cc nodes/aodv/*_m.h
	$(Q)-rm -f nodes/bgp/*_m.cc nodes/bgp/*_m.h
	$(Q)-rm -f nodes/dymo/*_m.cc nodes/dymo/*_m.h
	$(Q)-rm -f nodes/ethernet/*_m.cc nodes/ethernet/*_m.h
	$(Q)-rm -f nodes/gpsr/*_m.cc nodes/gpsr/*_m.h
	$(Q)-rm -f nodes/httptools/*_m.cc nodes/httptools/*_m.h
	$(Q)-rm -f nodes/inet/*_m.cc nodes/inet/*_m.h
	$(Q)-rm -f nodes/internetcloud/*_m.cc nodes/internetcloud/*_m.h
	$(Q)-rm -f nodes/ipv6/*_m.cc nodes/ipv6/*_m.h
	$(Q)-rm -f nodes/mpls/*_m.cc nodes/mpls/*_m.h
	$(Q)-rm -f nodes/ospfv2/*_m.cc nodes/ospfv2/*_m.h
	$(Q)-rm -f nodes/rip/*_m.cc nodes/rip/*_m.h
	$(Q)-rm -f nodes/rtp/*_m.cc nodes/rtp/*_m.h
	$(Q)-rm -f nodes/wireless/*_m.cc nodes/wireless/*_m.h
	$(Q)-rm -f nodes/xmipv6/*_m.cc nodes/xmipv6/*_m.h
	$(Q)-rm -f securityModule/*_m.cc securityModule/*_m.h
	$(Q)-rm -f securityModule/message/*_m.cc securityModule/message/*_m.h
	$(Q)-rm -f status/*_m.cc status/*_m.h
	$(Q)-rm -f transport/*_m.cc transport/*_m.h
	$(Q)-rm -f transport/contract/*_m.cc transport/contract/*_m.h
	$(Q)-rm -f transport/rtp/*_m.cc transport/rtp/*_m.h
	$(Q)-rm -f transport/rtp/profiles/*_m.cc transport/rtp/profiles/*_m.h
	$(Q)-rm -f transport/rtp/profiles/avprofile/*_m.cc transport/rtp/profiles/avprofile/*_m.h
	$(Q)-rm -f transport/sctp/*_m.cc transport/sctp/*_m.h
	$(Q)-rm -f transport/tcp/*_m.cc transport/tcp/*_m.h
	$(Q)-rm -f transport/tcp/flavours/*_m.cc transport/tcp/flavours/*_m.h
	$(Q)-rm -f transport/tcp/queues/*_m.cc transport/tcp/queues/*_m.h
	$(Q)-rm -f transport/tcp_common/*_m.cc transport/tcp_common/*_m.h
	$(Q)-rm -f transport/udp/*_m.cc transport/udp/*_m.h
	$(Q)-rm -f util/*_m.cc util/*_m.h
	$(Q)-rm -f util/headerserializers/*_m.cc util/headerserializers/*_m.h
	$(Q)-rm -f util/headerserializers/headers/*_m.cc util/headerserializers/headers/*_m.h
	$(Q)-rm -f util/headerserializers/ipv4/*_m.cc util/headerserializers/ipv4/*_m.h
	$(Q)-rm -f util/headerserializers/ipv4/headers/*_m.cc util/headerserializers/ipv4/headers/*_m.h
	$(Q)-rm -f util/headerserializers/ipv6/*_m.cc util/headerserializers/ipv6/*_m.h
	$(Q)-rm -f util/headerserializers/ipv6/headers/*_m.cc util/headerserializers/ipv6/headers/*_m.h
	$(Q)-rm -f util/headerserializers/sctp/*_m.cc util/headerserializers/sctp/*_m.h
	$(Q)-rm -f util/headerserializers/sctp/headers/*_m.cc util/headerserializers/sctp/headers/*_m.h
	$(Q)-rm -f util/headerserializers/tcp/*_m.cc util/headerserializers/tcp/*_m.h
	$(Q)-rm -f util/headerserializers/tcp/headers/*_m.cc util/headerserializers/tcp/headers/*_m.h
	$(Q)-rm -f util/headerserializers/udp/*_m.cc util/headerserializers/udp/*_m.h
	$(Q)-rm -f util/headerserializers/udp/headers/*_m.cc util/headerserializers/udp/headers/*_m.h
	$(Q)-rm -f util/messageprinters/*_m.cc util/messageprinters/*_m.h
	$(Q)-rm -f world/*_m.cc world/*_m.h
	$(Q)-rm -f world/annotations/*_m.cc world/annotations/*_m.h
	$(Q)-rm -f world/httptools/*_m.cc world/httptools/*_m.h
	$(Q)-rm -f world/obstacles/*_m.cc world/obstacles/*_m.h
	$(Q)-rm -f world/powercontrol/*_m.cc world/powercontrol/*_m.h
	$(Q)-rm -f world/radio/*_m.cc world/radio/*_m.h
	$(Q)-rm -f world/scenario/*_m.cc world/scenario/*_m.h
	$(Q)-rm -f world/traci/*_m.cc world/traci/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/common/*.cc applications/dhcp/*.cc applications/ethernet/*.cc applications/generic/*.cc applications/httptools/*.cc applications/netperfmeter/*.cc applications/pingapp/*.cc applications/rtpapp/*.cc applications/sctpapp/*.cc applications/tcpapp/*.cc applications/traci/*.cc applications/trafgen/*.cc applications/udpapp/*.cc applications/util/*.cc base/*.cc battery/*.cc battery/models/*.cc dissertation/*.cc dissertation/applications/*.cc dissertation/applications/traci/*.cc dissertation/linklayer/*.cc dissertation/linklayer/ieee80211/*.cc dissertation/linklayer/ieee80211/mgmt/*.cc dissertation/linklayer/ieee80211mesh/*.cc dissertation/linklayer/ieee80211mesh/vanetlocator/*.cc dissertation/mobility/*.cc dissertation/mobility/common/*.cc dissertation/mobility/contract/*.cc dissertation/mobility/single/*.cc dissertation/networklayer/*.cc dissertation/networklayer/vanetrouting/*.cc dissertation/networklayer/vanetrouting/aodvvanet/*.cc dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/*.cc dissertation/networklayer/vanetrouting/aodvvanetrouting/*.cc dissertation/networklayer/vanetrouting/base/*.cc dissertation/networklayer/vanetrouting/bitcar/*.cc dissertation/networklayer/vanetrouting/geoadv/*.cc dissertation/networklayer/vanetrouting/rbvtr/*.cc dissertation/nodes/*.cc dissertation/nodes/aodvvanet/*.cc dissertation/nodes/bitcar/*.cc dissertation/nodes/rbvtr/*.cc dissertation/util/*.cc dissertation/world/*.cc dissertation/world/traci/*.cc generic/*.cc linklayer/*.cc linklayer/channels/*.cc linklayer/common/*.cc linklayer/configurator/*.cc linklayer/contract/*.cc linklayer/ethernet/*.cc linklayer/ethernet/switch/*.cc linklayer/ext/*.cc linklayer/idealwireless/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mac/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/ieee80211/mgmt/wpa2/*.cc linklayer/ieee80211/radio/*.cc linklayer/ieee80211/radio/errormodel/*.cc linklayer/ieee80211mesh/*.cc linklayer/ieee80211mesh/ethernet/*.cc linklayer/ieee80211mesh/hwmp/*.cc linklayer/ieee80211mesh/locator/*.cc linklayer/ieee80211mesh/mgmt/*.cc linklayer/ieee80211mesh/nodes/*.cc linklayer/ieee8021d/*.cc linklayer/ieee8021d/common/*.cc linklayer/ieee8021d/relay/*.cc linklayer/ieee8021d/rstp/*.cc linklayer/ieee8021d/stp/*.cc linklayer/ieee8021d/tester/*.cc linklayer/loopback/*.cc linklayer/queue/*.cc linklayer/radio/*.cc linklayer/radio/propagation/*.cc mobility/*.cc mobility/common/*.cc mobility/contract/*.cc mobility/group/*.cc mobility/single/*.cc mobility/static/*.cc networklayer/*.cc networklayer/arp/*.cc networklayer/autorouting/*.cc networklayer/autorouting/ipv4/*.cc networklayer/autorouting/ipv6/*.cc networklayer/bgpv4/*.cc networklayer/bgpv4/BGPMessage/*.cc networklayer/common/*.cc networklayer/contract/*.cc networklayer/diffserv/*.cc networklayer/icmpv6/*.cc networklayer/internetcloud/*.cc networklayer/ipv4/*.cc networklayer/ipv6/*.cc networklayer/ipv6tunneling/*.cc networklayer/ldp/*.cc networklayer/manetrouting/*.cc networklayer/manetrouting/aodv-uu/*.cc networklayer/manetrouting/aodv-uu/aodv-uu/*.cc networklayer/manetrouting/base/*.cc networklayer/manetrouting/dsr/*.cc networklayer/manetrouting/dsr/dsr-uu/*.cc networklayer/manetrouting/dymo/*.cc networklayer/manetrouting/dymo/dymoum/*.cc networklayer/manetrouting/dymo_fau/*.cc networklayer/manetrouting/olsr/*.cc networklayer/mpls/*.cc networklayer/ospfv2/*.cc networklayer/ospfv2/interface/*.cc networklayer/ospfv2/messagehandler/*.cc networklayer/ospfv2/neighbor/*.cc networklayer/ospfv2/router/*.cc networklayer/routing/*.cc networklayer/routing/aodv/*.cc networklayer/routing/dymo/*.cc networklayer/routing/gpsr/*.cc networklayer/routing/rip/*.cc networklayer/rsvp_te/*.cc networklayer/ted/*.cc networklayer/xmipv6/*.cc nodes/*.cc nodes/aodv/*.cc nodes/bgp/*.cc nodes/dymo/*.cc nodes/ethernet/*.cc nodes/gpsr/*.cc nodes/httptools/*.cc nodes/inet/*.cc nodes/internetcloud/*.cc nodes/ipv6/*.cc nodes/mpls/*.cc nodes/ospfv2/*.cc nodes/rip/*.cc nodes/rtp/*.cc nodes/wireless/*.cc nodes/xmipv6/*.cc securityModule/*.cc securityModule/message/*.cc status/*.cc transport/*.cc transport/contract/*.cc transport/rtp/*.cc transport/rtp/profiles/*.cc transport/rtp/profiles/avprofile/*.cc transport/sctp/*.cc transport/tcp/*.cc transport/tcp/flavours/*.cc transport/tcp/queues/*.cc transport/tcp_common/*.cc transport/udp/*.cc util/*.cc util/headerserializers/*.cc util/headerserializers/headers/*.cc util/headerserializers/ipv4/*.cc util/headerserializers/ipv4/headers/*.cc util/headerserializers/ipv6/*.cc util/headerserializers/ipv6/headers/*.cc util/headerserializers/sctp/*.cc util/headerserializers/sctp/headers/*.cc util/headerserializers/tcp/*.cc util/headerserializers/tcp/headers/*.cc util/headerserializers/udp/*.cc util/headerserializers/udp/headers/*.cc util/messageprinters/*.cc world/*.cc world/annotations/*.cc world/httptools/*.cc world/obstacles/*.cc world/powercontrol/*.cc world/radio/*.cc world/scenario/*.cc world/traci/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/common/ApplicationBase.o: applications/common/ApplicationBase.cc \
	applications/common/ApplicationBase.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/NodeOperations.h \
	base/OperationalBase.h
$O/applications/dhcp/DHCPClient.o: applications/dhcp/DHCPClient.cc \
	applications/dhcp/DHCPClient.h \
	applications/dhcp/DHCPLease.h \
	applications/dhcp/DHCPMessage_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	status/NodeStatus.h \
	transport/contract/UDPSocket.h
$O/applications/dhcp/DHCPMessage_m.o: applications/dhcp/DHCPMessage_m.cc \
	applications/dhcp/DHCPMessage_m.h \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h
$O/applications/dhcp/DHCPServer.o: applications/dhcp/DHCPServer.cc \
	applications/dhcp/DHCPLease.h \
	applications/dhcp/DHCPMessage_m.h \
	applications/dhcp/DHCPServer.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/ethernet/EtherAppCli.o: applications/ethernet/EtherAppCli.cc \
	applications/ethernet/EtherAppCli.h \
	applications/ethernet/EtherApp_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	status/NodeStatus.h
$O/applications/ethernet/EtherAppSrv.o: applications/ethernet/EtherAppSrv.cc \
	applications/ethernet/EtherAppSrv.h \
	applications/ethernet/EtherApp_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	status/NodeStatus.h
$O/applications/ethernet/EtherApp_m.o: applications/ethernet/EtherApp_m.cc \
	applications/ethernet/EtherApp_m.h \
	base/Compat.h \
	base/INETDefs.h
$O/applications/ethernet/EtherTrafGen.o: applications/ethernet/EtherTrafGen.cc \
	applications/ethernet/EtherTrafGen.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	status/NodeStatus.h
$O/applications/ethernet/EthernetApplication.o: applications/ethernet/EthernetApplication.cc \
	applications/ethernet/EtherApp_m.h \
	applications/ethernet/EthernetApplication.h \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/applications/generic/IPvXTrafGen.o: applications/generic/IPvXTrafGen.cc \
	applications/generic/IPvXTrafGen.h \
	applications/generic/IPvXTrafSink.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h
$O/applications/generic/IPvXTrafSink.o: applications/generic/IPvXTrafSink.cc \
	applications/generic/IPvXTrafGen.h \
	applications/generic/IPvXTrafSink.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h
$O/applications/httptools/HttpBrowser.o: applications/httptools/HttpBrowser.cc \
	applications/httptools/HttpBrowser.h \
	applications/httptools/HttpBrowserBase.h \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpBrowserBase.o: applications/httptools/HttpBrowserBase.cc \
	applications/httptools/HttpBrowserBase.h \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	status/NodeStatus.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpBrowserDirect.o: applications/httptools/HttpBrowserDirect.cc \
	applications/httptools/HttpBrowserBase.h \
	applications/httptools/HttpBrowserDirect.h \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpServerBase.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpEventMessages_m.o: applications/httptools/HttpEventMessages_m.cc \
	applications/httptools/HttpEventMessages_m.h
$O/applications/httptools/HttpMessages_m.o: applications/httptools/HttpMessages_m.cc \
	applications/httptools/HttpMessages_m.h
$O/applications/httptools/HttpNodeBase.o: applications/httptools/HttpNodeBase.cc \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpRandom.o: applications/httptools/HttpRandom.cc \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/INETDefs.h
$O/applications/httptools/HttpServer.o: applications/httptools/HttpServer.cc \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpServer.h \
	applications/httptools/HttpServerBase.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpServerBase.o: applications/httptools/HttpServerBase.cc \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpServerBase.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	status/NodeStatus.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpServerDirect.o: applications/httptools/HttpServerDirect.cc \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpServerBase.h \
	applications/httptools/HttpServerDirect.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpServerDirectEvilA.o: applications/httptools/HttpServerDirectEvilA.cc \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpServerBase.h \
	applications/httptools/HttpServerDirect.h \
	applications/httptools/HttpServerDirectEvilA.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpServerDirectEvilB.o: applications/httptools/HttpServerDirectEvilB.cc \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpServerBase.h \
	applications/httptools/HttpServerDirect.h \
	applications/httptools/HttpServerDirectEvilB.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpServerEvilA.o: applications/httptools/HttpServerEvilA.cc \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpServer.h \
	applications/httptools/HttpServerBase.h \
	applications/httptools/HttpServerEvilA.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpServerEvilB.o: applications/httptools/HttpServerEvilB.cc \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpNodeBase.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpServer.h \
	applications/httptools/HttpServerBase.h \
	applications/httptools/HttpServerEvilB.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	world/httptools/HttpController.h
$O/applications/httptools/HttpUtils.o: applications/httptools/HttpUtils.cc \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpUtils.h
$O/applications/netperfmeter/NetPerfMeter.o: applications/netperfmeter/NetPerfMeter.cc \
	applications/netperfmeter/NetPerfMeter.h \
	applications/netperfmeter/NetPerfMeter_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/applications/netperfmeter/NetPerfMeter_m.o: applications/netperfmeter/NetPerfMeter_m.cc \
	applications/netperfmeter/NetPerfMeter_m.h \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/sctp/SCTPMessage_m.h
$O/applications/pingapp/PingApp.o: applications/pingapp/PingApp.cc \
	applications/pingapp/PingApp.h \
	applications/pingapp/PingPayload_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h
$O/applications/pingapp/PingPayload_m.o: applications/pingapp/PingPayload_m.cc \
	applications/pingapp/PingPayload_m.h \
	base/Compat.h \
	base/INETDefs.h
$O/applications/pingapp/PingTestApp.o: applications/pingapp/PingTestApp.cc \
	applications/pingapp/PingPayload_m.h \
	applications/pingapp/PingTestApp.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	status/NodeStatus.h
$O/applications/rtpapp/RTPApplication.o: applications/rtpapp/RTPApplication.cc \
	applications/rtpapp/RTPApplication.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/rtp/RTPInterfacePacket_m.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/applications/sctpapp/SCTPClient.o: applications/sctpapp/SCTPClient.cc \
	applications/sctpapp/SCTPClient.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/applications/sctpapp/SCTPNatPeer.o: applications/sctpapp/SCTPNatPeer.cc \
	applications/sctpapp/SCTPNatPeer.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/applications/sctpapp/SCTPNatServer.o: applications/sctpapp/SCTPNatServer.cc \
	applications/sctpapp/SCTPNatServer.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPNatTable.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/applications/sctpapp/SCTPPeer.o: applications/sctpapp/SCTPPeer.cc \
	applications/sctpapp/SCTPPeer.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/applications/sctpapp/SCTPServer.o: applications/sctpapp/SCTPServer.cc \
	applications/sctpapp/SCTPServer.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/applications/tcpapp/GenericAppMsg_m.o: applications/tcpapp/GenericAppMsg_m.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	base/Compat.h \
	base/INETDefs.h
$O/applications/tcpapp/TCPAppBase.o: applications/tcpapp/TCPAppBase.cc \
	applications/tcpapp/TCPAppBase.h \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPBasicClientApp.o: applications/tcpapp/TCPBasicClientApp.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPAppBase.h \
	applications/tcpapp/TCPBasicClientApp.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPEchoApp.o: applications/tcpapp/TCPEchoApp.cc \
	applications/tcpapp/TCPEchoApp.h \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPGenericCliAppBasePromis.o: applications/tcpapp/TCPGenericCliAppBasePromis.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPGenericCliAppBasePromis.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPGenericSrvApp.o: applications/tcpapp/TCPGenericSrvApp.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPGenericSrvApp.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPGenericSrvThread.o: applications/tcpapp/TCPGenericSrvThread.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPGenericSrvThread.h \
	applications/tcpapp/TCPSrvHostApp.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h
$O/applications/tcpapp/TCPSessionApp.o: applications/tcpapp/TCPSessionApp.cc \
	applications/tcpapp/TCPAppBase.h \
	applications/tcpapp/TCPSessionApp.h \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPSinkApp.o: applications/tcpapp/TCPSinkApp.cc \
	applications/tcpapp/TCPSinkApp.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/tcpapp/TCPSrvHostApp.o: applications/tcpapp/TCPSrvHostApp.cc \
	applications/tcpapp/TCPSrvHostApp.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h
$O/applications/tcpapp/TelnetApp.o: applications/tcpapp/TelnetApp.cc \
	applications/tcpapp/GenericAppMsg_m.h \
	applications/tcpapp/TCPAppBase.h \
	applications/tcpapp/TelnetApp.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/applications/traci/TraCIDemo.o: applications/traci/TraCIDemo.cc \
	applications/traci/TraCIDemo.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/TraCIMobility.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/UDPSocket.h \
	util/FWMath.h \
	world/traci/TraCIColor.h \
	world/traci/TraCIScenarioManager.h
$O/applications/traci/TraCITestApp.o: applications/traci/TraCITestApp.cc \
	applications/traci/TraCITestApp.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/TraCIMobility.h \
	status/NodeStatus.h \
	util/FWMath.h \
	world/traci/TraCIColor.h \
	world/traci/TraCIScenarioManager.h
$O/applications/trafgen/TrafGen.o: applications/trafgen/TrafGen.cc \
	applications/trafgen/TrafGen.h
$O/applications/trafgen/TrafGenPar.o: applications/trafgen/TrafGenPar.cc \
	applications/trafgen/TrafGenPar.h
$O/applications/udpapp/PASERUdpTrafficReceiver.o: applications/udpapp/PASERUdpTrafficReceiver.cc \
	applications/udpapp/PASERUdpTrafficReceiver.h \
	applications/udpapp/PaserTrafficDataMsg_m.h \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/RandomWPMobility.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	util/FWMath.h
$O/applications/udpapp/PASERUdpTrafficSender.o: applications/udpapp/PASERUdpTrafficSender.cc \
	applications/udpapp/PASERUdpTrafficSender.h \
	applications/udpapp/PaserTrafficDataMsg_m.h \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/PaserTrafficDataMsg_m.o: applications/udpapp/PaserTrafficDataMsg_m.cc \
	applications/udpapp/PaserTrafficDataMsg_m.h
$O/applications/udpapp/UDPBasicApp.o: applications/udpapp/UDPBasicApp.cc \
	applications/common/ApplicationBase.h \
	applications/udpapp/UDPBasicApp.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotifierConsts.h \
	base/OperationalBase.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicBurst.o: applications/udpapp/UDPBasicBurst.cc \
	applications/common/ApplicationBase.h \
	applications/udpapp/UDPBasicBurst.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/OperationalBase.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicBurstNotification.o: applications/udpapp/UDPBasicBurstNotification.cc \
	applications/common/ApplicationBase.h \
	applications/udpapp/UDPBasicBurst.h \
	applications/udpapp/UDPBasicBurstNotification.h \
	applications/util/AddressModule.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/OperationalBase.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPBasicFlooding.o: applications/udpapp/UDPBasicFlooding.cc \
	applications/common/ApplicationBase.h \
	applications/udpapp/UDPBasicFlooding.h \
	applications/util/AddressModule.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/OperationalBase.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPEchoApp.o: applications/udpapp/UDPEchoApp.cc \
	applications/common/ApplicationBase.h \
	applications/udpapp/UDPEchoApp.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/NodeOperations.h \
	base/OperationalBase.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPEchoAppMsg_m.o: applications/udpapp/UDPEchoAppMsg_m.cc \
	applications/udpapp/UDPEchoAppMsg_m.h \
	base/Compat.h \
	base/INETDefs.h
$O/applications/udpapp/UDPSink.o: applications/udpapp/UDPSink.cc \
	applications/common/ApplicationBase.h \
	applications/udpapp/UDPSink.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/NodeOperations.h \
	base/OperationalBase.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoData_m.o: applications/udpapp/UDPVideoData_m.cc \
	applications/udpapp/UDPVideoData_m.h \
	base/Compat.h \
	base/INETDefs.h
$O/applications/udpapp/UDPVideoStreamCli.o: applications/udpapp/UDPVideoStreamCli.cc \
	applications/common/ApplicationBase.h \
	applications/udpapp/UDPVideoStreamCli.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/NodeOperations.h \
	base/OperationalBase.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoStreamCli2.o: applications/udpapp/UDPVideoStreamCli2.cc \
	applications/common/ApplicationBase.h \
	applications/udpapp/UDPVideoStreamCli2.h \
	applications/udpapp/VideoPacket_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/NodeOperations.h \
	base/OperationalBase.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoStreamSvr.o: applications/udpapp/UDPVideoStreamSvr.cc \
	applications/common/ApplicationBase.h \
	applications/udpapp/UDPVideoStreamSvr.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/NodeOperations.h \
	base/OperationalBase.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/UDPVideoStreamSvr2.o: applications/udpapp/UDPVideoStreamSvr2.cc \
	applications/common/ApplicationBase.h \
	applications/udpapp/UDPVideoData_m.h \
	applications/udpapp/UDPVideoStreamSvr2.h \
	applications/udpapp/VideoPacket_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/OperationalBase.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/applications/udpapp/VideoPacket_m.o: applications/udpapp/VideoPacket_m.cc \
	applications/udpapp/VideoPacket_m.h
$O/applications/util/AddressModule.o: applications/util/AddressModule.cc \
	applications/util/AddressModule.h \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h
$O/base/AbstractQueue.o: base/AbstractQueue.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/INETDefs.h
$O/base/BasicModule.o: base/BasicModule.cc \
	base/BasicModule.h \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h
$O/base/ByteArray.o: base/ByteArray.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h
$O/base/ByteArrayBuffer.o: base/ByteArrayBuffer.cc \
	base/ByteArray.h \
	base/ByteArrayBuffer.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h
$O/base/ByteArrayMessage.o: base/ByteArrayMessage.cc \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h
$O/base/ByteArrayMessage_m.o: base/ByteArrayMessage_m.cc \
	base/ByteArray.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h
$O/base/ByteArray_m.o: base/ByteArray_m.cc \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h
$O/base/Compat.o: base/Compat.cc \
	base/Compat.h
$O/base/Coord.o: base/Coord.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	util/FWMath.h
$O/base/InterfaceOperations.o: base/InterfaceOperations.cc
$O/base/Join.o: base/Join.cc \
	base/Compat.h \
	base/INETDefs.h
$O/base/LifecycleController.o: base/LifecycleController.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/IScriptable.h \
	base/LifecycleController.h \
	base/LifecycleOperation.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h
$O/base/MMapBoard.o: base/MMapBoard.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/MMapBoard.h \
	base/ModuleAccess.h
$O/base/ModuleAccess.o: base/ModuleAccess.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h
$O/base/NedFunctions.o: base/NedFunctions.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/FWMath.h
$O/base/NodeOperations.o: base/NodeOperations.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h
$O/base/NotificationBoard.o: base/NotificationBoard.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h
$O/base/NotifierConsts.o: base/NotifierConsts.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/NotifierConsts.h
$O/base/OperationalBase.o: base/OperationalBase.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/OperationalBase.h \
	status/NodeStatus.h
$O/base/PassiveQueueBase.o: base/PassiveQueueBase.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h
$O/base/ProtocolMap.o: base/ProtocolMap.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ProtocolMap.h
$O/base/QueueBase.o: base/QueueBase.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/INETDefs.h \
	base/QueueBase.h
$O/base/ReassemblyBuffer.o: base/ReassemblyBuffer.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ReassemblyBuffer.h
$O/base/ResultFilters.o: base/ResultFilters.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ResultFilters.h \
	mobility/contract/IMobility.h \
	util/FWMath.h
$O/base/Sink.o: base/Sink.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/Sink.h
$O/base/Topology.o: base/Topology.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/Topology.h \
	util/PatternMatcher.h \
	util/stlutils.h
$O/base/UnimplementedModule.o: base/UnimplementedModule.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/UnimplementedModule.h
$O/base/erfc.o: base/erfc.cc
$O/battery/models/BasicBattery.o: battery/models/BasicBattery.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/models/BasicBattery.h
$O/battery/models/InetSimpleBattery.o: battery/models/InetSimpleBattery.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/models/BasicBattery.h \
	battery/models/Energy.h \
	battery/models/InetSimpleBattery.h \
	linklayer/contract/RadioState.h \
	status/NodeStatus.h \
	world/powercontrol/IPowerControl.h
$O/dissertation/applications/traci/aodvTraCI.o: dissertation/applications/traci/aodvTraCI.cc \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	dissertation/applications/traci/aodvTraCI.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/aodvTraCIMobility.h \
	dissertation/world/traci/aodvTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/UDPSocket.h \
	util/FWMath.h
$O/dissertation/applications/traci/aodvTraCITestApp.o: dissertation/applications/traci/aodvTraCITestApp.cc \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	dissertation/applications/traci/aodvTraCITestApp.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/aodvTraCIMobility.h \
	dissertation/world/traci/aodvTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	status/NodeStatus.h \
	util/FWMath.h
$O/dissertation/applications/traci/bitcarTraCIDemo.o: dissertation/applications/traci/bitcarTraCIDemo.cc \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	dissertation/applications/traci/bitcarTraCIDemo.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/bitcarTraCIMobility.h \
	dissertation/world/traci/bitcarTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/UDPSocket.h \
	util/FWMath.h
$O/dissertation/applications/traci/bitcarTraCITestApp.o: dissertation/applications/traci/bitcarTraCITestApp.cc \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	dissertation/applications/traci/bitcarTraCITestApp.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/bitcarTraCIMobility.h \
	dissertation/world/traci/bitcarTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	status/NodeStatus.h \
	util/FWMath.h
$O/dissertation/applications/traci/rbvtrTraCIDemo.o: dissertation/applications/traci/rbvtrTraCIDemo.cc \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	dissertation/applications/traci/rbvtrTraCIDemo.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/rbvtrTraCIMobility.h \
	dissertation/world/traci/rbvtrTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/UDPSocket.h \
	util/FWMath.h
$O/dissertation/applications/traci/rbvtrTraCITestApp.o: dissertation/applications/traci/rbvtrTraCITestApp.cc \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	dissertation/applications/traci/rbvtrTraCITestApp.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/rbvtrTraCIMobility.h \
	dissertation/world/traci/rbvtrTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	status/NodeStatus.h \
	util/FWMath.h
$O/dissertation/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.o: dissertation/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	dissertation/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/linklayer/ieee80211mesh/vanetlocator/VanetBigUint.o: dissertation/linklayer/ieee80211mesh/vanetlocator/VanetBigUint.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/VanetBigUint.h
$O/dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.o: dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/util/GlobalWirelessLinkInspectorVanet.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDP.h
$O/dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.o: dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDP.h
$O/dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.o: dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/dissertation/mobility/common/LineSegmentsVANETMobilityBase.o: dissertation/mobility/common/LineSegmentsVANETMobilityBase.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/LineSegmentsVANETMobilityBase.h \
	dissertation/mobility/common/MovingVANETMobilityBase.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	util/FWMath.h
$O/dissertation/mobility/common/MovingVANETMobilityBase.o: dissertation/mobility/common/MovingVANETMobilityBase.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/MovingVANETMobilityBase.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	util/FWMath.h
$O/dissertation/mobility/common/VANETMobilityAccess.o: dissertation/mobility/common/VANETMobilityAccess.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/VANETMobilityAccess.h \
	dissertation/mobility/contract/IVANETMobility.h \
	util/FWMath.h
$O/dissertation/mobility/common/VANETMobilityBase.o: dissertation/mobility/common/VANETMobilityBase.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	util/FWMath.h
$O/dissertation/mobility/contract/IVANETMobility.o: dissertation/mobility/contract/IVANETMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	dissertation/mobility/contract/IVANETMobility.h \
	util/FWMath.h
$O/dissertation/mobility/single/LinearVANETMobility.o: dissertation/mobility/single/LinearVANETMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/MovingVANETMobilityBase.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/LinearVANETMobility.h \
	util/FWMath.h
$O/dissertation/mobility/single/aodvTraCIMobility.o: dissertation/mobility/single/aodvTraCIMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/aodvTraCIMobility.h \
	dissertation/world/traci/aodvTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	util/FWMath.h
$O/dissertation/mobility/single/bitcarTraCIMobility.o: dissertation/mobility/single/bitcarTraCIMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/bitcarTraCIMobility.h \
	dissertation/world/traci/bitcarTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	util/FWMath.h
$O/dissertation/mobility/single/rbvtrTraCIMobility.o: dissertation/mobility/single/rbvtrTraCIMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/rbvtrTraCIMobility.h \
	dissertation/world/traci/rbvtrTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.o: dissertation/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.cc \
	dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table_aodvvanet.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.o: dissertation/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
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
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.o: dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.h \
	networklayer/contract/IPv4Address.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.o: dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.h \
	networklayer/contract/IPv4Address.h
$O/dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.o: dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.cc \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.h \
	dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.h \
	dissertation/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.o: dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/dissertation/networklayer/vanetrouting/base/VanetAddress.o: dissertation/networklayer/vanetrouting/base/VanetAddress.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.o: dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	dissertation/networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/dissertation/networklayer/vanetrouting/base/VanetRoutingBase.o: dissertation/networklayer/vanetrouting/base/VanetRoutingBase.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	dissertation/linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/networklayer/vanetrouting/base/VanetNetfilterHook.h \
	dissertation/networklayer/vanetrouting/base/VanetRoutingBase.h \
	dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
	dissertation/networklayer/vanetrouting/base/compatibility_vanet.h \
	dissertation/util/GlobalWirelessLinkInspectorVanet.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	mobility/common/MobilityAccess.h \
	mobility/contract/IMobility.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o: dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
	linklayer/contract/MACAddress.h
$O/dissertation/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o: dissertation/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h
$O/dissertation/networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.o: dissertation/networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.o: dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.h \
	networklayer/contract/IPv4Address.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/bitcar/BITCARRouteData.o: dissertation/networklayer/vanetrouting/bitcar/BITCARRouteData.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/networklayer/vanetrouting/bitcar/BITCARRouteData.h \
	networklayer/contract/IPv4Address.h
$O/dissertation/networklayer/vanetrouting/bitcar/BITCARRouting.o: dissertation/networklayer/vanetrouting/bitcar/BITCARRouting.cc \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.h \
	dissertation/networklayer/vanetrouting/bitcar/BITCARRouteData.h \
	dissertation/networklayer/vanetrouting/bitcar/BITCARRouting.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.o: dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.h \
	networklayer/contract/IPv4Address.h \
	util/FWMath.h
$O/dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouteData.o: dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouteData.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouteData.h \
	networklayer/contract/IPv4Address.h
$O/dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouting.o: dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouting.cc \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.h \
	dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouteData.h \
	dissertation/networklayer/vanetrouting/rbvtr/RBVTRRouting.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/dissertation/util/GlobalWirelessLinkInspectorVanet.o: dissertation/util/GlobalWirelessLinkInspectorVanet.cc \
	base/Compat.h \
	base/INETDefs.h \
	dissertation/networklayer/vanetrouting/base/VanetAddress.h \
	dissertation/util/GlobalWirelessLinkInspectorVanet.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/dissertation/world/traci/aodvTraCIScenarioManager.o: dissertation/world/traci/aodvTraCIScenarioManager.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/aodvTraCIMobility.h \
	dissertation/world/traci/aodvTraCIConstants.h \
	dissertation/world/traci/aodvTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	util/FWMath.h
$O/dissertation/world/traci/aodvTraCIScenarioManagerLaunchd.o: dissertation/world/traci/aodvTraCIScenarioManagerLaunchd.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/world/traci/aodvTraCIConstants.h \
	dissertation/world/traci/aodvTraCIScenarioManager.h \
	dissertation/world/traci/aodvTraCIScenarioManagerLaunchd.h \
	dissertation/world/traci/vanetTraCIColor.h \
	util/FWMath.h
$O/dissertation/world/traci/bitcarTraCIScenarioManager.o: dissertation/world/traci/bitcarTraCIScenarioManager.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/bitcarTraCIMobility.h \
	dissertation/world/traci/bitcarTraCIConstants.h \
	dissertation/world/traci/bitcarTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	util/FWMath.h
$O/dissertation/world/traci/bitcarTraCIScenarioManagerLaunchd.o: dissertation/world/traci/bitcarTraCIScenarioManagerLaunchd.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/world/traci/bitcarTraCIConstants.h \
	dissertation/world/traci/bitcarTraCIScenarioManager.h \
	dissertation/world/traci/bitcarTraCIScenarioManagerLaunchd.h \
	dissertation/world/traci/vanetTraCIColor.h \
	util/FWMath.h
$O/dissertation/world/traci/rbvtrTraCIScenarioManager.o: dissertation/world/traci/rbvtrTraCIScenarioManager.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/mobility/common/VANETMobilityBase.h \
	dissertation/mobility/contract/IVANETMobility.h \
	dissertation/mobility/single/rbvtrTraCIMobility.h \
	dissertation/world/traci/rbvtrTraCIConstants.h \
	dissertation/world/traci/rbvtrTraCIScenarioManager.h \
	dissertation/world/traci/vanetTraCIColor.h \
	util/FWMath.h
$O/dissertation/world/traci/rbvtrTraCIScenarioManagerLaunchd.o: dissertation/world/traci/rbvtrTraCIScenarioManagerLaunchd.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	dissertation/world/traci/rbvtrTraCIConstants.h \
	dissertation/world/traci/rbvtrTraCIScenarioManager.h \
	dissertation/world/traci/rbvtrTraCIScenarioManagerLaunchd.h \
	dissertation/world/traci/vanetTraCIColor.h \
	util/FWMath.h
$O/dissertation/world/traci/vanetTraCIColor.o: dissertation/world/traci/vanetTraCIColor.cc \
	dissertation/world/traci/vanetTraCIColor.h
$O/generic/RPSSocket.o: generic/RPSSocket.cc \
	generic/RPSSocket.h
$O/linklayer/channels/LinkFailureManager.o: linklayer/channels/LinkFailureManager.cc \
	linklayer/channels/LinkFailureManager.h \
	linklayer/channels/LinkFailureMessage_m.h \
	linklayer/channels/ProgramedFailureChannel.h
$O/linklayer/channels/LinkFailureMessage_m.o: linklayer/channels/LinkFailureMessage_m.cc \
	linklayer/channels/LinkFailureManager.h \
	linklayer/channels/LinkFailureMessage_m.h
$O/linklayer/channels/MyThroughputMeteringChannel.o: linklayer/channels/MyThroughputMeteringChannel.cc \
	linklayer/channels/MyThroughputMeteringChannel.h
$O/linklayer/channels/ProgramedFailureChannel.o: linklayer/channels/ProgramedFailureChannel.cc \
	linklayer/channels/LinkFailureManager.h \
	linklayer/channels/ProgramedFailureChannel.h
$O/linklayer/common/MACBase.o: linklayer/common/MACBase.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h
$O/linklayer/common/WirelessMacBase.o: linklayer/common/WirelessMacBase.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h
$O/linklayer/configurator/Ieee8021dInterfaceData.o: linklayer/configurator/Ieee8021dInterfaceData.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/configurator/Ieee8021dInterfaceData.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h
$O/linklayer/configurator/L2NetworkConfigurator.o: linklayer/configurator/L2NetworkConfigurator.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	base/Topology.h \
	linklayer/configurator/Ieee8021dInterfaceData.h \
	linklayer/configurator/L2NetworkConfigurator.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	util/PatternMatcher.h \
	util/stlutils.h
$O/linklayer/configurator/L2NodeConfigurator.o: linklayer/configurator/L2NodeConfigurator.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotifierConsts.h \
	base/Topology.h \
	linklayer/configurator/Ieee8021dInterfaceData.h \
	linklayer/configurator/L2NetworkConfigurator.h \
	linklayer/configurator/L2NodeConfigurator.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	util/PatternMatcher.h
$O/linklayer/contract/Ieee802Ctrl_m.o: linklayer/contract/Ieee802Ctrl_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h
$O/linklayer/contract/MACAddress.o: linklayer/contract/MACAddress.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h
$O/linklayer/contract/PhyControlInfo_m.o: linklayer/contract/PhyControlInfo_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/PhyControlInfo_m.h
$O/linklayer/ethernet/EtherBus.o: linklayer/ethernet/EtherBus.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ethernet/EtherBus.h
$O/linklayer/ethernet/EtherEncap.o: linklayer/ethernet/EtherEncap.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherEncap.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/linklayer/ethernet/EtherFrameClassifier.o: linklayer/ethernet/EtherFrameClassifier.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrameClassifier.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherFrame_m.o: linklayer/ethernet/EtherFrame_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h
$O/linklayer/ethernet/EtherHub.o: linklayer/ethernet/EtherHub.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ethernet/EtherHub.h
$O/linklayer/ethernet/EtherLLC.o: linklayer/ethernet/EtherLLC.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherLLC.h \
	linklayer/ethernet/Ethernet.h \
	status/NodeStatus.h
$O/linklayer/ethernet/EtherMAC.o: linklayer/ethernet/EtherMAC.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMAC.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h
$O/linklayer/ethernet/EtherMACBase.o: linklayer/ethernet/EtherMACBase.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	util/opp_utils.h
$O/linklayer/ethernet/EtherMACFullDuplex.o: linklayer/ethernet/EtherMACFullDuplex.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/EtherMACFullDuplex.h \
	linklayer/ethernet/Ethernet.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	status/NodeStatus.h
$O/linklayer/ethernet/switch/MACAddressTable.o: linklayer/ethernet/switch/MACAddressTable.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/switch/IMACAddressTable.h \
	linklayer/ethernet/switch/MACAddressTable.h
$O/linklayer/ethernet/switch/MACRelayUnit.o: linklayer/ethernet/switch/MACRelayUnit.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/common/MACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ethernet/switch/IMACAddressTable.h \
	linklayer/ethernet/switch/MACRelayUnit.h \
	status/NodeStatus.h
$O/linklayer/ext/ExtFrame_m.o: linklayer/ext/ExtFrame_m.cc \
	linklayer/ext/ExtFrame_m.h
$O/linklayer/ext/ExtInterface.o: linklayer/ext/ExtInterface.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/MACAddress.h \
	linklayer/ext/ExtFrame_m.h \
	linklayer/ext/ExtInterface.h \
	linklayer/ext/cSocketRTScheduler.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/ipv4/IPv4Serializer.h \
	util/opp_utils.h
$O/linklayer/ext/cSocketRTScheduler.o: linklayer/ext/cSocketRTScheduler.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ext/ExtFrame_m.h \
	linklayer/ext/cSocketRTScheduler.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/ethernet.h
$O/linklayer/idealwireless/IdealWirelessFrame_m.o: linklayer/idealwireless/IdealWirelessFrame_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/idealwireless/IdealWirelessFrame_m.h
$O/linklayer/idealwireless/IdealWirelessMac.o: linklayer/idealwireless/IdealWirelessMac.cc \
	base/BasicModule.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/RadioState.h \
	linklayer/idealwireless/IdealWirelessFrame_m.h \
	linklayer/idealwireless/IdealWirelessMac.h \
	linklayer/radio/IdealAirFrame_m.h \
	linklayer/radio/IdealRadio.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	util/FWMath.h \
	util/opp_utils.h \
	world/radio/IdealChannelModel.h \
	world/radio/IdealChannelModelAccess.h
$O/linklayer/ieee80211/mac/FrameBlock.o: linklayer/ieee80211/mac/FrameBlock.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/FrameBlock.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mac/Ieee80211DataRate.o: linklayer/ieee80211/mac/Ieee80211DataRate.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211DataRate.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/radio/ModulationType.h
$O/linklayer/ieee80211/mac/Ieee80211Frame_m.o: linklayer/ieee80211/mac/Ieee80211Frame_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/linklayer/ieee80211/mac/Ieee80211Mac.o: linklayer/ieee80211/mac/Ieee80211Mac.cc \
	base/Compat.h \
	base/Coord.h \
	base/FSMA.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211DataRate.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211Mac.h \
	linklayer/ieee80211/mac/Ieee80211eClassifier.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	util/FWMath.h \
	util/opp_utils.h
$O/linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.o: linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211MacQueueClassifier.h
$O/linklayer/ieee80211/mac/Ieee80211eClassifier.o: linklayer/ieee80211/mac/Ieee80211eClassifier.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211eClassifier.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket_m.h
$O/linklayer/ieee80211/mac/MultiQueue.o: linklayer/ieee80211/mac/MultiQueue.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/MultiQueue.h
$O/linklayer/ieee80211/mac/WifiMode.o: linklayer/ieee80211/mac/WifiMode.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ieee80211/mac/Ieee80211DataRate.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/radio/ModulationType.h
$O/linklayer/ieee80211/mgmt/ETXPacket_m.o: linklayer/ieee80211/mgmt/ETXPacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	util/opp_utils.h
$O/linklayer/ieee80211/mgmt/Ieee80211Etx.o: linklayer/ieee80211/mgmt/Ieee80211Etx.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h \
	util/GlobalWirelessLinkInspector.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/RadioState.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithEtx.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithRouting.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	status/NodeStatus.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o: linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
	base/BasicModule.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	util/FWMath.h \
	util/opp_utils.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h
$O/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o: linklayer/ieee80211/mgmt/Ieee80211Primitives_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h
$O/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtAdhoc.o: linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtAdhoc.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtAdhoc.h \
	linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtBase.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	securityModule/Security.h \
	securityModule/SecurityKeys.h \
	securityModule/SecurityWPA2.h \
	securityModule/message/NewMsgWithMacAddr_m.h \
	securityModule/message/securityPkt_m.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtBase.o: linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtBase.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	linklayer/ieee80211/mgmt/wpa2/SecurityIeee80211MgmtBase.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	securityModule/Security.h \
	securityModule/SecurityKeys.h \
	securityModule/SecurityWPA2.h \
	securityModule/message/NewMsgWithMacAddr_m.h \
	securityModule/message/securityPkt_m.h \
	transport/udp/UDPPacket_m.h
$O/linklayer/ieee80211/radio/BerParseFile.o: linklayer/ieee80211/radio/BerParseFile.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ieee80211/radio/BerParseFile.h
$O/linklayer/ieee80211/radio/Ieee80211RadioModel.o: linklayer/ieee80211/radio/Ieee80211RadioModel.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/BerParseFile.h \
	linklayer/ieee80211/radio/Ieee80211RadioModel.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
	linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/SnrList.h \
	util/FWMath.h
$O/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o: linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h
$O/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o: linklayer/ieee80211/radio/errormodel/nist-error-rate-model.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
	linklayer/radio/ModulationType.h
$O/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o: linklayer/ieee80211/radio/errormodel/yans-error-rate-model.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
	linklayer/radio/ModulationType.h
$O/linklayer/ieee80211mesh/ethernet/EtherEncapMesh.o: linklayer/ieee80211mesh/ethernet/EtherEncapMesh.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherEncap.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/EtherMAC.h \
	linklayer/ethernet/EtherMACBase.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211mesh/ethernet/EtherEncapMesh.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h
$O/linklayer/ieee80211mesh/hwmp/hwmp-rtable.o: linklayer/ieee80211mesh/hwmp/hwmp-rtable.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/hwmp/hwmp-rtable.h
$O/linklayer/ieee80211mesh/hwmp/hwmp.o: linklayer/ieee80211mesh/hwmp/hwmp.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211mesh/hwmp/hwmp-rtable.h \
	linklayer/ieee80211mesh/hwmp/hwmp.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/linklayer/ieee80211mesh/locator/BigUint.o: linklayer/ieee80211mesh/locator/BigUint.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/ieee80211mesh/locator/BigUint.h
$O/linklayer/ieee80211mesh/locator/LocatorModule.o: linklayer/ieee80211mesh/locator/LocatorModule.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	linklayer/ieee80211mesh/locator/LocatorModule.h \
	linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDP.h \
	util/GlobalWirelessLinkInspector.h
$O/linklayer/ieee80211mesh/locator/LocatorModuleClient.o: linklayer/ieee80211mesh/locator/LocatorModuleClient.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	linklayer/ieee80211mesh/locator/LocatorModuleClient.h \
	linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDP.h
$O/linklayer/ieee80211mesh/locator/locatorPkt_m.o: linklayer/ieee80211mesh/locator/locatorPkt_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h
$O/linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.o: linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.cc \
	base/AbstractQueue.h \
	base/BasicModule.h \
	base/Compat.h \
	base/Coord.h \
	base/FSMA.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211Mac.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	linklayer/ieee80211mesh/locator/locatorPkt_m.h \
	linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.h \
	linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h \
	linklayer/ieee80211mesh/mgmt/lwmpls_data.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/INoiseGenerator.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio.h \
	linklayer/radio/SnrList.h \
	linklayer/radio/propagation/IReceptionModel.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/MeshControlInfo_m.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	securityModule/Security.h \
	securityModule/SecurityKeys.h \
	securityModule/message/NewMsgWithMacAddr_m.h \
	securityModule/message/securityPkt_m.h \
	status/NodeStatus.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/WirelessNumHops.h \
	util/dijktraKShortest.h \
	util/opp_utils.h \
	util/uint128.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.o: linklayer/ieee80211mesh/mgmt/Ieee80211MeshLwmpls.cc \
	base/AbstractQueue.h \
	base/BasicModule.h \
	base/Compat.h \
	base/Coord.h \
	base/FSMA.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/common/MACBase.h \
	linklayer/common/WirelessMacBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mac/Ieee80211Mac.h \
	linklayer/ieee80211/mac/WifiMode.h \
	linklayer/ieee80211/mgmt/ETXPacket_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Etx.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	linklayer/ieee80211/radio/WifiPreambleType.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	linklayer/ieee80211mesh/mgmt/Ieee80211Mesh.h \
	linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h \
	linklayer/ieee80211mesh/mgmt/lwmpls_data.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/INoiseGenerator.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio.h \
	linklayer/radio/SnrList.h \
	linklayer/radio/propagation/IReceptionModel.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/MeshControlInfo_m.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	networklayer/mpls/MPLSPacket.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ted/LinkStatePacket_m.h \
	networklayer/ted/TED_m.h \
	securityModule/Security.h \
	securityModule/SecurityKeys.h \
	securityModule/message/NewMsgWithMacAddr_m.h \
	securityModule/message/securityPkt_m.h \
	status/NodeStatus.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/WirelessNumHops.h \
	util/dijktraKShortest.h \
	util/opp_utils.h \
	util/uint128.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.o: linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/mgmt/LWMPLSPacket_m.h
$O/linklayer/ieee80211mesh/mgmt/lwmpls_data.o: linklayer/ieee80211mesh/mgmt/lwmpls_data.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/mgmt/lwmpls_data.h
$O/linklayer/ieee8021d/common/Ieee8021dBPDU_m.o: linklayer/ieee8021d/common/Ieee8021dBPDU_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee8021d/common/Ieee8021dBPDU_m.h
$O/linklayer/ieee8021d/common/STPBase.o: linklayer/ieee8021d/common/STPBase.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/configurator/Ieee8021dInterfaceData.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/switch/IMACAddressTable.h \
	linklayer/ieee8021d/common/STPBase.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h
$O/linklayer/ieee8021d/relay/Ieee8021dRelay.o: linklayer/ieee8021d/relay/Ieee8021dRelay.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/configurator/Ieee8021dInterfaceData.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ethernet/switch/IMACAddressTable.h \
	linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	linklayer/ieee8021d/relay/Ieee8021dRelay.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h
$O/linklayer/ieee8021d/rstp/RSTP.o: linklayer/ieee8021d/rstp/RSTP.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/configurator/Ieee8021dInterfaceData.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ethernet/switch/IMACAddressTable.h \
	linklayer/ethernet/switch/MACAddressTable.h \
	linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	linklayer/ieee8021d/common/STPBase.h \
	linklayer/ieee8021d/rstp/RSTP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h
$O/linklayer/ieee8021d/stp/STP.o: linklayer/ieee8021d/stp/STP.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/configurator/Ieee8021dInterfaceData.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/EtherFrame.h \
	linklayer/ethernet/EtherFrame_m.h \
	linklayer/ethernet/Ethernet.h \
	linklayer/ethernet/switch/IMACAddressTable.h \
	linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	linklayer/ieee8021d/common/STPBase.h \
	linklayer/ieee8021d/stp/STP.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h
$O/linklayer/ieee8021d/tester/STPTester.o: linklayer/ieee8021d/tester/STPTester.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/Topology.h \
	linklayer/configurator/Ieee8021dInterfaceData.h \
	linklayer/contract/MACAddress.h \
	linklayer/ethernet/switch/IMACAddressTable.h \
	linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	linklayer/ieee8021d/common/STPBase.h \
	linklayer/ieee8021d/stp/STP.h \
	linklayer/ieee8021d/tester/STPTester.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h
$O/linklayer/loopback/Loopback.o: linklayer/loopback/Loopback.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/common/MACBase.h \
	linklayer/contract/MACAddress.h \
	linklayer/contract/TxNotifDetails.h \
	linklayer/loopback/Loopback.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	util/opp_utils.h
$O/linklayer/queue/AlgorithmicDropperBase.o: linklayer/queue/AlgorithmicDropperBase.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/queue/AlgorithmicDropperBase.h \
	linklayer/queue/IQueueAccess.h
$O/linklayer/queue/DropTailQueue.o: linklayer/queue/DropTailQueue.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	linklayer/queue/DropTailQueue.h
$O/linklayer/queue/FIFOQueue.o: linklayer/queue/FIFOQueue.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	linklayer/queue/FIFOQueue.h \
	linklayer/queue/IQueueAccess.h
$O/linklayer/queue/PriorityScheduler.o: linklayer/queue/PriorityScheduler.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	linklayer/queue/PriorityScheduler.h \
	linklayer/queue/SchedulerBase.h
$O/linklayer/queue/REDDropper.o: linklayer/queue/REDDropper.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/queue/AlgorithmicDropperBase.h \
	linklayer/queue/IQueueAccess.h \
	linklayer/queue/REDDropper.h \
	util/opp_utils.h
$O/linklayer/queue/SchedulerBase.o: linklayer/queue/SchedulerBase.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	linklayer/queue/SchedulerBase.h
$O/linklayer/queue/ThresholdDropper.o: linklayer/queue/ThresholdDropper.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/queue/AlgorithmicDropperBase.h \
	linklayer/queue/IQueueAccess.h \
	linklayer/queue/ThresholdDropper.h
$O/linklayer/queue/WRRScheduler.o: linklayer/queue/WRRScheduler.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	linklayer/queue/SchedulerBase.h \
	linklayer/queue/WRRScheduler.h \
	util/opp_utils.h
$O/linklayer/queue/WeightedFairQueue.o: linklayer/queue/WeightedFairQueue.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/IPassiveQueue.h \
	base/PassiveQueueBase.h \
	linklayer/ieee80211/mac/IQoSClassifier.h \
	linklayer/queue/IQueueAccess.h \
	linklayer/queue/WeightedFairQueue.h
$O/linklayer/radio/AirFrame_m.o: linklayer/radio/AirFrame_m.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/ModulationType.h \
	util/FWMath.h
$O/linklayer/radio/GenericRadioModel.o: linklayer/radio/GenericRadioModel.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/GenericRadioModel.h \
	linklayer/radio/IModulation.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/Modulation.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/SnrList.h \
	util/FWMath.h
$O/linklayer/radio/IdealAirFrame_m.o: linklayer/radio/IdealAirFrame_m.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/radio/IdealAirFrame_m.h \
	util/FWMath.h
$O/linklayer/radio/IdealRadio.o: linklayer/radio/IdealRadio.cc \
	base/BasicModule.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/RadioState.h \
	linklayer/radio/IdealAirFrame_m.h \
	linklayer/radio/IdealRadio.h \
	status/NodeStatus.h \
	util/FWMath.h \
	world/radio/IdealChannelModel.h \
	world/radio/IdealChannelModelAccess.h
$O/linklayer/radio/Modulation.o: linklayer/radio/Modulation.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/radio/IModulation.h \
	linklayer/radio/Modulation.h
$O/linklayer/radio/Radio.o: linklayer/radio/Radio.cc \
	base/BasicModule.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	battery/models/BasicBattery.h \
	linklayer/contract/PhyControlInfo_m.h \
	linklayer/contract/RadioState.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/INoiseGenerator.h \
	linklayer/radio/IRadioModel.h \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio.h \
	linklayer/radio/Radio80211aControlInfo_m.h \
	linklayer/radio/SnrList.h \
	linklayer/radio/propagation/IReceptionModel.h \
	status/NodeStatus.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/linklayer/radio/Radio80211aControlInfo_m.o: linklayer/radio/Radio80211aControlInfo_m.cc \
	linklayer/radio/ModulationType.h \
	linklayer/radio/Radio80211aControlInfo_m.h
$O/linklayer/radio/propagation/FreeSpaceModel.o: linklayer/radio/propagation/FreeSpaceModel.cc \
	base/BasicModule.h \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	util/FWMath.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/linklayer/radio/propagation/LogNormalShadowingModel.o: linklayer/radio/propagation/LogNormalShadowingModel.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/LogNormalShadowingModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/NakagamiModel.o: linklayer/radio/propagation/NakagamiModel.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/NakagamiModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/RayleighModel.o: linklayer/radio/propagation/RayleighModel.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/RayleighModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/RiceModel.o: linklayer/radio/propagation/RiceModel.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/RiceModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/SUIModel.o: linklayer/radio/propagation/SUIModel.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/SUIModel.h \
	util/FWMath.h
$O/linklayer/radio/propagation/TwoRayGroundModel.o: linklayer/radio/propagation/TwoRayGroundModel.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/radio/propagation/FreeSpaceModel.h \
	linklayer/radio/propagation/IReceptionModel.h \
	linklayer/radio/propagation/TwoRayGroundModel.h \
	util/FWMath.h
$O/mobility/common/LineSegmentsMobilityBase.o: mobility/common/LineSegmentsMobilityBase.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	util/FWMath.h
$O/mobility/common/MobilityAccess.o: mobility/common/MobilityAccess.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityAccess.h \
	mobility/contract/IMobility.h \
	util/FWMath.h
$O/mobility/common/MobilityBase.o: mobility/common/MobilityBase.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/contract/IMobility.h \
	util/FWMath.h
$O/mobility/common/MovingMobilityBase.o: mobility/common/MovingMobilityBase.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	util/FWMath.h
$O/mobility/contract/IMobility.o: mobility/contract/IMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	mobility/contract/IMobility.h \
	util/FWMath.h
$O/mobility/group/MoBANCoordinator.o: mobility/group/MoBANCoordinator.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityAccess.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/group/MoBANCoordinator.h \
	mobility/group/MoBANLocal.h \
	mobility/group/Posture.h \
	mobility/group/PostureTransition.h \
	util/FWMath.h
$O/mobility/group/MoBANLocal.o: mobility/group/MoBANLocal.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/group/MoBANCoordinator.h \
	mobility/group/MoBANLocal.h \
	mobility/group/Posture.h \
	mobility/group/PostureTransition.h \
	util/FWMath.h
$O/mobility/group/Posture.o: mobility/group/Posture.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	mobility/group/Posture.h \
	util/FWMath.h
$O/mobility/group/PostureTransition.o: mobility/group/PostureTransition.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	mobility/group/PostureTransition.h \
	util/FWMath.h
$O/mobility/single/ANSimMobility.o: mobility/single/ANSimMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/ANSimMobility.h \
	util/FWMath.h
$O/mobility/single/BonnMotionFileCache.o: mobility/single/BonnMotionFileCache.cc \
	base/Compat.h \
	base/INETDefs.h \
	mobility/single/BonnMotionFileCache.h
$O/mobility/single/BonnMotionMobility.o: mobility/single/BonnMotionMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/BonnMotionFileCache.h \
	mobility/single/BonnMotionMobility.h \
	util/FWMath.h
$O/mobility/single/ChiangMobility.o: mobility/single/ChiangMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/ChiangMobility.h \
	util/FWMath.h
$O/mobility/single/CircleMobility.o: mobility/single/CircleMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/CircleMobility.h \
	util/FWMath.h
$O/mobility/single/ConstSpeedMobility.o: mobility/single/ConstSpeedMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/ConstSpeedMobility.h \
	util/FWMath.h
$O/mobility/single/GaussMarkovMobility.o: mobility/single/GaussMarkovMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/GaussMarkovMobility.h \
	util/FWMath.h
$O/mobility/single/LaptopModelManager.o: mobility/single/LaptopModelManager.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/LaptopModelManager.h \
	util/FWMath.h
$O/mobility/single/LinearMobility.o: mobility/single/LinearMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/LinearMobility.h \
	util/FWMath.h
$O/mobility/single/LinearNodeDistributionMobility.o: mobility/single/LinearNodeDistributionMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/LinearNodeDistributionMobility.h \
	mobility/static/StationaryMobility.h \
	util/FWMath.h
$O/mobility/single/MassMobility.o: mobility/single/MassMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/MassMobility.h \
	util/FWMath.h
$O/mobility/single/Ns2MotionMobility.o: mobility/single/Ns2MotionMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/Ns2MotionMobility.h \
	util/FWMath.h
$O/mobility/single/RandomWPMobility.o: mobility/single/RandomWPMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/RandomWPMobility.h \
	util/FWMath.h
$O/mobility/single/RectangleMobility.o: mobility/single/RectangleMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/RectangleMobility.h \
	util/FWMath.h
$O/mobility/single/TraCIMobility.o: mobility/single/TraCIMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/TraCIMobility.h \
	util/FWMath.h \
	world/traci/TraCIColor.h \
	world/traci/TraCIScenarioManager.h
$O/mobility/single/TractorMobility.o: mobility/single/TractorMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/TractorMobility.h \
	util/FWMath.h
$O/mobility/single/TurtleMobility.o: mobility/single/TurtleMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/LineSegmentsMobilityBase.h \
	mobility/common/MobilityBase.h \
	mobility/common/MovingMobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/TurtleMobility.h \
	util/FWMath.h
$O/mobility/static/StaticGridMobility.o: mobility/static/StaticGridMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/static/StaticGridMobility.h \
	mobility/static/StationaryMobility.h \
	util/FWMath.h
$O/mobility/static/StationaryMobility.o: mobility/static/StationaryMobility.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/static/StationaryMobility.h \
	util/FWMath.h
$O/networklayer/arp/ARP.o: networklayer/arp/ARP.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARP.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	status/NodeStatus.h
$O/networklayer/arp/ARPPacket_m.o: networklayer/arp/ARPPacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/contract/IPv4Address.h
$O/networklayer/arp/IARPCache.o: networklayer/arp/IARPCache.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/IARPCache.h \
	networklayer/contract/IPv4Address.h
$O/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o: networklayer/autorouting/ipv4/FlatNetworkConfigurator.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/autorouting/ipv4/HostAutoConfigurator.o: networklayer/autorouting/ipv4/HostAutoConfigurator.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/HostAutoConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/autorouting/ipv4/HostAutoConfigurator2.o: networklayer/autorouting/ipv4/HostAutoConfigurator2.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/HostAutoConfigurator2.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h
$O/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o: networklayer/autorouting/ipv4/IPv4NetworkConfigurator.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/Topology.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	util/PatternMatcher.h \
	util/XMLUtils.h \
	util/stlutils.h
$O/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o: networklayer/autorouting/ipv4/IPv4NodeConfigurator.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/Topology.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	networklayer/autorouting/ipv4/IPv4NodeConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	status/NodeStatus.h \
	util/PatternMatcher.h
$O/networklayer/autorouting/ipv4/WirelessRoutingEntry.o: networklayer/autorouting/ipv4/WirelessRoutingEntry.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/WirelessRoutingEntry.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	util/FWMath.h \
	util/WirelessNumHops.h \
	util/dijktraKShortest.h \
	util/uint128.h
$O/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o: networklayer/autorouting/ipv6/FlatNetworkConfigurator6.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv6/FlatNetworkConfigurator6.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h
$O/networklayer/bgpv4/BGPFSM.o: networklayer/bgpv4/BGPFSM.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/bgpv4/BGPCommon.h \
	networklayer/bgpv4/BGPFSM.h \
	networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
	networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
	networklayer/bgpv4/BGPMessage/BGPOpen.h \
	networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	networklayer/bgpv4/BGPRouting.h \
	networklayer/bgpv4/BGPRoutingTableEntry.h \
	networklayer/bgpv4/BGPSession.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFRouting.h \
	networklayer/ospfv2/OSPFRoutingAccess.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	util/Macho.h
$O/networklayer/bgpv4/BGPRouting.o: networklayer/bgpv4/BGPRouting.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/bgpv4/BGPCommon.h \
	networklayer/bgpv4/BGPFSM.h \
	networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
	networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
	networklayer/bgpv4/BGPMessage/BGPOpen.h \
	networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	networklayer/bgpv4/BGPRouting.h \
	networklayer/bgpv4/BGPRoutingTableEntry.h \
	networklayer/bgpv4/BGPSession.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFRouting.h \
	networklayer/ospfv2/OSPFRoutingAccess.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	util/Macho.h
$O/networklayer/bgpv4/BGPSession.o: networklayer/bgpv4/BGPSession.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/bgpv4/BGPCommon.h \
	networklayer/bgpv4/BGPFSM.h \
	networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
	networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
	networklayer/bgpv4/BGPMessage/BGPOpen.h \
	networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	networklayer/bgpv4/BGPRouting.h \
	networklayer/bgpv4/BGPRoutingTableEntry.h \
	networklayer/bgpv4/BGPSession.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFRouting.h \
	networklayer/ospfv2/OSPFRoutingAccess.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	util/Macho.h
$O/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.o: networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.cc \
	networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h
$O/networklayer/bgpv4/BGPMessage/BGPHeader_m.o: networklayer/bgpv4/BGPMessage/BGPHeader_m.cc \
	networklayer/bgpv4/BGPMessage/BGPHeader_m.h
$O/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.o: networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.cc \
	networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h
$O/networklayer/bgpv4/BGPMessage/BGPOpen_m.o: networklayer/bgpv4/BGPMessage/BGPOpen_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	networklayer/contract/IPv4Address.h
$O/networklayer/bgpv4/BGPMessage/BGPUpdate.o: networklayer/bgpv4/BGPMessage/BGPUpdate.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	networklayer/contract/IPv4Address.h
$O/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o: networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	networklayer/contract/IPv4Address.h
$O/networklayer/bgpv4/BGPMessage/BGPUpdate_m.o: networklayer/bgpv4/BGPMessage/BGPUpdate_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	networklayer/contract/IPv4Address.h
$O/networklayer/common/InterfaceEntry.o: networklayer/common/InterfaceEntry.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv6/IPv6InterfaceData.h
$O/networklayer/common/InterfaceMatcher.o: networklayer/common/InterfaceMatcher.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceMatcher.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	util/PatternMatcher.h \
	util/stlutils.h
$O/networklayer/common/InterfaceTable.o: networklayer/common/InterfaceTable.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	status/NodeStatus.h
$O/networklayer/contract/IPProtocolId_m.o: networklayer/contract/IPProtocolId_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h
$O/networklayer/contract/IPSocket.o: networklayer/contract/IPSocket.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h
$O/networklayer/contract/IPv4Address.o: networklayer/contract/IPv4Address.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h
$O/networklayer/contract/IPv4ControlInfo.o: networklayer/contract/IPv4ControlInfo.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/contract/IPv4ControlInfo_m.o: networklayer/contract/IPv4ControlInfo_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo_m.h
$O/networklayer/contract/IPv6Address.o: networklayer/contract/IPv6Address.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv6Address.h
$O/networklayer/contract/IPv6ControlInfo.o: networklayer/contract/IPv6ControlInfo.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/contract/IPv6ControlInfo_m.o: networklayer/contract/IPv6ControlInfo_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo_m.h
$O/networklayer/contract/IPvXAddress.o: networklayer/contract/IPvXAddress.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h
$O/networklayer/contract/IPvXAddressResolver.o: networklayer/contract/IPvXAddressResolver.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/Topology.h \
	linklayer/contract/MACAddress.h \
	networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	util/PatternMatcher.h
$O/networklayer/diffserv/BehaviorAggregateClassifier.o: networklayer/diffserv/BehaviorAggregateClassifier.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/diffserv/BehaviorAggregateClassifier.h \
	networklayer/diffserv/DiffservUtil.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/diffserv/DSCPMarker.o: networklayer/diffserv/DSCPMarker.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/diffserv/DSCPMarker.h \
	networklayer/diffserv/DSCP_m.h \
	networklayer/diffserv/DiffservUtil.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/diffserv/DSCP_m.o: networklayer/diffserv/DSCP_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/diffserv/DSCP_m.h
$O/networklayer/diffserv/DiffservUtil.o: networklayer/diffserv/DiffservUtil.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/diffserv/DSCP_m.h \
	networklayer/diffserv/DiffservUtil.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	util/opp_utils.h
$O/networklayer/diffserv/MultiFieldClassifier.o: networklayer/diffserv/MultiFieldClassifier.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/diffserv/DiffservUtil.h \
	networklayer/diffserv/MultiFieldClassifier.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/diffserv/SingleRateThreeColorMeter.o: networklayer/diffserv/SingleRateThreeColorMeter.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/diffserv/DiffservUtil.h \
	networklayer/diffserv/SingleRateThreeColorMeter.h
$O/networklayer/diffserv/TokenBucketMeter.o: networklayer/diffserv/TokenBucketMeter.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/diffserv/DiffservUtil.h \
	networklayer/diffserv/TokenBucketMeter.h
$O/networklayer/diffserv/TwoRateThreeColorMeter.o: networklayer/diffserv/TwoRateThreeColorMeter.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/diffserv/DiffservUtil.h \
	networklayer/diffserv/TwoRateThreeColorMeter.h
$O/networklayer/icmpv6/ICMPv6.o: networklayer/icmpv6/ICMPv6.cc \
	applications/pingapp/PingPayload_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	status/NodeStatus.h
$O/networklayer/icmpv6/ICMPv6Message_m.o: networklayer/icmpv6/ICMPv6Message_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/icmpv6/ICMPv6Message_m.h
$O/networklayer/icmpv6/IPv6NDMessage_m.o: networklayer/icmpv6/IPv6NDMessage_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h
$O/networklayer/icmpv6/IPv6NeighbourCache.o: networklayer/icmpv6/IPv6NeighbourCache.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/IPv6NeighbourCache.h
$O/networklayer/icmpv6/IPv6NeighbourDiscovery.o: networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h \
	networklayer/icmpv6/IPv6NeighbourCache.h \
	networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6tunneling/IPv6Tunneling.h \
	networklayer/xmipv6/BindingUpdateList.h \
	networklayer/xmipv6/MobilityHeader.h \
	networklayer/xmipv6/MobilityHeader_m.h \
	networklayer/xmipv6/xMIPv6.h \
	networklayer/xmipv6/xMIPv6Access.h \
	status/NodeStatus.h
$O/networklayer/internetcloud/CloudDelayerBase.o: networklayer/internetcloud/CloudDelayerBase.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/internetcloud/CloudDelayerBase.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/internetcloud/MatrixCloudDelayer.o: networklayer/internetcloud/MatrixCloudDelayer.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/internetcloud/CloudDelayerBase.h \
	networklayer/internetcloud/MatrixCloudDelayer.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	util/PatternMatcher.h \
	util/XMLUtils.h
$O/networklayer/ipv4/ErrorHandling.o: networklayer/ipv4/ErrorHandling.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/ErrorHandling.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/ipv4/ICMP.o: networklayer/ipv4/ICMP.cc \
	applications/pingapp/PingPayload_m.h \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/ipv4/ICMPMessage_m.o: networklayer/ipv4/ICMPMessage_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/ipv4/ICMPMessage_m.h
$O/networklayer/ipv4/IGMPMessage_m.o: networklayer/ipv4/IGMPMessage_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IGMPMessage_m.h
$O/networklayer/ipv4/IGMPv2.o: networklayer/ipv4/IGMPv2.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IGMPMessage_m.h \
	networklayer/ipv4/IGMPv2.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/ipv4/IPv4.o: networklayer/ipv4/IPv4.cc \
	base/AbstractQueue.h \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	status/NodeStatus.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/ipv4/IPv4Datagram.o: networklayer/ipv4/IPv4Datagram.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/ipv4/IPv4Datagram_m.o: networklayer/ipv4/IPv4Datagram_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram_m.h
$O/networklayer/ipv4/IPv4FragBuf.o: networklayer/ipv4/IPv4FragBuf.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/ReassemblyBuffer.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h
$O/networklayer/ipv4/IPv4InterfaceData.o: networklayer/ipv4/IPv4InterfaceData.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4InterfaceData.h
$O/networklayer/ipv4/IPv4Route.o: networklayer/ipv4/IPv4Route.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/routing/aodv/AODVRouteData.h
$O/networklayer/ipv4/IPv4RouteRule.o: networklayer/ipv4/IPv4RouteRule.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4RouteRule.h
$O/networklayer/ipv4/NetworkInfo.o: networklayer/ipv4/NetworkInfo.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/IScriptable.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/NetworkInfo.h
$O/networklayer/ipv4/RoutingTable.o: networklayer/ipv4/RoutingTable.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableParser.h \
	status/NodeStatus.h \
	util/opp_utils.h
$O/networklayer/ipv4/RoutingTableParser.o: networklayer/ipv4/RoutingTableParser.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableParser.h
$O/networklayer/ipv4/RoutingTableRecorder.o: networklayer/ipv4/RoutingTableRecorder.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableRecorder.h
$O/networklayer/ipv6/IPv6.o: networklayer/ipv6/IPv6.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h \
	networklayer/icmpv6/IPv6NeighbourCache.h \
	networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
	networklayer/ipv6/IPv6.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/ipv6/IPv6FragBuf.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6tunneling/IPv6Tunneling.h \
	networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	networklayer/xmipv6/MobilityHeader.h \
	networklayer/xmipv6/MobilityHeader_m.h \
	status/NodeStatus.h
$O/networklayer/ipv6/IPv6Datagram.o: networklayer/ipv6/IPv6Datagram.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6Datagram_m.o: networklayer/ipv6/IPv6Datagram_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram_m.h
$O/networklayer/ipv6/IPv6ErrorHandling.o: networklayer/ipv6/IPv6ErrorHandling.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ErrorHandling.h
$O/networklayer/ipv6/IPv6ExtensionHeaders.o: networklayer/ipv6/IPv6ExtensionHeaders.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6ExtensionHeaders_m.o: networklayer/ipv6/IPv6ExtensionHeaders_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/networklayer/ipv6/IPv6FragBuf.o: networklayer/ipv6/IPv6FragBuf.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/ReassemblyBuffer.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/ipv6/IPv6FragBuf.h
$O/networklayer/ipv6/IPv6InterfaceData.o: networklayer/ipv6/IPv6InterfaceData.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h
$O/networklayer/ipv6/RoutingTable6.o: networklayer/ipv6/RoutingTable6.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6tunneling/IPv6Tunneling.h \
	networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	util/opp_utils.h
$O/networklayer/ipv6tunneling/IPv6Tunneling.o: networklayer/ipv6tunneling/IPv6Tunneling.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6tunneling/IPv6Tunneling.h \
	networklayer/xmipv6/BindingUpdateList.h \
	networklayer/xmipv6/MobilityHeader.h \
	networklayer/xmipv6/MobilityHeader_m.h \
	networklayer/xmipv6/xMIPv6.h \
	networklayer/xmipv6/xMIPv6Access.h \
	status/NodeStatus.h
$O/networklayer/ldp/LDP.o: networklayer/ldp/LDP.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ldp/LDP.h \
	networklayer/ldp/LDPPacket_m.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ted/TED.h \
	networklayer/ted/TEDAccess.h \
	networklayer/ted/TED_m.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/ldp/LDPPacket_m.o: networklayer/ldp/LDPPacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ldp/LDPPacket_m.h
$O/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o: networklayer/manetrouting/aodv-uu/aodv_msg_struct.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.o: networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility.h
$O/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o: networklayer/manetrouting/aodv-uu/aodv_uu_omnet.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o: networklayer/manetrouting/aodv-uu/packet_queue_omnet.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o: networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o: networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/list.o: networklayer/manetrouting/aodv-uu/aodv-uu/list.cc \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o: networklayer/manetrouting/aodv-uu/aodv-uu/locality.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o: networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o: networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o: networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	util/FWMath.h
$O/networklayer/manetrouting/base/ControlInfoBreakLink_m.o: networklayer/manetrouting/base/ControlInfoBreakLink_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/manetrouting/base/ControlInfoBreakLink_m.h
$O/networklayer/manetrouting/base/ControlManetRouting_m.o: networklayer/manetrouting/base/ControlManetRouting_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/base/LocatorNotificationInfo_m.o: networklayer/manetrouting/base/LocatorNotificationInfo_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/manetrouting/base/LocatorNotificationInfo_m.h
$O/networklayer/manetrouting/base/ManetAddress.o: networklayer/manetrouting/base/ManetAddress.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h
$O/networklayer/manetrouting/base/ManetNetfilterHook.o: networklayer/manetrouting/base/ManetNetfilterHook.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/base/ManetRoutingBase.o: networklayer/manetrouting/base/ManetRoutingBase.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	mobility/common/MobilityAccess.h \
	mobility/contract/IMobility.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/GlobalWirelessLinkInspector.h
$O/networklayer/manetrouting/base/MeshControlInfo_m.o: networklayer/manetrouting/base/MeshControlInfo_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/manetrouting/base/MeshControlInfo_m.h
$O/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/neigh.o: networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/compatibility_dsr.h \
	networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/manetrouting/dymo/dymo_msg_struct.o: networklayer/manetrouting/dymo/dymo_msg_struct.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h
$O/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymo_um_omnet.o: networklayer/manetrouting/dymo/dymo_um_omnet.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/blacklist.o: networklayer/manetrouting/dymo/dymoum/blacklist.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_re.o: networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/MeshControlInfo_m.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/rtable.o: networklayer/manetrouting/dymo/dymoum/rtable.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo/dymoum/timer_queue.o: networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo/dymo_msg_struct.h \
	networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	networklayer/manetrouting/dymo/dymo_um_omnet.h \
	networklayer/manetrouting/dymo/dymoum/blacklist.h \
	networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	networklayer/manetrouting/dymo/dymoum/dlist.h \
	networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	networklayer/manetrouting/dymo/dymoum/rtable.h \
	networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo_fau/DYMO.o: networklayer/manetrouting/dymo_fau/DYMO.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ControlManetRouting_m.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo_fau/DYMO.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h
$O/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	networklayer/contract/IPv4Address.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o: networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o: networklayer/manetrouting/dymo_fau/DYMO_Packet_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o: networklayer/manetrouting/dymo_fau/DYMO_RERR_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o: networklayer/manetrouting/dymo_fau/DYMO_RM_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o: networklayer/manetrouting/dymo_fau/DYMO_RREP_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o: networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo_fau/DYMO.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/dymo_fau/DYMO.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	util/FWMath.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o: networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o: networklayer/manetrouting/dymo_fau/DYMO_UERR_m.cc \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h
$O/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/networklayer/manetrouting/olsr/OLSR.o: networklayer/manetrouting/olsr/OLSR.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSROPT.o: networklayer/manetrouting/olsr/OLSROPT.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSROPT.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSR_ETX.o: networklayer/manetrouting/olsr/OLSR_ETX.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX.h \
	networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX.h \
	networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSR_ETX_state.o: networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSR_rtable.o: networklayer/manetrouting/olsr/OLSR_rtable.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSR_state.o: networklayer/manetrouting/olsr/OLSR_state.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211mesh/locator/ILocator.h \
	networklayer/arp/ARP.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/base/ManetNetfilterHook.h \
	networklayer/manetrouting/base/ManetRoutingBase.h \
	networklayer/manetrouting/base/compatibility.h \
	networklayer/manetrouting/olsr/OLSR.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSR_repositories.h \
	networklayer/manetrouting/olsr/OLSR_rtable.h \
	networklayer/manetrouting/olsr/OLSR_state.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h \
	util/FWMath.h \
	util/opp_utils.h
$O/networklayer/manetrouting/olsr/OLSRpkt_m.o: networklayer/manetrouting/olsr/OLSRpkt_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h \
	networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/networklayer/mpls/LIBTable.o: networklayer/mpls/LIBTable.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/LIBTable.h \
	util/XMLUtils.h
$O/networklayer/mpls/MPLS.o: networklayer/mpls/MPLS.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ldp/LDP.h \
	networklayer/ldp/LDPPacket_m.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/mpls/MPLS.h \
	networklayer/mpls/MPLSPacket.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/Utils.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h \
	transport/contract/UDPSocket.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/networklayer/mpls/MPLSPacket.o: networklayer/mpls/MPLSPacket.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/mpls/MPLSPacket.h
$O/networklayer/ospfv2/OSPFConfigReader.o: networklayer/ospfv2/OSPFConfigReader.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFConfigReader.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	util/PatternMatcher.h \
	util/XMLUtils.h
$O/networklayer/ospfv2/OSPFPacket_m.o: networklayer/ospfv2/OSPFPacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ospfv2/OSPFPacket_m.h
$O/networklayer/ospfv2/OSPFRouting.o: networklayer/ospfv2/OSPFRouting.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFConfigReader.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFRouting.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h \
	status/NodeStatus.h
$O/networklayer/ospfv2/interface/OSPFInterface.o: networklayer/ospfv2/interface/OSPFInterface.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceState.o: networklayer/ospfv2/interface/OSPFInterfaceState.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/interface/OSPFInterfaceState.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/HelloHandler.o: networklayer/ospfv2/messagehandler/HelloHandler.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/messagehandler/MessageHandler.o: networklayer/ospfv2/messagehandler/MessageHandler.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighbor.o: networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborState.o: networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/ASExternalLSA.o: networklayer/ospfv2/router/ASExternalLSA.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/LSA.o: networklayer/ospfv2/router/LSA.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/NetworkLSA.o: networklayer/ospfv2/router/NetworkLSA.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFArea.o: networklayer/ospfv2/router/OSPFArea.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFRouter.o: networklayer/ospfv2/router/OSPFRouter.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/OSPFTimer.h \
	networklayer/ospfv2/interface/OSPFInterface.h \
	networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	networklayer/ospfv2/messagehandler/HelloHandler.h \
	networklayer/ospfv2/messagehandler/IMessageHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	networklayer/ospfv2/messagehandler/MessageHandler.h \
	networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFArea.h \
	networklayer/ospfv2/router/OSPFRouter.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/OSPFRoutingTableEntry.o: networklayer/ospfv2/router/OSPFRoutingTableEntry.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/RouterLSA.o: networklayer/ospfv2/router/RouterLSA.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/ospfv2/router/SummaryLSA.o: networklayer/ospfv2/router/SummaryLSA.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ospfv2/OSPFPacket_m.h \
	networklayer/ospfv2/router/LSA.h \
	networklayer/ospfv2/router/OSPFcommon.h
$O/networklayer/routing/aodv/AODVControlPackets_m.o: networklayer/routing/aodv/AODVControlPackets_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/routing/aodv/AODVControlPackets_m.h
$O/networklayer/routing/aodv/AODVRouteData.o: networklayer/routing/aodv/AODVRouteData.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/routing/aodv/AODVRouteData.h
$O/networklayer/routing/aodv/AODVRouting.o: networklayer/routing/aodv/AODVRouting.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/routing/aodv/AODVControlPackets_m.h \
	networklayer/routing/aodv/AODVRouteData.h \
	networklayer/routing/aodv/AODVRouting.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/routing/dymo/DYMORouteData.o: networklayer/routing/dymo/DYMORouteData.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/routing/dymo/DYMORouteData.h \
	networklayer/routing/dymo/DYMOdefs.h
$O/networklayer/routing/dymo/DYMO_m.o: networklayer/routing/dymo/DYMO_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/routing/dymo/DYMO_m.h \
	networklayer/routing/dymo/DYMOdefs.h
$O/networklayer/routing/dymo/xDYMO.o: networklayer/routing/dymo/xDYMO.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/routing/dymo/DYMORouteData.h \
	networklayer/routing/dymo/DYMO_m.h \
	networklayer/routing/dymo/DYMOdefs.h \
	networklayer/routing/dymo/xDYMO.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/networklayer/routing/gpsr/GPSR.o: networklayer/routing/gpsr/GPSR.cc \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	mobility/contract/IMobility.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/routing/gpsr/GPSR.h \
	networklayer/routing/gpsr/GPSRDefs.h \
	networklayer/routing/gpsr/GPSR_m.h \
	networklayer/routing/gpsr/PositionTable.h \
	status/NodeStatus.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/FWMath.h
$O/networklayer/routing/gpsr/GPSR_m.o: networklayer/routing/gpsr/GPSR_m.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/routing/gpsr/GPSRDefs.h \
	networklayer/routing/gpsr/GPSR_m.h \
	util/FWMath.h
$O/networklayer/routing/gpsr/PositionTable.o: networklayer/routing/gpsr/PositionTable.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/routing/gpsr/PositionTable.h \
	util/FWMath.h
$O/networklayer/routing/rip/RIPPacket_m.o: networklayer/routing/rip/RIPPacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/routing/rip/RIPPacket_m.h
$O/networklayer/routing/rip/RIPRouting.o: networklayer/routing/rip/RIPRouting.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceMatcher.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/routing/rip/RIPPacket_m.h \
	networklayer/routing/rip/RIPRouting.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/udp/UDP.h
$O/networklayer/rsvp_te/IntServ_m.o: networklayer/rsvp_te/IntServ_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ_m.h
$O/networklayer/rsvp_te/RSVP.o: networklayer/rsvp_te/RSVP.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IScriptable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/rsvp_te/IRSVPClassifier.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVP.h \
	networklayer/rsvp_te/RSVPHelloMsg.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPathMsg.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h \
	networklayer/rsvp_te/RSVPResvMsg.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h \
	networklayer/rsvp_te/SignallingMsg_m.h \
	networklayer/rsvp_te/Utils.h \
	networklayer/ted/TED.h \
	networklayer/ted/TEDAccess.h \
	networklayer/ted/TED_m.h \
	status/NodeStatus.h \
	util/XMLUtils.h \
	util/common.h
$O/networklayer/rsvp_te/RSVPHello_m.o: networklayer/rsvp_te/RSVPHello_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h
$O/networklayer/rsvp_te/RSVPPacket_m.o: networklayer/rsvp_te/RSVPPacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket_m.h
$O/networklayer/rsvp_te/RSVPPathMsg_m.o: networklayer/rsvp_te/RSVPPathMsg_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h
$O/networklayer/rsvp_te/RSVPResvMsg_m.o: networklayer/rsvp_te/RSVPResvMsg_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h
$O/networklayer/rsvp_te/SignallingMsg_m.o: networklayer/rsvp_te/SignallingMsg_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/SignallingMsg_m.h
$O/networklayer/rsvp_te/SimpleClassifier.o: networklayer/rsvp_te/SimpleClassifier.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IScriptable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/mpls/ConstType.h \
	networklayer/mpls/IClassifier.h \
	networklayer/mpls/LIBTable.h \
	networklayer/mpls/LIBTableAccess.h \
	networklayer/rsvp_te/IRSVPClassifier.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/RSVP.h \
	networklayer/rsvp_te/RSVPAccess.h \
	networklayer/rsvp_te/RSVPHelloMsg.h \
	networklayer/rsvp_te/RSVPHello_m.h \
	networklayer/rsvp_te/RSVPPacket.h \
	networklayer/rsvp_te/RSVPPacket_m.h \
	networklayer/rsvp_te/RSVPPathMsg.h \
	networklayer/rsvp_te/RSVPPathMsg_m.h \
	networklayer/rsvp_te/RSVPResvMsg.h \
	networklayer/rsvp_te/RSVPResvMsg_m.h \
	networklayer/rsvp_te/SignallingMsg_m.h \
	networklayer/rsvp_te/SimpleClassifier.h \
	util/XMLUtils.h
$O/networklayer/rsvp_te/Utils.o: networklayer/rsvp_te/Utils.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/rsvp_te/Utils.h
$O/networklayer/ted/LinkStatePacket_m.o: networklayer/ted/LinkStatePacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ted/LinkStatePacket_m.h \
	networklayer/ted/TED_m.h
$O/networklayer/ted/LinkStateRouting.o: networklayer/ted/LinkStateRouting.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ted/LinkStatePacket_m.h \
	networklayer/ted/LinkStateRouting.h \
	networklayer/ted/TED.h \
	networklayer/ted/TEDAccess.h \
	networklayer/ted/TED_m.h
$O/networklayer/ted/TED.o: networklayer/ted/TED.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/rsvp_te/IntServ.h \
	networklayer/rsvp_te/IntServ_m.h \
	networklayer/ted/TED.h \
	networklayer/ted/TED_m.h \
	status/NodeStatus.h
$O/networklayer/ted/TED_m.o: networklayer/ted/TED_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ted/TED_m.h
$O/networklayer/xmipv6/BindingCache.o: networklayer/xmipv6/BindingCache.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv6Address.h \
	networklayer/xmipv6/BindingCache.h
$O/networklayer/xmipv6/BindingUpdateList.o: networklayer/xmipv6/BindingUpdateList.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/xmipv6/BindingUpdateList.h
$O/networklayer/xmipv6/MobilityHeader.o: networklayer/xmipv6/MobilityHeader.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/xmipv6/MobilityHeader.h \
	networklayer/xmipv6/MobilityHeader_m.h
$O/networklayer/xmipv6/MobilityHeader_m.o: networklayer/xmipv6/MobilityHeader_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/xmipv6/MobilityHeader_m.h
$O/networklayer/xmipv6/xMIPv6.o: networklayer/xmipv6/xMIPv6.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/icmpv6/IPv6NDMessage_m.h \
	networklayer/icmpv6/IPv6NeighbourCache.h \
	networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6ExtensionHeaders.h \
	networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	networklayer/ipv6tunneling/IPv6Tunneling.h \
	networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	networklayer/xmipv6/BindingCache.h \
	networklayer/xmipv6/BindingCacheAccess.h \
	networklayer/xmipv6/BindingUpdateList.h \
	networklayer/xmipv6/BindingUpdateListAccess.h \
	networklayer/xmipv6/MobilityHeader.h \
	networklayer/xmipv6/MobilityHeader_m.h \
	networklayer/xmipv6/xMIPv6.h
$O/securityModule/Security.o: securityModule/Security.cc \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	securityModule/Security.h \
	securityModule/SecurityKeys.h \
	securityModule/message/NewMsgWithMacAddr_m.h \
	securityModule/message/securityPkt_m.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/queues/TCPByteStreamRcvQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDP.h \
	transport/udp/UDPPacket_m.h
$O/securityModule/SecurityWPA2.o: securityModule/SecurityWPA2.cc \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/IPassiveQueue.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/PassiveQueueBase.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	securityModule/Security.h \
	securityModule/SecurityKeys.h \
	securityModule/SecurityWPA2.h \
	securityModule/message/NewMsgWithMacAddr_m.h \
	securityModule/message/securityPkt_m.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/queues/TCPByteStreamRcvQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDP.h \
	transport/udp/UDPPacket_m.h
$O/securityModule/message/NewMsgWithMacAddr_m.o: securityModule/message/NewMsgWithMacAddr_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	securityModule/message/NewMsgWithMacAddr_m.h
$O/securityModule/message/securityPkt_m.o: securityModule/message/securityPkt_m.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/Ieee802Ctrl_m.h \
	linklayer/contract/MACAddress.h \
	linklayer/ieee80211/mac/Ieee80211Consts.h \
	linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	securityModule/Security.h \
	securityModule/SecurityKeys.h \
	securityModule/message/NewMsgWithMacAddr_m.h \
	securityModule/message/securityPkt_m.h \
	transport/udp/UDPPacket_m.h
$O/status/NodeStatus.o: status/NodeStatus.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	status/NodeStatus.h
$O/transport/contract/SCTPCommand_m.o: transport/contract/SCTPCommand_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h
$O/transport/contract/SCTPSocket.o: transport/contract/SCTPSocket.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/SCTPSocket.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h
$O/transport/contract/TCPCommand_m.o: transport/contract/TCPCommand_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h
$O/transport/contract/TCPSocket.o: transport/contract/TCPSocket.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h
$O/transport/contract/TCPSocketMap.o: transport/contract/TCPSocketMap.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/contract/TCPSocket.h \
	transport/contract/TCPSocketMap.h
$O/transport/contract/UDPControlInfo_m.o: transport/contract/UDPControlInfo_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPControlInfo_m.h
$O/transport/contract/UDPSocket.o: transport/contract/UDPSocket.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h
$O/transport/rtp/RTCP.o: transport/rtp/RTCP.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/rtp/RTCP.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTCPPacket1.h \
	transport/rtp/RTCPPacket1_m.h \
	transport/rtp/RTCPPacket2.h \
	transport/rtp/RTCPPacket2_m.h \
	transport/rtp/RTCPPacket3.h \
	transport/rtp/RTCPPacket3_m.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPInnerPacket_m.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/RTPParticipantInfo_m.h \
	transport/rtp/RTPReceiverInfo.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderInfo.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/reports.h \
	transport/rtp/reports_m.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTCPPacket.o: transport/rtp/RTCPPacket.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/rtp/RTCPPacket.h \
	transport/rtp/RTCPPacket1.h \
	transport/rtp/RTCPPacket1_m.h \
	transport/rtp/RTCPPacket2.h \
	transport/rtp/RTCPPacket2_m.h \
	transport/rtp/RTCPPacket3.h \
	transport/rtp/RTCPPacket3_m.h \
	transport/rtp/reports.h \
	transport/rtp/reports_m.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTCPPacket1_m.o: transport/rtp/RTCPPacket1_m.cc \
	transport/rtp/RTCPPacket1_m.h
$O/transport/rtp/RTCPPacket2_m.o: transport/rtp/RTCPPacket2_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/rtp/RTCPPacket1.h \
	transport/rtp/RTCPPacket1_m.h \
	transport/rtp/RTCPPacket2_m.h \
	transport/rtp/reports.h \
	transport/rtp/reports_m.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTCPPacket3_m.o: transport/rtp/RTCPPacket3_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/rtp/RTCPPacket1.h \
	transport/rtp/RTCPPacket1_m.h \
	transport/rtp/RTCPPacket2.h \
	transport/rtp/RTCPPacket2_m.h \
	transport/rtp/RTCPPacket3_m.h \
	transport/rtp/reports.h \
	transport/rtp/reports_m.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTP.o: transport/rtp/RTP.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/rtp/RTP.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPInnerPacket_m.h \
	transport/rtp/RTPInterfacePacket_m.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPProfile.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPInnerPacket.o: transport/rtp/RTPInnerPacket.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPInnerPacket_m.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPInnerPacket_m.o: transport/rtp/RTPInnerPacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPInnerPacket_m.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPInterfacePacket_m.o: transport/rtp/RTPInterfacePacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPInterfacePacket_m.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPPacket.o: transport/rtp/RTPPacket.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h
$O/transport/rtp/RTPPacket_m.o: transport/rtp/RTPPacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/rtp/RTPPacket_m.h
$O/transport/rtp/RTPParticipantInfo.o: transport/rtp/RTPParticipantInfo.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/RTPParticipantInfo_m.h \
	transport/rtp/reports.h \
	transport/rtp/reports_m.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTPParticipantInfo_m.o: transport/rtp/RTPParticipantInfo_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPParticipantInfo_m.h
$O/transport/rtp/RTPPayloadReceiver.o: transport/rtp/RTPPayloadReceiver.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPInnerPacket_m.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPPayloadReceiver.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPPayloadSender.o: transport/rtp/RTPPayloadSender.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPInnerPacket_m.h \
	transport/rtp/RTPInterfacePacket_m.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPPayloadSender.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPProfile.o: transport/rtp/RTPProfile.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPInnerPacket_m.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPPayloadReceiver.h \
	transport/rtp/RTPPayloadSender.h \
	transport/rtp/RTPProfile.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/RTPReceiverInfo.o: transport/rtp/RTPReceiverInfo.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/RTPParticipantInfo_m.h \
	transport/rtp/RTPReceiverInfo.h \
	transport/rtp/reports.h \
	transport/rtp/reports_m.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTPSenderControlMessage_m.o: transport/rtp/RTPSenderControlMessage_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderControlMessage_m.h
$O/transport/rtp/RTPSenderInfo.o: transport/rtp/RTPSenderInfo.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPParticipantInfo.h \
	transport/rtp/RTPParticipantInfo_m.h \
	transport/rtp/RTPSenderInfo.h \
	transport/rtp/reports.h \
	transport/rtp/reports_m.h \
	transport/rtp/sdes.h
$O/transport/rtp/RTPSenderStatusMessage_m.o: transport/rtp/RTPSenderStatusMessage_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/rtp/RTPSenderStatusMessage_m.h
$O/transport/rtp/reports.o: transport/rtp/reports.cc \
	transport/rtp/reports.h \
	transport/rtp/reports_m.h
$O/transport/rtp/reports_m.o: transport/rtp/reports_m.cc \
	transport/rtp/reports_m.h
$O/transport/rtp/sdes.o: transport/rtp/sdes.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/rtp/sdes.h
$O/transport/rtp/profiles/avprofile/RTPAVProfile.o: transport/rtp/profiles/avprofile/RTPAVProfile.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/rtp/RTPProfile.h \
	transport/rtp/profiles/avprofile/RTPAVProfile.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPPayloadReceiver.h \
	transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h \
	transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	transport/rtp/RTPInnerPacket.h \
	transport/rtp/RTPInnerPacket_m.h \
	transport/rtp/RTPPacket.h \
	transport/rtp/RTPPacket_m.h \
	transport/rtp/RTPPayloadSender.h \
	transport/rtp/RTPSenderControlMessage_m.h \
	transport/rtp/RTPSenderStatusMessage_m.h \
	transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
	transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o: transport/rtp/profiles/avprofile/RTPMpegPacket_m.cc \
	transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/transport/sctp/SCTP.o: transport/sctp/SCTP.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPAlg.o: transport/sctp/SCTPAlg.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlg.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPAssociationAddIP.o: transport/sctp/SCTPAssociationAddIP.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPAssociationBase.o: transport/sctp/SCTPAssociationBase.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPAssociationEventProc.o: transport/sctp/SCTPAssociationEventProc.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPAssociationRcvMessage.o: transport/sctp/SCTPAssociationRcvMessage.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPAssociationSendAll.o: transport/sctp/SCTPAssociationSendAll.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPAssociationStreamReset.o: transport/sctp/SCTPAssociationStreamReset.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPAssociationUtil.o: transport/sctp/SCTPAssociationUtil.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	networklayer/ipv6/RoutingTable6.h \
	networklayer/ipv6/RoutingTable6Access.h \
	transport/contract/SCTPCommand.h \
	transport/contract/SCTPCommand_m.h \
	transport/contract/UDPControlInfo_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAlgorithm.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/common.h
$O/transport/sctp/SCTPCCFunctions.o: transport/sctp/SCTPCCFunctions.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPGapList.o: transport/sctp/SCTPGapList.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPMessage.o: transport/sctp/SCTPMessage.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPMessage_m.o: transport/sctp/SCTPMessage_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/sctp/SCTPMessage_m.h
$O/transport/sctp/SCTPNatHook.o: transport/sctp/SCTPNatHook.cc \
	base/AbstractQueue.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	base/ProtocolMap.h \
	base/QueueBase.h \
	base/ReassemblyBuffer.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/IARPCache.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/INetfilter.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4FragBuf.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPNatHook.h \
	transport/sctp/SCTPNatTable.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPNatTable.o: transport/sctp/SCTPNatTable.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPNatTable.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPQueue.o: transport/sctp/SCTPQueue.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPReceiveStream.o: transport/sctp/SCTPReceiveStream.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPSSFunctions.o: transport/sctp/SCTPSSFunctions.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/sctp/SCTPSendStream.o: transport/sctp/SCTPSendStream.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h
$O/transport/tcp/TCP.o: transport/tcp/TCP.cc \
	base/ByteArray.h \
	base/ByteArrayBuffer.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv4/ICMPMessage_m.h \
	status/NodeStatus.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp/queues/TCPByteStreamRcvQueue.h \
	transport/tcp/queues/TCPByteStreamSendQueue.h \
	transport/tcp/queues/TCPMsgBasedRcvQueue.h \
	transport/tcp/queues/TCPMsgBasedSendQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	transport/tcp/queues/TCPVirtualDataSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionBase.o: transport/tcp/TCPConnectionBase.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionEventProc.o: transport/tcp/TCPConnectionEventProc.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionRcvSegment.o: transport/tcp/TCPConnectionRcvSegment.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionSackUtil.o: transport/tcp/TCPConnectionSackUtil.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPConnectionUtil.o: transport/tcp/TCPConnectionUtil.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/TCPSACKRexmitQueue.o: transport/tcp/TCPSACKRexmitQueue.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/DumbTCP.o: transport/tcp/flavours/DumbTCP.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/DumbTCP.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPBaseAlg.o: transport/tcp/flavours/TCPBaseAlg.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSACKRexmitQueue.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPNewReno.o: transport/tcp/flavours/TCPNewReno.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPNewReno.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPNoCongestionControl.o: transport/tcp/flavours/TCPNoCongestionControl.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPNoCongestionControl.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPReno.o: transport/tcp/flavours/TCPReno.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPReno.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPSegmentTransmitInfoList.o: transport/tcp/flavours/TCPSegmentTransmitInfoList.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPTahoe.o: transport/tcp/flavours/TCPTahoe.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPTahoe.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPTahoeRenoFamily.o: transport/tcp/flavours/TCPTahoeRenoFamily.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPTahoeRenoFamily.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPVegas.o: transport/tcp/flavours/TCPVegas.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	transport/tcp/flavours/TCPVegas.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/flavours/TCPWestwood.o: transport/tcp/flavours/TCPWestwood.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPAlgorithm.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/flavours/TCPBaseAlg.h \
	transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	transport/tcp/flavours/TCPWestwood.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPByteStreamRcvQueue.o: transport/tcp/queues/TCPByteStreamRcvQueue.cc \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/queues/TCPByteStreamRcvQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPByteStreamSendQueue.o: transport/tcp/queues/TCPByteStreamSendQueue.cc \
	base/ByteArray.h \
	base/ByteArrayBuffer.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp/queues/TCPByteStreamSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPMsgBasedRcvQueue.o: transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/queues/TCPMsgBasedRcvQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPMsgBasedSendQueue.o: transport/tcp/queues/TCPMsgBasedSendQueue.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp/queues/TCPMsgBasedSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPVirtualDataRcvQueue.o: transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPReceiveQueue.h \
	transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp/queues/TCPVirtualDataSendQueue.o: transport/tcp/queues/TCPVirtualDataSendQueue.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/contract/TCPCommand_m.h \
	transport/tcp/TCP.h \
	transport/tcp/TCPConnection.h \
	transport/tcp/TCPSendQueue.h \
	transport/tcp/queues/TCPVirtualDataSendQueue.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp_common/TCPSegment.o: transport/tcp_common/TCPSegment.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp_common/TCPSegment_m.o: transport/tcp_common/TCPSegment_m.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h \
	transport/tcp_common/TCPSegment_m.h
$O/transport/tcp_common/TCPSpoof.o: transport/tcp_common/TCPSpoof.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/tcp_common/TCPSpoof.h
$O/transport/udp/UDP.o: transport/udp/UDP.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/LifecycleOperation.h \
	base/ModuleAccess.h \
	base/NodeOperations.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPSocket.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv4ControlInfo.h \
	networklayer/contract/IPv4ControlInfo_m.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPv6ControlInfo.h \
	networklayer/contract/IPv6ControlInfo_m.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/icmpv6/ICMPv6.h \
	networklayer/icmpv6/ICMPv6Access.h \
	networklayer/icmpv6/ICMPv6Message_m.h \
	networklayer/ipv4/ICMP.h \
	networklayer/ipv4/ICMPAccess.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	networklayer/ipv6/IPv6InterfaceData.h \
	status/NodeStatus.h \
	transport/contract/UDPControlInfo.h \
	transport/contract/UDPControlInfo_m.h \
	transport/udp/UDP.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h
$O/transport/udp/UDPPacket_m.o: transport/udp/UDPPacket_m.cc \
	base/Compat.h \
	base/INETDefs.h \
	transport/udp/UDPPacket_m.h
$O/util/Delayer.o: util/Delayer.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/Delayer.h
$O/util/GlobalWirelessLinkInspector.o: util/GlobalWirelessLinkInspector.cc \
	base/Compat.h \
	base/INETDefs.h \
	linklayer/contract/MACAddress.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/manetrouting/base/ManetAddress.h \
	util/GlobalWirelessLinkInspector.h
$O/util/Macho.o: util/Macho.cc \
	util/Macho.h
$O/util/MessageChecker.o: util/MessageChecker.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/MessageChecker.h
$O/util/NetAnimTrace.o: util/NetAnimTrace.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/contract/IMobility.h \
	util/FWMath.h \
	util/NetAnimTrace.h
$O/util/OrdinalBasedDropper.o: util/OrdinalBasedDropper.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/OrdinalBasedDropper.h
$O/util/OrdinalBasedDuplicator.o: util/OrdinalBasedDuplicator.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/OrdinalBasedDuplicator.h
$O/util/PacketDump.o: util/PacketDump.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/arp/ARPPacket_m.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMPMessage.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket_m.h \
	util/PacketDump.h
$O/util/PatternMatcher.o: util/PatternMatcher.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/PatternMatcher.h
$O/util/PcapDump.o: util/PcapDump.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	transport/udp/UDPPacket_m.h \
	util/PcapDump.h \
	util/headerserializers/ipv4/IPv4Serializer.h \
	util/headerserializers/ipv6/IPv6Serializer.h
$O/util/PcapRecorder.o: util/PcapRecorder.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	util/PacketDump.h \
	util/PcapDump.h \
	util/PcapRecorder.h
$O/util/TCPDump.o: util/TCPDump.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	util/PacketDump.h \
	util/PcapDump.h \
	util/TCPDump.h
$O/util/ThruputMeter.o: util/ThruputMeter.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/ThruputMeter.h
$O/util/ThruputMeteringChannel.o: util/ThruputMeteringChannel.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/ThruputMeteringChannel.h
$O/util/WirelessGetNeig.o: util/WirelessGetNeig.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	mobility/common/MobilityAccess.h \
	mobility/contract/IMobility.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	util/FWMath.h \
	util/WirelessGetNeig.h
$O/util/WirelessNumHops.o: util/WirelessNumHops.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	mobility/common/MobilityAccess.h \
	mobility/contract/IMobility.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	networklayer/ipv4/IPv4InterfaceData.h \
	networklayer/ipv4/IPv4Route.h \
	networklayer/ipv4/IPv4RouteRule.h \
	networklayer/ipv4/IRoutingTable.h \
	networklayer/ipv4/RoutingTableAccess.h \
	networklayer/manetrouting/base/ManetAddress.h \
	util/FWMath.h \
	util/GlobalWirelessLinkInspector.h \
	util/WirelessNumHops.h \
	util/dijktraKShortest.h \
	util/uint128.h
$O/util/XMLUtils.o: util/XMLUtils.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/contract/IPvXAddressResolver.h \
	util/XMLUtils.h
$O/util/common.o: util/common.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/common.h
$O/util/dijktraKShortest.o: util/dijktraKShortest.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/dijktraKShortest.h \
	util/uint128.h
$O/util/int128.o: util/int128.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/int128.h
$O/util/opp_utils.o: util/opp_utils.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/opp_utils.h
$O/util/uint128.o: util/uint128.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/uint128.h
$O/util/headerserializers/TCPIPchecksum.o: util/headerserializers/TCPIPchecksum.cc \
	base/Compat.h \
	base/INETDefs.h \
	util/headerserializers/TCPIPchecksum.h
$O/util/headerserializers/ipv4/ICMPSerializer.o: util/headerserializers/ipv4/ICMPSerializer.cc \
	applications/pingapp/PingPayload_m.h \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/ipv4/ICMPSerializer.h \
	util/headerserializers/ipv4/IPv4Serializer.h \
	util/headerserializers/ipv4/headers/ip.h \
	util/headerserializers/ipv4/headers/ip_icmp.h
$O/util/headerserializers/ipv4/IGMPSerializer.o: util/headerserializers/ipv4/IGMPSerializer.cc \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/ipv4/IGMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/ipv4/IGMPSerializer.h \
	util/headerserializers/ipv4/IPv4Serializer.h \
	util/headerserializers/ipv4/headers/igmp.h \
	util/headerserializers/ipv4/headers/ip.h
$O/util/headerserializers/ipv4/IPv4Serializer.o: util/headerserializers/ipv4/IPv4Serializer.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/ICMPMessage_m.h \
	networklayer/ipv4/IGMPMessage_m.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/ipv4/ICMPSerializer.h \
	util/headerserializers/ipv4/IGMPSerializer.h \
	util/headerserializers/ipv4/IPv4Serializer.h \
	util/headerserializers/ipv4/headers/ip.h \
	util/headerserializers/sctp/SCTPSerializer.h \
	util/headerserializers/tcp/TCPSerializer.h \
	util/headerserializers/tcp/headers/tcp.h \
	util/headerserializers/udp/UDPSerializer.h
$O/util/headerserializers/ipv6/IPv6Serializer.o: util/headerserializers/ipv6/IPv6Serializer.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv6/IPv6Datagram.h \
	networklayer/ipv6/IPv6Datagram_m.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/ipv6/IPv6Serializer.h \
	util/headerserializers/ipv6/headers/ip6.h \
	util/headerserializers/sctp/SCTPSerializer.h \
	util/headerserializers/tcp/TCPSerializer.h \
	util/headerserializers/tcp/headers/tcp.h \
	util/headerserializers/udp/UDPSerializer.h
$O/util/headerserializers/sctp/SCTPSerializer.o: util/headerserializers/sctp/SCTPSerializer.cc \
	base/Compat.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/MACAddress.h \
	networklayer/common/IInterfaceTable.h \
	networklayer/common/InterfaceEntry.h \
	networklayer/common/InterfaceTable.h \
	networklayer/common/InterfaceTableAccess.h \
	networklayer/common/InterfaceToken.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	networklayer/ipv4/IPv4Datagram.h \
	networklayer/ipv4/IPv4Datagram_m.h \
	transport/contract/UDPSocket.h \
	transport/sctp/SCTP.h \
	transport/sctp/SCTPAssociation.h \
	transport/sctp/SCTPGapList.h \
	transport/sctp/SCTPMessage.h \
	transport/sctp/SCTPMessage_m.h \
	transport/sctp/SCTPQueue.h \
	transport/sctp/SCTPReceiveStream.h \
	transport/sctp/SCTPSendStream.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/ipv4/IPv4Serializer.h \
	util/headerserializers/ipv4/headers/ip.h \
	util/headerserializers/sctp/SCTPSerializer.h \
	util/headerserializers/sctp/headers/sctp.h
$O/util/headerserializers/tcp/TCPSerializer.o: util/headerserializers/tcp/TCPSerializer.cc \
	base/ByteArray.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h \
	networklayer/contract/IPProtocolId_m.h \
	networklayer/contract/IPv4Address.h \
	networklayer/contract/IPv6Address.h \
	networklayer/contract/IPvXAddress.h \
	transport/tcp_common/TCPSegment.h \
	transport/tcp_common/TCPSegment_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/tcp/TCPSerializer.h \
	util/headerserializers/tcp/headers/tcp.h
$O/util/headerserializers/udp/UDPSerializer.o: util/headerserializers/udp/UDPSerializer.cc \
	base/ByteArray.h \
	base/ByteArrayMessage.h \
	base/ByteArrayMessage_m.h \
	base/ByteArray_m.h \
	base/Compat.h \
	base/INETDefs.h \
	transport/udp/UDPPacket.h \
	transport/udp/UDPPacket_m.h \
	util/headerserializers/TCPIPchecksum.h \
	util/headerserializers/headers/bsdint.h \
	util/headerserializers/headers/defs.h \
	util/headerserializers/headers/in.h \
	util/headerserializers/headers/in_systm.h \
	util/headerserializers/udp/UDPSerializer.h \
	util/headerserializers/udp/headers/udp.h
$O/util/messageprinters/InetPacketBytesPrinter.o: util/messageprinters/InetPacketBytesPrinter.cc \
	base/Compat.h \
	base/INETDefs.h
$O/util/messageprinters/InetPacketPrinter.o: util/messageprinters/InetPacketPrinter.cc \
	base/Compat.h \
	base/INETDefs.h
$O/util/messageprinters/InetPacketPrinter2.o: util/messageprinters/InetPacketPrinter2.cc \
	base/Compat.h \
	base/INETDefs.h
$O/world/annotations/AnnotationDummy.o: world/annotations/AnnotationDummy.cc \
	base/Compat.h \
	base/INETDefs.h \
	world/annotations/AnnotationDummy.h
$O/world/annotations/AnnotationManager.o: world/annotations/AnnotationManager.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h
$O/world/httptools/HttpController.o: world/httptools/HttpController.cc \
	applications/httptools/HttpEventMessages_m.h \
	applications/httptools/HttpMessages_m.h \
	applications/httptools/HttpRandom.h \
	applications/httptools/HttpUtils.h \
	base/Compat.h \
	base/INETDefs.h \
	world/httptools/HttpController.h
$O/world/obstacles/Obstacle.o: world/obstacles/Obstacle.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h
$O/world/obstacles/ObstacleControl.o: world/obstacles/ObstacleControl.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/annotations/AnnotationManager.h \
	world/obstacles/Obstacle.h \
	world/obstacles/ObstacleControl.h
$O/world/powercontrol/PowerControlManager.o: world/powercontrol/PowerControlManager.cc \
	base/Compat.h \
	base/INETDefs.h \
	world/powercontrol/IPowerControl.h \
	world/powercontrol/PowerControlManager.h \
	world/powercontrol/PowerControlMessages_m.h
$O/world/powercontrol/PowerControlMessages_m.o: world/powercontrol/PowerControlMessages_m.cc \
	world/powercontrol/PowerControlMessages_m.h
$O/world/radio/ChannelAccess.o: world/radio/ChannelAccess.cc \
	base/BasicModule.h \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/contract/IMobility.h \
	util/FWMath.h \
	world/radio/ChannelAccess.h \
	world/radio/IChannelControl.h
$O/world/radio/ChannelControl.o: world/radio/ChannelControl.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	linklayer/radio/AirFrame_m.h \
	linklayer/radio/ModulationType.h \
	util/FWMath.h \
	world/radio/ChannelControl.h \
	world/radio/IChannelControl.h
$O/world/radio/IdealChannelModel.o: world/radio/IdealChannelModel.cc \
	base/BasicModule.h \
	base/Compat.h \
	base/Coord.h \
	base/ILifecycle.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	linklayer/contract/RadioState.h \
	linklayer/radio/IdealAirFrame_m.h \
	linklayer/radio/IdealRadio.h \
	util/FWMath.h \
	world/radio/IdealChannelModel.h \
	world/radio/IdealChannelModelAccess.h
$O/world/radio/IdealChannelModelAccess.o: world/radio/IdealChannelModelAccess.cc \
	base/BasicModule.h \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/INotifiable.h \
	base/ModuleAccess.h \
	base/NotificationBoard.h \
	base/NotifierConsts.h \
	mobility/contract/IMobility.h \
	util/FWMath.h \
	world/radio/IdealChannelModel.h \
	world/radio/IdealChannelModelAccess.h
$O/world/scenario/ScenarioManager.o: world/scenario/ScenarioManager.cc \
	base/Compat.h \
	base/INETDefs.h \
	base/IScriptable.h \
	world/scenario/ScenarioManager.h
$O/world/traci/TraCIColor.o: world/traci/TraCIColor.cc \
	world/traci/TraCIColor.h
$O/world/traci/TraCIScenarioManager.o: world/traci/TraCIScenarioManager.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	mobility/common/MobilityBase.h \
	mobility/contract/IMobility.h \
	mobility/single/TraCIMobility.h \
	util/FWMath.h \
	world/traci/TraCIColor.h \
	world/traci/TraCIConstants.h \
	world/traci/TraCIScenarioManager.h
$O/world/traci/TraCIScenarioManagerLaunchd.o: world/traci/TraCIScenarioManagerLaunchd.cc \
	base/Compat.h \
	base/Coord.h \
	base/INETDefs.h \
	base/ModuleAccess.h \
	util/FWMath.h \
	world/traci/TraCIColor.h \
	world/traci/TraCIConstants.h \
	world/traci/TraCIScenarioManager.h \
	world/traci/TraCIScenarioManagerLaunchd.h

