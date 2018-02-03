#! /bin/bash
#
g++ -c -I/$HOME/include r8cbb_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8cbb_prb.cpp"
  exit
fi
#
g++ r8cbb_prb.o /$HOME/libcpp/$ARCH/r8cbb.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8cbb_prb.o."
  exit
fi
#
rm r8cbb_prb.o
#
mv a.out r8cbb_prb
./r8cbb_prb > r8cbb_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8cbb_prb."
  exit
fi
rm r8cbb_prb
#
echo "Program output written to r8cbb_prb_output.txt"
