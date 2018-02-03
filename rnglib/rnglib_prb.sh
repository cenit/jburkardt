#!/bin/bash
#
g++ -c -I/$HOME/include rnglib_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling rnglib_prb.cpp"
  exit
fi
#
g++ rnglib_prb.o /$HOME/libcpp/$ARCH/rnglib.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading rnglib_prb.o."
  exit
fi
#
rm rnglib_prb.o
#
mv a.out rnglib_prb
./rnglib_prb > rnglib_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running rnglib_prb."
  exit
fi
rm rnglib_prb
#
echo "Program output written to rnglib_prb_output.txt"
