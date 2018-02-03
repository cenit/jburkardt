#!/bin/bash
#
cp test_approx.hpp /$HOME/include
#
g++ -c -I /$HOME/include test_approx.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_approx.cpp"
  exit
fi
#
mv test_approx.o ~/libcpp/$ARCH/test_approx.o
#
echo "Library installed as ~/libcpp/$ARCH/test_approx.o"
