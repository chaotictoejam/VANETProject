#
# OMNeT++/OMNEST Makefile for libmiximmodules
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -o miximmodules -O out -I../base/connectionManager -I../base/messages -I../base/phyLayer -I../base/modules -I../base/utils -L../../out/$$\(CONFIGNAME\)/tests/power/utils -L../../out/$$\(CONFIGNAME\)/tests/testUtils -L../../out/$$\(CONFIGNAME\)/src/base -lmiximbase
#

# Name of target to be created (-o option)
TARGET = libmiximmodules$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I../base/connectionManager \
    -I../base/messages \
    -I../base/phyLayer \
    -I../base/modules \
    -I../base/utils \
    -I. \
    -IanalogueModel \
    -Iapplication \
    -Iapplication/ieee80211p \
    -Iapplication/traci \
    -IconnectionManager \
    -Imac \
    -Imac/ieee80211p \
    -Imessages \
    -Imobility \
    -Imobility/traci \
    -Inetw \
    -Inic \
    -Inode \
    -Iobstacle \
    -Iphy \
    -Ipower \
    -Ipower/battery \
    -Itransport \
    -Iutility \
    -Iworld \
    -Iworld/annotations

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../../out/$(CONFIGNAME)/tests/power/utils -L../../out/$(CONFIGNAME)/tests/testUtils -L../../out/$(CONFIGNAME)/src/base  -lmiximbase
LIBS += -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/tests/power/utils` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/tests/testUtils` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/src/base`

# Output directory
PROJECT_OUTPUT_DIR = ../../out
PROJECTRELATIVE_PATH = src/modules
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/analogueModel/BreakpointPathlossModel.o \
    $O/analogueModel/JakesFading.o \
    $O/analogueModel/LogNormalShadowing.o \
    $O/analogueModel/PERModel.o \
    $O/analogueModel/SimpleObstacleShadowing.o \
    $O/analogueModel/SimplePathlossModel.o \
    $O/analogueModel/TwoRayInterferenceModel.o \
    $O/analogueModel/UWBIRIEEE802154APathlossModel.o \
    $O/analogueModel/UWBIRStochasticPathlossModel.o \
    $O/application/BurstApplLayer.o \
    $O/application/BurstApplLayerBattery.o \
    $O/application/SensorApplLayer.o \
    $O/application/TestApplication.o \
    $O/application/TrafficGen.o \
    $O/application/ieee80211p/BaseWaveApplLayer.o \
    $O/application/ieee80211p/TestWaveApplLayer.o \
    $O/application/traci/TraCIDemo.o \
    $O/application/traci/TraCIDemo11p.o \
    $O/connectionManager/UnitDisk.o \
    $O/mac/AlohaMacLayer.o \
    $O/mac/BMacLayer.o \
    $O/mac/csma.o \
    $O/mac/CSMA802154.o \
    $O/mac/CSMAMacLayer.o \
    $O/mac/LMacLayer.o \
    $O/mac/Mac80211.o \
    $O/mac/Mac80211MultiChannel.o \
    $O/mac/UWBIRMac.o \
    $O/mac/ieee80211p/Mac1609_4.o \
    $O/messages/AggrPkt.o \
    $O/messages/UWBIRMacPkt.o \
    $O/mobility/ANSimMobility.o \
    $O/mobility/BonnMotionFileCache.o \
    $O/mobility/BonnMotionMobility.o \
    $O/mobility/CircleMobility.o \
    $O/mobility/ConstSpeedMobility.o \
    $O/mobility/LinearMobility.o \
    $O/mobility/LineSegmentsMobilityBase.o \
    $O/mobility/MassMobility.o \
    $O/mobility/MoBANCoordinator.o \
    $O/mobility/MoBANLocal.o \
    $O/mobility/Posture.o \
    $O/mobility/PostureTransition.o \
    $O/mobility/RectangleMobility.o \
    $O/mobility/TractorMobility.o \
    $O/mobility/TurtleMobility.o \
    $O/mobility/traci/TraCIColor.o \
    $O/mobility/traci/TraCIMobility.o \
    $O/mobility/traci/TraCIScenarioManager.o \
    $O/mobility/traci/TraCIScenarioManagerLaunchd.o \
    $O/netw/AdaptiveProbabilisticBroadcast.o \
    $O/netw/ArpHost.o \
    $O/netw/DummyRoute.o \
    $O/netw/Flood.o \
    $O/netw/ProbabilisticBroadcast.o \
    $O/netw/WiseRoute.o \
    $O/obstacle/Obstacle.o \
    $O/obstacle/ObstacleControl.o \
    $O/phy/Decider80211.o \
    $O/phy/Decider80211Battery.o \
    $O/phy/Decider80211MultiChannel.o \
    $O/phy/Decider80211p.o \
    $O/phy/Decider802154Narrow.o \
    $O/phy/DeciderUWBIRED.o \
    $O/phy/DeciderUWBIREDSync.o \
    $O/phy/DeciderUWBIREDSyncOnAddress.o \
    $O/phy/PhyLayer.o \
    $O/phy/PhyLayer80211p.o \
    $O/phy/PhyLayerBattery.o \
    $O/phy/PhyLayerUWBIR.o \
    $O/phy/SNRThresholdDecider.o \
    $O/power/battery/BatteryStats.o \
    $O/power/battery/SimpleBattery.o \
    $O/transport/Aggregation.o \
    $O/utility/IEEE802154A.o \
    $O/utility/phyPER.o \
    $O/utility/SimTracer.o \
    $O/world/annotations/AnnotationDummy.o \
    $O/world/annotations/AnnotationManager.o \
    $O/messages/AggrPkt_m.o \
    $O/messages/AirFrame11p_m.o \
    $O/messages/AirFrameUWBIR_m.o \
    $O/messages/DummyRoutePkt_m.o \
    $O/messages/LMacPkt_m.o \
    $O/messages/Mac80211Pkt_m.o \
    $O/messages/ProbabilisticBroadcastPkt_m.o \
    $O/messages/UWBIRMacPkt_m.o \
    $O/messages/WaveShortMessage_m.o \
    $O/messages/WiseRoutePkt_m.o

# Message files
MSGFILES = \
    messages/AggrPkt.msg \
    messages/AirFrame11p.msg \
    messages/AirFrameUWBIR.msg \
    messages/DummyRoutePkt.msg \
    messages/LMacPkt.msg \
    messages/Mac80211Pkt.msg \
    messages/ProbabilisticBroadcastPkt.msg \
    messages/UWBIRMacPkt.msg \
    messages/WaveShortMessage.msg \
    messages/WiseRoutePkt.msg

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
OMNETPP_LIBS = -L"$(OMNETPP_LIB_SUBDIR)" -L"$(OMNETPP_LIB_DIR)" -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)

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
	@echo Creating shared library: $@
	$(Q)echo >.tmp$$$$ $(OBJS) $(EXTRA_OBJS) && $(AR) .tmplib$$$$ @.tmp$$$$ && $(SHLIB_LD) -o $O/$(TARGET) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) .tmplib$$$$ $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS) && rm .tmp$$$$ && rm .tmplib$$$$
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

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
	$(Q)-rm -f miximmodules miximmodules.exe libmiximmodules.so libmiximmodules.a libmiximmodules.dll libmiximmodules.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f analogueModel/*_m.cc analogueModel/*_m.h
	$(Q)-rm -f application/*_m.cc application/*_m.h
	$(Q)-rm -f application/ieee80211p/*_m.cc application/ieee80211p/*_m.h
	$(Q)-rm -f application/traci/*_m.cc application/traci/*_m.h
	$(Q)-rm -f connectionManager/*_m.cc connectionManager/*_m.h
	$(Q)-rm -f mac/*_m.cc mac/*_m.h
	$(Q)-rm -f mac/ieee80211p/*_m.cc mac/ieee80211p/*_m.h
	$(Q)-rm -f messages/*_m.cc messages/*_m.h
	$(Q)-rm -f mobility/*_m.cc mobility/*_m.h
	$(Q)-rm -f mobility/traci/*_m.cc mobility/traci/*_m.h
	$(Q)-rm -f netw/*_m.cc netw/*_m.h
	$(Q)-rm -f nic/*_m.cc nic/*_m.h
	$(Q)-rm -f node/*_m.cc node/*_m.h
	$(Q)-rm -f obstacle/*_m.cc obstacle/*_m.h
	$(Q)-rm -f phy/*_m.cc phy/*_m.h
	$(Q)-rm -f power/*_m.cc power/*_m.h
	$(Q)-rm -f power/battery/*_m.cc power/battery/*_m.h
	$(Q)-rm -f transport/*_m.cc transport/*_m.h
	$(Q)-rm -f utility/*_m.cc utility/*_m.h
	$(Q)-rm -f world/*_m.cc world/*_m.h
	$(Q)-rm -f world/annotations/*_m.cc world/annotations/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc analogueModel/*.cc application/*.cc application/ieee80211p/*.cc application/traci/*.cc connectionManager/*.cc mac/*.cc mac/ieee80211p/*.cc messages/*.cc mobility/*.cc mobility/traci/*.cc netw/*.cc nic/*.cc node/*.cc obstacle/*.cc phy/*.cc power/*.cc power/battery/*.cc transport/*.cc utility/*.cc world/*.cc world/annotations/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/analogueModel/BreakpointPathlossModel.o: analogueModel/BreakpointPathlossModel.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/BreakpointPathlossModel.h
$O/analogueModel/JakesFading.o: analogueModel/JakesFading.cc \
	../base/connectionManager/ChannelAccess.h \
	../base/messages/AirFrame_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/JakesFading.h
$O/analogueModel/LogNormalShadowing.o: analogueModel/LogNormalShadowing.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/LogNormalShadowing.h
$O/analogueModel/PERModel.o: analogueModel/PERModel.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/PERModel.h
$O/analogueModel/SimpleObstacleShadowing.o: analogueModel/SimpleObstacleShadowing.cc \
	../base/messages/AirFrame_m.h \
	../base/modules/BaseWorldUtility.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/SimpleObstacleShadowing.h \
	obstacle/Obstacle.h \
	obstacle/ObstacleControl.h \
	world/annotations/AnnotationManager.h
$O/analogueModel/SimplePathlossModel.o: analogueModel/SimplePathlossModel.cc \
	../base/messages/AirFrame_m.h \
	../base/modules/BaseWorldUtility.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/SimplePathlossModel.h
$O/analogueModel/TwoRayInterferenceModel.o: analogueModel/TwoRayInterferenceModel.cc \
	../base/messages/AirFrame_m.h \
	../base/modules/BaseWorldUtility.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/TwoRayInterferenceModel.h
$O/analogueModel/UWBIRIEEE802154APathlossModel.o: analogueModel/UWBIRIEEE802154APathlossModel.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/UWBIRIEEE802154APathlossModel.h \
	utility/IEEE802154A.h \
	utility/SimpleTimeConstMapping.h
$O/analogueModel/UWBIRStochasticPathlossModel.o: analogueModel/UWBIRStochasticPathlossModel.cc \
	../base/messages/AirFrame_m.h \
	../base/modules/BaseWorldUtility.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/UWBIRStochasticPathlossModel.h
$O/application/BurstApplLayer.o: application/BurstApplLayer.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseApplLayer.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/modules/TestApplLayer.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/BurstApplLayer.h
$O/application/BurstApplLayerBattery.o: application/BurstApplLayerBattery.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseApplLayer.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/modules/TestApplLayer.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/BurstApplLayer.h \
	application/BurstApplLayerBattery.h
$O/application/SensorApplLayer.o: application/SensorApplLayer.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/SensorApplLayer.h \
	utility/Packet.h
$O/application/TestApplication.o: application/TestApplication.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/TestApplication.h
$O/application/TrafficGen.o: application/TrafficGen.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseApplLayer.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/TrafficGen.h \
	utility/Packet.h
$O/application/ieee80211p/BaseWaveApplLayer.o: application/ieee80211p/BaseWaveApplLayer.cc \
	../base/connectionManager/ChannelAccess.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseApplLayer.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/NetwToMacControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/ieee80211p/BaseWaveApplLayer.h \
	mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	messages/Mac80211Pkt_m.h \
	messages/WaveShortMessage_m.h \
	utility/Consts80211p.h
$O/application/ieee80211p/TestWaveApplLayer.o: application/ieee80211p/TestWaveApplLayer.cc \
	../base/connectionManager/ChannelAccess.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseApplLayer.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/NetwToMacControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/ieee80211p/BaseWaveApplLayer.h \
	application/ieee80211p/TestWaveApplLayer.h \
	mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	messages/Mac80211Pkt_m.h \
	messages/WaveShortMessage_m.h \
	utility/Consts80211p.h
$O/application/traci/TraCIDemo.o: application/traci/TraCIDemo.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseApplLayer.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/traci/TraCIDemo.h \
	mobility/traci/TraCIColor.h \
	mobility/traci/TraCIMobility.h \
	mobility/traci/TraCIScenarioManager.h \
	obstacle/Obstacle.h \
	obstacle/ObstacleControl.h \
	world/annotations/AnnotationManager.h
$O/application/traci/TraCIDemo11p.o: application/traci/TraCIDemo11p.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseApplLayer.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/NetwToMacControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	application/ieee80211p/BaseWaveApplLayer.h \
	application/traci/TraCIDemo11p.h \
	mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	messages/Mac80211Pkt_m.h \
	messages/WaveShortMessage_m.h \
	mobility/traci/TraCIColor.h \
	mobility/traci/TraCIMobility.h \
	mobility/traci/TraCIScenarioManager.h \
	obstacle/Obstacle.h \
	obstacle/ObstacleControl.h \
	utility/Consts80211p.h \
	world/annotations/AnnotationManager.h
$O/connectionManager/UnitDisk.o: connectionManager/UnitDisk.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	connectionManager/UnitDisk.h
$O/mac/AlohaMacLayer.o: mac/AlohaMacLayer.cc \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/AlohaMacLayer.h \
	mac/UWBIRMac.h \
	messages/UWBIRMacPkt.h \
	messages/UWBIRMacPkt_m.h \
	utility/IEEE802154A.h \
	utility/Packet.h
$O/mac/BMacLayer.o: mac/BMacLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/MacPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyControlInfo.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/BMacLayer.h \
	utility/DroppedPacket.h
$O/mac/CSMA802154.o: mac/CSMA802154.cc \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/PhyToMacControlInfo.h \
	../base/utils/HostState.h \
	../base/utils/MacToNetwControlInfo.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/CSMA802154.h \
	mac/csma.h \
	phy/Decider802154Narrow.h \
	phy/DeciderResult802154Narrow.h \
	utility/DroppedPacket.h
$O/mac/CSMAMacLayer.o: mac/CSMAMacLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/CSMAMacLayer.h
$O/mac/LMacLayer.o: mac/LMacLayer.cc \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/LMacLayer.h \
	messages/LMacPkt_m.h \
	utility/DroppedPacket.h
$O/mac/Mac80211.o: mac/Mac80211.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyToMacControlInfo.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/Mac80211.h \
	messages/Mac80211Pkt_m.h \
	phy/Decider80211.h \
	phy/DeciderResult80211.h \
	utility/Consts80211.h
$O/mac/Mac80211MultiChannel.o: mac/Mac80211MultiChannel.cc \
	../base/connectionManager/ChannelAccess.h \
	../base/messages/AirFrame_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/Mac80211.h \
	mac/Mac80211MultiChannel.h \
	messages/Mac80211Pkt_m.h \
	utility/Consts80211.h
$O/mac/UWBIRMac.o: mac/UWBIRMac.cc \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyControlInfo.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyToMacControlInfo.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/UWBIRMac.h \
	messages/UWBIRMacPkt.h \
	messages/UWBIRMacPkt_m.h \
	phy/DeciderResultUWBIR.h \
	phy/MacToUWBIRPhyControlInfo.h \
	utility/IEEE802154A.h \
	utility/Packet.h
$O/mac/csma.o: mac/csma.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseArp.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/csma.h \
	utility/DroppedPacket.h
$O/mac/ieee80211p/Mac1609_4.o: mac/ieee80211p/Mac1609_4.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMacLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyControlInfo.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/NetwToMacControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/JakesFading.h \
	analogueModel/LogNormalShadowing.h \
	analogueModel/SimplePathlossModel.h \
	mac/ieee80211p/Mac1609_4.h \
	mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	mac/ieee80211p/WaveAppToMac1609_4Interface.h \
	messages/Mac80211Pkt_m.h \
	messages/WaveShortMessage_m.h \
	phy/Decider80211p.h \
	phy/Decider80211pToPhy80211pInterface.h \
	phy/PhyLayer.h \
	phy/PhyLayer80211p.h \
	phy/SNRThresholdDecider.h \
	utility/Consts80211p.h
$O/messages/AggrPkt.o: messages/AggrPkt.cc \
	../base/messages/ApplPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/AggrPkt.h \
	messages/AggrPkt_m.h
$O/messages/AggrPkt_m.o: messages/AggrPkt_m.cc \
	../base/messages/ApplPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/AggrPkt_m.h
$O/messages/AirFrame11p_m.o: messages/AirFrame11p_m.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	messages/AirFrame11p_m.h
$O/messages/AirFrameUWBIR_m.o: messages/AirFrameUWBIR_m.cc \
	../base/messages/AirFrame_m.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	messages/AirFrameUWBIR_m.h \
	utility/IEEE802154A.h
$O/messages/DummyRoutePkt_m.o: messages/DummyRoutePkt_m.cc \
	../base/messages/NetwPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/DummyRoutePkt_m.h
$O/messages/LMacPkt_m.o: messages/LMacPkt_m.cc \
	../base/messages/MacPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/LMacPkt_m.h
$O/messages/Mac80211Pkt_m.o: messages/Mac80211Pkt_m.cc \
	../base/messages/MacPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/Mac80211Pkt_m.h
$O/messages/ProbabilisticBroadcastPkt_m.o: messages/ProbabilisticBroadcastPkt_m.cc \
	../base/messages/NetwPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/ProbabilisticBroadcastPkt_m.h
$O/messages/UWBIRMacPkt.o: messages/UWBIRMacPkt.cc \
	../base/messages/MacPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/UWBIRMacPkt.h \
	messages/UWBIRMacPkt_m.h
$O/messages/UWBIRMacPkt_m.o: messages/UWBIRMacPkt_m.cc \
	../base/messages/MacPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/UWBIRMacPkt_m.h
$O/messages/WaveShortMessage_m.o: messages/WaveShortMessage_m.cc \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	messages/WaveShortMessage_m.h
$O/messages/WiseRoutePkt_m.o: messages/WiseRoutePkt_m.cc \
	../base/messages/NetwPkt_m.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/WiseRoutePkt_m.h
$O/mobility/ANSimMobility.o: mobility/ANSimMobility.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/ANSimMobility.h \
	mobility/LineSegmentsMobilityBase.h
$O/mobility/BonnMotionFileCache.o: mobility/BonnMotionFileCache.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/BonnMotionFileCache.h
$O/mobility/BonnMotionMobility.o: mobility/BonnMotionMobility.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/BonnMotionFileCache.h \
	mobility/BonnMotionMobility.h \
	mobility/LineSegmentsMobilityBase.h
$O/mobility/CircleMobility.o: mobility/CircleMobility.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/CircleMobility.h
$O/mobility/ConstSpeedMobility.o: mobility/ConstSpeedMobility.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/ConstSpeedMobility.h
$O/mobility/LineSegmentsMobilityBase.o: mobility/LineSegmentsMobilityBase.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/LineSegmentsMobilityBase.h
$O/mobility/LinearMobility.o: mobility/LinearMobility.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/LinearMobility.h
$O/mobility/MassMobility.o: mobility/MassMobility.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/MassMobility.h
$O/mobility/MoBANCoordinator.o: mobility/MoBANCoordinator.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/MoBANCoordinator.h \
	mobility/MoBANLocal.h \
	mobility/Posture.h \
	mobility/PostureTransition.h \
	utility/MoBANBBItem.h
$O/mobility/MoBANLocal.o: mobility/MoBANLocal.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/MoBANLocal.h \
	utility/MoBANBBItem.h
$O/mobility/Posture.o: mobility/Posture.cc \
	../base/modules/BaseWorldUtility.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	mobility/Posture.h
$O/mobility/PostureTransition.o: mobility/PostureTransition.cc \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	mobility/PostureTransition.h
$O/mobility/RectangleMobility.o: mobility/RectangleMobility.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/RectangleMobility.h
$O/mobility/TractorMobility.o: mobility/TractorMobility.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/TractorMobility.h
$O/mobility/TurtleMobility.o: mobility/TurtleMobility.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/LineSegmentsMobilityBase.h \
	mobility/TurtleMobility.h
$O/mobility/traci/TraCIColor.o: mobility/traci/TraCIColor.cc \
	mobility/traci/TraCIColor.h
$O/mobility/traci/TraCIMobility.o: mobility/traci/TraCIMobility.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/traci/TraCIColor.h \
	mobility/traci/TraCIMobility.h \
	mobility/traci/TraCIScenarioManager.h \
	obstacle/Obstacle.h \
	obstacle/ObstacleControl.h \
	world/annotations/AnnotationManager.h
$O/mobility/traci/TraCIScenarioManager.o: mobility/traci/TraCIScenarioManager.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	mobility/traci/TraCIColor.h \
	mobility/traci/TraCIConstants.h \
	mobility/traci/TraCIMobility.h \
	mobility/traci/TraCIScenarioManager.h \
	obstacle/Obstacle.h \
	obstacle/ObstacleControl.h \
	world/annotations/AnnotationManager.h
$O/mobility/traci/TraCIScenarioManagerLaunchd.o: mobility/traci/TraCIScenarioManagerLaunchd.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseWorldUtility.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	mobility/traci/TraCIColor.h \
	mobility/traci/TraCIConstants.h \
	mobility/traci/TraCIScenarioManager.h \
	mobility/traci/TraCIScenarioManagerLaunchd.h \
	obstacle/Obstacle.h \
	obstacle/ObstacleControl.h \
	world/annotations/AnnotationManager.h
$O/netw/AdaptiveProbabilisticBroadcast.o: netw/AdaptiveProbabilisticBroadcast.cc \
	../base/messages/NetwPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/ProbabilisticBroadcastPkt_m.h \
	netw/AdaptiveProbabilisticBroadcast.h \
	netw/ProbabilisticBroadcast.h
$O/netw/ArpHost.o: netw/ArpHost.cc \
	../base/modules/AddressingInterface.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	netw/ArpHost.h
$O/netw/DummyRoute.o: netw/DummyRoute.cc \
	../base/messages/NetwPkt_m.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/DummyRoutePkt_m.h \
	netw/DummyRoute.h
$O/netw/Flood.o: netw/Flood.cc \
	../base/messages/NetwPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	netw/Flood.h
$O/netw/ProbabilisticBroadcast.o: netw/ProbabilisticBroadcast.cc \
	../base/messages/NetwPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MacToNetwControlInfo.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/ProbabilisticBroadcastPkt_m.h \
	netw/ProbabilisticBroadcast.h \
	utility/ProbBcastNetwControlInfo.h
$O/netw/WiseRoute.o: netw/WiseRoute.cc \
	../base/connectionManager/ChannelAccess.h \
	../base/messages/NetwPkt_m.h \
	../base/modules/ArpInterface.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseNetwLayer.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MacToNetwControlInfo.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/NetwControlInfo.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/WiseRoutePkt_m.h \
	netw/WiseRoute.h \
	utility/Packet.h \
	utility/SimTracer.h
$O/obstacle/Obstacle.o: obstacle/Obstacle.cc \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	obstacle/Obstacle.h \
	world/annotations/AnnotationManager.h
$O/obstacle/ObstacleControl.o: obstacle/ObstacleControl.cc \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	obstacle/Obstacle.h \
	obstacle/ObstacleControl.h \
	world/annotations/AnnotationManager.h
$O/phy/Decider80211.o: phy/Decider80211.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/Mac80211Pkt_m.h \
	phy/Decider80211.h \
	phy/DeciderResult80211.h \
	utility/Consts80211.h
$O/phy/Decider80211Battery.o: phy/Decider80211Battery.cc \
	../base/messages/ChannelSenseRequest_m.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	phy/Decider80211.h \
	phy/Decider80211Battery.h
$O/phy/Decider80211MultiChannel.o: phy/Decider80211MultiChannel.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	phy/Decider80211.h \
	phy/Decider80211Battery.h \
	phy/Decider80211MultiChannel.h \
	phy/DeciderResult80211.h \
	utility/Consts80211.h
$O/phy/Decider80211p.o: phy/Decider80211p.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	messages/AirFrame11p_m.h \
	messages/Mac80211Pkt_m.h \
	phy/Decider80211p.h \
	phy/Decider80211pToPhy80211pInterface.h \
	phy/DeciderResult80211.h \
	utility/Consts80211p.h
$O/phy/Decider802154Narrow.o: phy/Decider802154Narrow.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyToMacControlInfo.h \
	../base/phyLayer/Signal_.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	phy/Decider802154Narrow.h \
	phy/DeciderResult802154Narrow.h
$O/phy/DeciderUWBIRED.o: phy/DeciderUWBIRED.cc \
	../base/connectionManager/ChannelAccess.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/UWBIRIEEE802154APathlossModel.h \
	analogueModel/UWBIRStochasticPathlossModel.h \
	messages/AirFrameUWBIR_m.h \
	phy/DeciderResultUWBIR.h \
	phy/DeciderUWBIRED.h \
	phy/PhyLayerUWBIR.h \
	phy/RadioUWBIR.h \
	utility/IEEE802154A.h \
	utility/SimpleTimeConstMapping.h \
	utility/UWBIRPacket.h
$O/phy/DeciderUWBIREDSync.o: phy/DeciderUWBIREDSync.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	phy/DeciderUWBIRED.h \
	phy/DeciderUWBIREDSync.h \
	utility/IEEE802154A.h \
	utility/UWBIRPacket.h
$O/phy/DeciderUWBIREDSyncOnAddress.o: phy/DeciderUWBIREDSyncOnAddress.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	phy/DeciderUWBIRED.h \
	phy/DeciderUWBIREDSyncOnAddress.h \
	utility/IEEE802154A.h \
	utility/UWBIRPacket.h
$O/phy/PhyLayer.o: phy/PhyLayer.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/BreakpointPathlossModel.h \
	analogueModel/JakesFading.h \
	analogueModel/LogNormalShadowing.h \
	analogueModel/PERModel.h \
	analogueModel/SimpleObstacleShadowing.h \
	analogueModel/SimplePathlossModel.h \
	analogueModel/TwoRayInterferenceModel.h \
	obstacle/Obstacle.h \
	obstacle/ObstacleControl.h \
	phy/Decider80211.h \
	phy/Decider802154Narrow.h \
	phy/PhyLayer.h \
	phy/SNRThresholdDecider.h \
	world/annotations/AnnotationManager.h
$O/phy/PhyLayer80211p.o: phy/PhyLayer80211p.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/ChannelAccess.h \
	../base/connectionManager/NicEntry.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyControlInfo.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/BreakpointPathlossModel.h \
	analogueModel/JakesFading.h \
	analogueModel/LogNormalShadowing.h \
	analogueModel/PERModel.h \
	analogueModel/SimpleObstacleShadowing.h \
	analogueModel/SimplePathlossModel.h \
	analogueModel/TwoRayInterferenceModel.h \
	mac/ieee80211p/Mac80211pToPhy11pInterface.h \
	messages/AirFrame11p_m.h \
	obstacle/Obstacle.h \
	obstacle/ObstacleControl.h \
	phy/Decider80211p.h \
	phy/Decider80211pToPhy80211pInterface.h \
	phy/PhyLayer.h \
	phy/PhyLayer80211p.h \
	phy/SNRThresholdDecider.h \
	utility/Consts80211p.h \
	world/annotations/AnnotationManager.h
$O/phy/PhyLayerBattery.o: phy/PhyLayerBattery.cc \
	../base/connectionManager/ChannelAccess.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/messages/MacPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyControlInfo.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	phy/Decider80211.h \
	phy/Decider80211Battery.h \
	phy/Decider80211MultiChannel.h \
	phy/PhyLayer.h \
	phy/PhyLayerBattery.h
$O/phy/PhyLayerUWBIR.o: phy/PhyLayerUWBIR.cc \
	../base/connectionManager/ChannelAccess.h \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseMobility.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/BasePhyLayer.h \
	../base/phyLayer/ChannelInfo.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyControlInfo.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/Move.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	analogueModel/UWBIRIEEE802154APathlossModel.h \
	analogueModel/UWBIRStochasticPathlossModel.h \
	messages/AirFrameUWBIR_m.h \
	phy/DeciderUWBIRED.h \
	phy/DeciderUWBIREDSync.h \
	phy/DeciderUWBIREDSyncOnAddress.h \
	phy/MacToUWBIRPhyControlInfo.h \
	phy/PhyLayerUWBIR.h \
	phy/RadioUWBIR.h \
	utility/IEEE802154A.h \
	utility/SimpleTimeConstMapping.h \
	utility/UWBIRPacket.h
$O/phy/SNRThresholdDecider.o: phy/SNRThresholdDecider.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/phyLayer/BaseDecider.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	phy/SNRThresholdDecider.h
$O/power/battery/BatteryStats.o: power/battery/BatteryStats.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseModule.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	power/battery/BatteryState.h \
	power/battery/BatteryStats.h \
	power/battery/DeviceEntry.h
$O/power/battery/SimpleBattery.o: power/battery/SimpleBattery.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseModule.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	power/battery/BatteryState.h \
	power/battery/BatteryStats.h \
	power/battery/DeviceEntry.h \
	power/battery/SimpleBattery.h
$O/transport/Aggregation.o: transport/Aggregation.cc \
	../base/messages/ApplPkt_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	messages/AggrPkt.h \
	messages/AggrPkt_m.h \
	transport/Aggregation.h
$O/utility/IEEE802154A.o: utility/IEEE802154A.cc \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	utility/IEEE802154A.h
$O/utility/SimTracer.o: utility/SimTracer.cc \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BaseWorldUtility.h \
	../base/modules/BatteryAccess.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	utility/Packet.h \
	utility/SimTracer.h
$O/utility/phyPER.o: utility/phyPER.cc \
	../base/messages/AirFrame_m.h \
	../base/messages/ChannelSenseRequest_m.h \
	../base/modules/BaseBattery.h \
	../base/modules/BaseLayer.h \
	../base/modules/BaseModule.h \
	../base/modules/BatteryAccess.h \
	../base/phyLayer/AnalogueModel.h \
	../base/phyLayer/ChannelState.h \
	../base/phyLayer/Decider.h \
	../base/phyLayer/DeciderToPhyInterface.h \
	../base/phyLayer/Interpolation.h \
	../base/phyLayer/MacToPhyInterface.h \
	../base/phyLayer/Mapping.h \
	../base/phyLayer/MappingBase.h \
	../base/phyLayer/MappingUtils.h \
	../base/phyLayer/PhyUtils.h \
	../base/phyLayer/Signal_.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/HostState.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/PassedMessage.h \
	../base/utils/SimpleAddress.h \
	../base/utils/miximkerneldefs.h \
	phy/DeciderUWBIRED.h \
	utility/IEEE802154A.h \
	utility/Packet.h \
	utility/UWBIRPacket.h \
	utility/phyPER.h
$O/world/annotations/AnnotationDummy.o: world/annotations/AnnotationDummy.cc \
	world/annotations/AnnotationDummy.h
$O/world/annotations/AnnotationManager.o: world/annotations/AnnotationManager.cc \
	../base/connectionManager/BaseConnectionManager.h \
	../base/connectionManager/NicEntry.h \
	../base/modules/BaseWorldUtility.h \
	../base/utils/Coord.h \
	../base/utils/FWMath.h \
	../base/utils/FindModule.h \
	../base/utils/MiXiMDefs.h \
	../base/utils/miximkerneldefs.h \
	mobility/traci/TraCIColor.h \
	mobility/traci/TraCIScenarioManager.h \
	obstacle/Obstacle.h \
	obstacle/ObstacleControl.h \
	world/annotations/AnnotationManager.h

