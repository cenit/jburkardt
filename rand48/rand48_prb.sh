#!/bin/bash
#
g++ -c -I/$HOME/include rand48_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling rand48_prb.cpp"
  exit
fi
#
g++ rand48_prb.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading rand48_prb.o."
  exit
fi
#
rm rand48_prb.o
#
mv a.out rand48_prb
./rand48_prb > rand48_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running rand48_prb."
  exit
fi
rm rand48_prb
#
echo "Program output written to rand48_prb_output.txt"
