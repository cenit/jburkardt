#!/bin/bash
#
cp lagrange_approx_1d.hpp /$HOME/include
#
g++ -c -I/$HOME/include lagrange_approx_1d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lagrange_approx_1d.cpp"
  exit
fi
#
mv lagrange_approx_1d.o ~/libcpp/$ARCH/lagrange_approx_1d.o
#
echo "Library installed as ~/libcpp/$ARCH/lagrange_approx_1d.o"
