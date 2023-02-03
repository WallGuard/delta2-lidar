#!/bin/bash

rm -rf build &&
mkdir build &&
cd build &&
cmake ../ -G "CodeBlocks - Unix Makefiles" &&
make &&
sudo chmod 777 /dev/ttyUSB0 &&
cd .. &&
./build/delta_2b_lidar_node
