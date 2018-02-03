#!/bin/bash
#
g++ -c -I/$HOME/include r8ut_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ut_prb.cpp"
  exit
fi
#
g++ r8ut_prb.o /$HOME/libcpp/$ARCH/r8ut.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8ut_prb.o."
  exit
fi
#
rm r8ut_prb.o
#
mv a.out r8ut_prb
./r8ut_prb > r8ut_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8ut_prb."
  exit
fi
rm r8ut_prb
#
echo "Program output written to r8ut_prb_output.txt"
