#!/bin/bash
#
g++ -c tsp_brute.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling tsp_brute.cpp"
  exit
fi
#
g++ tsp_brute.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading tsp_brute.o"
  exit
fi
rm tsp_brute.o
#
mv a.out ~/bincpp/$ARCH/tsp_brute
#
echo "Executable installed as ~/bincpp/$ARCH/tsp_brute"
