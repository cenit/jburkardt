#!/bin/bash
#
cp pyramid_monte_carlo.hpp /$HOME/include
#
g++ -c -I /$HOME/include pyramid_monte_carlo.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pyramid_monte_carlo.cpp"
  exit
fi
#
mv pyramid_monte_carlo.o ~/libcpp/$ARCH/pyramid_monte_carlo.o
#
echo "Library installed as ~/libcpp/$ARCH/pyramid_monte_carlo.o"
