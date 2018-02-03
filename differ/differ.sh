#!/bin/bash
#
cp differ.hpp /$HOME/include
#
g++ -c -I/$HOME/include differ.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling differ.cpp"
  exit
fi
#
mv differ.o ~/libcpp/$ARCH/differ.o
#
echo "Library installed as ~/libcpp/$ARCH/differ.o"
