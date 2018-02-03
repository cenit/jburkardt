#!/bin/bash
#
cp cycle_floyd.hpp /$HOME/include
#
g++ -c -I /$HOME/include cycle_floyd.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cycle_floyd.cpp"
  exit
fi
#
mv cycle_floyd.o ~/libcpp/$ARCH/cycle_floyd.o
#
echo "Library installed as ~/libcpp/$ARCH/cycle_floyd.o"
