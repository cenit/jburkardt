#!/bin/bash
#
cp sparse_count.hpp /$HOME/include
#
g++ -c -I /$HOME/include sparse_count.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sparse_count.cpp"
  exit
fi
#
mv sparse_count.o ~/libcpp/$ARCH/sparse_count.o
#
echo "Library installed as ~/libcpp/$ARCH/sparse_count.o"
