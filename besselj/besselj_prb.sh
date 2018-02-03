#!/bin/bash
#
g++ -c -I/$HOME/include besselj_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling besselj_prb.cpp"
  exit
fi
#
g++ -o besselj_prb besselj_prb.o /$HOME/libcpp/$ARCH/besselj.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading besselj_prb.o."
  exit
fi
#
rm besselj_prb.o
#
./besselj_prb > besselj_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running besselj_prb."
  exit
fi
rm besselj_prb
#
echo "Program output written to besselj_prb_output.txt"
