#!/bin/bash
#
cp besselj.hpp /$HOME/include
#
g++ -c -I/$HOME/include besselj.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling besselj.cpp"
  exit
fi
#
mv besselj.o ~/libcpp/$ARCH/besselj.o
#
echo "Library installed as ~/libcpp/$ARCH/besselj.o"
