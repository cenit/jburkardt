#!/bin/bash
#
cp r8row.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8row.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8row.cpp"
  exit
fi
#
mv r8row.o ~/libcpp/$ARCH/r8row.o
#
echo "Library installed as ~/libcpp/$ARCH/r8row.o"
