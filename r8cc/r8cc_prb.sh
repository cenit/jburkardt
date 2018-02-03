#!/bin/bash
#
g++ -c -I/$HOME/include r8cc_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8cc_prb.cpp"
  exit
fi
#
g++ r8cc_prb.o /$HOME/libcpp/$ARCH/r8cc.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8cc_prb.o."
  exit
fi
#
rm r8cc_prb.o
#
mv a.out r8cc_prb
./r8cc_prb > r8cc_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8cc_prb."
  exit
fi
rm r8cc_prb
#
echo "Program output written to r8cc_prb_output.txt"
