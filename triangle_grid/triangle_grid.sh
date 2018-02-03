#!/bin/bash
#
cp triangle_grid.hpp /$HOME/include
#
g++ -c -I /$HOME/include triangle_grid.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangle_grid.cpp"
  exit
fi
#
mv triangle_grid.o ~/libcpp/$ARCH/triangle_grid.o
#
echo "Library installed as ~/libcpp/$ARCH/triangle_grid.o"
