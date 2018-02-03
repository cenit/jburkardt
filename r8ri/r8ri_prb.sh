#! /bin/bash
#
g++ -c -I/$HOME/include r8ri_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ri_prb.cpp"
  exit
fi
#
g++ r8ri_prb.o /$HOME/libcpp/$ARCH/r8ri.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8ri_prb.o."
  exit
fi
#
rm r8ri_prb.o
#
mv a.out r8ri_prb
./r8ri_prb > r8ri_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8ri_prb."
  exit
fi
rm r8ri_prb
#
echo "Program output written to r8ri_prb_output.txt"
