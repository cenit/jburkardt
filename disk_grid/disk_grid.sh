#!/bin/bash
#
cp disk_grid.hpp /$HOME/include
#
g++ -c disk_grid.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling disk_grid.cpp"
  exit
fi
#
mv disk_grid.o ~/libcpp/$ARCH/disk_grid.o
#
echo "Library installed as ~/libcpp/$ARCH/disk_grid.o"
