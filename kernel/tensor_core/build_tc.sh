#!/bin/bash

# Build py files first (take in config file from py files and generate and run stuff?)

cur=$(pwd)
cd py
python config.py --config config.json

tc_defines=`cat defines.txt`
cd ..

make EXTFLAGS+="${tc_defines}"
#make

cd ../../
cd sim/simx

make EXTFLAGS+="${tc_defines}"
#make

cd $cur



