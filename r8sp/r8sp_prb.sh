#!/bin/bash
#
g++ -c -I/$HOME/include r8sp_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8sp_prb.cpp"
  exit
fi
#
g++ r8sp_prb.o /$HOME/libcpp/$ARCH/r8sp.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8sp_prb.o."
  exit
fi
#
rm r8sp_prb.o
#
mv a.out r8sp_prb
./r8sp_prb > r8sp_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8sp_prb."
  exit
fi
rm r8sp_prb
#
echo "Program output written to r8sp_prb_output.txt"
