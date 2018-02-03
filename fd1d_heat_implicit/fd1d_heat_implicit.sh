#!/bin/bash
#
g++ -c fd1d_heat_implicit.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fd1d_heat_implicit.cpp"
  exit
fi
#
g++ fd1d_heat_implicit.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading fd1d_heat_implicit.o"
  exit
fi
rm fd1d_heat_implicit.o
#
mv a.out ~/bincpp/$ARCH/fd1d_heat_implicit
#
echo "Executable installed as ~/bincpp/$ARCH/fd1d_heat_implicit"
