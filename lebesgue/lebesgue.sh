#!/bin/bash
#
cp lebesgue.hpp /$HOME/include
#
g++ -c -I/$HOME/include lebesgue.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lebesgue.cpp"
  exit
fi
#
mv lebesgue.o ~/libcpp/$ARCH/lebesgue.o
#
echo "Library installed as ~/libcpp/$ARCH/lebesgue.o"
