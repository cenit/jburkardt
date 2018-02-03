#!/bin/bash
#
g++ -c -I/$HOME/include gegenbauer_cc_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling gegenbauer_cc_prb.cpp"
  exit
fi
#
g++ -o gegenbauer_cc_prb gegenbauer_cc_prb.o /$HOME/libcpp/$ARCH/gegenbauer_cc.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading gegenbauer_cc_prb.o."
  exit
fi
#
rm gegenbauer_cc_prb.o
#
./gegenbauer_cc_prb > gegenbauer_cc_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running gegenbauer_cc_prb."
  exit
fi
rm gegenbauer_cc_prb
#
echo "Program output written to gegenbauer_cc_prb_output.txt"
