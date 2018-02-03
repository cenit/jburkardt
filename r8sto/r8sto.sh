#!/bin/bash
#
cp r8sto.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8sto.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8sto.cpp"
  exit
fi
#
mv r8sto.o ~/libcpp/$ARCH/r8sto.o
#
echo "Library installed as ~/libcpp/$ARCH/r8sto.o"
