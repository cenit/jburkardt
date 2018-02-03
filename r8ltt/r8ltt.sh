#!/bin/bash
#
cp r8ltt.hpp /$HOME/include
#
g++ -c -I/$HOME/include r8ltt.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ltt.cpp"
  exit
fi
#
mv r8ltt.o ~/libcpp/$ARCH/r8ltt.o
#
echo "Library installed as ~/libcpp/$ARCH/r8ltt.o"
