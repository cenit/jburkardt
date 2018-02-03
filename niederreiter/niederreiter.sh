#!/bin/bash
#
cp niederreiter.hpp /$HOME/include
#
g++ -c -I /$HOME/include niederreiter.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling niederreiter.cpp"
  exit
fi
#
mv niederreiter.o ~/libcpp/$ARCH/niederreiter.o
#
echo "Library installed as ~/libcpp/$ARCH/niederreiter.o"
