#!/bin/bash
#
cp collatz_recursive.hpp /$HOME/include
#
g++ -c collatz_recursive.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling collatz_recursive.cpp"
  exit
fi
#
mv collatz_recursive.o ~/libcpp/$ARCH/collatz_recursive.o
#
echo "Library installed as ~/libcpp/$ARCH/collatz_recursive.o"
