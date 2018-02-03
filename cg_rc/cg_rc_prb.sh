#!/bin/bash
#
g++ -c -I/$HOME/include cg_rc_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cg_rc_prb.cpp"
  exit
fi
#
g++ cg_rc_prb.o /$HOME/libcpp/$ARCH/cg_rc.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading cg_rc_prb.o."
  exit
fi
#
rm cg_rc_prb.o
#
mv a.out cg_rc_prb
./cg_rc_prb > cg_rc_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running cg_rc_prb."
  exit
fi
rm cg_rc_prb
#
echo "Program output written to cg_rc_prb_output.txt"
