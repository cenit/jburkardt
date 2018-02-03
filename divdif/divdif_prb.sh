#!/bin/bash
#
g++ -c -I/$HOME/include divdif_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling divdif_prb.cpp"
  exit
fi
#
g++ divdif_prb.o /$HOME/libcpp/$ARCH/divdif.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading divdif_prb.o."
  exit
fi
#
rm divdif_prb.o
#
mv a.out divdif_prb
./divdif_prb > divdif_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running divdif_prb."
  exit
fi
rm divdif_prb
#
echo "Program output written to divdif_prb_output.txt"
