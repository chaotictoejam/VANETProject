#
# OMNeT++/OMNEST Makefile for VANETSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -LF:/VANETProject/WorkingProjects/inet/out/$$\(CONFIGNAME\)/src -LF:/VANETProject/WorkingProjects/mixim/out/$$\(CONFIGNAME\)/tests/testUtils -LF:/VANETProject/WorkingProjects/mixim/out/$$\(CONFIGNAME\)/src/base -LF:/VANETProject/WorkingProjects/mixim/out/$$\(CONFIGNAME\)/src/modules -linet -lmiximtestUtils -lmiximbase -lmiximmodules -DINET_IMPORT -KINET_PROJ=F:/VANETProject/WorkingProjects/inet -KMIXIM_PROJ=F:/VANETProject/WorkingProjects/mixim
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
    -Isrc/manet \
    -Isrc/protocols \
    -Isrc/protocols/manet \
    -Isrc/protocols/manet/gpsr \
    -Isrc/protocols/vanet \
    -Isrc/protocols/vanet/aodvvanet \
    -Isrc/protocols/vanet/rbvtp \
    -Isrc/protocols/vanet/rbvtr \
    -Isrc/protocols/vanet/vdtp \
    -Isrc/vanet \
    -Isrc/vanet/aodvvanet \
    -Isrc/vanet/bittorrent \
    -Isrc/vanet/rbvtp \
    -Isrc/vanet/rbvtr \
    -Isrc/vanet/vdtp \
    -Itest \
    -Itest/AODV \
    -Itest/AODV/results \
    -Itest/Traci \
    -Itest/Traci/results

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = -L$(INET_PROJ)/out/$(CONFIGNAME)/src -L$(MIXIM_PROJ)/out/$(CONFIGNAME)/tests/testUtils -L$(MIXIM_PROJ)/out/$(CONFIGNAME)/src/base -L$(MIXIM_PROJ)/out/$(CONFIGNAME)/src/modules  -linet -lmiximtestUtils -lmiximbase -lmiximmodules
LIBS += -Wl,-rpath,`abspath $(INET_PROJ)/out/$(CONFIGNAME)/src` -Wl,-rpath,`abspath $(MIXIM_PROJ)/out/$(CONFIGNAME)/tests/testUtils` -Wl,-rpath,`abspath $(MIXIM_PROJ)/out/$(CONFIGNAME)/src/base` -Wl,-rpath,`abspath $(MIXIM_PROJ)/out/$(CONFIGNAME)/src/modules`

# Output directory
PROJECT_OUTPUT_DIR = out
PROJECTRELATIVE_PATH =
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc and .msg files
OBJS =

# Message files
MSGFILES =

# Other makefile variables (-K)
INET_PROJ=F:/VANETProject/WorkingProjects/inet
MIXIM_PROJ=F:/VANETProject/WorkingProjects/mixim

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
	$(Q)-rm -f src/manet/*_m.cc src/manet/*_m.h
	$(Q)-rm -f src/protocols/*_m.cc src/protocols/*_m.h
	$(Q)-rm -f src/protocols/manet/*_m.cc src/protocols/manet/*_m.h
	$(Q)-rm -f src/protocols/manet/gpsr/*_m.cc src/protocols/manet/gpsr/*_m.h
	$(Q)-rm -f src/protocols/vanet/*_m.cc src/protocols/vanet/*_m.h
	$(Q)-rm -f src/protocols/vanet/aodvvanet/*_m.cc src/protocols/vanet/aodvvanet/*_m.h
	$(Q)-rm -f src/protocols/vanet/rbvtp/*_m.cc src/protocols/vanet/rbvtp/*_m.h
	$(Q)-rm -f src/protocols/vanet/rbvtr/*_m.cc src/protocols/vanet/rbvtr/*_m.h
	$(Q)-rm -f src/protocols/vanet/vdtp/*_m.cc src/protocols/vanet/vdtp/*_m.h
	$(Q)-rm -f src/vanet/*_m.cc src/vanet/*_m.h
	$(Q)-rm -f src/vanet/aodvvanet/*_m.cc src/vanet/aodvvanet/*_m.h
	$(Q)-rm -f src/vanet/bittorrent/*_m.cc src/vanet/bittorrent/*_m.h
	$(Q)-rm -f src/vanet/rbvtp/*_m.cc src/vanet/rbvtp/*_m.h
	$(Q)-rm -f src/vanet/rbvtr/*_m.cc src/vanet/rbvtr/*_m.h
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
	$(Q)$(MAKEDEPEND) $(INCLUDE_PATH) -f Makefile -P\$$O/ -- $(MSG_CC_FILES)  ./*.cc etc/*.cc etc/plugins/*.cc simulations/*.cc simulations/manet/*.cc simulations/manet/aodv/*.cc simulations/manet/aodv/results/*.cc simulations/manet/dsr/*.cc simulations/manet/dsr/results/*.cc simulations/manet/gpsr/*.cc simulations/manet/gpsr/results/*.cc simulations/manet/olsr/*.cc simulations/manet/olsr/results/*.cc simulations/vanet/*.cc simulations/vanet/aodvvanet/*.cc simulations/vanet/car/*.cc simulations/vanet/geopps/*.cc simulations/vanet/gsr/*.cc simulations/vanet/rbvtp/*.cc simulations/vanet/rbvtr/*.cc simulations/vanet/tora/*.cc simulations/vanet/vdd/*.cc simulations/vanet/vdtp/*.cc src/*.cc src/manet/*.cc src/protocols/*.cc src/protocols/manet/*.cc src/protocols/manet/gpsr/*.cc src/protocols/vanet/*.cc src/protocols/vanet/aodvvanet/*.cc src/protocols/vanet/rbvtp/*.cc src/protocols/vanet/rbvtr/*.cc src/protocols/vanet/vdtp/*.cc src/vanet/*.cc src/vanet/aodvvanet/*.cc src/vanet/bittorrent/*.cc src/vanet/rbvtp/*.cc src/vanet/rbvtr/*.cc src/vanet/vdtp/*.cc test/*.cc test/AODV/*.cc test/AODV/results/*.cc test/Traci/*.cc test/Traci/results/*.cc

# DO NOT DELETE THIS LINE -- make depend depends on it.

