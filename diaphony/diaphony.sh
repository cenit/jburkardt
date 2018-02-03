#!/bin/bash
#
g++ -c diaphony.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling diaphony.cpp"
  exit
fi
#
g++ diaphony.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading diaphony.o"
  exit
fi
rm diaphony.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/diaphony
#
echo "Executable installed as ~/bincpp/$ARCH/diaphony"
