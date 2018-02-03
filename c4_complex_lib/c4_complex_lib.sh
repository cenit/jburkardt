#!/bin/bash
#
cp c4_complex_lib.hpp /$HOME/include
#
g++ -c c4_complex_lib.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling c4_complex_lib.cpp"
  exit
fi
#
mv c4_complex_lib.o ~/libcpp/$ARCH/c4_complex_lib.o
#
echo "Library installed as ~/libcpp/$ARCH/c4_complex_lib.o"
