#!/bin/bash
#
cp cube_monte_carlo.hpp /$HOME/include
#
g++ -c -I /$HOME/include cube_monte_carlo.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cube_monte_carlo.cpp"
  exit
fi
#
mv cube_monte_carlo.o ~/libcpp/$ARCH/cube_monte_carlo.o
#
echo "Library installed as ~/libcpp/$ARCH/cube_monte_carlo.o"
