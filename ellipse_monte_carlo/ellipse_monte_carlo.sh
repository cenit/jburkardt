#!/bin/bash
#
cp ellipse_monte_carlo.hpp /$HOME/include
#
g++ -c -I /$HOME/include ellipse_monte_carlo.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ellipse_monte_carlo.cpp"
  exit
fi
#
mv ellipse_monte_carlo.o ~/libcpp/$ARCH/ellipse_monte_carlo.o
#
echo "Library installed as ~/libcpp/$ARCH/ellipse_monte_carlo.o"
