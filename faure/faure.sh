#!/bin/bash
#
cp faure.hpp /$HOME/include
#
g++ -c -I /$HOME/include faure.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling faure.cpp"
  exit
fi
#
mv faure.o ~/libcpp/$ARCH/faure.o
#
echo "Library installed as ~/libcpp/$ARCH/faure.o"
