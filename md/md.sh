#!/bin/bash
#
g++ -c md.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling md.cpp"
  exit
fi
#
g++ md.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading md.o."
  exit
fi
#
rm md.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/md
#
echo "Executable installed as ~/bincpp/$ARCH/md"
