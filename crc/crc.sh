#!/bin/bash
#
cp crc.hpp /$HOME/include
#
g++ -c -I /$HOME/include crc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling crc.cpp"
  exit
fi
#
mv crc.o ~/libcpp/$ARCH/crc.o
#
echo "Library installed as ~/libcpp/$ARCH/crc.o"
