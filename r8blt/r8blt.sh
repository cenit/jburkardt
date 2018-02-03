#!/bin/bash
#
cp r8blt.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8blt.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8blt.cpp"
  exit
fi
#
mv r8blt.o ~/libcpp/$ARCH/r8blt.o
#
echo "Library installed as ~/libcpp/$ARCH/r8blt.o"
