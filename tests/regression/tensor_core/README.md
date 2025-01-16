## Folder Structure

The repository contains the following files and directories:

```
Makefile
README.md
base/                   # Contains primitives for the tensor core programming model
build_experiment.sh     # Script for setting up and running experiments
common.h
cooperative_kernel.cpp  # Implementation for a GEMM kernel using cooperative warp execution in tensor core mode
experiments.zip     # archive with experiments data
helper.hpp
kernel.cpp              # Implementation for a GEMM kernel using normal tensor core execution mode
main.cpp
plot.py                 # Script for generating plots
reproduce.py            # Script for reproducing / rerunning an experiment of a specific config
py/                     # Contains configuration and utility scripts
```

# Experiment Validation: Setup and Workflow



## Running Experiments

The `build_experiment.sh` script in this directory is a bash script for running experiments. You can configure experiments by providing the `py/config.json` file as input to `py/config.py`. Alternatively, you can directly modify the `config.py` file or run experiments independently, but in such cases, ensure the necessary definitions are generated accordingly.


Some additional definitions are required when recreating the experiment, which are not included in the current workflow. These modifications are to be made in the `(VX_DIR)/hw/VX_config.h` file:
- `SMEM_LOG_SIZE` is set to `23` to ensure matrices fit within shared memory. This change is mandatory if preloading matrices into shared memory.
- `LATENCY_IMUL` is set to `1` or `2`. A lower latency here can cover for the compiler's inability to detect tensor core (MMA) instruction types, preventing it from interleaving these with address calculations, and to match ASIC target if needed. While this setting is useful in some cases, it can have no impact in others.

Once these changes are made, the user must go into the `kernel` folder in the main vortex directory and rebuild the files:
```
make clean
make
```

To start running the experiments, please try executing the command: `./build_experiment.sh` at least once, to generate the binaries for the matrices: A, B and D.


### Tensor Core Execution Modes
Two modes of Tensor Core execution are discussed in the paper:
1. **Normal Mode**: Modify the `Makefile` to use the `kernel.cpp` file.
2. **Cooperative Warp Execution in Tensor Core Mode**: Modify the `Makefile` to use the `cooperative_kernel.cpp` file.



## Experiment Data

All experiment data, including the results used to generate plots in the paper, can be found in the `experiments.zip` file. This archive contains folders named after the corresponding figure numbers in the paper.

### Folder Contents
Each figure's folder contains subdirectories named according to experiment configurations:
- **Examples**:
  - `th16`: Configurations with 16 threads ($NT$).
  - `wg2`: Configurations with work group sizes of 2 ($WG$).
  - `du4`: Configurations with dot product length of 4 ($DP_{len}$).
  - `reg64`: Tile buffer size of 64 registers per thread ($R_{MMA}$).

In addition, each folder contains a `combined_info.csv` file. This file consolidates all experiment results in an organized format and was used to generate the plots in the paper. The script used to create this file is included as `combine.py` which is also included in each of the figure directories.

### Subdirectory Files
Within each experiment subdirectory, you will find the following files:
- **`kernel.s`**: Built assembly kernel tailored to the system and problem configuration.
- **`defines.txt`**: Generated build definitions based on the configuration. To recreate an experiment, this along with the assembly file are the only two inputs you need.
- **`out.log`**: Output log from the simulation, containing overall information such as the number of cycles.
- **`statistic.txt`**: Trace of collected statistics during the run (e.g., tensor core activity such as `mac_fire`).

## Validation / Reproduction
To reproduce an experiment, as mentioned previously, you only need the definitions file and the kernel. You can use the `reproduce.py` script to automate the reproduction of experiments. For example, to reproduce results of figure 8 in paper, you can run the following while replacing the values within {} with the correct paths:

```
python reproduce.py --source_dir {UNZIPPED_EXPERIMENT_DIR_HERE}/fig8 --output_dir {OUTPUT_DIR}/fig8
```

Reproducing Figures 15–16 requires manual runs and modifications to `py/config.json` and executing `./build_experiment.sh` to generate the different sized matrices as inputs to the executable. Moreover, if preferred, you can reuse the `defines.txt` file in the provided validation data for fig15-16. Note that experiments with large \( K \) values may yield a slight mismatch in the output due to floating-point rounding errors, which can vary depending on the NumPy version and the tensor core's rounding behavior.

## Notes
### Statistics Rate

When running a simulation, you can change the rate at which statistics are collected by changing the rate the recurring event is scheduled in the `simobject.h` file (line `394`). This can have a minor impact when calculating aggregate metrics such as running average or max value. A more frequent rate provides you with a more granular view of the simulation run but outputs a bigger trace which requires more processing.

Here’s a rewritten version with more clarity and detailed explanations:


### Deriving Speedup and Tensor Core Utilization from Raw Data

**Speedup Calculation**  
To determine speedup, the `cycles` metric is used. Speedup is calculated by normalizing each configuration’s cycle count relative to the configuration with the highest (slowest) cycle count. 


**Tensor Core Utilization Calculation**  
The average tensor core utilization is derived from the `mac_fire` statistic, which increments every cycle the tensor core fires a computation. This data is sampled during the run and recorded in the `statistics.txt` file. 

To compute average utilization, the mean of the `mac_fire` values is first calculated across all samples (reported as `mac_fire_mean` in the `combined_info.csv` files). Then, this mean value is normalized by dividing it by the corresponding sampling period (refer to the section above for details on determining the sampling period). After normalization, the average tensor core utilization is then obtained as a value between 0 to 1. 

