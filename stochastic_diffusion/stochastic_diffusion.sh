#!/bin/bash
#
cp stochastic_diffusion.hpp /$HOME/include
#
g++ -c -I/$HOME/include stochastic_diffusion.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling stochastic_diffusion.cpp"
  exit
fi
#
mv stochastic_diffusion.o ~/libcpp/$ARCH/stochastic_diffusion.o
#
echo "Library installed as ~/libcpp/$ARCH/stochastic_diffusion.o"
