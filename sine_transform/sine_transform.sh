#!/bin/bash
#
cp sine_transform.hpp /$HOME/include
#
g++ -c -I /$HOME/include sine_transform.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sine_transform.cpp"
  exit
fi
#
mv sine_transform.o ~/libcpp/$ARCH/sine_transform.o
#
echo "Library installed as ~/libcpp/$ARCH/sine_transform.o"
