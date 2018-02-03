#!/bin/bash
#
g++ -c -I/$HOME/include r83_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83_prb.cpp"
  exit
fi
#
g++ r83_prb.o /$HOME/libcpp/$ARCH/r83.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r83_prb.o."
  exit
fi
#
rm r83_prb.o
#
mv a.out r83_prb
./r83_prb > r83_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r83_prb."
  exit
fi
rm r83_prb
#
echo "Program output written to r83_prb_output.txt"
