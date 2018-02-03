#!/bin/bash
#
g++ -c -I/$HOME/include log_normal_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling log_normal_prb.cpp"
  exit
fi
#
g++ log_normal_prb.o /$HOME/libcpp/$ARCH/log_normal.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading log_normal_prb.o."
  exit
fi
#
rm log_normal_prb.o
#
mv a.out log_normal_prb
./log_normal_prb > log_normal_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running log_normal_prb."
  exit
fi
rm log_normal_prb
#
echo "Program output written to log_normal_prb_output.txt"
