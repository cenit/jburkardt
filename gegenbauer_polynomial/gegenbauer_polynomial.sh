#!/bin/bash
#
cp gegenbauer_polynomial.hpp /$HOME/include
#
g++ -c -I /$HOME/include gegenbauer_polynomial.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling gegenbauer_polynomial.cpp"
  exit
fi
#
mv gegenbauer_polynomial.o ~/libcpp/$ARCH/gegenbauer_polynomial.o
#
echo "Library installed as ~/libcpp/$ARCH/gegenbauer_polynomial.o"
