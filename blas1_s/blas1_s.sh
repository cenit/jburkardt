#!/bin/bash
#
cp blas1_s.hpp $HOME/include
#
g++ -c -I $HOME/include blas1_s.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling blas1_s.cpp"
  exit
fi
#
mv blas1_s.o ~/libcpp/$ARCH/blas1_s.o
#
echo "Library installed as ~/libcpp/$ARCH/blas1_s.o"
