#!/bin/bash
#
cp bank.hpp /$HOME/include
#
g++ -c -I/$HOME/include bank.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling bank.cpp"
  exit
fi
#
mv bank.o ~/libcpp/$ARCH/bank.o
#
echo "Library installed as ~/libcpp/$ARCH/bank.o"
