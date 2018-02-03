#!/bin/bash
#
cp rcm.hpp /$HOME/include
#
g++ -c -I /$HOME/include rcm.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling rcm.cpp"
  exit
fi
#
mv rcm.o ~/libcpp/$ARCH/rcm.o
#
echo "Library installed as ~/libcpp/$ARCH/rcm.o"
