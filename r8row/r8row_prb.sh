#!/bin/bash
#
g++ -c -I/$HOME/include r8row_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8row_prb.cpp"
  exit
fi
#
g++ r8row_prb.o /$HOME/libcpp/$ARCH/r8row.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8row_prb.o"
  exit
fi
#
rm r8row_prb.o
#
mv a.out r8row_prb
./r8row_prb > r8row_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8row_prb."
  exit
fi
rm r8row_prb
#
echo "Program output written to r8row_prb_output.txt"
