#!/bin/bash
#
cp r8ge.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8ge.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ge.cpp"
  exit
fi
#
mv r8ge.o ~/libcpp/$ARCH/r8ge.o
#
echo "Library installed as ~/libcpp/$ARCH/r8ge.o"
