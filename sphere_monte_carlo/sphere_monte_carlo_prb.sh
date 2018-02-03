#!/bin/bash
#
g++ -c -I/$HOME/include sphere_monte_carlo_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sphere_monte_carlo_prb.cpp"
  exit
fi
#
g++ sphere_monte_carlo_prb.o /$HOME/libcpp/$ARCH/sphere_monte_carlo.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sphere_monte_carlo_prb.o."
  exit
fi
#
rm sphere_monte_carlo_prb.o
#
mv a.out sphere_monte_carlo_prb
./sphere_monte_carlo_prb > sphere_monte_carlo_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running sphere_monte_carlo_prb."
  exit
fi
rm sphere_monte_carlo_prb
#
echo "Program output written to sphere_monte_carlo_prb_output.txt"
