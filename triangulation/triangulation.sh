#!/bin/bash
#
cp triangulation.hpp /$HOME/include
#
g++ -c -I /$HOME/include triangulation.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangulation.cpp"
  exit
fi
#
mv triangulation.o ~/libcpp/$ARCH/triangulation.o
#
echo "Library installed as ~/libcpp/$ARCH/triangulation.o"
