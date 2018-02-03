#!/bin/bash
#
g++ -c -I/$HOME/include toms178_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms178_prb.cpp"
  exit
fi
#
g++ toms178_prb.o /$HOME/libcpp/$ARCH/toms178.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading toms178_prb.o."
  exit
fi
#
rm toms178_prb.o
#
mv a.out toms178_prb
./toms178_prb > toms178_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running toms178_prb."
  exit
fi
rm toms178_prb
#
echo "Program output written to toms178_prb_output.txt"
