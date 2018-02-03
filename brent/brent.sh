#!/bin/bash
#
cp brent.hpp /$HOME/include
#
g++ -c -I /$HOME/include brent.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling brent.cpp"
  exit
fi
#
mv brent.o ~/libcpp/$ARCH/brent.o
#
echo "Library installed as ~/libcpp/$ARCH/brent.o"
