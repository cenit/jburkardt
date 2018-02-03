#!/bin/bash
#
cp blend.hpp /$HOME/include
#
g++ -c -I /$HOME/include blend.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling blend.cpp"
  exit
fi
#
mv blend.o ~/libcpp/$ARCH/blend.o
#
echo "Library installed as ~/libcpp/$ARCH/blend.o"
