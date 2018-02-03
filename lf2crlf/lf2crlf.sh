#!/bin/bash
#
g++ -c lf2crlf.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lf2crlf.cpp"
  exit
fi
#
g++ lf2crlf.o
if [ $? -ne 0 ]; then
  echo "Errors linking and loading lf2crlf.o."
  exit
fi
#
rm lf2crlf.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/lf2crlf
#
echo "Executable installed as ~/bincpp/$ARCH/lf2crlf."
