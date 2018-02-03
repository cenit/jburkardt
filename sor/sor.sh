#!/bin/bash
#
cp sor.hpp /$HOME/include
#
g++ -c -I /$HOME/include sor.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sor.cpp"
  exit
fi
#
mv sor.o ~/libcpp/$ARCH/sor.o
#
echo "Library installed as ~/libcpp/$ARCH/sor.o"
