#!/bin/bash
#
cp lattice_rule.hpp /$HOME/include
#
g++ -c -I /$HOME/include lattice_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lattice_rule.cpp"
  exit
fi
#
mv lattice_rule.o ~/libcpp/$ARCH/lattice_rule.o
#
echo "Library installed as ~/libcpp/$ARCH/lattice_rule.o"
