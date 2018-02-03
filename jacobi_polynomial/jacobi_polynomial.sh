#!/bin/bash
#
cp jacobi_polynomial.hpp /$HOME/include
#
g++ -c -I /$HOME/include jacobi_polynomial.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling jacobi_polynomial.cpp"
  exit
fi
#
mv jacobi_polynomial.o ~/libcpp/$ARCH/jacobi_polynomial.o
#
echo "Library installed as ~/libcpp/$ARCH/jacobi_polynomial.o"
