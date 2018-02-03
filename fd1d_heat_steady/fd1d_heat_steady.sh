#!/bin/bash
#
cp fd1d_heat_steady.hpp /$HOME/include
#
g++ -c -I /$HOME/include fd1d_heat_steady.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fd1d_heat_steady.cpp."
  exit
fi
#
mv fd1d_heat_steady.o ~/libcpp/$ARCH/fd1d_heat_steady.o
#
echo "Library installed as ~/libcpp/$ARCH/fd1d_heat_steady.o"
