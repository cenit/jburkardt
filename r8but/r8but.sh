#!/bin/bash
#
cp r8but.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8but.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8but.cpp"
  exit
fi
#
mv r8but.o ~/libcpp/$ARCH/r8but.o
#
echo "Library installed as ~/libcpp/$ARCH/r8but.o"
