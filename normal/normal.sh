#!/bin/bash
#
cp normal.hpp /$HOME/include
#
g++ -c -I /$HOME/include normal.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling normal.cpp"
  exit
fi
#
mv normal.o ~/libcpp/$ARCH/normal.o
#
echo "Library installed as ~/libcpp/$ARCH/normal.o"
