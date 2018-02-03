#!/bin/bash
#
cp subset.hpp /$HOME/include
#
g++ -c -I /$HOME/include subset.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling subset.cpp"
  exit
fi
#
mv subset.o ~/libcpp/$ARCH/subset.o
#
echo "Library installed as ~/libcpp/$ARCH/subset.o"
