#!/bin/bash
#
g++ -c -I/$HOME/include r8blt_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8blt_prb.cpp"
  exit
fi
#
g++ r8blt_prb.o /$HOME/libcpp/$ARCH/r8blt.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8blt_prb.o."
  exit
fi
#
rm r8blt_prb.o
#
mv a.out r8blt_prb
./r8blt_prb > r8blt_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8blt_prb."
  exit
fi
rm r8blt_prb
#
echo "Program output written to r8blt_prb_output.txt"
