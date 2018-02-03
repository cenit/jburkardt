#!/bin/bash
#
cp square_integrals.hpp /$HOME/include
#
g++ -c -I /$HOME/include square_integrals.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling square_integrals.cpp"
  exit
fi
#
mv square_integrals.o ~/libcpp/$ARCH/square_integrals.o
#
echo "Library installed as ~/libcpp/$ARCH/square_integrals.o"
