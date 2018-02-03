#!/bin/bash
#
cp latin_edge.hpp /$HOME/include
#
g++ -c -I /$HOME/include latin_edge.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling latin_edge.cpp"
  exit
fi
#
mv latin_edge.o ~/libcpp/$ARCH/latin_edge.o
#
echo "Library installed as ~/libcpp/$ARCH/latin_edge.o"
