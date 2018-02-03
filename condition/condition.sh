#!/bin/bash
#
cp condition.hpp /$HOME/include
#
g++ -c -I /$HOME/include condition.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling condition.cpp"
  exit
fi
#
mv condition.o ~/libcpp/$ARCH/condition.o
#
echo "Library installed as ~/libcpp/$ARCH/condition.o"
