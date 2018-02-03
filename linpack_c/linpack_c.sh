#!/bin/bash
#
cp linpack_c.hpp /$HOME/include
#
g++ -c -I /$HOME/include linpack_c.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling linpack_c.cpp"
  exit
fi
#
mv linpack_c.o ~/libcpp/$ARCH/linpack_c.o
#
echo "Library installed as ~/libcpp/$ARCH/linpack_c.o"
