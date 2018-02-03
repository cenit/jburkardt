#!/bin/bash
#
cp brownian_motion_simulation.hpp /$HOME/include
#
g++ -c -I/$HOME/include brownian_motion_simulation.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling brownian_motion_simulation.cpp"
  exit
fi
#
mv brownian_motion_simulation.o ~/libcpp/$ARCH/brownian_motion_simulation.o
#
echo "Library installed as ~/libcpp/$ARCH/brownian_motion_simulation.o"
