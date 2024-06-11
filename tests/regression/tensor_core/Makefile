PROJECT = tensor_core_gemm

SRCS = main.cpp

ifdef stress
VX_SRCS = stress_test.cpp
else
VX_SRCS = kernel.cpp
endif

OPTS ?= -n16

include ../common.mk
