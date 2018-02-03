#!/bin/bash
#
cp qwv.hpp /$HOME/include
#
g++ -c -I/$HOME/include qwv.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling qwv.cpp"
  exit
fi
#
mv qwv.o ~/libcpp/$ARCH/qwv.o
#
echo "Library installed as ~/libcpp/$ARCH/qwv.o"
