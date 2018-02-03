#!/bin/bash
#
cp exactness.hpp /$HOME/include
#
g++ -c -I/$HOME/include exactness.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling exactness.cpp"
  exit
fi
#
mv exactness.o ~/libcpp/$ARCH/exactness.o
#
echo "Library installed as ~/libcpp/$ARCH/exactness.o"
