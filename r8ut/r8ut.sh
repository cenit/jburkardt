#!/bin/bash
#
cp r8ut.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8ut.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ut.cpp"
  exit
fi
#
mv r8ut.o ~/libcpp/$ARCH/r8ut.o
#
echo "Library installed as ~/libcpp/$ARCH/r8ut.o"
