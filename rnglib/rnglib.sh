#!/bin/bash
#
cp rnglib.hpp /$HOME/include
#
g++ -c -I/$HOME/include rnglib.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling rnglib.cpp"
  exit
fi
#
mv rnglib.o ~/libcpp/$ARCH/rnglib.o
#
echo "Library installed as ~/libcpp/$ARCH/rnglib.o"
