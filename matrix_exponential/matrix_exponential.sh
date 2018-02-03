#!/bin/bash
#
cp matrix_exponential.hpp /$HOME/include
#
g++ -c -I/$HOME/include matrix_exponential.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling matrix_exponential.cpp"
  exit
fi
#
mv matrix_exponential.o ~/libcpp/$ARCH/matrix_exponential.o
#
echo "Library installed as ~/libcpp/$ARCH/matrix_exponential.o"
