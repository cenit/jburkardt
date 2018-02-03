#!/bin/bash
#
g++ -c legendre_rule.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling legendre_rule.cpp"
  exit
fi
#
g++ legendre_rule.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading legendre_rule.o"
  exit
fi
rm legendre_rule.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/legendre_rule
#
echo "Executable installed as ~/bincpp/$ARCH/legendre_rule"
