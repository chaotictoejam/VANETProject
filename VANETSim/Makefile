#
# OMNeT++/OMNEST Makefile for VANETSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -Xsrc/routing/aodv-uu -Xsrc/routing/gpsr -IF:/GitHub/inet/src/linklayer/ieee80211/radio -IF:/GitHub/inet/src/networklayer/routing/aodv -IF:/GitHub/inet/src/networklayer/common -IF:/GitHub/veins/src -IF:/GitHub/veins/src/base/modules -IF:/GitHub/inet/src -IF:/GitHub/inet/src/networklayer/icmpv6 -IF:/GitHub/inet/src/world/obstacles -IF:/GitHub/inet/src/networklayer/xmipv6 -IF:/GitHub/inet/src/networklayer/contract -IF:/GitHub/veins/src/base/messages -IF:/GitHub/veins/src/base/utils -IF:/GitHub/inet/src/networklayer/autorouting/ipv4 -IF:/GitHub/inet/src/util -IF:/GitHub/inet/src/transport/contract -IF:/GitHub/inet/src/linklayer/common -IF:/GitHub/inet/src/status -IF:/GitHub/inet/src/linklayer/radio/propagation -IF:/GitHub/inet/src/linklayer/ieee80211/radio/errormodel -IF:/GitHub/veins/src/base/connectionManager -IF:/GitHub/inet/src/linklayer/radio -IF:/GitHub/inet/src/util/headerserializers/tcp -IF:/GitHub/veins/src/modules -IF:/GitHub/veins/src/modules/obstacle -IF:/GitHub/inet/src/networklayer/ipv4 -IF:/GitHub/inet/src/mobility/contract -IF:/GitHub/inet/src/util/headerserializers/ipv4 -IF:/GitHub/inet/src/base -IF:/GitHub/inet/src/util/headerserializers -IF:/GitHub/inet/src/world/radio -IF:/GitHub/veins/src/base/phyLayer -IF:/GitHub/inet/src/linklayer/ieee80211/mac -IF:/GitHub/inet/src/transport/sctp -IF:/GitHub/inet/src/networklayer/ipv6 -IF:/GitHub/inet/src/util/headerserializers/udp -IF:/GitHub/inet/src/networklayer/ipv6tunneling -IF:/GitHub/inet/src/applications/pingapp -IF:/GitHub/inet/src/battery/models -IF:/GitHub/inet/src/util/headerserializers/ipv6 -IF:/GitHub/inet/src/util/headerserializers/sctp -IF:/GitHub/inet/src/linklayer/contract -IF:/GitHub/inet/src/networklayer/arp -IF:/GitHub/inet/src/transport/tcp_common -IF:/GitHub/veins/src/inet -IF:/GitHub/inet/src/transport/udp -LF:/GitHub/inet/out/$$\(CONFIGNAME\)/src -LF:/GitHub/veins/out/$$\(CONFIGNAME\)/src -linet -lveins -DINET_IMPORT -KINET_PROJ=F:/GitHub/inet -KVEINS_PROJ=F:/GitHub/veins
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
    -I$(VEINS_PROJ)/src \
    -I$(VEINS_PROJ)/src/base/modules \
    -I$(INET_PROJ)/src \
    -I$(INET_PROJ)/src/networklayer/icmpv6 \
    -I$(INET_PROJ)/src/world/obstacles \
    -I$(INET_PROJ)/src/networklayer/xmipv6 \
    -I$(INET_PROJ)/src/networklayer/contract \
    -I$(VEINS_PROJ)/src/base/messages \
    -I$(VEINS_PROJ)/src/base/utils \
    -I$(INET_PROJ)/src/networklayer/autorouting/ipv4 \
    -I$(INET_PROJ)/src/util \
    -I$(INET_PROJ)/src/transport/contract \
    -I$(INET_PROJ)/src/linklayer/common \
    -I$(INET_PROJ)/src/status \
    -I$(INET_PROJ)/src/linklayer/radio/propagation \
    -I$(INET_PROJ)/src/linklayer/ieee80211/radio/errormodel \
    -I$(VEINS_PROJ)/src/base/connectionManager \
    -I$(INET_PROJ)/src/linklayer/radio \
    -I$(INET_PROJ)/src/util/headerserializers/tcp \
    -I$(VEINS_PROJ)/src/modules \
    -I$(VEINS_PROJ)/src/modules/obstacle \
    -I$(INET_PROJ)/src/networklayer/ipv4 \
    -I$(INET_PROJ)/src/mobility/contract \
    -I$(INET_PROJ)/src/util/headerserializers/ipv4 \
    -I$(INET_PROJ)/src/base \
    -I$(INET_PROJ)/src/util/headerserializers \
    -I$(INET_PROJ)/src/world/radio \
    -I$(VEINS_PROJ)/src/base/phyLayer \
    -I$(INET_PROJ)/src/linklayer/ieee80211/mac \
    -I$(INET_PROJ)/src/transport/sctp \
    -I$(INET_PROJ)/src/networklayer/ipv6 \
    -I$(INET_PROJ)/src/util/headerserializers/udp \
    -I$(INET_PROJ)/src/networklayer/ipv6tunneling \
    -I$(INET_PROJ)/src/applications/pingapp \
    -I$(INET_PROJ)/src/battery/models \
    -I$(INET_PROJ)/src/util/headerserializers/ipv6 \
    -I$(INET_PROJ)/src/util/headerserializers/sctp \
    -I$(INET_PROJ)/src/linklayer/contract \
    -I$(INET_PROJ)/src/networklayer/arp \
    -I$(INET_PROJ)/src/transport/tcp_common \
    -I$(VEINS_PROJ)/src/inet \
    -I$(INET_PROJ)/src/transport/udp \
    -I. \
    -Ietc \
    -Ietc/plugins \
    -Isimulations \
    -Isimulations/_results \
    -Isimulations/manet \
    -Isimulations/manet/aodv \
    -Isimulations/manet/aodv/results \
    -Isimulations/manet/dsr \
    -Isimulations/manet/dsr/results \
    -Isimulations/manet/gpsr \
    -Isimulations/manet/gpsr/results \
    -Isimulations/manet/olsr \
    -Isimulations/manet/olsr/results \
    -Isimulations/vanet \
    -Isimulations/vanet/aodvvanet \
    -Isimulations/vanet/car \
    -Isimulations/vanet/geopps \
    -Isimulations/vanet/gsr \
    -Isimulations/vanet/rbvtp \
    -Isimulations/vanet/rbvtr \
    -Isimulations/vanet/tora \
    -Isimulations/vanet/vdd \
    -Isimulations/vanet/vdtp \
    -Isrc \
    -Isrc/routing \
    -Isrc/routing/aodv \
    -Isrc/vanet \
    -Isrc/vanet/aodvvanet \
    -Isrc/vanet/bittorrent \
    -Isrc/vanet/car \
    -Isrc/vanet/geopps \
    -Isrc/vanet/gsr \
    -Isrc/vanet/rbvtp \
    -Isrc/vanet/rbvtr \
    -Isrc/vanet/vadd \
    -Isrc/vanet/vdtp \
    -Itest \
    -Itest/AODV \
    -Itest/AODV/results \
    -Itest/Traci \
    -Itest/Traci/results

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L$(INET_PROJ)/out/$(CONFIGNAME)/src -L$(VEINS_PROJ)/out/$(CONFIGNAME)/src  -linet -lveins
LIBS += -Wl,-rpath,`abspath $(INET_PROJ)/out/$(CONFIGNAME)/src` -Wl,-rpath,`abspath $(VEINS_PROJ)/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = out
PROJECTRELATIVE_PATH =
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = $O/src/routing/aodv/VS_AODVRouteData.o $O/src/routing/aodv/VS_AODVRouting.o $O/src/routing/aodv/VS_AODVControlPackets_m.o

# Message files
MSGFILES = \
    src/routing/aodv/VS_AODVControlPackets.msg

# Other makefile variables (-K)
INET_PROJ=F:/GitHub/inet
VEINS_PROJ=F:/GitHub/veins

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
	$(Q)-rm -f etc/*_m.cc etc/*_m.h
	$(Q)-rm -f etc/plugins/*_m.cc etc/plugins/*_m.h
	$(Q)-rm -f simulations/*_m.cc simulations/*_m.h
	$(Q)-rm -f simulations/_results/*_m.cc simulations/_results/*_m.h
	$(Q)-rm -f simulations/manet/*_m.cc simulations/manet/*_m.h
	$(Q)-rm -f simulations/manet/aodv/*_m.cc simulations/manet/aodv/*_m.h
	$(Q)-rm -f simulations/manet/aodv/results/*_m.cc simulations/manet/aodv/results/*_m.h
	$(Q)-rm -f simulations/manet/dsr/*_m.cc simulations/manet/dsr/*_m.h
	$(Q)-rm -f simulations/manet/dsr/results/*_m.cc simulations/manet/dsr/results/*_m.h
	$(Q)-rm -f simulations/manet/gpsr/*_m.cc simulations/manet/gpsr/*_m.h
	$(Q)-rm -f simulations/manet/gpsr/results/*_m.cc simulations/manet/gpsr/results/*_m.h
	$(Q)-rm -f simulations/manet/olsr/*_m.cc simulations/manet/olsr/*_m.h
	$(Q)-rm -f simulations/manet/olsr/results/*_m.cc simulations/manet/olsr/results/*_m.h
	$(Q)-rm -f simulations/vanet/*_m.cc simulations/vanet/*_m.h
	$(Q)-rm -f simulations/vanet/aodvvanet/*_m.cc simulations/vanet/aodvvanet/*_m.h
	$(Q)-rm -f simulations/vanet/car/*_m.cc simulations/vanet/car/*_m.h
	$(Q)-rm -f simulations/vanet/geopps/*_m.cc simulations/vanet/geopps/*_m.h
	$(Q)-rm -f simulations/vanet/gsr/*_m.cc simulations/vanet/gsr/*_m.h
	$(Q)-rm -f simulations/vanet/rbvtp/*_m.cc simulations/vanet/rbvtp/*_m.h
	$(Q)-rm -f simulations/vanet/rbvtr/*_m.cc simulations/vanet/rbvtr/*_m.h
	$(Q)-rm -f simulations/vanet/tora/*_m.cc simulations/vanet/tora/*_m.h
	$(Q)-rm -f simulations/vanet/vdd/*_m.cc simulations/vanet/vdd/*_m.h
	$(Q)-rm -f simulations/vanet/vdtp/*_m.cc simulations/vanet/vdtp/*_m.h
	$(Q)-rm -f src/*_m.cc src/*_m.h
	$(Q)-rm -f src/routing/*_m.cc src/routing/*_m.h
	$(Q)-rm -f src/routing/aodv/*_m.cc src/routing/aodv/*_m.h
	$(Q)-rm -f src/vanet/*_m.cc src/vanet/*_m.h
	$(Q)-rm -f src/vanet/aodvvanet/*_m.cc src/vanet/aodvvanet/*_m.h
	$(Q)-rm -f src/vanet/bittorrent/*_m.cc src/vanet/bittorrent/*_m.h
	$(Q)-rm -f src/vanet/car/*_m.cc src/vanet/car/*_m.h
	$(Q)-rm -f src/vanet/geopps/*_m.cc src/vanet/geopps/*_m.h
	$(Q)-rm -f src/vanet/gsr/*_m.cc src/vanet/gsr/*_m.h
	$(Q)-rm -f src/vanet/rbvtp/*_m.cc src/vanet/rbvtp/*_m.h
	$(Q)-rm -f src/vanet/rbvtr/*_m.cc src/vanet/rbvtr/*_m.h
	$(Q)-rm -f src/vanet/vadd/*_m.cc src/vanet/vadd/*_m.h
	$(Q)-rm -f src/vanet/vdtp/*_m.cc src/vanet/vdtp/*_m.h
	$(Q)-rm -f test/*_m.cc test/*_m.h
	$(Q)-rm -f test/AODV/*_m.cc test/AODV/*_m.h
	$(Q)-rm -f test/AODV/results/*_m.cc test/AODV/results/*_m.h
	$(Q)-rm -f test/Traci/*_m.cc test/Traci/*_m.h
	$(Q)-rm -f test/Traci/results/*_m.cc test/Traci/results/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc etc/*.cc etc/plugins/*.cc simulations/*.cc simulations/_results/*.cc simulations/manet/*.cc simulations/manet/aodv/*.cc simulations/manet/aodv/results/*.cc simulations/manet/dsr/*.cc simulations/manet/dsr/results/*.cc simulations/manet/gpsr/*.cc simulations/manet/gpsr/results/*.cc simulations/manet/olsr/*.cc simulations/manet/olsr/results/*.cc simulations/vanet/*.cc simulations/vanet/aodvvanet/*.cc simulations/vanet/car/*.cc simulations/vanet/geopps/*.cc simulations/vanet/gsr/*.cc simulations/vanet/rbvtp/*.cc simulations/vanet/rbvtr/*.cc simulations/vanet/tora/*.cc simulations/vanet/vdd/*.cc simulations/vanet/vdtp/*.cc src/*.cc src/routing/*.cc src/routing/aodv/*.cc src/vanet/*.cc src/vanet/aodvvanet/*.cc src/vanet/bittorrent/*.cc src/vanet/car/*.cc src/vanet/geopps/*.cc src/vanet/gsr/*.cc src/vanet/rbvtp/*.cc src/vanet/rbvtr/*.cc src/vanet/vadd/*.cc src/vanet/vdtp/*.cc test/*.cc test/AODV/*.cc test/AODV/results/*.cc test/Traci/*.cc test/Traci/results/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/src/routing/aodv/VS_AODVControlPackets_m.o: src/routing/aodv/VS_AODVControlPackets_m.cc \
	src/routing/aodv/VS_AODVControlPackets_m.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h
$O/src/routing/aodv/VS_AODVRouteData.o: src/routing/aodv/VS_AODVRouteData.cc \
	src/routing/aodv/VS_AODVRouteData.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/networklayer/contract/IPv4Address.h
$O/src/routing/aodv/VS_AODVRouting.o: src/routing/aodv/VS_AODVRouting.cc \
	src/routing/aodv/VS_AODVControlPackets_m.h \
	src/routing/aodv/VS_AODVRouteData.h \
	src/routing/aodv/VS_AODVRouting.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/ILifecycle.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/base/INotifiable.h \
	$(INET_PROJ)/src/base/LifecycleOperation.h \
	$(INET_PROJ)/src/base/ModuleAccess.h \
	$(INET_PROJ)/src/base/NodeOperations.h \
	$(INET_PROJ)/src/base/NotificationBoard.h \
	$(INET_PROJ)/src/base/NotifierConsts.h \
	$(INET_PROJ)/src/linklayer/contract/Ieee802Ctrl_m.h \
	$(INET_PROJ)/src/linklayer/contract/MACAddress.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Consts.h \
	$(INET_PROJ)/src/linklayer/ieee80211/mac/Ieee80211Frame_m.h \
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
	$(INET_PROJ)/src/networklayer/ipv4/RoutingTableAccess.h \
	$(INET_PROJ)/src/status/NodeStatus.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo.h \
	$(INET_PROJ)/src/transport/contract/UDPControlInfo_m.h \
	$(INET_PROJ)/src/transport/contract/UDPSocket.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket.h \
	$(INET_PROJ)/src/transport/udp/UDPPacket_m.h

