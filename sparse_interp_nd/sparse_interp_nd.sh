#!/bin/bash
#
cp sparse_interp_nd.hpp /$HOME/include
#
g++ -c -I/$HOME/include sparse_interp_nd.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sparse_interp_nd.cpp"
  exit
fi
#
mv sparse_interp_nd.o ~/libcpp/$ARCH/sparse_interp_nd.o
#
echo "Library installed as ~/libcpp/$ARCH/sparse_interp_nd.o"
