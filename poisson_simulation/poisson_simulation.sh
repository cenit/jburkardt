#!/bin/bash
#
cp poisson_simulation.hpp /$HOME/include
#
g++ -c -I /$HOME/include poisson_simulation.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling poisson_simulation.cpp"
  exit
fi
#
mv poisson_simulation.o ~/libcpp/$ARCH/poisson_simulation.o
#
echo "Library installed as ~/libcpp/$ARCH/poisson_simulation.o"
