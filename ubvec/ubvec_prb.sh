#!/bin/bash
#
g++ -c -I/$HOME/include ubvec_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling ubvec_prb.cpp"
  exit
fi
#
g++ -o ubvec_prb ubvec_prb.o /$HOME/libcpp/$ARCH/ubvec.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading ubvec_prb.o."
  exit
fi
#
rm ubvec_prb.o
#
./ubvec_prb > ubvec_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running ubvec_prb."
  exit
fi
rm ubvec_prb
#
echo "Program output written to ubvec_prb_output.txt"
