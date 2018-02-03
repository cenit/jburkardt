#!/bin/bash
#
g++ -c -I/$HOME/include linpack_s_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling linpack_s_prb.cpp"
  exit
fi
#
g++ linpack_s_prb.o /$HOME/libcpp/$ARCH/linpack_s.o /$HOME/libcpp/$ARCH/blas1_s.o /$HOME/libcpp/$ARCH/blas0.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading linpack_s_prb.o."
  exit
fi
#
rm linpack_s_prb.o
#
mv a.out linpack_s_prb
./linpack_s_prb > linpack_s_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running linpack_s_prb."
  exit
fi
rm linpack_s_prb
#
echo "Program output written to linpack_s_prb_output.txt"
