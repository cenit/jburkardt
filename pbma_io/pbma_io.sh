#!/bin/bash
#
cp pbma_io.hpp /$HOME/include
#
g++ -c -I /$HOME/include pbma_io.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pbma_io.cpp"
  exit
fi
#
mv pbma_io.o ~/libcpp/$ARCH/pbma_io.o
#
echo "Library installed as ~/libcpp/$ARCH/pbma_io.o"
