#!/bin/bash
#
cp cycle_brent.hpp /$HOME/include
#
g++ -c -I /$HOME/include cycle_brent.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cycle_brent.cpp"
  exit
fi
#
mv cycle_brent.o ~/libcpp/$ARCH/cycle_brent.o
#
echo "Library installed as ~/libcpp/$ARCH/cycle_brent.o"
