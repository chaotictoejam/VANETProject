#
# OMNeT++/OMNEST Makefile for VANETSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -Xveins -IF:/GitHub/inetmanet-2.0/src/util/headerserializers/ipv4 -IF:/GitHub/inetmanet-2.0/src/wpan/linklayer/ieee802154/contract -IF:/GitHub/inetmanet-2.0/src -IF:/GitHub/inetmanet-2.0/src/util/headerserializers -IF:/GitHub/inetmanet-2.0/src/networklayer/common -IF:/GitHub/inetmanet-2.0/src/battery/models -IF:/GitHub/inetmanet-2.0/src/networklayer/manetrouting/dsr -IF:/GitHub/inetmanet-2.0/src/linklayer/radio/propagation -IF:/GitHub/inetmanet-2.0/src/networklayer/contract -IF:/GitHub/inetmanet-2.0/src/transport/tcp_common -IF:/GitHub/inetmanet-2.0/src/wpan/networklayer/contract -IF:/GitHub/inetmanet-2.0/src/util/headerserializers/ipv6 -IF:/GitHub/inetmanet-2.0/src/linklayer/common -IF:/GitHub/inetmanet-2.0/src/world/obstacles -IF:/GitHub/inetmanet-2.0/src/linklayer/ieee80211/radio -IF:/GitHub/inetmanet-2.0/src/networklayer/manetrouting/base -IF:/GitHub/inetmanet-2.0/src/networklayer/autorouting/ipv4 -IF:/GitHub/inetmanet-2.0/src/util/headerserializers/tcp -IF:/GitHub/inetmanet-2.0/src/networklayer/arp -IF:/GitHub/inetmanet-2.0/src/transport/sctp -IF:/GitHub/inetmanet-2.0/src/util/headerserializers/sctp -IF:/GitHub/inetmanet-2.0/src/base -IF:/GitHub/inetmanet-2.0/src/networklayer/ipv6tunneling -IF:/GitHub/inetmanet-2.0/src/wpan/linklayer/bmac -IF:/GitHub/inetmanet-2.0/src/wpan/linklayer/ieee802154/mac -IF:/GitHub/inetmanet-2.0/src/linklayer/contract -IF:/GitHub/inetmanet-2.0/src/world/radio -IF:/GitHub/inetmanet-2.0/src/linklayer/ieee80211/mac -IF:/GitHub/inetmanet-2.0/src/transport/udp -IF:/GitHub/inetmanet-2.0/src/networklayer/ipv6 -IF:/GitHub/inetmanet-2.0/src/applications/pingapp -IF:/GitHub/inetmanet-2.0/src/linklayer/radio -IF:/GitHub/inetmanet-2.0/src/transport/contract -IF:/GitHub/inetmanet-2.0/src/networklayer/icmpv6 -IF:/GitHub/inetmanet-2.0/src/mobility/contract -IF:/GitHub/inetmanet-2.0/src/networklayer/routing/aodv -IF:/GitHub/inetmanet-2.0/src/world/powercontrol -IF:/GitHub/inetmanet-2.0/src/linklayer/ethernet -IF:/GitHub/inetmanet-2.0/src/util/headerserializers/udp -IF:/GitHub/inetmanet-2.0/src/linklayer/ieee80211mesh/locator -IF:/GitHub/inetmanet-2.0/src/linklayer/ieee80211/mgmt -IF:/GitHub/inetmanet-2.0/src/networklayer/ipv4 -IF:/GitHub/inetmanet-2.0/src/wpan/phyLayer/ieee802154 -IF:/GitHub/inetmanet-2.0/src/mobility/common -IF:/GitHub/inetmanet-2.0/src/linklayer/ieee80211/radio/errormodel -IF:/GitHub/inetmanet-2.0/src/util -IF:/GitHub/inetmanet-2.0/src/status -IF:/GitHub/inetmanet-2.0/src/networklayer/xmipv6 -IF:/GitHub/inetmanet-2.0/src/networklayer/manetrouting/aodv-uu -IF:/GitHub/inetmanet-2.0/src/networklayer/manetrouting/aodv-uu/aodv-uu -LF:/GitHub/inetmanet-2.0/out/$$\(CONFIGNAME\)/src -linetmanet -DINET_IMPORT -KINETMANET_2_0_PROJ=F:/GitHub/inetmanet-2.0
#

# Name of target to be created (-o option)
TARGET = VANETSim$(EXE_SUFFIX)

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I$(INETMANET_2_0_PROJ)/src/util/headerserializers/ipv4 \
    -I$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/contract \
    -I$(INETMANET_2_0_PROJ)/src \
    -I$(INETMANET_2_0_PROJ)/src/util/headerserializers \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/common \
    -I$(INETMANET_2_0_PROJ)/src/battery/models \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/dsr \
    -I$(INETMANET_2_0_PROJ)/src/linklayer/radio/propagation \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/contract \
    -I$(INETMANET_2_0_PROJ)/src/transport/tcp_common \
    -I$(INETMANET_2_0_PROJ)/src/wpan/networklayer/contract \
    -I$(INETMANET_2_0_PROJ)/src/util/headerserializers/ipv6 \
    -I$(INETMANET_2_0_PROJ)/src/linklayer/common \
    -I$(INETMANET_2_0_PROJ)/src/world/obstacles \
    -I$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/radio \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/autorouting/ipv4 \
    -I$(INETMANET_2_0_PROJ)/src/util/headerserializers/tcp \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/arp \
    -I$(INETMANET_2_0_PROJ)/src/transport/sctp \
    -I$(INETMANET_2_0_PROJ)/src/util/headerserializers/sctp \
    -I$(INETMANET_2_0_PROJ)/src/base \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/ipv6tunneling \
    -I$(INETMANET_2_0_PROJ)/src/wpan/linklayer/bmac \
    -I$(INETMANET_2_0_PROJ)/src/wpan/linklayer/ieee802154/mac \
    -I$(INETMANET_2_0_PROJ)/src/linklayer/contract \
    -I$(INETMANET_2_0_PROJ)/src/world/radio \
    -I$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac \
    -I$(INETMANET_2_0_PROJ)/src/transport/udp \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/ipv6 \
    -I$(INETMANET_2_0_PROJ)/src/applications/pingapp \
    -I$(INETMANET_2_0_PROJ)/src/linklayer/radio \
    -I$(INETMANET_2_0_PROJ)/src/transport/contract \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/icmpv6 \
    -I$(INETMANET_2_0_PROJ)/src/mobility/contract \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/routing/aodv \
    -I$(INETMANET_2_0_PROJ)/src/world/powercontrol \
    -I$(INETMANET_2_0_PROJ)/src/linklayer/ethernet \
    -I$(INETMANET_2_0_PROJ)/src/util/headerserializers/udp \
    -I$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator \
    -I$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mgmt \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/ipv4 \
    -I$(INETMANET_2_0_PROJ)/src/wpan/phyLayer/ieee802154 \
    -I$(INETMANET_2_0_PROJ)/src/mobility/common \
    -I$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/radio/errormodel \
    -I$(INETMANET_2_0_PROJ)/src/util \
    -I$(INETMANET_2_0_PROJ)/src/status \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/xmipv6 \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu \
    -I. \
    -Inodes \
    -Irouting \
    -Irouting/aodvvanet \
    -Irouting/aodvvanet/aodvvanet \
    -Irouting/aodvvanetrouting \
    -Irouting/bitcar \
    -Irouting/geoadv \
    -Irouting/rbvtr \
    -Ivanetrouting \
    -Ivanetrouting/applications \
    -Ivanetrouting/applications/traci \
    -Ivanetrouting/base \
    -Ivanetrouting/linklayer \
    -Ivanetrouting/linklayer/ieee80211 \
    -Ivanetrouting/linklayer/ieee80211/mgmt \
    -Ivanetrouting/mobility \
    -Ivanetrouting/mobility/common \
    -Ivanetrouting/mobility/contract \
    -Ivanetrouting/mobility/group \
    -Ivanetrouting/mobility/single \
    -Ivanetrouting/mobility/static \
    -Ivanetrouting/networklayer \
    -Ivanetrouting/util \
    -Ivanetrouting/world \
    -Ivanetrouting/world/traci

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L$(INETMANET_2_0_PROJ)/out/$(CONFIGNAME)/src  -linetmanet
LIBS += -Wl,-rpath,`abspath $(INETMANET_2_0_PROJ)/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/routing/aodvvanet/aodvvanet_msg_struct.o \
    $O/routing/aodvvanet/aodvvanet_omnet.o \
    $O/routing/aodvvanet/av_packet_queue_omnet.o \
    $O/routing/aodvvanet/aodvvanet/aodvvanet_hello.o \
    $O/routing/aodvvanet/aodvvanet/aodvvanet_neighbor.o \
    $O/routing/aodvvanet/aodvvanet/aodvvanet_rerr.o \
    $O/routing/aodvvanet/aodvvanet/aodvvanet_rrep.o \
    $O/routing/aodvvanet/aodvvanet/aodvvanet_rreq.o \
    $O/routing/aodvvanet/aodvvanet/aodvvanet_socket.o \
    $O/routing/aodvvanet/aodvvanet/aodvvanet_timeout.o \
    $O/routing/aodvvanet/aodvvanet/avlist.o \
    $O/routing/aodvvanet/aodvvanet/avseek_list.o \
    $O/routing/aodvvanet/aodvvanet/debug_aodvvanet.o \
    $O/routing/aodvvanet/aodvvanet/locality.o \
    $O/routing/aodvvanet/aodvvanet/routing_table.o \
    $O/routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.o \
    $O/routing/aodvvanetrouting/AODVVANETRouteData.o \
    $O/routing/aodvvanetrouting/AODVVANETRouting.o \
    $O/routing/bitcar/BITCARRouteData.o \
    $O/routing/bitcar/BITCARRouting.o \
    $O/routing/rbvtr/RBVTRRouteData.o \
    $O/routing/rbvtr/RBVTRRouting.o \
    $O/vanetrouting/applications/traci/aodvTraCI.o \
    $O/vanetrouting/applications/traci/aodvTraCITestApp.o \
    $O/vanetrouting/applications/traci/bitcarTraCIDemo.o \
    $O/vanetrouting/applications/traci/bitcarTraCITestApp.o \
    $O/vanetrouting/applications/traci/rbvtrTraCIDemo.o \
    $O/vanetrouting/applications/traci/rbvtrTraCITestApp.o \
    $O/vanetrouting/base/VanetAddress.o \
    $O/vanetrouting/base/VanetModuleAccess.o \
    $O/vanetrouting/base/VanetNetfilterHook.o \
    $O/vanetrouting/base/VanetRoutingBase.o \
    $O/vanetrouting/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.o \
    $O/vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.o \
    $O/vanetrouting/mobility/common/MovingVANETMobilityBase.o \
    $O/vanetrouting/mobility/common/VANETMobilityAccess.o \
    $O/vanetrouting/mobility/common/VANETMobilityBase.o \
    $O/vanetrouting/mobility/contract/IVANETMobility.o \
    $O/vanetrouting/mobility/single/aodvTraCIMobility.o \
    $O/vanetrouting/mobility/single/bitcarTraCIMobility.o \
    $O/vanetrouting/mobility/single/LinearVANETMobility.o \
    $O/vanetrouting/mobility/single/rbvtrTraCIMobility.o \
    $O/vanetrouting/util/GlobalWirelessLinkInspector_Vanet.o \
    $O/vanetrouting/world/traci/aodvTraCIScenarioManager.o \
    $O/vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.o \
    $O/vanetrouting/world/traci/bitcarTraCIScenarioManager.o \
    $O/vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.o \
    $O/vanetrouting/world/traci/rbvtrTraCIScenarioManager.o \
    $O/vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.o \
    $O/vanetrouting/world/traci/vanetTraCIColor.o \
    $O/routing/aodvvanet/aodvvanet_msg_struct_m.o \
    $O/routing/aodvvanetrouting/AODVVANETControlPackets_m.o \
    $O/routing/bitcar/BITCARControlPackets_m.o \
    $O/routing/rbvtr/RBVTRControlPackets_m.o \
    $O/vanetrouting/base/ControlVanetRouting_m.o \
    $O/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o \
    $O/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o \
    $O/vanetrouting/base/Vanet_MeshControlInfo_m.o

# Message files
MSGFILES = \
    routing/aodvvanet/aodvvanet_msg_struct.msg \
    routing/aodvvanetrouting/AODVVANETControlPackets.msg \
    routing/bitcar/BITCARControlPackets.msg \
    routing/rbvtr/RBVTRControlPackets.msg \
    vanetrouting/base/ControlVanetRouting.msg \
    vanetrouting/base/Vanet_ControlInfoBreakLink.msg \
    vanetrouting/base/Vanet_LocatorNotificationInfo.msg \
    vanetrouting/base/Vanet_MeshControlInfo.msg

# Other makefile variables (-K)
INETMANET_2_0_PROJ=F:/GitHub/inetmanet-2.0

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
	$(Q)-rm -f nodes/*_m.cc nodes/*_m.h
	$(Q)-rm -f routing/*_m.cc routing/*_m.h
	$(Q)-rm -f routing/aodvvanet/*_m.cc routing/aodvvanet/*_m.h
	$(Q)-rm -f routing/aodvvanet/aodvvanet/*_m.cc routing/aodvvanet/aodvvanet/*_m.h
	$(Q)-rm -f routing/aodvvanetrouting/*_m.cc routing/aodvvanetrouting/*_m.h
	$(Q)-rm -f routing/bitcar/*_m.cc routing/bitcar/*_m.h
	$(Q)-rm -f routing/geoadv/*_m.cc routing/geoadv/*_m.h
	$(Q)-rm -f routing/rbvtr/*_m.cc routing/rbvtr/*_m.h
	$(Q)-rm -f vanetrouting/*_m.cc vanetrouting/*_m.h
	$(Q)-rm -f vanetrouting/applications/*_m.cc vanetrouting/applications/*_m.h
	$(Q)-rm -f vanetrouting/applications/traci/*_m.cc vanetrouting/applications/traci/*_m.h
	$(Q)-rm -f vanetrouting/base/*_m.cc vanetrouting/base/*_m.h
	$(Q)-rm -f vanetrouting/linklayer/*_m.cc vanetrouting/linklayer/*_m.h
	$(Q)-rm -f vanetrouting/linklayer/ieee80211/*_m.cc vanetrouting/linklayer/ieee80211/*_m.h
	$(Q)-rm -f vanetrouting/linklayer/ieee80211/mgmt/*_m.cc vanetrouting/linklayer/ieee80211/mgmt/*_m.h
	$(Q)-rm -f vanetrouting/mobility/*_m.cc vanetrouting/mobility/*_m.h
	$(Q)-rm -f vanetrouting/mobility/common/*_m.cc vanetrouting/mobility/common/*_m.h
	$(Q)-rm -f vanetrouting/mobility/contract/*_m.cc vanetrouting/mobility/contract/*_m.h
	$(Q)-rm -f vanetrouting/mobility/group/*_m.cc vanetrouting/mobility/group/*_m.h
	$(Q)-rm -f vanetrouting/mobility/single/*_m.cc vanetrouting/mobility/single/*_m.h
	$(Q)-rm -f vanetrouting/mobility/static/*_m.cc vanetrouting/mobility/static/*_m.h
	$(Q)-rm -f vanetrouting/networklayer/*_m.cc vanetrouting/networklayer/*_m.h
	$(Q)-rm -f vanetrouting/util/*_m.cc vanetrouting/util/*_m.h
	$(Q)-rm -f vanetrouting/world/*_m.cc vanetrouting/world/*_m.h
	$(Q)-rm -f vanetrouting/world/traci/*_m.cc vanetrouting/world/traci/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc nodes/*.cc routing/*.cc routing/aodvvanet/*.cc routing/aodvvanet/aodvvanet/*.cc routing/aodvvanetrouting/*.cc routing/bitcar/*.cc routing/geoadv/*.cc routing/rbvtr/*.cc vanetrouting/*.cc vanetrouting/applications/*.cc vanetrouting/applications/traci/*.cc vanetrouting/base/*.cc vanetrouting/linklayer/*.cc vanetrouting/linklayer/ieee80211/*.cc vanetrouting/linklayer/ieee80211/mgmt/*.cc vanetrouting/mobility/*.cc vanetrouting/mobility/common/*.cc vanetrouting/mobility/contract/*.cc vanetrouting/mobility/group/*.cc vanetrouting/mobility/single/*.cc vanetrouting/mobility/static/*.cc vanetrouting/networklayer/*.cc vanetrouting/util/*.cc vanetrouting/world/*.cc vanetrouting/world/traci/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/routing/aodvvanet/aodvvanet_msg_struct.o: routing/aodvvanet/aodvvanet_msg_struct.cc \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet_msg_struct_m.o: routing/aodvvanet/aodvvanet_msg_struct_m.cc \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h
$O/routing/aodvvanet/aodvvanet_omnet.o: routing/aodvvanet/aodvvanet_omnet.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/ControlVanetRouting_m.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/transport/udp/UDPPacket.h \
	$(INETMANET_2_0_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/av_packet_queue_omnet.o: routing/aodvvanet/av_packet_queue_omnet.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/aodvvanet_hello.o: routing/aodvvanet/aodvvanet/aodvvanet_hello.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/aodvvanet_neighbor.o: routing/aodvvanet/aodvvanet/aodvvanet_neighbor.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/aodvvanet_rerr.o: routing/aodvvanet/aodvvanet/aodvvanet_rerr.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/aodvvanet_rrep.o: routing/aodvvanet/aodvvanet/aodvvanet_rrep.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/aodvvanet_rreq.o: routing/aodvvanet/aodvvanet/aodvvanet_rreq.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/aodvvanet_socket.o: routing/aodvvanet/aodvvanet/aodvvanet_socket.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/aodvvanet_timeout.o: routing/aodvvanet/aodvvanet/aodvvanet_timeout.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/avlist.o: routing/aodvvanet/aodvvanet/avlist.cc \
	routing/aodvvanet/aodvvanet/avlist.h
$O/routing/aodvvanet/aodvvanet/avseek_list.o: routing/aodvvanet/aodvvanet/avseek_list.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/debug_aodvvanet.o: routing/aodvvanet/aodvvanet/debug_aodvvanet.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/locality.o: routing/aodvvanet/aodvvanet/locality.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/routing_table.o: routing/aodvvanet/aodvvanet/routing_table.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.o: routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.cc \
	routing/aodvvanet/aodvvanet/aodvvanet_hello.h \
	routing/aodvvanet/aodvvanet/aodvvanet_neighbor.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rerr.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rrep.h \
	routing/aodvvanet/aodvvanet/aodvvanet_rreq.h \
	routing/aodvvanet/aodvvanet/aodvvanet_socket.h \
	routing/aodvvanet/aodvvanet/aodvvanet_timeout.h \
	routing/aodvvanet/aodvvanet/avlist.h \
	routing/aodvvanet/aodvvanet/avseek_list.h \
	routing/aodvvanet/aodvvanet/debug_aodvvanet.h \
	routing/aodvvanet/aodvvanet/defs_aodvvanet.h \
	routing/aodvvanet/aodvvanet/locality.h \
	routing/aodvvanet/aodvvanet/params.h \
	routing/aodvvanet/aodvvanet/routing_table.h \
	routing/aodvvanet/aodvvanet/timer_queue_aodvvanet.h \
	routing/aodvvanet/aodvvanet_msg_struct.h \
	routing/aodvvanet/aodvvanet_msg_struct_m.h \
	routing/aodvvanet/aodvvanet_omnet.h \
	routing/aodvvanet/av_packet_queue_omnet.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/defs_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/list.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/params.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/routing_table.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/aodv-uu/aodv-uu/timer_queue_aodv.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/ManetAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanetrouting/AODVVANETControlPackets_m.o: routing/aodvvanetrouting/AODVVANETControlPackets_m.cc \
	routing/aodvvanetrouting/AODVVANETControlPackets_m.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/aodvvanetrouting/AODVVANETRouteData.o: routing/aodvvanetrouting/AODVVANETRouteData.cc \
	routing/aodvvanetrouting/AODVVANETRouteData.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h
$O/routing/aodvvanetrouting/AODVVANETRouting.o: routing/aodvvanetrouting/AODVVANETRouting.cc \
	routing/aodvvanetrouting/AODVVANETControlPackets_m.h \
	routing/aodvvanetrouting/AODVVANETRouteData.h \
	routing/aodvvanetrouting/AODVVANETRouting.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NodeOperations.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPSocket.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPSocket.h \
	$(INETMANET_2_0_PROJ)/src/transport/udp/UDPPacket.h \
	$(INETMANET_2_0_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/bitcar/BITCARControlPackets_m.o: routing/bitcar/BITCARControlPackets_m.cc \
	routing/bitcar/BITCARControlPackets_m.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/bitcar/BITCARRouteData.o: routing/bitcar/BITCARRouteData.cc \
	routing/bitcar/BITCARRouteData.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h
$O/routing/bitcar/BITCARRouting.o: routing/bitcar/BITCARRouting.cc \
	routing/bitcar/BITCARControlPackets_m.h \
	routing/bitcar/BITCARRouteData.h \
	routing/bitcar/BITCARRouting.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NodeOperations.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPSocket.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPSocket.h \
	$(INETMANET_2_0_PROJ)/src/transport/udp/UDPPacket.h \
	$(INETMANET_2_0_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/rbvtr/RBVTRControlPackets_m.o: routing/rbvtr/RBVTRControlPackets_m.cc \
	routing/rbvtr/RBVTRControlPackets_m.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/routing/rbvtr/RBVTRRouteData.o: routing/rbvtr/RBVTRRouteData.cc \
	routing/rbvtr/RBVTRRouteData.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h
$O/routing/rbvtr/RBVTRRouting.o: routing/rbvtr/RBVTRRouting.cc \
	routing/rbvtr/RBVTRControlPackets_m.h \
	routing/rbvtr/RBVTRRouteData.h \
	routing/rbvtr/RBVTRRouting.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NodeOperations.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPSocket.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPSocket.h \
	$(INETMANET_2_0_PROJ)/src/transport/udp/UDPPacket.h \
	$(INETMANET_2_0_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/applications/traci/aodvTraCI.o: vanetrouting/applications/traci/aodvTraCI.cc \
	vanetrouting/applications/traci/aodvTraCI.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/aodvTraCIMobility.h \
	vanetrouting/world/traci/aodvTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPSocket.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/applications/traci/aodvTraCITestApp.o: vanetrouting/applications/traci/aodvTraCITestApp.cc \
	vanetrouting/applications/traci/aodvTraCITestApp.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/aodvTraCIMobility.h \
	vanetrouting/world/traci/aodvTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/applications/traci/bitcarTraCIDemo.o: vanetrouting/applications/traci/bitcarTraCIDemo.cc \
	vanetrouting/applications/traci/bitcarTraCIDemo.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/bitcarTraCIMobility.h \
	vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPSocket.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/applications/traci/bitcarTraCITestApp.o: vanetrouting/applications/traci/bitcarTraCITestApp.cc \
	vanetrouting/applications/traci/bitcarTraCITestApp.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/bitcarTraCIMobility.h \
	vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/applications/traci/rbvtrTraCIDemo.o: vanetrouting/applications/traci/rbvtrTraCIDemo.cc \
	vanetrouting/applications/traci/rbvtrTraCIDemo.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/rbvtrTraCIMobility.h \
	vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/transport/contract/UDPSocket.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/applications/traci/rbvtrTraCITestApp.o: vanetrouting/applications/traci/rbvtrTraCITestApp.cc \
	vanetrouting/applications/traci/rbvtrTraCITestApp.h \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/rbvtrTraCIMobility.h \
	vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/base/ControlVanetRouting_m.o: vanetrouting/base/ControlVanetRouting_m.cc \
	vanetrouting/base/ControlVanetRouting_m.h \
	vanetrouting/base/VanetAddress.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h
$O/vanetrouting/base/VanetAddress.o: vanetrouting/base/VanetAddress.cc \
	vanetrouting/base/VanetAddress.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h
$O/vanetrouting/base/VanetModuleAccess.o: vanetrouting/base/VanetModuleAccess.cc \
	vanetrouting/base/VanetModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h
$O/vanetrouting/base/VanetNetfilterHook.o: vanetrouting/base/VanetNetfilterHook.cc \
	vanetrouting/base/ControlVanetRouting_m.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/base/compatibility_dsr.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/dsr/dsr-pkt_omnet.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/dsr/dsr-uu/dsr-opt.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/dsr/dsr-uu/dsr-pkt.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/dsr/dsr-uu/dsr.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/manetrouting/dsr/dsr-uu/timer.h
$O/vanetrouting/base/VanetRoutingBase.o: vanetrouting/base/VanetRoutingBase.cc \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
	vanetrouting/base/compatibility_vanet.h \
	vanetrouting/util/GlobalWirelessLinkInspector_Vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NodeOperations.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/PassiveQueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mgmt/Ieee80211MgmtAP.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mgmt/Ieee80211MgmtAPBase.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/mobility/common/MobilityAccess.h \
	$(INETMANET_2_0_PROJ)/src/mobility/contract/IMobility.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPSocket.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4ControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6ControlInfo.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6ControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4InterfaceData.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/transport/udp/UDPPacket.h \
	$(INETMANET_2_0_PROJ)/src/transport/udp/UDPPacket_m.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o: vanetrouting/base/Vanet_ControlInfoBreakLink_m.cc \
	vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h
$O/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o: vanetrouting/base/Vanet_LocatorNotificationInfo_m.cc \
	vanetrouting/base/Vanet_LocatorNotificationInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h
$O/vanetrouting/base/Vanet_MeshControlInfo_m.o: vanetrouting/base/Vanet_MeshControlInfo_m.cc \
	vanetrouting/base/Vanet_MeshControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h
$O/vanetrouting/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.o: vanetrouting/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.cc \
	vanetrouting/base/ControlVanetRouting_m.h \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/base/VanetNetfilterHook.h \
	vanetrouting/base/VanetRoutingBase.h \
	vanetrouting/base/compatibility_vanet.h \
	vanetrouting/linklayer/ieee80211/mgmt/Ieee80211MgmtAdhocWithVanetRouting.h \
	$(INETMANET_2_0_PROJ)/src/base/AbstractQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/INotifiable.h \
	$(INETMANET_2_0_PROJ)/src/base/IPassiveQueue.h \
	$(INETMANET_2_0_PROJ)/src/base/ModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/NotificationBoard.h \
	$(INETMANET_2_0_PROJ)/src/base/NotifierConsts.h \
	$(INETMANET_2_0_PROJ)/src/base/PassiveQueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ProtocolMap.h \
	$(INETMANET_2_0_PROJ)/src/base/QueueBase.h \
	$(INETMANET_2_0_PROJ)/src/base/ReassemblyBuffer.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mgmt/Ieee80211MgmtBase.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211/mgmt/Ieee80211MgmtFrames_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/ieee80211mesh/locator/ILocator.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/ARP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/arp/IARPCache.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/IInterfaceTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/INetfilter.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceEntry.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/common/InterfaceToken.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPProtocolId_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMP.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPAccess.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/ICMPMessage_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Datagram_m.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4FragBuf.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4Route.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IPv4RouteRule.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/IRoutingTable.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.o: vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.h \
	vanetrouting/mobility/common/MovingVANETMobilityBase.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/mobility/common/MovingVANETMobilityBase.o: vanetrouting/mobility/common/MovingVANETMobilityBase.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/MovingVANETMobilityBase.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/mobility/common/VANETMobilityAccess.o: vanetrouting/mobility/common/VANETMobilityAccess.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityAccess.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/mobility/common/VANETMobilityBase.o: vanetrouting/mobility/common/VANETMobilityBase.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/mobility/contract/IVANETMobility.o: vanetrouting/mobility/contract/IVANETMobility.cc \
	vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/mobility/single/LinearVANETMobility.o: vanetrouting/mobility/single/LinearVANETMobility.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/MovingVANETMobilityBase.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/LinearVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/mobility/single/aodvTraCIMobility.o: vanetrouting/mobility/single/aodvTraCIMobility.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/aodvTraCIMobility.h \
	vanetrouting/world/traci/aodvTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/mobility/single/bitcarTraCIMobility.o: vanetrouting/mobility/single/bitcarTraCIMobility.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/bitcarTraCIMobility.h \
	vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/mobility/single/rbvtrTraCIMobility.o: vanetrouting/mobility/single/rbvtrTraCIMobility.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/rbvtrTraCIMobility.h \
	vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/util/GlobalWirelessLinkInspector_Vanet.o: vanetrouting/util/GlobalWirelessLinkInspector_Vanet.cc \
	vanetrouting/base/VanetAddress.h \
	vanetrouting/util/GlobalWirelessLinkInspector_Vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h
$O/vanetrouting/world/traci/aodvTraCIScenarioManager.o: vanetrouting/world/traci/aodvTraCIScenarioManager.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/aodvTraCIMobility.h \
	vanetrouting/world/traci/aodvTraCIConstants.h \
	vanetrouting/world/traci/aodvTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.o: vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/world/traci/aodvTraCIConstants.h \
	vanetrouting/world/traci/aodvTraCIScenarioManager.h \
	vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/world/traci/bitcarTraCIScenarioManager.o: vanetrouting/world/traci/bitcarTraCIScenarioManager.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/bitcarTraCIMobility.h \
	vanetrouting/world/traci/bitcarTraCIConstants.h \
	vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.o: vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/world/traci/bitcarTraCIConstants.h \
	vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
	vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/world/traci/rbvtrTraCIScenarioManager.o: vanetrouting/world/traci/rbvtrTraCIScenarioManager.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/mobility/common/VANETMobilityBase.h \
	vanetrouting/mobility/contract/IVANETMobility.h \
	vanetrouting/mobility/single/rbvtrTraCIMobility.h \
	vanetrouting/world/traci/rbvtrTraCIConstants.h \
	vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.o: vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.cc \
	vanetrouting/base/VanetModuleAccess.h \
	vanetrouting/world/traci/rbvtrTraCIConstants.h \
	vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
	vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.h \
	vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/vanetrouting/world/traci/vanetTraCIColor.o: vanetrouting/world/traci/vanetTraCIColor.cc \
	vanetrouting/world/traci/vanetTraCIColor.h

