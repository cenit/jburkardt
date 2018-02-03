#!/bin/bash
#
cp ball_integrals.hpp /$HOME/include
#
g++ -c -I/$HOME/include ball_integrals.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ball_integrals.cpp"
  exit
fi
#
mv ball_integrals.o ~/libcpp/$ARCH/ball_integrals.o
#
echo "Library installed as ~/libcpp/$ARCH/ball_integrals.o"
