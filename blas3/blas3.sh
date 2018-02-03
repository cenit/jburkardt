#!/bin/bash
#
cp blas3.hpp /$HOME/include
#
g++ -c -I$HOME/include blas3.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling blas3.cpp."
  exit
fi
#
mv blas3.o ~/libcpp/$ARCH/blas3.o
#
echo "Library installed as ~/libcpp/$ARCH/blas3.o"
