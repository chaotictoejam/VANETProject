#
# OMNeT++/OMNEST Makefile for dissertation
#
# This file was generated with the command:
#  opp_makemake -f --deep -o dissertation -O out -I../inet -I../inet/networklayer/arp -I../inet/util -I../inet/linklayer/common -I../inet/linklayer/ieee80211mesh/locator -I../inet/linklayer/radio -I../inet/networklayer/icmpv6 -I../inet/networklayer/common -I../inet/networklayer/ipv4 -I../inet/util/headerserializers/ipv4 -I../inet/wpan/linklayer/bmac -I../inet/linklayer/ieee80211/mac -I../inet/networklayer/manetrouting/dsr -I../inet/util/headerserializers/udp -I../inet/linklayer/ieee80211/radio -I../inet/linklayer/radio/propagation -I../inet/util/headerserializers -I../inet/wpan/linklayer/ieee802154/contract -I../inet/world/obstacles -I../inet/base -I../inet/util/headerserializers/tcp -I../inet/util/headerserializers/ipv6 -I../inet/util/headerserializers/sctp -I../inet/mobility/common -I../inet/wpan/phyLayer/ieee802154 -I../inet/world/powercontrol -I../inet/networklayer/ipv6tunneling -I../inet/networklayer/routing/aodv -I../inet/world/radio -I../inet/transport/udp -I../inet/networklayer/manetrouting/base -I../inet/wpan/networklayer/contract -I../inet/status -I../inet/linklayer/contract -I../inet/linklayer/ieee80211/mgmt -I../inet/transport/tcp_common -I../inet/networklayer/contract -I../inet/battery/models -I../inet/networklayer/xmipv6 -I../inet/networklayer/autorouting/ipv4 -I../inet/transport/contract -I../inet/mobility/contract -I../inet/applications/pingapp -I../inet/transport/sctp -I../inet/linklayer/ethernet -I../inet/linklayer/ieee80211/radio/errormodel -I../inet/networklayer/ipv6 -I../inet/networklayer/manetrouting/aodv-uu/aodv-uu -I../inet/networklayer/manetrouting/aodv-uu -DWITH_TCP_COMMON -DWITH_TCP_INET -DWITH_IPv4 -DWITH_IPv6 -DWITH_GENERIC -DWITH_FLOOD -DWITH_UDP -DWITH_RTP -DWITH_SCTP -DWITH_DHCP -DWITH_ETHERNET -DWITH_PPP -DWITH_MPLS -DWITH_OSPFv2 -DWITH_BGPv4 -DWITH_PIM -DWITH_AODV -DWITH_RIP -DWITH_MANET -DWITH_POWER -DWITH_RADIO -DWITH_IEEE80211 -DWITH_IEEE802154 -DWITH_APSKRADIO -DWITH_IDEALWIRELESS -DWITH_TUN -DWITH_BMAC -DWITH_LMAC -DWITH_CSMA -DWITH_XMAC -DWITH_80211MESH -DWITH_xMIPv6 -DWITH_TRACI
#

# Name of target to be created (-o option)
TARGET = dissertation$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../inet \
    -I../inet/networklayer/arp \
    -I../inet/util \
    -I../inet/linklayer/common \
    -I../inet/linklayer/ieee80211mesh/locator \
    -I../inet/linklayer/radio \
    -I../inet/networklayer/icmpv6 \
    -I../inet/networklayer/common \
    -I../inet/networklayer/ipv4 \
    -I../inet/util/headerserializers/ipv4 \
    -I../inet/wpan/linklayer/bmac \
    -I../inet/linklayer/ieee80211/mac \
    -I../inet/networklayer/manetrouting/dsr \
    -I../inet/util/headerserializers/udp \
    -I../inet/linklayer/ieee80211/radio \
    -I../inet/linklayer/radio/propagation \
    -I../inet/util/headerserializers \
    -I../inet/wpan/linklayer/ieee802154/contract \
    -I../inet/world/obstacles \
    -I../inet/base \
    -I../inet/util/headerserializers/tcp \
    -I../inet/util/headerserializers/ipv6 \
    -I../inet/util/headerserializers/sctp \
    -I../inet/mobility/common \
    -I../inet/wpan/phyLayer/ieee802154 \
    -I../inet/world/powercontrol \
    -I../inet/networklayer/ipv6tunneling \
    -I../inet/networklayer/routing/aodv \
    -I../inet/world/radio \
    -I../inet/transport/udp \
    -I../inet/networklayer/manetrouting/base \
    -I../inet/wpan/networklayer/contract \
    -I../inet/status \
    -I../inet/linklayer/contract \
    -I../inet/linklayer/ieee80211/mgmt \
    -I../inet/transport/tcp_common \
    -I../inet/networklayer/contract \
    -I../inet/battery/models \
    -I../inet/networklayer/xmipv6 \
    -I../inet/networklayer/autorouting/ipv4 \
    -I../inet/transport/contract \
    -I../inet/mobility/contract \
    -I../inet/applications/pingapp \
    -I../inet/transport/sctp \
    -I../inet/linklayer/ethernet \
    -I../inet/linklayer/ieee80211/radio/errormodel \
    -I../inet/networklayer/ipv6 \
    -I../inet/networklayer/manetrouting/aodv-uu/aodv-uu \
    -I../inet/networklayer/manetrouting/aodv-uu \
    -I. \
    -Iapplications \
    -Iapplications/traci \
    -Ilinklayer \
    -Ilinklayer/ieee80211 \
    -Ilinklayer/ieee80211/mgmt \
    -Ilinklayer/ieee80211mesh \
    -Ilinklayer/ieee80211mesh/vanetlocator \
    -Imobility \
    -Imobility/common \
    -Imobility/contract \
    -Imobility/single \
    -Inetworklayer \
    -Inetworklayer/vanetrouting \
    -Inetworklayer/vanetrouting/aodvvanet \
    -Inetworklayer/vanetrouting/aodvvanet/aodvvanet \
    -Inetworklayer/vanetrouting/aodvvanetrouting \
    -Inetworklayer/vanetrouting/base \
    -Inetworklayer/vanetrouting/bitcar \
    -Inetworklayer/vanetrouting/geoadv \
    -Inetworklayer/vanetrouting/rbvtr \
    -Inodes \
    -Inodes/aodvvanet \
    -Inodes/bitcar \
    -Inodes/rbvtr \
    -Iutil \
    -Iworld \
    -Iworld/traci

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS =

# Output directory
PROJECT_OUTPUT_DIR = ../../out
PROJECTRELATIVE_PATH = src/dissertation
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/applications/traci/aodvTraCI.o \
    $O/applications/traci/aodvTraCITestApp.o \
    $O/applications/traci/bitcarTraCIDemo.o \
    $O/applications/traci/bitcarTraCITestApp.o \
    $O/applications/traci/rbvtrTraCIDemo.o \
    $O/applications/traci/rbvtrTraCITestApp.o \
    $O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.o \
    $O/linklayer/ieee80211mesh/vanetlocator/VanetBigUint.o \
    $O/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.o \
    $O/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.o \
    $O/mobility/common/LineSegmentsVANETMobilityBase.o \
    $O/mobility/common/MovingVANETMobilityBase.o \
    $O/mobility/common/VANETMobilityAccess.o \
    $O/mobility/common/VANETMobilityBase.o \
    $O/mobility/contract/IVANETMobility.o \
    $O/mobility/single/aodvTraCIMobility.o \
    $O/mobility/single/bitcarTraCIMobility.o \
    $O/mobility/single/LinearVANETMobility.o \
    $O/mobility/single/rbvtrTraCIMobility.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.o \
    $O/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.o \
    $O/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.o \
    $O/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.o \
    $O/networklayer/vanetrouting/base/VanetAddress.o \
    $O/networklayer/vanetrouting/base/VanetNetfilterHook.o \
    $O/networklayer/vanetrouting/base/VanetRoutingBase.o \
    $O/networklayer/vanetrouting/bitcar/BITCARRouteData.o \
    $O/networklayer/vanetrouting/bitcar/BITCARRouting.o \
    $O/networklayer/vanetrouting/rbvtr/RBVTRRouteData.o \
    $O/networklayer/vanetrouting/rbvtr/RBVTRRouting.o \
    $O/util/GlobalWirelessLinkInspectorVanet.o \
    $O/world/traci/aodvTraCIScenarioManager.o \
    $O/world/traci/aodvTraCIScenarioManagerLaunchd.o \
    $O/world/traci/bitcarTraCIScenarioManager.o \
    $O/world/traci/bitcarTraCIScenarioManagerLaunchd.o \
    $O/world/traci/rbvtrTraCIScenarioManager.o \
    $O/world/traci/rbvtrTraCIScenarioManagerLaunchd.o \
    $O/world/traci/vanetTraCIColor.o \
    $O/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.o \
    $O/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.o \
    $O/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.o \
    $O/networklayer/vanetrouting/base/ControlVanetRouting_m.o \
    $O/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o \
    $O/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o \
    $O/networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.o \
    $O/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.o \
    $O/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.o

# Message files
MSGFILES = \
    linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt.msg \
    networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.msg \
    networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets.msg \
    networklayer/vanetrouting/base/ControlVanetRouting.msg \
    networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink.msg \
    networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo.msg \
    networklayer/vanetrouting/base/Vanet_MeshControlInfo.msg \
    networklayer/vanetrouting/bitcar/BITCARControlPackets.msg \
    networklayer/vanetrouting/rbvtr/RBVTRControlPackets.msg

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
	$(Q)-rm -f dissertation dissertation.exe libdissertation.so libdissertation.a libdissertation.dll libdissertation.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f applications/*_m.cc applications/*_m.h
	$(Q)-rm -f applications/traci/*_m.cc applications/traci/*_m.h
	$(Q)-rm -f linklayer/*_m.cc linklayer/*_m.h
	$(Q)-rm -f linklayer/ieee80211/*_m.cc linklayer/ieee80211/*_m.h
	$(Q)-rm -f linklayer/ieee80211/mgmt/*_m.cc linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/*_m.cc linklayer/ieee80211mesh/*_m.h
	$(Q)-rm -f linklayer/ieee80211mesh/vanetlocator/*_m.cc linklayer/ieee80211mesh/vanetlocator/*_m.h
	$(Q)-rm -f mobility/*_m.cc mobility/*_m.h
	$(Q)-rm -f mobility/common/*_m.cc mobility/common/*_m.h
	$(Q)-rm -f mobility/contract/*_m.cc mobility/contract/*_m.h
	$(Q)-rm -f mobility/single/*_m.cc mobility/single/*_m.h
	$(Q)-rm -f networklayer/*_m.cc networklayer/*_m.h
	$(Q)-rm -f networklayer/vanetrouting/*_m.cc networklayer/vanetrouting/*_m.h
	$(Q)-rm -f networklayer/vanetrouting/aodvvanet/*_m.cc networklayer/vanetrouting/aodvvanet/*_m.h
	$(Q)-rm -f networklayer/vanetrouting/aodvvanet/aodvvanet/*_m.cc networklayer/vanetrouting/aodvvanet/aodvvanet/*_m.h
	$(Q)-rm -f networklayer/vanetrouting/aodvvanetrouting/*_m.cc networklayer/vanetrouting/aodvvanetrouting/*_m.h
	$(Q)-rm -f networklayer/vanetrouting/base/*_m.cc networklayer/vanetrouting/base/*_m.h
	$(Q)-rm -f networklayer/vanetrouting/bitcar/*_m.cc networklayer/vanetrouting/bitcar/*_m.h
	$(Q)-rm -f networklayer/vanetrouting/geoadv/*_m.cc networklayer/vanetrouting/geoadv/*_m.h
	$(Q)-rm -f networklayer/vanetrouting/rbvtr/*_m.cc networklayer/vanetrouting/rbvtr/*_m.h
	$(Q)-rm -f nodes/*_m.cc nodes/*_m.h
	$(Q)-rm -f nodes/aodvvanet/*_m.cc nodes/aodvvanet/*_m.h
	$(Q)-rm -f nodes/bitcar/*_m.cc nodes/bitcar/*_m.h
	$(Q)-rm -f nodes/rbvtr/*_m.cc nodes/rbvtr/*_m.h
	$(Q)-rm -f util/*_m.cc util/*_m.h
	$(Q)-rm -f world/*_m.cc world/*_m.h
	$(Q)-rm -f world/traci/*_m.cc world/traci/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc applications/*.cc applications/traci/*.cc linklayer/*.cc linklayer/ieee80211/*.cc linklayer/ieee80211/mgmt/*.cc linklayer/ieee80211mesh/*.cc linklayer/ieee80211mesh/vanetlocator/*.cc mobility/*.cc mobility/common/*.cc mobility/contract/*.cc mobility/single/*.cc networklayer/*.cc networklayer/vanetrouting/*.cc networklayer/vanetrouting/aodvvanet/*.cc networklayer/vanetrouting/aodvvanet/aodvvanet/*.cc networklayer/vanetrouting/aodvvanetrouting/*.cc networklayer/vanetrouting/base/*.cc networklayer/vanetrouting/bitcar/*.cc networklayer/vanetrouting/geoadv/*.cc networklayer/vanetrouting/rbvtr/*.cc nodes/*.cc nodes/aodvvanet/*.cc nodes/bitcar/*.cc nodes/rbvtr/*.cc util/*.cc world/*.cc world/traci/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/applications/traci/aodvTraCI.o: applications/traci/aodvTraCI.cc \
	applications/traci/aodvTraCI.h \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/aodvTraCIMobility.h \
	world/traci/aodvTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/LifecycleOperation.h \
	../inet/base/ModuleAccess.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/status/NodeStatus.h \
	../inet/transport/contract/UDPSocket.h \
	../inet/util/FWMath.h
$O/applications/traci/aodvTraCITestApp.o: applications/traci/aodvTraCITestApp.cc \
	applications/traci/aodvTraCITestApp.h \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/aodvTraCIMobility.h \
	world/traci/aodvTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/LifecycleOperation.h \
	../inet/base/ModuleAccess.h \
	../inet/status/NodeStatus.h \
	../inet/util/FWMath.h
$O/applications/traci/bitcarTraCIDemo.o: applications/traci/bitcarTraCIDemo.cc \
	applications/traci/bitcarTraCIDemo.h \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/bitcarTraCIMobility.h \
	world/traci/bitcarTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/LifecycleOperation.h \
	../inet/base/ModuleAccess.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/status/NodeStatus.h \
	../inet/transport/contract/UDPSocket.h \
	../inet/util/FWMath.h
$O/applications/traci/bitcarTraCITestApp.o: applications/traci/bitcarTraCITestApp.cc \
	applications/traci/bitcarTraCITestApp.h \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/bitcarTraCIMobility.h \
	world/traci/bitcarTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/LifecycleOperation.h \
	../inet/base/ModuleAccess.h \
	../inet/status/NodeStatus.h \
	../inet/util/FWMath.h
$O/applications/traci/rbvtrTraCIDemo.o: applications/traci/rbvtrTraCIDemo.cc \
	applications/traci/rbvtrTraCIDemo.h \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/rbvtrTraCIMobility.h \
	world/traci/rbvtrTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/LifecycleOperation.h \
	../inet/base/ModuleAccess.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/status/NodeStatus.h \
	../inet/transport/contract/UDPSocket.h \
	../inet/util/FWMath.h
$O/applications/traci/rbvtrTraCITestApp.o: applications/traci/rbvtrTraCITestApp.cc \
	applications/traci/rbvtrTraCITestApp.h \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/rbvtrTraCIMobility.h \
	world/traci/rbvtrTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/LifecycleOperation.h \
	../inet/base/ModuleAccess.h \
	../inet/status/NodeStatus.h \
	../inet/util/FWMath.h
$O/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.o: linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.cc \
	linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.h \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/IPassiveQueue.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/PassiveQueueBase.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/util/FWMath.h
$O/linklayer/ieee80211mesh/vanetlocator/VanetBigUint.o: linklayer/ieee80211mesh/vanetlocator/VanetBigUint.cc \
	linklayer/ieee80211mesh/vanetlocator/VanetBigUint.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h
$O/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.o: linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	linklayer/ieee80211mesh/vanetlocator/VanetLocatorModule.h \
	linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	util/GlobalWirelessLinkInspectorVanet.h \
	../inet/base/Compat.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/IPassiveQueue.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/PassiveQueueBase.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/ARPPacket_m.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceTableAccess.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/IPv4InterfaceData.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/base/LocatorNotificationInfo_m.h \
	../inet/transport/contract/UDPControlInfo.h \
	../inet/transport/contract/UDPControlInfo_m.h \
	../inet/transport/contract/UDPSocket.h \
	../inet/transport/udp/UDP.h
$O/linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.o: linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.cc \
	linklayer/ieee80211mesh/vanetlocator/VanetLocatorModuleClient.h \
	linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	../inet/base/Compat.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/IPassiveQueue.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/PassiveQueueBase.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtSTA.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211Primitives_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceTableAccess.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/IPv4InterfaceData.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/transport/contract/UDPControlInfo.h \
	../inet/transport/contract/UDPControlInfo_m.h \
	../inet/transport/contract/UDPSocket.h \
	../inet/transport/udp/UDP.h
$O/linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.o: linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.cc \
	linklayer/ieee80211mesh/vanetlocator/vanetlocatorPkt_m.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h
$O/mobility/common/LineSegmentsVANETMobilityBase.o: mobility/common/LineSegmentsVANETMobilityBase.cc \
	mobility/common/LineSegmentsVANETMobilityBase.h \
	mobility/common/MovingVANETMobilityBase.h \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/mobility/common/MovingVANETMobilityBase.o: mobility/common/MovingVANETMobilityBase.cc \
	mobility/common/MovingVANETMobilityBase.h \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/mobility/common/VANETMobilityAccess.o: mobility/common/VANETMobilityAccess.cc \
	mobility/common/VANETMobilityAccess.h \
	mobility/contract/IVANETMobility.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/mobility/common/VANETMobilityBase.o: mobility/common/VANETMobilityBase.cc \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/mobility/contract/IVANETMobility.o: mobility/contract/IVANETMobility.cc \
	mobility/contract/IVANETMobility.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/util/FWMath.h
$O/mobility/single/LinearVANETMobility.o: mobility/single/LinearVANETMobility.cc \
	mobility/common/MovingVANETMobilityBase.h \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/LinearVANETMobility.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/mobility/single/aodvTraCIMobility.o: mobility/single/aodvTraCIMobility.cc \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/aodvTraCIMobility.h \
	world/traci/aodvTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/mobility/single/bitcarTraCIMobility.o: mobility/single/bitcarTraCIMobility.cc \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/bitcarTraCIMobility.h \
	world/traci/bitcarTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/mobility/single/rbvtrTraCIMobility.o: mobility/single/rbvtrTraCIMobility.cc \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/rbvtrTraCIMobility.h \
	world/traci/rbvtrTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.o: networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.o: networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.cc \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.o: networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv4ControlInfo.h \
	../inet/networklayer/contract/IPv4ControlInfo_m.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPv6ControlInfo.h \
	../inet/networklayer/contract/IPv6ControlInfo_m.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4InterfaceData.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/transport/udp/UDPPacket.h \
	../inet/transport/udp/UDPPacket_m.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.o: networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.o: networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.o: networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.o: networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.o: networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.o: networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.o: networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.o: networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.o: networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.cc \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.o: networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.o: networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/locality.o: networklayer/vanetrouting/aodvvanet/aodvvanet/locality.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4InterfaceData.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.o: networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.o: networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_hello.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_socket.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avlist.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/avseek_list.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/debug_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/defs_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/locality.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/params.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/routing_table.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_msg_struct_m.h \
	networklayer/vanetrouting/aodvvanet/aodvvanet_omnet.h \
	networklayer/vanetrouting/aodvvanet/av_packet_queue_omnet.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	../inet/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	../inet/networklayer/manetrouting/base/ManetAddress.h \
	../inet/networklayer/manetrouting/base/compatibility.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.o: networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.cc \
	mobility/contract/IVANETMobility.h \
	networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.o: networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.cc \
	networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/networklayer/contract/IPv4Address.h
$O/networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.o: networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.cc \
	mobility/contract/IVANETMobility.h \
	networklayer/vanetrouting/aodvvanetrouting/AODVVANETControlPackets_m.h \
	networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouteData.h \
	networklayer/vanetrouting/aodvvanetrouting/AODVVANETRouting.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/LifecycleOperation.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NodeOperations.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceTableAccess.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPSocket.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv4ControlInfo.h \
	../inet/networklayer/contract/IPv4ControlInfo_m.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/status/NodeStatus.h \
	../inet/transport/contract/UDPControlInfo.h \
	../inet/transport/contract/UDPControlInfo_m.h \
	../inet/transport/contract/UDPSocket.h \
	../inet/transport/udp/UDPPacket.h \
	../inet/transport/udp/UDPPacket_m.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/base/ControlVanetRouting_m.o: networklayer/vanetrouting/base/ControlVanetRouting_m.cc \
	networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h
$O/networklayer/vanetrouting/base/VanetAddress.o: networklayer/vanetrouting/base/VanetAddress.cc \
	networklayer/vanetrouting/base/VanetAddress.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h
$O/networklayer/vanetrouting/base/VanetNetfilterHook.o: networklayer/vanetrouting/base/VanetNetfilterHook.cc \
	networklayer/vanetrouting/base/ControlVanetRouting_m.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NotifierConsts.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceTableAccess.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv4ControlInfo.h \
	../inet/networklayer/contract/IPv4ControlInfo_m.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/networklayer/manetrouting/base/compatibility_dsr.h \
	../inet/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	../inet/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	../inet/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	../inet/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	../inet/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/networklayer/vanetrouting/base/VanetRoutingBase.o: networklayer/vanetrouting/base/VanetRoutingBase.cc \
	linklayer/ieee80211mesh/vanetlocator/IVanetLocator.h \
	networklayer/vanetrouting/base/VanetAddress.h \
	networklayer/vanetrouting/base/VanetNetfilterHook.h \
	networklayer/vanetrouting/base/VanetRoutingBase.h \
	networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
	networklayer/vanetrouting/base/compatibility_vanet.h \
	util/GlobalWirelessLinkInspectorVanet.h \
	../inet/base/AbstractQueue.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/IPassiveQueue.h \
	../inet/base/LifecycleOperation.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NodeOperations.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/base/PassiveQueueBase.h \
	../inet/base/ProtocolMap.h \
	../inet/base/QueueBase.h \
	../inet/base/ReassemblyBuffer.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	../inet/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	../inet/mobility/common/MobilityAccess.h \
	../inet/mobility/contract/IMobility.h \
	../inet/networklayer/arp/ARP.h \
	../inet/networklayer/arp/IARPCache.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceTableAccess.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPSocket.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv4ControlInfo.h \
	../inet/networklayer/contract/IPv4ControlInfo_m.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPv6ControlInfo.h \
	../inet/networklayer/contract/IPv6ControlInfo_m.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/ICMP.h \
	../inet/networklayer/ipv4/ICMPAccess.h \
	../inet/networklayer/ipv4/ICMPMessage.h \
	../inet/networklayer/ipv4/ICMPMessage_m.h \
	../inet/networklayer/ipv4/IPv4.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4FragBuf.h \
	../inet/networklayer/ipv4/IPv4InterfaceData.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/transport/udp/UDPPacket.h \
	../inet/transport/udp/UDPPacket_m.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o: networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.cc \
	networklayer/vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/linklayer/contract/MACAddress.h
$O/networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o: networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.cc \
	networklayer/vanetrouting/base/Vanet_LocatorNotificationInfo_m.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/networklayer/contract/IPv4Address.h
$O/networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.o: networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.cc \
	networklayer/vanetrouting/base/Vanet_MeshControlInfo_m.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h
$O/networklayer/vanetrouting/bitcar/BITCARControlPackets_m.o: networklayer/vanetrouting/bitcar/BITCARControlPackets_m.cc \
	mobility/contract/IVANETMobility.h \
	networklayer/vanetrouting/bitcar/BITCARControlPackets_m.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/bitcar/BITCARRouteData.o: networklayer/vanetrouting/bitcar/BITCARRouteData.cc \
	networklayer/vanetrouting/bitcar/BITCARRouteData.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/networklayer/contract/IPv4Address.h
$O/networklayer/vanetrouting/bitcar/BITCARRouting.o: networklayer/vanetrouting/bitcar/BITCARRouting.cc \
	mobility/contract/IVANETMobility.h \
	networklayer/vanetrouting/bitcar/BITCARControlPackets_m.h \
	networklayer/vanetrouting/bitcar/BITCARRouteData.h \
	networklayer/vanetrouting/bitcar/BITCARRouting.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/LifecycleOperation.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NodeOperations.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceTableAccess.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPSocket.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv4ControlInfo.h \
	../inet/networklayer/contract/IPv4ControlInfo_m.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/status/NodeStatus.h \
	../inet/transport/contract/UDPControlInfo.h \
	../inet/transport/contract/UDPControlInfo_m.h \
	../inet/transport/contract/UDPSocket.h \
	../inet/transport/udp/UDPPacket.h \
	../inet/transport/udp/UDPPacket_m.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.o: networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.cc \
	mobility/contract/IVANETMobility.h \
	networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/util/FWMath.h
$O/networklayer/vanetrouting/rbvtr/RBVTRRouteData.o: networklayer/vanetrouting/rbvtr/RBVTRRouteData.cc \
	networklayer/vanetrouting/rbvtr/RBVTRRouteData.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/networklayer/contract/IPv4Address.h
$O/networklayer/vanetrouting/rbvtr/RBVTRRouting.o: networklayer/vanetrouting/rbvtr/RBVTRRouting.cc \
	mobility/contract/IVANETMobility.h \
	networklayer/vanetrouting/rbvtr/RBVTRControlPackets_m.h \
	networklayer/vanetrouting/rbvtr/RBVTRRouteData.h \
	networklayer/vanetrouting/rbvtr/RBVTRRouting.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/ILifecycle.h \
	../inet/base/INETDefs.h \
	../inet/base/INotifiable.h \
	../inet/base/LifecycleOperation.h \
	../inet/base/ModuleAccess.h \
	../inet/base/NodeOperations.h \
	../inet/base/NotificationBoard.h \
	../inet/base/NotifierConsts.h \
	../inet/linklayer/contract/Ieee802Ctrl_m.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Consts.h \
	../inet/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	../inet/networklayer/common/IInterfaceTable.h \
	../inet/networklayer/common/INetfilter.h \
	../inet/networklayer/common/InterfaceEntry.h \
	../inet/networklayer/common/InterfaceTableAccess.h \
	../inet/networklayer/common/InterfaceToken.h \
	../inet/networklayer/contract/IPProtocolId_m.h \
	../inet/networklayer/contract/IPSocket.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv4ControlInfo.h \
	../inet/networklayer/contract/IPv4ControlInfo_m.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h \
	../inet/networklayer/ipv4/IPv4Datagram.h \
	../inet/networklayer/ipv4/IPv4Datagram_m.h \
	../inet/networklayer/ipv4/IPv4Route.h \
	../inet/networklayer/ipv4/IPv4RouteRule.h \
	../inet/networklayer/ipv4/IRoutingTable.h \
	../inet/networklayer/ipv4/RoutingTableAccess.h \
	../inet/status/NodeStatus.h \
	../inet/transport/contract/UDPControlInfo.h \
	../inet/transport/contract/UDPControlInfo_m.h \
	../inet/transport/contract/UDPSocket.h \
	../inet/transport/udp/UDPPacket.h \
	../inet/transport/udp/UDPPacket_m.h \
	../inet/util/FWMath.h
$O/util/GlobalWirelessLinkInspectorVanet.o: util/GlobalWirelessLinkInspectorVanet.cc \
	networklayer/vanetrouting/base/VanetAddress.h \
	util/GlobalWirelessLinkInspectorVanet.h \
	../inet/base/Compat.h \
	../inet/base/INETDefs.h \
	../inet/linklayer/contract/MACAddress.h \
	../inet/networklayer/contract/IPv4Address.h \
	../inet/networklayer/contract/IPv6Address.h \
	../inet/networklayer/contract/IPvXAddress.h
$O/world/traci/aodvTraCIScenarioManager.o: world/traci/aodvTraCIScenarioManager.cc \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/aodvTraCIMobility.h \
	world/traci/aodvTraCIConstants.h \
	world/traci/aodvTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/world/traci/aodvTraCIScenarioManagerLaunchd.o: world/traci/aodvTraCIScenarioManagerLaunchd.cc \
	world/traci/aodvTraCIConstants.h \
	world/traci/aodvTraCIScenarioManager.h \
	world/traci/aodvTraCIScenarioManagerLaunchd.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/world/traci/bitcarTraCIScenarioManager.o: world/traci/bitcarTraCIScenarioManager.cc \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/bitcarTraCIMobility.h \
	world/traci/bitcarTraCIConstants.h \
	world/traci/bitcarTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/world/traci/bitcarTraCIScenarioManagerLaunchd.o: world/traci/bitcarTraCIScenarioManagerLaunchd.cc \
	world/traci/bitcarTraCIConstants.h \
	world/traci/bitcarTraCIScenarioManager.h \
	world/traci/bitcarTraCIScenarioManagerLaunchd.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/world/traci/rbvtrTraCIScenarioManager.o: world/traci/rbvtrTraCIScenarioManager.cc \
	mobility/common/VANETMobilityBase.h \
	mobility/contract/IVANETMobility.h \
	mobility/single/rbvtrTraCIMobility.h \
	world/traci/rbvtrTraCIConstants.h \
	world/traci/rbvtrTraCIScenarioManager.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/world/traci/rbvtrTraCIScenarioManagerLaunchd.o: world/traci/rbvtrTraCIScenarioManagerLaunchd.cc \
	world/traci/rbvtrTraCIConstants.h \
	world/traci/rbvtrTraCIScenarioManager.h \
	world/traci/rbvtrTraCIScenarioManagerLaunchd.h \
	world/traci/vanetTraCIColor.h \
	../inet/base/Compat.h \
	../inet/base/Coord.h \
	../inet/base/INETDefs.h \
	../inet/base/ModuleAccess.h \
	../inet/util/FWMath.h
$O/world/traci/vanetTraCIColor.o: world/traci/vanetTraCIColor.cc \
	world/traci/vanetTraCIColor.h

