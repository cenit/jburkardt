#!/bin/bash
#
cp lagrange_interp_1d.hpp /$HOME/include
#
g++ -c -I /$HOME/include lagrange_interp_1d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lagrange_interp_1d.cpp"
  exit
fi
#
mv lagrange_interp_1d.o ~/libcpp/$ARCH/lagrange_interp_1d.o
#
echo "Library installed as ~/libcpp/$ARCH/lagrange_interp_1d.o"
