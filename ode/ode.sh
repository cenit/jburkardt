#!/bin/bash
#
cp ode.hpp /$HOME/include
#
g++ -c -I /$HOME/include ode.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ode.cpp."
  exit
fi
#
mv ode.o ~/libcpp/$ARCH/ode.o
#
echo "Library installed as ~/libcpp/$ARCH/ode.o"
