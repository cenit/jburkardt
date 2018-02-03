#!/bin/bash
#
cp cell.hpp /$HOME/include
#
g++ -c -I /$HOME/include cell.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cell.cpp"
  exit
fi
#
mv cell.o ~/libcpp/$ARCH/cell.o
#
echo "Library installed as ~/libcpp/$ARCH/cell.o"
