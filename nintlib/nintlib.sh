#!/bin/bash
#
cp nintlib.hpp /$HOME/include
#
g++ -c -I /$HOME/include nintlib.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling nintlib.cpp"
  exit
fi
#
mv nintlib.o ~/libcpp/$ARCH/nintlib.o
#
echo "Library installed as ~/libcpp/$ARCH/nintlib.o"
