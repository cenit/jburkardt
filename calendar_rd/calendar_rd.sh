#!/bin/bash
#
g++ -c -I /$HOME/include calendar_rd.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling calendar_rd.cpp"
  exit
fi
#
g++ calendar_rd.o -lm 
if [ $? -ne 0 ]; then
  echo "Errors linking and loading calendar_rd.o."
  exit
fi
rm calendar_rd.o
#
chmod ugo+x a.out
mv a.out ~/bincpp/$ARCH/calendar_rd
#
echo "Executable installed as ~/bincpp/$ARCH/calendar_rd"
