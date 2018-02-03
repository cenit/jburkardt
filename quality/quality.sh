#!/bin/bash
#
cp quality.hpp /$HOME/include
#
g++ -c -I /$HOME/include quality.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling quality.cpp"
  exit
fi
#
mv quality.o ~/libcpp/$ARCH/quality.o
#
echo "Library installed as ~/libcpp/$ARCH/quality.o"
