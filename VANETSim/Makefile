#
# OMNeT++/OMNEST Makefile for VANETSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -IF:/GitHub/inet/src/linklayer/ieee80211/radio -IF:/GitHub/inet/src/networklayer/routing/aodv -IF:/GitHub/inet/src/networklayer/common -IF:/GitHub/inet/src -IF:/GitHub/inet/src/networklayer/icmpv6 -IF:/GitHub/inet/src/world/obstacles -IF:/GitHub/inet/src/networklayer/xmipv6 -IF:/GitHub/inet/src/networklayer/contract -IF:/GitHub/inet/src/networklayer/autorouting/ipv4 -IF:/GitHub/inet/src/util -IF:/GitHub/inet/src/linklayer/common -IF:/GitHub/inet/src/transport/contract -IF:/GitHub/inet/src/status -IF:/GitHub/inet/src/linklayer/radio/propagation -IF:/GitHub/inet/src/linklayer/ieee80211/radio/errormodel -IF:/GitHub/inet/src/linklayer/radio -IF:/GitHub/inet/src/util/headerserializers/tcp -IF:/GitHub/inet/src/networklayer/ipv4 -IF:/GitHub/inet/src/mobility/contract -IF:/GitHub/inet/src/util/headerserializers/ipv4 -IF:/GitHub/inet/src/base -IF:/GitHub/inet/src/util/headerserializers -IF:/GitHub/inet/src/world/radio -IF:/GitHub/inet/src/linklayer/ieee80211/mac -IF:/GitHub/inet/src/networklayer/ipv6 -IF:/GitHub/inet/src/transport/sctp -IF:/GitHub/inet/src/util/headerserializers/udp -IF:/GitHub/inet/src/networklayer/ipv6tunneling -IF:/GitHub/inet/src/applications/pingapp -IF:/GitHub/inet/src/battery/models -IF:/GitHub/inet/src/util/headerserializers/ipv6 -IF:/GitHub/inet/src/util/headerserializers/sctp -IF:/GitHub/inet/src/linklayer/contract -IF:/GitHub/inet/src/transport/tcp_common -IF:/GitHub/inet/src/networklayer/arp -IF:/GitHub/inet/src/transport/udp -IF:/GitHub/inet/src/linklayer/ethernet -IF:/GitHub/inet/src/networklayer/manetrouting/aodv-uu -IF:/GitHub/inet/src/networklayer/manetrouting/base -IF:/GitHub/inet/src/linklayer/ieee80211/mgmt -IF:/GitHub/inet/src/networklayer/manetrouting/dsr -LF:/GitHub/inet/out/$$\(CONFIGNAME\)/src -linet -DINET_IMPORT -KINET_PROJ=F:/GitHub/inet
#

# Name of target to be created (-o option)
TARGET = VANETSim$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I$(INET_PROJ)/src/linklayer/ieee80211/radio \
    -I$(INET_PROJ)/src/networklayer/routing/aodv \
    -I$(INET_PROJ)/src/networklayer/common \
    -I$(INET_PROJ)/src \
    -I$(INET_PROJ)/src/networklayer/icmpv6 \
    -I$(INET_PROJ)/src/world/obstacles \
    -I$(INET_PROJ)/src/networklayer/xmipv6 \
    -I$(INET_PROJ)/src/networklayer/contract \
    -I$(INET_PROJ)/src/networklayer/autorouting/ipv4 \
    -I$(INET_PROJ)/src/util \
    -I$(INET_PROJ)/src/linklayer/common \
    -I$(INET_PROJ)/src/transport/contract \
    -I$(INET_PROJ)/src/status \
    -I$(INET_PROJ)/src/linklayer/radio/propagation \
    -I$(INET_PROJ)/src/linklayer/ieee80211/radio/errormodel \
    -I$(INET_PROJ)/src/linklayer/radio \
    -I$(INET_PROJ)/src/util/headerserializers/tcp \
    -I$(INET_PROJ)/src/networklayer/ipv4 \
    -I$(INET_PROJ)/src/mobility/contract \
    -I$(INET_PROJ)/src/util/headerserializers/ipv4 \
    -I$(INET_PROJ)/src/base \
    -I$(INET_PROJ)/src/util/headerserializers \
    -I$(INET_PROJ)/src/world/radio \
    -I$(INET_PROJ)/src/linklayer/ieee80211/mac \
    -I$(INET_PROJ)/src/networklayer/ipv6 \
    -I$(INET_PROJ)/src/transport/sctp \
    -I$(INET_PROJ)/src/util/headerserializers/udp \
    -I$(INET_PROJ)/src/networklayer/ipv6tunneling \
    -I$(INET_PROJ)/src/applications/pingapp \
    -I$(INET_PROJ)/src/battery/models \
    -I$(INET_PROJ)/src/util/headerserializers/ipv6 \
    -I$(INET_PROJ)/src/util/headerserializers/sctp \
    -I$(INET_PROJ)/src/linklayer/contract \
    -I$(INET_PROJ)/src/transport/tcp_common \
    -I$(INET_PROJ)/src/networklayer/arp \
    -I$(INET_PROJ)/src/transport/udp \
    -I$(INET_PROJ)/src/linklayer/ethernet \
    -I$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu \
    -I$(INET_PROJ)/src/networklayer/manetrouting/base \
    -I$(INET_PROJ)/src/linklayer/ieee80211/mgmt \
    -I$(INET_PROJ)/src/networklayer/manetrouting/dsr \
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
    -Isrc/custom/bittorrent \
    -Isrc/routing \
    -Isrc/routing/aodv \
    -Isrc/routing/aodv-uu \
    -Isrc/routing/aodv-uu/vs-aodv-uu \
    -Isrc/routing/aodvvanet \
    -Isrc/routing/gpsr \
    -Isrc/routing/rbvtp \
    -Isrc/routing/rbvtr \
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
LIBS = -L$(INET_PROJ)/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath $(INET_PROJ)/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = out
PROJECTRELATIVE_PATH =
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/src/routing/aodv/VS_AODVRouteData.o \
    $O/src/routing/aodv/VS_AODVRouting.o \
    $O/src/routing/aodv-uu/vs_aodv_msg_struct.o \
    $O/src/routing/aodv-uu/vs_aodv_uu_omnet.o \
    $O/src/routing/aodv-uu/vs_packet_queue_omnet.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_list.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_locality.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.o \
    $O/src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.o \
    $O/src/routing/gpsr/VS_GPSR.o \
    $O/src/routing/gpsr/VS_PositionTable.o \
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
    $O/src/routing/aodv/VS_AODVControlPackets_m.o \
    $O/src/routing/aodv-uu/vs_aodv_msg_struct_m.o \
    $O/src/routing/gpsr/VS_GPSR_m.o \
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
    src/routing/aodv/VS_AODVControlPackets.msg \
    src/routing/aodv-uu/vs_aodv_msg_struct.msg \
    src/routing/gpsr/VS_GPSR.msg \
    src/veins/base/messages/AirFrame.msg \
    src/veins/base/messages/BorderMsg.msg \
    src/veins/base/messages/ChannelSenseRequest.msg \
    src/veins/base/messages/MacPkt.msg \
    src/veins/modules/messages/AirFrame11p.msg \
    src/veins/modules/messages/Mac80211Pkt.msg \
    src/veins/modules/messages/PhyControlMessage.msg \
    src/veins/modules/messages/WaveShortMessage.msg

# Other makefile variables (-K)
INET_PROJ=F:/GitHub/inet

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

COPTS = $(CFLAGS) -DINET_IMPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
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
	$(Q)-rm -f src/custom/bittorrent/*_m.cc src/custom/bittorrent/*_m.h
	$(Q)-rm -f src/routing/*_m.cc src/routing/*_m.h
	$(Q)-rm -f src/routing/aodv/*_m.cc src/routing/aodv/*_m.h
	$(Q)-rm -f src/routing/aodv-uu/*_m.cc src/routing/aodv-uu/*_m.h
	$(Q)-rm -f src/routing/aodv-uu/vs-aodv-uu/*_m.cc src/routing/aodv-uu/vs-aodv-uu/*_m.h
	$(Q)-rm -f src/routing/aodvvanet/*_m.cc src/routing/aodvvanet/*_m.h
	$(Q)-rm -f src/routing/gpsr/*_m.cc src/routing/gpsr/*_m.h
	$(Q)-rm -f src/routing/rbvtp/*_m.cc src/routing/rbvtp/*_m.h
	$(Q)-rm -f src/routing/rbvtr/*_m.cc src/routing/rbvtr/*_m.h
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
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc etc/*.cc etc/plugins/*.cc simulations/*.cc simulations/_maps/*.cc simulations/_maps/downtownorlando/*.cc simulations/_maps/i95highway/*.cc simulations/_maps/simple/*.cc simulations/_nodes/*.cc simulations/aodv/*.cc simulations/bittorrent/*.cc simulations/dsr/*.cc simulations/gpsr/*.cc simulations/olsr/*.cc simulations/veins/*.cc simulations/veins/results/*.cc src/*.cc src/custom/*.cc src/custom/bittorrent/*.cc src/routing/*.cc src/routing/aodv/*.cc src/routing/aodv-uu/*.cc src/routing/aodv-uu/vs-aodv-uu/*.cc src/routing/aodvvanet/*.cc src/routing/gpsr/*.cc src/routing/rbvtp/*.cc src/routing/rbvtr/*.cc src/veins/*.cc src/veins/base/*.cc src/veins/base/connectionManager/*.cc src/veins/base/messages/*.cc src/veins/base/modules/*.cc src/veins/base/phyLayer/*.cc src/veins/base/utils/*.cc src/veins/modules/*.cc src/veins/modules/analogueModel/*.cc src/veins/modules/application/*.cc src/veins/modules/application/ieee80211p/*.cc src/veins/modules/application/traci/*.cc src/veins/modules/mac/*.cc src/veins/modules/mac/ieee80211p/*.cc src/veins/modules/messages/*.cc src/veins/modules/mobility/*.cc src/veins/modules/mobility/traci/*.cc src/veins/modules/nic/*.cc src/veins/modules/obstacle/*.cc src/veins/modules/phy/*.cc src/veins/modules/utility/*.cc src/veins/modules/world/*.cc src/veins/modules/world/annotations/*.cc src/veins/nodes/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/src/routing/aodv/VS_AODVControlPackets_m.o: src/routing/aodv/VS_AODVControlPackets_m.cc \
	src/routing/aodv/VS_AODVControlPackets_m.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h
$O/src/routing/aodv/VS_AODVRouteData.o: src/routing/aodv/VS_AODVRouteData.cc
$O/src/routing/aodv/VS_AODVRouting.o: src/routing/aodv/VS_AODVRouting.cc \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/LifecycleOperation.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NodeOperations.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPSocket.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h
$O/src/routing/aodv-uu/vs_aodv_msg_struct.o: src/routing/aodv-uu/vs_aodv_msg_struct.cc \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket_m.h
$O/src/routing/aodv-uu/vs_aodv_msg_struct_m.o: src/routing/aodv-uu/vs_aodv_msg_struct_m.cc \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h
$O/src/routing/aodv-uu/vs_aodv_uu_omnet.o: src/routing/aodv-uu/vs_aodv_uu_omnet.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ControlManetRouting_m.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs_packet_queue_omnet.o: src/routing/aodv-uu/vs_packet_queue_omnet.cc \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_hello.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_neighbor.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rerr.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rrep.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_rreq.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_socket.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/aodv_timeout.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/debug_aodv.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/locality.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/seek_list.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv_msg_struct.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv_msg_struct_m.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv_uu_omnet.h \
	$(INET_PROJ)/src/networklayer/manetrouting/aodv-uu/packet_queue_omnet.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.o: src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.o: src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.o: src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.o: src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.o: src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.o: src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.o: src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.o: src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_list.o: src/routing/aodv-uu/vs-aodv-uu/vs_list.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_locality.o: src/routing/aodv-uu/vs-aodv-uu/vs_locality.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.o: src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.o: src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.o: src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.cc \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_hello.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_neighbor.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rerr.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rrep.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_rreq.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_socket.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_aodv_timeout.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_debug_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_defs_aodv.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_locality.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_params.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_routing_table.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_seek_list.h \
	src/routing/aodv-uu/vs-aodv-uu/vs_timer_queue_aodv.h \
	src/routing/aodv-uu/vs_aodv_msg_struct.h \
	src/routing/aodv-uu/vs_aodv_msg_struct_m.h \
	src/routing/aodv-uu/vs_aodv_uu_omnet.h \
	src/routing/aodv-uu/vs_packet_queue_omnet.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/AbstractQueue.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/base/ProtocolMap.h \
	$(INET_PROJ)/src/base/QueueBase.h \
	$(INET_PROJ)/src/base/ReassemblyBuffer.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INET_PROJ)/src/networklayer/arp/ARP.h \
	$(INET_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INET_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetNetfilterHook.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/ManetRoutingBase.h \
	$(INET_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/gpsr/VS_GPSR.o: src/routing/gpsr/VS_GPSR.cc \
	src/routing/gpsr/VS_GPSR.h \
	src/routing/gpsr/VS_GPSRDefs.h \
	src/routing/gpsr/VS_GPSR_m.h \
	src/routing/gpsr/VS_PositionTable.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/LifecycleOperation.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NodeOperations.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/mobility/contract/IMobility.h \
	$(INET_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INET_PROJ)/src/networklayer/common/INetfilter.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INET_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INET_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPSocket.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INET_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INET_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INET_PROJ)/src/status/NodeStatus.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/gpsr/VS_GPSR_m.o: src/routing/gpsr/VS_GPSR_m.cc \
	src/routing/gpsr/VS_GPSRDefs.h \
	src/routing/gpsr/VS_GPSR_m.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/routing/gpsr/VS_PositionTable.o: src/routing/gpsr/VS_PositionTable.cc \
	src/routing/gpsr/VS_PositionTable.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INET_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/base/connectionManager/BaseConnectionManager.o: src/veins/base/connectionManager/BaseConnectionManager.cc \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/connectionManager/NicEntryDebug.h \
	src/veins/base/connectionManager/NicEntryDirect.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/base/connectionManager/ChannelAccess.o: src/veins/base/connectionManager/ChannelAccess.cc \
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
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/base/connectionManager/ConnectionManager.o: src/veins/base/connectionManager/ConnectionManager.cc \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/ConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/base/connectionManager/NicEntryDebug.o: src/veins/base/connectionManager/NicEntryDebug.cc \
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
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/base/connectionManager/NicEntryDirect.o: src/veins/base/connectionManager/NicEntryDirect.cc \
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
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/base/messages/AirFrame_m.o: src/veins/base/messages/AirFrame_m.cc \
	src/veins/base/messages/AirFrame_m.h \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/base/messages/BorderMsg_m.o: src/veins/base/messages/BorderMsg_m.cc \
	src/veins/base/messages/BorderMsg_m.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
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
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/base/modules/BaseMobility.o: src/veins/base/modules/BaseMobility.cc \
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
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/base/modules/BaseModule.o: src/veins/base/modules/BaseModule.cc \
	src/veins/base/modules/BaseModule.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/HostState.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/modules/BaseWorldUtility.o: src/veins/base/modules/BaseWorldUtility.cc \
	src/veins/base/connectionManager/BaseConnectionManager.h \
	src/veins/base/connectionManager/NicEntry.h \
	src/veins/base/modules/BaseWorldUtility.h \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
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
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
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
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/base/phyLayer/Signal.o: src/veins/base/phyLayer/Signal.cc \
	src/veins/base/phyLayer/Interpolation.h \
	src/veins/base/phyLayer/Mapping.h \
	src/veins/base/phyLayer/MappingBase.h \
	src/veins/base/phyLayer/MappingUtils.h \
	src/veins/base/phyLayer/Signal_.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h
$O/src/veins/base/utils/Coord.o: src/veins/base/utils/Coord.cc \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
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
	src/veins/modules/analogueModel/BreakpointPathlossModel.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/analogueModel/JakesFading.o: src/veins/modules/analogueModel/JakesFading.cc \
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
	src/veins/modules/analogueModel/JakesFading.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/analogueModel/LogNormalShadowing.o: src/veins/modules/analogueModel/LogNormalShadowing.cc \
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
	src/veins/modules/analogueModel/LogNormalShadowing.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/analogueModel/PERModel.o: src/veins/modules/analogueModel/PERModel.cc \
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
	src/veins/modules/analogueModel/PERModel.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/analogueModel/SimpleObstacleShadowing.o: src/veins/modules/analogueModel/SimpleObstacleShadowing.cc \
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
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/analogueModel/SimplePathlossModel.o: src/veins/modules/analogueModel/SimplePathlossModel.cc \
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
	src/veins/modules/analogueModel/SimplePathlossModel.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/analogueModel/TwoRayInterferenceModel.o: src/veins/modules/analogueModel/TwoRayInterferenceModel.cc \
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
	src/veins/modules/analogueModel/TwoRayInterferenceModel.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/application/ieee80211p/BaseWaveApplLayer.o: src/veins/modules/application/ieee80211p/BaseWaveApplLayer.cc \
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
	src/veins/modules/utility/Consts80211p.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/application/traci/TraCIDemo11p.o: src/veins/modules/application/traci/TraCIDemo11p.cc \
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
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/application/traci/TraCIDemoRSU11p.o: src/veins/modules/application/traci/TraCIDemoRSU11p.cc \
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
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/application/traci/TraCITestApp.o: src/veins/modules/application/traci/TraCITestApp.cc \
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
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/mac/ieee80211p/Mac1609_4.o: src/veins/modules/mac/ieee80211p/Mac1609_4.cc \
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
	src/veins/modules/utility/ConstsPhy.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
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
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/messages/WaveShortMessage_m.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/mobility/traci/TraCIBuffer.o: src/veins/modules/mobility/traci/TraCIBuffer.cc \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIConstants.h \
	src/veins/modules/mobility/traci/TraCICoord.h
$O/src/veins/modules/mobility/traci/TraCIColor.o: src/veins/modules/mobility/traci/TraCIColor.cc \
	src/veins/modules/mobility/traci/TraCIColor.h
$O/src/veins/modules/mobility/traci/TraCICommandInterface.o: src/veins/modules/mobility/traci/TraCICommandInterface.cc \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIColor.h \
	src/veins/modules/mobility/traci/TraCICommandInterface.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCIConstants.h \
	src/veins/modules/mobility/traci/TraCICoord.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/mobility/traci/TraCIConnection.o: src/veins/modules/mobility/traci/TraCIConnection.cc \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/mobility/traci/TraCIBuffer.h \
	src/veins/modules/mobility/traci/TraCIConnection.h \
	src/veins/modules/mobility/traci/TraCIConstants.h \
	src/veins/modules/mobility/traci/TraCICoord.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/mobility/traci/TraCIMobility.o: src/veins/modules/mobility/traci/TraCIMobility.cc \
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
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/mobility/traci/TraCIScenarioManager.o: src/veins/modules/mobility/traci/TraCIScenarioManager.cc \
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
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/mobility/traci/TraCIScenarioManagerInet.o: src/veins/modules/mobility/traci/TraCIScenarioManagerInet.cc \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.o: src/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.cc \
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
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/mobility/traci/TraCIScreenRecorder.o: src/veins/modules/mobility/traci/TraCIScreenRecorder.cc \
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
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/obstacle/Obstacle.o: src/veins/modules/obstacle/Obstacle.cc \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/obstacle/ObstacleControl.o: src/veins/modules/obstacle/ObstacleControl.cc \
	src/veins/base/utils/Coord.h \
	src/veins/base/utils/FWMath.h \
	src/veins/base/utils/FindModule.h \
	src/veins/base/utils/MiXiMDefs.h \
	src/veins/base/utils/miximkerneldefs.h \
	src/veins/modules/obstacle/Obstacle.h \
	src/veins/modules/obstacle/ObstacleControl.h \
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/phy/Decider80211p.o: src/veins/modules/phy/Decider80211p.cc \
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
	src/veins/modules/utility/ConstsPhy.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/src/veins/modules/phy/NistErrorRate.o: src/veins/modules/phy/NistErrorRate.cc \
	src/veins/modules/phy/NistErrorRate.h \
	src/veins/modules/utility/ConstsPhy.h
$O/src/veins/modules/phy/PhyLayer80211p.o: src/veins/modules/phy/PhyLayer80211p.cc \
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
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
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
	src/veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h

