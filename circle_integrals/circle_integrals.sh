#!/bin/bash
#
cp circle_integrals.hpp /$HOME/include
#
g++ -c -I /$HOME/include circle_integrals.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling circle_integrals.cpp"
  exit
fi
#
mv circle_integrals.o ~/libcpp/$ARCH/circle_integrals.o
#
echo "Library installed as ~/libcpp/$ARCH/circle_integrals.o"
