#!/bin/bash
#
cp ziggurat.hpp /$HOME/include
#
g++ -c -I /$HOME/include ziggurat.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ziggurat.cpp."
  exit
fi
#
mv ziggurat.o ~/libcpp/$ARCH/ziggurat.o
#
echo "Library installed as ~/libcpp/$ARCH/ziggurat.o"
