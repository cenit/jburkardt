#!/bin/bash
#
g++ -c -I/$HOME/include r8ltt_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ltt_prb.cpp"
  exit
fi
#
g++ -o r8ltt_prb r8ltt_prb.o /$HOME/libcpp/$ARCH/r8ltt.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8ltt_prb.o."
  exit
fi
#
rm r8ltt_prb.o
#
./r8ltt_prb > r8ltt_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8ltt_prb."
  exit
fi
rm r8ltt_prb
#
echo "Program output written to r8ltt_prb_output.txt"
