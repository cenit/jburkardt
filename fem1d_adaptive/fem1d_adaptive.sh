#!/bin/bash
#
g++ -c fem1d_adaptive.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem1d_adaptive.cpp"
  exit
fi
#
g++ fem1d_adaptive.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading fem1d_adaptive.o."
  exit
fi
#
rm fem1d_adaptive.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/fem1d_adaptive
#
echo "Executable installed as ~/bincpp/$ARCH/fem1d_adaptive"
