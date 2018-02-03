#!/bin/bash
#
cp toeplitz_cholesky.hpp /$HOME/include
#
g++ -c -I/$HOME/include toeplitz_cholesky.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toeplitz_cholesky.cpp"
  exit
fi
#
mv toeplitz_cholesky.o ~/libcpp/$ARCH/toeplitz_cholesky.o
#
echo "Library installed as ~/libcpp/$ARCH/toeplitz_cholesky.o"
