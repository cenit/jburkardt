#!/bin/bash
#
g++ -c fem2d_poisson.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem2d_poisson.cpp"
  exit
fi
#
mv fem2d_poisson.o ~/libcpp/$ARCH
#
echo "Partial program installed as ~/libcpp/$ARCH/fem2d_poisson.o"
