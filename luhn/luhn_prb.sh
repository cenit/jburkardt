#!/bin/bash
#
g++ -c -I/$HOME/include luhn_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling luhn_prb.cpp"
  exit
fi
#
g++ -o luhn_prb luhn_prb.o /$HOME/libcpp/$ARCH/luhn.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading luhn_prb.o."
  exit
fi
#
rm luhn_prb.o
#
./luhn_prb > luhn_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running luhn_prb."
  exit
fi
rm luhn_prb
#
echo "Program output written to luhn_prb_output.txt"
