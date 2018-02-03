#!/bin/bash
#
cp pgma_io.hpp /$HOME/include
#
g++ -c -I /$HOME/include pgma_io.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pgma_io.cpp"
  exit
fi
#
mv pgma_io.o ~/libcpp/$ARCH/pgma_io.o
#
echo "Library installed as ~/libcpp/$ARCH/pgma_io.o"
