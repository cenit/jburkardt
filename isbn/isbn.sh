#!/bin/bash
#
cp isbn.hpp /$HOME/include
#
g++ -c -I/$HOME/include isbn.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling isbn.cpp"
  exit
fi
#
mv isbn.o ~/libcpp/$ARCH/isbn.o
#
echo "Library installed as ~/libcpp/$ARCH/isbn.o"
