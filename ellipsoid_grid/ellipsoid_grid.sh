#!/bin/bash
#
cp ellipsoid_grid.hpp /$HOME/include
#
g++ -c ellipsoid_grid.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ellipsoid_grid.cpp"
  exit
fi
#
mv ellipsoid_grid.o ~/libcpp/$ARCH/ellipsoid_grid.o
#
echo "Library installed as ~/libcpp/$ARCH/ellipsoid_grid.o"
