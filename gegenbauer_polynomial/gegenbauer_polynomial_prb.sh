#!/bin/bash
#
g++ -c -I/$HOME/include gegenbauer_polynomial_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling gegenbauer_polynomial_prb.cpp"
  exit
fi
#
g++ gegenbauer_polynomial_prb.o /$HOME/libcpp/$ARCH/gegenbauer_polynomial.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading gegenbauer_polynomial_prb.o"
  exit
fi
#
rm gegenbauer_polynomial_prb.o
#
mv a.out gegenbauer_polynomial_prb
./gegenbauer_polynomial_prb > gegenbauer_polynomial_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running gegenbauer_polynomial_prb."
  exit
fi
rm gegenbauer_polynomial_prb
#
echo "Program output written to gegenbauer_polynomial_prb_output.txt"
