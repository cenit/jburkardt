#!/bin/bash
#
g++ -c g++_quadmath.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling g++_quadmath.cpp"
  exit
fi
#
g++ g++_quadmath.o
if [ $? -ne 0 ]; then
  echo "Errors linking g++_quadmath.o."
  exit
fi
#
rm g++_quadmath.o
#
mv a.out g++_quadmath
./g++_quadmath > g++_quadmath_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running g++_quadmath."
  exit
fi
rm g++_quadmath
#
echo "Program output written to g++_quadmath_output.txt"
