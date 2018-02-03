#!/bin/bash
#
g++ -c -I/$HOME/include r8to_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8to_prb.cpp"
  exit
fi
#
g++ r8to_prb.o /$HOME/libcpp/$ARCH/r8to.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8to_prb.o."
  exit
fi
#
rm r8to_prb.o
#
mv a.out r8to_prb
./r8to_prb > r8to_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8to_prb."
  exit
fi
rm r8to_prb
#
echo "Program output written to r8to_prb_output.txt"
