#!/bin/bash
#
cp circle_rule.hpp /$HOME/include
#
g++ -c -I /$HOME/include circle_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling circle_rule.cpp"
  exit
fi
#
mv circle_rule.o ~/libcpp/$ARCH/circle_rule.o
#
echo "Library installed as ~/libcpp/$ARCH/circle_rule.o"
