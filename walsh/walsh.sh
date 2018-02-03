#!/bin/bash
#
cp walsh.hpp /$HOME/include
#
g++ -c -I /$HOME/include walsh.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling walsh.cpp"
  exit
fi
#
mv walsh.o ~/libcpp/$ARCH/walsh.o
#
echo "Library installed as ~/libcpp/$ARCH/walsh.o"
