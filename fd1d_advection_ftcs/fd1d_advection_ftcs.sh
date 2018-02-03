#!/bin/bash
#
g++ -c fd1d_advection_ftcs.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fd1d_advection_ftcs.cpp"
  exit
fi
#
g++ fd1d_advection_ftcs.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking fd1d_advection_ftcs.o"
  exit
fi
#
rm fd1d_advection_ftcs.o
mv a.out ~/bincpp/$ARCH/fd1d_advection_ftcs
#
echo "Executable installed as ~/bincpp/$ARCH/fd1d_advection_ftcs"
