#!/bin/bash
#
cp vandermonde.hpp /$HOME/include
#
g++ -c -I/$HOME/include vandermonde.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling vandermonde.cpp"
  exit
fi
#
mv vandermonde.o ~/libcpp/$ARCH/vandermonde.o
#
echo "Library installed as ~/libcpp/$ARCH/vandermonde.o"
