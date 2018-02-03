#!/bin/bash
#
cp r8sp.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8sp.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8sp.cpp"
  exit
fi
#
mv r8sp.o ~/libcpp/$ARCH/r8sp.o
#
echo "Library installed as ~/libcpp/$ARCH/r8sp.o"
