#!/bin/bash
#
cp bernstein_polynomial.hpp /$HOME/include
#
g++ -c -I /$HOME/include bernstein_polynomial.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling bernstein_polynomial.cpp"
  exit
fi
#
mv bernstein_polynomial.o ~/libcpp/$ARCH/bernstein_polynomial.o
#
echo "Library installed as ~/libcpp/$ARCH/bernstein_polynomial.o"
