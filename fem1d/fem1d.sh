#!/bin/bash
#
g++ -c fem1d.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem1d.cpp"
  exit
fi
#
g++ fem1d.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading fem1d.o."
  exit
fi
#
rm fem1d.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/fem1d
#
echo "Executable installed as ~/bincpp/$ARCH/fem1d"
