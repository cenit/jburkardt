#!/bin/bash
#
cp toms178.hpp /$HOME/include
#
g++ -c -I /$HOME/include toms178.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms178.cpp"
  exit
fi
#
mv toms178.o ~/libcpp/$ARCH/toms178.o
#
echo "Library installed as ~/libcpp/$ARCH/toms178.o"
