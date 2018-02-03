#!/bin/bash
#
cp quadmom.hpp /$HOME/include
#
g++ -c -I/$HOME/include quadmom.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling quadmom.cpp"
  exit
fi
#
mv quadmom.o ~/libcpp/$ARCH/quadmom.o
#
echo "Library installed as ~/libcpp/$ARCH/quadmom.o"
