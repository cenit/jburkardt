#!/bin/bash
#
g++ -c -I/$HOME/include r8vm_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8vm_prb.cpp"
  exit
fi
#
g++ r8vm_prb.o /$HOME/libcpp/$ARCH/r8vm.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8vm_prb.o."
  exit
fi
#
rm r8vm_prb.o
#
mv a.out r8vm_prb
./r8vm_prb > r8vm_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8vm_prb."
  exit
fi
rm r8vm_prb
#
echo "Program output written to r8vm_prb_output.txt"
