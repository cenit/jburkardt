#!/bin/bash
#
g++ -c -I/$HOME/include chebyshev_polynomial_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling chebyshev_polynomial_prb.cpp"
  exit
fi
#
g++ chebyshev_polynomial_prb.o /$HOME/libcpp/$ARCH/chebyshev_polynomial.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading chebyshev_polynomial_prb.o."
  exit
fi
#
rm chebyshev_polynomial_prb.o
#
mv a.out chebyshev_polynomial_prb
./chebyshev_polynomial_prb > chebyshev_polynomial_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running chebyshev_polynomial_prb."
  exit
fi
rm chebyshev_polynomial_prb
#
echo "Program output written to chebyshev_polynomial_prb_output.txt"
