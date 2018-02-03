#! /bin/bash
#
g++ -c -I/$HOME/include r8bb_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8bb_prb.cpp"
  exit
fi
#
g++ r8bb_prb.o /$HOME/libcpp/$ARCH/r8bb.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8bb_prb.o."
  exit
fi
#
rm r8bb_prb.o
#
mv a.out r8bb_prb
./r8bb_prb > r8bb_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8bb_prb."
  exit
fi
rm r8bb_prb
#
echo "Program output written to r8bb_prb_output.txt"
