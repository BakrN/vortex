# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VVortex.mk for the caller.

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
	VVortex \
	VVortex___024root__DepSet_h1c673058__0 \
	VVortex___024root__DepSet_hc3f83dbf__0 \
	VVortex_Vortex__DepSet_h1e5b6752__0 \
	VVortex_Vortex__DepSet_h1e5b6752__1 \
	VVortex_Vortex__DepSet_h1e5b6752__2 \
	VVortex_Vortex__DepSet_h1e5b6752__3 \
	VVortex_Vortex__DepSet_h1e5b6752__4 \
	VVortex_Vortex__DepSet_h1e5b6752__5 \
	VVortex___024unit__DepSet_h5c1e1864__0 \
	VVortex_VX_smem_switch__pi17__DepSet_h5925f938__0 \
	VVortex_VX_dispatch_unit__pi26__DepSet_hc7f4d757__0 \
	VVortex_VX_dispatch_unit__pi26__DepSet_he12e531e__0 \
	VVortex_VX_muldiv_unit__pi27__DepSet_hf8274348__0 \
	VVortex_VX_fpu_dpi__N2_T2_O1__DepSet_h4385a2ee__0 \
	VVortex_VX_fpu_dpi__N2_T2_O1__DepSet_h4385a2ee__1 \
	VVortex_VX_fpu_dpi__N2_T2_O1__DepSet_h4385a2ee__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VVortex__ConstPool_0 \
	VVortex___024root__Slow \
	VVortex___024root__DepSet_h1c673058__0__Slow \
	VVortex___024root__DepSet_hc3f83dbf__0__Slow \
	VVortex_Vortex__Slow \
	VVortex_Vortex__DepSet_h20faed58__0__Slow \
	VVortex_Vortex__DepSet_h1e5b6752__0__Slow \
	VVortex_Vortex__DepSet_h1e5b6752__1__Slow \
	VVortex_Vortex__DepSet_h1e5b6752__2__Slow \
	VVortex_Vortex__DepSet_h1e5b6752__3__Slow \
	VVortex___024unit__Slow \
	VVortex___024unit__DepSet_h83f155a3__0__Slow \
	VVortex_VX_schedule_if__Slow \
	VVortex_VX_schedule_if__DepSet_h21f00a0b__0__Slow \
	VVortex_VX_fetch_if__Slow \
	VVortex_VX_fetch_if__DepSet_h9a44b6fb__0__Slow \
	VVortex_VX_smem_switch__pi17__Slow \
	VVortex_VX_smem_switch__pi17__DepSet_ha367070f__0__Slow \
	VVortex_VX_smem_switch__pi17__DepSet_h5925f938__0__Slow \
	VVortex_VX_decode_if__Slow \
	VVortex_VX_decode_if__DepSet_he272fd78__0__Slow \
	VVortex_VX_writeback_if__Slow \
	VVortex_VX_writeback_if__DepSet_h9b79735c__0__Slow \
	VVortex_VX_ibuffer_if__Slow \
	VVortex_VX_ibuffer_if__DepSet_h283232f8__0__Slow \
	VVortex_VX_operands_if__Slow \
	VVortex_VX_operands_if__DepSet_h5596ade6__0__Slow \
	VVortex_VX_mem_bus_if__D40_Ta__Slow \
	VVortex_VX_mem_bus_if__D40_Ta__DepSet_hc9260977__0__Slow \
	VVortex_VX_mem_bus_if__D40_T5__Slow \
	VVortex_VX_mem_bus_if__D40_T5__DepSet_h6e1e099e__0__Slow \
	VVortex_VX_mem_bus_if__D40_T9__Slow \
	VVortex_VX_mem_bus_if__D40_T9__DepSet_h88f7581b__0__Slow \
	VVortex_VX_mem_bus_if__D4_T4__Slow \
	VVortex_VX_mem_bus_if__D4_T4__DepSet_hc60bbbe6__0__Slow \
	VVortex_VX_mem_bus_if__D4_T3__Slow \
	VVortex_VX_mem_bus_if__D4_T3__DepSet_h160029bf__0__Slow \
	VVortex_VX_mem_bus_if__D4_T2__Slow \
	VVortex_VX_mem_bus_if__D4_T2__DepSet_hb990928b__0__Slow \
	VVortex_VX_mem_bus_if__D40_T6__Slow \
	VVortex_VX_mem_bus_if__D40_T6__DepSet_hf5f2f98a__0__Slow \
	VVortex_VX_dispatch_unit__pi26__Slow \
	VVortex_VX_dispatch_unit__pi26__DepSet_hc7f4d757__0__Slow \
	VVortex_VX_dispatch_unit__pi26__DepSet_he12e531e__0__Slow \
	VVortex_VX_muldiv_unit__pi27__Slow \
	VVortex_VX_muldiv_unit__pi27__DepSet_h895deee5__0__Slow \
	VVortex_VX_muldiv_unit__pi27__DepSet_hf8274348__0__Slow \
	VVortex_VX_fpu_dpi__N2_T2_O1__Slow \
	VVortex_VX_fpu_dpi__N2_T2_O1__DepSet_h8ec7a27d__0__Slow \
	VVortex_VX_fpu_dpi__N2_T2_O1__DepSet_h4385a2ee__0__Slow \
	VVortex_VX_fpu_dpi__N2_T2_O1__DepSet_h4385a2ee__1__Slow \
	VVortex_VX_warp_ctl_if__Slow \
	VVortex_VX_warp_ctl_if__DepSet_hdd229499__0__Slow \
	VVortex_VX_commit_if__Slow \
	VVortex_VX_commit_if__DepSet_h515c5650__0__Slow \
	VVortex_VX_execute_if__N2__Slow \
	VVortex_VX_execute_if__N2__DepSet_h02d70bad__0__Slow \
	VVortex_VX_commit_if__N2__Slow \
	VVortex_VX_commit_if__N2__DepSet_he8c1ac60__0__Slow \
	VVortex_VX_execute_if__N4__Slow \
	VVortex_VX_execute_if__N4__DepSet_hd0e0828a__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VVortex__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VVortex__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
