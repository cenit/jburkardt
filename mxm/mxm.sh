#!/bin/bash
#
g++ -c mxm.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling mxm.cpp"
  exit
fi
#
g++ mxm.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading mxm.o."
  exit
fi
#
rm mxm.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/mxm
#
echo "Executable installed as ~/bincpp/$ARCH/mxm"
