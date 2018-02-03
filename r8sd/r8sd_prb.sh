#! /bin/bash
#
g++ -c -I/$HOME/include r8sd_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8sd_prb.cpp"
  exit
fi
#
g++ r8sd_prb.o /$HOME/libcpp/$ARCH/r8sd.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8sd_prb.o."
  exit
fi
#
rm r8sd_prb.o
#
mv a.out r8sd_prb
./r8sd_prb > r8sd_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8sd_prb."
  exit
fi
rm r8sd_prb
#
echo "Program output written to r8sd_prb_output.txt"
