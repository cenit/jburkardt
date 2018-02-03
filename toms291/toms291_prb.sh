#!/bin/bash
#
g++ -c -I/$HOME/include toms291_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling toms291_prb.cpp"
  exit
fi
#
g++ toms291_prb.o /$HOME/libcpp/$ARCH/toms291.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading toms291_prb.o."
  exit
fi
#
rm toms291_prb.o
#
mv a.out toms291_prb
./toms291_prb > toms291_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running toms291_prb."
  exit
fi
rm toms291_prb
#
echo "Program output written to toms291_prb_output.txt"
