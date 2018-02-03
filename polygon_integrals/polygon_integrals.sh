#!/bin/bash
#
cp polygon_integrals.hpp /$HOME/include
#
g++ -c -I/$HOME/include polygon_integrals.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling polygon_integrals.cpp"
  exit
fi
#
mv polygon_integrals.o ~/libcpp/$ARCH/polygon_integrals.o
#
echo "Library installed as ~/libcpp/$ARCH/polygon_integrals.o"
