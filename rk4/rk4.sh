#!/bin/bash
#
cp rk4.hpp /$HOME/include
#
g++ -c -I /$HOME/include rk4.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling rk4.cpp"
  exit
fi
#
mv rk4.o ~/libcpp/$ARCH/rk4.o
#
echo "Library installed as ~/libcpp/$ARCH/rk4.o"
