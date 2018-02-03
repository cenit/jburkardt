#!/bin/bash
#
cp bins.hpp /$HOME/include
#
g++ -c -I /$HOME/include bins.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling bins.cpp"
  exit
fi
#
mv bins.o ~/libcpp/$ARCH/bins.o
#
echo "Library installed as ~/libcpp/$ARCH/bins.o"
