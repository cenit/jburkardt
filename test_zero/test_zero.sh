#!/bin/bash
#
cp test_zero.hpp /$HOME/include
#
g++ -c -I /$HOME/include test_zero.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_zero.cpp"
  exit
fi
#
mv test_zero.o ~/libcpp/$ARCH/test_zero.o
#
echo "Library installed as ~/libcpp/$ARCH/test_zero.o"
