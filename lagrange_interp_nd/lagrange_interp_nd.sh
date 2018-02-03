#!/bin/bash
#
cp lagrange_interp_nd.hpp /$HOME/include
#
g++ -c lagrange_interp_nd.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lagrange_interp_nd.cpp"
  exit
fi
#
mv lagrange_interp_nd.o ~/libcpp/$ARCH/lagrange_interp_nd.o
#
echo "Library installed as ~/libcpp/$ARCH/lagrange_interp_nd.o"
