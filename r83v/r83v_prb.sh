#!/bin/bash
#
g++ -c -I/$HOME/include r83v_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r83v_prb.cpp"
  exit
fi
#
g++ -o r83v_prb r83v_prb.o /$HOME/libcpp/$ARCH/r83v.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r83v_prb.o."
  exit
fi
#
rm r83v_prb.o
#
./r83v_prb > r83v_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r83v_prb."
  exit
fi
rm r83v_prb
#
echo "Program output written to r83v_prb_output.txt"
