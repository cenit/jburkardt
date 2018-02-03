#! /bin/bash
#
g++ -c -I/$HOME/include r8ci_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ci_prb.cpp"
  exit
fi
#
g++ r8ci_prb.o /$HOME/libcpp/$ARCH/r8ci.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8ci_prb.o."
  exit
fi
#
rm r8ci_prb.o
#
mv a.out r8ci_prb
./r8ci_prb > r8ci_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8ci_prb."
  exit
fi
rm r8ci_prb
#
echo "Program output written to r8ci_prb_output.txt"
