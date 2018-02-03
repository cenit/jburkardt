#! /bin/bash
#
g++ -c -I/$HOME/include r8pbl_prb.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling r8pbl_prb.cpp"
  exit
fi
#
g++ r8pbl_prb.o /$HOME/libcpp/$ARCH/r8pbl.o -lm
if [ $? -ne 0 ]; then
  echo "Errors linking and loading r8pbl_prb.o."
  exit
fi
#
rm r8pbl_prb.o
#
mv a.out r8pbl_prb
./r8pbl_prb > r8pbl_prb_output.txt
if [ $? -ne 0 ]; then
  echo "Errors running r8pbl_prb."
  exit
fi
rm r8pbl_prb
#
echo "Program output written to r8pbl_prb_output.txt"
