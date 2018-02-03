#!/bin/bash
#
g++ -c gfarit.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling gfarit.cpp"
  exit
fi
#
g++ gfarit.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading gfarit.o."
  exit
fi
#
rm gfarit.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/gfarit
#
echo "Executable installed as ~/bincpp/$ARCH/gfarit"
