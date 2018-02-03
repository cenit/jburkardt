#!/bin/bash
#
cp lcvt.hpp /$HOME/include
#
g++ -c -I /$HOME/include lcvt.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lcvt.cpp"
  exit
fi
#
mv lcvt.o ~/libcpp/$ARCH/lcvt.o
#
echo "Library installed as ~/libcpp/$ARCH/lcvt.o"
