#!/bin/bash
#
cp caesar.hpp /$HOME/include
#
g++ -c -I /$HOME/include caesar.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling caesar.cpp"
  exit
fi
#
mv caesar.o ~/libcpp/$ARCH/caesar.o
#
echo "Library installed as ~/libcpp/$ARCH/caesar.o"
