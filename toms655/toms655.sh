#!/bin/bash
#
cp toms655.hpp /$HOME/include
#
g++ -c -I /$HOME/include toms655.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms655.cpp"
  exit
fi
#
mv toms655.o ~/libcpp/$ARCH/toms655.o
#
echo "Library installed as ~/libcpp/$ARCH/toms655.o"
