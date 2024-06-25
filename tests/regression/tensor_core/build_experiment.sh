#!/bin/bash

# Build py files first (take in config file from py files and generate and run stuff?)

cur=$(pwd)
cd py
python config.py --config config.json

tc_defines=`cat defines.txt`
cd ..

cd ../../../
cd runtime/simx
make clean

CONFIGS="${tc_defines}" make
cd $cur

make clean-all
make EXTFLAGS+="${tc_defines}"
make asm EXTFLAGS+="${tc_defines}"
make run-simx
#make

#make
