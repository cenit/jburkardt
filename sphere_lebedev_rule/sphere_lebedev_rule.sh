#!/bin/bash
#
cp sphere_lebedev_rule.hpp /$HOME/include
#
g++ -c -I /$HOME/include sphere_lebedev_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sphere_lebedev_rule.cpp"
  exit
fi
#
mv sphere_lebedev_rule.o ~/libcpp/$ARCH/sphere_lebedev_rule.o
#
echo "Library installed as ~/libcpp/$ARCH/sphere_lebedev_rule.o"
