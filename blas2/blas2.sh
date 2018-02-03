#!/bin/bash
#
cp blas2.hpp $HOME/include
#
g++ -c -I$HOME/include blas2.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling blas2.cpp"
  exit
fi
#
mv blas2.o ~/libcpp/$ARCH/blas2.o
#
echo "Library installed as ~/libcpp/$ARCH/blas2.o"
