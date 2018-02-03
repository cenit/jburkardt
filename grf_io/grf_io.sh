#!/bin/bash
#
cp grf_io.hpp /$HOME/include
#
g++ -c -I /$HOME/include grf_io.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling grf_io.cpp"
  exit
fi
#
mv grf_io.o ~/libcpp/$ARCH/grf_io.o
#
echo "Library installed as ~/libcpp/$ARCH/grf_io.o"
