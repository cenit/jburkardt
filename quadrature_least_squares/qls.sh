#!/bin/bash
#
cp qls.hpp /$HOME/include
#
g++ -c -I/$HOME/include qls.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling qls.cpp"
  exit
fi
#
mv qls.o ~/libcpp/$ARCH/qls.o
#
echo "Library installed as ~/libcpp/$ARCH/qls.o"
