#!/bin/bash
#
g++ -c -I/$HOME/include l4lib_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling l4lib_prb.cpp"
  exit
fi
#
g++ l4lib_prb.o /$HOME/libcpp/l4lib.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading l4lib_prb.o"
  exit
fi
#
rm l4lib_prb.o
#
mv a.out l4lib_prb
./l4lib_prb > l4lib_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running l4lib_prb."
  exit
fi
rm l4lib_prb
#
echo "Program output written to l4lib_prb_output.txt"
