#!/bin/bash
#
cp latin_center.hpp /$HOME/include
#
g++ -c -I /$HOME/include latin_center.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling latin_center.cpp"
  exit
fi
#
mv latin_center.o ~/libcpp/$ARCH/latin_center.o
#
echo "Library installed as ~/libcpp/$ARCH/latin_center.o"
