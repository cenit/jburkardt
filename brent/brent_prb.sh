#!/bin/bash
#
g++ -c -I/$HOME/include brent_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling brent_prb.cpp"
  exit
fi
#
g++ brent_prb.o /$HOME/libcpp/$ARCH/brent.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading brent_prb.o."
  exit
fi
#
rm brent_prb.o
#
mv a.out brent_prb
./brent_prb > brent_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running brent_prb."
  exit
fi
rm brent_prb
#
echo "Program output written to brent_prb_output.txt"
