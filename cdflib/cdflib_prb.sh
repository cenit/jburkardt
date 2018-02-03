#!/bin/bash
#
g++ -c -I/$HOME/include cdflib_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling cdflib_prb.cpp"
  exit
fi
#
g++ cdflib_prb.o /$HOME/libcpp/$ARCH/cdflib.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading cdflib_prb.o."
  exit
fi
#
rm cdflib_prb.o
#
mv a.out cdflib_prb
./cdflib_prb > cdflib_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running cdflib_prb."
  exit
fi
rm cdflib_prb
#
echo "Program output written to cdflib_prb_output.txt"
