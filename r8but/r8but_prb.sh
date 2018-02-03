#!/bin/bash
#
g++ -c -I/$HOME/include r8but_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8but_prb.cpp"
  exit
fi
#
g++ r8but_prb.o /$HOME/libcpp/$ARCH/r8but.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8but_prb.o."
  exit
fi
#
rm r8but_prb.o
#
mv a.out r8but_prb
./r8but_prb > r8but_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8but_prb."
  exit
fi
rm r8but_prb
#
echo "Program output written to r8but_prb_output.txt"
