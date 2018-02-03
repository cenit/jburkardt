#!/bin/bash
#
g++ -c -I/$HOME/include caesar_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling caesar_prb.cpp"
  exit
fi
#
g++ caesar_prb.o /$HOME/libcpp/$ARCH/caesar.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading caesar_prb.o"
  exit
fi
#
rm caesar_prb.o
#
mv a.out caesar_prb
./caesar_prb > caesar_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running caesar_prb."
  exit
fi
rm caesar_prb
#
echo "Program output written to caesar_prb_output.txt"
