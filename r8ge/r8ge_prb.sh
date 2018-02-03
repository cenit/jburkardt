#!/bin/bash
#
g++ -c -I/$HOME/include r8ge_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ge_prb.cpp"
  exit
fi
#
g++ r8ge_prb.o /$HOME/libcpp/$ARCH/r8ge.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8ge_prb.o."
  exit
fi
#
rm r8ge_prb.o
#
mv a.out r8ge_prb
./r8ge_prb > r8ge_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8ge_prb."
  exit
fi
rm r8ge_prb
#
echo "Program output written to r8ge_prb_output.txt"
