#!/bin/bash
#
cp alpert_rule.hpp /$HOME/include
#
g++ -c -I/$HOME/include alpert_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling alpert_rule.cpp"
  exit
fi
#
mv alpert_rule.o ~/libcpp/$ARCH/alpert_rule.o
#
echo "Library installed as ~/libcpp/$ARCH/alpert_rule.o"
