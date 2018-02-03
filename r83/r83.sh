#!/bin/bash
#
cp r83.hpp /$HOME/include
#
g++ -c -I /$HOME/include r83.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83.cpp"
  exit
fi
#
mv r83.o ~/libcpp/$ARCH/r83.o
#
echo "Library installed as ~/libcpp/$ARCH/r83.o"
