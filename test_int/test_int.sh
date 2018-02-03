#!/bin/bash
#
cp test_int.hpp /$HOME/include
#
g++ -c -I /$HOME/include test_int.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_int.cpp."
  exit
fi
#
mv test_int.o ~/libcpp/$ARCH/test_int.o
#
echo "Library installed as ~/libcpp/$ARCH/test_int.o"
