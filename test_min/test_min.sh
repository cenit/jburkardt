#!/bin/bash
#
cp test_min.hpp /$HOME/include
#
g++ -c -I /$HOME/include test_min.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_min.cpp"
  exit
fi
#
mv test_min.o ~/libcpp/$ARCH/test_min.o
#
echo "Library installed as ~/libcpp/$ARCH/test_min.o"
