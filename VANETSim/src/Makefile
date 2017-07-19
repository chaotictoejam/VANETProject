#
# OMNeT++/OMNEST Makefile for $(LIB_PREFIX)VANETSim
#
# This file was generated with the command:
#  opp_makemake --make-so -f --deep -O out -KINET_PROJ=F:/Dev/GitHub/inet -KVEINS_PROJ=F:/Dev/GitHub/veins -DWITH_INETVEINS_TCP_COMMON -DWITH_INETVEINS_TCP_INET -DWITH_INETVEINS_IPv4 -DWITH_INETVEINS_IPv6 -DWITH_INETVEINS_GENERIC -DWITH_INETVEINS_FLOOD -DWITH_INETVEINS_UDP -DWITH_INETVEINS_RTP -DWITH_INETVEINS_SCTP -DWITH_INETVEINS_DHCP -DWITH_INETVEINS_ETHERNET -DWITH_INETVEINS_PPP -DWITH_INETVEINS_MPLS -DWITH_INETVEINS_OSPFv2 -DWITH_INETVEINS_BGPv4 -DWITH_INETVEINS_PIM -DWITH_INETVEINS_AODV -DWITH_INETVEINS_RIP -DWITH_INETVEINS_POWER -DWITH_INETVEINS_RADIO -DWITH_INETVEINS_IEEE80211 -DWITH_INETVEINS_IEEE802154 -DWITH_INETVEINS_APSKRADIO -DWITH_INETVEINS_IDEALWIRELESS -DWITH_INETVEINS_TUN -DWITH_INETVEINS_BMAC -DWITH_INETVEINS_LMAC -DWITH_INETVEINS_CSMA -DWITH_INETVEINS_XMAC -DWITH_INETVEINS_80211MESH -DWITH_INETVEINS_xMIPv6 -DWITH_INETVEINS_TRACI -DWITH_INETVEINS_PACKETDRILL -DWITH_INETVEINS_MANET -DINET_IMPORT -I. -I$$\(INET_PROJ\)/src -I. -I$$\(VEINS_PROJ\)/src -I. -L$$\(INET_PROJ\)/out/$$\(CONFIGNAME\)/src -L$$\(VEINS_PROJ\)/out/$$\(CONFIGNAME\)/src -lINET -lveins
#

# Name of target to be created (-o option)
TARGET = $(LIB_PREFIX)VANETSim$(SHARED_LIB_SUFFIX)

# C++ include paths (with -I)
INCLUDE_PATH = -I. -I$(INET_PROJ)/src -I. -I$(VEINS_PROJ)/src -I.

# Additional object and library files to link with
EXTRA_OBJS =

# Additional libraries (-L, -l options)
LIBS = $(LDFLAG_LIBPATH)$(INET_PROJ)/out/$(CONFIGNAME)/src $(LDFLAG_LIBPATH)$(VEINS_PROJ)/out/$(CONFIGNAME)/src  -lINET -lveins

# Output directory
PROJECT_OUTPUT_DIR = ../out
PROJECTRELATIVE_PATH = src
O = $(PROJECT_OUTPUT_DIR)/$(CONFIGNAME)/$(PROJECTRELATIVE_PATH)

# Object files for local .cc, .msg and .sm files
OBJS = \
    $O/vanetsim/networklayer/contract/IVANETRoute.o \
    $O/vanetsim/routing/aodvwr/AODVWRRouteData.o \
    $O/vanetsim/routing/aodvwr/AODVWRRouting.o \
    $O/vanetsim/routing/geoadv/GEOADV.o \
    $O/vanetsim/routing/geoadv/GEOADV_PositionTable.o \
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
    $O/veins_inet/VeinsInetManager.o \
    $O/veins_inet/VeinsInetMobility.o \
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
INET_PROJ=F:/Dev/GitHub/inet
VEINS_PROJ=F:/Dev/GitHub/veins

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
OMNETPP_LIBS = -loppenvir$D $(KERNEL_LIBS) $(SYS_LIBS)
ifneq ($(TOOLCHAIN_NAME),clangc2)
LIBS += -Wl,-rpath,$(abspath $(INET_PROJ)/out/$(CONFIGNAME)/src) -Wl,-rpath,$(abspath $(VEINS_PROJ)/out/$(CONFIGNAME)/src)
endif

COPTS = $(CFLAGS) $(IMPORT_DEFINES) \
    -DWITH_INETVEINS_TCP_COMMON \
    -DWITH_INETVEINS_TCP_INET \
    -DWITH_INETVEINS_IPv4 \
    -DWITH_INETVEINS_IPv6 \
    -DWITH_INETVEINS_GENERIC \
    -DWITH_INETVEINS_FLOOD \
    -DWITH_INETVEINS_UDP \
    -DWITH_INETVEINS_RTP \
    -DWITH_INETVEINS_SCTP \
    -DWITH_INETVEINS_DHCP \
    -DWITH_INETVEINS_ETHERNET \
    -DWITH_INETVEINS_PPP \
    -DWITH_INETVEINS_MPLS \
    -DWITH_INETVEINS_OSPFv2 \
    -DWITH_INETVEINS_BGPv4 \
    -DWITH_INETVEINS_PIM \
    -DWITH_INETVEINS_AODV \
    -DWITH_INETVEINS_RIP \
    -DWITH_INETVEINS_POWER \
    -DWITH_INETVEINS_RADIO \
    -DWITH_INETVEINS_IEEE80211 \
    -DWITH_INETVEINS_IEEE802154 \
    -DWITH_INETVEINS_APSKRADIO \
    -DWITH_INETVEINS_IDEALWIRELESS \
    -DWITH_INETVEINS_TUN \
    -DWITH_INETVEINS_BMAC \
    -DWITH_INETVEINS_LMAC \
    -DWITH_INETVEINS_CSMA \
    -DWITH_INETVEINS_XMAC \
    -DWITH_INETVEINS_80211MESH \
    -DWITH_INETVEINS_xMIPv6 \
    -DWITH_INETVEINS_TRACI \
    -DWITH_INETVEINS_PACKETDRILL \
    -DWITH_INETVEINS_MANET \
    -DINET_IMPORT $(INCLUDE_PATH) -I$(OMNETPP_INCL_DIR)
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

# <<<
#------------------------------------------------------------------------------

# Main target
all: $O/$(TARGET)
	$(Q)$(LN) $O/$(TARGET) .

$O/$(TARGET): $(OBJS)  $(wildcard $(EXTRA_OBJS)) Makefile $(CONFIGFILE)
	@$(MKPATH) $O
	@echo Creating shared library: $@
	$(Q)$(SHLIB_LD) -o $O/$(TARGET) $(OBJS) $(EXTRA_OBJS) $(AS_NEEDED_OFF) $(WHOLE_ARCHIVE_ON) $(LIBS) $(WHOLE_ARCHIVE_OFF) $(OMNETPP_LIBS) $(LDFLAGS)
	$(Q)$(SHLIB_POSTPROCESS) $O/$(TARGET)

.PHONY: all clean cleanall depend msgheaders smheaders

.SUFFIXES: .cc

$O/%.o: %.cc $(COPTS_FILE) | msgheaders smheaders
	@$(MKPATH) $(dir $@)
	$(qecho) "$<"
	$(Q)$(CXX) -c $(CXXFLAGS) $(COPTS) -o $@ $<

%_m.cc %_m.h: %.msg
	$(qecho) MSGC: $<
	$(Q)$(MSGC) -s _m.cc $(MSGCOPTS) $?

%_sm.cc %_sm.h: %.sm
	$(qecho) SMC: $<
	$(Q)$(SMC) -c++ -suffix cc $(SMCOPTS) $?

msgheaders: $(MSGFILES:.msg=_m.h)

smheaders: $(SMFILES:.sm=_sm.h)

clean:
	$(qecho) Cleaning...
	$(Q)-rm -rf $O
	$(Q)-rm -f $(TARGET)
	$(Q)-rm -f $(call opp_rwildcard, . , *_m.cc *_m.h *_sm.cc *_sm.h)

cleanall: clean
	$(Q)-rm -rf $(PROJECT_OUTPUT_DIR)

# include all dependencies
-include $(OBJS:%.o=%.d)
