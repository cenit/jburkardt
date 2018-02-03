#!/bin/bash
#
g++ -c damped_sine.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling damped_sine.cpp"
  exit
fi
#
g++ damped_sine.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking damped_sine.o"
  exit
fi
#
rm damped_sine.o
mv a.out ~/bincpp/$ARCH/damped_sine
#
echo "Executable installed as ~/bincpp/$ARCH/damped_sine"
