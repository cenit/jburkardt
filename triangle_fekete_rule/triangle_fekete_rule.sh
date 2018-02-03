#!/bin/bash
#
cp triangle_fekete_rule.hpp /$HOME/include
#
g++ -c -I /$HOME/include triangle_fekete_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling triangle_fekete_rule.cpp"
  exit
fi
#
mv triangle_fekete_rule.o ~/libcpp/$ARCH/triangle_fekete_rule.o
#
echo "Library installed as ~/libcpp/$ARCH/triangle_fekete_rule.o"
