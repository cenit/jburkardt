#!/bin/bash
#
g++ -c -I/$HOME/include bank_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling bank_prb.cpp"
  exit
fi
#
g++ -o bank_prb bank_prb.o /$HOME/libcpp/$ARCH/bank.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading bank_prb.o."
  exit
fi
#
rm bank_prb.o
#
./bank_prb > bank_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running bank_prb."
  exit
fi
rm bank_prb
#
echo "Program output written to bank_prb_output.txt"
