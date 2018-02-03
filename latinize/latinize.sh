#!/bin/bash
#
cp latinize.hpp /$HOME/include
#
g++ -c -I /$HOME/include latinize.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling latinize.cpp"
  exit
fi
#
mv latinize.o ~/libcpp/$ARCH/latinize.o
#
echo "Library installed as ~/libcpp/$ARCH/latinize.o"
