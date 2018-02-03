#!/bin/bash
#
g++ -c -I/$HOME/include gaussqr_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling gaussqr_prb.cpp"
  exit
fi
#
g++ gaussqr_prb.o -L/$HOME/libcpp/$ARCH -lgaussqr -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading gaussqr_prb.o"
  exit
fi
#
rm gaussqr_prb.o
#
mv a.out gaussqr_prb
./gaussqr_prb > gaussqr_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running gaussqr_prb."
  exit
fi
rm gaussqr_prb
#
echo "Program output written to gaussqr_prb_output.txt"
