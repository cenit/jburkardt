#!/bin/bash
#
cp test_optimization.hpp /$HOME/include
#
g++ -c -I /$HOME/include test_optimization.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_optimization.cpp."
  exit
fi
#
mv test_optimization.o ~/libcpp/$ARCH/test_optimization.o
#
echo "Library installed as ~/libcpp/$ARCH/test_optimization.o"
