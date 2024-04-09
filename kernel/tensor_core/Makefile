# just kernel running (without setup from host)

XLEN ?= 32


ifeq ($(XLEN),64)
RISCV_TOOLCHAIN_PATH ?= /opt/riscv64-gnu-toolchain
CFLAGS += -march=rv64imafd -mabi=lp64d
else
RISCV_TOOLCHAIN_PATH ?= /opt/riscv-gnu-toolchain
CFLAGS += -march=rv32imaf -mabi=ilp32f
endif

RISCV_PREFIX ?= riscv$(XLEN)-unknown-elf

VORTEX_KN_PATH ?= $(realpath ../)

CC = $(RISCV_TOOLCHAIN_PATH)/bin/$(RISCV_PREFIX)-g++
AR = $(RISCV_TOOLCHAIN_PATH)/bin/$(RISCV_PREFIX)-g++-ar
DP = $(RISCV_TOOLCHAIN_PATH)/bin/$(RISCV_PREFIX)-objdump
CP = $(RISCV_TOOLCHAIN_PATH)/bin/$(RISCV_PREFIX)-objcopy

SIM_DIR = ../../sim

CFLAGS += -O3 -mcmodel=medany -fno-exceptions -nostartfiles -fdata-sections -ffunction-sections -std=c++17
CFLAGS += -I$(VORTEX_KN_PATH)/include -I$(VORTEX_KN_PATH)/../hw
EXTFLAGS=""

LDFLAGS += -lm -Wl,-Bstatic,--gc-sections,-T,$(VORTEX_KN_PATH)/linker/vx_link$(XLEN).ld,--defsym=STARTUP_ADDR=0x80000000 $(VORTEX_KN_PATH)/libvortexrt.a

PROJECT = GEMM

VXSRCS = kernel.cpp # mat_kernel.cpp # kernel.cpp

SRCS = main.cpp




all: $(PROJECT).elf $(PROJECT).bin $(PROJECT).dump $(PROJECT).s



$(PROJECT).dump: $(PROJECT).elf
	$(DP) -D $(PROJECT).elf > $(PROJECT).dump

$(PROJECT).bin: $(PROJECT).elf
	$(CP) -O binary $(PROJECT).elf $(PROJECT).bin

$(PROJECT).elf: $(VXSRCS)
	$(CC) $(CFLAGS) $(EXTFLAGS) $(VXSRCS) $(LDFLAGS) -o $(PROJECT).elf

run-rtlsim: $(PROJECT).bin
	$(SIM_DIR)/rtlsim/rtlsim $(PROJECT).bin

run-simx: $(PROJECT).bin
	gdb --args $(SIM_DIR)/simx/simx  $(PROJECT).bin -c 1 -w 1 -t 4
out-asm:
	$(CC) $(CFLAGS) $(VXSRCS) $(LDFLAGS) -S -o $(PROJECT).s

.depend: $(VXSRCS)
	$(CC) $(CFLAGS) -MM $^ > .depend;

clean:
	rm -rf *.elf *.bin *.dump .depend
