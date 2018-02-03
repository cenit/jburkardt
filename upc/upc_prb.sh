#!/bin/bash
#
g++ -c -I/$HOME/include upc_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling upc_prb.cpp"
  exit
fi
#
g++ -o upc_prb upc_prb.o /$HOME/libcpp/$ARCH/upc.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading upc_prb.o."
  exit
fi
#
rm upc_prb.o
#
./upc_prb > upc_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running upc_prb."
  exit
fi
rm upc_prb
#
echo "Program output written to upc_prb_output.txt"
