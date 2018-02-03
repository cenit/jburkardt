#!/bin/bash
#
g++ -c -I/$HOME/include circle_integrals_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling circle_integrals_prb.cpp"
  exit
fi
#
g++ circle_integrals_prb.o /$HOME/libcpp/$ARCH/circle_integrals.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading circle_integrals_prb.o."
  exit
fi
#
rm circle_integrals_prb.o
#
mv a.out circle_integrals_prb
./circle_integrals_prb > circle_integrals_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running circle_integrals_prb."
  exit
fi
rm circle_integrals_prb
#
echo "Program output written to circle_integrals_prb_output.txt"
