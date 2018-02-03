#!/bin/bash
#
cp fem2d_pack.hpp /$HOME/include
#
g++ -c -I /$HOME/include fem2d_pack.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem2d_pack.cpp"
  exit
fi
#
mv fem2d_pack.o ~/libcpp/$ARCH/fem2d_pack.o
#
echo "Library installed as ~/libcpp/$ARCH/fem2d_pack.o"
