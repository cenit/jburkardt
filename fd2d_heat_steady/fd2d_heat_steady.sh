#!/bin/bash
#
cp fd2d_heat_steady.hpp /$HOME/include
#
g++ -c -I/$HOME/include fd2d_heat_steady.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fd2d_heat_steady.cpp"
  exit
fi
#
mv fd2d_heat_steady.o ~/libcpp/$ARCH/fd2d_heat_steady.o
#
echo "Library installed as ~/libcpp/$ARCH/fd2d_heat_steady.o"
