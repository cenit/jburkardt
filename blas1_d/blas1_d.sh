#!/bin/bash
#
cp blas1_d.hpp $HOME/include
#
g++ -c -I $HOME/include blas1_d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling blas1_d.cpp"
  exit
fi
#
mv blas1_d.o ~/libcpp/$ARCH/blas1_d.o
#
echo "Library installed as ~/libcpp/$ARCH/blas1_d.o"
