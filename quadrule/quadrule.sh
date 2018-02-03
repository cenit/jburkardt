#!/bin/bash
#
cp quadrule.hpp /$HOME/include
#
g++ -c -I /$HOME/include quadrule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling quadrule.cpp"
  exit
fi
#
mv quadrule.o ~/libcpp/$ARCH/quadrule.o
#
echo "Library installed as ~/libcpp/$ARCH/quadrule.o"
