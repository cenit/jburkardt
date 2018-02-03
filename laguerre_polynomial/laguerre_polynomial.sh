#!/bin/bash
#
cp laguerre_polynomial.hpp /$HOME/include
#
g++ -c -I /$HOME/include laguerre_polynomial.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling laguerre_polynomial.cpp"
  exit
fi
#
mv laguerre_polynomial.o ~/libcpp/$ARCH/laguerre_polynomial.o
#
echo "Library installed as ~/libcpp/$ARCH/laguerre_polynomial.o"
