#!/bin/bash
#
g++ -c -I/$HOME/include r8utt_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8utt_prb.cpp"
  exit
fi
#
g++ -o r8utt_prb r8utt_prb.o /$HOME/libcpp/$ARCH/r8utt.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8utt_prb.o."
  exit
fi
#
rm r8utt_prb.o
#
./r8utt_prb > r8utt_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8utt_prb."
  exit
fi
rm r8utt_prb
#
echo "Program output written to r8utt_prb_output.txt"
