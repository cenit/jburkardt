#!/bin/bash
#
cp cvt.hpp /$HOME/include
#
g++ -c -I /$HOME/include cvt.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cvt.cpp"
  exit
fi
#
mv cvt.o ~/libcpp/$ARCH/cvt.o
#
echo "Library installed as ~/libcpp/$ARCH/cvt.o"
