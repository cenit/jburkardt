#!/bin/bash
#
cp fem1d_pack.hpp /$HOME/include
#
g++ -c -I /$HOME/include fem1d_pack.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem1d_pack.cpp"
  exit
fi
#
mv fem1d_pack.o ~/libcpp/$ARCH/fem1d_pack.o
#
echo "Library installed as ~/libcpp/$ARCH/fem1d_pack.o"
