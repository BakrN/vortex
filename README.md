[![Build Status](https://travis-ci.com/vortexgpgpu/vortex.svg?branch=master)](https://travis-ci.com/vortexgpgpu/vortex)
[![codecov](https://codecov.io/gh/vortexgpgpu/vortex/branch/master/graph/badge.svg)](https://codecov.io/gh/vortexgpgpu/vortex)


## Setting Up the Vortex Platform using Docker

To run the experiments, you need to set up the Vortex platform. Please refer to the instructions after this section on how to set up the platform if you're **NOT** going to use docker. Alternatively, you can build and use the Vortex Docker image by following these instructions:

After cloning this repository, you can build the Vortex Docker image by running the following command:

```
cd vortex
./tools/docker/build_image.sh
```

Note that you should start from a clean cloned repository to avoid any issues with the build process. Be sure to include the `--recursive` flag when cloning. After the image is built, you can run the Vortex Docker container by executing the following command:

```
./tools/docker/run_container.sh
```

The Vortex repository will be mounted in the `/vortex` directory of the container. At this point, you can proceed to the `tests/regression/tensor_core` directory for further information on setting up running experiments using the tensor core. 


# Vortex GPGPU

Vortex is a full-stack open-source RISC-V GPGPU.

## Specifications

- Support RISC-V RV32IMAF and RV64IMAFD
- Microarchitecture:
    - configurable number of cores, warps, and threads.
    - configurable number of ALU, FPU, LSU, and SFU units per core.
    - configurable pipeline issue width.
    - optional shared memory, L1, L2, and L3 caches.
- Software: 
    - OpenCL 1.2 Support.
- Supported FPGAs: 
    - Altera Arria 10
    - Altera Stratix 10
    - Xilinx Alveo U50, U250, U280
    - Xilinx Versal VCK5000

## Directory structure

- `doc`: [Documentation](docs/index.md).
- `hw`: Hardware sources.
- `driver`: Host drivers repository.
- `runtime`: Kernel Runtime software.
- `sim`: Simulators repository.
- `tests`: Tests repository.
- `ci`: Continuous integration scripts.
- `miscs`: Miscellaneous resources.

## Build Instructions
### Supported OS Platforms
- Ubuntu (18/20/22).04
- Centos 7

Important note if you're using Ubuntu 18.04 or Centos7:  you must modify the `ci/toolchain_install.sh` and replace the all `focal` word instance with `bionic` or `centos/7`, respectively. 

### Toolchain Dependencies
- [POCL](http://portablecl.org/)
- [LLVM](https://llvm.org/)
- [RISCV-GNU-TOOLCHAIN](https://github.com/riscv-collab/riscv-gnu-toolchain)
- [Verilator](https://www.veripool.org/verilator)
- [FpNew](https://github.com/pulp-platform/fpnew.git)
- [SoftFloat](https://github.com/ucb-bar/berkeley-softfloat-3.git)
- [Ramulator](https://github.com/CMU-SAFARI/ramulator.git)
- [Yosys](https://github.com/YosysHQ/yosys)
- [Sv2v](https://github.com/zachjs/sv2v)
### Install development tools 
    $ sudo apt-get install build-essential
    $ sudo apt-get install git
### Install Vortex codebase
    $ git clone --recursive https://github.com/vortexgpgpu/vortex.git
    $ cd Vortex
### Install prebuilt toolchain
    By default, the toolchain will install to /opt folder. 
    You can install the toolchain to a different directory by overriding TOOLDIR (e.g. export TOOLDIR=$HOME/tools).
    
    $ ./ci/toolchain_install.sh --all
    $ source ./ci/toolchain_env.sh
### Build Vortex sources
    $ make -s
### Quick demo running vecadd OpenCL kernel on 2 cores
    $ ./ci/blackbox.sh --cores=2 --app=vecadd
