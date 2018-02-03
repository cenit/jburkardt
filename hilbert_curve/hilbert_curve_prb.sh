#!/bin/bash
#
g++ -c -I/$HOME/include hilbert_curve_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling hilbert_curve_prb.cpp"
  exit
fi
#
g++ -o hilbert_curve_prb hilbert_curve_prb.o /$HOME/libcpp/$ARCH/hilbert_curve.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading hilbert_curve_prb.o."
  exit
fi
#
rm hilbert_curve_prb.o
#
./hilbert_curve_prb > hilbert_curve_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running hilbert_curve_prb."
  exit
fi
rm hilbert_curve_prb
#
echo "Program output written to hilbert_curve_prb_output.txt"
