#!/bin/bash
#
cp latin_cover.hpp /$HOME/include
#
g++ -c -I /$HOME/include latin_cover.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling latin_cover.cpp"
  exit
fi
#
mv latin_cover.o ~/libcpp/$ARCH/latin_cover.o
#
echo "Library installed as ~/libcpp/$ARCH/latin_cover.o"
