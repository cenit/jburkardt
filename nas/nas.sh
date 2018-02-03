#!/bin/bash
#
g++ -c nas.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling nas.cpp"
  exit
fi
#
g++ nas.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading nas.o"
  exit
fi
rm nas.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/nas
#
echo "Executable installed as ~/bincpp/$ARCH/nas"
