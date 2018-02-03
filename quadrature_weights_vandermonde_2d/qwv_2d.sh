#!/bin/bash
#
cp qwv_2d.hpp /$HOME/include
#
g++ -c -I/$HOME/include qwv_2d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling qwv_2d.cpp"
  exit
fi
#
mv qwv_2d.o ~/libcpp/$ARCH/qwv_2d.o
#
echo "Library installed as ~/libcpp/$ARCH/qwv_2d.o"
