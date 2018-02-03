#!/bin/bash
#
cp burgers_solution.hpp /$HOME/include
#
g++ -c burgers_solution.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling burgers_solution.cpp"
  exit
fi
#
mv burgers_solution.o ~/libcpp/$ARCH/burgers_solution.o
#
echo "Library installed as ~/libcpp/$ARCH/burgers_solution.o"
