#!/bin/bash
#
cp r8po.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8po.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8po.cpp"
  exit
fi
#
mv r8po.o ~/libcpp/$ARCH/r8po.o
#
echo "Library installed as ~/libcpp/$ARCH/r8po.o"
