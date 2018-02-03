#!/bin/bash
#
g++ -c bisection_integer_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling bisection_integer_prb.cpp"
  exit
fi
#
g++ bisection_integer_prb.o /$HOME/libcpp/$ARCH/bisection_integer.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading bisection_integer_prb.o."
  exit
fi
#
rm bisection_integer_prb.o
#
mv a.out bisection_integer_prb
./bisection_integer_prb > bisection_integer_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running bisection_integer_prb."
  exit
fi
rm bisection_integer_prb
#
echo "Program output written to bisection_integer_prb_output.txt"
