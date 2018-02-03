#!/bin/bash
#
cp correlation.hpp /$HOME/include
#
g++ -c -I/$HOME/include correlation.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling correlation.cpp"
  exit
fi
#
mv correlation.o ~/libcpp/$ARCH/correlation.o
#
echo "Library installed as ~/libcpp/$ARCH/correlation.o"
