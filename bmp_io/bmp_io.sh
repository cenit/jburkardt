#!/bin/bash
#
cp bmp_io.hpp /$HOME/include
#
g++ -c -I /$HOME/include bmp_io.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling bmp_io.cpp"
  exit
fi
#
mv bmp_io.o ~/libcpp/$ARCH/bmp_io.o
#
echo "Library installed as ~/libcpp/$ARCH/bmp_io.o"
