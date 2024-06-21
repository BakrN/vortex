#!/bin/bash

# Default values for def_file and ker_src
def_file="py/defines.txt"
ker_src=""

# Check if def_file is passed as argument
if [ ! -z "$1" ]; then
    def_file=$1
else
    cd py
    python config.py --config config.json --generate_gemm
cd ..
fi

# Check if ker_src is passed as argument
if [ ! -z "$2" ]; then
    ker_src=$2
fi

# Print values to verify
echo "def_file: $def_file"
echo "ker_src: $ker_src"

cur=$(pwd)

tc_defines=$(cat $def_file)
echo "${tc_defines}"

cd ../../../
cd runtime/simx
make clean

CONFIGS="$tc_defines"  make

cd $cur

make clean-all
VX_SRCS="$ker_src" make EXTFLAGS+="$tc_defines"
VX_SRCS="$ker_src" make asm EXTFLAGS+="$tc_defines"
VX_SRCS="$ker_src" make run-simx | tee out.log
