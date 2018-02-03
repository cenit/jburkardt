#!/bin/bash
#
cp fem3d_pack.hpp /$HOME/include
#
g++ -c -I /$HOME/include fem3d_pack.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem3d_pack.cpp"
  exit
fi
#
mv fem3d_pack.o ~/libcpp/$ARCH/fem3d_pack.o
#
echo "Library installed as ~/libcpp/$ARCH/fem3d_pack.o"
