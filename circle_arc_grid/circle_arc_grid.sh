#!/bin/bash
#
cp circle_arc_grid.hpp /$HOME/include
#
g++ -c circle_arc_grid.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling circle_arc_grid.cpp"
  exit
fi
#
mv circle_arc_grid.o ~/libcpp/$ARCH/circle_arc_grid.o
#
echo "Library installed as ~/libcpp/$ARCH/circle_arc_grid.o"
