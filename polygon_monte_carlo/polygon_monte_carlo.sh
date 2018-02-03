#!/bin/bash
#
cp polygon_monte_carlo.hpp /$HOME/include
#
g++ -c -I/$HOME/include polygon_monte_carlo.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling polygon_monte_carlo.cpp"
  exit
fi
#
mv polygon_monte_carlo.o ~/libcpp/$ARCH/polygon_monte_carlo.o
#
echo "Library installed as ~/libcpp/$ARCH/polygon_monte_carlo.o"
