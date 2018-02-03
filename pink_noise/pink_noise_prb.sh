#!/bin/bash
#
g++ -c -I/$HOME/include pink_noise_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling pink_noise_prb.cpp"
  exit
fi
#
g++ pink_noise_prb.o /$HOME/libcpp/$ARCH/pink_noise.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading pink_noise_prb.o."
  exit
fi
#
rm pink_noise_prb.o
#
mv a.out pink_noise_prb
./pink_noise_prb > pink_noise_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running pink_noise_prb."
  exit
fi
rm pink_noise_prb
#
echo "Program output written to pink_noise_prb_output.txt"
