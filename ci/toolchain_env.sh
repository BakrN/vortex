#!/bin/sh

# Copyright 2023 blaise
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#     http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

TOOLDIR=${TOOLDIR:=/opt}

export RISCV_TOOLCHAIN_PATH=$TOOLDIR/riscv-gnu-toolchain
export LLVM_POCL=$TOOLDIR/llvm-pocl
export LLVM_VORTEX=$TOOLDIR/llvm-vortex
export VERILATOR_ROOT=$TOOLDIR/verilator
export PATH=$VERILATOR_ROOT/bin:$PATH
export SV2V_PATH=$TOOLDIR/sv2v
export PATH=$SV2V_PATH/bin:$PATH
export YOSYS_PATH=$TOOLDIR/yosys
export PATH=$YOSYS_PATH/bin:$PATH
export POCL_CC_PATH=$TOOLDIR/pocl/compiler
export POCL_RT_PATH=$TOOLDIR/pocl/runtime
