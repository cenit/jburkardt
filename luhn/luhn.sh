#!/bin/bash
#
cp luhn.hpp /$HOME/include
#
g++ -c -I/$HOME/include luhn.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling luhn.cpp"
  exit
fi
#
mv luhn.o ~/libcpp/$ARCH/luhn.o
#
echo "Library installed as ~/libcpp/$ARCH/luhn.o"
