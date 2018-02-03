#!/bin/bash
#
g++ -c -I/$HOME/include r8s3_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8s3_prb.cpp"
  exit
fi
#
g++ r8s3_prb.o /$HOME/libcpp/$ARCH/r8s3.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8s3_prb.o"
  exit
fi
#
rm r8s3_prb.o
#
mv a.out r8s3_prb
./r8s3_prb > r8s3_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8s3_prb."
  exit
fi
rm r8s3_prb
#
echo "Program output written to r8s3_prb_output.txt"
