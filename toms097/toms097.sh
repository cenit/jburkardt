#!/bin/bash
#
cp toms097.hpp /$HOME/include
#
g++ -c -I/$HOME/include toms097.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms097.cpp"
  exit
fi
#
mv toms097.o ~/libcpp/$ARCH/toms097.o
#
echo "Library installed as ~/libcpp/$ARCH/toms097.o"
