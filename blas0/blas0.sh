#!/bin/bash
#
cp blas0.hpp /$HOME/include
#
g++ -c blas0.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling blas0.cpp."
  exit
fi
#
mv blas0.o ~/libcpp/$ARCH/blas0.o
#
echo "Library installed as ~/libcpp/$ARCH/blas0.o"
