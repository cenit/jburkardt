#!/bin/bash
#
cp sandia_cubature.hpp /$HOME/include
#
g++ -c -I /$HOME/include sandia_cubature.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sandia_cubature.cpp"
  exit
fi
#
mv sandia_cubature.o ~/libcpp/$ARCH/sandia_cubature.o
#
echo "Library installed as ~/libcpp/$ARCH/sandia_cubature.o"
