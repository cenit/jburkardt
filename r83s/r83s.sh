#!/bin/bash
#
cp r83s.hpp /$HOME/include
#
g++ -c -I /$HOME/include r83s.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83s.cpp"
  exit
fi
#
mv r83s.o ~/libcpp/$ARCH/r83s.o
#
echo "Library installed as ~/libcpp/$ARCH/r83s.o"
