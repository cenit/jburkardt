#!/bin/bash
#
cp sparse_grid_cc.hpp /$HOME/include
#
g++ -c -I /$HOME/include sparse_grid_cc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sparse_grid_cc.cpp"
  exit
fi
#
mv sparse_grid_cc.o ~/libcpp/$ARCH/sparse_grid_cc.o
#
echo "Library installed as ~/libcpp/$ARCH/sparse_grid_cc.o"
