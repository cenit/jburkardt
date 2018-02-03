#!/bin/bash
#
g++ -c -I/$HOME/include wavelet_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling wavelet_prb.cpp"
  exit
fi
#
g++ wavelet_prb.o /$HOME/libcpp/$ARCH/wavelet.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading wavelet_prb.o."
  exit
fi
#
rm wavelet_prb.o
#
mv a.out wavelet_prb
./wavelet_prb > wavelet_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running wavelet_prb."
  exit
fi
rm wavelet_prb
#
echo "Program output written to wavelet_prb_output.txt"
