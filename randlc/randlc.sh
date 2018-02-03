#!/bin/bash
#
cp randlc.hpp /$HOME/include
#
g++ -c -I /$HOME/include randlc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling randlc.cpp"
  exit
fi
#
mv randlc.o ~/libcpp/$ARCH/randlc.o
#
echo "Library installed as ~/libcpp/$ARCH/randlc.o"
