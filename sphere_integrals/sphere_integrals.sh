#!/bin/bash
#
cp sphere_integrals.hpp /$HOME/include
#
g++ -c -I/$HOME/include sphere_integrals.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sphere_integrals.cpp"
  exit
fi
#
mv sphere_integrals.o ~/libcpp/$ARCH/sphere_integrals.o
#
echo "Library installed as ~/libcpp/$ARCH/sphere_integrals.o"
