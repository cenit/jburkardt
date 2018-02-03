#!/bin/bash
#
g++ -c -I/$HOME/include cordic_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cordic_prb.cpp"
  exit
fi
#
g++ cordic_prb.o /$HOME/libcpp/$ARCH/cordic.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading cordic_prb.o."
  exit
fi
#
rm cordic_prb.o
#
mv a.out cordic_prb
./cordic_prb > cordic_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running cordic_prb."
  exit
fi
rm cordic_prb
#
echo "Program output written to cordic_prb_output.txt"
