#!/bin/bash
#
g++ -c -I/$HOME/include sobol_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sobol_prb.cpp"
  exit
fi
#
g++ sobol_prb.o /$HOME/libcpp/$ARCH/sobol.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sobol_prb.o."
  exit
fi
#
rm sobol_prb.o
#
mv a.out sobol_prb
./sobol_prb > sobol_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running sobol_prb."
  exit
fi
rm sobol_prb
#
echo "Program output written to sobol_prb_output.txt"
