#!/bin/bash
#
cp sparse_grid_open.hpp /$HOME/include
#
g++ -c -I /$HOME/include sparse_grid_open.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sparse_grid_open.cpp"
  exit
fi
#
mv sparse_grid_open.o ~/libcpp/$ARCH/sparse_grid_open.o
#
echo "Library installed as ~/libcpp/$ARCH/sparse_grid_open.o"
