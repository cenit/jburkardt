#!/bin/bash
#
cp r8to.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8to.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8to.cpp"
  exit
fi
#
mv r8to.o ~/libcpp/$ARCH/r8to.o
#
echo "Library installed as ~/libcpp/$ARCH/r8to.o"
