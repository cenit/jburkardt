#!/bin/bash
#
g++ -c -I/$HOME/include r8lt_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8lt_prb.cpp"
  exit
fi
#
g++ r8lt_prb.o /$HOME/libcpp/$ARCH/r8lt.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8lt_prb.o."
  exit
fi
#
rm r8lt_prb.o
#
mv a.out r8lt_prb
./r8lt_prb > r8lt_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8lt_prb."
  exit
fi
rm r8lt_prb
#
echo "Program output written to r8lt_prb_output.txt"
