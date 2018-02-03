#!/bin/bash
#
cp sde.hpp /$HOME/include
#
g++ -c -I/$HOME/include sde.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sde.cpp"
  exit
fi
#
mv sde.o ~/libcpp/$ARCH/sde.o
#
echo "Library installed as ~/libcpp/$ARCH/sde.o"
