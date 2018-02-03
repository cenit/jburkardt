#!/bin/bash
#
cp stochastic_rk.hpp /$HOME/include
#
g++ -c -I /$HOME/include stochastic_rk.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling stochastic_rk.cpp"
  exit
fi
#
mv stochastic_rk.o ~/libcpp/$ARCH/stochastic_rk.o
#
echo "Library installed as ~/libcpp/$ARCH/stochastic_rk.o"
