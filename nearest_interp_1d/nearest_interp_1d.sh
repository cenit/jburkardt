#!/bin/bash
#
cp nearest_interp_1d.hpp /$HOME/include
#
g++ -c -I /$HOME/include nearest_interp_1d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling nearest_interp_1d.cpp"
  exit
fi
#
mv nearest_interp_1d.o ~/libcpp/$ARCH/nearest_interp_1d.o
#
echo "Library installed as ~/libcpp/$ARCH/nearest_interp_1d.o"
