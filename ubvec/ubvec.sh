#!/bin/bash
#
cp ubvec.hpp /$HOME/include
#
g++ -c -I/$HOME/include ubvec.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ubvec.cpp"
  exit
fi
#
mv ubvec.o ~/libcpp/$ARCH/ubvec.o
#
echo "Library installed as ~/libcpp/$ARCH/ubvec.o"
