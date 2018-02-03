#!/bin/bash
#
cp sandia_rules.hpp /$HOME/include
#
g++ -c -I /$HOME/include sandia_rules.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sandia_rules.cpp"
  exit
fi
#
mv sandia_rules.o ~/libcpp/$ARCH/sandia_rules.o
#
echo "Library installed as ~/libcpp/$ARCH/sandia_rules.o"
