#!/bin/bash
#
cp stochastic_heat2d.hpp /$HOME/include
#
g++ -c -I/$HOME/include stochastic_heat2d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling stochastic_heat2d.cpp"
  exit
fi
#
mv stochastic_heat2d.o ~/libcpp/$ARCH/stochastic_heat2d.o
#
echo "Library installed as ~/libcpp/$ARCH/stochastic_heat2d.o"
