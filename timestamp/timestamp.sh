#!/bin/bash
#
cp timestamp.hpp /$HOME/include
#
g++ -c -I /$HOME/include timestamp.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling timestamp.cpp"
  exit
fi
#
mv timestamp.o ~/libcpp/$ARCH/timestamp.o
#
echo "Library installed as ~/libcpp/$ARCH/timestamp.o"
