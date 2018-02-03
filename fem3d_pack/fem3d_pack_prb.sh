#!/bin/bash
#
g++ -c -I/$HOME/include fem3d_pack_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling fem3d_pack_prb.cpp"
  exit
fi
#
g++ fem3d_pack_prb.o /$HOME/libcpp/$ARCH/fem3d_pack.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading fem3d_pack_prb.o."
  exit
fi
#
rm fem3d_pack_prb.o
#
mv a.out fem3d_pack_prb
./fem3d_pack_prb > fem3d_pack_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running fem3d_pack_prb."
  exit
fi
rm fem3d_pack_prb
#
echo "Program output written to fem3d_pack_prb_output.txt"
