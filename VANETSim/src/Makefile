#
# OMNeT++/OMNEST Makefile for VANETSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -Xcustom/routing/gpsr -Xcustom/routing/rbvtp -Xveins -IF:/GitHub/inetmanet-2.0/src/util/headerserializers/ipv4 -IF:/GitHub/inetmanet-2.0/src/wpan/linklayer/ieee802154/contract -IF:/GitHub/inetmanet-2.0/src -IF:/GitHub/inetmanet-2.0/src/util/headerserializers -IF:/GitHub/inetmanet-2.0/src/networklayer/common -IF:/GitHub/inetmanet-2.0/src/battery/models -IF:/GitHub/inetmanet-2.0/src/networklayer/manetrouting/dsr -IF:/GitHub/inetmanet-2.0/src/linklayer/radio/propagation -IF:/GitHub/inetmanet-2.0/src/transport/tcp_common -IF:/GitHub/inetmanet-2.0/src/networklayer/contract -IF:/GitHub/inetmanet-2.0/src/wpan/networklayer/contract -IF:/GitHub/inetmanet-2.0/src/util/headerserializers/ipv6 -IF:/GitHub/inetmanet-2.0/src/linklayer/common -IF:/GitHub/inetmanet-2.0/src/world/obstacles -IF:/GitHub/inetmanet-2.0/src/linklayer/ieee80211/radio -IF:/GitHub/inetmanet-2.0/src/networklayer/manetrouting/base -IF:/GitHub/inetmanet-2.0/src/networklayer/autorouting/ipv4 -IF:/GitHub/inetmanet-2.0/src/util/headerserializers/tcp -IF:/GitHub/inetmanet-2.0/src/networklayer/arp -IF:/GitHub/inetmanet-2.0/src/transport/sctp -IF:/GitHub/inetmanet-2.0/src/util/headerserializers/sctp -IF:/GitHub/inetmanet-2.0/src/base -IF:/GitHub/inetmanet-2.0/src/networklayer/ipv6tunneling -IF:/GitHub/inetmanet-2.0/src/wpan/linklayer/bmac -IF:/GitHub/inetmanet-2.0/src/wpan/linklayer/ieee802154/mac -IF:/GitHub/inetmanet-2.0/src/linklayer/contract -IF:/GitHub/inetmanet-2.0/src/world/radio -IF:/GitHub/inetmanet-2.0/src/linklayer/ieee80211/mac -IF:/GitHub/inetmanet-2.0/src/transport/udp -IF:/GitHub/inetmanet-2.0/src/networklayer/ipv6 -IF:/GitHub/inetmanet-2.0/src/applications/pingapp -IF:/GitHub/inetmanet-2.0/src/linklayer/radio -IF:/GitHub/inetmanet-2.0/src/transport/contract -IF:/GitHub/inetmanet-2.0/src/networklayer/icmpv6 -IF:/GitHub/inetmanet-2.0/src/mobility/contract -IF:/GitHub/inetmanet-2.0/src/networklayer/routing/aodv -IF:/GitHub/inetmanet-2.0/src/world/powercontrol -IF:/GitHub/inetmanet-2.0/src/linklayer/ethernet -IF:/GitHub/inetmanet-2.0/src/util/headerserializers/udp -IF:/GitHub/inetmanet-2.0/src/linklayer/ieee80211mesh/locator -IF:/GitHub/inetmanet-2.0/src/linklayer/ieee80211/mgmt -IF:/GitHub/inetmanet-2.0/src/networklayer/ipv4 -IF:/GitHub/inetmanet-2.0/src/wpan/phyLayer/ieee802154 -IF:/GitHub/inetmanet-2.0/src/mobility/common -IF:/GitHub/inetmanet-2.0/src/linklayer/ieee80211/radio/errormodel -IF:/GitHub/inetmanet-2.0/src/status -IF:/GitHub/inetmanet-2.0/src/util -IF:/GitHub/inetmanet-2.0/src/networklayer/xmipv6 -LF:/GitHub/inetmanet-2.0/out/$$\(CONFIGNAME\)/src -linetmanet -DINET_IMPORT -KINETMANET_2_0_PROJ=F:/GitHub/inetmanet-2.0
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
    -I$(INETMANET_2_0_PROJ)/src/transport/tcp_common \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/contract \
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
    -I$(INETMANET_2_0_PROJ)/src/status \
    -I$(INETMANET_2_0_PROJ)/src/util \
    -I$(INETMANET_2_0_PROJ)/src/networklayer/xmipv6 \
    -I. \
    -Icustom \
    -Icustom/nodes \
    -Icustom/routing \
    -Icustom/routing/aodvvanet \
    -Icustom/routing/bitcar \
    -Icustom/routing/rbvtr \
    -Icustom/vanetrouting \
    -Icustom/vanetrouting/applications \
    -Icustom/vanetrouting/applications/traci \
    -Icustom/vanetrouting/base \
    -Icustom/vanetrouting/mobility \
    -Icustom/vanetrouting/mobility/common \
    -Icustom/vanetrouting/mobility/contract \
    -Icustom/vanetrouting/mobility/group \
    -Icustom/vanetrouting/mobility/single \
    -Icustom/vanetrouting/mobility/static \
    -Icustom/vanetrouting/networklayer \
    -Icustom/vanetrouting/util \
    -Icustom/vanetrouting/world \
    -Icustom/vanetrouting/world/traci \
    -Iinetmanet

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
    $O/custom/routing/aodvvanet/AODVVANETRouteData.o \
    $O/custom/routing/aodvvanet/AODVVANETRouting.o \
    $O/custom/routing/bitcar/BITCARRouteData.o \
    $O/custom/routing/bitcar/BITCARRouting.o \
    $O/custom/routing/rbvtr/RBVTRRouteData.o \
    $O/custom/routing/rbvtr/RBVTRRouting.o \
    $O/custom/vanetrouting/applications/traci/aodvTraCIDemo.o \
    $O/custom/vanetrouting/applications/traci/aodvTraCITestApp.o \
    $O/custom/vanetrouting/applications/traci/bitcarTraCIDemo.o \
    $O/custom/vanetrouting/applications/traci/bitcarTraCITestApp.o \
    $O/custom/vanetrouting/applications/traci/rbvtrTraCIDemo.o \
    $O/custom/vanetrouting/applications/traci/rbvtrTraCITestApp.o \
    $O/custom/vanetrouting/base/VanetAddress.o \
    $O/custom/vanetrouting/base/VanetModuleAccess.o \
    $O/custom/vanetrouting/base/VanetNetfilterHook.o \
    $O/custom/vanetrouting/base/VanetRoutingBase.o \
    $O/custom/vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.o \
    $O/custom/vanetrouting/mobility/common/MovingVANETMobilityBase.o \
    $O/custom/vanetrouting/mobility/common/VANETMobilityAccess.o \
    $O/custom/vanetrouting/mobility/common/VANETMobilityBase.o \
    $O/custom/vanetrouting/mobility/contract/IVANETMobility.o \
    $O/custom/vanetrouting/mobility/single/aodvTraCIMobility.o \
    $O/custom/vanetrouting/mobility/single/bitcarTraCIMobility.o \
    $O/custom/vanetrouting/mobility/single/rbvtrTraCIMobility.o \
    $O/custom/vanetrouting/util/GlobalWirelessLinkInspector_Vanet.o \
    $O/custom/vanetrouting/world/traci/aodvTraCIScenarioManager.o \
    $O/custom/vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.o \
    $O/custom/vanetrouting/world/traci/bitcarTraCIScenarioManager.o \
    $O/custom/vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.o \
    $O/custom/vanetrouting/world/traci/rbvtrTraCIScenarioManager.o \
    $O/custom/vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.o \
    $O/custom/vanetrouting/world/traci/vanetTraCIColor.o \
    $O/custom/routing/aodvvanet/AODVVANETControlPackets_m.o \
    $O/custom/routing/bitcar/BITCARControlPackets_m.o \
    $O/custom/routing/rbvtr/RBVTRControlPackets_m.o \
    $O/custom/vanetrouting/base/ControlVanetRouting_m.o \
    $O/custom/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o \
    $O/custom/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o \
    $O/custom/vanetrouting/base/Vanet_MeshControlInfo_m.o

# Message files
MSGFILES = \
    custom/routing/aodvvanet/AODVVANETControlPackets.msg \
    custom/routing/bitcar/BITCARControlPackets.msg \
    custom/routing/rbvtr/RBVTRControlPackets.msg \
    custom/vanetrouting/base/ControlVanetRouting.msg \
    custom/vanetrouting/base/Vanet_ControlInfoBreakLink.msg \
    custom/vanetrouting/base/Vanet_LocatorNotificationInfo.msg \
    custom/vanetrouting/base/Vanet_MeshControlInfo.msg

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
	$(Q)$(CXX) $(LDFLAGS) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

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
	$(Q)-rm -f custom/*_m.cc custom/*_m.h
	$(Q)-rm -f custom/nodes/*_m.cc custom/nodes/*_m.h
	$(Q)-rm -f custom/routing/*_m.cc custom/routing/*_m.h
	$(Q)-rm -f custom/routing/aodvvanet/*_m.cc custom/routing/aodvvanet/*_m.h
	$(Q)-rm -f custom/routing/bitcar/*_m.cc custom/routing/bitcar/*_m.h
	$(Q)-rm -f custom/routing/rbvtr/*_m.cc custom/routing/rbvtr/*_m.h
	$(Q)-rm -f custom/vanetrouting/*_m.cc custom/vanetrouting/*_m.h
	$(Q)-rm -f custom/vanetrouting/applications/*_m.cc custom/vanetrouting/applications/*_m.h
	$(Q)-rm -f custom/vanetrouting/applications/traci/*_m.cc custom/vanetrouting/applications/traci/*_m.h
	$(Q)-rm -f custom/vanetrouting/base/*_m.cc custom/vanetrouting/base/*_m.h
	$(Q)-rm -f custom/vanetrouting/mobility/*_m.cc custom/vanetrouting/mobility/*_m.h
	$(Q)-rm -f custom/vanetrouting/mobility/common/*_m.cc custom/vanetrouting/mobility/common/*_m.h
	$(Q)-rm -f custom/vanetrouting/mobility/contract/*_m.cc custom/vanetrouting/mobility/contract/*_m.h
	$(Q)-rm -f custom/vanetrouting/mobility/group/*_m.cc custom/vanetrouting/mobility/group/*_m.h
	$(Q)-rm -f custom/vanetrouting/mobility/single/*_m.cc custom/vanetrouting/mobility/single/*_m.h
	$(Q)-rm -f custom/vanetrouting/mobility/static/*_m.cc custom/vanetrouting/mobility/static/*_m.h
	$(Q)-rm -f custom/vanetrouting/networklayer/*_m.cc custom/vanetrouting/networklayer/*_m.h
	$(Q)-rm -f custom/vanetrouting/util/*_m.cc custom/vanetrouting/util/*_m.h
	$(Q)-rm -f custom/vanetrouting/world/*_m.cc custom/vanetrouting/world/*_m.h
	$(Q)-rm -f custom/vanetrouting/world/traci/*_m.cc custom/vanetrouting/world/traci/*_m.h
	$(Q)-rm -f inetmanet/*_m.cc inetmanet/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc custom/*.cc custom/nodes/*.cc custom/routing/*.cc custom/routing/aodvvanet/*.cc custom/routing/bitcar/*.cc custom/routing/rbvtr/*.cc custom/vanetrouting/*.cc custom/vanetrouting/applications/*.cc custom/vanetrouting/applications/traci/*.cc custom/vanetrouting/base/*.cc custom/vanetrouting/mobility/*.cc custom/vanetrouting/mobility/common/*.cc custom/vanetrouting/mobility/contract/*.cc custom/vanetrouting/mobility/group/*.cc custom/vanetrouting/mobility/single/*.cc custom/vanetrouting/mobility/static/*.cc custom/vanetrouting/networklayer/*.cc custom/vanetrouting/util/*.cc custom/vanetrouting/world/*.cc custom/vanetrouting/world/traci/*.cc inetmanet/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/custom/routing/aodvvanet/AODVVANETControlPackets_m.o: custom/routing/aodvvanet/AODVVANETControlPackets_m.cc \
	custom/routing/aodvvanet/AODVVANETControlPackets_m.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/routing/aodvvanet/AODVVANETRouteData.o: custom/routing/aodvvanet/AODVVANETRouteData.cc \
	custom/routing/aodvvanet/AODVVANETRouteData.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h
$O/custom/routing/aodvvanet/AODVVANETRouting.o: custom/routing/aodvvanet/AODVVANETRouting.cc \
	custom/routing/aodvvanet/AODVVANETControlPackets_m.h \
	custom/routing/aodvvanet/AODVVANETRouteData.h \
	custom/routing/aodvvanet/AODVVANETRouting.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
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
$O/custom/routing/bitcar/BITCARControlPackets_m.o: custom/routing/bitcar/BITCARControlPackets_m.cc \
	custom/routing/bitcar/BITCARControlPackets_m.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/routing/bitcar/BITCARRouteData.o: custom/routing/bitcar/BITCARRouteData.cc \
	custom/routing/bitcar/BITCARRouteData.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h
$O/custom/routing/bitcar/BITCARRouting.o: custom/routing/bitcar/BITCARRouting.cc \
	custom/routing/bitcar/BITCARControlPackets_m.h \
	custom/routing/bitcar/BITCARRouteData.h \
	custom/routing/bitcar/BITCARRouting.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
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
$O/custom/routing/rbvtr/RBVTRControlPackets_m.o: custom/routing/rbvtr/RBVTRControlPackets_m.cc \
	custom/routing/rbvtr/RBVTRControlPackets_m.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/routing/rbvtr/RBVTRRouteData.o: custom/routing/rbvtr/RBVTRRouteData.cc \
	custom/routing/rbvtr/RBVTRRouteData.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h
$O/custom/routing/rbvtr/RBVTRRouting.o: custom/routing/rbvtr/RBVTRRouting.cc \
	custom/routing/rbvtr/RBVTRControlPackets_m.h \
	custom/routing/rbvtr/RBVTRRouteData.h \
	custom/routing/rbvtr/RBVTRRouting.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
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
$O/custom/vanetrouting/applications/traci/aodvTraCIDemo.o: custom/vanetrouting/applications/traci/aodvTraCIDemo.cc \
	custom/vanetrouting/applications/traci/aodvTraCIDemo.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/aodvTraCIMobility.h \
	custom/vanetrouting/world/traci/aodvTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
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
$O/custom/vanetrouting/applications/traci/aodvTraCITestApp.o: custom/vanetrouting/applications/traci/aodvTraCITestApp.cc \
	custom/vanetrouting/applications/traci/aodvTraCITestApp.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/aodvTraCIMobility.h \
	custom/vanetrouting/world/traci/aodvTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/applications/traci/bitcarTraCIDemo.o: custom/vanetrouting/applications/traci/bitcarTraCIDemo.cc \
	custom/vanetrouting/applications/traci/bitcarTraCIDemo.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/bitcarTraCIMobility.h \
	custom/vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
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
$O/custom/vanetrouting/applications/traci/bitcarTraCITestApp.o: custom/vanetrouting/applications/traci/bitcarTraCITestApp.cc \
	custom/vanetrouting/applications/traci/bitcarTraCITestApp.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/bitcarTraCIMobility.h \
	custom/vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/applications/traci/rbvtrTraCIDemo.o: custom/vanetrouting/applications/traci/rbvtrTraCIDemo.cc \
	custom/vanetrouting/applications/traci/rbvtrTraCIDemo.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/rbvtrTraCIMobility.h \
	custom/vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
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
$O/custom/vanetrouting/applications/traci/rbvtrTraCITestApp.o: custom/vanetrouting/applications/traci/rbvtrTraCITestApp.cc \
	custom/vanetrouting/applications/traci/rbvtrTraCITestApp.h \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/rbvtrTraCIMobility.h \
	custom/vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/ILifecycle.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/base/LifecycleOperation.h \
	$(INETMANET_2_0_PROJ)/src/status/NodeStatus.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/base/ControlVanetRouting_m.o: custom/vanetrouting/base/ControlVanetRouting_m.cc \
	custom/vanetrouting/base/ControlVanetRouting_m.h \
	custom/vanetrouting/base/VanetAddress.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h
$O/custom/vanetrouting/base/VanetAddress.o: custom/vanetrouting/base/VanetAddress.cc \
	custom/vanetrouting/base/VanetAddress.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h
$O/custom/vanetrouting/base/VanetModuleAccess.o: custom/vanetrouting/base/VanetModuleAccess.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h
$O/custom/vanetrouting/base/VanetNetfilterHook.o: custom/vanetrouting/base/VanetNetfilterHook.cc \
	custom/vanetrouting/base/ControlVanetRouting_m.h \
	custom/vanetrouting/base/VanetAddress.h \
	custom/vanetrouting/base/VanetNetfilterHook.h \
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
$O/custom/vanetrouting/base/VanetRoutingBase.o: custom/vanetrouting/base/VanetRoutingBase.cc \
	custom/vanetrouting/base/VanetAddress.h \
	custom/vanetrouting/base/VanetNetfilterHook.h \
	custom/vanetrouting/base/VanetRoutingBase.h \
	custom/vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
	custom/vanetrouting/base/compatibility_vanet.h \
	custom/vanetrouting/util/GlobalWirelessLinkInspector_Vanet.h \
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
$O/custom/vanetrouting/base/Vanet_ControlInfoBreakLink_m.o: custom/vanetrouting/base/Vanet_ControlInfoBreakLink_m.cc \
	custom/vanetrouting/base/Vanet_ControlInfoBreakLink_m.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h
$O/custom/vanetrouting/base/Vanet_LocatorNotificationInfo_m.o: custom/vanetrouting/base/Vanet_LocatorNotificationInfo_m.cc \
	custom/vanetrouting/base/Vanet_LocatorNotificationInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h
$O/custom/vanetrouting/base/Vanet_MeshControlInfo_m.o: custom/vanetrouting/base/Vanet_MeshControlInfo_m.cc \
	custom/vanetrouting/base/Vanet_MeshControlInfo_m.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h
$O/custom/vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.o: custom/vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/LineSegmentsVANETMobilityBase.h \
	custom/vanetrouting/mobility/common/MovingVANETMobilityBase.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/mobility/common/MovingVANETMobilityBase.o: custom/vanetrouting/mobility/common/MovingVANETMobilityBase.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/MovingVANETMobilityBase.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/mobility/common/VANETMobilityAccess.o: custom/vanetrouting/mobility/common/VANETMobilityAccess.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityAccess.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/mobility/common/VANETMobilityBase.o: custom/vanetrouting/mobility/common/VANETMobilityBase.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/mobility/contract/IVANETMobility.o: custom/vanetrouting/mobility/contract/IVANETMobility.cc \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/mobility/single/aodvTraCIMobility.o: custom/vanetrouting/mobility/single/aodvTraCIMobility.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/aodvTraCIMobility.h \
	custom/vanetrouting/world/traci/aodvTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/mobility/single/bitcarTraCIMobility.o: custom/vanetrouting/mobility/single/bitcarTraCIMobility.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/bitcarTraCIMobility.h \
	custom/vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/mobility/single/rbvtrTraCIMobility.o: custom/vanetrouting/mobility/single/rbvtrTraCIMobility.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/rbvtrTraCIMobility.h \
	custom/vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/util/GlobalWirelessLinkInspector_Vanet.o: custom/vanetrouting/util/GlobalWirelessLinkInspector_Vanet.cc \
	custom/vanetrouting/base/VanetAddress.h \
	custom/vanetrouting/util/GlobalWirelessLinkInspector_Vanet.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv4Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPv6Address.h \
	$(INETMANET_2_0_PROJ)/src/networklayer/contract/IPvXAddress.h
$O/custom/vanetrouting/world/traci/aodvTraCIScenarioManager.o: custom/vanetrouting/world/traci/aodvTraCIScenarioManager.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/aodvTraCIMobility.h \
	custom/vanetrouting/world/traci/aodvTraCIConstants.h \
	custom/vanetrouting/world/traci/aodvTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.o: custom/vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/world/traci/aodvTraCIConstants.h \
	custom/vanetrouting/world/traci/aodvTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/aodvTraCIScenarioManagerLaunchd.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/world/traci/bitcarTraCIScenarioManager.o: custom/vanetrouting/world/traci/bitcarTraCIScenarioManager.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/bitcarTraCIMobility.h \
	custom/vanetrouting/world/traci/bitcarTraCIConstants.h \
	custom/vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.o: custom/vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/world/traci/bitcarTraCIConstants.h \
	custom/vanetrouting/world/traci/bitcarTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/bitcarTraCIScenarioManagerLaunchd.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/world/traci/rbvtrTraCIScenarioManager.o: custom/vanetrouting/world/traci/rbvtrTraCIScenarioManager.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/mobility/common/VANETMobilityBase.h \
	custom/vanetrouting/mobility/contract/IVANETMobility.h \
	custom/vanetrouting/mobility/single/rbvtrTraCIMobility.h \
	custom/vanetrouting/world/traci/rbvtrTraCIConstants.h \
	custom/vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.o: custom/vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.cc \
	custom/vanetrouting/base/VanetModuleAccess.h \
	custom/vanetrouting/world/traci/rbvtrTraCIConstants.h \
	custom/vanetrouting/world/traci/rbvtrTraCIScenarioManager.h \
	custom/vanetrouting/world/traci/rbvtrTraCIScenarioManagerLaunchd.h \
	custom/vanetrouting/world/traci/vanetTraCIColor.h \
	$(INETMANET_2_0_PROJ)/src/base/Compat.h \
	$(INETMANET_2_0_PROJ)/src/base/Coord.h \
	$(INETMANET_2_0_PROJ)/src/base/INETDefs.h \
	$(INETMANET_2_0_PROJ)/src/util/FWMath.h
$O/custom/vanetrouting/world/traci/vanetTraCIColor.o: custom/vanetrouting/world/traci/vanetTraCIColor.cc \
	custom/vanetrouting/world/traci/vanetTraCIColor.h

