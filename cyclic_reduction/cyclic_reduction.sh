#!/bin/bash
#
cp cyclic_reduction.hpp /$HOME/include
#
g++ -c -I /$HOME/include cyclic_reduction.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cyclic_reduction.cpp"
  exit
fi
#
mv cyclic_reduction.o ~/libcpp/$ARCH/cyclic_reduction.o
#
echo "Library installed as ~/libcpp/$ARCH/cyclic_reduction.o"
