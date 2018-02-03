#!/bin/bash
#
g++ -c -I/$HOME/include r8sto_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8sto_prb.cpp"
  exit
fi
#
g++ r8sto_prb.o /$HOME/libcpp/$ARCH/r8sto.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8sto_prb.o."
  exit
fi
#
rm r8sto_prb.o
#
mv a.out r8sto_prb
./r8sto_prb > r8sto_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8sto_prb."
  exit
fi
rm r8sto_prb
#
echo "Program output written to r8sto_prb_output.txt"
