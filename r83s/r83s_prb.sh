#!/bin/bash
#
g++ -c -I/$HOME/include r83s_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83s_prb.cpp"
  exit
fi
#
g++ r83s_prb.o /$HOME/libcpp/$ARCH/r83s.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r83s_prb.o."
  exit
fi
#
rm r83s_prb.o
#
mv a.out r83s_prb
./r83s_prb > r83s_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r83s_prb."
  exit
fi
rm r83s_prb
#
echo "Program output written to r83s_prb_output.txt"
