#!/bin/bash
#
cp components.hpp /$HOME/include
#
g++ -c -I /$HOME/include components.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling components.cpp"
  exit
fi
#
mv components.o ~/libcpp/$ARCH/components.o
#
echo "Library installed as ~/libcpp/$ARCH/components.o"
