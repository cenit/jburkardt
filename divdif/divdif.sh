#!/bin/bash
#
cp divdif.hpp /$HOME/include
#
g++ -c -I /$HOME/include divdif.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling divdif.cpp"
  exit
fi
#
mv divdif.o ~/libcpp/$ARCH/divdif.o
#
echo "Library installed as ~/libcpp/$ARCH/divdif.o"
