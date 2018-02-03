#!/bin/bash
#
g++ -c -I/$HOME/include sor_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sor_prb.cpp"
  exit
fi
#
g++ sor_prb.o /$HOME/libcpp/$ARCH/sor.o ~/libc/$ARCH/gnuplot_i.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sor_prb.o."
  exit
fi
#
rm sor_prb.o
#
mv a.out sor_prb
./sor_prb > sor_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running sor_prb."
  exit
fi
rm sor_prb
#
echo "Program output written to sor_prb_output.txt"
