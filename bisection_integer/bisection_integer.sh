#!/bin/bash
#
cp bisection_integer.hpp /$HOME/include
#
g++ -c bisection_integer.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling bisection_integer.cpp"
  exit
fi
#
mv bisection_integer.o ~/libcpp/$ARCH/bisection_integer.o
#
echo "Library installed as ~/libcpp/$ARCH/bisection_integer.o"
