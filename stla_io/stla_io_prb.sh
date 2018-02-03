#!/bin/bash
#
g++ -c -I/$HOME/include stla_io_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling stla_io_prb.cpp"
  exit
fi
#
g++ stla_io_prb.o /$HOME/libcpp/$ARCH/stla_io.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading stla_io_prb.o."
  exit
fi
#
rm stla_io_prb.o
#
mv a.out stla_io_prb
./stla_io_prb > stla_io_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running stla_io_prb."
  exit
fi
rm stla_io_prb
#
echo "Program output written to stla_io_prb_output.txt"
