#!/bin/bash
#
cp hypersphere_integrals.hpp /$HOME/include
#
g++ -c -I /$HOME/include hypersphere_integrals.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling hypersphere_integrals.cpp"
  exit
fi
#
mv hypersphere_integrals.o ~/libcpp/$ARCH/hypersphere_integrals.o
#
echo "Library installed as ~/libcpp/$ARCH/hypersphere_integrals.o"
