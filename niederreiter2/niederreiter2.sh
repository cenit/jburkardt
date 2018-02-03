#!/bin/bash
#
cp niederreiter2.hpp /$HOME/include
#
g++ -c -I /$HOME/include niederreiter2.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling niederreiter2.cpp"
  exit
fi
#
mv niederreiter2.o ~/libcpp/$ARCH/niederreiter2.o
#
echo "Library installed as ~/libcpp/$ARCH/niederreiter2.o"
