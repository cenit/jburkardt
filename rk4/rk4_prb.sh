#!/bin/bash
#
g++ -c -I/$HOME/include rk4_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling rk4_prb.cpp"
  exit
fi
#
g++ rk4_prb.o /$HOME/libcpp/$ARCH/rk4.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading rk4_prb.o."
  exit
fi
#
rm rk4_prb.o
#
mv a.out rk4_prb
./rk4_prb > rk4_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running rk4_prb."
  exit
fi
rm rk4_prb
#
echo "Program output written to rk4_prb_output.txt"
