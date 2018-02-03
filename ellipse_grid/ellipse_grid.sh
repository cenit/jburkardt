#!/bin/bash
#
cp ellipse_grid.hpp /$HOME/include
#
g++ -c ellipse_grid.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ellipse_grid.cpp"
  exit
fi
#
mv ellipse_grid.o ~/libcpp/$ARCH/ellipse_grid.o
#
echo "Library installed as ~/libcpp/$ARCH/ellipse_grid.o"
