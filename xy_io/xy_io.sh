#!/bin/bash
#
cp xy_io.hpp /$HOME/include
#
g++ -c -I /$HOME/include xy_io.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling xy_io.cpp"
  exit
fi
#
mv xy_io.o ~/libcpp/$ARCH/xy_io.o
#
echo "Library installed as ~/libcpp/$ARCH/xy_io.o"
