#!/bin/bash
#
cp set_theory.hpp /$HOME/include
#
g++ -c -I /$HOME/include set_theory.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling set_theory.cpp"
  exit
fi
#
mv set_theory.o ~/libcpp/$ARCH/set_theory.o
#
echo "Library installed as ~/libcpp/$ARCH/set_theory.o"
