#!/bin/bash
#
cp laplacian.hpp /$HOME/include
#
g++ -c -I/$HOME/include laplacian.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling laplacian.cpp"
  exit
fi
#
mv laplacian.o ~/libcpp/$ARCH/laplacian.o
#
echo "Library installed as ~/libcpp/$ARCH/laplacian.o"
