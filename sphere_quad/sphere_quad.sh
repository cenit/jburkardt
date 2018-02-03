#!/bin/bash
#
cp sphere_quad.hpp /$HOME/include
#
g++ -c -I /$HOME/include sphere_quad.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sphere_quad.cpp"
  exit
fi
#
mv sphere_quad.o ~/libcpp/$ARCH/sphere_quad.o
#
echo "Library installed as ~/libcpp/$ARCH/sphere_quad.o"
