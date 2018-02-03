#!/bin/bash
#
cp r8cc.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8cc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8cc.cpp"
  exit
fi
#
mv r8cc.o ~/libcpp/$ARCH/r8cc.o
#
echo "Library installed as ~/libcpp/$ARCH/r8cc.o"
