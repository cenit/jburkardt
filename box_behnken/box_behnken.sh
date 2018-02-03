#!/bin/bash
#
cp box_behnken.hpp /$HOME/include
#
g++ -c -I /$HOME/include box_behnken.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling box_behnken.cpp"
  exit
fi
#
mv box_behnken.o ~/libcpp/$ARCH/box_behnken.o
#
echo "Library installed as ~/libcpp/$ARCH/box_behnken.o"
