#!/bin/bash
#
cp disk_integrals.hpp /$HOME/include
#
g++ -c -I/$HOME/include disk_integrals.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling disk_integrals.cpp"
  exit
fi
#
mv disk_integrals.o ~/libcpp/$ARCH/disk_integrals.o
#
echo "Library installed as ~/libcpp/$ARCH/disk_integrals.o"
