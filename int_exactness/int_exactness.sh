#!/bin/bash
#
g++ -c int_exactness.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling int_exactness.cpp"
  exit
fi
#
g++ int_exactness.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading int_exactness.o"
  exit
fi
rm int_exactness.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/int_exactness
#
echo "Executable installed as ~/bincpp/$ARCH/int_exactness"
