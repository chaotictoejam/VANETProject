#
# OMNeT++/OMNEST Makefile for VANETSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out
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
    -Ietc \
    -Ietc/plugins \
    -Isimulations \
    -Isimulations/_maps \
    -Isimulations/_maps/downtownorlando \
    -Isimulations/_maps/i95highway \
    -Isimulations/_maps/simple \
    -Isimulations/_nodes \
    -Isimulations/aodv \
    -Isimulations/bittorrent \
    -Isimulations/dsr \
    -Isimulations/gpsr \
    -Isimulations/olsr \
    -Isimulations/veins \
    -Isimulations/veins/results \
    -Isrc \
    -Isrc/custom \
    -Isrc/custom/aodvvanet \
    -Isrc/custom/bitcar \
    -Isrc/custom/rbvtp \
    -Isrc/custom/rbvtr \
    -Isrc/inet \
    -Isrc/inet/applications \
    -Isrc/inet/applications/common \
    -Isrc/inet/applications/dhcp \
    -Isrc/inet/applications/ethernet \
    -Isrc/inet/applications/generic \
    -Isrc/inet/applications/httptools \
    -Isrc/inet/applications/netperfmeter \
    -Isrc/inet/applications/pingapp \
    -Isrc/inet/applications/rtpapp \
    -Isrc/inet/applications/sctpapp \
    -Isrc/inet/applications/tcpapp \
    -Isrc/inet/applications/udpapp \
    -Isrc/inet/applications/voip \
    -Isrc/inet/applications/voipstream \
    -Isrc/inet/base \
    -Isrc/inet/battery \
    -Isrc/inet/battery/models \
    -Isrc/inet/linklayer \
    -Isrc/inet/linklayer/common \
    -Isrc/inet/linklayer/configurator \
    -Isrc/inet/linklayer/contract \
    -Isrc/inet/linklayer/ethernet \
    -Isrc/inet/linklayer/ethernet/switch \
    -Isrc/inet/linklayer/ext \
    -Isrc/inet/linklayer/idealwireless \
    -Isrc/inet/linklayer/ieee80211 \
    -Isrc/inet/linklayer/ieee80211/mac \
    -Isrc/inet/linklayer/ieee80211/mgmt \
    -Isrc/inet/linklayer/ieee80211/radio \
    -Isrc/inet/linklayer/ieee80211/radio/errormodel \
    -Isrc/inet/linklayer/ieee8021d \
    -Isrc/inet/linklayer/ieee8021d/common \
    -Isrc/inet/linklayer/ieee8021d/relay \
    -Isrc/inet/linklayer/ieee8021d/rstp \
    -Isrc/inet/linklayer/ieee8021d/stp \
    -Isrc/inet/linklayer/ieee8021d/tester \
    -Isrc/inet/linklayer/loopback \
    -Isrc/inet/linklayer/ppp \
    -Isrc/inet/linklayer/queue \
    -Isrc/inet/linklayer/radio \
    -Isrc/inet/linklayer/radio/propagation \
    -Isrc/inet/mobility \
    -Isrc/inet/mobility/common \
    -Isrc/inet/mobility/contract \
    -Isrc/inet/mobility/group \
    -Isrc/inet/mobility/single \
    -Isrc/inet/mobility/static \
    -Isrc/inet/networklayer \
    -Isrc/inet/networklayer/arp \
    -Isrc/inet/networklayer/autorouting \
    -Isrc/inet/networklayer/autorouting/ipv4 \
    -Isrc/inet/networklayer/autorouting/ipv6 \
    -Isrc/inet/networklayer/bgpv4 \
    -Isrc/inet/networklayer/bgpv4/BGPMessage \
    -Isrc/inet/networklayer/common \
    -Isrc/inet/networklayer/contract \
    -Isrc/inet/networklayer/diffserv \
    -Isrc/inet/networklayer/icmpv6 \
    -Isrc/inet/networklayer/internetcloud \
    -Isrc/inet/networklayer/ipv4 \
    -Isrc/inet/networklayer/ipv6 \
    -Isrc/inet/networklayer/ipv6tunneling \
    -Isrc/inet/networklayer/ldp \
    -Isrc/inet/networklayer/manetrouting \
    -Isrc/inet/networklayer/manetrouting/aodv-uu \
    -Isrc/inet/networklayer/manetrouting/aodv-uu/aodv-uu \
    -Isrc/inet/networklayer/manetrouting/base \
    -Isrc/inet/networklayer/manetrouting/batman \
    -Isrc/inet/networklayer/manetrouting/batman/batmand \
    -Isrc/inet/networklayer/manetrouting/batman/batmand/orig \
    -Isrc/inet/networklayer/manetrouting/dsdv \
    -Isrc/inet/networklayer/manetrouting/dsr \
    -Isrc/inet/networklayer/manetrouting/dsr/dsr-uu \
    -Isrc/inet/networklayer/manetrouting/dymo \
    -Isrc/inet/networklayer/manetrouting/dymo/dymoum \
    -Isrc/inet/networklayer/manetrouting/dymo_fau \
    -Isrc/inet/networklayer/manetrouting/olsr \
    -Isrc/inet/networklayer/mpls \
    -Isrc/inet/networklayer/ospfv2 \
    -Isrc/inet/networklayer/ospfv2/interface \
    -Isrc/inet/networklayer/ospfv2/messagehandler \
    -Isrc/inet/networklayer/ospfv2/neighbor \
    -Isrc/inet/networklayer/ospfv2/router \
    -Isrc/inet/networklayer/routing \
    -Isrc/inet/networklayer/routing/aodv \
    -Isrc/inet/networklayer/routing/dymo \
    -Isrc/inet/networklayer/routing/gpsr \
    -Isrc/inet/networklayer/routing/rip \
    -Isrc/inet/networklayer/rsvp_te \
    -Isrc/inet/networklayer/ted \
    -Isrc/inet/networklayer/xmipv6 \
    -Isrc/inet/nodes \
    -Isrc/inet/nodes/aodv \
    -Isrc/inet/nodes/bgp \
    -Isrc/inet/nodes/dymo \
    -Isrc/inet/nodes/ethernet \
    -Isrc/inet/nodes/gpsr \
    -Isrc/inet/nodes/httptools \
    -Isrc/inet/nodes/inet \
    -Isrc/inet/nodes/internetcloud \
    -Isrc/inet/nodes/ipv6 \
    -Isrc/inet/nodes/mpls \
    -Isrc/inet/nodes/ospfv2 \
    -Isrc/inet/nodes/rip \
    -Isrc/inet/nodes/rtp \
    -Isrc/inet/nodes/wireless \
    -Isrc/inet/nodes/xmipv6 \
    -Isrc/inet/status \
    -Isrc/inet/transport \
    -Isrc/inet/transport/contract \
    -Isrc/inet/transport/rtp \
    -Isrc/inet/transport/rtp/profiles \
    -Isrc/inet/transport/rtp/profiles/avprofile \
    -Isrc/inet/transport/sctp \
    -Isrc/inet/transport/tcp \
    -Isrc/inet/transport/tcp/flavours \
    -Isrc/inet/transport/tcp/queues \
    -Isrc/inet/transport/tcp_common \
    -Isrc/inet/transport/tcp_lwip \
    -Isrc/inet/transport/tcp_lwip/lwip \
    -Isrc/inet/transport/tcp_lwip/lwip/core \
    -Isrc/inet/transport/tcp_lwip/lwip/include \
    -Isrc/inet/transport/tcp_lwip/lwip/include/arch \
    -Isrc/inet/transport/tcp_lwip/lwip/include/ipv4 \
    -Isrc/inet/transport/tcp_lwip/lwip/include/ipv4/lwip \
    -Isrc/inet/transport/tcp_lwip/lwip/include/ipv6 \
    -Isrc/inet/transport/tcp_lwip/lwip/include/ipv6/lwip \
    -Isrc/inet/transport/tcp_lwip/lwip/include/lwip \
    -Isrc/inet/transport/tcp_lwip/lwip/include/netif \
    -Isrc/inet/transport/tcp_lwip/queues \
    -Isrc/inet/transport/tcp_nsc \
    -Isrc/inet/transport/tcp_nsc/queues \
    -Isrc/inet/transport/udp \
    -Isrc/inet/util \
    -Isrc/inet/util/headerserializers \
    -Isrc/inet/util/headerserializers/headers \
    -Isrc/inet/util/headerserializers/ipv4 \
    -Isrc/inet/util/headerserializers/ipv4/headers \
    -Isrc/inet/util/headerserializers/ipv6 \
    -Isrc/inet/util/headerserializers/ipv6/headers \
    -Isrc/inet/util/headerserializers/sctp \
    -Isrc/inet/util/headerserializers/sctp/headers \
    -Isrc/inet/util/headerserializers/tcp \
    -Isrc/inet/util/headerserializers/tcp/headers \
    -Isrc/inet/util/headerserializers/udp \
    -Isrc/inet/util/headerserializers/udp/headers \
    -Isrc/inet/util/messageprinters \
    -Isrc/inet/world \
    -Isrc/inet/world/annotations \
    -Isrc/inet/world/httptools \
    -Isrc/inet/world/obstacles \
    -Isrc/inet/world/radio \
    -Isrc/inet/world/scenario \
    -Isrc/inet/world/traci \
    -Isrc/veins \
    -Isrc/veins/base \
    -Isrc/veins/base/connectionManager \
    -Isrc/veins/base/messages \
    -Isrc/veins/base/modules \
    -Isrc/veins/base/phyLayer \
    -Isrc/veins/base/utils \
    -Isrc/veins/modules \
    -Isrc/veins/modules/analogueModel \
    -Isrc/veins/modules/application \
    -Isrc/veins/modules/application/ieee80211p \
    -Isrc/veins/modules/application/traci \
    -Isrc/veins/modules/mac \
    -Isrc/veins/modules/mac/ieee80211p \
    -Isrc/veins/modules/messages \
    -Isrc/veins/modules/mobility \
    -Isrc/veins/modules/mobility/traci \
    -Isrc/veins/modules/nic \
    -Isrc/veins/modules/obstacle \
    -Isrc/veins/modules/phy \
    -Isrc/veins/modules/utility \
    -Isrc/veins/modules/world \
    -Isrc/veins/modules/world/annotations \
    -Isrc/veins/nodes

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = out
PROJECTRELATIVE_PATH =
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/src/inet/applications/common/ApplicationBase.o \
    $O/src/inet/applications/dhcp/DHCPClient.o \
    $O/src/inet/applications/dhcp/DHCPServer.o \
    $O/src/inet/applications/ethernet/EtherAppCli.o \
    $O/src/inet/applications/ethernet/EtherAppSrv.o \
    $O/src/inet/applications/ethernet/EthernetApplication.o \
    $O/src/inet/applications/ethernet/EtherTrafGen.o \
    $O/src/inet/applications/generic/IPvXTrafGen.o \
    $O/src/inet/applications/generic/IPvXTrafSink.o \
    $O/src/inet/applications/httptools/HttpBrowser.o \
    $O/src/inet/applications/httptools/HttpBrowserBase.o \
    $O/src/inet/applications/httptools/HttpBrowserDirect.o \
    $O/src/inet/applications/httptools/HttpNodeBase.o \
    $O/src/inet/applications/httptools/HttpRandom.o \
    $O/src/inet/applications/httptools/HttpServer.o \
    $O/src/inet/applications/httptools/HttpServerBase.o \
    $O/src/inet/applications/httptools/HttpServerDirect.o \
    $O/src/inet/applications/httptools/HttpServerDirectEvilA.o \
    $O/src/inet/applications/httptools/HttpServerDirectEvilB.o \
    $O/src/inet/applications/httptools/HttpServerEvilA.o \
    $O/src/inet/applications/httptools/HttpServerEvilB.o \
    $O/src/inet/applications/httptools/HttpUtils.o \
    $O/src/inet/applications/netperfmeter/NetPerfMeter.o \
    $O/src/inet/applications/pingapp/PingApp.o \
    $O/src/inet/applications/pingapp/PingTestApp.o \
    $O/src/inet/applications/rtpapp/RTPApplication.o \
    $O/src/inet/applications/sctpapp/SCTPClient.o \
    $O/src/inet/applications/sctpapp/SCTPNatPeer.o \
    $O/src/inet/applications/sctpapp/SCTPNatServer.o \
    $O/src/inet/applications/sctpapp/SCTPPeer.o \
    $O/src/inet/applications/sctpapp/SCTPServer.o \
    $O/src/inet/applications/tcpapp/TCPAppBase.o \
    $O/src/inet/applications/tcpapp/TCPBasicClientApp.o \
    $O/src/inet/applications/tcpapp/TCPEchoApp.o \
    $O/src/inet/applications/tcpapp/TCPGenericSrvApp.o \
    $O/src/inet/applications/tcpapp/TCPGenericSrvThread.o \
    $O/src/inet/applications/tcpapp/TCPSessionApp.o \
    $O/src/inet/applications/tcpapp/TCPSinkApp.o \
    $O/src/inet/applications/tcpapp/TCPSrvHostApp.o \
    $O/src/inet/applications/tcpapp/TelnetApp.o \
    $O/src/inet/applications/udpapp/UDPBasicApp.o \
    $O/src/inet/applications/udpapp/UDPBasicBurst.o \
    $O/src/inet/applications/udpapp/UDPEchoApp.o \
    $O/src/inet/applications/udpapp/UDPSink.o \
    $O/src/inet/applications/udpapp/UDPVideoStreamCli.o \
    $O/src/inet/applications/udpapp/UDPVideoStreamSvr.o \
    $O/src/inet/applications/voip/SimpleVoIPReceiver.o \
    $O/src/inet/applications/voip/SimpleVoIPSender.o \
    $O/src/inet/applications/voipstream/AudioOutFile.o \
    $O/src/inet/applications/voipstream/VoIPStreamReceiver.o \
    $O/src/inet/applications/voipstream/VoIPStreamSender.o \
    $O/src/inet/base/AbstractQueue.o \
    $O/src/inet/base/BasicModule.o \
    $O/src/inet/base/ByteArray.o \
    $O/src/inet/base/ByteArrayBuffer.o \
    $O/src/inet/base/ByteArrayMessage.o \
    $O/src/inet/base/Compat.o \
    $O/src/inet/base/Coord.o \
    $O/src/inet/base/erfc.o \
    $O/src/inet/base/InterfaceOperations.o \
    $O/src/inet/base/Join.o \
    $O/src/inet/base/LifecycleController.o \
    $O/src/inet/base/ModuleAccess.o \
    $O/src/inet/base/NedFunctions.o \
    $O/src/inet/base/NodeOperations.o \
    $O/src/inet/base/NotificationBoard.o \
    $O/src/inet/base/NotifierConsts.o \
    $O/src/inet/base/OperationalBase.o \
    $O/src/inet/base/PassiveQueueBase.o \
    $O/src/inet/base/ProtocolMap.o \
    $O/src/inet/base/QueueBase.o \
    $O/src/inet/base/ReassemblyBuffer.o \
    $O/src/inet/base/ResultFilters.o \
    $O/src/inet/base/Sink.o \
    $O/src/inet/base/Topology.o \
    $O/src/inet/base/UnimplementedModule.o \
    $O/src/inet/battery/models/BasicBattery.o \
    $O/src/inet/battery/models/InetSimpleBattery.o \
    $O/src/inet/linklayer/common/MACBase.o \
    $O/src/inet/linklayer/common/WirelessMacBase.o \
    $O/src/inet/linklayer/configurator/Ieee8021dInterfaceData.o \
    $O/src/inet/linklayer/configurator/L2NetworkConfigurator.o \
    $O/src/inet/linklayer/configurator/L2NodeConfigurator.o \
    $O/src/inet/linklayer/contract/MACAddress.o \
    $O/src/inet/linklayer/ethernet/EtherBus.o \
    $O/src/inet/linklayer/ethernet/EtherEncap.o \
    $O/src/inet/linklayer/ethernet/EtherFrameClassifier.o \
    $O/src/inet/linklayer/ethernet/EtherHub.o \
    $O/src/inet/linklayer/ethernet/EtherLLC.o \
    $O/src/inet/linklayer/ethernet/EtherMAC.o \
    $O/src/inet/linklayer/ethernet/EtherMACBase.o \
    $O/src/inet/linklayer/ethernet/EtherMACFullDuplex.o \
    $O/src/inet/linklayer/ethernet/switch/MACAddressTable.o \
    $O/src/inet/linklayer/ethernet/switch/MACRelayUnit.o \
    $O/src/inet/linklayer/ext/cSocketRTScheduler.o \
    $O/src/inet/linklayer/ext/ExtInterface.o \
    $O/src/inet/linklayer/idealwireless/IdealWirelessMac.o \
    $O/src/inet/linklayer/ieee80211/mac/Ieee80211DataRate.o \
    $O/src/inet/linklayer/ieee80211/mac/Ieee80211eClassifier.o \
    $O/src/inet/linklayer/ieee80211/mac/Ieee80211Mac.o \
    $O/src/inet/linklayer/ieee80211/mac/WifiMode.o \
    $O/src/inet/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o \
    $O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o \
    $O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o \
    $O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o \
    $O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o \
    $O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o \
    $O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o \
    $O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o \
    $O/src/inet/linklayer/ieee80211/radio/BerParseFile.o \
    $O/src/inet/linklayer/ieee80211/radio/Ieee80211RadioModel.o \
    $O/src/inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o \
    $O/src/inet/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o \
    $O/src/inet/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o \
    $O/src/inet/linklayer/ieee8021d/common/STPBase.o \
    $O/src/inet/linklayer/ieee8021d/relay/Ieee8021dRelay.o \
    $O/src/inet/linklayer/ieee8021d/rstp/RSTP.o \
    $O/src/inet/linklayer/ieee8021d/stp/STP.o \
    $O/src/inet/linklayer/ieee8021d/tester/STPTester.o \
    $O/src/inet/linklayer/loopback/Loopback.o \
    $O/src/inet/linklayer/ppp/PPP.o \
    $O/src/inet/linklayer/queue/AlgorithmicDropperBase.o \
    $O/src/inet/linklayer/queue/DropTailQueue.o \
    $O/src/inet/linklayer/queue/FIFOQueue.o \
    $O/src/inet/linklayer/queue/PriorityScheduler.o \
    $O/src/inet/linklayer/queue/REDDropper.o \
    $O/src/inet/linklayer/queue/SchedulerBase.o \
    $O/src/inet/linklayer/queue/ThresholdDropper.o \
    $O/src/inet/linklayer/queue/WRRScheduler.o \
    $O/src/inet/linklayer/radio/GenericRadioModel.o \
    $O/src/inet/linklayer/radio/IdealRadio.o \
    $O/src/inet/linklayer/radio/Modulation.o \
    $O/src/inet/linklayer/radio/Radio.o \
    $O/src/inet/linklayer/radio/propagation/FreeSpaceModel.o \
    $O/src/inet/linklayer/radio/propagation/LogNormalShadowingModel.o \
    $O/src/inet/linklayer/radio/propagation/NakagamiModel.o \
    $O/src/inet/linklayer/radio/propagation/RayleighModel.o \
    $O/src/inet/linklayer/radio/propagation/RiceModel.o \
    $O/src/inet/linklayer/radio/propagation/SUIModel.o \
    $O/src/inet/linklayer/radio/propagation/TwoRayGroundModel.o \
    $O/src/inet/mobility/common/LineSegmentsMobilityBase.o \
    $O/src/inet/mobility/common/MobilityAccess.o \
    $O/src/inet/mobility/common/MobilityBase.o \
    $O/src/inet/mobility/common/MovingMobilityBase.o \
    $O/src/inet/mobility/contract/IMobility.o \
    $O/src/inet/mobility/group/MoBANCoordinator.o \
    $O/src/inet/mobility/group/MoBANLocal.o \
    $O/src/inet/mobility/group/Posture.o \
    $O/src/inet/mobility/group/PostureTransition.o \
    $O/src/inet/mobility/single/ANSimMobility.o \
    $O/src/inet/mobility/single/BonnMotionFileCache.o \
    $O/src/inet/mobility/single/BonnMotionMobility.o \
    $O/src/inet/mobility/single/ChiangMobility.o \
    $O/src/inet/mobility/single/CircleMobility.o \
    $O/src/inet/mobility/single/ConstSpeedMobility.o \
    $O/src/inet/mobility/single/GaussMarkovMobility.o \
    $O/src/inet/mobility/single/LinearMobility.o \
    $O/src/inet/mobility/single/LinearNodeDistributionMobility.o \
    $O/src/inet/mobility/single/MassMobility.o \
    $O/src/inet/mobility/single/Ns2MotionMobility.o \
    $O/src/inet/mobility/single/RandomWPMobility.o \
    $O/src/inet/mobility/single/RectangleMobility.o \
    $O/src/inet/mobility/single/TraCIMobility.o \
    $O/src/inet/mobility/single/TractorMobility.o \
    $O/src/inet/mobility/single/TurtleMobility.o \
    $O/src/inet/mobility/static/StaticGridMobility.o \
    $O/src/inet/mobility/static/StationaryMobility.o \
    $O/src/inet/networklayer/arp/ARP.o \
    $O/src/inet/networklayer/arp/IARPCache.o \
    $O/src/inet/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o \
    $O/src/inet/networklayer/autorouting/ipv4/HostAutoConfigurator.o \
    $O/src/inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o \
    $O/src/inet/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o \
    $O/src/inet/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o \
    $O/src/inet/networklayer/bgpv4/BGPFSM.o \
    $O/src/inet/networklayer/bgpv4/BGPRouting.o \
    $O/src/inet/networklayer/bgpv4/BGPSession.o \
    $O/src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate.o \
    $O/src/inet/networklayer/common/InterfaceEntry.o \
    $O/src/inet/networklayer/common/InterfaceMatcher.o \
    $O/src/inet/networklayer/common/InterfaceTable.o \
    $O/src/inet/networklayer/contract/IPSocket.o \
    $O/src/inet/networklayer/contract/IPv4Address.o \
    $O/src/inet/networklayer/contract/IPv4ControlInfo.o \
    $O/src/inet/networklayer/contract/IPv6Address.o \
    $O/src/inet/networklayer/contract/IPv6ControlInfo.o \
    $O/src/inet/networklayer/contract/IPvXAddress.o \
    $O/src/inet/networklayer/contract/IPvXAddressResolver.o \
    $O/src/inet/networklayer/diffserv/BehaviorAggregateClassifier.o \
    $O/src/inet/networklayer/diffserv/DiffservUtil.o \
    $O/src/inet/networklayer/diffserv/DSCPMarker.o \
    $O/src/inet/networklayer/diffserv/MultiFieldClassifier.o \
    $O/src/inet/networklayer/diffserv/SingleRateThreeColorMeter.o \
    $O/src/inet/networklayer/diffserv/TokenBucketMeter.o \
    $O/src/inet/networklayer/diffserv/TwoRateThreeColorMeter.o \
    $O/src/inet/networklayer/icmpv6/ICMPv6.o \
    $O/src/inet/networklayer/icmpv6/IPv6NeighbourCache.o \
    $O/src/inet/networklayer/icmpv6/IPv6NeighbourDiscovery.o \
    $O/src/inet/networklayer/internetcloud/CloudDelayerBase.o \
    $O/src/inet/networklayer/internetcloud/MatrixCloudDelayer.o \
    $O/src/inet/networklayer/ipv4/ErrorHandling.o \
    $O/src/inet/networklayer/ipv4/ICMP.o \
    $O/src/inet/networklayer/ipv4/IGMPv2.o \
    $O/src/inet/networklayer/ipv4/IPv4.o \
    $O/src/inet/networklayer/ipv4/IPv4Datagram.o \
    $O/src/inet/networklayer/ipv4/IPv4FragBuf.o \
    $O/src/inet/networklayer/ipv4/IPv4InterfaceData.o \
    $O/src/inet/networklayer/ipv4/IPv4Route.o \
    $O/src/inet/networklayer/ipv4/NetworkInfo.o \
    $O/src/inet/networklayer/ipv4/RoutingTable.o \
    $O/src/inet/networklayer/ipv4/RoutingTableParser.o \
    $O/src/inet/networklayer/ipv4/RoutingTableRecorder.o \
    $O/src/inet/networklayer/ipv6/IPv6.o \
    $O/src/inet/networklayer/ipv6/IPv6Datagram.o \
    $O/src/inet/networklayer/ipv6/IPv6ErrorHandling.o \
    $O/src/inet/networklayer/ipv6/IPv6ExtensionHeaders.o \
    $O/src/inet/networklayer/ipv6/IPv6FragBuf.o \
    $O/src/inet/networklayer/ipv6/IPv6InterfaceData.o \
    $O/src/inet/networklayer/ipv6/RoutingTable6.o \
    $O/src/inet/networklayer/ipv6tunneling/IPv6Tunneling.o \
    $O/src/inet/networklayer/ldp/LDP.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o \
    $O/src/inet/networklayer/manetrouting/base/ManetAddress.o \
    $O/src/inet/networklayer/manetrouting/base/ManetNetfilterHook.o \
    $O/src/inet/networklayer/manetrouting/base/ManetRoutingBase.o \
    $O/src/inet/networklayer/manetrouting/batman/BatmanMain.o \
    $O/src/inet/networklayer/manetrouting/batman/batmand/batman.o \
    $O/src/inet/networklayer/manetrouting/batman/batmand/bitarray.o \
    $O/src/inet/networklayer/manetrouting/batman/batmand/hna.o \
    $O/src/inet/networklayer/manetrouting/batman/batmand/originator.o \
    $O/src/inet/networklayer/manetrouting/batman/batmand/os.o \
    $O/src/inet/networklayer/manetrouting/batman/batmand/ring_buffer.o \
    $O/src/inet/networklayer/manetrouting/batman/batmand/schedule.o \
    $O/src/inet/networklayer/manetrouting/dsdv/DSDV_2.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.o \
    $O/src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/rtable.o \
    $O/src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.o \
    $O/src/inet/networklayer/manetrouting/olsr/OLSR.o \
    $O/src/inet/networklayer/manetrouting/olsr/OLSROPT.o \
    $O/src/inet/networklayer/manetrouting/olsr/OLSR_ETX.o \
    $O/src/inet/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o \
    $O/src/inet/networklayer/manetrouting/olsr/OLSR_ETX_state.o \
    $O/src/inet/networklayer/manetrouting/olsr/OLSR_rtable.o \
    $O/src/inet/networklayer/manetrouting/olsr/OLSR_state.o \
    $O/src/inet/networklayer/mpls/LIBTable.o \
    $O/src/inet/networklayer/mpls/MPLS.o \
    $O/src/inet/networklayer/mpls/MPLSPacket.o \
    $O/src/inet/networklayer/ospfv2/OSPFConfigReader.o \
    $O/src/inet/networklayer/ospfv2/OSPFRouting.o \
    $O/src/inet/networklayer/ospfv2/interface/OSPFInterface.o \
    $O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.o \
    $O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o \
    $O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o \
    $O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o \
    $O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o \
    $O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o \
    $O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o \
    $O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o \
    $O/src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o \
    $O/src/inet/networklayer/ospfv2/messagehandler/HelloHandler.o \
    $O/src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o \
    $O/src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o \
    $O/src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o \
    $O/src/inet/networklayer/ospfv2/messagehandler/MessageHandler.o \
    $O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.o \
    $O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.o \
    $O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o \
    $O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o \
    $O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o \
    $O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o \
    $O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o \
    $O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o \
    $O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o \
    $O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o \
    $O/src/inet/networklayer/ospfv2/router/ASExternalLSA.o \
    $O/src/inet/networklayer/ospfv2/router/LSA.o \
    $O/src/inet/networklayer/ospfv2/router/NetworkLSA.o \
    $O/src/inet/networklayer/ospfv2/router/OSPFArea.o \
    $O/src/inet/networklayer/ospfv2/router/OSPFRouter.o \
    $O/src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.o \
    $O/src/inet/networklayer/ospfv2/router/RouterLSA.o \
    $O/src/inet/networklayer/ospfv2/router/SummaryLSA.o \
    $O/src/inet/networklayer/routing/aodv/AODVRouteData.o \
    $O/src/inet/networklayer/routing/aodv/AODVRouting.o \
    $O/src/inet/networklayer/routing/dymo/DYMORouteData.o \
    $O/src/inet/networklayer/routing/dymo/xDYMO.o \
    $O/src/inet/networklayer/routing/gpsr/GPSR.o \
    $O/src/inet/networklayer/routing/gpsr/PositionTable.o \
    $O/src/inet/networklayer/routing/rip/RIPRouting.o \
    $O/src/inet/networklayer/rsvp_te/RSVP.o \
    $O/src/inet/networklayer/rsvp_te/SimpleClassifier.o \
    $O/src/inet/networklayer/rsvp_te/Utils.o \
    $O/src/inet/networklayer/ted/LinkStateRouting.o \
    $O/src/inet/networklayer/ted/TED.o \
    $O/src/inet/networklayer/xmipv6/BindingCache.o \
    $O/src/inet/networklayer/xmipv6/BindingUpdateList.o \
    $O/src/inet/networklayer/xmipv6/MobilityHeader.o \
    $O/src/inet/networklayer/xmipv6/xMIPv6.o \
    $O/src/inet/status/NodeStatus.o \
    $O/src/inet/transport/contract/SCTPSocket.o \
    $O/src/inet/transport/contract/TCPSocket.o \
    $O/src/inet/transport/contract/TCPSocketMap.o \
    $O/src/inet/transport/contract/UDPSocket.o \
    $O/src/inet/transport/rtp/reports.o \
    $O/src/inet/transport/rtp/RTCP.o \
    $O/src/inet/transport/rtp/RTCPPacket.o \
    $O/src/inet/transport/rtp/RTP.o \
    $O/src/inet/transport/rtp/RTPInnerPacket.o \
    $O/src/inet/transport/rtp/RTPPacket.o \
    $O/src/inet/transport/rtp/RTPParticipantInfo.o \
    $O/src/inet/transport/rtp/RTPPayloadReceiver.o \
    $O/src/inet/transport/rtp/RTPPayloadSender.o \
    $O/src/inet/transport/rtp/RTPProfile.o \
    $O/src/inet/transport/rtp/RTPReceiverInfo.o \
    $O/src/inet/transport/rtp/RTPSenderInfo.o \
    $O/src/inet/transport/rtp/sdes.o \
    $O/src/inet/transport/rtp/profiles/avprofile/RTPAVProfile.o \
    $O/src/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o \
    $O/src/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o \
    $O/src/inet/transport/sctp/SCTP.o \
    $O/src/inet/transport/sctp/SCTPAlg.o \
    $O/src/inet/transport/sctp/SCTPAssociationAddIP.o \
    $O/src/inet/transport/sctp/SCTPAssociationBase.o \
    $O/src/inet/transport/sctp/SCTPAssociationEventProc.o \
    $O/src/inet/transport/sctp/SCTPAssociationRcvMessage.o \
    $O/src/inet/transport/sctp/SCTPAssociationSendAll.o \
    $O/src/inet/transport/sctp/SCTPAssociationStreamReset.o \
    $O/src/inet/transport/sctp/SCTPAssociationUtil.o \
    $O/src/inet/transport/sctp/SCTPCCFunctions.o \
    $O/src/inet/transport/sctp/SCTPGapList.o \
    $O/src/inet/transport/sctp/SCTPMessage.o \
    $O/src/inet/transport/sctp/SCTPNatHook.o \
    $O/src/inet/transport/sctp/SCTPNatTable.o \
    $O/src/inet/transport/sctp/SCTPQueue.o \
    $O/src/inet/transport/sctp/SCTPReceiveStream.o \
    $O/src/inet/transport/sctp/SCTPSendStream.o \
    $O/src/inet/transport/sctp/SCTPSSFunctions.o \
    $O/src/inet/transport/tcp/TCP.o \
    $O/src/inet/transport/tcp/TCPConnectionBase.o \
    $O/src/inet/transport/tcp/TCPConnectionEventProc.o \
    $O/src/inet/transport/tcp/TCPConnectionRcvSegment.o \
    $O/src/inet/transport/tcp/TCPConnectionSackUtil.o \
    $O/src/inet/transport/tcp/TCPConnectionUtil.o \
    $O/src/inet/transport/tcp/TCPSACKRexmitQueue.o \
    $O/src/inet/transport/tcp/flavours/DumbTCP.o \
    $O/src/inet/transport/tcp/flavours/TCPBaseAlg.o \
    $O/src/inet/transport/tcp/flavours/TCPNewReno.o \
    $O/src/inet/transport/tcp/flavours/TCPNoCongestionControl.o \
    $O/src/inet/transport/tcp/flavours/TCPReno.o \
    $O/src/inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.o \
    $O/src/inet/transport/tcp/flavours/TCPTahoe.o \
    $O/src/inet/transport/tcp/flavours/TCPTahoeRenoFamily.o \
    $O/src/inet/transport/tcp/flavours/TCPVegas.o \
    $O/src/inet/transport/tcp/flavours/TCPWestwood.o \
    $O/src/inet/transport/tcp/queues/TCPByteStreamRcvQueue.o \
    $O/src/inet/transport/tcp/queues/TCPByteStreamSendQueue.o \
    $O/src/inet/transport/tcp/queues/TCPMsgBasedRcvQueue.o \
    $O/src/inet/transport/tcp/queues/TCPMsgBasedSendQueue.o \
    $O/src/inet/transport/tcp/queues/TCPVirtualDataRcvQueue.o \
    $O/src/inet/transport/tcp/queues/TCPVirtualDataSendQueue.o \
    $O/src/inet/transport/tcp_common/TCPSegment.o \
    $O/src/inet/transport/tcp_common/TCPSpoof.o \
    $O/src/inet/transport/tcp_lwip/LwipTcpLayer.o \
    $O/src/inet/transport/tcp_lwip/TcpLwipConnection.o \
    $O/src/inet/transport/tcp_lwip/TCP_lwIP.o \
    $O/src/inet/transport/tcp_lwip/lwip/core/memp.o \
    $O/src/inet/transport/tcp_lwip/lwip/core/pbuf.o \
    $O/src/inet/transport/tcp_lwip/lwip/core/tcp.o \
    $O/src/inet/transport/tcp_lwip/lwip/core/tcp_in.o \
    $O/src/inet/transport/tcp_lwip/lwip/core/tcp_out.o \
    $O/src/inet/transport/tcp_lwip/queues/TcpLwipByteStreamQueues.o \
    $O/src/inet/transport/tcp_lwip/queues/TcpLwipMsgBasedQueues.o \
    $O/src/inet/transport/tcp_lwip/queues/TcpLwipVirtualDataQueues.o \
    $O/src/inet/transport/tcp_nsc/TCP_NSC.o \
    $O/src/inet/transport/tcp_nsc/TCP_NSC_Connection.o \
    $O/src/inet/transport/tcp_nsc/queues/TCP_NSC_ByteStreamQueues.o \
    $O/src/inet/transport/tcp_nsc/queues/TCP_NSC_VirtualDataQueues.o \
    $O/src/inet/transport/udp/UDP.o \
    $O/src/inet/util/common.o \
    $O/src/inet/util/Delayer.o \
    $O/src/inet/util/int128.o \
    $O/src/inet/util/Macho.o \
    $O/src/inet/util/MessageChecker.o \
    $O/src/inet/util/NetAnimTrace.o \
    $O/src/inet/util/opp_utils.o \
    $O/src/inet/util/OrdinalBasedDropper.o \
    $O/src/inet/util/OrdinalBasedDuplicator.o \
    $O/src/inet/util/PacketDump.o \
    $O/src/inet/util/PatternMatcher.o \
    $O/src/inet/util/PcapDump.o \
    $O/src/inet/util/PcapRecorder.o \
    $O/src/inet/util/TCPDump.o \
    $O/src/inet/util/ThruputMeter.o \
    $O/src/inet/util/ThruputMeteringChannel.o \
    $O/src/inet/util/XMLUtils.o \
    $O/src/inet/util/headerserializers/TCPIPchecksum.o \
    $O/src/inet/util/headerserializers/ipv4/ICMPSerializer.o \
    $O/src/inet/util/headerserializers/ipv4/IGMPSerializer.o \
    $O/src/inet/util/headerserializers/ipv4/IPv4Serializer.o \
    $O/src/inet/util/headerserializers/ipv6/IPv6Serializer.o \
    $O/src/inet/util/headerserializers/sctp/SCTPSerializer.o \
    $O/src/inet/util/headerserializers/tcp/TCPSerializer.o \
    $O/src/inet/util/headerserializers/udp/UDPSerializer.o \
    $O/src/inet/util/messageprinters/InetPacketBytesPrinter.o \
    $O/src/inet/util/messageprinters/InetPacketPrinter.o \
    $O/src/inet/util/messageprinters/InetPacketPrinter2.o \
    $O/src/inet/world/annotations/AnnotationDummy.o \
    $O/src/inet/world/annotations/AnnotationManager.o \
    $O/src/inet/world/httptools/HttpController.o \
    $O/src/inet/world/obstacles/Obstacle.o \
    $O/src/inet/world/obstacles/ObstacleControl.o \
    $O/src/inet/world/radio/ChannelAccess.o \
    $O/src/inet/world/radio/ChannelControl.o \
    $O/src/inet/world/radio/IdealChannelModel.o \
    $O/src/inet/world/radio/IdealChannelModelAccess.o \
    $O/src/inet/world/scenario/ScenarioManager.o \
    $O/src/inet/world/traci/TraCIScenarioManager.o \
    $O/src/inet/world/traci/TraCIScenarioManagerLaunchd.o \
    $O/src/veins/base/connectionManager/BaseConnectionManager.o \
    $O/src/veins/base/connectionManager/ChannelAccess.o \
    $O/src/veins/base/connectionManager/ConnectionManager.o \
    $O/src/veins/base/connectionManager/NicEntryDebug.o \
    $O/src/veins/base/connectionManager/NicEntryDirect.o \
    $O/src/veins/base/modules/BaseApplLayer.o \
    $O/src/veins/base/modules/BaseBattery.o \
    $O/src/veins/base/modules/BaseLayer.o \
    $O/src/veins/base/modules/BaseMacLayer.o \
    $O/src/veins/base/modules/BaseMobility.o \
    $O/src/veins/base/modules/BaseModule.o \
    $O/src/veins/base/modules/BaseWorldUtility.o \
    $O/src/veins/base/modules/BatteryAccess.o \
    $O/src/veins/base/phyLayer/BaseDecider.o \
    $O/src/veins/base/phyLayer/BasePhyLayer.o \
    $O/src/veins/base/phyLayer/ChannelInfo.o \
    $O/src/veins/base/phyLayer/ChannelState.o \
    $O/src/veins/base/phyLayer/Decider.o \
    $O/src/veins/base/phyLayer/MappingBase.o \
    $O/src/veins/base/phyLayer/MappingUtils.o \
    $O/src/veins/base/phyLayer/PhyUtils.o \
    $O/src/veins/base/phyLayer/Signal.o \
    $O/src/veins/base/utils/asserts.o \
    $O/src/veins/base/utils/Coord.o \
    $O/src/veins/base/utils/NetwToMacControlInfo.o \
    $O/src/veins/base/utils/SimpleAddress.o \
    $O/src/veins/base/utils/winsupport.o \
    $O/src/veins/modules/analogueModel/BreakpointPathlossModel.o \
    $O/src/veins/modules/analogueModel/JakesFading.o \
    $O/src/veins/modules/analogueModel/LogNormalShadowing.o \
    $O/src/veins/modules/analogueModel/PERModel.o \
    $O/src/veins/modules/analogueModel/SimpleObstacleShadowing.o \
    $O/src/veins/modules/analogueModel/SimplePathlossModel.o \
    $O/src/veins/modules/analogueModel/TwoRayInterferenceModel.o \
    $O/src/veins/modules/application/ieee80211p/BaseWaveApplLayer.o \
    $O/src/veins/modules/application/traci/TraCIDemo11p.o \
    $O/src/veins/modules/application/traci/TraCIDemoRSU11p.o \
    $O/src/veins/modules/application/traci/TraCITestApp.o \
    $O/src/veins/modules/mac/ieee80211p/Mac1609_4.o \
    $O/src/veins/modules/mobility/traci/TraCIBuffer.o \
    $O/src/veins/modules/mobility/traci/TraCIColor.o \
    $O/src/veins/modules/mobility/traci/TraCICommandInterface.o \
    $O/src/veins/modules/mobility/traci/TraCIConnection.o \
    $O/src/veins/modules/mobility/traci/TraCIMobility.o \
    $O/src/veins/modules/mobility/traci/TraCIScenarioManager.o \
    $O/src/veins/modules/mobility/traci/TraCIScenarioManagerInet.o \
    $O/src/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.o \
    $O/src/veins/modules/mobility/traci/TraCIScreenRecorder.o \
    $O/src/veins/modules/obstacle/Obstacle.o \
    $O/src/veins/modules/obstacle/ObstacleControl.o \
    $O/src/veins/modules/phy/Decider80211p.o \
    $O/src/veins/modules/phy/NistErrorRate.o \
    $O/src/veins/modules/phy/PhyLayer80211p.o \
    $O/src/veins/modules/phy/SNRThresholdDecider.o \
    $O/src/veins/modules/world/annotations/AnnotationDummy.o \
    $O/src/veins/modules/world/annotations/AnnotationManager.o \
    $O/src/inet/applications/dhcp/DHCPMessage_m.o \
    $O/src/inet/applications/ethernet/EtherApp_m.o \
    $O/src/inet/applications/httptools/HttpEventMessages_m.o \
    $O/src/inet/applications/httptools/HttpMessages_m.o \
    $O/src/inet/applications/netperfmeter/NetPerfMeter_m.o \
    $O/src/inet/applications/pingapp/PingPayload_m.o \
    $O/src/inet/applications/tcpapp/GenericAppMsg_m.o \
    $O/src/inet/applications/voip/SimpleVoIPPacket_m.o \
    $O/src/inet/applications/voipstream/VoIPStreamPacket_m.o \
    $O/src/inet/base/ByteArray_m.o \
    $O/src/inet/base/ByteArrayMessage_m.o \
    $O/src/inet/linklayer/contract/Ieee802Ctrl_m.o \
    $O/src/inet/linklayer/contract/PhyControlInfo_m.o \
    $O/src/inet/linklayer/ethernet/EtherFrame_m.o \
    $O/src/inet/linklayer/ext/ExtFrame_m.o \
    $O/src/inet/linklayer/idealwireless/IdealWirelessFrame_m.o \
    $O/src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.o \
    $O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o \
    $O/src/inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o \
    $O/src/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.o \
    $O/src/inet/linklayer/ppp/PPPFrame_m.o \
    $O/src/inet/linklayer/radio/AirFrame_m.o \
    $O/src/inet/linklayer/radio/IdealAirFrame_m.o \
    $O/src/inet/linklayer/radio/Radio80211aControlInfo_m.o \
    $O/src/inet/networklayer/arp/ARPPacket_m.o \
    $O/src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.o \
    $O/src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.o \
    $O/src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.o \
    $O/src/inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.o \
    $O/src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.o \
    $O/src/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o \
    $O/src/inet/networklayer/contract/IPProtocolId_m.o \
    $O/src/inet/networklayer/contract/IPv4ControlInfo_m.o \
    $O/src/inet/networklayer/contract/IPv6ControlInfo_m.o \
    $O/src/inet/networklayer/diffserv/DSCP_m.o \
    $O/src/inet/networklayer/icmpv6/ICMPv6Message_m.o \
    $O/src/inet/networklayer/icmpv6/IPv6NDMessage_m.o \
    $O/src/inet/networklayer/ipv4/ICMPMessage_m.o \
    $O/src/inet/networklayer/ipv4/IGMPMessage_m.o \
    $O/src/inet/networklayer/ipv4/IPv4Datagram_m.o \
    $O/src/inet/networklayer/ipv6/IPv6Datagram_m.o \
    $O/src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.o \
    $O/src/inet/networklayer/ldp/LDPPacket_m.o \
    $O/src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.o \
    $O/src/inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.o \
    $O/src/inet/networklayer/manetrouting/base/ControlManetRouting_m.o \
    $O/src/inet/networklayer/manetrouting/base/MeshControlInfo_m.o \
    $O/src/inet/networklayer/manetrouting/batman/BatmanMsg_m.o \
    $O/src/inet/networklayer/manetrouting/dsdv/DSDVhello_m.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o \
    $O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o \
    $O/src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.o \
    $O/src/inet/networklayer/ospfv2/OSPFPacket_m.o \
    $O/src/inet/networklayer/routing/aodv/AODVControlPackets_m.o \
    $O/src/inet/networklayer/routing/dymo/DYMO_m.o \
    $O/src/inet/networklayer/routing/gpsr/GPSR_m.o \
    $O/src/inet/networklayer/routing/rip/RIPPacket_m.o \
    $O/src/inet/networklayer/rsvp_te/IntServ_m.o \
    $O/src/inet/networklayer/rsvp_te/RSVPHello_m.o \
    $O/src/inet/networklayer/rsvp_te/RSVPPacket_m.o \
    $O/src/inet/networklayer/rsvp_te/RSVPPathMsg_m.o \
    $O/src/inet/networklayer/rsvp_te/RSVPResvMsg_m.o \
    $O/src/inet/networklayer/rsvp_te/SignallingMsg_m.o \
    $O/src/inet/networklayer/ted/LinkStatePacket_m.o \
    $O/src/inet/networklayer/ted/TED_m.o \
    $O/src/inet/networklayer/xmipv6/MobilityHeader_m.o \
    $O/src/inet/transport/contract/SCTPCommand_m.o \
    $O/src/inet/transport/contract/TCPCommand_m.o \
    $O/src/inet/transport/contract/UDPControlInfo_m.o \
    $O/src/inet/transport/rtp/reports_m.o \
    $O/src/inet/transport/rtp/RTCPPacket1_m.o \
    $O/src/inet/transport/rtp/RTCPPacket2_m.o \
    $O/src/inet/transport/rtp/RTCPPacket3_m.o \
    $O/src/inet/transport/rtp/RTPInnerPacket_m.o \
    $O/src/inet/transport/rtp/RTPInterfacePacket_m.o \
    $O/src/inet/transport/rtp/RTPPacket_m.o \
    $O/src/inet/transport/rtp/RTPParticipantInfo_m.o \
    $O/src/inet/transport/rtp/RTPSenderControlMessage_m.o \
    $O/src/inet/transport/rtp/RTPSenderStatusMessage_m.o \
    $O/src/inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o \
    $O/src/inet/transport/sctp/SCTPMessage_m.o \
    $O/src/inet/transport/tcp_common/TCPSegment_m.o \
    $O/src/inet/transport/udp/UDPPacket_m.o \
    $O/src/veins/base/messages/AirFrame_m.o \
    $O/src/veins/base/messages/BorderMsg_m.o \
    $O/src/veins/base/messages/ChannelSenseRequest_m.o \
    $O/src/veins/base/messages/MacPkt_m.o \
    $O/src/veins/modules/messages/AirFrame11p_m.o \
    $O/src/veins/modules/messages/Mac80211Pkt_m.o \
    $O/src/veins/modules/messages/PhyControlMessage_m.o \
    $O/src/veins/modules/messages/WaveShortMessage_m.o

# Message files
MSGFILES = \
    src/inet/applications/dhcp/DHCPMessage.msg \
    src/inet/applications/ethernet/EtherApp.msg \
    src/inet/applications/httptools/HttpEventMessages.msg \
    src/inet/applications/httptools/HttpMessages.msg \
    src/inet/applications/netperfmeter/NetPerfMeter.msg \
    src/inet/applications/pingapp/PingPayload.msg \
    src/inet/applications/tcpapp/GenericAppMsg.msg \
    src/inet/applications/voip/SimpleVoIPPacket.msg \
    src/inet/applications/voipstream/VoIPStreamPacket.msg \
    src/inet/base/ByteArray.msg \
    src/inet/base/ByteArrayMessage.msg \
    src/inet/linklayer/contract/Ieee802Ctrl.msg \
    src/inet/linklayer/contract/PhyControlInfo.msg \
    src/inet/linklayer/ethernet/EtherFrame.msg \
    src/inet/linklayer/ext/ExtFrame.msg \
    src/inet/linklayer/idealwireless/IdealWirelessFrame.msg \
    src/inet/linklayer/ieee80211/mac/Ieee80211Frame.msg \
    src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames.msg \
    src/inet/linklayer/ieee80211/mgmt/Ieee80211Primitives.msg \
    src/inet/linklayer/ieee8021d/common/Ieee8021dBPDU.msg \
    src/inet/linklayer/ppp/PPPFrame.msg \
    src/inet/linklayer/radio/AirFrame.msg \
    src/inet/linklayer/radio/IdealAirFrame.msg \
    src/inet/linklayer/radio/Radio80211aControlInfo.msg \
    src/inet/networklayer/arp/ARPPacket.msg \
    src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment.msg \
    src/inet/networklayer/bgpv4/BGPMessage/BGPHeader.msg \
    src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive.msg \
    src/inet/networklayer/bgpv4/BGPMessage/BGPOpen.msg \
    src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate.msg \
    src/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes.msg \
    src/inet/networklayer/contract/IPProtocolId.msg \
    src/inet/networklayer/contract/IPv4ControlInfo.msg \
    src/inet/networklayer/contract/IPv6ControlInfo.msg \
    src/inet/networklayer/diffserv/DSCP.msg \
    src/inet/networklayer/icmpv6/ICMPv6Message.msg \
    src/inet/networklayer/icmpv6/IPv6NDMessage.msg \
    src/inet/networklayer/ipv4/ICMPMessage.msg \
    src/inet/networklayer/ipv4/IGMPMessage.msg \
    src/inet/networklayer/ipv4/IPv4Datagram.msg \
    src/inet/networklayer/ipv6/IPv6Datagram.msg \
    src/inet/networklayer/ipv6/IPv6ExtensionHeaders.msg \
    src/inet/networklayer/ldp/LDPPacket.msg \
    src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.msg \
    src/inet/networklayer/manetrouting/base/ControlInfoBreakLink.msg \
    src/inet/networklayer/manetrouting/base/ControlManetRouting.msg \
    src/inet/networklayer/manetrouting/base/MeshControlInfo.msg \
    src/inet/networklayer/manetrouting/batman/BatmanMsg.msg \
    src/inet/networklayer/manetrouting/dsdv/DSDVhello.msg \
    src/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet.msg \
    src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage.msg \
    src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR.msg \
    src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM.msg \
    src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP.msg \
    src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ.msg \
    src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout.msg \
    src/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR.msg \
    src/inet/networklayer/manetrouting/olsr/OLSRpkt.msg \
    src/inet/networklayer/ospfv2/OSPFPacket.msg \
    src/inet/networklayer/routing/aodv/AODVControlPackets.msg \
    src/inet/networklayer/routing/dymo/DYMO.msg \
    src/inet/networklayer/routing/gpsr/GPSR.msg \
    src/inet/networklayer/routing/rip/RIPPacket.msg \
    src/inet/networklayer/rsvp_te/IntServ.msg \
    src/inet/networklayer/rsvp_te/RSVPHello.msg \
    src/inet/networklayer/rsvp_te/RSVPPacket.msg \
    src/inet/networklayer/rsvp_te/RSVPPathMsg.msg \
    src/inet/networklayer/rsvp_te/RSVPResvMsg.msg \
    src/inet/networklayer/rsvp_te/SignallingMsg.msg \
    src/inet/networklayer/ted/LinkStatePacket.msg \
    src/inet/networklayer/ted/TED.msg \
    src/inet/networklayer/xmipv6/MobilityHeader.msg \
    src/inet/transport/contract/SCTPCommand.msg \
    src/inet/transport/contract/TCPCommand.msg \
    src/inet/transport/contract/UDPControlInfo.msg \
    src/inet/transport/rtp/reports.msg \
    src/inet/transport/rtp/RTCPPacket1.msg \
    src/inet/transport/rtp/RTCPPacket2.msg \
    src/inet/transport/rtp/RTCPPacket3.msg \
    src/inet/transport/rtp/RTPInnerPacket.msg \
    src/inet/transport/rtp/RTPInterfacePacket.msg \
    src/inet/transport/rtp/RTPPacket.msg \
    src/inet/transport/rtp/RTPParticipantInfo.msg \
    src/inet/transport/rtp/RTPSenderControlMessage.msg \
    src/inet/transport/rtp/RTPSenderStatusMessage.msg \
    src/inet/transport/rtp/profiles/avprofile/RTPMpegPacket.msg \
    src/inet/transport/sctp/SCTPMessage.msg \
    src/inet/transport/tcp_common/TCPSegment.msg \
    src/inet/transport/udp/UDPPacket.msg \
    src/veins/base/messages/AirFrame.msg \
    src/veins/base/messages/BorderMsg.msg \
    src/veins/base/messages/ChannelSenseRequest.msg \
    src/veins/base/messages/MacPkt.msg \
    src/veins/modules/messages/AirFrame11p.msg \
    src/veins/modules/messages/Mac80211Pkt.msg \
    src/veins/modules/messages/PhyControlMessage.msg \
    src/veins/modules/messages/WaveShortMessage.msg

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

COPTS = $(CFLAGS)  $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
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
	$(Q)-rm -f etc/*_m.cc etc/*_m.h
	$(Q)-rm -f etc/plugins/*_m.cc etc/plugins/*_m.h
	$(Q)-rm -f simulations/*_m.cc simulations/*_m.h
	$(Q)-rm -f simulations/_maps/*_m.cc simulations/_maps/*_m.h
	$(Q)-rm -f simulations/_maps/downtownorlando/*_m.cc simulations/_maps/downtownorlando/*_m.h
	$(Q)-rm -f simulations/_maps/i95highway/*_m.cc simulations/_maps/i95highway/*_m.h
	$(Q)-rm -f simulations/_maps/simple/*_m.cc simulations/_maps/simple/*_m.h
	$(Q)-rm -f simulations/_nodes/*_m.cc simulations/_nodes/*_m.h
	$(Q)-rm -f simulations/aodv/*_m.cc simulations/aodv/*_m.h
	$(Q)-rm -f simulations/bittorrent/*_m.cc simulations/bittorrent/*_m.h
	$(Q)-rm -f simulations/dsr/*_m.cc simulations/dsr/*_m.h
	$(Q)-rm -f simulations/gpsr/*_m.cc simulations/gpsr/*_m.h
	$(Q)-rm -f simulations/olsr/*_m.cc simulations/olsr/*_m.h
	$(Q)-rm -f simulations/veins/*_m.cc simulations/veins/*_m.h
	$(Q)-rm -f simulations/veins/results/*_m.cc simulations/veins/results/*_m.h
	$(Q)-rm -f src/*_m.cc src/*_m.h
	$(Q)-rm -f src/custom/*_m.cc src/custom/*_m.h
	$(Q)-rm -f src/custom/aodvvanet/*_m.cc src/custom/aodvvanet/*_m.h
	$(Q)-rm -f src/custom/bitcar/*_m.cc src/custom/bitcar/*_m.h
	$(Q)-rm -f src/custom/rbvtp/*_m.cc src/custom/rbvtp/*_m.h
	$(Q)-rm -f src/custom/rbvtr/*_m.cc src/custom/rbvtr/*_m.h
	$(Q)-rm -f src/inet/*_m.cc src/inet/*_m.h
	$(Q)-rm -f src/inet/applications/*_m.cc src/inet/applications/*_m.h
	$(Q)-rm -f src/inet/applications/common/*_m.cc src/inet/applications/common/*_m.h
	$(Q)-rm -f src/inet/applications/dhcp/*_m.cc src/inet/applications/dhcp/*_m.h
	$(Q)-rm -f src/inet/applications/ethernet/*_m.cc src/inet/applications/ethernet/*_m.h
	$(Q)-rm -f src/inet/applications/generic/*_m.cc src/inet/applications/generic/*_m.h
	$(Q)-rm -f src/inet/applications/httptools/*_m.cc src/inet/applications/httptools/*_m.h
	$(Q)-rm -f src/inet/applications/netperfmeter/*_m.cc src/inet/applications/netperfmeter/*_m.h
	$(Q)-rm -f src/inet/applications/pingapp/*_m.cc src/inet/applications/pingapp/*_m.h
	$(Q)-rm -f src/inet/applications/rtpapp/*_m.cc src/inet/applications/rtpapp/*_m.h
	$(Q)-rm -f src/inet/applications/sctpapp/*_m.cc src/inet/applications/sctpapp/*_m.h
	$(Q)-rm -f src/inet/applications/tcpapp/*_m.cc src/inet/applications/tcpapp/*_m.h
	$(Q)-rm -f src/inet/applications/udpapp/*_m.cc src/inet/applications/udpapp/*_m.h
	$(Q)-rm -f src/inet/applications/voip/*_m.cc src/inet/applications/voip/*_m.h
	$(Q)-rm -f src/inet/applications/voipstream/*_m.cc src/inet/applications/voipstream/*_m.h
	$(Q)-rm -f src/inet/base/*_m.cc src/inet/base/*_m.h
	$(Q)-rm -f src/inet/battery/*_m.cc src/inet/battery/*_m.h
	$(Q)-rm -f src/inet/battery/models/*_m.cc src/inet/battery/models/*_m.h
	$(Q)-rm -f src/inet/linklayer/*_m.cc src/inet/linklayer/*_m.h
	$(Q)-rm -f src/inet/linklayer/common/*_m.cc src/inet/linklayer/common/*_m.h
	$(Q)-rm -f src/inet/linklayer/configurator/*_m.cc src/inet/linklayer/configurator/*_m.h
	$(Q)-rm -f src/inet/linklayer/contract/*_m.cc src/inet/linklayer/contract/*_m.h
	$(Q)-rm -f src/inet/linklayer/ethernet/*_m.cc src/inet/linklayer/ethernet/*_m.h
	$(Q)-rm -f src/inet/linklayer/ethernet/switch/*_m.cc src/inet/linklayer/ethernet/switch/*_m.h
	$(Q)-rm -f src/inet/linklayer/ext/*_m.cc src/inet/linklayer/ext/*_m.h
	$(Q)-rm -f src/inet/linklayer/idealwireless/*_m.cc src/inet/linklayer/idealwireless/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee80211/*_m.cc src/inet/linklayer/ieee80211/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee80211/mac/*_m.cc src/inet/linklayer/ieee80211/mac/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee80211/mgmt/*_m.cc src/inet/linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee80211/radio/*_m.cc src/inet/linklayer/ieee80211/radio/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee80211/radio/errormodel/*_m.cc src/inet/linklayer/ieee80211/radio/errormodel/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee8021d/*_m.cc src/inet/linklayer/ieee8021d/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee8021d/common/*_m.cc src/inet/linklayer/ieee8021d/common/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee8021d/relay/*_m.cc src/inet/linklayer/ieee8021d/relay/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee8021d/rstp/*_m.cc src/inet/linklayer/ieee8021d/rstp/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee8021d/stp/*_m.cc src/inet/linklayer/ieee8021d/stp/*_m.h
	$(Q)-rm -f src/inet/linklayer/ieee8021d/tester/*_m.cc src/inet/linklayer/ieee8021d/tester/*_m.h
	$(Q)-rm -f src/inet/linklayer/loopback/*_m.cc src/inet/linklayer/loopback/*_m.h
	$(Q)-rm -f src/inet/linklayer/ppp/*_m.cc src/inet/linklayer/ppp/*_m.h
	$(Q)-rm -f src/inet/linklayer/queue/*_m.cc src/inet/linklayer/queue/*_m.h
	$(Q)-rm -f src/inet/linklayer/radio/*_m.cc src/inet/linklayer/radio/*_m.h
	$(Q)-rm -f src/inet/linklayer/radio/propagation/*_m.cc src/inet/linklayer/radio/propagation/*_m.h
	$(Q)-rm -f src/inet/mobility/*_m.cc src/inet/mobility/*_m.h
	$(Q)-rm -f src/inet/mobility/common/*_m.cc src/inet/mobility/common/*_m.h
	$(Q)-rm -f src/inet/mobility/contract/*_m.cc src/inet/mobility/contract/*_m.h
	$(Q)-rm -f src/inet/mobility/group/*_m.cc src/inet/mobility/group/*_m.h
	$(Q)-rm -f src/inet/mobility/single/*_m.cc src/inet/mobility/single/*_m.h
	$(Q)-rm -f src/inet/mobility/static/*_m.cc src/inet/mobility/static/*_m.h
	$(Q)-rm -f src/inet/networklayer/*_m.cc src/inet/networklayer/*_m.h
	$(Q)-rm -f src/inet/networklayer/arp/*_m.cc src/inet/networklayer/arp/*_m.h
	$(Q)-rm -f src/inet/networklayer/autorouting/*_m.cc src/inet/networklayer/autorouting/*_m.h
	$(Q)-rm -f src/inet/networklayer/autorouting/ipv4/*_m.cc src/inet/networklayer/autorouting/ipv4/*_m.h
	$(Q)-rm -f src/inet/networklayer/autorouting/ipv6/*_m.cc src/inet/networklayer/autorouting/ipv6/*_m.h
	$(Q)-rm -f src/inet/networklayer/bgpv4/*_m.cc src/inet/networklayer/bgpv4/*_m.h
	$(Q)-rm -f src/inet/networklayer/bgpv4/BGPMessage/*_m.cc src/inet/networklayer/bgpv4/BGPMessage/*_m.h
	$(Q)-rm -f src/inet/networklayer/common/*_m.cc src/inet/networklayer/common/*_m.h
	$(Q)-rm -f src/inet/networklayer/contract/*_m.cc src/inet/networklayer/contract/*_m.h
	$(Q)-rm -f src/inet/networklayer/diffserv/*_m.cc src/inet/networklayer/diffserv/*_m.h
	$(Q)-rm -f src/inet/networklayer/icmpv6/*_m.cc src/inet/networklayer/icmpv6/*_m.h
	$(Q)-rm -f src/inet/networklayer/internetcloud/*_m.cc src/inet/networklayer/internetcloud/*_m.h
	$(Q)-rm -f src/inet/networklayer/ipv4/*_m.cc src/inet/networklayer/ipv4/*_m.h
	$(Q)-rm -f src/inet/networklayer/ipv6/*_m.cc src/inet/networklayer/ipv6/*_m.h
	$(Q)-rm -f src/inet/networklayer/ipv6tunneling/*_m.cc src/inet/networklayer/ipv6tunneling/*_m.h
	$(Q)-rm -f src/inet/networklayer/ldp/*_m.cc src/inet/networklayer/ldp/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/*_m.cc src/inet/networklayer/manetrouting/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/aodv-uu/*_m.cc src/inet/networklayer/manetrouting/aodv-uu/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/*_m.cc src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/base/*_m.cc src/inet/networklayer/manetrouting/base/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/batman/*_m.cc src/inet/networklayer/manetrouting/batman/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/batman/batmand/*_m.cc src/inet/networklayer/manetrouting/batman/batmand/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/batman/batmand/orig/*_m.cc src/inet/networklayer/manetrouting/batman/batmand/orig/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/dsdv/*_m.cc src/inet/networklayer/manetrouting/dsdv/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/dsr/*_m.cc src/inet/networklayer/manetrouting/dsr/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/dsr/dsr-uu/*_m.cc src/inet/networklayer/manetrouting/dsr/dsr-uu/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/dymo/*_m.cc src/inet/networklayer/manetrouting/dymo/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/dymo/dymoum/*_m.cc src/inet/networklayer/manetrouting/dymo/dymoum/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/dymo_fau/*_m.cc src/inet/networklayer/manetrouting/dymo_fau/*_m.h
	$(Q)-rm -f src/inet/networklayer/manetrouting/olsr/*_m.cc src/inet/networklayer/manetrouting/olsr/*_m.h
	$(Q)-rm -f src/inet/networklayer/mpls/*_m.cc src/inet/networklayer/mpls/*_m.h
	$(Q)-rm -f src/inet/networklayer/ospfv2/*_m.cc src/inet/networklayer/ospfv2/*_m.h
	$(Q)-rm -f src/inet/networklayer/ospfv2/interface/*_m.cc src/inet/networklayer/ospfv2/interface/*_m.h
	$(Q)-rm -f src/inet/networklayer/ospfv2/messagehandler/*_m.cc src/inet/networklayer/ospfv2/messagehandler/*_m.h
	$(Q)-rm -f src/inet/networklayer/ospfv2/neighbor/*_m.cc src/inet/networklayer/ospfv2/neighbor/*_m.h
	$(Q)-rm -f src/inet/networklayer/ospfv2/router/*_m.cc src/inet/networklayer/ospfv2/router/*_m.h
	$(Q)-rm -f src/inet/networklayer/routing/*_m.cc src/inet/networklayer/routing/*_m.h
	$(Q)-rm -f src/inet/networklayer/routing/aodv/*_m.cc src/inet/networklayer/routing/aodv/*_m.h
	$(Q)-rm -f src/inet/networklayer/routing/dymo/*_m.cc src/inet/networklayer/routing/dymo/*_m.h
	$(Q)-rm -f src/inet/networklayer/routing/gpsr/*_m.cc src/inet/networklayer/routing/gpsr/*_m.h
	$(Q)-rm -f src/inet/networklayer/routing/rip/*_m.cc src/inet/networklayer/routing/rip/*_m.h
	$(Q)-rm -f src/inet/networklayer/rsvp_te/*_m.cc src/inet/networklayer/rsvp_te/*_m.h
	$(Q)-rm -f src/inet/networklayer/ted/*_m.cc src/inet/networklayer/ted/*_m.h
	$(Q)-rm -f src/inet/networklayer/xmipv6/*_m.cc src/inet/networklayer/xmipv6/*_m.h
	$(Q)-rm -f src/inet/nodes/*_m.cc src/inet/nodes/*_m.h
	$(Q)-rm -f src/inet/nodes/aodv/*_m.cc src/inet/nodes/aodv/*_m.h
	$(Q)-rm -f src/inet/nodes/bgp/*_m.cc src/inet/nodes/bgp/*_m.h
	$(Q)-rm -f src/inet/nodes/dymo/*_m.cc src/inet/nodes/dymo/*_m.h
	$(Q)-rm -f src/inet/nodes/ethernet/*_m.cc src/inet/nodes/ethernet/*_m.h
	$(Q)-rm -f src/inet/nodes/gpsr/*_m.cc src/inet/nodes/gpsr/*_m.h
	$(Q)-rm -f src/inet/nodes/httptools/*_m.cc src/inet/nodes/httptools/*_m.h
	$(Q)-rm -f src/inet/nodes/inet/*_m.cc src/inet/nodes/inet/*_m.h
	$(Q)-rm -f src/inet/nodes/internetcloud/*_m.cc src/inet/nodes/internetcloud/*_m.h
	$(Q)-rm -f src/inet/nodes/ipv6/*_m.cc src/inet/nodes/ipv6/*_m.h
	$(Q)-rm -f src/inet/nodes/mpls/*_m.cc src/inet/nodes/mpls/*_m.h
	$(Q)-rm -f src/inet/nodes/ospfv2/*_m.cc src/inet/nodes/ospfv2/*_m.h
	$(Q)-rm -f src/inet/nodes/rip/*_m.cc src/inet/nodes/rip/*_m.h
	$(Q)-rm -f src/inet/nodes/rtp/*_m.cc src/inet/nodes/rtp/*_m.h
	$(Q)-rm -f src/inet/nodes/wireless/*_m.cc src/inet/nodes/wireless/*_m.h
	$(Q)-rm -f src/inet/nodes/xmipv6/*_m.cc src/inet/nodes/xmipv6/*_m.h
	$(Q)-rm -f src/inet/status/*_m.cc src/inet/status/*_m.h
	$(Q)-rm -f src/inet/transport/*_m.cc src/inet/transport/*_m.h
	$(Q)-rm -f src/inet/transport/contract/*_m.cc src/inet/transport/contract/*_m.h
	$(Q)-rm -f src/inet/transport/rtp/*_m.cc src/inet/transport/rtp/*_m.h
	$(Q)-rm -f src/inet/transport/rtp/profiles/*_m.cc src/inet/transport/rtp/profiles/*_m.h
	$(Q)-rm -f src/inet/transport/rtp/profiles/avprofile/*_m.cc src/inet/transport/rtp/profiles/avprofile/*_m.h
	$(Q)-rm -f src/inet/transport/sctp/*_m.cc src/inet/transport/sctp/*_m.h
	$(Q)-rm -f src/inet/transport/tcp/*_m.cc src/inet/transport/tcp/*_m.h
	$(Q)-rm -f src/inet/transport/tcp/flavours/*_m.cc src/inet/transport/tcp/flavours/*_m.h
	$(Q)-rm -f src/inet/transport/tcp/queues/*_m.cc src/inet/transport/tcp/queues/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_common/*_m.cc src/inet/transport/tcp_common/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/*_m.cc src/inet/transport/tcp_lwip/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/lwip/*_m.cc src/inet/transport/tcp_lwip/lwip/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/lwip/core/*_m.cc src/inet/transport/tcp_lwip/lwip/core/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/lwip/include/*_m.cc src/inet/transport/tcp_lwip/lwip/include/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/lwip/include/arch/*_m.cc src/inet/transport/tcp_lwip/lwip/include/arch/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/lwip/include/ipv4/*_m.cc src/inet/transport/tcp_lwip/lwip/include/ipv4/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/*_m.cc src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/lwip/include/ipv6/*_m.cc src/inet/transport/tcp_lwip/lwip/include/ipv6/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/lwip/include/ipv6/lwip/*_m.cc src/inet/transport/tcp_lwip/lwip/include/ipv6/lwip/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/lwip/include/lwip/*_m.cc src/inet/transport/tcp_lwip/lwip/include/lwip/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/lwip/include/netif/*_m.cc src/inet/transport/tcp_lwip/lwip/include/netif/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_lwip/queues/*_m.cc src/inet/transport/tcp_lwip/queues/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_nsc/*_m.cc src/inet/transport/tcp_nsc/*_m.h
	$(Q)-rm -f src/inet/transport/tcp_nsc/queues/*_m.cc src/inet/transport/tcp_nsc/queues/*_m.h
	$(Q)-rm -f src/inet/transport/udp/*_m.cc src/inet/transport/udp/*_m.h
	$(Q)-rm -f src/inet/util/*_m.cc src/inet/util/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/*_m.cc src/inet/util/headerserializers/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/headers/*_m.cc src/inet/util/headerserializers/headers/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/ipv4/*_m.cc src/inet/util/headerserializers/ipv4/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/ipv4/headers/*_m.cc src/inet/util/headerserializers/ipv4/headers/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/ipv6/*_m.cc src/inet/util/headerserializers/ipv6/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/ipv6/headers/*_m.cc src/inet/util/headerserializers/ipv6/headers/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/sctp/*_m.cc src/inet/util/headerserializers/sctp/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/sctp/headers/*_m.cc src/inet/util/headerserializers/sctp/headers/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/tcp/*_m.cc src/inet/util/headerserializers/tcp/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/tcp/headers/*_m.cc src/inet/util/headerserializers/tcp/headers/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/udp/*_m.cc src/inet/util/headerserializers/udp/*_m.h
	$(Q)-rm -f src/inet/util/headerserializers/udp/headers/*_m.cc src/inet/util/headerserializers/udp/headers/*_m.h
	$(Q)-rm -f src/inet/util/messageprinters/*_m.cc src/inet/util/messageprinters/*_m.h
	$(Q)-rm -f src/inet/world/*_m.cc src/inet/world/*_m.h
	$(Q)-rm -f src/inet/world/annotations/*_m.cc src/inet/world/annotations/*_m.h
	$(Q)-rm -f src/inet/world/httptools/*_m.cc src/inet/world/httptools/*_m.h
	$(Q)-rm -f src/inet/world/obstacles/*_m.cc src/inet/world/obstacles/*_m.h
	$(Q)-rm -f src/inet/world/radio/*_m.cc src/inet/world/radio/*_m.h
	$(Q)-rm -f src/inet/world/scenario/*_m.cc src/inet/world/scenario/*_m.h
	$(Q)-rm -f src/inet/world/traci/*_m.cc src/inet/world/traci/*_m.h
	$(Q)-rm -f src/veins/*_m.cc src/veins/*_m.h
	$(Q)-rm -f src/veins/base/*_m.cc src/veins/base/*_m.h
	$(Q)-rm -f src/veins/base/connectionManager/*_m.cc src/veins/base/connectionManager/*_m.h
	$(Q)-rm -f src/veins/base/messages/*_m.cc src/veins/base/messages/*_m.h
	$(Q)-rm -f src/veins/base/modules/*_m.cc src/veins/base/modules/*_m.h
	$(Q)-rm -f src/veins/base/phyLayer/*_m.cc src/veins/base/phyLayer/*_m.h
	$(Q)-rm -f src/veins/base/utils/*_m.cc src/veins/base/utils/*_m.h
	$(Q)-rm -f src/veins/modules/*_m.cc src/veins/modules/*_m.h
	$(Q)-rm -f src/veins/modules/analogueModel/*_m.cc src/veins/modules/analogueModel/*_m.h
	$(Q)-rm -f src/veins/modules/application/*_m.cc src/veins/modules/application/*_m.h
	$(Q)-rm -f src/veins/modules/application/ieee80211p/*_m.cc src/veins/modules/application/ieee80211p/*_m.h
	$(Q)-rm -f src/veins/modules/application/traci/*_m.cc src/veins/modules/application/traci/*_m.h
	$(Q)-rm -f src/veins/modules/mac/*_m.cc src/veins/modules/mac/*_m.h
	$(Q)-rm -f src/veins/modules/mac/ieee80211p/*_m.cc src/veins/modules/mac/ieee80211p/*_m.h
	$(Q)-rm -f src/veins/modules/messages/*_m.cc src/veins/modules/messages/*_m.h
	$(Q)-rm -f src/veins/modules/mobility/*_m.cc src/veins/modules/mobility/*_m.h
	$(Q)-rm -f src/veins/modules/mobility/traci/*_m.cc src/veins/modules/mobility/traci/*_m.h
	$(Q)-rm -f src/veins/modules/nic/*_m.cc src/veins/modules/nic/*_m.h
	$(Q)-rm -f src/veins/modules/obstacle/*_m.cc src/veins/modules/obstacle/*_m.h
	$(Q)-rm -f src/veins/modules/phy/*_m.cc src/veins/modules/phy/*_m.h
	$(Q)-rm -f src/veins/modules/utility/*_m.cc src/veins/modules/utility/*_m.h
	$(Q)-rm -f src/veins/modules/world/*_m.cc src/veins/modules/world/*_m.h
	$(Q)-rm -f src/veins/modules/world/annotations/*_m.cc src/veins/modules/world/annotations/*_m.h
	$(Q)-rm -f src/veins/nodes/*_m.cc src/veins/nodes/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc etc/*.cc etc/plugins/*.cc simulations/*.cc simulations/_maps/*.cc simulations/_maps/downtownorlando/*.cc simulations/_maps/i95highway/*.cc simulations/_maps/simple/*.cc simulations/_nodes/*.cc simulations/aodv/*.cc simulations/bittorrent/*.cc simulations/dsr/*.cc simulations/gpsr/*.cc simulations/olsr/*.cc simulations/veins/*.cc simulations/veins/results/*.cc src/*.cc src/custom/*.cc src/custom/aodvvanet/*.cc src/custom/bitcar/*.cc src/custom/rbvtp/*.cc src/custom/rbvtr/*.cc src/inet/*.cc src/inet/applications/*.cc src/inet/applications/common/*.cc src/inet/applications/dhcp/*.cc src/inet/applications/ethernet/*.cc src/inet/applications/generic/*.cc src/inet/applications/httptools/*.cc src/inet/applications/netperfmeter/*.cc src/inet/applications/pingapp/*.cc src/inet/applications/rtpapp/*.cc src/inet/applications/sctpapp/*.cc src/inet/applications/tcpapp/*.cc src/inet/applications/udpapp/*.cc src/inet/applications/voip/*.cc src/inet/applications/voipstream/*.cc src/inet/base/*.cc src/inet/battery/*.cc src/inet/battery/models/*.cc src/inet/linklayer/*.cc src/inet/linklayer/common/*.cc src/inet/linklayer/configurator/*.cc src/inet/linklayer/contract/*.cc src/inet/linklayer/ethernet/*.cc src/inet/linklayer/ethernet/switch/*.cc src/inet/linklayer/ext/*.cc src/inet/linklayer/idealwireless/*.cc src/inet/linklayer/ieee80211/*.cc src/inet/linklayer/ieee80211/mac/*.cc src/inet/linklayer/ieee80211/mgmt/*.cc src/inet/linklayer/ieee80211/radio/*.cc src/inet/linklayer/ieee80211/radio/errormodel/*.cc src/inet/linklayer/ieee8021d/*.cc src/inet/linklayer/ieee8021d/common/*.cc src/inet/linklayer/ieee8021d/relay/*.cc src/inet/linklayer/ieee8021d/rstp/*.cc src/inet/linklayer/ieee8021d/stp/*.cc src/inet/linklayer/ieee8021d/tester/*.cc src/inet/linklayer/loopback/*.cc src/inet/linklayer/ppp/*.cc src/inet/linklayer/queue/*.cc src/inet/linklayer/radio/*.cc src/inet/linklayer/radio/propagation/*.cc src/inet/mobility/*.cc src/inet/mobility/common/*.cc src/inet/mobility/contract/*.cc src/inet/mobility/group/*.cc src/inet/mobility/single/*.cc src/inet/mobility/static/*.cc src/inet/networklayer/*.cc src/inet/networklayer/arp/*.cc src/inet/networklayer/autorouting/*.cc src/inet/networklayer/autorouting/ipv4/*.cc src/inet/networklayer/autorouting/ipv6/*.cc src/inet/networklayer/bgpv4/*.cc src/inet/networklayer/bgpv4/BGPMessage/*.cc src/inet/networklayer/common/*.cc src/inet/networklayer/contract/*.cc src/inet/networklayer/diffserv/*.cc src/inet/networklayer/icmpv6/*.cc src/inet/networklayer/internetcloud/*.cc src/inet/networklayer/ipv4/*.cc src/inet/networklayer/ipv6/*.cc src/inet/networklayer/ipv6tunneling/*.cc src/inet/networklayer/ldp/*.cc src/inet/networklayer/manetrouting/*.cc src/inet/networklayer/manetrouting/aodv-uu/*.cc src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/*.cc src/inet/networklayer/manetrouting/base/*.cc src/inet/networklayer/manetrouting/batman/*.cc src/inet/networklayer/manetrouting/batman/batmand/*.cc src/inet/networklayer/manetrouting/batman/batmand/orig/*.cc src/inet/networklayer/manetrouting/dsdv/*.cc src/inet/networklayer/manetrouting/dsr/*.cc src/inet/networklayer/manetrouting/dsr/dsr-uu/*.cc src/inet/networklayer/manetrouting/dymo/*.cc src/inet/networklayer/manetrouting/dymo/dymoum/*.cc src/inet/networklayer/manetrouting/dymo_fau/*.cc src/inet/networklayer/manetrouting/olsr/*.cc src/inet/networklayer/mpls/*.cc src/inet/networklayer/ospfv2/*.cc src/inet/networklayer/ospfv2/interface/*.cc src/inet/networklayer/ospfv2/messagehandler/*.cc src/inet/networklayer/ospfv2/neighbor/*.cc src/inet/networklayer/ospfv2/router/*.cc src/inet/networklayer/routing/*.cc src/inet/networklayer/routing/aodv/*.cc src/inet/networklayer/routing/dymo/*.cc src/inet/networklayer/routing/gpsr/*.cc src/inet/networklayer/routing/rip/*.cc src/inet/networklayer/rsvp_te/*.cc src/inet/networklayer/ted/*.cc src/inet/networklayer/xmipv6/*.cc src/inet/nodes/*.cc src/inet/nodes/aodv/*.cc src/inet/nodes/bgp/*.cc src/inet/nodes/dymo/*.cc src/inet/nodes/ethernet/*.cc src/inet/nodes/gpsr/*.cc src/inet/nodes/httptools/*.cc src/inet/nodes/inet/*.cc src/inet/nodes/internetcloud/*.cc src/inet/nodes/ipv6/*.cc src/inet/nodes/mpls/*.cc src/inet/nodes/ospfv2/*.cc src/inet/nodes/rip/*.cc src/inet/nodes/rtp/*.cc src/inet/nodes/wireless/*.cc src/inet/nodes/xmipv6/*.cc src/inet/status/*.cc src/inet/transport/*.cc src/inet/transport/contract/*.cc src/inet/transport/rtp/*.cc src/inet/transport/rtp/profiles/*.cc src/inet/transport/rtp/profiles/avprofile/*.cc src/inet/transport/sctp/*.cc src/inet/transport/tcp/*.cc src/inet/transport/tcp/flavours/*.cc src/inet/transport/tcp/queues/*.cc src/inet/transport/tcp_common/*.cc src/inet/transport/tcp_lwip/*.cc src/inet/transport/tcp_lwip/lwip/*.cc src/inet/transport/tcp_lwip/lwip/core/*.cc src/inet/transport/tcp_lwip/lwip/include/*.cc src/inet/transport/tcp_lwip/lwip/include/arch/*.cc src/inet/transport/tcp_lwip/lwip/include/ipv4/*.cc src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/*.cc src/inet/transport/tcp_lwip/lwip/include/ipv6/*.cc src/inet/transport/tcp_lwip/lwip/include/ipv6/lwip/*.cc src/inet/transport/tcp_lwip/lwip/include/lwip/*.cc src/inet/transport/tcp_lwip/lwip/include/netif/*.cc src/inet/transport/tcp_lwip/queues/*.cc src/inet/transport/tcp_nsc/*.cc src/inet/transport/tcp_nsc/queues/*.cc src/inet/transport/udp/*.cc src/inet/util/*.cc src/inet/util/headerserializers/*.cc src/inet/util/headerserializers/headers/*.cc src/inet/util/headerserializers/ipv4/*.cc src/inet/util/headerserializers/ipv4/headers/*.cc src/inet/util/headerserializers/ipv6/*.cc src/inet/util/headerserializers/ipv6/headers/*.cc src/inet/util/headerserializers/sctp/*.cc src/inet/util/headerserializers/sctp/headers/*.cc src/inet/util/headerserializers/tcp/*.cc src/inet/util/headerserializers/tcp/headers/*.cc src/inet/util/headerserializers/udp/*.cc src/inet/util/headerserializers/udp/headers/*.cc src/inet/util/messageprinters/*.cc src/inet/world/*.cc src/inet/world/annotations/*.cc src/inet/world/httptools/*.cc src/inet/world/obstacles/*.cc src/inet/world/radio/*.cc src/inet/world/scenario/*.cc src/inet/world/traci/*.cc src/veins/*.cc src/veins/base/*.cc src/veins/base/connectionManager/*.cc src/veins/base/messages/*.cc src/veins/base/modules/*.cc src/veins/base/phyLayer/*.cc src/veins/base/utils/*.cc src/veins/modules/*.cc src/veins/modules/analogueModel/*.cc src/veins/modules/application/*.cc src/veins/modules/application/ieee80211p/*.cc src/veins/modules/application/traci/*.cc src/veins/modules/mac/*.cc src/veins/modules/mac/ieee80211p/*.cc src/veins/modules/messages/*.cc src/veins/modules/mobility/*.cc src/veins/modules/mobility/traci/*.cc src/veins/modules/nic/*.cc src/veins/modules/obstacle/*.cc src/veins/modules/phy/*.cc src/veins/modules/utility/*.cc src/veins/modules/world/*.cc src/veins/modules/world/annotations/*.cc src/veins/nodes/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/src/inet/applications/common/ApplicationBase.o: src/inet/applications/common/ApplicationBase.cc \
	src/inet/applications/common/ApplicationBase.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/OperationalBase.h
$O/src/inet/applications/dhcp/DHCPClient.o: src/inet/applications/dhcp/DHCPClient.cc \
	src/inet/applications/dhcp/DHCPClient.h \
	src/inet/applications/dhcp/DHCPLease.h \
	src/inet/applications/dhcp/DHCPMessage_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/dhcp/DHCPMessage_m.o: src/inet/applications/dhcp/DHCPMessage_m.cc \
	src/inet/applications/dhcp/DHCPMessage_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPv4Address.h
$O/src/inet/applications/dhcp/DHCPServer.o: src/inet/applications/dhcp/DHCPServer.cc \
	src/inet/applications/dhcp/DHCPLease.h \
	src/inet/applications/dhcp/DHCPMessage_m.h \
	src/inet/applications/dhcp/DHCPServer.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/ethernet/EtherAppCli.o: src/inet/applications/ethernet/EtherAppCli.cc \
	src/inet/applications/ethernet/EtherAppCli.h \
	src/inet/applications/ethernet/EtherApp_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/status/NodeStatus.h
$O/src/inet/applications/ethernet/EtherAppSrv.o: src/inet/applications/ethernet/EtherAppSrv.cc \
	src/inet/applications/ethernet/EtherAppSrv.h \
	src/inet/applications/ethernet/EtherApp_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/status/NodeStatus.h
$O/src/inet/applications/ethernet/EtherApp_m.o: src/inet/applications/ethernet/EtherApp_m.cc \
	src/inet/applications/ethernet/EtherApp_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/applications/ethernet/EtherTrafGen.o: src/inet/applications/ethernet/EtherTrafGen.cc \
	src/inet/applications/ethernet/EtherTrafGen.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/status/NodeStatus.h
$O/src/inet/applications/ethernet/EthernetApplication.o: src/inet/applications/ethernet/EthernetApplication.cc \
	src/inet/applications/ethernet/EtherApp_m.h \
	src/inet/applications/ethernet/EthernetApplication.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h
$O/src/inet/applications/generic/IPvXTrafGen.o: src/inet/applications/generic/IPvXTrafGen.cc \
	src/inet/applications/generic/IPvXTrafGen.h \
	src/inet/applications/generic/IPvXTrafSink.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h
$O/src/inet/applications/generic/IPvXTrafSink.o: src/inet/applications/generic/IPvXTrafSink.cc \
	src/inet/applications/generic/IPvXTrafGen.h \
	src/inet/applications/generic/IPvXTrafSink.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h
$O/src/inet/applications/httptools/HttpBrowser.o: src/inet/applications/httptools/HttpBrowser.cc \
	src/inet/applications/httptools/HttpBrowser.h \
	src/inet/applications/httptools/HttpBrowserBase.h \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpBrowserBase.o: src/inet/applications/httptools/HttpBrowserBase.cc \
	src/inet/applications/httptools/HttpBrowserBase.h \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/status/NodeStatus.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpBrowserDirect.o: src/inet/applications/httptools/HttpBrowserDirect.cc \
	src/inet/applications/httptools/HttpBrowserBase.h \
	src/inet/applications/httptools/HttpBrowserDirect.h \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpServerBase.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpEventMessages_m.o: src/inet/applications/httptools/HttpEventMessages_m.cc \
	src/inet/applications/httptools/HttpEventMessages_m.h
$O/src/inet/applications/httptools/HttpMessages_m.o: src/inet/applications/httptools/HttpMessages_m.cc \
	src/inet/applications/httptools/HttpMessages_m.h
$O/src/inet/applications/httptools/HttpNodeBase.o: src/inet/applications/httptools/HttpNodeBase.cc \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpRandom.o: src/inet/applications/httptools/HttpRandom.cc \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/applications/httptools/HttpServer.o: src/inet/applications/httptools/HttpServer.cc \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpServer.h \
	src/inet/applications/httptools/HttpServerBase.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpServerBase.o: src/inet/applications/httptools/HttpServerBase.cc \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpServerBase.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/status/NodeStatus.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpServerDirect.o: src/inet/applications/httptools/HttpServerDirect.cc \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpServerBase.h \
	src/inet/applications/httptools/HttpServerDirect.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpServerDirectEvilA.o: src/inet/applications/httptools/HttpServerDirectEvilA.cc \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpServerBase.h \
	src/inet/applications/httptools/HttpServerDirect.h \
	src/inet/applications/httptools/HttpServerDirectEvilA.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpServerDirectEvilB.o: src/inet/applications/httptools/HttpServerDirectEvilB.cc \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpServerBase.h \
	src/inet/applications/httptools/HttpServerDirect.h \
	src/inet/applications/httptools/HttpServerDirectEvilB.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpServerEvilA.o: src/inet/applications/httptools/HttpServerEvilA.cc \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpServer.h \
	src/inet/applications/httptools/HttpServerBase.h \
	src/inet/applications/httptools/HttpServerEvilA.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpServerEvilB.o: src/inet/applications/httptools/HttpServerEvilB.cc \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpNodeBase.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpServer.h \
	src/inet/applications/httptools/HttpServerBase.h \
	src/inet/applications/httptools/HttpServerEvilB.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/applications/httptools/HttpUtils.o: src/inet/applications/httptools/HttpUtils.cc \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpUtils.h
$O/src/inet/applications/netperfmeter/NetPerfMeter.o: src/inet/applications/netperfmeter/NetPerfMeter.cc \
	src/inet/applications/netperfmeter/NetPerfMeter.h \
	src/inet/applications/netperfmeter/NetPerfMeter_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/SCTPSocket.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/applications/netperfmeter/NetPerfMeter_m.o: src/inet/applications/netperfmeter/NetPerfMeter_m.cc \
	src/inet/applications/netperfmeter/NetPerfMeter_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/sctp/SCTPMessage_m.h
$O/src/inet/applications/pingapp/PingApp.o: src/inet/applications/pingapp/PingApp.cc \
	src/inet/applications/pingapp/PingApp.h \
	src/inet/applications/pingapp/PingPayload_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h
$O/src/inet/applications/pingapp/PingPayload_m.o: src/inet/applications/pingapp/PingPayload_m.cc \
	src/inet/applications/pingapp/PingPayload_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/applications/pingapp/PingTestApp.o: src/inet/applications/pingapp/PingTestApp.cc \
	src/inet/applications/pingapp/PingPayload_m.h \
	src/inet/applications/pingapp/PingTestApp.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h
$O/src/inet/applications/rtpapp/RTPApplication.o: src/inet/applications/rtpapp/RTPApplication.cc \
	src/inet/applications/rtpapp/RTPApplication.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/rtp/RTPInterfacePacket_m.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/src/inet/applications/sctpapp/SCTPClient.o: src/inet/applications/sctpapp/SCTPClient.cc \
	src/inet/applications/sctpapp/SCTPClient.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/SCTPSocket.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/applications/sctpapp/SCTPNatPeer.o: src/inet/applications/sctpapp/SCTPNatPeer.cc \
	src/inet/applications/sctpapp/SCTPNatPeer.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/SCTPSocket.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/applications/sctpapp/SCTPNatServer.o: src/inet/applications/sctpapp/SCTPNatServer.cc \
	src/inet/applications/sctpapp/SCTPNatServer.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/SCTPSocket.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPNatTable.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/applications/sctpapp/SCTPPeer.o: src/inet/applications/sctpapp/SCTPPeer.cc \
	src/inet/applications/sctpapp/SCTPPeer.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/SCTPSocket.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/applications/sctpapp/SCTPServer.o: src/inet/applications/sctpapp/SCTPServer.cc \
	src/inet/applications/sctpapp/SCTPServer.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/SCTPSocket.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/applications/tcpapp/GenericAppMsg_m.o: src/inet/applications/tcpapp/GenericAppMsg_m.cc \
	src/inet/applications/tcpapp/GenericAppMsg_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/applications/tcpapp/TCPAppBase.o: src/inet/applications/tcpapp/TCPAppBase.cc \
	src/inet/applications/tcpapp/TCPAppBase.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h
$O/src/inet/applications/tcpapp/TCPBasicClientApp.o: src/inet/applications/tcpapp/TCPBasicClientApp.cc \
	src/inet/applications/tcpapp/GenericAppMsg_m.h \
	src/inet/applications/tcpapp/TCPAppBase.h \
	src/inet/applications/tcpapp/TCPBasicClientApp.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h
$O/src/inet/applications/tcpapp/TCPEchoApp.o: src/inet/applications/tcpapp/TCPEchoApp.cc \
	src/inet/applications/tcpapp/TCPEchoApp.h \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h
$O/src/inet/applications/tcpapp/TCPGenericSrvApp.o: src/inet/applications/tcpapp/TCPGenericSrvApp.cc \
	src/inet/applications/tcpapp/GenericAppMsg_m.h \
	src/inet/applications/tcpapp/TCPGenericSrvApp.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h
$O/src/inet/applications/tcpapp/TCPGenericSrvThread.o: src/inet/applications/tcpapp/TCPGenericSrvThread.cc \
	src/inet/applications/tcpapp/GenericAppMsg_m.h \
	src/inet/applications/tcpapp/TCPGenericSrvThread.h \
	src/inet/applications/tcpapp/TCPSrvHostApp.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h
$O/src/inet/applications/tcpapp/TCPSessionApp.o: src/inet/applications/tcpapp/TCPSessionApp.cc \
	src/inet/applications/tcpapp/TCPAppBase.h \
	src/inet/applications/tcpapp/TCPSessionApp.h \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h
$O/src/inet/applications/tcpapp/TCPSinkApp.o: src/inet/applications/tcpapp/TCPSinkApp.cc \
	src/inet/applications/tcpapp/TCPSinkApp.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h
$O/src/inet/applications/tcpapp/TCPSrvHostApp.o: src/inet/applications/tcpapp/TCPSrvHostApp.cc \
	src/inet/applications/tcpapp/TCPSrvHostApp.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h
$O/src/inet/applications/tcpapp/TelnetApp.o: src/inet/applications/tcpapp/TelnetApp.cc \
	src/inet/applications/tcpapp/GenericAppMsg_m.h \
	src/inet/applications/tcpapp/TCPAppBase.h \
	src/inet/applications/tcpapp/TelnetApp.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h
$O/src/inet/applications/udpapp/UDPBasicApp.o: src/inet/applications/udpapp/UDPBasicApp.cc \
	src/inet/applications/common/ApplicationBase.h \
	src/inet/applications/udpapp/UDPBasicApp.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/OperationalBase.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/udpapp/UDPBasicBurst.o: src/inet/applications/udpapp/UDPBasicBurst.cc \
	src/inet/applications/common/ApplicationBase.h \
	src/inet/applications/udpapp/UDPBasicBurst.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/OperationalBase.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/udpapp/UDPEchoApp.o: src/inet/applications/udpapp/UDPEchoApp.cc \
	src/inet/applications/common/ApplicationBase.h \
	src/inet/applications/udpapp/UDPEchoApp.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/OperationalBase.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/udpapp/UDPSink.o: src/inet/applications/udpapp/UDPSink.cc \
	src/inet/applications/common/ApplicationBase.h \
	src/inet/applications/udpapp/UDPSink.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/OperationalBase.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/udpapp/UDPVideoStreamCli.o: src/inet/applications/udpapp/UDPVideoStreamCli.cc \
	src/inet/applications/common/ApplicationBase.h \
	src/inet/applications/udpapp/UDPVideoStreamCli.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/OperationalBase.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/udpapp/UDPVideoStreamSvr.o: src/inet/applications/udpapp/UDPVideoStreamSvr.cc \
	src/inet/applications/common/ApplicationBase.h \
	src/inet/applications/udpapp/UDPVideoStreamSvr.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/OperationalBase.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/voip/SimpleVoIPPacket_m.o: src/inet/applications/voip/SimpleVoIPPacket_m.cc \
	src/inet/applications/voip/SimpleVoIPPacket_m.h
$O/src/inet/applications/voip/SimpleVoIPReceiver.o: src/inet/applications/voip/SimpleVoIPReceiver.cc \
	src/inet/applications/voip/SimpleVoIPPacket_m.h \
	src/inet/applications/voip/SimpleVoIPReceiver.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/voip/SimpleVoIPSender.o: src/inet/applications/voip/SimpleVoIPSender.cc \
	src/inet/applications/voip/SimpleVoIPPacket_m.h \
	src/inet/applications/voip/SimpleVoIPSender.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/voipstream/AudioOutFile.o: src/inet/applications/voipstream/AudioOutFile.cc \
	src/inet/applications/voipstream/AudioOutFile.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INETEndians.h
$O/src/inet/applications/voipstream/VoIPStreamPacket_m.o: src/inet/applications/voipstream/VoIPStreamPacket_m.cc \
	src/inet/applications/voipstream/VoIPStreamPacket_m.h \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/applications/voipstream/VoIPStreamReceiver.o: src/inet/applications/voipstream/VoIPStreamReceiver.cc \
	src/inet/applications/voipstream/AudioOutFile.h \
	src/inet/applications/voipstream/VoIPStreamPacket_m.h \
	src/inet/applications/voipstream/VoIPStreamReceiver.h \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INETEndians.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/applications/voipstream/VoIPStreamSender.o: src/inet/applications/voipstream/VoIPStreamSender.cc \
	src/inet/applications/voipstream/AudioOutFile.h \
	src/inet/applications/voipstream/VoIPStreamPacket_m.h \
	src/inet/applications/voipstream/VoIPStreamSender.h \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/base/AbstractQueue.o: src/inet/base/AbstractQueue.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/base/BasicModule.o: src/inet/base/BasicModule.cc \
	src/inet/base/BasicModule.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h
$O/src/inet/base/ByteArray.o: src/inet/base/ByteArray.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/base/ByteArrayBuffer.o: src/inet/base/ByteArrayBuffer.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayBuffer.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/base/ByteArrayMessage.o: src/inet/base/ByteArrayMessage.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/base/ByteArrayMessage_m.o: src/inet/base/ByteArrayMessage_m.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/base/ByteArray_m.o: src/inet/base/ByteArray_m.cc \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/base/Compat.o: src/inet/base/Compat.cc \
	src/inet/base/Compat.h
$O/src/inet/base/Coord.o: src/inet/base/Coord.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/base/InterfaceOperations.o: src/inet/base/InterfaceOperations.cc
$O/src/inet/base/Join.o: src/inet/base/Join.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/base/LifecycleController.o: src/inet/base/LifecycleController.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/IScriptable.h \
	src/inet/base/LifecycleController.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h
$O/src/inet/base/ModuleAccess.o: src/inet/base/ModuleAccess.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h
$O/src/inet/base/NedFunctions.o: src/inet/base/NedFunctions.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/base/NodeOperations.o: src/inet/base/NodeOperations.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h
$O/src/inet/base/NotificationBoard.o: src/inet/base/NotificationBoard.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h
$O/src/inet/base/NotifierConsts.o: src/inet/base/NotifierConsts.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/NotifierConsts.h
$O/src/inet/base/OperationalBase.o: src/inet/base/OperationalBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/OperationalBase.h \
	src/inet/status/NodeStatus.h
$O/src/inet/base/PassiveQueueBase.o: src/inet/base/PassiveQueueBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/PassiveQueueBase.h
$O/src/inet/base/ProtocolMap.o: src/inet/base/ProtocolMap.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ProtocolMap.h
$O/src/inet/base/QueueBase.o: src/inet/base/QueueBase.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/QueueBase.h
$O/src/inet/base/ReassemblyBuffer.o: src/inet/base/ReassemblyBuffer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ReassemblyBuffer.h
$O/src/inet/base/ResultFilters.o: src/inet/base/ResultFilters.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ResultFilters.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/base/Sink.o: src/inet/base/Sink.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/Sink.h
$O/src/inet/base/Topology.o: src/inet/base/Topology.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/Topology.h \
	src/inet/util/PatternMatcher.h \
	src/inet/util/stlutils.h
$O/src/inet/base/UnimplementedModule.o: src/inet/base/UnimplementedModule.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/UnimplementedModule.h
$O/src/inet/base/erfc.o: src/inet/base/erfc.cc
$O/src/inet/battery/models/BasicBattery.o: src/inet/battery/models/BasicBattery.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/battery/models/BasicBattery.h
$O/src/inet/battery/models/InetSimpleBattery.o: src/inet/battery/models/InetSimpleBattery.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/battery/models/BasicBattery.h \
	src/inet/battery/models/Energy.h \
	src/inet/battery/models/InetSimpleBattery.h \
	src/inet/linklayer/contract/RadioState.h
$O/src/inet/linklayer/common/MACBase.o: src/inet/linklayer/common/MACBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/common/WirelessMacBase.o: src/inet/linklayer/common/WirelessMacBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/common/WirelessMacBase.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/configurator/Ieee8021dInterfaceData.o: src/inet/linklayer/configurator/Ieee8021dInterfaceData.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h
$O/src/inet/linklayer/configurator/L2NetworkConfigurator.o: src/inet/linklayer/configurator/L2NetworkConfigurator.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/Topology.h \
	src/inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	src/inet/linklayer/configurator/L2NetworkConfigurator.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/util/PatternMatcher.h \
	src/inet/util/stlutils.h
$O/src/inet/linklayer/configurator/L2NodeConfigurator.o: src/inet/linklayer/configurator/L2NodeConfigurator.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/Topology.h \
	src/inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	src/inet/linklayer/configurator/L2NetworkConfigurator.h \
	src/inet/linklayer/configurator/L2NodeConfigurator.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/util/PatternMatcher.h
$O/src/inet/linklayer/contract/Ieee802Ctrl_m.o: src/inet/linklayer/contract/Ieee802Ctrl_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h
$O/src/inet/linklayer/contract/MACAddress.o: src/inet/linklayer/contract/MACAddress.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h
$O/src/inet/linklayer/contract/PhyControlInfo_m.o: src/inet/linklayer/contract/PhyControlInfo_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/PhyControlInfo_m.h
$O/src/inet/linklayer/ethernet/EtherBus.o: src/inet/linklayer/ethernet/EtherBus.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/ethernet/EtherBus.h
$O/src/inet/linklayer/ethernet/EtherEncap.o: src/inet/linklayer/ethernet/EtherEncap.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherEncap.h \
	src/inet/linklayer/ethernet/EtherFrame.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/Ethernet.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h
$O/src/inet/linklayer/ethernet/EtherFrameClassifier.o: src/inet/linklayer/ethernet/EtherFrameClassifier.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherFrame.h \
	src/inet/linklayer/ethernet/EtherFrameClassifier.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/Ethernet.h
$O/src/inet/linklayer/ethernet/EtherFrame_m.o: src/inet/linklayer/ethernet/EtherFrame_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/Ethernet.h
$O/src/inet/linklayer/ethernet/EtherHub.o: src/inet/linklayer/ethernet/EtherHub.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/ethernet/EtherHub.h
$O/src/inet/linklayer/ethernet/EtherLLC.o: src/inet/linklayer/ethernet/EtherLLC.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherFrame.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/EtherLLC.h \
	src/inet/linklayer/ethernet/Ethernet.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/ethernet/EtherMAC.o: src/inet/linklayer/ethernet/EtherMAC.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherFrame.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/EtherMAC.h \
	src/inet/linklayer/ethernet/EtherMACBase.h \
	src/inet/linklayer/ethernet/Ethernet.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/ethernet/EtherMACBase.o: src/inet/linklayer/ethernet/EtherMACBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherFrame.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/EtherMACBase.h \
	src/inet/linklayer/ethernet/Ethernet.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/util/opp_utils.h
$O/src/inet/linklayer/ethernet/EtherMACFullDuplex.o: src/inet/linklayer/ethernet/EtherMACFullDuplex.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherFrame.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/EtherMACBase.h \
	src/inet/linklayer/ethernet/EtherMACFullDuplex.h \
	src/inet/linklayer/ethernet/Ethernet.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/ethernet/switch/MACAddressTable.o: src/inet/linklayer/ethernet/switch/MACAddressTable.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/switch/IMACAddressTable.h \
	src/inet/linklayer/ethernet/switch/MACAddressTable.h
$O/src/inet/linklayer/ethernet/switch/MACRelayUnit.o: src/inet/linklayer/ethernet/switch/MACRelayUnit.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherFrame.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/EtherMACBase.h \
	src/inet/linklayer/ethernet/Ethernet.h \
	src/inet/linklayer/ethernet/switch/IMACAddressTable.h \
	src/inet/linklayer/ethernet/switch/MACRelayUnit.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/ext/ExtFrame_m.o: src/inet/linklayer/ext/ExtFrame_m.cc \
	src/inet/linklayer/ext/ExtFrame_m.h
$O/src/inet/linklayer/ext/ExtInterface.o: src/inet/linklayer/ext/ExtInterface.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ext/ExtFrame_m.h \
	src/inet/linklayer/ext/ExtInterface.h \
	src/inet/linklayer/ext/cSocketRTScheduler.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/util/headerserializers/headers/bsdint.h \
	src/inet/util/headerserializers/ipv4/IPv4Serializer.h \
	src/inet/util/opp_utils.h
$O/src/inet/linklayer/ext/cSocketRTScheduler.o: src/inet/linklayer/ext/cSocketRTScheduler.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/ext/ExtFrame_m.h \
	src/inet/linklayer/ext/cSocketRTScheduler.h \
	src/inet/util/headerserializers/headers/bsdint.h \
	src/inet/util/headerserializers/headers/ethernet.h
$O/src/inet/linklayer/idealwireless/IdealWirelessFrame_m.o: src/inet/linklayer/idealwireless/IdealWirelessFrame_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/idealwireless/IdealWirelessFrame_m.h
$O/src/inet/linklayer/idealwireless/IdealWirelessMac.o: src/inet/linklayer/idealwireless/IdealWirelessMac.cc \
	src/inet/base/BasicModule.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/common/WirelessMacBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/contract/RadioState.h \
	src/inet/linklayer/idealwireless/IdealWirelessFrame_m.h \
	src/inet/linklayer/idealwireless/IdealWirelessMac.h \
	src/inet/linklayer/radio/IdealAirFrame_m.h \
	src/inet/linklayer/radio/IdealRadio.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/util/FWMath.h \
	src/inet/util/opp_utils.h \
	src/inet/world/radio/IdealChannelModel.h \
	src/inet/world/radio/IdealChannelModelAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/ieee80211/mac/Ieee80211DataRate.o: src/inet/linklayer/ieee80211/mac/Ieee80211DataRate.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211DataRate.h \
	src/inet/linklayer/ieee80211/mac/WifiMode.h \
	src/inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	src/inet/linklayer/radio/ModulationType.h
$O/src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.o: src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h
$O/src/inet/linklayer/ieee80211/mac/Ieee80211Mac.o: src/inet/linklayer/ieee80211/mac/Ieee80211Mac.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/FSMA.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/common/WirelessMacBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/contract/PhyControlInfo_m.h \
	src/inet/linklayer/contract/RadioState.h \
	src/inet/linklayer/ieee80211/mac/IQoSClassifier.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211DataRate.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Mac.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211eClassifier.h \
	src/inet/linklayer/ieee80211/mac/WifiMode.h \
	src/inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	src/inet/linklayer/radio/AirFrame_m.h \
	src/inet/linklayer/radio/ModulationType.h \
	src/inet/linklayer/radio/Radio80211aControlInfo_m.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/util/FWMath.h \
	src/inet/util/opp_utils.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/ieee80211/mac/Ieee80211eClassifier.o: src/inet/linklayer/ieee80211/mac/Ieee80211eClassifier.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/IQoSClassifier.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211eClassifier.h
$O/src/inet/linklayer/ieee80211/mac/WifiMode.o: src/inet/linklayer/ieee80211/mac/WifiMode.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211DataRate.h \
	src/inet/linklayer/ieee80211/mac/WifiMode.h \
	src/inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	src/inet/linklayer/radio/ModulationType.h
$O/src/inet/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.o: src/inet/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211AgentSTA.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/util/opp_utils.h
$O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.o: src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/PassiveQueueBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/contract/RadioState.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.o: src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/PassiveQueueBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.o: src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/PassiveQueueBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPSimplified.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.o: src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/PassiveQueueBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhoc.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.o: src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/PassiveQueueBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.o: src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h
$O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.o: src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.cc \
	src/inet/base/BasicModule.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/PassiveQueueBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/contract/PhyControlInfo_m.h \
	src/inet/linklayer/contract/RadioState.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	src/inet/linklayer/radio/ModulationType.h \
	src/inet/linklayer/radio/Radio80211aControlInfo_m.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/util/FWMath.h \
	src/inet/util/opp_utils.h \
	src/inet/world/radio/ChannelAccess.h \
	src/inet/world/radio/IChannelControl.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.o: src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/PassiveQueueBase.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTASimplified.h
$O/src/inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.o: src/inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h
$O/src/inet/linklayer/ieee80211/radio/BerParseFile.o: src/inet/linklayer/ieee80211/radio/BerParseFile.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/ieee80211/radio/BerParseFile.h
$O/src/inet/linklayer/ieee80211/radio/Ieee80211RadioModel.o: src/inet/linklayer/ieee80211/radio/Ieee80211RadioModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/PhyControlInfo_m.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/WifiMode.h \
	src/inet/linklayer/ieee80211/radio/BerParseFile.h \
	src/inet/linklayer/ieee80211/radio/Ieee80211RadioModel.h \
	src/inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	src/inet/linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	src/inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	src/inet/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
	src/inet/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
	src/inet/linklayer/radio/AirFrame_m.h \
	src/inet/linklayer/radio/IRadioModel.h \
	src/inet/linklayer/radio/ModulationType.h \
	src/inet/linklayer/radio/SnrList.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.o: src/inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h
$O/src/inet/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.o: src/inet/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/ieee80211/mac/WifiMode.h \
	src/inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	src/inet/linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	src/inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	src/inet/linklayer/ieee80211/radio/errormodel/nist-error-rate-model.h \
	src/inet/linklayer/radio/ModulationType.h
$O/src/inet/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.o: src/inet/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/ieee80211/mac/WifiMode.h \
	src/inet/linklayer/ieee80211/radio/WifiPreambleType.h \
	src/inet/linklayer/ieee80211/radio/errormodel/IErrorModel.h \
	src/inet/linklayer/ieee80211/radio/errormodel/dsss-error-rate-model.h \
	src/inet/linklayer/ieee80211/radio/errormodel/yans-error-rate-model.h \
	src/inet/linklayer/radio/ModulationType.h
$O/src/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.o: src/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.h
$O/src/inet/linklayer/ieee8021d/common/STPBase.o: src/inet/linklayer/ieee8021d/common/STPBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/switch/IMACAddressTable.h \
	src/inet/linklayer/ieee8021d/common/STPBase.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/ieee8021d/relay/Ieee8021dRelay.o: src/inet/linklayer/ieee8021d/relay/Ieee8021dRelay.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/Ethernet.h \
	src/inet/linklayer/ethernet/switch/IMACAddressTable.h \
	src/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	src/inet/linklayer/ieee8021d/relay/Ieee8021dRelay.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/ieee8021d/rstp/RSTP.o: src/inet/linklayer/ieee8021d/rstp/RSTP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherFrame.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/Ethernet.h \
	src/inet/linklayer/ethernet/switch/IMACAddressTable.h \
	src/inet/linklayer/ethernet/switch/MACAddressTable.h \
	src/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	src/inet/linklayer/ieee8021d/common/STPBase.h \
	src/inet/linklayer/ieee8021d/rstp/RSTP.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/ieee8021d/stp/STP.o: src/inet/linklayer/ieee8021d/stp/STP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/EtherFrame.h \
	src/inet/linklayer/ethernet/EtherFrame_m.h \
	src/inet/linklayer/ethernet/Ethernet.h \
	src/inet/linklayer/ethernet/switch/IMACAddressTable.h \
	src/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	src/inet/linklayer/ieee8021d/common/STPBase.h \
	src/inet/linklayer/ieee8021d/stp/STP.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/ieee8021d/tester/STPTester.o: src/inet/linklayer/ieee8021d/tester/STPTester.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/Topology.h \
	src/inet/linklayer/configurator/Ieee8021dInterfaceData.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ethernet/switch/IMACAddressTable.h \
	src/inet/linklayer/ieee8021d/common/Ieee8021dBPDU_m.h \
	src/inet/linklayer/ieee8021d/common/STPBase.h \
	src/inet/linklayer/ieee8021d/stp/STP.h \
	src/inet/linklayer/ieee8021d/tester/STPTester.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h
$O/src/inet/linklayer/loopback/Loopback.o: src/inet/linklayer/loopback/Loopback.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/contract/TxNotifDetails.h \
	src/inet/linklayer/loopback/Loopback.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/util/opp_utils.h
$O/src/inet/linklayer/ppp/PPP.o: src/inet/linklayer/ppp/PPP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/common/MACBase.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/contract/TxNotifDetails.h \
	src/inet/linklayer/ppp/PPP.h \
	src/inet/linklayer/ppp/PPPFrame_m.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/util/opp_utils.h
$O/src/inet/linklayer/ppp/PPPFrame_m.o: src/inet/linklayer/ppp/PPPFrame_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/ppp/PPPFrame_m.h
$O/src/inet/linklayer/queue/AlgorithmicDropperBase.o: src/inet/linklayer/queue/AlgorithmicDropperBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/queue/AlgorithmicDropperBase.h \
	src/inet/linklayer/queue/IQueueAccess.h
$O/src/inet/linklayer/queue/DropTailQueue.o: src/inet/linklayer/queue/DropTailQueue.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/PassiveQueueBase.h \
	src/inet/linklayer/queue/DropTailQueue.h
$O/src/inet/linklayer/queue/FIFOQueue.o: src/inet/linklayer/queue/FIFOQueue.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/PassiveQueueBase.h \
	src/inet/linklayer/queue/FIFOQueue.h \
	src/inet/linklayer/queue/IQueueAccess.h
$O/src/inet/linklayer/queue/PriorityScheduler.o: src/inet/linklayer/queue/PriorityScheduler.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/linklayer/queue/PriorityScheduler.h \
	src/inet/linklayer/queue/SchedulerBase.h
$O/src/inet/linklayer/queue/REDDropper.o: src/inet/linklayer/queue/REDDropper.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/queue/AlgorithmicDropperBase.h \
	src/inet/linklayer/queue/IQueueAccess.h \
	src/inet/linklayer/queue/REDDropper.h \
	src/inet/util/opp_utils.h
$O/src/inet/linklayer/queue/SchedulerBase.o: src/inet/linklayer/queue/SchedulerBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/linklayer/queue/SchedulerBase.h
$O/src/inet/linklayer/queue/ThresholdDropper.o: src/inet/linklayer/queue/ThresholdDropper.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/queue/AlgorithmicDropperBase.h \
	src/inet/linklayer/queue/IQueueAccess.h \
	src/inet/linklayer/queue/ThresholdDropper.h
$O/src/inet/linklayer/queue/WRRScheduler.o: src/inet/linklayer/queue/WRRScheduler.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/linklayer/queue/SchedulerBase.h \
	src/inet/linklayer/queue/WRRScheduler.h \
	src/inet/util/opp_utils.h
$O/src/inet/linklayer/radio/AirFrame_m.o: src/inet/linklayer/radio/AirFrame_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/AirFrame_m.h \
	src/inet/linklayer/radio/ModulationType.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/radio/GenericRadioModel.o: src/inet/linklayer/radio/GenericRadioModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/PhyControlInfo_m.h \
	src/inet/linklayer/radio/AirFrame_m.h \
	src/inet/linklayer/radio/GenericRadioModel.h \
	src/inet/linklayer/radio/IModulation.h \
	src/inet/linklayer/radio/IRadioModel.h \
	src/inet/linklayer/radio/Modulation.h \
	src/inet/linklayer/radio/ModulationType.h \
	src/inet/linklayer/radio/SnrList.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/radio/IdealAirFrame_m.o: src/inet/linklayer/radio/IdealAirFrame_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/IdealAirFrame_m.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/radio/IdealRadio.o: src/inet/linklayer/radio/IdealRadio.cc \
	src/inet/base/BasicModule.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/RadioState.h \
	src/inet/linklayer/radio/IdealAirFrame_m.h \
	src/inet/linklayer/radio/IdealRadio.h \
	src/inet/status/NodeStatus.h \
	src/inet/util/FWMath.h \
	src/inet/world/radio/IdealChannelModel.h \
	src/inet/world/radio/IdealChannelModelAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/radio/Modulation.o: src/inet/linklayer/radio/Modulation.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/IModulation.h \
	src/inet/linklayer/radio/Modulation.h
$O/src/inet/linklayer/radio/Radio.o: src/inet/linklayer/radio/Radio.cc \
	src/inet/base/BasicModule.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/battery/models/BasicBattery.h \
	src/inet/linklayer/contract/PhyControlInfo_m.h \
	src/inet/linklayer/contract/RadioState.h \
	src/inet/linklayer/radio/AirFrame_m.h \
	src/inet/linklayer/radio/INoiseGenerator.h \
	src/inet/linklayer/radio/IRadioModel.h \
	src/inet/linklayer/radio/ModulationType.h \
	src/inet/linklayer/radio/Radio.h \
	src/inet/linklayer/radio/Radio80211aControlInfo_m.h \
	src/inet/linklayer/radio/SnrList.h \
	src/inet/linklayer/radio/propagation/IReceptionModel.h \
	src/inet/status/NodeStatus.h \
	src/inet/util/FWMath.h \
	src/inet/world/annotations/AnnotationManager.h \
	src/inet/world/obstacles/Obstacle.h \
	src/inet/world/obstacles/ObstacleControl.h \
	src/inet/world/radio/ChannelAccess.h \
	src/inet/world/radio/IChannelControl.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/inet/linklayer/radio/Radio80211aControlInfo_m.o: src/inet/linklayer/radio/Radio80211aControlInfo_m.cc \
	src/inet/linklayer/radio/ModulationType.h \
	src/inet/linklayer/radio/Radio80211aControlInfo_m.h
$O/src/inet/linklayer/radio/propagation/FreeSpaceModel.o: src/inet/linklayer/radio/propagation/FreeSpaceModel.cc \
	src/inet/base/BasicModule.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/radio/propagation/FreeSpaceModel.h \
	src/inet/linklayer/radio/propagation/IReceptionModel.h \
	src/inet/util/FWMath.h \
	src/inet/world/radio/ChannelAccess.h \
	src/inet/world/radio/IChannelControl.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/radio/propagation/LogNormalShadowingModel.o: src/inet/linklayer/radio/propagation/LogNormalShadowingModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/propagation/FreeSpaceModel.h \
	src/inet/linklayer/radio/propagation/IReceptionModel.h \
	src/inet/linklayer/radio/propagation/LogNormalShadowingModel.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/radio/propagation/NakagamiModel.o: src/inet/linklayer/radio/propagation/NakagamiModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/propagation/FreeSpaceModel.h \
	src/inet/linklayer/radio/propagation/IReceptionModel.h \
	src/inet/linklayer/radio/propagation/NakagamiModel.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/radio/propagation/RayleighModel.o: src/inet/linklayer/radio/propagation/RayleighModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/propagation/FreeSpaceModel.h \
	src/inet/linklayer/radio/propagation/IReceptionModel.h \
	src/inet/linklayer/radio/propagation/RayleighModel.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/radio/propagation/RiceModel.o: src/inet/linklayer/radio/propagation/RiceModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/propagation/FreeSpaceModel.h \
	src/inet/linklayer/radio/propagation/IReceptionModel.h \
	src/inet/linklayer/radio/propagation/RiceModel.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/radio/propagation/SUIModel.o: src/inet/linklayer/radio/propagation/SUIModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/propagation/FreeSpaceModel.h \
	src/inet/linklayer/radio/propagation/IReceptionModel.h \
	src/inet/linklayer/radio/propagation/SUIModel.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/linklayer/radio/propagation/TwoRayGroundModel.o: src/inet/linklayer/radio/propagation/TwoRayGroundModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/propagation/FreeSpaceModel.h \
	src/inet/linklayer/radio/propagation/IReceptionModel.h \
	src/inet/linklayer/radio/propagation/TwoRayGroundModel.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/common/LineSegmentsMobilityBase.o: src/inet/mobility/common/LineSegmentsMobilityBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/common/MobilityAccess.o: src/inet/mobility/common/MobilityAccess.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/MobilityAccess.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/common/MobilityBase.o: src/inet/mobility/common/MobilityBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/common/MovingMobilityBase.o: src/inet/mobility/common/MovingMobilityBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/contract/IMobility.o: src/inet/mobility/contract/IMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/group/MoBANCoordinator.o: src/inet/mobility/group/MoBANCoordinator.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityAccess.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/group/MoBANCoordinator.h \
	src/inet/mobility/group/MoBANLocal.h \
	src/inet/mobility/group/Posture.h \
	src/inet/mobility/group/PostureTransition.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/group/MoBANLocal.o: src/inet/mobility/group/MoBANLocal.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/group/MoBANCoordinator.h \
	src/inet/mobility/group/MoBANLocal.h \
	src/inet/mobility/group/Posture.h \
	src/inet/mobility/group/PostureTransition.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/group/Posture.o: src/inet/mobility/group/Posture.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/mobility/group/Posture.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/group/PostureTransition.o: src/inet/mobility/group/PostureTransition.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/mobility/group/PostureTransition.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/ANSimMobility.o: src/inet/mobility/single/ANSimMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/ANSimMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/BonnMotionFileCache.o: src/inet/mobility/single/BonnMotionFileCache.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/mobility/single/BonnMotionFileCache.h
$O/src/inet/mobility/single/BonnMotionMobility.o: src/inet/mobility/single/BonnMotionMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/BonnMotionFileCache.h \
	src/inet/mobility/single/BonnMotionMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/ChiangMobility.o: src/inet/mobility/single/ChiangMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/ChiangMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/CircleMobility.o: src/inet/mobility/single/CircleMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/CircleMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/ConstSpeedMobility.o: src/inet/mobility/single/ConstSpeedMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/ConstSpeedMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/GaussMarkovMobility.o: src/inet/mobility/single/GaussMarkovMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/GaussMarkovMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/LinearMobility.o: src/inet/mobility/single/LinearMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/LinearMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/LinearNodeDistributionMobility.o: src/inet/mobility/single/LinearNodeDistributionMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/LinearNodeDistributionMobility.h \
	src/inet/mobility/static/StationaryMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/MassMobility.o: src/inet/mobility/single/MassMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/MassMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/Ns2MotionMobility.o: src/inet/mobility/single/Ns2MotionMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/Ns2MotionMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/RandomWPMobility.o: src/inet/mobility/single/RandomWPMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/RandomWPMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/RectangleMobility.o: src/inet/mobility/single/RectangleMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/RectangleMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/TraCIMobility.o: src/inet/mobility/single/TraCIMobility.cc
$O/src/inet/mobility/single/TractorMobility.o: src/inet/mobility/single/TractorMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/TractorMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/single/TurtleMobility.o: src/inet/mobility/single/TurtleMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/LineSegmentsMobilityBase.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/common/MovingMobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/single/TurtleMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/static/StaticGridMobility.o: src/inet/mobility/static/StaticGridMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/static/StaticGridMobility.h \
	src/inet/mobility/static/StationaryMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/mobility/static/StationaryMobility.o: src/inet/mobility/static/StationaryMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/common/MobilityBase.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/mobility/static/StationaryMobility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/arp/ARP.o: src/inet/networklayer/arp/ARP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/ARPPacket_m.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/status/NodeStatus.h
$O/src/inet/networklayer/arp/ARPPacket_m.o: src/inet/networklayer/arp/ARPPacket_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARPPacket_m.h \
	src/inet/networklayer/contract/IPv4Address.h
$O/src/inet/networklayer/arp/IARPCache.o: src/inet/networklayer/arp/IARPCache.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/contract/IPv4Address.h
$O/src/inet/networklayer/autorouting/ipv4/FlatNetworkConfigurator.o: src/inet/networklayer/autorouting/ipv4/FlatNetworkConfigurator.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/autorouting/ipv4/FlatNetworkConfigurator.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h
$O/src/inet/networklayer/autorouting/ipv4/HostAutoConfigurator.o: src/inet/networklayer/autorouting/ipv4/HostAutoConfigurator.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/autorouting/ipv4/HostAutoConfigurator.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h
$O/src/inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.o: src/inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/Topology.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/util/PatternMatcher.h \
	src/inet/util/XMLUtils.h \
	src/inet/util/stlutils.h
$O/src/inet/networklayer/autorouting/ipv4/IPv4NodeConfigurator.o: src/inet/networklayer/autorouting/ipv4/IPv4NodeConfigurator.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/Topology.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/autorouting/ipv4/IPv4NetworkConfigurator.h \
	src/inet/networklayer/autorouting/ipv4/IPv4NodeConfigurator.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/status/NodeStatus.h \
	src/inet/util/PatternMatcher.h
$O/src/inet/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.o: src/inet/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/autorouting/ipv6/FlatNetworkConfigurator6.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv6/IPv6InterfaceData.h \
	src/inet/networklayer/ipv6/RoutingTable6.h
$O/src/inet/networklayer/bgpv4/BGPFSM.o: src/inet/networklayer/bgpv4/BGPFSM.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/bgpv4/BGPCommon.h \
	src/inet/networklayer/bgpv4/BGPFSM.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPOpen.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	src/inet/networklayer/bgpv4/BGPRouting.h \
	src/inet/networklayer/bgpv4/BGPRoutingTableEntry.h \
	src/inet/networklayer/bgpv4/BGPSession.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFRouting.h \
	src/inet/networklayer/ospfv2/OSPFRoutingAccess.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h \
	src/inet/util/Macho.h
$O/src/inet/networklayer/bgpv4/BGPRouting.o: src/inet/networklayer/bgpv4/BGPRouting.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/bgpv4/BGPCommon.h \
	src/inet/networklayer/bgpv4/BGPFSM.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPOpen.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	src/inet/networklayer/bgpv4/BGPRouting.h \
	src/inet/networklayer/bgpv4/BGPRoutingTableEntry.h \
	src/inet/networklayer/bgpv4/BGPSession.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFRouting.h \
	src/inet/networklayer/ospfv2/OSPFRoutingAccess.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h \
	src/inet/util/Macho.h
$O/src/inet/networklayer/bgpv4/BGPSession.o: src/inet/networklayer/bgpv4/BGPSession.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/bgpv4/BGPCommon.h \
	src/inet/networklayer/bgpv4/BGPFSM.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPOpen.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	src/inet/networklayer/bgpv4/BGPRouting.h \
	src/inet/networklayer/bgpv4/BGPRoutingTableEntry.h \
	src/inet/networklayer/bgpv4/BGPSession.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFRouting.h \
	src/inet/networklayer/ospfv2/OSPFRoutingAccess.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h \
	src/inet/util/Macho.h
$O/src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.o: src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.cc \
	src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h
$O/src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.o: src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.cc \
	src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h
$O/src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.o: src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.cc \
	src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPKeepAlive_m.h
$O/src/inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.o: src/inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPOpen_m.h \
	src/inet/networklayer/contract/IPv4Address.h
$O/src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate.o: src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	src/inet/networklayer/contract/IPv4Address.h
$O/src/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.o: src/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	src/inet/networklayer/contract/IPv4Address.h
$O/src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.o: src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPASPathSegment_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPHeader_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdatePathAttributes_m.h \
	src/inet/networklayer/bgpv4/BGPMessage/BGPUpdate_m.h \
	src/inet/networklayer/contract/IPv4Address.h
$O/src/inet/networklayer/common/InterfaceEntry.o: src/inet/networklayer/common/InterfaceEntry.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h
$O/src/inet/networklayer/common/InterfaceMatcher.o: src/inet/networklayer/common/InterfaceMatcher.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceMatcher.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/util/PatternMatcher.h \
	src/inet/util/stlutils.h
$O/src/inet/networklayer/common/InterfaceTable.o: src/inet/networklayer/common/InterfaceTable.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h
$O/src/inet/networklayer/contract/IPProtocolId_m.o: src/inet/networklayer/contract/IPProtocolId_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h
$O/src/inet/networklayer/contract/IPSocket.o: src/inet/networklayer/contract/IPSocket.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h
$O/src/inet/networklayer/contract/IPv4Address.o: src/inet/networklayer/contract/IPv4Address.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h
$O/src/inet/networklayer/contract/IPv4ControlInfo.o: src/inet/networklayer/contract/IPv4ControlInfo.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h
$O/src/inet/networklayer/contract/IPv4ControlInfo_m.o: src/inet/networklayer/contract/IPv4ControlInfo_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h
$O/src/inet/networklayer/contract/IPv6Address.o: src/inet/networklayer/contract/IPv6Address.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv6Address.h
$O/src/inet/networklayer/contract/IPv6ControlInfo.o: src/inet/networklayer/contract/IPv6ControlInfo.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h
$O/src/inet/networklayer/contract/IPv6ControlInfo_m.o: src/inet/networklayer/contract/IPv6ControlInfo_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h
$O/src/inet/networklayer/contract/IPvXAddress.o: src/inet/networklayer/contract/IPvXAddress.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h
$O/src/inet/networklayer/contract/IPvXAddressResolver.o: src/inet/networklayer/contract/IPvXAddressResolver.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h
$O/src/inet/networklayer/diffserv/BehaviorAggregateClassifier.o: src/inet/networklayer/diffserv/BehaviorAggregateClassifier.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/diffserv/BehaviorAggregateClassifier.h \
	src/inet/networklayer/diffserv/DiffservUtil.h
$O/src/inet/networklayer/diffserv/DSCPMarker.o: src/inet/networklayer/diffserv/DSCPMarker.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/diffserv/DSCPMarker.h \
	src/inet/networklayer/diffserv/DSCP_m.h \
	src/inet/networklayer/diffserv/DiffservUtil.h
$O/src/inet/networklayer/diffserv/DSCP_m.o: src/inet/networklayer/diffserv/DSCP_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/diffserv/DSCP_m.h
$O/src/inet/networklayer/diffserv/DiffservUtil.o: src/inet/networklayer/diffserv/DiffservUtil.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/diffserv/DSCP_m.h \
	src/inet/networklayer/diffserv/DiffservUtil.h \
	src/inet/util/opp_utils.h
$O/src/inet/networklayer/diffserv/MultiFieldClassifier.o: src/inet/networklayer/diffserv/MultiFieldClassifier.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/diffserv/DiffservUtil.h \
	src/inet/networklayer/diffserv/MultiFieldClassifier.h
$O/src/inet/networklayer/diffserv/SingleRateThreeColorMeter.o: src/inet/networklayer/diffserv/SingleRateThreeColorMeter.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/diffserv/DiffservUtil.h \
	src/inet/networklayer/diffserv/SingleRateThreeColorMeter.h
$O/src/inet/networklayer/diffserv/TokenBucketMeter.o: src/inet/networklayer/diffserv/TokenBucketMeter.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/diffserv/DiffservUtil.h \
	src/inet/networklayer/diffserv/TokenBucketMeter.h
$O/src/inet/networklayer/diffserv/TwoRateThreeColorMeter.o: src/inet/networklayer/diffserv/TwoRateThreeColorMeter.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/diffserv/DiffservUtil.h \
	src/inet/networklayer/diffserv/TwoRateThreeColorMeter.h
$O/src/inet/networklayer/icmpv6/ICMPv6.o: src/inet/networklayer/icmpv6/ICMPv6.cc \
	src/inet/applications/pingapp/PingPayload_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/icmpv6/ICMPv6.h \
	src/inet/networklayer/icmpv6/ICMPv6Message_m.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6InterfaceData.h \
	src/inet/status/NodeStatus.h
$O/src/inet/networklayer/icmpv6/ICMPv6Message_m.o: src/inet/networklayer/icmpv6/ICMPv6Message_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/icmpv6/ICMPv6Message_m.h
$O/src/inet/networklayer/icmpv6/IPv6NDMessage_m.o: src/inet/networklayer/icmpv6/IPv6NDMessage_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/icmpv6/ICMPv6Message_m.h \
	src/inet/networklayer/icmpv6/IPv6NDMessage_m.h
$O/src/inet/networklayer/icmpv6/IPv6NeighbourCache.o: src/inet/networklayer/icmpv6/IPv6NeighbourCache.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/icmpv6/IPv6NeighbourCache.h
$O/src/inet/networklayer/icmpv6/IPv6NeighbourDiscovery.o: src/inet/networklayer/icmpv6/IPv6NeighbourDiscovery.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/icmpv6/ICMPv6.h \
	src/inet/networklayer/icmpv6/ICMPv6Access.h \
	src/inet/networklayer/icmpv6/ICMPv6Message_m.h \
	src/inet/networklayer/icmpv6/IPv6NDMessage_m.h \
	src/inet/networklayer/icmpv6/IPv6NeighbourCache.h \
	src/inet/networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6InterfaceData.h \
	src/inet/networklayer/ipv6/RoutingTable6.h \
	src/inet/networklayer/ipv6/RoutingTable6Access.h \
	src/inet/status/NodeStatus.h
$O/src/inet/networklayer/internetcloud/CloudDelayerBase.o: src/inet/networklayer/internetcloud/CloudDelayerBase.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/internetcloud/CloudDelayerBase.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h
$O/src/inet/networklayer/internetcloud/MatrixCloudDelayer.o: src/inet/networklayer/internetcloud/MatrixCloudDelayer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/internetcloud/CloudDelayerBase.h \
	src/inet/networklayer/internetcloud/MatrixCloudDelayer.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/util/PatternMatcher.h \
	src/inet/util/XMLUtils.h
$O/src/inet/networklayer/ipv4/ErrorHandling.o: src/inet/networklayer/ipv4/ErrorHandling.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/ErrorHandling.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h
$O/src/inet/networklayer/ipv4/ICMP.o: src/inet/networklayer/ipv4/ICMP.cc \
	src/inet/applications/pingapp/PingPayload_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h
$O/src/inet/networklayer/ipv4/ICMPMessage_m.o: src/inet/networklayer/ipv4/ICMPMessage_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h
$O/src/inet/networklayer/ipv4/IGMPMessage_m.o: src/inet/networklayer/ipv4/IGMPMessage_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/IGMPMessage_m.h
$O/src/inet/networklayer/ipv4/IGMPv2.o: src/inet/networklayer/ipv4/IGMPv2.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IGMPMessage_m.h \
	src/inet/networklayer/ipv4/IGMPv2.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h
$O/src/inet/networklayer/ipv4/IPv4.o: src/inet/networklayer/ipv4/IPv4.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARPPacket_m.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/status/NodeStatus.h
$O/src/inet/networklayer/ipv4/IPv4Datagram.o: src/inet/networklayer/ipv4/IPv4Datagram.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h
$O/src/inet/networklayer/ipv4/IPv4Datagram_m.o: src/inet/networklayer/ipv4/IPv4Datagram_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h
$O/src/inet/networklayer/ipv4/IPv4FragBuf.o: src/inet/networklayer/ipv4/IPv4FragBuf.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h
$O/src/inet/networklayer/ipv4/IPv4InterfaceData.o: src/inet/networklayer/ipv4/IPv4InterfaceData.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h
$O/src/inet/networklayer/ipv4/IPv4Route.o: src/inet/networklayer/ipv4/IPv4Route.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h
$O/src/inet/networklayer/ipv4/NetworkInfo.o: src/inet/networklayer/ipv4/NetworkInfo.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/IScriptable.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/NetworkInfo.h
$O/src/inet/networklayer/ipv4/RoutingTable.o: src/inet/networklayer/ipv4/RoutingTable.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableParser.h \
	src/inet/status/NodeStatus.h \
	src/inet/util/opp_utils.h
$O/src/inet/networklayer/ipv4/RoutingTableParser.o: src/inet/networklayer/ipv4/RoutingTableParser.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableParser.h
$O/src/inet/networklayer/ipv4/RoutingTableRecorder.o: src/inet/networklayer/ipv4/RoutingTableRecorder.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableRecorder.h
$O/src/inet/networklayer/ipv6/IPv6.o: src/inet/networklayer/ipv6/IPv6.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/icmpv6/ICMPv6.h \
	src/inet/networklayer/icmpv6/ICMPv6Access.h \
	src/inet/networklayer/icmpv6/ICMPv6Message_m.h \
	src/inet/networklayer/icmpv6/IPv6NDMessage_m.h \
	src/inet/networklayer/icmpv6/IPv6NeighbourCache.h \
	src/inet/networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	src/inet/networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
	src/inet/networklayer/ipv6/IPv6.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	src/inet/networklayer/ipv6/IPv6FragBuf.h \
	src/inet/networklayer/ipv6/IPv6InterfaceData.h \
	src/inet/networklayer/ipv6/RoutingTable6.h \
	src/inet/networklayer/ipv6/RoutingTable6Access.h \
	src/inet/networklayer/ipv6tunneling/IPv6Tunneling.h \
	src/inet/networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	src/inet/status/NodeStatus.h
$O/src/inet/networklayer/ipv6/IPv6Datagram.o: src/inet/networklayer/ipv6/IPv6Datagram.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/src/inet/networklayer/ipv6/IPv6Datagram_m.o: src/inet/networklayer/ipv6/IPv6Datagram_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h
$O/src/inet/networklayer/ipv6/IPv6ErrorHandling.o: src/inet/networklayer/ipv6/IPv6ErrorHandling.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/icmpv6/ICMPv6Message_m.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6ErrorHandling.h
$O/src/inet/networklayer/ipv6/IPv6ExtensionHeaders.o: src/inet/networklayer/ipv6/IPv6ExtensionHeaders.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.o: src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h
$O/src/inet/networklayer/ipv6/IPv6FragBuf.o: src/inet/networklayer/ipv6/IPv6FragBuf.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/icmpv6/ICMPv6.h \
	src/inet/networklayer/icmpv6/ICMPv6Message_m.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	src/inet/networklayer/ipv6/IPv6FragBuf.h
$O/src/inet/networklayer/ipv6/IPv6InterfaceData.o: src/inet/networklayer/ipv6/IPv6InterfaceData.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/ipv6/IPv6InterfaceData.h
$O/src/inet/networklayer/ipv6/RoutingTable6.o: src/inet/networklayer/ipv6/RoutingTable6.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv6/IPv6InterfaceData.h \
	src/inet/networklayer/ipv6/RoutingTable6.h \
	src/inet/networklayer/ipv6tunneling/IPv6Tunneling.h \
	src/inet/networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	src/inet/util/opp_utils.h
$O/src/inet/networklayer/ipv6tunneling/IPv6Tunneling.o: src/inet/networklayer/ipv6tunneling/IPv6Tunneling.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6InterfaceData.h \
	src/inet/networklayer/ipv6/RoutingTable6.h \
	src/inet/networklayer/ipv6/RoutingTable6Access.h \
	src/inet/networklayer/ipv6tunneling/IPv6Tunneling.h \
	src/inet/status/NodeStatus.h
$O/src/inet/networklayer/ldp/LDP.o: src/inet/networklayer/ldp/LDP.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/ldp/LDP.h \
	src/inet/networklayer/ldp/LDPPacket_m.h \
	src/inet/networklayer/mpls/ConstType.h \
	src/inet/networklayer/mpls/IClassifier.h \
	src/inet/networklayer/mpls/LIBTable.h \
	src/inet/networklayer/mpls/LIBTableAccess.h \
	src/inet/networklayer/rsvp_te/IntServ.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/ted/TED.h \
	src/inet/networklayer/ted/TEDAccess.h \
	src/inet/networklayer/ted/TED_m.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h
$O/src/inet/networklayer/ldp/LDPPacket_m.o: src/inet/networklayer/ldp/LDPPacket_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ldp/LDPPacket_m.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.o: src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.o: src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/compatibility.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.o: src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.o: src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.cc \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.o: src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	src/inet/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	src/inet/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.o: src/inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.h
$O/src/inet/networklayer/manetrouting/base/ControlManetRouting_m.o: src/inet/networklayer/manetrouting/base/ControlManetRouting_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h
$O/src/inet/networklayer/manetrouting/base/ManetAddress.o: src/inet/networklayer/manetrouting/base/ManetAddress.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h
$O/src/inet/networklayer/manetrouting/base/ManetNetfilterHook.o: src/inet/networklayer/manetrouting/base/ManetNetfilterHook.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/base/ManetRoutingBase.o: src/inet/networklayer/manetrouting/base/ManetRoutingBase.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IPassiveQueue.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/PassiveQueueBase.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	src/inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlInfoBreakLink_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/base/MeshControlInfo_m.o: src/inet/networklayer/manetrouting/base/MeshControlInfo_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/manetrouting/base/MeshControlInfo_m.h
$O/src/inet/networklayer/manetrouting/batman/BatmanMain.o: src/inet/networklayer/manetrouting/batman/BatmanMain.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/batman/BatmanMain.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg_m.h \
	src/inet/networklayer/manetrouting/batman/batmand/batman.h \
	src/inet/transport/udp/UDPPacket_m.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/batman/BatmanMsg_m.o: src/inet/networklayer/manetrouting/batman/BatmanMsg_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg_m.h
$O/src/inet/networklayer/manetrouting/batman/batmand/batman.o: src/inet/networklayer/manetrouting/batman/batmand/batman.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/batman/BatmanMain.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg_m.h \
	src/inet/networklayer/manetrouting/batman/batmand/batman.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/batman/batmand/bitarray.o: src/inet/networklayer/manetrouting/batman/batmand/bitarray.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/batman/BatmanMain.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg_m.h \
	src/inet/networklayer/manetrouting/batman/batmand/batman.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/batman/batmand/hna.o: src/inet/networklayer/manetrouting/batman/batmand/hna.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/batman/BatmanMain.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg_m.h \
	src/inet/networklayer/manetrouting/batman/batmand/batman.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/batman/batmand/originator.o: src/inet/networklayer/manetrouting/batman/batmand/originator.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/batman/BatmanMain.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg_m.h \
	src/inet/networklayer/manetrouting/batman/batmand/batman.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/batman/batmand/os.o: src/inet/networklayer/manetrouting/batman/batmand/os.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/batman/BatmanMain.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg_m.h \
	src/inet/networklayer/manetrouting/batman/batmand/batman.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/batman/batmand/ring_buffer.o: src/inet/networklayer/manetrouting/batman/batmand/ring_buffer.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/batman/BatmanMain.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg_m.h \
	src/inet/networklayer/manetrouting/batman/batmand/batman.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/batman/batmand/schedule.o: src/inet/networklayer/manetrouting/batman/batmand/schedule.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/batman/BatmanMain.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg.h \
	src/inet/networklayer/manetrouting/batman/BatmanMsg_m.h \
	src/inet/networklayer/manetrouting/batman/batmand/batman.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dsdv/DSDV_2.o: src/inet/networklayer/manetrouting/dsdv/DSDV_2.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/dsdv/DSDV_2.h \
	src/inet/networklayer/manetrouting/dsdv/DSDVhello_m.h
$O/src/inet/networklayer/manetrouting/dsdv/DSDVhello_m.o: src/inet/networklayer/manetrouting/dsdv/DSDVhello_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/manetrouting/dsdv/DSDVhello_m.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.o: src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.o: src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rtc.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.o: src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/compatibility_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu-omnetpp.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/debug_dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-ack.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-io.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rerr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rrep.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-rreq.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr-srt.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/dsr_list.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/link-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/maint-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/neigh.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/path-cache.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/send-buf.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/tbl.h \
	src/inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.o: src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h
$O/src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.o: src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.o: src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.o: src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.o: src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.o: src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.o: src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.o: src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.o: src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/MeshControlInfo_m.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.o: src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.o: src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.o: src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.o: src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.o: src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.o: src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/rtable.o: src/inet/networklayer/manetrouting/dymo/dymoum/rtable.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.o: src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo/dymo_msg_struct.h \
	src/inet/networklayer/manetrouting/dymo/dymo_packet_queue_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymo_um_omnet.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/blacklist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/debug_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/defs_dymo.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dlist.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_generic.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_hello.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_nb.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_re.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_rerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_timeout.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/dymo_uerr.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/icmp_socket.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/pending_rreq.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/rtable.h \
	src/inet/networklayer/manetrouting/dymo/dymoum/timer_queue.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ControlManetRouting_m.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.cc \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.cc \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.cc \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.cc \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.cc \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.cc \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.cc \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_DataQueue.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_OutstandingRREQList.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Packet_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREP_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RREQ_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingEntry.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RoutingTable.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timeout_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_Timer.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_TokenBucket.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/src/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.o: src/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.cc \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_UERR_m.h
$O/src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.o: src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_AddressBlock.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_PacketBBMessage_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RERR_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/DYMO_RM_m.h \
	src/inet/networklayer/manetrouting/dymo_fau/InspectorHelpers.h
$O/src/inet/networklayer/manetrouting/olsr/OLSR.o: src/inet/networklayer/manetrouting/olsr/OLSR.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/olsr/OLSR.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_state.h \
	src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h \
	src/inet/util/FWMath.h \
	src/inet/util/opp_utils.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/olsr/OLSROPT.o: src/inet/networklayer/manetrouting/olsr/OLSROPT.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/olsr/OLSR.h \
	src/inet/networklayer/manetrouting/olsr/OLSROPT.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_state.h \
	src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h \
	src/inet/util/FWMath.h \
	src/inet/util/opp_utils.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/olsr/OLSR_ETX.o: src/inet/networklayer/manetrouting/olsr/OLSR_ETX.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/olsr/OLSR.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_state.h \
	src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h \
	src/inet/util/FWMath.h \
	src/inet/util/opp_utils.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.o: src/inet/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/olsr/OLSR.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_dijkstra.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_state.h \
	src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	src/inet/util/FWMath.h \
	src/inet/util/opp_utils.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/olsr/OLSR_ETX_state.o: src/inet/networklayer/manetrouting/olsr/OLSR_ETX_state.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/olsr/OLSR.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_repositories.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_state.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_state.h \
	src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	src/inet/util/FWMath.h \
	src/inet/util/opp_utils.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/olsr/OLSR_rtable.o: src/inet/networklayer/manetrouting/olsr/OLSR_rtable.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/olsr/OLSR.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_state.h \
	src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	src/inet/util/FWMath.h \
	src/inet/util/opp_utils.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/olsr/OLSR_state.o: src/inet/networklayer/manetrouting/olsr/OLSR_state.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/ARP.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/base/ManetNetfilterHook.h \
	src/inet/networklayer/manetrouting/base/ManetRoutingBase.h \
	src/inet/networklayer/manetrouting/base/compatibility.h \
	src/inet/networklayer/manetrouting/olsr/OLSR.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_repositories.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_rtable.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_state.h \
	src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.h \
	src/inet/util/FWMath.h \
	src/inet/util/opp_utils.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.o: src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/manetrouting/base/ManetAddress.h \
	src/inet/networklayer/manetrouting/olsr/OLSR_ETX_parameter.h \
	src/inet/networklayer/manetrouting/olsr/OLSRpkt_m.h
$O/src/inet/networklayer/mpls/LIBTable.o: src/inet/networklayer/mpls/LIBTable.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/mpls/ConstType.h \
	src/inet/networklayer/mpls/LIBTable.h \
	src/inet/util/XMLUtils.h
$O/src/inet/networklayer/mpls/MPLS.o: src/inet/networklayer/mpls/MPLS.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/ldp/LDP.h \
	src/inet/networklayer/ldp/LDPPacket_m.h \
	src/inet/networklayer/mpls/ConstType.h \
	src/inet/networklayer/mpls/IClassifier.h \
	src/inet/networklayer/mpls/LIBTable.h \
	src/inet/networklayer/mpls/LIBTableAccess.h \
	src/inet/networklayer/mpls/MPLS.h \
	src/inet/networklayer/mpls/MPLSPacket.h \
	src/inet/networklayer/rsvp_te/IntServ.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/rsvp_te/Utils.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/networklayer/mpls/MPLSPacket.o: src/inet/networklayer/mpls/MPLSPacket.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/mpls/MPLSPacket.h
$O/src/inet/networklayer/ospfv2/OSPFConfigReader.o: src/inet/networklayer/ospfv2/OSPFConfigReader.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/ospfv2/OSPFConfigReader.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h \
	src/inet/util/PatternMatcher.h \
	src/inet/util/XMLUtils.h
$O/src/inet/networklayer/ospfv2/OSPFPacket_m.o: src/inet/networklayer/ospfv2/OSPFPacket_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h
$O/src/inet/networklayer/ospfv2/OSPFRouting.o: src/inet/networklayer/ospfv2/OSPFRouting.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/ospfv2/OSPFConfigReader.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFRouting.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h \
	src/inet/status/NodeStatus.h
$O/src/inet/networklayer/ospfv2/interface/OSPFInterface.o: src/inet/networklayer/ospfv2/interface/OSPFInterface.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.o: src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.o: src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateBackup.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.o: src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDesignatedRouter.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.o: src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.o: src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.o: src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateNotDesignatedRouter.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.o: src/inet/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStatePointToPoint.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.o: src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceState.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateDown.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateLoopback.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterfaceStateWaiting.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.o: src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/messagehandler/HelloHandler.o: src/inet/networklayer/ospfv2/messagehandler/HelloHandler.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.o: src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.o: src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.o: src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/messagehandler/MessageHandler.o: src/inet/networklayer/ospfv2/messagehandler/MessageHandler.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.o: src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.o: src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.o: src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.o: src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateAttempt.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.o: src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.o: src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchange.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.o: src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.o: src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.o: src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateFull.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateLoading.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.o: src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborState.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateDown.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateExchangeStart.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateInit.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighborStateTwoWay.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/router/ASExternalLSA.o: src/inet/networklayer/ospfv2/router/ASExternalLSA.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/router/LSA.o: src/inet/networklayer/ospfv2/router/LSA.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/router/NetworkLSA.o: src/inet/networklayer/ospfv2/router/NetworkLSA.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/router/OSPFArea.o: src/inet/networklayer/ospfv2/router/OSPFArea.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/router/OSPFRouter.o: src/inet/networklayer/ospfv2/router/OSPFRouter.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/OSPFTimer.h \
	src/inet/networklayer/ospfv2/interface/OSPFInterface.h \
	src/inet/networklayer/ospfv2/messagehandler/DatabaseDescriptionHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/HelloHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/IMessageHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateAcknowledgementHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateRequestHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/LinkStateUpdateHandler.h \
	src/inet/networklayer/ospfv2/messagehandler/MessageHandler.h \
	src/inet/networklayer/ospfv2/neighbor/OSPFNeighbor.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFArea.h \
	src/inet/networklayer/ospfv2/router/OSPFRouter.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.o: src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFRoutingTableEntry.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/router/RouterLSA.o: src/inet/networklayer/ospfv2/router/RouterLSA.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/ospfv2/router/SummaryLSA.o: src/inet/networklayer/ospfv2/router/SummaryLSA.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ospfv2/OSPFPacket_m.h \
	src/inet/networklayer/ospfv2/router/LSA.h \
	src/inet/networklayer/ospfv2/router/OSPFcommon.h
$O/src/inet/networklayer/routing/aodv/AODVControlPackets_m.o: src/inet/networklayer/routing/aodv/AODVControlPackets_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/routing/aodv/AODVControlPackets_m.h
$O/src/inet/networklayer/routing/aodv/AODVRouteData.o: src/inet/networklayer/routing/aodv/AODVRouteData.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/routing/aodv/AODVRouteData.h
$O/src/inet/networklayer/routing/aodv/AODVRouting.o: src/inet/networklayer/routing/aodv/AODVRouting.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/routing/aodv/AODVControlPackets_m.h \
	src/inet/networklayer/routing/aodv/AODVRouteData.h \
	src/inet/networklayer/routing/aodv/AODVRouting.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPControlInfo.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h
$O/src/inet/networklayer/routing/dymo/DYMORouteData.o: src/inet/networklayer/routing/dymo/DYMORouteData.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/routing/dymo/DYMORouteData.h \
	src/inet/networklayer/routing/dymo/DYMOdefs.h
$O/src/inet/networklayer/routing/dymo/DYMO_m.o: src/inet/networklayer/routing/dymo/DYMO_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/routing/dymo/DYMO_m.h \
	src/inet/networklayer/routing/dymo/DYMOdefs.h
$O/src/inet/networklayer/routing/dymo/xDYMO.o: src/inet/networklayer/routing/dymo/xDYMO.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/Ieee802Ctrl_m.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	src/inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/routing/dymo/DYMORouteData.h \
	src/inet/networklayer/routing/dymo/DYMO_m.h \
	src/inet/networklayer/routing/dymo/DYMOdefs.h \
	src/inet/networklayer/routing/dymo/xDYMO.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPControlInfo.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h
$O/src/inet/networklayer/routing/gpsr/GPSR.o: src/inet/networklayer/routing/gpsr/GPSR.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/routing/gpsr/GPSR.h \
	src/inet/networklayer/routing/gpsr/GPSRDefs.h \
	src/inet/networklayer/routing/gpsr/GPSR_m.h \
	src/inet/networklayer/routing/gpsr/PositionTable.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/routing/gpsr/GPSR_m.o: src/inet/networklayer/routing/gpsr/GPSR_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/routing/gpsr/GPSRDefs.h \
	src/inet/networklayer/routing/gpsr/GPSR_m.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/routing/gpsr/PositionTable.o: src/inet/networklayer/routing/gpsr/PositionTable.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/routing/gpsr/PositionTable.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/networklayer/routing/rip/RIPPacket_m.o: src/inet/networklayer/routing/rip/RIPPacket_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/routing/rip/RIPPacket_m.h
$O/src/inet/networklayer/routing/rip/RIPRouting.o: src/inet/networklayer/routing/rip/RIPRouting.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceMatcher.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/routing/rip/RIPPacket_m.h \
	src/inet/networklayer/routing/rip/RIPRouting.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPControlInfo.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/udp/UDP.h
$O/src/inet/networklayer/rsvp_te/IntServ_m.o: src/inet/networklayer/rsvp_te/IntServ_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h
$O/src/inet/networklayer/rsvp_te/RSVP.o: src/inet/networklayer/rsvp_te/RSVP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IScriptable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/mpls/ConstType.h \
	src/inet/networklayer/mpls/IClassifier.h \
	src/inet/networklayer/mpls/LIBTable.h \
	src/inet/networklayer/mpls/LIBTableAccess.h \
	src/inet/networklayer/rsvp_te/IRSVPClassifier.h \
	src/inet/networklayer/rsvp_te/IntServ.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/rsvp_te/RSVP.h \
	src/inet/networklayer/rsvp_te/RSVPHelloMsg.h \
	src/inet/networklayer/rsvp_te/RSVPHello_m.h \
	src/inet/networklayer/rsvp_te/RSVPPacket.h \
	src/inet/networklayer/rsvp_te/RSVPPacket_m.h \
	src/inet/networklayer/rsvp_te/RSVPPathMsg.h \
	src/inet/networklayer/rsvp_te/RSVPPathMsg_m.h \
	src/inet/networklayer/rsvp_te/RSVPResvMsg.h \
	src/inet/networklayer/rsvp_te/RSVPResvMsg_m.h \
	src/inet/networklayer/rsvp_te/SignallingMsg_m.h \
	src/inet/networklayer/rsvp_te/Utils.h \
	src/inet/networklayer/ted/TED.h \
	src/inet/networklayer/ted/TEDAccess.h \
	src/inet/networklayer/ted/TED_m.h \
	src/inet/status/NodeStatus.h \
	src/inet/util/XMLUtils.h \
	src/inet/util/common.h
$O/src/inet/networklayer/rsvp_te/RSVPHello_m.o: src/inet/networklayer/rsvp_te/RSVPHello_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/rsvp_te/RSVPHello_m.h \
	src/inet/networklayer/rsvp_te/RSVPPacket.h \
	src/inet/networklayer/rsvp_te/RSVPPacket_m.h
$O/src/inet/networklayer/rsvp_te/RSVPPacket_m.o: src/inet/networklayer/rsvp_te/RSVPPacket_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/rsvp_te/RSVPPacket_m.h
$O/src/inet/networklayer/rsvp_te/RSVPPathMsg_m.o: src/inet/networklayer/rsvp_te/RSVPPathMsg_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/rsvp_te/IntServ.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/rsvp_te/RSVPPacket.h \
	src/inet/networklayer/rsvp_te/RSVPPacket_m.h \
	src/inet/networklayer/rsvp_te/RSVPPathMsg_m.h
$O/src/inet/networklayer/rsvp_te/RSVPResvMsg_m.o: src/inet/networklayer/rsvp_te/RSVPResvMsg_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/rsvp_te/IntServ.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/rsvp_te/RSVPPacket.h \
	src/inet/networklayer/rsvp_te/RSVPPacket_m.h \
	src/inet/networklayer/rsvp_te/RSVPResvMsg_m.h
$O/src/inet/networklayer/rsvp_te/SignallingMsg_m.o: src/inet/networklayer/rsvp_te/SignallingMsg_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/rsvp_te/IntServ.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/rsvp_te/SignallingMsg_m.h
$O/src/inet/networklayer/rsvp_te/SimpleClassifier.o: src/inet/networklayer/rsvp_te/SimpleClassifier.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/IScriptable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/mpls/ConstType.h \
	src/inet/networklayer/mpls/IClassifier.h \
	src/inet/networklayer/mpls/LIBTable.h \
	src/inet/networklayer/mpls/LIBTableAccess.h \
	src/inet/networklayer/rsvp_te/IRSVPClassifier.h \
	src/inet/networklayer/rsvp_te/IntServ.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/rsvp_te/RSVP.h \
	src/inet/networklayer/rsvp_te/RSVPAccess.h \
	src/inet/networklayer/rsvp_te/RSVPHelloMsg.h \
	src/inet/networklayer/rsvp_te/RSVPHello_m.h \
	src/inet/networklayer/rsvp_te/RSVPPacket.h \
	src/inet/networklayer/rsvp_te/RSVPPacket_m.h \
	src/inet/networklayer/rsvp_te/RSVPPathMsg.h \
	src/inet/networklayer/rsvp_te/RSVPPathMsg_m.h \
	src/inet/networklayer/rsvp_te/RSVPResvMsg.h \
	src/inet/networklayer/rsvp_te/RSVPResvMsg_m.h \
	src/inet/networklayer/rsvp_te/SignallingMsg_m.h \
	src/inet/networklayer/rsvp_te/SimpleClassifier.h \
	src/inet/util/XMLUtils.h
$O/src/inet/networklayer/rsvp_te/Utils.o: src/inet/networklayer/rsvp_te/Utils.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/rsvp_te/IntServ.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/rsvp_te/Utils.h
$O/src/inet/networklayer/ted/LinkStatePacket_m.o: src/inet/networklayer/ted/LinkStatePacket_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ted/LinkStatePacket_m.h \
	src/inet/networklayer/ted/TED_m.h
$O/src/inet/networklayer/ted/LinkStateRouting.o: src/inet/networklayer/ted/LinkStateRouting.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/rsvp_te/IntServ.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/ted/LinkStatePacket_m.h \
	src/inet/networklayer/ted/LinkStateRouting.h \
	src/inet/networklayer/ted/TED.h \
	src/inet/networklayer/ted/TEDAccess.h \
	src/inet/networklayer/ted/TED_m.h
$O/src/inet/networklayer/ted/TED.o: src/inet/networklayer/ted/TED.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/rsvp_te/IntServ.h \
	src/inet/networklayer/rsvp_te/IntServ_m.h \
	src/inet/networklayer/ted/TED.h \
	src/inet/networklayer/ted/TED_m.h \
	src/inet/status/NodeStatus.h
$O/src/inet/networklayer/ted/TED_m.o: src/inet/networklayer/ted/TED_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ted/TED_m.h
$O/src/inet/networklayer/xmipv6/BindingCache.o: src/inet/networklayer/xmipv6/BindingCache.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/xmipv6/BindingCache.h
$O/src/inet/networklayer/xmipv6/BindingUpdateList.o: src/inet/networklayer/xmipv6/BindingUpdateList.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/ipv6/IPv6InterfaceData.h \
	src/inet/networklayer/xmipv6/BindingUpdateList.h
$O/src/inet/networklayer/xmipv6/MobilityHeader.o: src/inet/networklayer/xmipv6/MobilityHeader.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	src/inet/networklayer/xmipv6/MobilityHeader.h \
	src/inet/networklayer/xmipv6/MobilityHeader_m.h
$O/src/inet/networklayer/xmipv6/MobilityHeader_m.o: src/inet/networklayer/xmipv6/MobilityHeader_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	src/inet/networklayer/xmipv6/MobilityHeader_m.h
$O/src/inet/networklayer/xmipv6/xMIPv6.o: src/inet/networklayer/xmipv6/xMIPv6.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/icmpv6/ICMPv6Message_m.h \
	src/inet/networklayer/icmpv6/IPv6NDMessage_m.h \
	src/inet/networklayer/icmpv6/IPv6NeighbourCache.h \
	src/inet/networklayer/icmpv6/IPv6NeighbourDiscovery.h \
	src/inet/networklayer/icmpv6/IPv6NeighbourDiscoveryAccess.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders.h \
	src/inet/networklayer/ipv6/IPv6ExtensionHeaders_m.h \
	src/inet/networklayer/ipv6/IPv6InterfaceData.h \
	src/inet/networklayer/ipv6/RoutingTable6.h \
	src/inet/networklayer/ipv6/RoutingTable6Access.h \
	src/inet/networklayer/ipv6tunneling/IPv6Tunneling.h \
	src/inet/networklayer/ipv6tunneling/IPv6TunnelingAccess.h \
	src/inet/networklayer/xmipv6/BindingCache.h \
	src/inet/networklayer/xmipv6/BindingCacheAccess.h \
	src/inet/networklayer/xmipv6/BindingUpdateList.h \
	src/inet/networklayer/xmipv6/BindingUpdateListAccess.h \
	src/inet/networklayer/xmipv6/MobilityHeader.h \
	src/inet/networklayer/xmipv6/MobilityHeader_m.h \
	src/inet/networklayer/xmipv6/xMIPv6.h
$O/src/inet/status/NodeStatus.o: src/inet/status/NodeStatus.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/status/NodeStatus.h
$O/src/inet/transport/contract/SCTPCommand_m.o: src/inet/transport/contract/SCTPCommand_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h
$O/src/inet/transport/contract/SCTPSocket.o: src/inet/transport/contract/SCTPSocket.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/SCTPSocket.h
$O/src/inet/transport/contract/TCPCommand_m.o: src/inet/transport/contract/TCPCommand_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h
$O/src/inet/transport/contract/TCPSocket.o: src/inet/transport/contract/TCPSocket.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h
$O/src/inet/transport/contract/TCPSocketMap.o: src/inet/transport/contract/TCPSocketMap.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/contract/TCPSocket.h \
	src/inet/transport/contract/TCPSocketMap.h
$O/src/inet/transport/contract/UDPControlInfo_m.o: src/inet/transport/contract/UDPControlInfo_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPControlInfo_m.h
$O/src/inet/transport/contract/UDPSocket.o: src/inet/transport/contract/UDPSocket.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPControlInfo.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h
$O/src/inet/transport/rtp/RTCP.o: src/inet/transport/rtp/RTCP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/rtp/RTCP.h \
	src/inet/transport/rtp/RTCPPacket.h \
	src/inet/transport/rtp/RTCPPacket1.h \
	src/inet/transport/rtp/RTCPPacket1_m.h \
	src/inet/transport/rtp/RTCPPacket2.h \
	src/inet/transport/rtp/RTCPPacket2_m.h \
	src/inet/transport/rtp/RTCPPacket3.h \
	src/inet/transport/rtp/RTCPPacket3_m.h \
	src/inet/transport/rtp/RTPInnerPacket.h \
	src/inet/transport/rtp/RTPInnerPacket_m.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPParticipantInfo.h \
	src/inet/transport/rtp/RTPParticipantInfo_m.h \
	src/inet/transport/rtp/RTPReceiverInfo.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h \
	src/inet/transport/rtp/RTPSenderInfo.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h \
	src/inet/transport/rtp/reports.h \
	src/inet/transport/rtp/reports_m.h \
	src/inet/transport/rtp/sdes.h
$O/src/inet/transport/rtp/RTCPPacket.o: src/inet/transport/rtp/RTCPPacket.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/rtp/RTCPPacket.h \
	src/inet/transport/rtp/RTCPPacket1.h \
	src/inet/transport/rtp/RTCPPacket1_m.h \
	src/inet/transport/rtp/RTCPPacket2.h \
	src/inet/transport/rtp/RTCPPacket2_m.h \
	src/inet/transport/rtp/RTCPPacket3.h \
	src/inet/transport/rtp/RTCPPacket3_m.h \
	src/inet/transport/rtp/reports.h \
	src/inet/transport/rtp/reports_m.h \
	src/inet/transport/rtp/sdes.h
$O/src/inet/transport/rtp/RTCPPacket1_m.o: src/inet/transport/rtp/RTCPPacket1_m.cc \
	src/inet/transport/rtp/RTCPPacket1_m.h
$O/src/inet/transport/rtp/RTCPPacket2_m.o: src/inet/transport/rtp/RTCPPacket2_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/rtp/RTCPPacket1.h \
	src/inet/transport/rtp/RTCPPacket1_m.h \
	src/inet/transport/rtp/RTCPPacket2_m.h \
	src/inet/transport/rtp/reports.h \
	src/inet/transport/rtp/reports_m.h \
	src/inet/transport/rtp/sdes.h
$O/src/inet/transport/rtp/RTCPPacket3_m.o: src/inet/transport/rtp/RTCPPacket3_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/rtp/RTCPPacket1.h \
	src/inet/transport/rtp/RTCPPacket1_m.h \
	src/inet/transport/rtp/RTCPPacket2.h \
	src/inet/transport/rtp/RTCPPacket2_m.h \
	src/inet/transport/rtp/RTCPPacket3_m.h \
	src/inet/transport/rtp/reports.h \
	src/inet/transport/rtp/reports_m.h \
	src/inet/transport/rtp/sdes.h
$O/src/inet/transport/rtp/RTP.o: src/inet/transport/rtp/RTP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/rtp/RTP.h \
	src/inet/transport/rtp/RTPInnerPacket.h \
	src/inet/transport/rtp/RTPInnerPacket_m.h \
	src/inet/transport/rtp/RTPInterfacePacket_m.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPProfile.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/src/inet/transport/rtp/RTPInnerPacket.o: src/inet/transport/rtp/RTPInnerPacket.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPInnerPacket.h \
	src/inet/transport/rtp/RTPInnerPacket_m.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/src/inet/transport/rtp/RTPInnerPacket_m.o: src/inet/transport/rtp/RTPInnerPacket_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPInnerPacket_m.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/src/inet/transport/rtp/RTPInterfacePacket_m.o: src/inet/transport/rtp/RTPInterfacePacket_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPInterfacePacket_m.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/src/inet/transport/rtp/RTPPacket.o: src/inet/transport/rtp/RTPPacket.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h
$O/src/inet/transport/rtp/RTPPacket_m.o: src/inet/transport/rtp/RTPPacket_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/rtp/RTPPacket_m.h
$O/src/inet/transport/rtp/RTPParticipantInfo.o: src/inet/transport/rtp/RTPParticipantInfo.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPParticipantInfo.h \
	src/inet/transport/rtp/RTPParticipantInfo_m.h \
	src/inet/transport/rtp/reports.h \
	src/inet/transport/rtp/reports_m.h \
	src/inet/transport/rtp/sdes.h
$O/src/inet/transport/rtp/RTPParticipantInfo_m.o: src/inet/transport/rtp/RTPParticipantInfo_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPParticipantInfo_m.h
$O/src/inet/transport/rtp/RTPPayloadReceiver.o: src/inet/transport/rtp/RTPPayloadReceiver.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPInnerPacket.h \
	src/inet/transport/rtp/RTPInnerPacket_m.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPPayloadReceiver.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/src/inet/transport/rtp/RTPPayloadSender.o: src/inet/transport/rtp/RTPPayloadSender.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPInnerPacket.h \
	src/inet/transport/rtp/RTPInnerPacket_m.h \
	src/inet/transport/rtp/RTPInterfacePacket_m.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPPayloadSender.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/src/inet/transport/rtp/RTPProfile.o: src/inet/transport/rtp/RTPProfile.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPInnerPacket.h \
	src/inet/transport/rtp/RTPInnerPacket_m.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPPayloadReceiver.h \
	src/inet/transport/rtp/RTPPayloadSender.h \
	src/inet/transport/rtp/RTPProfile.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/src/inet/transport/rtp/RTPReceiverInfo.o: src/inet/transport/rtp/RTPReceiverInfo.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPParticipantInfo.h \
	src/inet/transport/rtp/RTPParticipantInfo_m.h \
	src/inet/transport/rtp/RTPReceiverInfo.h \
	src/inet/transport/rtp/reports.h \
	src/inet/transport/rtp/reports_m.h \
	src/inet/transport/rtp/sdes.h
$O/src/inet/transport/rtp/RTPSenderControlMessage_m.o: src/inet/transport/rtp/RTPSenderControlMessage_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h
$O/src/inet/transport/rtp/RTPSenderInfo.o: src/inet/transport/rtp/RTPSenderInfo.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPParticipantInfo.h \
	src/inet/transport/rtp/RTPParticipantInfo_m.h \
	src/inet/transport/rtp/RTPSenderInfo.h \
	src/inet/transport/rtp/reports.h \
	src/inet/transport/rtp/reports_m.h \
	src/inet/transport/rtp/sdes.h
$O/src/inet/transport/rtp/RTPSenderStatusMessage_m.o: src/inet/transport/rtp/RTPSenderStatusMessage_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h
$O/src/inet/transport/rtp/reports.o: src/inet/transport/rtp/reports.cc \
	src/inet/transport/rtp/reports.h \
	src/inet/transport/rtp/reports_m.h
$O/src/inet/transport/rtp/reports_m.o: src/inet/transport/rtp/reports_m.cc \
	src/inet/transport/rtp/reports_m.h
$O/src/inet/transport/rtp/sdes.o: src/inet/transport/rtp/sdes.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/rtp/sdes.h
$O/src/inet/transport/rtp/profiles/avprofile/RTPAVProfile.o: src/inet/transport/rtp/profiles/avprofile/RTPAVProfile.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/rtp/RTPProfile.h \
	src/inet/transport/rtp/profiles/avprofile/RTPAVProfile.h
$O/src/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.o: src/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPPayloadReceiver.h \
	src/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Receiver.h \
	src/inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/src/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.o: src/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/transport/rtp/RTPInnerPacket.h \
	src/inet/transport/rtp/RTPInnerPacket_m.h \
	src/inet/transport/rtp/RTPPacket.h \
	src/inet/transport/rtp/RTPPacket_m.h \
	src/inet/transport/rtp/RTPPayloadSender.h \
	src/inet/transport/rtp/RTPSenderControlMessage_m.h \
	src/inet/transport/rtp/RTPSenderStatusMessage_m.h \
	src/inet/transport/rtp/profiles/avprofile/RTPAVProfilePayload32Sender.h \
	src/inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/src/inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.o: src/inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.cc \
	src/inet/transport/rtp/profiles/avprofile/RTPMpegPacket_m.h
$O/src/inet/transport/sctp/SCTP.o: src/inet/transport/sctp/SCTP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPAlg.o: src/inet/transport/sctp/SCTPAlg.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAlg.h \
	src/inet/transport/sctp/SCTPAlgorithm.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPAssociationAddIP.o: src/inet/transport/sctp/SCTPAssociationAddIP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h \
	src/inet/util/common.h
$O/src/inet/transport/sctp/SCTPAssociationBase.o: src/inet/transport/sctp/SCTPAssociationBase.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/ipv6/RoutingTable6.h \
	src/inet/networklayer/ipv6/RoutingTable6Access.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAlgorithm.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPAssociationEventProc.o: src/inet/transport/sctp/SCTPAssociationEventProc.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAlgorithm.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPAssociationRcvMessage.o: src/inet/transport/sctp/SCTPAssociationRcvMessage.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAlgorithm.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h \
	src/inet/util/common.h
$O/src/inet/transport/sctp/SCTPAssociationSendAll.o: src/inet/transport/sctp/SCTPAssociationSendAll.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAlgorithm.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPAssociationStreamReset.o: src/inet/transport/sctp/SCTPAssociationStreamReset.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPAssociationUtil.o: src/inet/transport/sctp/SCTPAssociationUtil.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/networklayer/ipv6/RoutingTable6.h \
	src/inet/networklayer/ipv6/RoutingTable6Access.h \
	src/inet/transport/contract/SCTPCommand.h \
	src/inet/transport/contract/SCTPCommand_m.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAlgorithm.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h \
	src/inet/util/common.h
$O/src/inet/transport/sctp/SCTPCCFunctions.o: src/inet/transport/sctp/SCTPCCFunctions.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPGapList.o: src/inet/transport/sctp/SCTPGapList.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPMessage.o: src/inet/transport/sctp/SCTPMessage.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPMessage_m.o: src/inet/transport/sctp/SCTPMessage_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/sctp/SCTPMessage_m.h
$O/src/inet/transport/sctp/SCTPNatHook.o: src/inet/transport/sctp/SCTPNatHook.cc \
	src/inet/base/AbstractQueue.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/base/ProtocolMap.h \
	src/inet/base/QueueBase.h \
	src/inet/base/ReassemblyBuffer.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/arp/IARPCache.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/INetfilter.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/ICMP.h \
	src/inet/networklayer/ipv4/ICMPAccess.h \
	src/inet/networklayer/ipv4/ICMPMessage.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/networklayer/ipv4/IPv4FragBuf.h \
	src/inet/networklayer/ipv4/IPv4InterfaceData.h \
	src/inet/networklayer/ipv4/IPv4Route.h \
	src/inet/networklayer/ipv4/IRoutingTable.h \
	src/inet/networklayer/ipv4/RoutingTableAccess.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPNatHook.h \
	src/inet/transport/sctp/SCTPNatTable.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPNatTable.o: src/inet/transport/sctp/SCTPNatTable.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPNatTable.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPQueue.o: src/inet/transport/sctp/SCTPQueue.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPReceiveStream.o: src/inet/transport/sctp/SCTPReceiveStream.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPSSFunctions.o: src/inet/transport/sctp/SCTPSSFunctions.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/sctp/SCTPSendStream.o: src/inet/transport/sctp/SCTPSendStream.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h
$O/src/inet/transport/tcp/TCP.o: src/inet/transport/tcp/TCP.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayBuffer.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPReceiveQueue.h \
	src/inet/transport/tcp/TCPSendQueue.h \
	src/inet/transport/tcp/queues/TCPByteStreamRcvQueue.h \
	src/inet/transport/tcp/queues/TCPByteStreamSendQueue.h \
	src/inet/transport/tcp/queues/TCPMsgBasedRcvQueue.h \
	src/inet/transport/tcp/queues/TCPMsgBasedSendQueue.h \
	src/inet/transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	src/inet/transport/tcp/queues/TCPVirtualDataSendQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/TCPConnectionBase.o: src/inet/transport/tcp/TCPConnectionBase.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPReceiveQueue.h \
	src/inet/transport/tcp/TCPSACKRexmitQueue.h \
	src/inet/transport/tcp/TCPSendQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/TCPConnectionEventProc.o: src/inet/transport/tcp/TCPConnectionEventProc.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPReceiveQueue.h \
	src/inet/transport/tcp/TCPSendQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/TCPConnectionRcvSegment.o: src/inet/transport/tcp/TCPConnectionRcvSegment.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPReceiveQueue.h \
	src/inet/transport/tcp/TCPSACKRexmitQueue.h \
	src/inet/transport/tcp/TCPSendQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/TCPConnectionSackUtil.o: src/inet/transport/tcp/TCPConnectionSackUtil.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPReceiveQueue.h \
	src/inet/transport/tcp/TCPSACKRexmitQueue.h \
	src/inet/transport/tcp/TCPSendQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/TCPConnectionUtil.o: src/inet/transport/tcp/TCPConnectionUtil.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPReceiveQueue.h \
	src/inet/transport/tcp/TCPSACKRexmitQueue.h \
	src/inet/transport/tcp/TCPSendQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/TCPSACKRexmitQueue.o: src/inet/transport/tcp/TCPSACKRexmitQueue.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPSACKRexmitQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/flavours/DumbTCP.o: src/inet/transport/tcp/flavours/DumbTCP.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/flavours/DumbTCP.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/flavours/TCPBaseAlg.o: src/inet/transport/tcp/flavours/TCPBaseAlg.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPSACKRexmitQueue.h \
	src/inet/transport/tcp/flavours/TCPBaseAlg.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/flavours/TCPNewReno.o: src/inet/transport/tcp/flavours/TCPNewReno.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/flavours/TCPBaseAlg.h \
	src/inet/transport/tcp/flavours/TCPNewReno.h \
	src/inet/transport/tcp/flavours/TCPTahoeRenoFamily.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/flavours/TCPNoCongestionControl.o: src/inet/transport/tcp/flavours/TCPNoCongestionControl.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/flavours/TCPBaseAlg.h \
	src/inet/transport/tcp/flavours/TCPNoCongestionControl.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/flavours/TCPReno.o: src/inet/transport/tcp/flavours/TCPReno.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/flavours/TCPBaseAlg.h \
	src/inet/transport/tcp/flavours/TCPReno.h \
	src/inet/transport/tcp/flavours/TCPTahoeRenoFamily.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.o: src/inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/flavours/TCPBaseAlg.h \
	src/inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/flavours/TCPTahoe.o: src/inet/transport/tcp/flavours/TCPTahoe.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/flavours/TCPBaseAlg.h \
	src/inet/transport/tcp/flavours/TCPTahoe.h \
	src/inet/transport/tcp/flavours/TCPTahoeRenoFamily.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/flavours/TCPTahoeRenoFamily.o: src/inet/transport/tcp/flavours/TCPTahoeRenoFamily.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/flavours/TCPBaseAlg.h \
	src/inet/transport/tcp/flavours/TCPTahoeRenoFamily.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/flavours/TCPVegas.o: src/inet/transport/tcp/flavours/TCPVegas.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/flavours/TCPBaseAlg.h \
	src/inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	src/inet/transport/tcp/flavours/TCPVegas.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/flavours/TCPWestwood.o: src/inet/transport/tcp/flavours/TCPWestwood.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPAlgorithm.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/flavours/TCPBaseAlg.h \
	src/inet/transport/tcp/flavours/TCPSegmentTransmitInfoList.h \
	src/inet/transport/tcp/flavours/TCPWestwood.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/queues/TCPByteStreamRcvQueue.o: src/inet/transport/tcp/queues/TCPByteStreamRcvQueue.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPReceiveQueue.h \
	src/inet/transport/tcp/queues/TCPByteStreamRcvQueue.h \
	src/inet/transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/queues/TCPByteStreamSendQueue.o: src/inet/transport/tcp/queues/TCPByteStreamSendQueue.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayBuffer.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPSendQueue.h \
	src/inet/transport/tcp/queues/TCPByteStreamSendQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/queues/TCPMsgBasedRcvQueue.o: src/inet/transport/tcp/queues/TCPMsgBasedRcvQueue.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPReceiveQueue.h \
	src/inet/transport/tcp/queues/TCPMsgBasedRcvQueue.h \
	src/inet/transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/queues/TCPMsgBasedSendQueue.o: src/inet/transport/tcp/queues/TCPMsgBasedSendQueue.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPSendQueue.h \
	src/inet/transport/tcp/queues/TCPMsgBasedSendQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/queues/TCPVirtualDataRcvQueue.o: src/inet/transport/tcp/queues/TCPVirtualDataRcvQueue.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPReceiveQueue.h \
	src/inet/transport/tcp/queues/TCPVirtualDataRcvQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp/queues/TCPVirtualDataSendQueue.o: src/inet/transport/tcp/queues/TCPVirtualDataSendQueue.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp/TCP.h \
	src/inet/transport/tcp/TCPConnection.h \
	src/inet/transport/tcp/TCPSendQueue.h \
	src/inet/transport/tcp/queues/TCPVirtualDataSendQueue.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp_common/TCPSegment.o: src/inet/transport/tcp_common/TCPSegment.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp_common/TCPSegment_m.o: src/inet/transport/tcp_common/TCPSegment_m.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/tcp_common/TCPSegment_m.h
$O/src/inet/transport/tcp_common/TCPSpoof.o: src/inet/transport/tcp_common/TCPSpoof.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/tcp_common/TCPSpoof.h
$O/src/inet/transport/tcp_lwip/LwipTcpLayer.o: src/inet/transport/tcp_lwip/LwipTcpLayer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/tcp_lwip/LwipTcpStackIf.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/icmp.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/inet.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip_addr.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/def.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/err.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/mem.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp_std.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/netif.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/pbuf.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/sys.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/tcp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_lwip/TCP_lwIP.o: src/inet/transport/tcp_lwip/TCP_lwIP.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayBuffer.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/tcp_lwip/LwipTcpStackIf.h \
	src/inet/transport/tcp_lwip/TCP_lwIP.h \
	src/inet/transport/tcp_lwip/TcpLwipConnection.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/icmp.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/inet.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip_addr.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/def.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/err.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/mem.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp_std.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/netif.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/pbuf.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/sys.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/tcp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipByteStreamQueues.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipMsgBasedQueues.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipQueues.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipVirtualDataQueues.h \
	src/inet/util/headerserializers/TCPIPchecksum.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/tcp/TCPSerializer.h \
	src/inet/util/headerserializers/tcp/headers/tcp.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_lwip/TcpLwipConnection.o: src/inet/transport/tcp_lwip/TcpLwipConnection.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/tcp_lwip/LwipTcpStackIf.h \
	src/inet/transport/tcp_lwip/TCP_lwIP.h \
	src/inet/transport/tcp_lwip/TcpLwipConnection.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/icmp.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/inet.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip_addr.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/def.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/err.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/mem.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp_std.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/netif.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/pbuf.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/sys.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/tcp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipQueues.h \
	src/inet/util/headerserializers/TCPIPchecksum.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/tcp/TCPSerializer.h \
	src/inet/util/headerserializers/tcp/headers/tcp.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_lwip/lwip/core/memp.o: src/inet/transport/tcp_lwip/lwip/core/memp.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/icmp.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/igmp.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/inet.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip_addr.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip_frag.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/api.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/api_msg.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/def.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/err.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/mem.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp_std.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/netif.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/netifapi.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/pbuf.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/raw.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/stats.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/sys.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/tcp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/tcpip.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/udp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/transport/tcp_lwip/lwip/include/netif/etharp.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_lwip/lwip/core/pbuf.o: src/inet/transport/tcp_lwip/lwip/core/pbuf.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/perf.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/def.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/err.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/mem.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp_std.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/pbuf.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/stats.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/sys.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_lwip/lwip/core/tcp.o: src/inet/transport/tcp_lwip/lwip/core/tcp.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_lwip/lwip/core/tcp_in.o: src/inet/transport/tcp_lwip/lwip/core/tcp_in.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_lwip/lwip/core/tcp_out.o: src/inet/transport/tcp_lwip/lwip/core/tcp_out.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_lwip/queues/TcpLwipByteStreamQueues.o: src/inet/transport/tcp_lwip/queues/TcpLwipByteStreamQueues.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayBuffer.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/tcp_lwip/TcpLwipConnection.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/icmp.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/inet.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip_addr.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/def.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/err.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/mem.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp_std.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/netif.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/pbuf.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/sys.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/tcp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipByteStreamQueues.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipQueues.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/tcp/TCPSerializer.h \
	src/inet/util/headerserializers/tcp/headers/tcp.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_lwip/queues/TcpLwipMsgBasedQueues.o: src/inet/transport/tcp_lwip/queues/TcpLwipMsgBasedQueues.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/tcp_lwip/LwipTcpStackIf.h \
	src/inet/transport/tcp_lwip/TCP_lwIP.h \
	src/inet/transport/tcp_lwip/TcpLwipConnection.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/icmp.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/inet.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip_addr.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/def.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/err.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/mem.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp_std.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/netif.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/pbuf.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/sys.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/tcp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipMsgBasedQueues.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipQueues.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/tcp/TCPSerializer.h \
	src/inet/util/headerserializers/tcp/headers/tcp.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_lwip/queues/TcpLwipVirtualDataQueues.o: src/inet/transport/tcp_lwip/queues/TcpLwipVirtualDataQueues.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/tcp_lwip/TcpLwipConnection.h \
	src/inet/transport/tcp_lwip/lwip/include/arch/cc.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/icmp.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/inet.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip.h \
	src/inet/transport/tcp_lwip/lwip/include/ipv4/lwip/ip_addr.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/arch.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/debug.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/def.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/err.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/mem.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/memp_std.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/netif.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/opt.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/pbuf.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/sys.h \
	src/inet/transport/tcp_lwip/lwip/include/lwip/tcp.h \
	src/inet/transport/tcp_lwip/lwip/include/lwipopts.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipQueues.h \
	src/inet/transport/tcp_lwip/queues/TcpLwipVirtualDataQueues.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/tcp/TCPSerializer.h \
	src/inet/util/headerserializers/tcp/headers/tcp.h \
	src/inet/util/opp_utils.h
$O/src/inet/transport/tcp_nsc/TCP_NSC.o: src/inet/transport/tcp_nsc/TCP_NSC.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayBuffer.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/tcp_nsc/TCP_NSC.h \
	src/inet/transport/tcp_nsc/TCP_NSC_Connection.h \
	src/inet/transport/tcp_nsc/queues/TCP_NSC_ByteStreamQueues.h \
	src/inet/transport/tcp_nsc/queues/TCP_NSC_Queues.h \
	src/inet/transport/tcp_nsc/queues/TCP_NSC_VirtualDataQueues.h \
	src/inet/util/headerserializers/TCPIPchecksum.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/tcp/TCPSerializer.h \
	src/inet/util/headerserializers/tcp/headers/tcp.h
$O/src/inet/transport/tcp_nsc/TCP_NSC_Connection.o: src/inet/transport/tcp_nsc/TCP_NSC_Connection.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/tcp_nsc/TCP_NSC.h \
	src/inet/transport/tcp_nsc/TCP_NSC_Connection.h \
	src/inet/transport/tcp_nsc/queues/TCP_NSC_Queues.h \
	src/inet/util/headerserializers/TCPIPchecksum.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/tcp/TCPSerializer.h \
	src/inet/util/headerserializers/tcp/headers/tcp.h
$O/src/inet/transport/tcp_nsc/queues/TCP_NSC_ByteStreamQueues.o: src/inet/transport/tcp_nsc/queues/TCP_NSC_ByteStreamQueues.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayBuffer.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/tcp_nsc/TCP_NSC_Connection.h \
	src/inet/transport/tcp_nsc/queues/TCP_NSC_ByteStreamQueues.h \
	src/inet/transport/tcp_nsc/queues/TCP_NSC_Queues.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/tcp/TCPSerializer.h \
	src/inet/util/headerserializers/tcp/headers/tcp.h
$O/src/inet/transport/tcp_nsc/queues/TCP_NSC_VirtualDataQueues.o: src/inet/transport/tcp_nsc/queues/TCP_NSC_VirtualDataQueues.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/contract/TCPCommand_m.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/transport/tcp_nsc/TCP_NSC_Connection.h \
	src/inet/transport/tcp_nsc/queues/TCP_NSC_Queues.h \
	src/inet/transport/tcp_nsc/queues/TCP_NSC_VirtualDataQueues.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/tcp/TCPSerializer.h \
	src/inet/util/headerserializers/tcp/headers/tcp.h
$O/src/inet/transport/udp/UDP.o: src/inet/transport/udp/UDP.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/LifecycleOperation.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NodeOperations.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPSocket.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv4ControlInfo.h \
	src/inet/networklayer/contract/IPv4ControlInfo_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPv6ControlInfo.h \
	src/inet/networklayer/contract/IPv6ControlInfo_m.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/status/NodeStatus.h \
	src/inet/transport/contract/UDPControlInfo.h \
	src/inet/transport/contract/UDPControlInfo_m.h \
	src/inet/transport/udp/UDP.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h
$O/src/inet/transport/udp/UDPPacket_m.o: src/inet/transport/udp/UDPPacket_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/udp/UDPPacket_m.h
$O/src/inet/util/Delayer.o: src/inet/util/Delayer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/Delayer.h
$O/src/inet/util/Macho.o: src/inet/util/Macho.cc \
	src/inet/util/Macho.h
$O/src/inet/util/MessageChecker.o: src/inet/util/MessageChecker.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/MessageChecker.h
$O/src/inet/util/NetAnimTrace.o: src/inet/util/NetAnimTrace.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/util/FWMath.h \
	src/inet/util/NetAnimTrace.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/util/OrdinalBasedDropper.o: src/inet/util/OrdinalBasedDropper.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/OrdinalBasedDropper.h
$O/src/inet/util/OrdinalBasedDuplicator.o: src/inet/util/OrdinalBasedDuplicator.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/OrdinalBasedDuplicator.h
$O/src/inet/util/PacketDump.o: src/inet/util/PacketDump.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/PacketDump.h
$O/src/inet/util/PatternMatcher.o: src/inet/util/PatternMatcher.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/PatternMatcher.h
$O/src/inet/util/PcapDump.o: src/inet/util/PcapDump.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/util/PcapDump.h
$O/src/inet/util/PcapRecorder.o: src/inet/util/PcapRecorder.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/PacketDump.h \
	src/inet/util/PcapDump.h \
	src/inet/util/PcapRecorder.h
$O/src/inet/util/TCPDump.o: src/inet/util/TCPDump.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/PacketDump.h \
	src/inet/util/PcapDump.h \
	src/inet/util/TCPDump.h
$O/src/inet/util/ThruputMeter.o: src/inet/util/ThruputMeter.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/ThruputMeter.h
$O/src/inet/util/ThruputMeteringChannel.o: src/inet/util/ThruputMeteringChannel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/ThruputMeteringChannel.h
$O/src/inet/util/XMLUtils.o: src/inet/util/XMLUtils.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/contract/IPvXAddressResolver.h \
	src/inet/util/XMLUtils.h
$O/src/inet/util/common.o: src/inet/util/common.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/common.h
$O/src/inet/util/int128.o: src/inet/util/int128.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/int128.h
$O/src/inet/util/opp_utils.o: src/inet/util/opp_utils.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/opp_utils.h
$O/src/inet/util/headerserializers/TCPIPchecksum.o: src/inet/util/headerserializers/TCPIPchecksum.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/headerserializers/TCPIPchecksum.h
$O/src/inet/util/headerserializers/ipv4/ICMPSerializer.o: src/inet/util/headerserializers/ipv4/ICMPSerializer.cc \
	src/inet/applications/pingapp/PingPayload_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/util/headerserializers/TCPIPchecksum.h \
	src/inet/util/headerserializers/headers/bsdint.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/headers/in.h \
	src/inet/util/headerserializers/headers/in_systm.h \
	src/inet/util/headerserializers/ipv4/ICMPSerializer.h \
	src/inet/util/headerserializers/ipv4/IPv4Serializer.h \
	src/inet/util/headerserializers/ipv4/headers/ip.h \
	src/inet/util/headerserializers/ipv4/headers/ip_icmp.h
$O/src/inet/util/headerserializers/ipv4/IGMPSerializer.o: src/inet/util/headerserializers/ipv4/IGMPSerializer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/IGMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/util/headerserializers/TCPIPchecksum.h \
	src/inet/util/headerserializers/headers/bsdint.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/headers/in.h \
	src/inet/util/headerserializers/headers/in_systm.h \
	src/inet/util/headerserializers/ipv4/IGMPSerializer.h \
	src/inet/util/headerserializers/ipv4/IPv4Serializer.h \
	src/inet/util/headerserializers/ipv4/headers/igmp.h \
	src/inet/util/headerserializers/ipv4/headers/ip.h
$O/src/inet/util/headerserializers/ipv4/IPv4Serializer.o: src/inet/util/headerserializers/ipv4/IPv4Serializer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/ipv4/ICMPMessage_m.h \
	src/inet/networklayer/ipv4/IGMPMessage_m.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/util/headerserializers/TCPIPchecksum.h \
	src/inet/util/headerserializers/headers/bsdint.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/headers/in.h \
	src/inet/util/headerserializers/headers/in_systm.h \
	src/inet/util/headerserializers/ipv4/ICMPSerializer.h \
	src/inet/util/headerserializers/ipv4/IGMPSerializer.h \
	src/inet/util/headerserializers/ipv4/IPv4Serializer.h \
	src/inet/util/headerserializers/ipv4/headers/ip.h
$O/src/inet/util/headerserializers/ipv6/IPv6Serializer.o: src/inet/util/headerserializers/ipv6/IPv6Serializer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/ipv6/IPv6Datagram.h \
	src/inet/networklayer/ipv6/IPv6Datagram_m.h \
	src/inet/util/headerserializers/TCPIPchecksum.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/ipv6/IPv6Serializer.h \
	src/inet/util/headerserializers/ipv6/headers/ip6.h
$O/src/inet/util/headerserializers/sctp/SCTPSerializer.o: src/inet/util/headerserializers/sctp/SCTPSerializer.cc \
	src/inet/base/Compat.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/MACAddress.h \
	src/inet/networklayer/common/IInterfaceTable.h \
	src/inet/networklayer/common/InterfaceEntry.h \
	src/inet/networklayer/common/InterfaceTable.h \
	src/inet/networklayer/common/InterfaceTableAccess.h \
	src/inet/networklayer/common/InterfaceToken.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/networklayer/ipv4/IPv4Datagram.h \
	src/inet/networklayer/ipv4/IPv4Datagram_m.h \
	src/inet/transport/contract/UDPSocket.h \
	src/inet/transport/sctp/SCTP.h \
	src/inet/transport/sctp/SCTPAssociation.h \
	src/inet/transport/sctp/SCTPGapList.h \
	src/inet/transport/sctp/SCTPMessage.h \
	src/inet/transport/sctp/SCTPMessage_m.h \
	src/inet/transport/sctp/SCTPQueue.h \
	src/inet/transport/sctp/SCTPReceiveStream.h \
	src/inet/transport/sctp/SCTPSendStream.h \
	src/inet/util/headerserializers/headers/bsdint.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/headers/in.h \
	src/inet/util/headerserializers/headers/in_systm.h \
	src/inet/util/headerserializers/ipv4/IPv4Serializer.h \
	src/inet/util/headerserializers/ipv4/headers/ip.h \
	src/inet/util/headerserializers/sctp/SCTPSerializer.h \
	src/inet/util/headerserializers/sctp/headers/sctp.h
$O/src/inet/util/headerserializers/tcp/TCPSerializer.o: src/inet/util/headerserializers/tcp/TCPSerializer.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/networklayer/contract/IPProtocolId_m.h \
	src/inet/networklayer/contract/IPv4Address.h \
	src/inet/networklayer/contract/IPv6Address.h \
	src/inet/networklayer/contract/IPvXAddress.h \
	src/inet/transport/tcp_common/TCPSegment.h \
	src/inet/transport/tcp_common/TCPSegment_m.h \
	src/inet/util/headerserializers/TCPIPchecksum.h \
	src/inet/util/headerserializers/headers/bsdint.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/headers/in.h \
	src/inet/util/headerserializers/headers/in_systm.h \
	src/inet/util/headerserializers/tcp/TCPSerializer.h \
	src/inet/util/headerserializers/tcp/headers/tcp.h
$O/src/inet/util/headerserializers/udp/UDPSerializer.o: src/inet/util/headerserializers/udp/UDPSerializer.cc \
	src/inet/base/ByteArray.h \
	src/inet/base/ByteArrayMessage.h \
	src/inet/base/ByteArrayMessage_m.h \
	src/inet/base/ByteArray_m.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/transport/udp/UDPPacket.h \
	src/inet/transport/udp/UDPPacket_m.h \
	src/inet/util/headerserializers/TCPIPchecksum.h \
	src/inet/util/headerserializers/headers/bsdint.h \
	src/inet/util/headerserializers/headers/defs.h \
	src/inet/util/headerserializers/headers/in.h \
	src/inet/util/headerserializers/headers/in_systm.h \
	src/inet/util/headerserializers/udp/UDPSerializer.h \
	src/inet/util/headerserializers/udp/headers/udp.h
$O/src/inet/util/messageprinters/InetPacketBytesPrinter.o: src/inet/util/messageprinters/InetPacketBytesPrinter.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/util/messageprinters/InetPacketPrinter.o: src/inet/util/messageprinters/InetPacketPrinter.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/util/messageprinters/InetPacketPrinter2.o: src/inet/util/messageprinters/InetPacketPrinter2.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h
$O/src/inet/world/annotations/AnnotationDummy.o: src/inet/world/annotations/AnnotationDummy.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/world/annotations/AnnotationDummy.h \
	src/veins/modules/world/annotations/AnnotationDummy.h
$O/src/inet/world/annotations/AnnotationManager.o: src/inet/world/annotations/AnnotationManager.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/util/FWMath.h \
	src/inet/world/annotations/AnnotationManager.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/inet/world/httptools/HttpController.o: src/inet/world/httptools/HttpController.cc \
	src/inet/applications/httptools/HttpEventMessages_m.h \
	src/inet/applications/httptools/HttpMessages_m.h \
	src/inet/applications/httptools/HttpRandom.h \
	src/inet/applications/httptools/HttpUtils.h \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/world/httptools/HttpController.h
$O/src/inet/world/obstacles/Obstacle.o: src/inet/world/obstacles/Obstacle.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/util/FWMath.h \
	src/inet/world/annotations/AnnotationManager.h \
	src/inet/world/obstacles/Obstacle.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/inet/world/obstacles/ObstacleControl.o: src/inet/world/obstacles/ObstacleControl.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/util/FWMath.h \
	src/inet/world/annotations/AnnotationManager.h \
	src/inet/world/obstacles/Obstacle.h \
	src/inet/world/obstacles/ObstacleControl.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/inet/world/radio/ChannelAccess.o: src/inet/world/radio/ChannelAccess.cc \
	src/inet/base/BasicModule.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/util/FWMath.h \
	src/inet/world/radio/ChannelAccess.h \
	src/inet/world/radio/IChannelControl.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/world/radio/ChannelControl.o: src/inet/world/radio/ChannelControl.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/AirFrame_m.h \
	src/inet/linklayer/radio/ModulationType.h \
	src/inet/util/FWMath.h \
	src/inet/world/radio/ChannelControl.h \
	src/inet/world/radio/IChannelControl.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/world/radio/IdealChannelModel.o: src/inet/world/radio/IdealChannelModel.cc \
	src/inet/base/BasicModule.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/ILifecycle.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/linklayer/contract/RadioState.h \
	src/inet/linklayer/radio/IdealAirFrame_m.h \
	src/inet/linklayer/radio/IdealRadio.h \
	src/inet/util/FWMath.h \
	src/inet/world/radio/IdealChannelModel.h \
	src/inet/world/radio/IdealChannelModelAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/world/radio/IdealChannelModelAccess.o: src/inet/world/radio/IdealChannelModelAccess.cc \
	src/inet/base/BasicModule.h \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/INotifiable.h \
	src/inet/base/ModuleAccess.h \
	src/inet/base/NotificationBoard.h \
	src/inet/base/NotifierConsts.h \
	src/inet/mobility/contract/IMobility.h \
	src/inet/util/FWMath.h \
	src/inet/world/radio/IdealChannelModel.h \
	src/inet/world/radio/IdealChannelModelAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/world/scenario/ScenarioManager.o: src/inet/world/scenario/ScenarioManager.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/base/IScriptable.h \
	src/inet/world/scenario/ScenarioManager.h
$O/src/inet/world/traci/TraCIScenarioManager.o: src/inet/world/traci/TraCIScenarioManager.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/mobility/single/TraCIMobility.h \
	src/inet/util/FWMath.h \
	src/inet/world/traci/TraCIConstants.h \
	src/inet/world/traci/TraCIScenarioManager.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/inet/world/traci/TraCIScenarioManagerLaunchd.o: src/inet/world/traci/TraCIScenarioManagerLaunchd.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/base/ModuleAccess.h \
	src/inet/util/FWMath.h \
	src/inet/world/traci/TraCIConstants.h \
	src/inet/world/traci/TraCIScenarioManager.h \
	src/inet/world/traci/TraCIScenarioManagerLaunchd.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/connectionManager/BaseConnectionManager.o: src/veins/base/connectionManager/BaseConnectionManager.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/connectionManager/NicEntryDebug.h \
	src/veins/base/connectionManager/NicEntryDirect.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/connectionManager/ChannelAccess.o: src/veins/base/connectionManager/ChannelAccess.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/connectionManager/ConnectionManager.o: src/veins/base/connectionManager/ConnectionManager.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/ConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/connectionManager/NicEntryDebug.o: src/veins/base/connectionManager/NicEntryDebug.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/connectionManager/NicEntryDebug.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/connectionManager/NicEntryDirect.o: src/veins/base/connectionManager/NicEntryDirect.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/connectionManager/NicEntryDirect.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/messages/AirFrame_m.o: src/veins/base/messages/AirFrame_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/linklayer/radio/AirFrame_m.h \
	src/inet/linklayer/radio/ModulationType.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/messages/BorderMsg_m.o: src/veins/base/messages/BorderMsg_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/BorderMsg_m.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/messages/ChannelSenseRequest_m.o: src/veins/base/messages/ChannelSenseRequest_m.cc \
	src/veins/base/messages/ChannelSenseRequest_m.h \
	src/veins/base/phyLayer/ChannelState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/messages/MacPkt_m.o: src/veins/base/messages/MacPkt_m.cc \
	src/veins/base/messages/MacPkt_m.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/modules/BaseApplLayer.o: src/veins/base/modules/BaseApplLayer.cc \
	src/veins/base/modules/BaseApplLayer.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseLayer.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/PassedMessage.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/modules/BaseBattery.o: src/veins/base/modules/BaseBattery.cc \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/modules/BaseLayer.o: src/veins/base/modules/BaseLayer.cc \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseLayer.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/PassedMessage.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/modules/BaseMacLayer.o: src/veins/base/modules/BaseMacLayer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/messages/MacPkt_m.h \
	src/veins/base/modules/AddressingInterface.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseLayer.h \
	src/veins/base/modules/BaseMacLayer.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/ChannelState.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/MacToPhyControlInfo.h \
	src/veins/base/phyLayer/MacToPhyInterface.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/PhyUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MacToNetwControlInfo.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/NetwToMacControlInfo.h \
	src/veins/base/utils/PassedMessage.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/modules/BaseMobility.o: src/veins/base/modules/BaseMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/BorderMsg_m.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/modules/BaseModule.o: src/veins/base/modules/BaseModule.cc \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/modules/BaseWorldUtility.o: src/veins/base/modules/BaseWorldUtility.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/modules/BatteryAccess.o: src/veins/base/modules/BatteryAccess.cc \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/phyLayer/BaseDecider.o: src/veins/base/phyLayer/BaseDecider.cc \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/messages/ChannelSenseRequest_m.h \
	src/veins/base/phyLayer/BaseDecider.h \
	src/veins/base/phyLayer/ChannelState.h \
	src/veins/base/phyLayer/Decider.h \
	src/veins/base/phyLayer/DeciderToPhyInterface.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/phyLayer/BasePhyLayer.o: src/veins/base/phyLayer/BasePhyLayer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/messages/ChannelSenseRequest_m.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/BasePhyLayer.h \
	src/veins/base/phyLayer/ChannelInfo.h \
	src/veins/base/phyLayer/ChannelState.h \
	src/veins/base/phyLayer/Decider.h \
	src/veins/base/phyLayer/DeciderToPhyInterface.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/MacToPhyControlInfo.h \
	src/veins/base/phyLayer/MacToPhyInterface.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/PhyToMacControlInfo.h \
	src/veins/base/phyLayer/PhyUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/phyLayer/ChannelInfo.o: src/veins/base/phyLayer/ChannelInfo.cc \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/ChannelInfo.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/phyLayer/ChannelState.o: src/veins/base/phyLayer/ChannelState.cc \
	src/veins/base/phyLayer/ChannelState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/phyLayer/Decider.o: src/veins/base/phyLayer/Decider.cc \
	src/veins/base/messages/ChannelSenseRequest_m.h \
	src/veins/base/phyLayer/ChannelState.h \
	src/veins/base/phyLayer/Decider.h \
	src/veins/base/phyLayer/DeciderToPhyInterface.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/phyLayer/MappingBase.o: src/veins/base/phyLayer/MappingBase.cc \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/phyLayer/MappingUtils.o: src/veins/base/phyLayer/MappingUtils.cc \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/phyLayer/PhyUtils.o: src/veins/base/phyLayer/PhyUtils.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/PhyUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/phyLayer/Signal.o: src/veins/base/phyLayer/Signal.cc \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/utils/Coord.o: src/veins/base/utils/Coord.cc \
	src/inet/base/Compat.h \
	src/inet/base/Coord.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/utils/NetwToMacControlInfo.o: src/veins/base/utils/NetwToMacControlInfo.cc \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/NetwToMacControlInfo.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/utils/SimpleAddress.o: src/veins/base/utils/SimpleAddress.cc \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/utils/asserts.o: src/veins/base/utils/asserts.cc \
	src/veins/base/utils/asserts.h
$O/src/veins/base/utils/winsupport.o: src/veins/base/utils/winsupport.cc \
	src/veins/base/utils/winsupport.h
$O/src/veins/modules/analogueModel/BreakpointPathlossModel.o: src/veins/modules/analogueModel/BreakpointPathlossModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/analogueModel/BreakpointPathlossModel.h
$O/src/veins/modules/analogueModel/JakesFading.o: src/veins/modules/analogueModel/JakesFading.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/analogueModel/JakesFading.h
$O/src/veins/modules/analogueModel/LogNormalShadowing.o: src/veins/modules/analogueModel/LogNormalShadowing.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/analogueModel/LogNormalShadowing.h
$O/src/veins/modules/analogueModel/PERModel.o: src/veins/modules/analogueModel/PERModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/analogueModel/PERModel.h
$O/src/veins/modules/analogueModel/SimpleObstacleShadowing.o: src/veins/modules/analogueModel/SimpleObstacleShadowing.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/analogueModel/SimpleObstacleShadowing.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/analogueModel/SimplePathlossModel.o: src/veins/modules/analogueModel/SimplePathlossModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/analogueModel/SimplePathlossModel.h
$O/src/veins/modules/analogueModel/TwoRayInterferenceModel.o: src/veins/modules/analogueModel/TwoRayInterferenceModel.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/analogueModel/TwoRayInterferenceModel.h
$O/src/veins/modules/application/ieee80211p/BaseWaveApplLayer.o: src/veins/modules/application/ieee80211p/BaseWaveApplLayer.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/modules/BaseApplLayer.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseLayer.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/NetwToMacControlInfo.h \
	src/veins/base/utils/PassedMessage.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/application/ieee80211p/BaseWaveApplLayer.h \
	src/veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	src/veins/modules/messages/WaveShortMessage_m.h \
	src/veins/modules/utility/Consts80211p.h
$O/src/veins/modules/application/traci/TraCIDemo11p.o: src/veins/modules/application/traci/TraCIDemo11p.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseApplLayer.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseLayer.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/NetwToMacControlInfo.h \
	src/veins/base/utils/PassedMessage.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/application/ieee80211p/BaseWaveApplLayer.h \
	src/veins/modules/application/traci/TraCIDemo11p.h \
	src/veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	src/veins/modules/messages/WaveShortMessage_m.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIColor.h \
	src/veins/modules/mobility/traci/TraCICommandInterface.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCICoord.h \
	src/veins/modules/mobility/traci/TraCIMobility.h \
	src/veins/modules/mobility/traci/TraCIScenarioManager.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/utility/Consts80211p.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/application/traci/TraCIDemoRSU11p.o: src/veins/modules/application/traci/TraCIDemoRSU11p.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/modules/BaseApplLayer.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseLayer.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/NetwToMacControlInfo.h \
	src/veins/base/utils/PassedMessage.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/application/ieee80211p/BaseWaveApplLayer.h \
	src/veins/modules/application/traci/TraCIDemoRSU11p.h \
	src/veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	src/veins/modules/messages/WaveShortMessage_m.h \
	src/veins/modules/utility/Consts80211p.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/application/traci/TraCITestApp.o: src/veins/modules/application/traci/TraCITestApp.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseApplLayer.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseLayer.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/PassedMessage.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/asserts.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/application/traci/TraCITestApp.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIColor.h \
	src/veins/modules/mobility/traci/TraCICommandInterface.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCICoord.h \
	src/veins/modules/mobility/traci/TraCIMobility.h \
	src/veins/modules/mobility/traci/TraCIScenarioManager.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/mac/ieee80211p/Mac1609_4.o: src/veins/modules/mac/ieee80211p/Mac1609_4.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/messages/ChannelSenseRequest_m.h \
	src/veins/base/messages/MacPkt_m.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseLayer.h \
	src/veins/base/modules/BaseMacLayer.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/BaseDecider.h \
	src/veins/base/phyLayer/BasePhyLayer.h \
	src/veins/base/phyLayer/ChannelInfo.h \
	src/veins/base/phyLayer/ChannelState.h \
	src/veins/base/phyLayer/Decider.h \
	src/veins/base/phyLayer/DeciderToPhyInterface.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/MacToPhyControlInfo.h \
	src/veins/base/phyLayer/MacToPhyInterface.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/PhyToMacControlInfo.h \
	src/veins/base/phyLayer/PhyUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/NetwToMacControlInfo.h \
	src/veins/base/utils/PassedMessage.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/analogueModel/JakesFading.h \
	src/veins/modules/analogueModel/LogNormalShadowing.h \
	src/veins/modules/analogueModel/SimplePathlossModel.h \
	src/veins/modules/mac/ieee80211p/Mac1609_4.h \
	src/veins/modules/mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	src/veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	src/veins/modules/messages/Mac80211Pkt_m.h \
	src/veins/modules/messages/PhyControlMessage_m.h \
	src/veins/modules/messages/WaveShortMessage_m.h \
	src/veins/modules/phy/Decider80211p.h \
	src/veins/modules/phy/Decider80211pToPhy80211pInterface.h \
	src/veins/modules/phy/DeciderResult80211.h \
	src/veins/modules/phy/PhyLayer80211p.h \
	src/veins/modules/phy/SNRThresholdDecider.h \
	src/veins/modules/utility/Consts80211p.h \
	src/veins/modules/utility/ConstsPhy.h
$O/src/veins/modules/messages/AirFrame11p_m.o: src/veins/modules/messages/AirFrame11p_m.cc \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/messages/AirFrame11p_m.h
$O/src/veins/modules/messages/Mac80211Pkt_m.o: src/veins/modules/messages/Mac80211Pkt_m.cc \
	src/veins/base/messages/MacPkt_m.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/messages/Mac80211Pkt_m.h
$O/src/veins/modules/messages/PhyControlMessage_m.o: src/veins/modules/messages/PhyControlMessage_m.cc \
	src/veins/modules/messages/PhyControlMessage_m.h
$O/src/veins/modules/messages/WaveShortMessage_m.o: src/veins/modules/messages/WaveShortMessage_m.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/messages/WaveShortMessage_m.h
$O/src/veins/modules/mobility/traci/TraCIBuffer.o: src/veins/modules/mobility/traci/TraCIBuffer.cc \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIConstants.h \
	src/veins/modules/mobility/traci/TraCICoord.h
$O/src/veins/modules/mobility/traci/TraCIColor.o: src/veins/modules/mobility/traci/TraCIColor.cc \
	src/veins/modules/mobility/traci/TraCIColor.h
$O/src/veins/modules/mobility/traci/TraCICommandInterface.o: src/veins/modules/mobility/traci/TraCICommandInterface.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIColor.h \
	src/veins/modules/mobility/traci/TraCICommandInterface.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCIConstants.h \
	src/veins/modules/mobility/traci/TraCICoord.h
$O/src/veins/modules/mobility/traci/TraCIConnection.o: src/veins/modules/mobility/traci/TraCIConnection.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCIConstants.h \
	src/veins/modules/mobility/traci/TraCICoord.h
$O/src/veins/modules/mobility/traci/TraCIMobility.o: src/veins/modules/mobility/traci/TraCIMobility.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIColor.h \
	src/veins/modules/mobility/traci/TraCICommandInterface.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCICoord.h \
	src/veins/modules/mobility/traci/TraCIMobility.h \
	src/veins/modules/mobility/traci/TraCIScenarioManager.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/mobility/traci/TraCIScenarioManager.o: src/veins/modules/mobility/traci/TraCIScenarioManager.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIColor.h \
	src/veins/modules/mobility/traci/TraCICommandInterface.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCIConstants.h \
	src/veins/modules/mobility/traci/TraCICoord.h \
	src/veins/modules/mobility/traci/TraCIMobility.h \
	src/veins/modules/mobility/traci/TraCIScenarioManager.h \
	src/veins/modules/mobility/traci/TraCIScenarioManagerInet.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/mobility/traci/TraCIScenarioManagerInet.o: src/veins/modules/mobility/traci/TraCIScenarioManagerInet.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.o: src/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIColor.h \
	src/veins/modules/mobility/traci/TraCICommandInterface.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCIConstants.h \
	src/veins/modules/mobility/traci/TraCICoord.h \
	src/veins/modules/mobility/traci/TraCIScenarioManager.h \
	src/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/mobility/traci/TraCIScreenRecorder.o: src/veins/modules/mobility/traci/TraCIScreenRecorder.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIColor.h \
	src/veins/modules/mobility/traci/TraCICommandInterface.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCICoord.h \
	src/veins/modules/mobility/traci/TraCIScenarioManager.h \
	src/veins/modules/mobility/traci/TraCIScreenRecorder.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/obstacle/Obstacle.o: src/veins/modules/obstacle/Obstacle.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/obstacle/ObstacleControl.o: src/veins/modules/obstacle/ObstacleControl.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/phy/Decider80211p.o: src/veins/modules/phy/Decider80211p.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/messages/ChannelSenseRequest_m.h \
	src/veins/base/messages/MacPkt_m.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/BaseDecider.h \
	src/veins/base/phyLayer/ChannelState.h \
	src/veins/base/phyLayer/Decider.h \
	src/veins/base/phyLayer/DeciderToPhyInterface.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/MacToPhyInterface.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/PhyUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/SimpleAddress.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	src/veins/modules/messages/AirFrame11p_m.h \
	src/veins/modules/messages/Mac80211Pkt_m.h \
	src/veins/modules/phy/Decider80211p.h \
	src/veins/modules/phy/Decider80211pToPhy80211pInterface.h \
	src/veins/modules/phy/DeciderResult80211.h \
	src/veins/modules/phy/NistErrorRate.h \
	src/veins/modules/utility/Consts80211p.h \
	src/veins/modules/utility/ConstsPhy.h
$O/src/veins/modules/phy/NistErrorRate.o: src/veins/modules/phy/NistErrorRate.cc \
	src/veins/modules/phy/NistErrorRate.h \
	src/veins/modules/utility/ConstsPhy.h
$O/src/veins/modules/phy/PhyLayer80211p.o: src/veins/modules/phy/PhyLayer80211p.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/ChannelAccess.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/messages/ChannelSenseRequest_m.h \
	src/veins/base/modules/BaseBattery.h \
	src/veins/base/modules/BaseMobility.h \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/modules/BatteryAccess.h \
	src/veins/base/phyLayer/AnalogueModel.h \
	src/veins/base/phyLayer/BaseDecider.h \
	src/veins/base/phyLayer/BasePhyLayer.h \
	src/veins/base/phyLayer/ChannelInfo.h \
	src/veins/base/phyLayer/ChannelState.h \
	src/veins/base/phyLayer/Decider.h \
	src/veins/base/phyLayer/DeciderToPhyInterface.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/MacToPhyControlInfo.h \
	src/veins/base/phyLayer/MacToPhyInterface.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/PhyUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/Move.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/analogueModel/BreakpointPathlossModel.h \
	src/veins/modules/analogueModel/JakesFading.h \
	src/veins/modules/analogueModel/LogNormalShadowing.h \
	src/veins/modules/analogueModel/PERModel.h \
	src/veins/modules/analogueModel/SimpleObstacleShadowing.h \
	src/veins/modules/analogueModel/SimplePathlossModel.h \
	src/veins/modules/analogueModel/TwoRayInterferenceModel.h \
	src/veins/modules/mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	src/veins/modules/messages/AirFrame11p_m.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/phy/Decider80211p.h \
	src/veins/modules/phy/Decider80211pToPhy80211pInterface.h \
	src/veins/modules/phy/PhyLayer80211p.h \
	src/veins/modules/phy/SNRThresholdDecider.h \
	src/veins/modules/utility/Consts80211p.h \
	src/veins/modules/world/annotations/AnnotationManager.h
$O/src/veins/modules/phy/SNRThresholdDecider.o: src/veins/modules/phy/SNRThresholdDecider.cc \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/messages/ChannelSenseRequest_m.h \
	src/veins/base/phyLayer/BaseDecider.h \
	src/veins/base/phyLayer/ChannelState.h \
	src/veins/base/phyLayer/Decider.h \
	src/veins/base/phyLayer/DeciderToPhyInterface.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/phy/SNRThresholdDecider.h
$O/src/veins/modules/world/annotations/AnnotationDummy.o: src/veins/modules/world/annotations/AnnotationDummy.cc \
	src/veins/modules/world/annotations/AnnotationDummy.h
$O/src/veins/modules/world/annotations/AnnotationManager.o: src/veins/modules/world/annotations/AnnotationManager.cc \
	src/inet/base/Compat.h \
	src/inet/base/INETDefs.h \
	src/inet/util/FWMath.h \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIColor.h \
	src/veins/modules/mobility/traci/TraCICommandInterface.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCICoord.h \
	src/veins/modules/mobility/traci/TraCIScenarioManager.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/world/annotations/AnnotationManager.h

