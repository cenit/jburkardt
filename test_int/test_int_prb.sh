#!/bin/bash
#
g++ -c -I/$HOME/include test_int_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling test_int_prb.cpp."
  exit
fi
#
g++ test_int_prb.o /$HOME/libcpp/$ARCH/test_int.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading test_int_prb.o."
  exit
fi
#
rm test_int_prb.o
#
mv a.out test_int_prb
./test_int_prb > test_int_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running test_int_prb."
  exit
fi
rm test_int_prb
#
echo "Program output written to test_int_prb_output.txt"
