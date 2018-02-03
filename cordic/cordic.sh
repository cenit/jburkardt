#!/bin/bash
#
cp cordic.hpp /$HOME/include
#
g++ -c -I /$HOME/include cordic.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cordic.cpp"
  exit
fi
#
mv cordic.o ~/libcpp/$ARCH/cordic.o
#
echo "Library installed as ~/libcpp/$ARCH/cordic.o"
