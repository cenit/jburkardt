#! /bin/bash
#
g++ -c -I/$HOME/include black_scholes_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling black_scholes_prb.cpp."
  exit
fi
#
g++ black_scholes_prb.o /$HOME/libcpp/$ARCH/black_scholes.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading black_scholes_prb.o."
  exit
fi
#
rm black_scholes_prb.o
#
mv a.out black_scholes_prb
./black_scholes_prb > black_scholes_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running black_scholes_prb."
  exit
fi
rm black_scholes_prb
#
echo "Program output written to black_scholes_prb_output.txt"
