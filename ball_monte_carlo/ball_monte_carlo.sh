#!/bin/bash
#
cp ball_monte_carlo.hpp /$HOME/include
#
g++ -c -I/$HOME/include ball_monte_carlo.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ball_monte_carlo.cpp"
  exit
fi
#
mv ball_monte_carlo.o ~/libcpp/$ARCH/ball_monte_carlo.o
#
echo "Library installed as ~/libcpp/$ARCH/ball_monte_carlo.o"
