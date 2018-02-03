#!/bin/bash
#
cp sphere_monte_carlo.hpp /$HOME/include
#
g++ -c -I /$HOME/include sphere_monte_carlo.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sphere_monte_carlo.cpp"
  exit
fi
#
mv sphere_monte_carlo.o ~/libcpp/$ARCH/sphere_monte_carlo.o
#
echo "Library installed as ~/libcpp/$ARCH/sphere_monte_carlo.o"
