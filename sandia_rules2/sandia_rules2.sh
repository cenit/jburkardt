#!/bin/bash
#
cp sandia_rules2.hpp /$HOME/include
#
g++ -c -I /$HOME/include sandia_rules2.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sandia_rules2.cpp"
  exit
fi
#
mv sandia_rules2.o ~/libcpp/$ARCH/sandia_rules2.o
#
echo "Library installed as ~/libcpp/$ARCH/sandia_rules2.o"
