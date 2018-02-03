#!/bin/bash
#
cp random_data.hpp /$HOME/include
#
g++ -c random_data.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling random_data.cpp"
  exit
fi
#
mv random_data.o ~/libcpp/$ARCH/random_data.o
#
echo "Library installed as ~/libcpp/$ARCH/random_data.o"
