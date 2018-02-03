#!/bin/bash
#
cp fd1d_bvp.hpp /$HOME/include
#
g++ -c -I /$HOME/include fd1d_bvp.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fd1d_bvp.cpp"
  exit
fi
#
mv fd1d_bvp.o ~/libcpp/$ARCH/fd1d_bvp.o
#
echo "Library installed as ~/libcpp/$ARCH/fd1d_bvp.o"
