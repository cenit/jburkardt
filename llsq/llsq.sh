#!/bin/bash
#
cp llsq.hpp /$HOME/include
#
g++ -c -I /$HOME/include llsq.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling llsq.cpp"
  exit
fi
#
mv llsq.o ~/libcpp/$ARCH/llsq.o
#
echo "Library installed as ~/libcpp/$ARCH/llsq.o"
