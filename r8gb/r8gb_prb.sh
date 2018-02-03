#! /bin/bash
#
g++ -c -I/$HOME/include r8gb_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8gb_prb.cpp"
  exit
fi
#
g++ r8gb_prb.o /$HOME/libcpp/$ARCH/r8gb.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8gb_prb.o."
  exit
fi
#
rm r8gb_prb.o
#
mv a.out r8gb_prb
./r8gb_prb > r8gb_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8gb_prb."
  exit
fi
rm r8gb_prb
#
echo "Program output written to r8gb_prb_output.txt"
