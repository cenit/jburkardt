#!/bin/bash
#
cp sparse_grid_hw.hpp /$HOME/include
#
g++ -c -I/$HOME/include sparse_grid_hw.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sparse_grid_hw.cpp"
  exit
fi
#
mv sparse_grid_hw.o ~/libcpp/$ARCH/sparse_grid_hw.o
#
echo "Library installed as ~/libcpp/$ARCH/sparse_grid_hw.o"
