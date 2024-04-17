#!/bin/bash

# Build py files first (take in config file from py files and generate and run stuff?)

cur=$(pwd)
cd py
python config.py --config config.json

tc_defines=`cat defines.txt`
cd ..

cd ../../../
cd sim/simx

make EXTFLAGS+="${tc_defines}"

cd $cur


make EXTFLAGS+="${tc_defines}"
make asm EXTFLAGS+="${tc_defines}"
#make

#make





