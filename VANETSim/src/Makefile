#
# OMNeT++/OMNEST Makefile for VANETSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -IF:/GitHub/inet/src/linklayer/ieee80211/radio -IF:/GitHub/inet/src/networklayer/routing/aodv -IF:/GitHub/inet/src/networklayer/common -IF:/GitHub/inet/src -IF:/GitHub/inet/src/networklayer/icmpv6 -IF:/GitHub/inet/src/world/obstacles -IF:/GitHub/inet/src/networklayer/xmipv6 -IF:/GitHub/inet/src/networklayer/contract -IF:/GitHub/inet/src/networklayer/autorouting/ipv4 -IF:/GitHub/inet/src/util -IF:/GitHub/inet/src/linklayer/common -IF:/GitHub/inet/src/transport/contract -IF:/GitHub/inet/src/status -IF:/GitHub/inet/src/linklayer/radio/propagation -IF:/GitHub/inet/src/linklayer/ieee80211/radio/errormodel -IF:/GitHub/inet/src/linklayer/radio -IF:/GitHub/inet/src/util/headerserializers/tcp -IF:/GitHub/inet/src/networklayer/ipv4 -IF:/GitHub/inet/src/mobility/contract -IF:/GitHub/inet/src/util/headerserializers/ipv4 -IF:/GitHub/inet/src/base -IF:/GitHub/inet/src/util/headerserializers -IF:/GitHub/inet/src/world/radio -IF:/GitHub/inet/src/linklayer/ieee80211/mac -IF:/GitHub/inet/src/transport/sctp -IF:/GitHub/inet/src/networklayer/ipv6 -IF:/GitHub/inet/src/util/headerserializers/udp -IF:/GitHub/inet/src/networklayer/ipv6tunneling -IF:/GitHub/inet/src/applications/pingapp -IF:/GitHub/inet/src/battery/models -IF:/GitHub/inet/src/util/headerserializers/ipv6 -IF:/GitHub/inet/src/util/headerserializers/sctp -IF:/GitHub/inet/src/linklayer/contract -IF:/GitHub/inet/src/networklayer/arp -IF:/GitHub/inet/src/transport/tcp_common -IF:/GitHub/inet/src/transport/udp -LF:/GitHub/inet/out/$$\(CONFIGNAME\)/src -linet -DINET_IMPORT -KINET_PROJ=F:/GitHub/inet
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
    -I$(INET_PROJ)/src/transport/udp \
    -I. \
    -Icustom \
    -Icustom/aodvvanet \
    -Icustom/bitcar \
    -Icustom/rbvtp \
    -Icustom/rbvtr \
    -Iveins \
    -Iveins/base \
    -Iveins/base/connectionManager \
    -Iveins/base/messages \
    -Iveins/base/modules \
    -Iveins/base/phyLayer \
    -Iveins/base/utils \
    -Iveins/modules \
    -Iveins/modules/analogueModel \
    -Iveins/modules/application \
    -Iveins/modules/application/ieee80211p \
    -Iveins/modules/application/traci \
    -Iveins/modules/mac \
    -Iveins/modules/mac/ieee80211p \
    -Iveins/modules/messages \
    -Iveins/modules/mobility \
    -Iveins/modules/mobility/traci \
    -Iveins/modules/nic \
    -Iveins/modules/obstacle \
    -Iveins/modules/phy \
    -Iveins/modules/utility \
    -Iveins/modules/world \
    -Iveins/modules/world/annotations \
    -Iveins/nodes

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L$(INET_PROJ)/out/$(CONFIGNAME)/src  -linet
LIBS += -Wl,-rpath,`abspath $(INET_PROJ)/out/$(CONFIGNAME)/src`

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/veins/base/connectionManager/BaseConnectionManager.o \
    $O/veins/base/connectionManager/ChannelAccess.o \
    $O/veins/base/connectionManager/ConnectionManager.o \
    $O/veins/base/connectionManager/NicEntryDebug.o \
    $O/veins/base/connectionManager/NicEntryDirect.o \
    $O/veins/base/modules/BaseApplLayer.o \
    $O/veins/base/modules/BaseBattery.o \
    $O/veins/base/modules/BaseLayer.o \
    $O/veins/base/modules/BaseMacLayer.o \
    $O/veins/base/modules/BaseMobility.o \
    $O/veins/base/modules/BaseModule.o \
    $O/veins/base/modules/BaseWorldUtility.o \
    $O/veins/base/modules/BatteryAccess.o \
    $O/veins/base/phyLayer/BaseDecider.o \
    $O/veins/base/phyLayer/BasePhyLayer.o \
    $O/veins/base/phyLayer/ChannelInfo.o \
    $O/veins/base/phyLayer/ChannelState.o \
    $O/veins/base/phyLayer/Decider.o \
    $O/veins/base/phyLayer/MappingBase.o \
    $O/veins/base/phyLayer/MappingUtils.o \
    $O/veins/base/phyLayer/PhyUtils.o \
    $O/veins/base/phyLayer/Signal.o \
    $O/veins/base/utils/asserts.o \
    $O/veins/base/utils/Coord.o \
    $O/veins/base/utils/NetwToMacControlInfo.o \
    $O/veins/base/utils/SimpleAddress.o \
    $O/veins/base/utils/winsupport.o \
    $O/veins/modules/analogueModel/BreakpointPathlossModel.o \
    $O/veins/modules/analogueModel/JakesFading.o \
    $O/veins/modules/analogueModel/LogNormalShadowing.o \
    $O/veins/modules/analogueModel/PERModel.o \
    $O/veins/modules/analogueModel/SimpleObstacleShadowing.o \
    $O/veins/modules/analogueModel/SimplePathlossModel.o \
    $O/veins/modules/analogueModel/TwoRayInterferenceModel.o \
    $O/veins/modules/application/ieee80211p/BaseWaveApplLayer.o \
    $O/veins/modules/application/traci/TraCIDemo11p.o \
    $O/veins/modules/application/traci/TraCIDemoRSU11p.o \
    $O/veins/modules/application/traci/TraCITestApp.o \
    $O/veins/modules/mac/ieee80211p/Mac1609_4.o \
    $O/veins/modules/mobility/traci/TraCIBuffer.o \
    $O/veins/modules/mobility/traci/TraCIColor.o \
    $O/veins/modules/mobility/traci/TraCICommandInterface.o \
    $O/veins/modules/mobility/traci/TraCIConnection.o \
    $O/veins/modules/mobility/traci/TraCIMobility.o \
    $O/veins/modules/mobility/traci/TraCIScenarioManager.o \
    $O/veins/modules/mobility/traci/TraCIScenarioManagerInet.o \
    $O/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.o \
    $O/veins/modules/mobility/traci/TraCIScreenRecorder.o \
    $O/veins/modules/obstacle/Obstacle.o \
    $O/veins/modules/obstacle/ObstacleControl.o \
    $O/veins/modules/phy/Decider80211p.o \
    $O/veins/modules/phy/NistErrorRate.o \
    $O/veins/modules/phy/PhyLayer80211p.o \
    $O/veins/modules/phy/SNRThresholdDecider.o \
    $O/veins/modules/world/annotations/AnnotationDummy.o \
    $O/veins/modules/world/annotations/AnnotationManager.o \
    $O/veins/base/messages/AirFrame_m.o \
    $O/veins/base/messages/BorderMsg_m.o \
    $O/veins/base/messages/ChannelSenseRequest_m.o \
    $O/veins/base/messages/MacPkt_m.o \
    $O/veins/modules/messages/AirFrame11p_m.o \
    $O/veins/modules/messages/Mac80211Pkt_m.o \
    $O/veins/modules/messages/PhyControlMessage_m.o \
    $O/veins/modules/messages/WaveShortMessage_m.o

# Message files
MSGFILES = \
    veins/base/messages/AirFrame.msg \
    veins/base/messages/BorderMsg.msg \
    veins/base/messages/ChannelSenseRequest.msg \
    veins/base/messages/MacPkt.msg \
    veins/modules/messages/AirFrame11p.msg \
    veins/modules/messages/Mac80211Pkt.msg \
    veins/modules/messages/PhyControlMessage.msg \
    veins/modules/messages/WaveShortMessage.msg

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
	$(Q)-rm -f custom/*_m.cc custom/*_m.h
	$(Q)-rm -f custom/aodvvanet/*_m.cc custom/aodvvanet/*_m.h
	$(Q)-rm -f custom/bitcar/*_m.cc custom/bitcar/*_m.h
	$(Q)-rm -f custom/rbvtp/*_m.cc custom/rbvtp/*_m.h
	$(Q)-rm -f custom/rbvtr/*_m.cc custom/rbvtr/*_m.h
	$(Q)-rm -f veins/*_m.cc veins/*_m.h
	$(Q)-rm -f veins/base/*_m.cc veins/base/*_m.h
	$(Q)-rm -f veins/base/connectionManager/*_m.cc veins/base/connectionManager/*_m.h
	$(Q)-rm -f veins/base/messages/*_m.cc veins/base/messages/*_m.h
	$(Q)-rm -f veins/base/modules/*_m.cc veins/base/modules/*_m.h
	$(Q)-rm -f veins/base/phyLayer/*_m.cc veins/base/phyLayer/*_m.h
	$(Q)-rm -f veins/base/utils/*_m.cc veins/base/utils/*_m.h
	$(Q)-rm -f veins/modules/*_m.cc veins/modules/*_m.h
	$(Q)-rm -f veins/modules/analogueModel/*_m.cc veins/modules/analogueModel/*_m.h
	$(Q)-rm -f veins/modules/application/*_m.cc veins/modules/application/*_m.h
	$(Q)-rm -f veins/modules/application/ieee80211p/*_m.cc veins/modules/application/ieee80211p/*_m.h
	$(Q)-rm -f veins/modules/application/traci/*_m.cc veins/modules/application/traci/*_m.h
	$(Q)-rm -f veins/modules/mac/*_m.cc veins/modules/mac/*_m.h
	$(Q)-rm -f veins/modules/mac/ieee80211p/*_m.cc veins/modules/mac/ieee80211p/*_m.h
	$(Q)-rm -f veins/modules/messages/*_m.cc veins/modules/messages/*_m.h
	$(Q)-rm -f veins/modules/mobility/*_m.cc veins/modules/mobility/*_m.h
	$(Q)-rm -f veins/modules/mobility/traci/*_m.cc veins/modules/mobility/traci/*_m.h
	$(Q)-rm -f veins/modules/nic/*_m.cc veins/modules/nic/*_m.h
	$(Q)-rm -f veins/modules/obstacle/*_m.cc veins/modules/obstacle/*_m.h
	$(Q)-rm -f veins/modules/phy/*_m.cc veins/modules/phy/*_m.h
	$(Q)-rm -f veins/modules/utility/*_m.cc veins/modules/utility/*_m.h
	$(Q)-rm -f veins/modules/world/*_m.cc veins/modules/world/*_m.h
	$(Q)-rm -f veins/modules/world/annotations/*_m.cc veins/modules/world/annotations/*_m.h
	$(Q)-rm -f veins/nodes/*_m.cc veins/nodes/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc custom/*.cc custom/aodvvanet/*.cc custom/bitcar/*.cc custom/rbvtp/*.cc custom/rbvtr/*.cc veins/*.cc veins/base/*.cc veins/base/connectionManager/*.cc veins/base/messages/*.cc veins/base/modules/*.cc veins/base/phyLayer/*.cc veins/base/utils/*.cc veins/modules/*.cc veins/modules/analogueModel/*.cc veins/modules/application/*.cc veins/modules/application/ieee80211p/*.cc veins/modules/application/traci/*.cc veins/modules/mac/*.cc veins/modules/mac/ieee80211p/*.cc veins/modules/messages/*.cc veins/modules/mobility/*.cc veins/modules/mobility/traci/*.cc veins/modules/nic/*.cc veins/modules/obstacle/*.cc veins/modules/phy/*.cc veins/modules/utility/*.cc veins/modules/world/*.cc veins/modules/world/annotations/*.cc veins/nodes/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/veins/base/connectionManager/BaseConnectionManager.o: veins/base/connectionManager/BaseConnectionManager.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/connectionManager/NicEntryDebug.h \
	veins/base/connectionManager/NicEntryDirect.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/connectionManager/ChannelAccess.o: veins/base/connectionManager/ChannelAccess.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/connectionManager/ConnectionManager.o: veins/base/connectionManager/ConnectionManager.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/connectionManager/NicEntryDebug.o: veins/base/connectionManager/NicEntryDebug.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/connectionManager/NicEntryDebug.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/connectionManager/NicEntryDirect.o: veins/base/connectionManager/NicEntryDirect.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/connectionManager/NicEntryDirect.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/messages/AirFrame_m.o: veins/base/messages/AirFrame_m.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/linklayer/radio/AirFrame_m.h \
	$(INET_PROJ)/src/linklayer/radio/ModulationType.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/messages/BorderMsg_m.o: veins/base/messages/BorderMsg_m.cc \
	veins/base/messages/BorderMsg_m.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/messages/ChannelSenseRequest_m.o: veins/base/messages/ChannelSenseRequest_m.cc \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/messages/MacPkt_m.o: veins/base/messages/MacPkt_m.cc \
	veins/base/messages/MacPkt_m.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseApplLayer.o: veins/base/modules/BaseApplLayer.cc \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseBattery.o: veins/base/modules/BaseBattery.cc \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseLayer.o: veins/base/modules/BaseLayer.cc \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseMacLayer.o: veins/base/modules/BaseMacLayer.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/messages/MacPkt_m.h \
	veins/base/modules/AddressingInterface.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMacLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MacToPhyControlInfo.h \
	veins/base/phyLayer/MacToPhyInterface.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MacToNetwControlInfo.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/modules/BaseMobility.o: veins/base/modules/BaseMobility.cc \
	veins/base/messages/BorderMsg_m.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/modules/BaseModule.o: veins/base/modules/BaseModule.cc \
	veins/base/modules/BaseModule.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/modules/BaseWorldUtility.o: veins/base/modules/BaseWorldUtility.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/modules/BatteryAccess.o: veins/base/modules/BatteryAccess.cc \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/BaseDecider.o: veins/base/phyLayer/BaseDecider.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/phyLayer/BaseDecider.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/BasePhyLayer.o: veins/base/phyLayer/BasePhyLayer.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/BasePhyLayer.h \
	veins/base/phyLayer/ChannelInfo.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MacToPhyControlInfo.h \
	veins/base/phyLayer/MacToPhyInterface.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyToMacControlInfo.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/phyLayer/ChannelInfo.o: veins/base/phyLayer/ChannelInfo.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/ChannelInfo.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/ChannelState.o: veins/base/phyLayer/ChannelState.cc \
	veins/base/phyLayer/ChannelState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/Decider.o: veins/base/phyLayer/Decider.cc \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/MappingBase.o: veins/base/phyLayer/MappingBase.cc \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/MappingUtils.o: veins/base/phyLayer/MappingUtils.cc \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/phyLayer/PhyUtils.o: veins/base/phyLayer/PhyUtils.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/phyLayer/Signal.o: veins/base/phyLayer/Signal.cc \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/utils/Coord.o: veins/base/utils/Coord.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/Coord.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/base/utils/NetwToMacControlInfo.o: veins/base/utils/NetwToMacControlInfo.cc \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/utils/SimpleAddress.o: veins/base/utils/SimpleAddress.cc \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h
$O/veins/base/utils/asserts.o: veins/base/utils/asserts.cc \
	veins/base/utils/asserts.h
$O/veins/base/utils/winsupport.o: veins/base/utils/winsupport.cc \
	veins/base/utils/winsupport.h
$O/veins/modules/analogueModel/BreakpointPathlossModel.o: veins/modules/analogueModel/BreakpointPathlossModel.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/BreakpointPathlossModel.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/analogueModel/JakesFading.o: veins/modules/analogueModel/JakesFading.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/messages/AirFrame_m.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/JakesFading.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/analogueModel/LogNormalShadowing.o: veins/modules/analogueModel/LogNormalShadowing.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/LogNormalShadowing.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/analogueModel/PERModel.o: veins/modules/analogueModel/PERModel.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/PERModel.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/analogueModel/SimpleObstacleShadowing.o: veins/modules/analogueModel/SimpleObstacleShadowing.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/SimpleObstacleShadowing.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/analogueModel/SimplePathlossModel.o: veins/modules/analogueModel/SimplePathlossModel.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/SimplePathlossModel.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/analogueModel/TwoRayInterferenceModel.o: veins/modules/analogueModel/TwoRayInterferenceModel.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/TwoRayInterferenceModel.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/application/ieee80211p/BaseWaveApplLayer.o: veins/modules/application/ieee80211p/BaseWaveApplLayer.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/ieee80211p/BaseWaveApplLayer.h \
	veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	veins/modules/messages/WaveShortMessage_m.h \
	veins/modules/utility/Consts80211p.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/application/traci/TraCIDemo11p.o: veins/modules/application/traci/TraCIDemo11p.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/ieee80211p/BaseWaveApplLayer.h \
	veins/modules/application/traci/TraCIDemo11p.h \
	veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	veins/modules/messages/WaveShortMessage_m.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIMobility.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/application/traci/TraCIDemoRSU11p.o: veins/modules/application/traci/TraCIDemoRSU11p.cc \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/ieee80211p/BaseWaveApplLayer.h \
	veins/modules/application/traci/TraCIDemoRSU11p.h \
	veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	veins/modules/messages/WaveShortMessage_m.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/application/traci/TraCITestApp.o: veins/modules/application/traci/TraCITestApp.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseApplLayer.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/asserts.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/application/traci/TraCITestApp.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIMobility.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/mac/ieee80211p/Mac1609_4.o: veins/modules/mac/ieee80211p/Mac1609_4.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/messages/MacPkt_m.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseLayer.h \
	veins/base/modules/BaseMacLayer.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/BaseDecider.h \
	veins/base/phyLayer/BasePhyLayer.h \
	veins/base/phyLayer/ChannelInfo.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MacToPhyControlInfo.h \
	veins/base/phyLayer/MacToPhyInterface.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyToMacControlInfo.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/NetwToMacControlInfo.h \
	veins/base/utils/PassedMessage.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/JakesFading.h \
	veins/modules/analogueModel/LogNormalShadowing.h \
	veins/modules/analogueModel/SimplePathlossModel.h \
	veins/modules/mac/ieee80211p/Mac1609_4.h \
	veins/modules/mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	veins/modules/mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	veins/modules/messages/Mac80211Pkt_m.h \
	veins/modules/messages/PhyControlMessage_m.h \
	veins/modules/messages/WaveShortMessage_m.h \
	veins/modules/phy/Decider80211p.h \
	veins/modules/phy/Decider80211pToPhy80211pInterface.h \
	veins/modules/phy/DeciderResult80211.h \
	veins/modules/phy/PhyLayer80211p.h \
	veins/modules/phy/SNRThresholdDecider.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/utility/ConstsPhy.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/messages/AirFrame11p_m.o: veins/modules/messages/AirFrame11p_m.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/messages/AirFrame11p_m.h
$O/veins/modules/messages/Mac80211Pkt_m.o: veins/modules/messages/Mac80211Pkt_m.cc \
	veins/base/messages/MacPkt_m.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/messages/Mac80211Pkt_m.h
$O/veins/modules/messages/PhyControlMessage_m.o: veins/modules/messages/PhyControlMessage_m.cc \
	veins/modules/messages/PhyControlMessage_m.h
$O/veins/modules/messages/WaveShortMessage_m.o: veins/modules/messages/WaveShortMessage_m.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/messages/WaveShortMessage_m.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/mobility/traci/TraCIBuffer.o: veins/modules/mobility/traci/TraCIBuffer.cc \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIConstants.h \
	veins/modules/mobility/traci/TraCICoord.h
$O/veins/modules/mobility/traci/TraCIColor.o: veins/modules/mobility/traci/TraCIColor.cc \
	veins/modules/mobility/traci/TraCIColor.h
$O/veins/modules/mobility/traci/TraCICommandInterface.o: veins/modules/mobility/traci/TraCICommandInterface.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCIConstants.h \
	veins/modules/mobility/traci/TraCICoord.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/mobility/traci/TraCIConnection.o: veins/modules/mobility/traci/TraCIConnection.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCIConstants.h \
	veins/modules/mobility/traci/TraCICoord.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/mobility/traci/TraCIMobility.o: veins/modules/mobility/traci/TraCIMobility.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIMobility.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/mobility/traci/TraCIScenarioManager.o: veins/modules/mobility/traci/TraCIScenarioManager.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCIConstants.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIMobility.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/mobility/traci/TraCIScenarioManagerInet.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/mobility/traci/TraCIScenarioManagerInet.o: veins/modules/mobility/traci/TraCIScenarioManagerInet.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.o: veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCIConstants.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/mobility/traci/TraCIScenarioManagerLaunchd.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/mobility/traci/TraCIScreenRecorder.o: veins/modules/mobility/traci/TraCIScreenRecorder.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/mobility/traci/TraCIScreenRecorder.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/obstacle/Obstacle.o: veins/modules/obstacle/Obstacle.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/obstacle/ObstacleControl.o: veins/modules/obstacle/ObstacleControl.cc \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/phy/Decider80211p.o: veins/modules/phy/Decider80211p.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/messages/MacPkt_m.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/BaseDecider.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MacToPhyInterface.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/SimpleAddress.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	veins/modules/messages/AirFrame11p_m.h \
	veins/modules/messages/Mac80211Pkt_m.h \
	veins/modules/phy/Decider80211p.h \
	veins/modules/phy/Decider80211pToPhy80211pInterface.h \
	veins/modules/phy/DeciderResult80211.h \
	veins/modules/phy/NistErrorRate.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/utility/ConstsPhy.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/phy/NistErrorRate.o: veins/modules/phy/NistErrorRate.cc \
	veins/modules/phy/NistErrorRate.h \
	veins/modules/utility/ConstsPhy.h
$O/veins/modules/phy/PhyLayer80211p.o: veins/modules/phy/PhyLayer80211p.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/ChannelAccess.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/modules/BaseBattery.h \
	veins/base/modules/BaseMobility.h \
	veins/base/modules/BaseModule.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/modules/BatteryAccess.h \
	veins/base/phyLayer/AnalogueModel.h \
	veins/base/phyLayer/BaseDecider.h \
	veins/base/phyLayer/BasePhyLayer.h \
	veins/base/phyLayer/ChannelInfo.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/MacToPhyControlInfo.h \
	veins/base/phyLayer/MacToPhyInterface.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/PhyUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/HostState.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/Move.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/analogueModel/BreakpointPathlossModel.h \
	veins/modules/analogueModel/JakesFading.h \
	veins/modules/analogueModel/LogNormalShadowing.h \
	veins/modules/analogueModel/PERModel.h \
	veins/modules/analogueModel/SimpleObstacleShadowing.h \
	veins/modules/analogueModel/SimplePathlossModel.h \
	veins/modules/analogueModel/TwoRayInterferenceModel.h \
	veins/modules/mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	veins/modules/messages/AirFrame11p_m.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/phy/Decider80211p.h \
	veins/modules/phy/Decider80211pToPhy80211pInterface.h \
	veins/modules/phy/PhyLayer80211p.h \
	veins/modules/phy/SNRThresholdDecider.h \
	veins/modules/utility/Consts80211p.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h
$O/veins/modules/phy/SNRThresholdDecider.o: veins/modules/phy/SNRThresholdDecider.cc \
	veins/base/messages/AirFrame_m.h \
	veins/base/messages/ChannelSenseRequest_m.h \
	veins/base/phyLayer/BaseDecider.h \
	veins/base/phyLayer/ChannelState.h \
	veins/base/phyLayer/Decider.h \
	veins/base/phyLayer/DeciderToPhyInterface.h \
	veins/base/phyLayer/Interpolation.h \
	veins/base/phyLayer/Mapping.h \
	veins/base/phyLayer/MappingBase.h \
	veins/base/phyLayer/MappingUtils.h \
	veins/base/phyLayer/Signal_.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/phy/SNRThresholdDecider.h
$O/veins/modules/world/annotations/AnnotationDummy.o: veins/modules/world/annotations/AnnotationDummy.cc \
	veins/modules/world/annotations/AnnotationDummy.h
$O/veins/modules/world/annotations/AnnotationManager.o: veins/modules/world/annotations/AnnotationManager.cc \
	veins/base/connectionManager/BaseConnectionManager.h \
	veins/base/connectionManager/NicEntry.h \
	veins/base/modules/BaseWorldUtility.h \
	veins/base/utils/Coord.h \
	veins/base/utils/FWMath.h \
	veins/base/utils/FindModule.h \
	veins/base/utils/MiXiMDefs.h \
	veins/base/utils/miximkerneldefs.h \
	veins/modules/mobility/traci/TraCIBuffer.h \
	veins/modules/mobility/traci/TraCIColor.h \
	veins/modules/mobility/traci/TraCICommandInterface.h \
	veins/modules/mobility/traci/TraCIConnection.h \
	veins/modules/mobility/traci/TraCICoord.h \
	veins/modules/mobility/traci/TraCIScenarioManager.h \
	veins/modules/obstacle/Obstacle.h \
	veins/modules/obstacle/ObstacleControl.h \
	veins/modules/world/annotations/AnnotationManager.h \
	$(INET_PROJ)/src/base/Compat.h \
	$(INET_PROJ)/src/base/INETDefs.h \
	$(INET_PROJ)/src/util/FWMath.h

