#!/bin/bash
#
g++ -c -I/$HOME/include sphere_integrals_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sphere_integrals_prb.cpp"
  exit
fi
#
g++ sphere_integrals_prb.o /$HOME/libcpp/$ARCH/sphere_integrals.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sphere_integrals_prb.o."
  exit
fi
#
rm sphere_integrals_prb.o
#
mv a.out sphere_integrals_prb
./sphere_integrals_prb > sphere_integrals_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running sphere_integrals_prb."
  exit
fi
rm sphere_integrals_prb
#
echo "Program output written to sphere_integrals_prb_output.txt"
