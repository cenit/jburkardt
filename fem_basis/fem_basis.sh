#!/bin/bash
#
cp fem_basis.hpp /$HOME/include
#
g++ -c -I /$HOME/include fem_basis.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem_basis.cpp"
  exit
fi
#
mv fem_basis.o ~/libcpp/$ARCH/fem_basis.o
#
echo "Library installed as ~/libcpp/$ARCH/fem_basis.o"
