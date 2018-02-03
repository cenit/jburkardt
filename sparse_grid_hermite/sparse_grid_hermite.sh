#!/bin/bash
#
cp sparse_grid_hermite.hpp /$HOME/include
#
g++ -c -I /$HOME/include sparse_grid_hermite.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sparse_grid_hermite.cpp"
  exit
fi
#
mv sparse_grid_hermite.o ~/libcpp/$ARCH/sparse_grid_hermite.o
#
echo "Library installed as ~/libcpp/$ARCH/sparse_grid_hermite.o"
