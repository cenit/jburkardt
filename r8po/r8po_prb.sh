#!/bin/bash
#
g++ -c -I/$HOME/include r8po_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8po_prb.cpp"
  exit
fi
#
g++ r8po_prb.o /$HOME/libcpp/$ARCH/r8po.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8po_prb.o."
  exit
fi
#
rm r8po_prb.o
#
mv a.out r8po_prb
./r8po_prb > r8po_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8po_prb."
  exit
fi
rm r8po_prb
#
echo "Program output written to r8po_prb_output.txt"
