#!/bin/bash
#
cp eispack.hpp /$HOME/include
#
g++ -c -I/$HOME/include eispack.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling eispack.cpp"
  exit
fi
#
mv eispack.o ~/libcpp/$ARCH/eispack.o
#
echo "Library installed as ~/libcpp/$ARCH/eispack.o"
