#!/bin/bash
#
cp r8vm.hpp /$HOME/include
#
g++ -c -I /$HOME/include r8vm.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8vm.cpp"
  exit
fi
#
mv r8vm.o ~/libcpp/$ARCH/r8vm.o
#
echo "Library installed as ~/libcpp/$ARCH/r8vm.o"
