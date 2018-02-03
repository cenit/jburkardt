#!/bin/bash
#
g++ -c -I/$HOME/include sftpack_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling sftpack_prb.cpp"
  exit
fi
#
g++ sftpack_prb.o /$HOME/libcpp/sftpack.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading sftpack_prb.o."
  exit
fi
#
rm sftpack_prb.o
#
mv a.out sftpack_prb
./sftpack_prb > sftpack_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running sftpack_prb."
  exit
fi
rm sftpack_prb
#
echo "Program output written to sftpack_prb_output.txt"
