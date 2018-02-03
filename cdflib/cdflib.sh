#!/bin/bash
#
cp cdflib.hpp /$HOME/include
#
g++ -c -I /$HOME/include cdflib.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cdflib.cpp"
  exit
fi
#
mv cdflib.o ~/libcpp/$ARCH/cdflib.o
#
echo "Library installed as ~/libcpp/$ARCH/cdflib.o"
