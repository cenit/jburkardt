#!/bin/bash
#
cp rkf45.hpp /$HOME/include
#
g++ -c -I /$HOME/include rkf45.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling rkf45.cpp"
  exit
fi
#
mv rkf45.o ~/libcpp/$ARCH/rkf45.o
#
echo "Library installed as ~/libcpp/$ARCH/rkf45.o"
