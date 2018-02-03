#!/bin/bash
#
cp sparse_grid_laguerre.hpp /$HOME/include
#
g++ -c -I /$HOME/include sparse_grid_laguerre.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sparse_grid_laguerre.cpp"
  exit
fi
#
mv sparse_grid_laguerre.o ~/libcpp/$ARCH/sparse_grid_laguerre.o
#
echo "Library installed as ~/libcpp/$ARCH/sparse_grid_laguerre.o"
