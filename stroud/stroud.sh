#!/bin/bash
#
cp stroud.hpp /$HOME/include
#
g++ -c -I /$HOME/include stroud.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling stroud.cpp"
  exit
fi
#
mv stroud.o ~/libcpp/$ARCH/stroud.o
#
echo "Library installed as ~/libcpp/$ARCH/stroud.o"
