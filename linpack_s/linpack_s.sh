#!/bin/bash
#
cp linpack_s.hpp /$HOME/include
#
g++ -c -I /$HOME/include linpack_s.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling linpack_s.cpp"
  exit
fi
#
mv linpack_s.o ~/libcpp/$ARCH/linpack_s.o
#
echo "Library installed as ~/libcpp/$ARCH/linpack_s.o"
