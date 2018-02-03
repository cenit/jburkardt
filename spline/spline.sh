#!/bin/bash
#
cp spline.hpp /$HOME/include
#
g++ -c -I /$HOME/include spline.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling spline.cpp"
  exit
fi
#
mv spline.o ~/libcpp/$ARCH/spline.o
#
echo "Library installed as ~/libcpp/$ARCH/spline.o"
