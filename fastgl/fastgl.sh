#!/bin/bash
#
cp fastgl.hpp /$HOME/include
#
g++ -c -I /$HOME/include fastgl.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fastgl.cpp"
  exit
fi
#
mv fastgl.o ~/libcpp/$ARCH/fastgl.o
#
echo "Library installed as ~/libcpp/$ARCH/fastgl.o"
