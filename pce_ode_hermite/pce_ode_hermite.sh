#!/bin/bash
#
cp pce_ode_hermite.hpp /$HOME/include
#
g++ -c -I /$HOME/include pce_ode_hermite.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pce_ode_hermite.cpp"
  exit
fi
#
mv pce_ode_hermite.o ~/libcpp/$ARCH/pce_ode_hermite.o
#
echo "Library installed as ~/libcpp/$ARCH/pce_ode_hermite.o"
