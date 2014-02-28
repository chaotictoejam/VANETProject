#
# OMNeT++/OMNEST Makefile for libmiximbase
#
# This file was generated with the command:
#  opp_makemake -f --deep --make-so -o miximbase -O out -L../../out/$$\(CONFIGNAME\)/tests/power/utils -L../../out/$$\(CONFIGNAME\)/tests/testUtils -L../../out/$$\(CONFIGNAME\)/src/modules
#

# Name of target to be created (-o option)
TARGET = libmiximbase$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = \
    -I. \
    -IconnectionManager \
    -Imessages \
    -Imodules \
    -IphyLayer \
    -Itimers \
    -Iutils

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L../../out/$(CONFIGNAME)/tests/power/utils -L../../out/$(CONFIGNAME)/tests/testUtils -L../../out/$(CONFIGNAME)/src/modules
LIBS += -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/tests/power/utils` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/tests/testUtils` -Wl,-rpath,`abspath ../../out/$(CONFIGNAME)/src/modules`

# Output directory
PROJECT_OUTPUT_DIR = ../../out
PROJECTRELATIVE_PATH = src/base
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS = \
    $O/connectionManager/BaseConnectionManager.o \
    $O/connectionManager/ChannelAccess.o \
    $O/connectionManager/ConnectionManager.o \
    $O/connectionManager/NicEntryDebug.o \
    $O/connectionManager/NicEntryDirect.o \
    $O/modules/BaseApplLayer.o \
    $O/modules/BaseArp.o \
    $O/modules/BaseBattery.o \
    $O/modules/BaseLayer.o \
    $O/modules/BaseMacLayer.o \
    $O/modules/BaseMobility.o \
    $O/modules/BaseModule.o \
    $O/modules/BaseNetwLayer.o \
    $O/modules/BaseWorldUtility.o \
    $O/modules/BatteryAccess.o \
    $O/modules/TestApplLayer.o \
    $O/phyLayer/BaseDecider.o \
    $O/phyLayer/BasePhyLayer.o \
    $O/phyLayer/ChannelInfo.o \
    $O/phyLayer/ChannelState.o \
    $O/phyLayer/Decider.o \
    $O/phyLayer/MappingBase.o \
    $O/phyLayer/MappingUtils.o \
    $O/phyLayer/PhyUtils.o \
    $O/phyLayer/Signal.o \
    $O/timers/FrameTimer.o \
    $O/timers/FrameTimerGenerator.o \
    $O/timers/GlobalTime.o \
    $O/timers/RepeatTimer.o \
    $O/timers/RepeatTimerCore.o \
    $O/timers/Timer.o \
    $O/timers/TimerCore.o \
    $O/utils/Coord.o \
    $O/utils/NetwToMacControlInfo.o \
    $O/utils/SimpleAddress.o \
    $O/utils/winsupport.o \
    $O/messages/AirFrame_m.o \
    $O/messages/ApplPkt_m.o \
    $O/messages/BorderMsg_m.o \
    $O/messages/ChannelSenseRequest_m.o \
    $O/messages/MacPkt_m.o \
    $O/messages/NetwPkt_m.o

# Message files
MSGFILES = \
    messages/AirFrame.msg \
    messages/ApplPkt.msg \
    messages/BorderMsg.msg \
    messages/ChannelSenseRequest.msg \
    messages/MacPkt.msg \
    messages/NetwPkt.msg

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
	$(Q)$(SHLIB_LD) -o $O/$(TARGET)  $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
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
	$(Q)-rm -f miximbase miximbase.exe libmiximbase.so libmiximbase.a libmiximbase.dll libmiximbase.dylib
	$(Q)-rm -f ./*_m.cc ./*_m.h
	$(Q)-rm -f connectionManager/*_m.cc connectionManager/*_m.h
	$(Q)-rm -f messages/*_m.cc messages/*_m.h
	$(Q)-rm -f modules/*_m.cc modules/*_m.h
	$(Q)-rm -f phyLayer/*_m.cc phyLayer/*_m.h
	$(Q)-rm -f timers/*_m.cc timers/*_m.h
	$(Q)-rm -f utils/*_m.cc utils/*_m.h

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

depend:
	$(qecho) Creating dependencies...
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc connectionManager/*.cc messages/*.cc modules/*.cc phyLayer/*.cc timers/*.cc utils/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.
$O/connectionManager/BaseConnectionManager.o: connectionManager/BaseConnectionManager.cc \
	connectionManager/BaseConnectionManager.h \
	connectionManager/NicEntry.h \
	connectionManager/NicEntryDebug.h \
	connectionManager/NicEntryDirect.h \
	modules/BaseWorldUtility.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/FindModule.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/connectionManager/ChannelAccess.o: connectionManager/ChannelAccess.cc \
	connectionManager/BaseConnectionManager.h \
	connectionManager/ChannelAccess.h \
	connectionManager/NicEntry.h \
	modules/BaseBattery.h \
	modules/BaseMobility.h \
	modules/BaseModule.h \
	modules/BaseWorldUtility.h \
	modules/BatteryAccess.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/FindModule.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/Move.h \
	utils/miximkerneldefs.h
$O/connectionManager/ConnectionManager.o: connectionManager/ConnectionManager.cc \
	connectionManager/BaseConnectionManager.h \
	connectionManager/ConnectionManager.h \
	connectionManager/NicEntry.h \
	modules/BaseWorldUtility.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/connectionManager/NicEntryDebug.o: connectionManager/NicEntryDebug.cc \
	connectionManager/ChannelAccess.h \
	connectionManager/NicEntry.h \
	connectionManager/NicEntryDebug.h \
	modules/BaseBattery.h \
	modules/BaseMobility.h \
	modules/BaseModule.h \
	modules/BaseWorldUtility.h \
	modules/BatteryAccess.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/FindModule.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/Move.h \
	utils/miximkerneldefs.h
$O/connectionManager/NicEntryDirect.o: connectionManager/NicEntryDirect.cc \
	connectionManager/ChannelAccess.h \
	connectionManager/NicEntry.h \
	connectionManager/NicEntryDirect.h \
	modules/BaseBattery.h \
	modules/BaseMobility.h \
	modules/BaseModule.h \
	modules/BaseWorldUtility.h \
	modules/BatteryAccess.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/FindModule.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/Move.h \
	utils/miximkerneldefs.h
$O/messages/AirFrame_m.o: messages/AirFrame_m.cc \
	messages/AirFrame_m.h \
	phyLayer/Interpolation.h \
	phyLayer/Mapping.h \
	phyLayer/MappingBase.h \
	phyLayer/MappingUtils.h \
	phyLayer/Signal_.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/messages/ApplPkt_m.o: messages/ApplPkt_m.cc \
	messages/ApplPkt_m.h \
	utils/MiXiMDefs.h \
	utils/SimpleAddress.h \
	utils/miximkerneldefs.h
$O/messages/BorderMsg_m.o: messages/BorderMsg_m.cc \
	messages/BorderMsg_m.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/messages/ChannelSenseRequest_m.o: messages/ChannelSenseRequest_m.cc \
	messages/ChannelSenseRequest_m.h \
	phyLayer/ChannelState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/messages/MacPkt_m.o: messages/MacPkt_m.cc \
	messages/MacPkt_m.h \
	utils/MiXiMDefs.h \
	utils/SimpleAddress.h \
	utils/miximkerneldefs.h
$O/messages/NetwPkt_m.o: messages/NetwPkt_m.cc \
	messages/NetwPkt_m.h \
	utils/MiXiMDefs.h \
	utils/SimpleAddress.h \
	utils/miximkerneldefs.h
$O/modules/BaseApplLayer.o: modules/BaseApplLayer.cc \
	modules/BaseApplLayer.h \
	modules/BaseBattery.h \
	modules/BaseLayer.h \
	modules/BaseModule.h \
	modules/BatteryAccess.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/PassedMessage.h \
	utils/SimpleAddress.h \
	utils/miximkerneldefs.h
$O/modules/BaseArp.o: modules/BaseArp.cc \
	modules/AddressingInterface.h \
	modules/ArpInterface.h \
	modules/BaseArp.h \
	modules/BaseModule.h \
	utils/FindModule.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/SimpleAddress.h \
	utils/miximkerneldefs.h
$O/modules/BaseBattery.o: modules/BaseBattery.cc \
	modules/BaseBattery.h \
	modules/BaseModule.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/modules/BaseLayer.o: modules/BaseLayer.cc \
	modules/BaseBattery.h \
	modules/BaseLayer.h \
	modules/BaseModule.h \
	modules/BatteryAccess.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/PassedMessage.h \
	utils/miximkerneldefs.h
$O/modules/BaseMacLayer.o: modules/BaseMacLayer.cc \
	connectionManager/ChannelAccess.h \
	messages/MacPkt_m.h \
	modules/AddressingInterface.h \
	modules/BaseBattery.h \
	modules/BaseLayer.h \
	modules/BaseMacLayer.h \
	modules/BaseMobility.h \
	modules/BaseModule.h \
	modules/BaseWorldUtility.h \
	modules/BatteryAccess.h \
	phyLayer/AnalogueModel.h \
	phyLayer/ChannelState.h \
	phyLayer/Interpolation.h \
	phyLayer/MacToPhyControlInfo.h \
	phyLayer/MacToPhyInterface.h \
	phyLayer/Mapping.h \
	phyLayer/MappingBase.h \
	phyLayer/MappingUtils.h \
	phyLayer/PhyUtils.h \
	phyLayer/Signal_.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/FindModule.h \
	utils/HostState.h \
	utils/MacToNetwControlInfo.h \
	utils/MiXiMDefs.h \
	utils/Move.h \
	utils/NetwToMacControlInfo.h \
	utils/PassedMessage.h \
	utils/SimpleAddress.h \
	utils/miximkerneldefs.h
$O/modules/BaseMobility.o: modules/BaseMobility.cc \
	messages/BorderMsg_m.h \
	modules/BaseBattery.h \
	modules/BaseMobility.h \
	modules/BaseModule.h \
	modules/BaseWorldUtility.h \
	modules/BatteryAccess.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/FindModule.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/Move.h \
	utils/miximkerneldefs.h
$O/modules/BaseModule.o: modules/BaseModule.cc \
	modules/BaseModule.h \
	utils/FindModule.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/modules/BaseNetwLayer.o: modules/BaseNetwLayer.cc \
	messages/NetwPkt_m.h \
	modules/AddressingInterface.h \
	modules/ArpInterface.h \
	modules/BaseBattery.h \
	modules/BaseLayer.h \
	modules/BaseMacLayer.h \
	modules/BaseModule.h \
	modules/BaseNetwLayer.h \
	modules/BatteryAccess.h \
	phyLayer/Interpolation.h \
	phyLayer/MappingBase.h \
	utils/FindModule.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/NetwControlInfo.h \
	utils/NetwToMacControlInfo.h \
	utils/PassedMessage.h \
	utils/SimpleAddress.h \
	utils/miximkerneldefs.h
$O/modules/BaseWorldUtility.o: modules/BaseWorldUtility.cc \
	connectionManager/BaseConnectionManager.h \
	connectionManager/NicEntry.h \
	modules/BaseWorldUtility.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/FindModule.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/modules/BatteryAccess.o: modules/BatteryAccess.cc \
	modules/BaseBattery.h \
	modules/BaseModule.h \
	modules/BatteryAccess.h \
	utils/FindModule.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/modules/TestApplLayer.o: modules/TestApplLayer.cc \
	messages/ApplPkt_m.h \
	modules/BaseApplLayer.h \
	modules/BaseBattery.h \
	modules/BaseLayer.h \
	modules/BaseModule.h \
	modules/BatteryAccess.h \
	modules/TestApplLayer.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/NetwControlInfo.h \
	utils/PassedMessage.h \
	utils/SimpleAddress.h \
	utils/miximkerneldefs.h
$O/phyLayer/BaseDecider.o: phyLayer/BaseDecider.cc \
	messages/AirFrame_m.h \
	messages/ChannelSenseRequest_m.h \
	phyLayer/BaseDecider.h \
	phyLayer/ChannelState.h \
	phyLayer/Decider.h \
	phyLayer/DeciderToPhyInterface.h \
	phyLayer/Interpolation.h \
	phyLayer/Mapping.h \
	phyLayer/MappingBase.h \
	phyLayer/MappingUtils.h \
	phyLayer/Signal_.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/phyLayer/BasePhyLayer.o: phyLayer/BasePhyLayer.cc \
	connectionManager/BaseConnectionManager.h \
	connectionManager/ChannelAccess.h \
	connectionManager/NicEntry.h \
	messages/AirFrame_m.h \
	messages/ChannelSenseRequest_m.h \
	modules/BaseBattery.h \
	modules/BaseMobility.h \
	modules/BaseModule.h \
	modules/BaseWorldUtility.h \
	modules/BatteryAccess.h \
	phyLayer/AnalogueModel.h \
	phyLayer/BasePhyLayer.h \
	phyLayer/ChannelInfo.h \
	phyLayer/ChannelState.h \
	phyLayer/Decider.h \
	phyLayer/DeciderToPhyInterface.h \
	phyLayer/Interpolation.h \
	phyLayer/MacToPhyControlInfo.h \
	phyLayer/MacToPhyInterface.h \
	phyLayer/Mapping.h \
	phyLayer/MappingBase.h \
	phyLayer/MappingUtils.h \
	phyLayer/PhyToMacControlInfo.h \
	phyLayer/PhyUtils.h \
	phyLayer/Signal_.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/FindModule.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/Move.h \
	utils/miximkerneldefs.h
$O/phyLayer/ChannelInfo.o: phyLayer/ChannelInfo.cc \
	messages/AirFrame_m.h \
	phyLayer/ChannelInfo.h \
	phyLayer/Interpolation.h \
	phyLayer/Mapping.h \
	phyLayer/MappingBase.h \
	phyLayer/MappingUtils.h \
	phyLayer/Signal_.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/phyLayer/ChannelState.o: phyLayer/ChannelState.cc \
	phyLayer/ChannelState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/phyLayer/Decider.o: phyLayer/Decider.cc \
	messages/ChannelSenseRequest_m.h \
	phyLayer/ChannelState.h \
	phyLayer/Decider.h \
	phyLayer/DeciderToPhyInterface.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/phyLayer/MappingBase.o: phyLayer/MappingBase.cc \
	phyLayer/Interpolation.h \
	phyLayer/MappingBase.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/phyLayer/MappingUtils.o: phyLayer/MappingUtils.cc \
	phyLayer/Interpolation.h \
	phyLayer/MappingBase.h \
	phyLayer/MappingUtils.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/phyLayer/PhyUtils.o: phyLayer/PhyUtils.cc \
	messages/AirFrame_m.h \
	phyLayer/AnalogueModel.h \
	phyLayer/Interpolation.h \
	phyLayer/Mapping.h \
	phyLayer/MappingBase.h \
	phyLayer/MappingUtils.h \
	phyLayer/PhyUtils.h \
	phyLayer/Signal_.h \
	utils/Coord.h \
	utils/FWMath.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/phyLayer/Signal.o: phyLayer/Signal.cc \
	phyLayer/Interpolation.h \
	phyLayer/Mapping.h \
	phyLayer/MappingBase.h \
	phyLayer/MappingUtils.h \
	phyLayer/Signal_.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/timers/FrameTimer.o: timers/FrameTimer.cc \
	modules/BaseModule.h \
	timers/FrameTimer.h \
	timers/FrameTimerGenerator.h \
	timers/GlobalTime.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/timers/FrameTimerGenerator.o: timers/FrameTimerGenerator.cc \
	modules/BaseModule.h \
	timers/FrameTimer.h \
	timers/FrameTimerGenerator.h \
	timers/GlobalTime.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/timers/GlobalTime.o: timers/GlobalTime.cc \
	timers/GlobalTime.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/timers/RepeatTimer.o: timers/RepeatTimer.cc \
	modules/BaseModule.h \
	timers/RepeatTimer.h \
	timers/RepeatTimerCore.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/timers/RepeatTimerCore.o: timers/RepeatTimerCore.cc \
	modules/BaseModule.h \
	timers/RepeatTimer.h \
	timers/RepeatTimerCore.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/timers/Timer.o: timers/Timer.cc \
	modules/BaseModule.h \
	timers/Timer.h \
	timers/TimerCore.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/timers/TimerCore.o: timers/TimerCore.cc \
	modules/BaseModule.h \
	timers/Timer.h \
	timers/TimerCore.h \
	utils/HostState.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/utils/Coord.o: utils/Coord.cc \
	utils/Coord.h \
	utils/FWMath.h \
	utils/MiXiMDefs.h \
	utils/miximkerneldefs.h
$O/utils/NetwToMacControlInfo.o: utils/NetwToMacControlInfo.cc \
	utils/MiXiMDefs.h \
	utils/NetwToMacControlInfo.h \
	utils/SimpleAddress.h \
	utils/miximkerneldefs.h
$O/utils/SimpleAddress.o: utils/SimpleAddress.cc \
	utils/MiXiMDefs.h \
	utils/SimpleAddress.h \
	utils/miximkerneldefs.h
$O/utils/winsupport.o: utils/winsupport.cc \
	utils/winsupport.h

