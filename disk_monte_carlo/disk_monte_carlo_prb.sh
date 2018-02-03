#!/bin/bash
#
g++ -c -I/$HOME/include disk_monte_carlo_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling disk_monte_carlo_prb.cpp"
  exit
fi
#
g++ disk_monte_carlo_prb.o /$HOME/libcpp/$ARCH/disk_monte_carlo.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading disk_monte_carlo_prb.o."
  exit
fi
#
rm disk_monte_carlo_prb.o
#
mv a.out disk_monte_carlo_prb
./disk_monte_carlo_prb > disk_monte_carlo_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running disk_monte_carlo_prb."
  exit
fi
rm disk_monte_carlo_prb
#
echo "Program output written to disk_monte_carlo_prb_output.txt"
