#!/bin/bash
#
cp ball_grid.hpp /$HOME/include
#
g++ -c ball_grid.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ball_grid.cpp"
  exit
fi
#
mv ball_grid.o ~/libcpp/$ARCH/ball_grid.o
#
echo "Library installed as ~/libcpp/$ARCH/ball_grid.o"
