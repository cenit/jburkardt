#!/bin/bash
#
cp upc.hpp /$HOME/include
#
g++ -c -I/$HOME/include upc.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling upc.cpp"
  exit
fi
#
mv upc.o ~/libcpp/$ARCH/upc.o
#
echo "Library installed as ~/libcpp/$ARCH/upc.o"
