#!/bin/bash
#
g++ -c -I/$HOME/include hypersphere_integrals_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling hypersphere_integrals_prb.cpp"
  exit
fi
#
g++ hypersphere_integrals_prb.o /$HOME/libcpp/$ARCH/hypersphere_integrals.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading hypersphere_integrals_prb.o."
  exit
fi
#
rm hypersphere_integrals_prb.o
#
mv a.out hypersphere_integrals_prb
./hypersphere_integrals_prb > hypersphere_integrals_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running hypersphere_integrals_prb."
  exit
fi
rm hypersphere_integrals_prb
#
echo "Program output written to hypersphere_integrals_prb_output.txt"
