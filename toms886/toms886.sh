#!/bin/bash
#
cp toms886.hpp /$HOME/include
#
g++ -c -I/$HOME/include toms886.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms886.cpp"
  exit
fi
#
mv toms886.o ~/libcpp/$ARCH/toms886.o
#
echo "Library installed as ~/libcpp/$ARCH/toms886.o"
