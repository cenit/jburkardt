#!/bin/bash
#
cp pwl_approx_1d.hpp /$HOME/include
#
g++ -c -I/$HOME/include pwl_approx_1d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pwl_approx_1d.cpp"
  exit
fi
#
mv pwl_approx_1d.o ~/libcpp/$ARCH/pwl_approx_1d.o
#
echo "Library installed as ~/libcpp/$ARCH/pwl_approx_1d.o"
