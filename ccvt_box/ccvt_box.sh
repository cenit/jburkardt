#!/bin/bash
#
g++ -c ccvt_box.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ccvt_box.cpp"
  exit
fi
#
g++ ccvt_box.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading ccvt_box.o"
  exit
fi
rm ccvt_box.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/ccvt_box
#
echo "Executable installed as ~/bincpp/$ARCH/ccvt_box"
