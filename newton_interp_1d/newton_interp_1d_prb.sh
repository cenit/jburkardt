#!/bin/bash
#
g++ -c -I/$HOME/include newton_interp_1d_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling newton_interp_1d_prb.cpp"
  exit
fi
#
g++ -o newton_interp_1d_prb newton_interp_1d_prb.o /$HOME/libcpp/$ARCH/newton_interp_1d.o  /$HOME/libcpp/$ARCH/test_interp.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading newton_interp_1d_prb.o."
  exit
fi
#
rm newton_interp_1d_prb.o
#
./newton_interp_1d_prb > newton_interp_1d_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running newton_interp_1d_prb."
  exit
fi
rm newton_interp_1d_prb
#
echo "Program output written to newton_interp_1d_prb_output.txt"
