#!/bin/bash
#
cp c8_complex_lib.hpp /$HOME/include
#
g++ -c c8_complex_lib.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling c8_complex_lib.cpp"
  exit
fi
#
mv c8_complex_lib.o ~/libcpp/$ARCH/c8_complex_lib.o
#
echo "Library installed as ~/libcpp/$ARCH/c8_complex_lib.o"
