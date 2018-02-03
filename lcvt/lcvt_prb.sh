#!/bin/bash
#
g++ -c -I/$HOME/include lcvt_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling lcvt_prb.cpp"
  exit
fi
#
g++ lcvt_prb.o /$HOME/libcpp/$ARCH/lcvt.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading lcvt_prb.o."
  exit
fi
#
rm lcvt_prb.o
#
mv a.out lcvt_prb
./lcvt_prb > lcvt_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running lcvt_prb."
  exit
fi
rm lcvt_prb
#
echo "Program output written to lcvt_prb_output.txt"
