#!/bin/bash
#
cp sobol.hpp /$HOME/include
#
g++ -c -I /$HOME/include sobol.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sobol.cpp"
  exit
fi
#
mv sobol.o ~/libcpp/$ARCH/sobol.o
#
echo "Library installed as ~/libcpp/$ARCH/sobol.o"
