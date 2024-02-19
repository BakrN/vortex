# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vvortex_afu_shim.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vvortex_afu_shim \
	Vvortex_afu_shim___024root__DepSet_h9827e285__0 \
	Vvortex_afu_shim___024root__DepSet_hbfdf255d__0 \
	Vvortex_afu_shim_vortex_afu_shim__DepSet_h54e24a70__0 \
	Vvortex_afu_shim___024unit__DepSet_h64c7c04d__0 \
	Vvortex_afu_shim_vortex_afu__DepSet_h288f4d3c__0 \
	Vvortex_afu_shim_vortex_afu__DepSet_h288f4d3c__1 \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__0 \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__1 \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__2 \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__3 \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__4 \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__5 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vvortex_afu_shim__ConstPool_0 \
	Vvortex_afu_shim___024root__Slow \
	Vvortex_afu_shim___024root__DepSet_h9827e285__0__Slow \
	Vvortex_afu_shim___024root__DepSet_hbfdf255d__0__Slow \
	Vvortex_afu_shim_vortex_afu_shim__Slow \
	Vvortex_afu_shim_vortex_afu_shim__DepSet_h54e24a70__0__Slow \
	Vvortex_afu_shim_vortex_afu_shim__DepSet_hf3247dc8__0__Slow \
	Vvortex_afu_shim___024unit__Slow \
	Vvortex_afu_shim___024unit__DepSet_h233f0395__0__Slow \
	Vvortex_afu_shim_vortex_afu__Slow \
	Vvortex_afu_shim_vortex_afu__DepSet_h288f4d3c__0__Slow \
	Vvortex_afu_shim_vortex_afu__DepSet_h6f877704__0__Slow \
	Vvortex_afu_shim_Vortex__Slow \
	Vvortex_afu_shim_Vortex__DepSet_h732c025a__0__Slow \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__0__Slow \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__1__Slow \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__2__Slow \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__3__Slow \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__4__Slow \
	Vvortex_afu_shim_Vortex__DepSet_h4c9f36ba__5__Slow \
	Vvortex_afu_shim_VX_schedule_if__Slow \
	Vvortex_afu_shim_VX_schedule_if__DepSet_h81d49551__0__Slow \
	Vvortex_afu_shim_VX_fetch_if__Slow \
	Vvortex_afu_shim_VX_fetch_if__DepSet_h9504b005__0__Slow \
	Vvortex_afu_shim_VX_decode_if__Slow \
	Vvortex_afu_shim_VX_decode_if__DepSet_ha466624f__0__Slow \
	Vvortex_afu_shim_VX_writeback_if__Slow \
	Vvortex_afu_shim_VX_writeback_if__DepSet_hda4c4b46__0__Slow \
	Vvortex_afu_shim_VX_ibuffer_if__Slow \
	Vvortex_afu_shim_VX_ibuffer_if__DepSet_h233a42e3__0__Slow \
	Vvortex_afu_shim_VX_operands_if__Slow \
	Vvortex_afu_shim_VX_operands_if__DepSet_hb87dbdd3__0__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2a__DepSet_h1ce070c2__0__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2b__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_A1a_T2b__DepSet_he16449ec__0__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_Ta__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_Ta__DepSet_h606dac4e__0__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_T5__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_T5__DepSet_hc0d49794__0__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_T9__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_T9__DepSet_he2d8eca3__0__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D4_T3__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D4_T3__DepSet_hce8f7e1f__0__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D4_T4__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D4_T4__DepSet_hae14ba22__0__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D4_T2__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D4_T2__DepSet_h4daa68ab__0__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_T6__Slow \
	Vvortex_afu_shim_VX_mem_bus_if__D40_T6__DepSet_h772d4bad__0__Slow \
	Vvortex_afu_shim_VX_warp_ctl_if__Slow \
	Vvortex_afu_shim_VX_warp_ctl_if__DepSet_h21ca1298__0__Slow \
	Vvortex_afu_shim_VX_commit_if__Slow \
	Vvortex_afu_shim_VX_commit_if__DepSet_hba561223__0__Slow \
	Vvortex_afu_shim_VX_execute_if__N2__Slow \
	Vvortex_afu_shim_VX_execute_if__N2__DepSet_h846cb475__0__Slow \
	Vvortex_afu_shim_VX_commit_if__N2__Slow \
	Vvortex_afu_shim_VX_commit_if__N2__DepSet_h8cd7073a__0__Slow \
	Vvortex_afu_shim_VX_execute_if__N4__Slow \
	Vvortex_afu_shim_VX_execute_if__N4__DepSet_h2234bc03__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vvortex_afu_shim__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vvortex_afu_shim__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
