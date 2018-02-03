#! /bin/bash
#
g++ -c -I/$HOME/include r8sr_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8sr_prb.cpp"
  exit
fi
#
g++ r8sr_prb.o /$HOME/libcpp/$ARCH/r8sr.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8sr_prb.o."
  exit
fi
#
rm r8sr_prb.o
#
mv a.out r8sr_prb
./r8sr_prb > r8sr_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8sr_prb."
  exit
fi
rm r8sr_prb
#
echo "Program output written to r8sr_prb_output.txt"
