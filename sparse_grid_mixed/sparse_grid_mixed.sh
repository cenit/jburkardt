#!/bin/bash
#
cp sparse_grid_mixed.hpp /$HOME/include
#
g++ -c -I /$HOME/include sparse_grid_mixed.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sparse_grid_mixed.cpp"
  exit
fi
#
mv sparse_grid_mixed.o ~/libcpp/$ARCH/sparse_grid_mixed.o
#
echo "Library installed as ~/libcpp/$ARCH/sparse_grid_mixed.o"
