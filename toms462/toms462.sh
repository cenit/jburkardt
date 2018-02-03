#!/bin/bash
#
cp toms462.hpp /$HOME/include
#
g++ -c -I /$HOME/include toms462.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms462.cpp"
  exit
fi
#
mv toms462.o ~/libcpp/$ARCH/toms462.o
#
echo "Library installed as ~/libcpp/$ARCH/toms462.o"
