#!/bin/bash
#
g++ -c -I/$HOME/include line_integrals_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling line_integrals_prb.cpp"
  exit
fi
#
g++ line_integrals_prb.o /$HOME/libcpp/$ARCH/line_integrals.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading line_integrals_prb.o."
  exit
fi
#
rm line_integrals_prb.o
#
mv a.out line_integrals_prb
./line_integrals_prb > line_integrals_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running line_integrals_prb."
  exit
fi
rm line_integrals_prb
#
echo "Program output written to line_integrals_prb_output.txt"
