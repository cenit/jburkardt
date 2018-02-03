#!/bin/bash
#
cp r8lt.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8lt.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8lt.cpp"
  exit
fi
#
mv r8lt.o ~/libcpp/$ARCH/r8lt.o
#
echo "Library installed as ~/libcpp/$ARCH/r8lt.o"
