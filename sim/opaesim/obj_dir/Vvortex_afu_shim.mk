# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vvortex_afu_shim.mk

default: ../../../runtime/opae/libopae-c-sim.so

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /opt/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vvortex_afu_shim
# Module prefix (from --prefix)
VM_MODPREFIX = Vvortex_afu_shim
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-std=c++11 -Wall -Wextra -Wfatal-errors -Wno-array-bounds -fPIC -Wno-maybe-uninitialized -I.. -I../../../hw -I../../common -I/home/projects/vortex/runtime/opae -I../../../third_party/softfloat/source/include -I../../../third_party -DXLEN_32 -DPLATFORM_PROVIDES_LOCAL_MEMORY -DPLATFORM_PARAM_LOCAL_MEMORY_BANKS=2 -DPLATFORM_PARAM_LOCAL_MEMORY_ADDR_WIDTH=26 -DPLATFORM_PARAM_LOCAL_MEMORY_DATA_WIDTH=512 -DPLATFORM_PARAM_LOCAL_MEMORY_BURST_CNT_WIDTH=4 -O3 -DNDEBUG -DNOPAE \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-shared ../../../third_party/softfloat/build/Linux-x86_64-GCC/softfloat.a -L../../../third_party/ramulator -lramulator -pthread \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	float_dpi \
	util_dpi \
	mem \
	rvfloats \
	util \
	fpga \
	opae_sim \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	. \
	../../hw/dpi \
	../common \


### Default rules...
# Include list of all generated classes
include Vvortex_afu_shim_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

float_dpi.o: ../../hw/dpi/float_dpi.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
util_dpi.o: ../../hw/dpi/util_dpi.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mem.o: ../common/mem.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
rvfloats.o: ../common/rvfloats.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
util.o: ../common/util.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
fpga.o: fpga.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
opae_sim.o: opae_sim.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
../../../runtime/opae/libopae-c-sim.so: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
