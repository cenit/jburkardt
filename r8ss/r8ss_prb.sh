#! /bin/bash
#
g++ -c -I/$HOME/include r8ss_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8ss_prb.cpp"
  exit
fi
#
g++ r8ss_prb.o /$HOME/libcpp/$ARCH/r8ss.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8ss_prb.o."
  exit
fi
#
rm r8ss_prb.o
#
mv a.out r8ss_prb
./r8ss_prb > r8ss_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8ss_prb."
  exit
fi
rm r8ss_prb
#
echo "Program output written to r8ss_prb_output.txt"
