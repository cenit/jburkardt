#!/bin/bash
#
cp vandermonde_approx_2d.hpp /$HOME/include
#
g++ -c -I/$HOME/include vandermonde_approx_2d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling vandermonde_approx_2d.cpp"
  exit
fi
#
mv vandermonde_approx_2d.o ~/libcpp/$ARCH/vandermonde_approx_2d.o
#
echo "Library installed as ~/libcpp/$ARCH/vandermonde_approx_2d.o"
