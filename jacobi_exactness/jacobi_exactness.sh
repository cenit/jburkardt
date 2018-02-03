#!/bin/bash
#
g++ -c jacobi_exactness.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling jacobi_exactness.cpp"
  exit
fi
#
g++ jacobi_exactness.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading jacobi_exactness.o"
  exit
fi
rm jacobi_exactness.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/jacobi_exactness
#
echo "Executable installed as ~/bincpp/$ARCH/jacobi_exactness"
