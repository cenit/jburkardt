#!/bin/bash
#
cp jacobi.hpp /$HOME/include
#
g++ -c -I /$HOME/include jacobi.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling jacobi.cpp"
  exit
fi
#
mv jacobi.o ~/libcpp/$ARCH/jacobi.o
#
echo "Library installed as ~/libcpp/$ARCH/jacobi.o"
