#!/bin/bash
#
g++ -c analemma.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling analemma.cpp"
  exit
fi
#
g++ analemma.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading analemma.o"
  exit
fi
#
rm analemma.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/analemma
#
echo "Executable installed as ~/bincpp/$ARCH/analemma"
