#
# OMNeT++/OMNEST Makefile for VANETSim
#
# This file was generated with the command:
#  opp_makemake -f --deep -O out -KINET_PROJ=../../inet -KVEINS_PROJ=../../veins-veins-5.0 -DINET_IMPORT -DVEINS_IMPORT -I. -I$$\(INET_PROJ\)/src -I$$\(VEINS_PROJ\)/src -I. -L$$\(INET_PROJ\)/src -L$$\(VEINS_PROJ\)/src -lINET$$\(D\) -lveins$$\(D\)
#

# Name of target to be created (-o option)
TARGET = VANETSim$(D)$(EXE_SUFFIX)
TARGET_DIR = .

# User interface (uncomment one) (-u option)
USERIF_LIBS = $(ALL_ENV_LIBS) # that is, $(TKENV_LIBS) $(QTENV_LIBS) $(CMDENV_LIBS)
#USERIF_LIBS = $(CMDENV_LIBS)
#USERIF_LIBS = $(TKENV_LIBS)
#USERIF_LIBS = $(QTENV_LIBS)

# C++ include paths (with -I)
INCLUDE_PATH = -I. -I$(INET_PROJ)/src -I$(VEINS_PROJ)/src -I.

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = $(LDFLAG_LIBPATH)$(INET_PROJ)/src $(LDFLAG_LIBPATH)$(VEINS_PROJ)/src  -lINET$(D) -lveins$(D)

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc, .msg and .sm files
OBJS = \
    $O/vanetsim/networklayer/contract/IVANETRoute.o \
    $O/vanetsim/routing/aodvwr/AODVWR.o \
    $O/vanetsim/routing/aodvwr/AODVWRRouteData.o \
    $O/vanetsim/routing/geoadv/GEOADV.o \
    $O/vanetsim/routing/geoadv/GEOADVPositionTable.o \
    $O/vanetsim/routing/geoadvflq/GEOADVFLQ.o \
    $O/vanetsim/routing/geoadvflq/GEOADVFLQPositionTable.o \
    $O/vanetsim/routing/geoadvp/GEOADVP.o \
    $O/vanetsim/routing/geoadvp/GEOADVP_PositionTable.o \
    $O/vanetsim/routing/geoadvpf/GEOADVPF.o \
    $O/vanetsim/routing/geoadvpf/GEOADVPF_PositionTable.o \
    $O/vanetsim/routing/gpsrflq/GPSRFLQ.o \
    $O/vanetsim/routing/gpsrflq/GPSRFLQPositionTable.o \
    $O/vanetsim/routing/gpsrwr/GPSRWR.o \
    $O/vanetsim/routing/gpsrwr/GPSRWRPositionTable.o \
    $O/vanetsim/routing/aodvwr/AODVWRControlPackets_m.o \
    $O/vanetsim/routing/geoadv/GEOADV_m.o \
    $O/vanetsim/routing/geoadvflq/GEOADVFLQ_m.o \
    $O/vanetsim/routing/geoadvp/GEOADVP_m.o \
    $O/vanetsim/routing/geoadvpf/GEOADVPF_m.o \
    $O/vanetsim/routing/gpsrflq/GPSRFLQ_m.o \
    $O/vanetsim/routing/gpsrwr/GPSRWR_m.o

# Message files
MSGFILES = \
    vanetsim/routing/aodvwr/AODVWRControlPackets.msg \
    vanetsim/routing/geoadv/GEOADV.msg \
    vanetsim/routing/geoadvflq/GEOADVFLQ.msg \
    vanetsim/routing/geoadvp/GEOADVP.msg \
    vanetsim/routing/geoadvpf/GEOADVPF.msg \
    vanetsim/routing/gpsrflq/GPSRFLQ.msg \
    vanetsim/routing/gpsrwr/GPSRWR.msg

# SM files
SMFILES =

# Other makefile variables (-K)
INET_PROJ=../../inet
VEINS_PROJ=../../veins-veins-5.0

#------------------------------------------------------------------------------

# Pull in OMNeT++ configuration (Makefile.inc)

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
OMNETPP_LIBS = $(OPPMAIN_LIB) $(USERIF_LIBS) $(KERNEL_LIBS) $(SYS_LIBS)
ifneq ($(TOOLCHAIN_NAME),clangc2)
LIBS += -Wl,-rpath,$(abspath $(INET_PROJ)/src) -Wl,-rpath,$(abspath $(VEINS_PROJ)/src)
endif

COPTS = $(CFLAGS) $(IMPORT_DEFINES) -DINET_IMPORT -DVEINS_IMPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
MSGCOPTS = $(INCLUDE_PATH)
SMCOPTS =

# we want to recompile everything if COPTS changes,
# so we store COPTS into $COPTS_FILE and have object
# files depend on it (except when "make depend" was called)
COPTS_FILE = $O/.last-copts
ifneq ("$(COPTS)","$(shell cat $(COPTS_FILE) 2>/dev/null || echo '')")
$(shell $(MKPATH) "$O" && echo "$(COPTS)" >$(COPTS_FILE))
endif

#------------------------------------------------------------------------------
# User-supplied makefile fragment(s)
# >>>
# inserted from file 'makefrag':
#
# on windows we have to link with the ws2_32 (winsock2) library as it is no longer added
# to the omnetpp system libraries by default (as of OMNeT++ 5.1)
#
ifeq ($(PLATFORM),win32.x86_64)
  LIBS += -lws2_32
  DEFINES += -DINET_EXPORT
  ENABLE_AUTO_IMPORT=-Wl,--enable-auto-import
  LDFLAGS := $(filter-out $(ENABLE_AUTO_IMPORT), $(LDFLAGS))
endif
MSGC:=$(MSGC) --msg6

# <<<
#------------------------------------------------------------------------------

# Main target
all: $(TARGET_DIR)/$(TARGET)

$(TARGET_DIR)/% :: $O/%
	@mkdir -p $(TARGET_DIR)
	$(Q)$(LN) $< $@
ifeq ($(TOOLCHAIN_NAME),clangc2)
	$(Q)-$(LN) $(<:%.dll=%.lib) $(@:%.dll=%.lib)
endif

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile $(CONFIGFILE)
	@$(MKPATH) $O
	@echo Creating executable: $@
	$(Q)$(CXX) $(LDFLAGS) -o $O/$(TARGET) $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS)

.PHONY: all clean cleanall depend msgheaders smheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE) | msgheaders smheaders
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc -MD -MP -MF $O/$(basename $<)_m.h.d $(MSGCOPTS) $?

%_sm.cc %_sm.h: %.sm
	$(qecho) SMC: $<
	$(Q)$(SMC) -c++ -suffix cc $(SMCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

smheaders: $(SMFILES:.sm=_sm.h)

clean:
	$(qecho) Cleaning $(TARGET)
	$(Q)-rm -rf $O
	$(Q)-rm -f $(TARGET_DIR)/$(TARGET)
	$(Q)-rm -f $(TARGET_DIR)/$(TARGET:%.dll=%.lib)
	$(Q)-rm -f $(call opp_rwildcard, . , *_m.cc *_m.h *_sm.cc *_sm.h)

cleanall:
	$(Q)$(MAKE) -s clean MODE=release
	$(Q)$(MAKE) -s clean MODE=debug
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

# include all dependencies
-include $(OBJS:%=%.d) $(MSGFILES:%.msg=$O/%_m.h.d)