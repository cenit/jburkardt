#!/bin/bash
#
cp interp.hpp /$HOME/include
#
g++ -c -I/$HOME/include interp.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling interp.cpp"
  exit
fi
#
mv interp.o ~/libcpp/$ARCH/interp.o
#
echo "Library installed as ~/libcpp/$ARCH/interp.o"
