#!/bin/bash
#
cp ou.hpp /$HOME/include
#
g++ -c -I/$HOME/include ou.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ou.cpp"
  exit
fi
#
mv ou.o ~/libcpp/$ARCH/ou.o
#
echo "Library installed as ~/libcpp/$ARCH/ou.o"
