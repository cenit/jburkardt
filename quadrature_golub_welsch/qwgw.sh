#!/bin/bash
#
cp qwgw.hpp /$HOME/include
#
g++ -c -I/$HOME/include qwgw.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling qwgw.cpp"
  exit
fi
#
mv qwgw.o ~/libcpp/$ARCH/qwgw.o
#
echo "Library installed as ~/libcpp/$ARCH/qwgw.o"
